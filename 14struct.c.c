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

struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass* item;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
char* get_none_generics_name(char* class_name);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
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
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function

// body function
void output_struct(struct sClass* klass, struct sInfo* info){
char* name_0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_1;
_Bool existance_generics_2;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_3;
struct tuple2$2char$phsType$ph* it_6;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_9=0;
struct sType* type_10=0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value14 = (void*)0;
    if(    info->no_output_come_code    ) {
        return;
    }
    if(    list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0    ) {
        return;
    }
    name_0=(char*)come_increment_ref_count(klass->mName);
    buf_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer*"))));
    buffer_append_format(buf_1,"struct %s\n{\n",klass->mName);
    existance_generics_2=(_Bool)0;
    for(    o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_6=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_3))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_3))    ;    it_6=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_3))    ){
        multiple_assign_var1=it_6;
        name_9=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_10=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_generics_class(type_10,info)        ) {
            existance_generics_2=(_Bool)1;
        }
        type_10->mStatic=(_Bool)0;
        buffer_append_str(buf_1,"    ");
        buffer_append_str(buf_1,((char*)(__right_value2=make_define_var(type_10,name_9,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(buf_1,";\n");
        (name_9 = come_decrement_ref_count(name_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass->mAttribute==((void*)0)    ) {
        buffer_append_str(buf_1,"};\n");
    }
    else {
        buffer_append_format(buf_1,"} %s;\n",klass->mAttribute);
    }
    if(    (_condtional_value_X1=(((struct buffer*)(__right_value5=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value4=__builtin_string(name_0))))))==((void*)0)&&!existance_generics_2)),    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    come_call_finalizer(buffer_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X1    ) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_0)),(struct buffer*)come_increment_ref_count(buf_1));
    }
    (name_0 = come_decrement_ref_count(name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_4;
struct tuple2$2char$phsType$ph* __result_obj__1;
struct tuple2$2char$phsType$ph* __result_obj__2;
struct tuple2$2char$phsType$ph* result_5;
struct tuple2$2char$phsType$ph* __result_obj__3;
result_4 = (void*)0;
result_5 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_4,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__1 = result_4;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_5,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__3 = result_5;
    return __result_obj__3;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_7;
struct tuple2$2char$phsType$ph* __result_obj__4;
struct tuple2$2char$phsType$ph* __result_obj__5;
struct tuple2$2char$phsType$ph* result_8;
struct tuple2$2char$phsType$ph* __result_obj__6;
result_7 = (void*)0;
result_8 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_7,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__4 = result_7;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_8,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__6 = result_8;
    return __result_obj__6;
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
struct list_item$1sType$ph* it_11;
struct list_item$1sType$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        prev_it_12=it_11;
        it_11=it_11->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_13;
struct list_item$1sNode$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
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

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_17;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_18;
    it_17=self->head;
    while(    it_17!=((void*)0)    ) {
        prev_it_18=it_17;
        it_17=it_17->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_19;
unsigned int hash_20;
unsigned int it_21;
struct buffer* __result_obj__7;
struct buffer* __result_obj__8;
struct buffer* __result_obj__9;
struct buffer* __result_obj__10;
default_value_19 = (void*)0;
    memset(&default_value_19,0,sizeof(struct buffer*));
    hash_20=string_get_hash_key(((char*)key))%self->size;
    it_21=hash_20;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_21]        ) {
            if(            string_equals(self->keys[it_21],key)            ) {
                __result_obj__7 = (struct buffer*)come_increment_ref_count(self->items[it_21]);
                come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__7;
            }
            it_21++;
            if(            it_21>=self->size            ) {
                it_21=0;
            }
            else if(            it_21==hash_20            ) {
                __result_obj__8 = (struct buffer*)come_increment_ref_count(default_value_19);
                come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct buffer*)come_increment_ref_count(default_value_19);
            come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct buffer*)come_increment_ref_count(default_value_19);
    come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_22;
unsigned int hash_23;
unsigned int it_24;
struct buffer* __result_obj__11;
struct buffer* __result_obj__12;
struct buffer* __result_obj__13;
struct buffer* __result_obj__14;
default_value_22 = (void*)0;
    memset(&default_value_22,0,sizeof(struct buffer*));
    hash_23=string_get_hash_key(((char*)key))%self->size;
    it_24=hash_23;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_24]        ) {
            if(            string_equals(self->keys[it_24],key)            ) {
                __result_obj__11 = (struct buffer*)come_increment_ref_count(self->items[it_24]);
                come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__11;
            }
            it_24++;
            if(            it_24>=self->size            ) {
                it_24=0;
            }
            else if(            it_24==hash_23            ) {
                __result_obj__12 = (struct buffer*)come_increment_ref_count(default_value_22);
                come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct buffer*)come_increment_ref_count(default_value_22);
            come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct buffer*)come_increment_ref_count(default_value_22);
    come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_42;
unsigned int it_43;
_Bool same_key_exist_60;
char* it2_63;
struct map$2char$phbuffer$ph* __result_obj__36;
    if(    self->len*10>=self->size    ) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_43]        ) {
            if(            string_equals(self->keys[it_43],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_43]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    self->keys[it_43]=key;
                }
                if(                1                ) {
                    come_call_finalizer(buffer_finalize, self->items[it_43], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_43]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_43]=item;
                }
                break;
            }
            it_43++;
            if(            it_43>=self->size            ) {
                it_43=0;
            }
            else if(            it_43==hash_42            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_43]=(_Bool)1;
            if(            1            ) {
                self->keys[it_43]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_43]=key;
            }
            if(            1            ) {
                self->items[it_43]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_43]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_60=(_Bool)0;
    for(    it2_63=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_63=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_63,key)        ) {
            same_key_exist_60=(_Bool)1;
        }
    }
    if(    !same_key_exist_60    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__36 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_25;
void* __right_value6 = (void*)0;
char** keys_26;
void* __right_value7 = (void*)0;
struct buffer** items_27;
void* __right_value8 = (void*)0;
_Bool* item_existance_28;
int len_29;
char* it_32;
struct buffer* default_value_35;
void* __right_value9 = (void*)0;
struct buffer* it2_36;
unsigned int hash_39;
int n_40;
struct buffer* default_value_41;
void* __right_value10 = (void*)0;
default_value_35 = (void*)0;
default_value_41 = (void*)0;
    size_25=self->size*10;
    keys_26=(char**)come_increment_ref_count(((char**)(__right_value6=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_25)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_27=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value7=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size_25)), "/usr/local/include/comelang.h", 2152, "struct buffer**"))));
    item_existance_28=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value8=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_25)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_29=0;
    for(    it_32=map$2char$phbuffer$ph_begin(self)    ;    !map$2char$phbuffer$ph_end(self)    ;    it_32=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_35,0,sizeof(struct buffer*));
        it2_36=((struct buffer*)(__right_value9=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_35))));
        come_call_finalizer(buffer_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_39=string_get_hash_key(((char*)it_32))%size_25;
        n_40=hash_39;
        while(        (_Bool)1        ) {
            if(            item_existance_28[n_40]            ) {
                n_40++;
                if(                n_40>=size_25                ) {
                    n_40=0;
                }
                else if(                n_40==hash_39                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_28[n_40]=(_Bool)1;
                keys_26[n_40]=it_32;
                items_27[n_40]=((struct buffer*)(__right_value10=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_41))));
                come_call_finalizer(buffer_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_29++;
                come_call_finalizer(buffer_finalize, default_value_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_26;
    self->items=items_27;
    self->item_existance=item_existance_28;
    self->size=size_25;
    self->len=len_29;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_30;
char* __result_obj__15;
char* __result_obj__16;
char* result_31;
char* __result_obj__17;
result_30 = (void*)0;
result_31 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_30,0,sizeof(char*));
        __result_obj__15 = result_30;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_31,0,sizeof(char*));
    __result_obj__17 = result_31;
    return __result_obj__17;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_33;
char* __result_obj__18;
char* __result_obj__19;
char* result_34;
char* __result_obj__20;
result_33 = (void*)0;
result_34 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_33,0,sizeof(char*));
        __result_obj__18 = result_33;
        return __result_obj__18;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__19 = self->key_list->it->item;
        return __result_obj__19;
    }
    memset(&result_34,0,sizeof(char*));
    __result_obj__20 = result_34;
    return __result_obj__20;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_37;
unsigned int it_38;
struct buffer* __result_obj__21;
struct buffer* __result_obj__22;
struct buffer* __result_obj__23;
struct buffer* __result_obj__24;
    hash_37=string_get_hash_key(((char*)key))%self->size;
    it_38=hash_37;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_38]        ) {
            if(            string_equals(self->keys[it_38],key)            ) {
                __result_obj__21 = (struct buffer*)come_increment_ref_count(self->items[it_38]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__21;
            }
            it_38++;
            if(            it_38>=self->size            ) {
                it_38=0;
            }
            else if(            it_38==hash_37            ) {
                __result_obj__22 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__22;
            }
        }
        else {
            __result_obj__23 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__23;
        }
    }
    __result_obj__24 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_44;
struct list_item$1char$ph* it_45;
struct list$1char$ph* __result_obj__28;
    it2_44=0;
    it_45=self->head;
    while(    it_45!=((void*)0)    ) {
        if(        string_equals(it_45->item,item)        ) {
            list$1char$ph_delete(self,it2_44,it2_44+1);
            break;
        }
        it2_44++;
        it_45=it_45->next;
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_46;
struct list$1char$ph* __result_obj__25;
struct list_item$1char$ph* it_49;
int i_50;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
int i_53;
struct list_item$1char$ph* prev_it_54;
struct list_item$1char$ph* it_55;
struct list_item$1char$ph* head_prev_it_56;
struct list_item$1char$ph* tail_it_57;
int i_58;
struct list_item$1char$ph* prev_it_59;
struct list$1char$ph* __result_obj__27;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_46=tail;
        tail=head;
        head=tmp_46;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__25 = self;
        return __result_obj__25;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_49=self->head;
        i_50=0;
        while(        it_49!=((void*)0)        ) {
            if(            i_50<tail            ) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_50==tail            ) {
                self->head=it_49;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_52=self->head;
        i_53=0;
        while(        it_52!=((void*)0)        ) {
            if(            i_53==head            ) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(            i_53>=head            ) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it_56=((void*)0);
        tail_it_57=((void*)0);
        i_58=0;
        while(        it_55!=((void*)0)        ) {
            if(            i_58==head            ) {
                head_prev_it_56=it_55->prev;
            }
            if(            i_58==tail            ) {
                tail_it_57=it_55;
            }
            if(            i_58>=head&&i_58<tail            ) {
                prev_it_59=it_55;
                it_55=it_55->next;
                i_58++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_58++;
            }
        }
        if(        head_prev_it_56!=((void*)0)        ) {
            head_prev_it_56->next=tail_it_57;
        }
        if(        tail_it_57!=((void*)0)        ) {
            tail_it_57->prev=head_prev_it_56;
        }
    }
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_47;
struct list_item$1char$ph* prev_it_48;
struct list$1char$ph* __result_obj__26;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_61;
char* __result_obj__29;
char* __result_obj__30;
char* result_62;
char* __result_obj__31;
result_61 = (void*)0;
result_62 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_61,0,sizeof(char*));
        __result_obj__29 = result_61;
        return __result_obj__29;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_62,0,sizeof(char*));
    __result_obj__31 = result_62;
    return __result_obj__31;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_64;
char* __result_obj__32;
char* __result_obj__33;
char* result_65;
char* __result_obj__34;
result_64 = (void*)0;
result_65 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_64,0,sizeof(char*));
        __result_obj__32 = result_64;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_65,0,sizeof(char*));
    __result_obj__34 = result_65;
    return __result_obj__34;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value11 = (void*)0;
struct list_item$1char$ph* litem_66;
char* __dec_obj1;
void* __right_value12 = (void*)0;
struct list_item$1char$ph* litem_67;
char* __dec_obj2;
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj3;
struct list$1char$ph* __result_obj__35;
    if(    self->len==0    ) {
        litem_66=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value11=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_66->prev=((void*)0);
        litem_66->next=((void*)0);
        __dec_obj1=litem_66->item,
        litem_66->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_66;
        self->head=litem_66;
    }
    else if(    self->len==1    ) {
        litem_67=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value12=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_67->prev=self->head;
        litem_67->next=((void*)0);
        __dec_obj2=litem_67->item,
        litem_67->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_67;
        self->head->next=litem_67;
    }
    else {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_68->prev=self->tail;
        litem_68->next=((void*)0);
        __dec_obj3=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_68;
        self->tail=litem_68;
    }
    self->len++;
    __result_obj__35 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__35;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct buffer* buf_69;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_70;
struct tuple2$2char$phsType$ph* it_71;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name_72=0;
struct sType* type_73=0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
char* id_74;
void* __right_value19 = (void*)0;
    if(    info->no_output_come_code    ) {
        return;
    }
    buf_69=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer*"))));
    if(    klass->mParentClassName    ) {
        buffer_append_format(buf_69,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_69,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_70=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_71=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_70))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_70))    ;    it_71=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_70))    ){
        multiple_assign_var2=it_71;
        name_72=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_73=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_73->mStatic=(_Bool)0;
        buffer_append_str(buf_69,"    ");
        buffer_append_str(buf_69,((char*)(__right_value17=make_define_var(type_73,name_72,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value17 = come_decrement_ref_count(__right_value17, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(buf_69,";\n");
        (name_72 = come_decrement_ref_count(name_72, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass->mAttribute==((void*)0)    ) {
        buffer_append_str(buf_69,"};\n");
    }
    else {
        buffer_append_format(buf_69,"} %s;\n",klass->mAttribute);
    }
    id_74=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_74,"%s",((char*)(__right_value19=buffer_to_string(buf_69))));
    (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (id_74 = come_decrement_ref_count(id_74, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value20 = (void*)0;
char* new_name_75;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct sClass* generics_class_78;
void* __right_value24 = (void*)0;
_Bool __result_obj__45;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct sClass* new_class_106;
int i_107;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_108;
struct tuple2$2char$phsType$ph* it_109;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* name_110=0;
struct sType* type_111=0;
void* __right_value35 = (void*)0;
struct sType* new_type_112;
void* __right_value39 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct sType* __dec_obj33;
void* __right_value82 = (void*)0;
struct sType* __dec_obj34;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
_Bool __result_obj__76;
    new_name_75=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2char$phsClass$ph_find(info->classes,new_name_75)    ) {
        generics_class_78=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value22=__builtin_string(type->mClass->mName)))));
        (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value22 = come_decrement_ref_count(__right_value22, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        generics_class_78==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value24=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__45 = (_Bool)0;
            come_call_finalizer(sClass_finalize, generics_class_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (new_name_75 = come_decrement_ref_count(new_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__45;
        }
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_75)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 92, "struct sClass*")),(char*)come_increment_ref_count(new_name_75),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        new_class_106=((struct sClass*)(__right_value34=map$2char$phsClass$ph_at(info->classes,((char*)(__right_value33=__builtin_string(new_name_75))),((void*)0))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value34, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_107=0;
        for(        o2_saved_108=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((generics_class_78->mFields)),it_109=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_108))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_108))        ;        it_109=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_108))        ){
            multiple_assign_var3=it_109;
            name_110=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_111=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_112=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_111),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1tuple2$2char$phsType$ph$ph_push_back(new_class_106->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 102, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_110, "14struct.c", 102, "char*")),(struct sType*)come_increment_ref_count(sType_clone(new_type_112)))));
            (name_110 = come_decrement_ref_count(name_110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, new_type_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj33=type->mNoSolvedGenericsType,
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_106;
        list$1sType$ph_reset(type->mGenericsTypes);
        output_struct(new_class_106,info);
        come_call_finalizer(sClass_finalize, generics_class_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            __dec_obj34=type->mNoSolvedGenericsType,
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value85=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value84=__builtin_string(new_name_75))))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value85, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_reset(type->mGenericsTypes);
    }
    __result_obj__76 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (new_name_75 = come_decrement_ref_count(new_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__76;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key){
unsigned int hash_76;
int it_77;
    hash_76=string_get_hash_key(((char*)key))%self->size;
    it_77=hash_76;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_77]        ) {
            if(            string_equals(self->keys[it_77],key)            ) {
                return (_Bool)1;
            }
            it_77++;
            if(            it_77>=self->size            ) {
                it_77=0;
            }
            else if(            it_77==hash_76            ) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_79;
unsigned int hash_80;
unsigned int it_81;
struct sClass* __result_obj__37;
struct sClass* __result_obj__38;
struct sClass* __result_obj__39;
struct sClass* __result_obj__40;
default_value_79 = (void*)0;
    memset(&default_value_79,0,sizeof(struct sClass*));
    hash_80=string_get_hash_key(((char*)key))%self->size;
    it_81=hash_80;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_81]        ) {
            if(            string_equals(self->keys[it_81],key)            ) {
                __result_obj__37 = (struct sClass*)come_increment_ref_count(self->items[it_81]);
                come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__37;
            }
            it_81++;
            if(            it_81>=self->size            ) {
                it_81=0;
            }
            else if(            it_81==hash_80            ) {
                __result_obj__38 = (struct sClass*)come_increment_ref_count(default_value_79);
                come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct sClass*)come_increment_ref_count(default_value_79);
            come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct sClass*)come_increment_ref_count(default_value_79);
    come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_82;
unsigned int hash_83;
unsigned int it_84;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
struct sClass* __result_obj__43;
struct sClass* __result_obj__44;
default_value_82 = (void*)0;
    memset(&default_value_82,0,sizeof(struct sClass*));
    hash_83=string_get_hash_key(((char*)key))%self->size;
    it_84=hash_83;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_84]        ) {
            if(            string_equals(self->keys[it_84],key)            ) {
                __result_obj__41 = (struct sClass*)come_increment_ref_count(self->items[it_84]);
                come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__41;
            }
            it_84++;
            if(            it_84>=self->size            ) {
                it_84=0;
            }
            else if(            it_84==hash_83            ) {
                __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value_82);
                come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__42;
            }
        }
        else {
            __result_obj__43 = (struct sClass*)come_increment_ref_count(default_value_82);
            come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__43;
        }
    }
    __result_obj__44 = (struct sClass*)come_increment_ref_count(default_value_82);
    come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_102;
unsigned int it_103;
_Bool same_key_exist_104;
char* it2_105;
struct map$2char$phsClass$ph* __result_obj__56;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_102=string_get_hash_key(((char*)key))%self->size;
    it_103=hash_102;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_103]        ) {
            if(            string_equals(self->keys[it_103],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_103]);
                    (self->keys[it_103] = come_decrement_ref_count(self->keys[it_103], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_103]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_103]);
                    self->keys[it_103]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_103], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_103]=item;
                }
                break;
            }
            it_103++;
            if(            it_103>=self->size            ) {
                it_103=0;
            }
            else if(            it_103==hash_102            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_103]=(_Bool)1;
            if(            1            ) {
                self->keys[it_103]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_103]=key;
            }
            if(            1            ) {
                self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_103]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_104=(_Bool)0;
    for(    it2_105=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_105=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_105,key)        ) {
            same_key_exist_104=(_Bool)1;
        }
    }
    if(    !same_key_exist_104    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__56 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__56;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_85;
void* __right_value25 = (void*)0;
char** keys_86;
void* __right_value26 = (void*)0;
struct sClass** items_87;
void* __right_value27 = (void*)0;
_Bool* item_existance_88;
int len_89;
char* it_92;
struct sClass* default_value_95;
void* __right_value28 = (void*)0;
struct sClass* it2_96;
unsigned int hash_99;
int n_100;
struct sClass* default_value_101;
void* __right_value29 = (void*)0;
default_value_95 = (void*)0;
default_value_101 = (void*)0;
    size_85=self->size*10;
    keys_86=(char**)come_increment_ref_count(((char**)(__right_value25=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_85)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_87=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value26=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_85)), "/usr/local/include/comelang.h", 2152, "struct sClass**"))));
    item_existance_88=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value27=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_85)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_89=0;
    for(    it_92=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_92=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_95,0,sizeof(struct sClass*));
        it2_96=((struct sClass*)(__right_value28=map$2char$phsClass$ph_at(self,it_92,(struct sClass*)come_increment_ref_count(default_value_95))));
        come_call_finalizer(sClass_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_99=string_get_hash_key(((char*)it_92))%size_85;
        n_100=hash_99;
        while(        (_Bool)1        ) {
            if(            item_existance_88[n_100]            ) {
                n_100++;
                if(                n_100>=size_85                ) {
                    n_100=0;
                }
                else if(                n_100==hash_99                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_88[n_100]=(_Bool)1;
                keys_86[n_100]=it_92;
                items_87[n_100]=((struct sClass*)(__right_value29=map$2char$phsClass$ph_at(self,it_92,(struct sClass*)come_increment_ref_count(default_value_101))));
                come_call_finalizer(sClass_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_89++;
                come_call_finalizer(sClass_finalize, default_value_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_86;
    self->items=items_87;
    self->item_existance=item_existance_88;
    self->size=size_85;
    self->len=len_89;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_90;
char* __result_obj__46;
char* __result_obj__47;
char* result_91;
char* __result_obj__48;
result_90 = (void*)0;
result_91 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_90,0,sizeof(char*));
        __result_obj__46 = result_90;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_91,0,sizeof(char*));
    __result_obj__48 = result_91;
    return __result_obj__48;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_93;
char* __result_obj__49;
char* __result_obj__50;
char* result_94;
char* __result_obj__51;
result_93 = (void*)0;
result_94 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_93,0,sizeof(char*));
        __result_obj__49 = result_93;
        return __result_obj__49;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__50 = self->key_list->it->item;
        return __result_obj__50;
    }
    memset(&result_94,0,sizeof(char*));
    __result_obj__51 = result_94;
    return __result_obj__51;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_97;
unsigned int it_98;
struct sClass* __result_obj__52;
struct sClass* __result_obj__53;
struct sClass* __result_obj__54;
struct sClass* __result_obj__55;
    hash_97=string_get_hash_key(((char*)key))%self->size;
    it_98=hash_97;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_98]        ) {
            if(            string_equals(self->keys[it_98],key)            ) {
                __result_obj__52 = (struct sClass*)come_increment_ref_count(self->items[it_98]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__52;
            }
            it_98++;
            if(            it_98>=self->size            ) {
                it_98=0;
            }
            else if(            it_98==hash_97            ) {
                __result_obj__53 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__53;
            }
        }
        else {
            __result_obj__54 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__54;
        }
    }
    __result_obj__55 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value36 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_113;
struct tuple2$2char$phsType$ph* __dec_obj4;
void* __right_value37 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_114;
struct tuple2$2char$phsType$ph* __dec_obj5;
void* __right_value38 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_115;
struct tuple2$2char$phsType$ph* __dec_obj6;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__57;
    if(    self->len==0    ) {
        litem_113=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value36=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_113->prev=((void*)0);
        litem_113->next=((void*)0);
        __dec_obj4=litem_113->item,
        litem_113->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_113;
        self->head=litem_113;
    }
    else if(    self->len==1    ) {
        litem_114=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value37=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_114->prev=self->head;
        litem_114->next=((void*)0);
        __dec_obj5=litem_114->item,
        litem_114->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_114;
        self->head->next=litem_114;
    }
    else {
        litem_115=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value38=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_115->prev=self->tail;
        litem_115->next=((void*)0);
        __dec_obj6=litem_115->item,
        litem_115->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_115;
        self->tail=litem_115;
    }
    self->len++;
    __result_obj__57 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__58;
void* __right_value40 = (void*)0;
struct sType* result_116;
void* __right_value41 = (void*)0;
struct sType* __dec_obj7;
void* __right_value42 = (void*)0;
struct sType* __dec_obj8;
void* __right_value50 = (void*)0;
struct list$1sType$ph* __dec_obj12;
void* __right_value51 = (void*)0;
struct sType* __dec_obj13;
void* __right_value53 = (void*)0;
struct sNode* __dec_obj14;
void* __right_value54 = (void*)0;
struct sNode* __dec_obj15;
void* __right_value55 = (void*)0;
char* __dec_obj16;
void* __right_value56 = (void*)0;
char* __dec_obj17;
void* __right_value57 = (void*)0;
char* __dec_obj18;
void* __right_value58 = (void*)0;
char* __dec_obj19;
void* __right_value66 = (void*)0;
struct list$1sNode$ph* __dec_obj23;
void* __right_value67 = (void*)0;
char* __dec_obj24;
void* __right_value68 = (void*)0;
struct list$1sType$ph* __dec_obj25;
void* __right_value76 = (void*)0;
struct list$1char$ph* __dec_obj29;
void* __right_value77 = (void*)0;
struct sType* __dec_obj30;
struct sType* __result_obj__73;
    if(    self==(void*)0    ) {
        __result_obj__58 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__58;
    }
    result_116=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_116->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj7=result_116->mOriginalLoadVarType,
        result_116->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj8=result_116->mChannelType,
        result_116->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj12=result_116->mGenericsTypes,
        result_116->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj13=result_116->mNoSolvedGenericsType,
        result_116->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj14=result_116->mSizeNum,
        result_116->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj15=result_116->mAlignas,
        result_116->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj16=result_116->mTupleName,
        result_116->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj17=result_116->mAttribute,
        result_116->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj18=result_116->mVarAttribute,
        result_116->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_116->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_116->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_116->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_116->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_116->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_116->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_116->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_116->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_116->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_116->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_116->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_116->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_116->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_116->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_116->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_116->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_116->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_116->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_116->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_116->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_116->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj19=result_116->mAsmName,
        result_116->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_116->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj23=result_116->mArrayNum,
        result_116->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_116->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj24=result_116->mOriginalTypeName,
        result_116->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj25=result_116->mParamTypes,
        result_116->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj29=result_116->mParamNames,
        result_116->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj30=result_116->mResultType,
        result_116->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_116->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__73 = (struct sType*)come_increment_ref_count(result_116);
    come_call_finalizer(sType_finalize, result_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__59;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* result_117;
struct list_item$1sType$ph* it_118;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct list$1sType$ph* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_117=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sType$ph*"))));
    it_118=self->head;
    while(    it_118!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_117,(struct sType*)come_increment_ref_count(sType_clone(it_118->item)));
        }
        else {
            list$1sType$ph_add(result_117,(struct sType*)come_increment_ref_count(sType_clone(it_118->item)));
        }
        it_118=it_118->next;
    }
    __result_obj__62 = (struct list$1sType$ph*)come_increment_ref_count(result_117);
    come_call_finalizer(list$1sType$ph$p_finalize, result_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value45 = (void*)0;
struct list_item$1sType$ph* litem_119;
struct sType* __dec_obj9;
void* __right_value46 = (void*)0;
struct list_item$1sType$ph* litem_120;
struct sType* __dec_obj10;
void* __right_value47 = (void*)0;
struct list_item$1sType$ph* litem_121;
struct sType* __dec_obj11;
struct list$1sType$ph* __result_obj__61;
    if(    self->len==0    ) {
        litem_119=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value45=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sType$ph*"))));
        litem_119->prev=((void*)0);
        litem_119->next=((void*)0);
        __dec_obj9=litem_119->item,
        litem_119->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_119;
        self->head=litem_119;
    }
    else if(    self->len==1    ) {
        litem_120=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value46=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sType$ph*"))));
        litem_120->prev=self->head;
        litem_120->next=((void*)0);
        __dec_obj10=litem_120->item,
        litem_120->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_120;
        self->head->next=litem_120;
    }
    else {
        litem_121=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value47=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_121->prev=self->tail;
        litem_121->next=((void*)0);
        __dec_obj11=litem_121->item,
        litem_121->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_121;
        self->tail=litem_121;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_122;
struct list_item$1sType$ph* prev_it_123;
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__63;
void* __right_value52 = (void*)0;
struct sNode* result_124;
struct sNode* __result_obj__64;
    if(    self==(void*)0    ) {
        __result_obj__63 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__63;
    }
    result_124=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_124->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_124->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_124->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_124->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_124->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_124->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_124->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_124->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_124->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_124->no_mutex=self->no_mutex;
    }
    __result_obj__64 = (struct sNode*)come_increment_ref_count(result_124);
    ((result_124) ? result_124 = come_decrement_ref_count(result_124, ((struct sNode*)result_124)->finalize, ((struct sNode*)result_124)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__65;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1sNode$ph* result_125;
struct list_item$1sNode$ph* it_126;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1sNode$ph* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__65 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__65;
    }
    result_125=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_126=self->head;
    while(    it_126!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_125,(struct sNode*)come_increment_ref_count(sNode_clone(it_126->item)));
        }
        else {
            list$1sNode$ph_add(result_125,(struct sNode*)come_increment_ref_count(sNode_clone(it_126->item)));
        }
        it_126=it_126->next;
    }
    __result_obj__68 = (struct list$1sNode$ph*)come_increment_ref_count(result_125);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value61 = (void*)0;
struct list_item$1sNode$ph* litem_127;
struct sNode* __dec_obj20;
void* __right_value62 = (void*)0;
struct list_item$1sNode$ph* litem_128;
struct sNode* __dec_obj21;
void* __right_value63 = (void*)0;
struct list_item$1sNode$ph* litem_129;
struct sNode* __dec_obj22;
struct list$1sNode$ph* __result_obj__67;
    if(    self->len==0    ) {
        litem_127=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value61=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sNode$ph*"))));
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        __dec_obj20=litem_127->item,
        litem_127->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_127;
        self->head=litem_127;
    }
    else if(    self->len==1    ) {
        litem_128=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value62=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sNode$ph*"))));
        litem_128->prev=self->head;
        litem_128->next=((void*)0);
        __dec_obj21=litem_128->item,
        litem_128->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_128;
        self->head->next=litem_128;
    }
    else {
        litem_129=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value63=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_129->prev=self->tail;
        litem_129->next=((void*)0);
        __dec_obj22=litem_129->item,
        litem_129->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_129;
        self->tail=litem_129;
    }
    self->len++;
    __result_obj__67 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__67;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_130;
struct list_item$1sNode$ph* prev_it_131;
    it_130=self->head;
    while(    it_130!=((void*)0)    ) {
        prev_it_131=it_130;
        it_130=it_130->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__69;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1char$ph* result_132;
struct list_item$1char$ph* it_133;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1char$ph* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    result_132=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1char$ph*"))));
    it_133=self->head;
    while(    it_133!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_132,(char*)come_increment_ref_count((char*)come_memdup(it_133->item, "/usr/local/include/comelang.h", 1001, "char*")));
        }
        else {
            list$1char$ph_add(result_132,(char*)come_increment_ref_count((char*)come_memdup(it_133->item, "/usr/local/include/comelang.h", 1004, "char*")));
        }
        it_133=it_133->next;
    }
    __result_obj__72 = (struct list$1char$ph*)come_increment_ref_count(result_132);
    come_call_finalizer(list$1char$ph$p_finalize, result_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value71 = (void*)0;
struct list_item$1char$ph* litem_134;
char* __dec_obj26;
void* __right_value72 = (void*)0;
struct list_item$1char$ph* litem_135;
char* __dec_obj27;
void* __right_value73 = (void*)0;
struct list_item$1char$ph* litem_136;
char* __dec_obj28;
struct list$1char$ph* __result_obj__71;
    if(    self->len==0    ) {
        litem_134=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value71=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1char$ph*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        __dec_obj26=litem_134->item,
        litem_134->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1    ) {
        litem_135=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value72=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1char$ph*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        __dec_obj27=litem_135->item,
        litem_135->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value73=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        __dec_obj28=litem_136->item,
        litem_136->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__71 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__71;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_137;
struct list_item$1char$ph* prev_it_138;
    it_137=self->head;
    while(    it_137!=((void*)0)    ) {
        prev_it_138=it_137;
        it_137=it_137->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj31;
struct sType* __dec_obj32;
struct tuple2$2char$phsType$ph* __result_obj__74;
    __dec_obj31=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj32=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__74 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_139;
struct list_item$1sType$ph* prev_it_140;
struct list$1sType$ph* __result_obj__75;
    it_139=self->head;
    while(    it_139!=((void*)0)    ) {
        prev_it_140=it_139;
        it_139=it_139->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
char* __dec_obj35;
void* __right_value103 = (void*)0;
struct sClass* __dec_obj45;
struct sStructNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value86=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj35=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj45=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__85 = (struct sStructNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStructNode_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __right_value104 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string("sStructNode"))));
    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__86;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_150;
void* __right_value105 = (void*)0;
char* name_151;
_Bool __result_obj__87;
    klass_150=(struct sClass*)come_increment_ref_count(self->mClass);
    name_151=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_150,info);
    __result_obj__87 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_151 = come_decrement_ref_count(name_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__87;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__77;
void* __right_value88 = (void*)0;
struct sClass* result_141;
void* __right_value89 = (void*)0;
char* __dec_obj36;
void* __right_value100 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj42;
void* __right_value101 = (void*)0;
char* __dec_obj43;
void* __right_value102 = (void*)0;
char* __dec_obj44;
struct sClass* __result_obj__84;
    if(    self==(void*)0    ) {
        __result_obj__77 = (void*)0;
        return __result_obj__77;
    }
    result_141=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(    self!=((void*)0)    ) {
        result_141->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)    ) {
        result_141->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)    ) {
        result_141->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)    ) {
        result_141->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)    ) {
        result_141->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)    ) {
        result_141->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)    ) {
        result_141->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)    ) {
        result_141->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)    ) {
        result_141->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj36=result_141->mName,
        result_141->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClass_clone", 13, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_141->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)    ) {
        result_141->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        __dec_obj42=result_141->mFields,
        result_141->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(self->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        __dec_obj43=result_141->mParentClassName,
        result_141->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(self->mParentClassName, "sClass_clone", 17, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj44=result_141->mAttribute,
        result_141->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sClass_clone", 18, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__84 = result_141;
    come_call_finalizer(sClass_finalize, result_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__78;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_142;
struct list_item$1tuple2$2char$phsType$ph$ph* it_143;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__78 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__78;
    }
    result_142=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it_143=self->head;
    while(    it_143!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsType$ph$ph_add(result_142,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_143->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result_142,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_143->item)));
        }
        it_143=it_143->next;
    }
    __result_obj__83 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(result_142);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, result_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__79;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__79 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value92 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_144;
struct tuple2$2char$phsType$ph* __dec_obj37;
void* __right_value93 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_145;
struct tuple2$2char$phsType$ph* __dec_obj38;
void* __right_value94 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_146;
struct tuple2$2char$phsType$ph* __dec_obj39;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__80;
    if(    self->len==0    ) {
        litem_144=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value92=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_144->prev=((void*)0);
        litem_144->next=((void*)0);
        __dec_obj37=litem_144->item,
        litem_144->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_144;
        self->head=litem_144;
    }
    else if(    self->len==1    ) {
        litem_145=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value93=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_145->prev=self->head;
        litem_145->next=((void*)0);
        __dec_obj38=litem_145->item,
        litem_145->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_145;
        self->head->next=litem_145;
    }
    else {
        litem_146=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value94=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_146->prev=self->tail;
        litem_146->next=((void*)0);
        __dec_obj39=litem_146->item,
        litem_146->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_146;
        self->tail=litem_146;
    }
    self->len++;
    __result_obj__80 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__81;
void* __right_value95 = (void*)0;
struct tuple2$2char$phsType$ph* result_147;
void* __right_value96 = (void*)0;
char* __dec_obj40;
void* __right_value97 = (void*)0;
struct sType* __dec_obj41;
struct tuple2$2char$phsType$ph* __result_obj__82;
    if(    self==(void*)0    ) {
        __result_obj__81 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__81;
    }
    result_147=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj40=result_147->v1,
        result_147->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj41=result_147->v2,
        result_147->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__82 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_147);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_148;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_149;
    it_148=self->head;
    while(    it_148!=((void*)0)    ) {
        prev_it_149=it_148;
        it_148=it_148->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sStructNode_finalize(struct sStructNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        come_call_finalizer(sClass_finalize, self->mClass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info){
void* __right_value106 = (void*)0;
char* __dec_obj46;
struct sStructNobodyNode* __result_obj__88;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj46=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__88 = (struct sStructNobodyNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNobodyNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStructNobodyNode_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __right_value107 = (void*)0;
char* __result_obj__89;
    __result_obj__89 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sStructNobodyNode"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__89;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
char* name_152;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
_Bool __result_obj__90;
    name_152=(char*)come_increment_ref_count(self->mName);
    map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_152)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value109=xsprintf("struct %s;\n",name_152))))));
    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __result_obj__90 = (_Bool)1;
    (name_152 = come_decrement_ref_count(name_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__90;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __right_value111 = (void*)0;
struct sNothingNode* __result_obj__91;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__91 = (struct sNothingNode*)come_increment_ref_count(self);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNothingNode_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __right_value112 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string("sNothingNode"))));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value117 = (void*)0;
struct sNode* __result_obj__95;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 211, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value114=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 211, "struct sNothingNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__95 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value117=_inf_value1)));
    come_call_finalizer(sNothingNode_finalize, __right_value114, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value117) ? __right_value117 = come_decrement_ref_count(__right_value117, ((struct sNode*)__right_value117)->finalize, ((struct sNode*)__right_value117)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__95) ? __result_obj__95 = come_decrement_ref_count(__result_obj__95, ((struct sNode*)__result_obj__95)->finalize, ((struct sNode*)__result_obj__95)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__95;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
struct sNothingNode* __result_obj__93;
void* __right_value115 = (void*)0;
struct sNothingNode* result_153;
void* __right_value116 = (void*)0;
char* __dec_obj47;
struct sNothingNode* __result_obj__94;
    if(    self==(void*)0    ) {
        __result_obj__93 = (void*)0;
        return __result_obj__93;
    }
    result_153=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(    self!=((void*)0)    ) {
        result_153->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj47=result_153->sname,
        result_153->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNothingNode_clone", 5, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_153->sline_real=self->sline_real;
    }
    __result_obj__94 = result_153;
    come_call_finalizer(sNothingNode_finalize, result_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
char* __dec_obj48;
void* __right_value120 = (void*)0;
struct sClass* __dec_obj49;
struct list$1sNode$ph* __dec_obj50;
struct sClassNode* __result_obj__96;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj48=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=self->mMethods,
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__96 = (struct sClassNode*)come_increment_ref_count(self);
    come_call_finalizer(sClassNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClassNode_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __right_value121 = (void*)0;
char* __result_obj__97;
    __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string("sClassNode"))));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__97;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
struct sClass* klass_154;
void* __right_value122 = (void*)0;
char* name_155;
void* __right_value123 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value127 = (void*)0;
struct sClass* klass2_156;
void* __right_value128 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj51;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct sType* type_157;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sType* override__158;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1sNode$ph* o2_saved_180;
struct sNode* it_183;
_Bool Value_186;
_Bool __result_obj__115;
_Bool __result_obj__116;
    klass_154=(struct sClass*)come_increment_ref_count(self->mClass);
    name_155=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_condtional_value_X2=(((struct sClass*)(__right_value123=map$2char$phsClass$ph_at(info->classes,name_155,((void*)0))))==((void*)0))),    come_call_finalizer(sClass_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X2    ) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(name_155),(struct sClass*)come_increment_ref_count(sClass_clone(klass_154)));
    }
    if(    (_condtional_value_X3=(((struct sClass*)(__right_value125=map$2char$phsClass$ph_at(info->classes,name_155,((void*)0))))&&list$1tuple2$2char$phsType$ph$ph_length(((struct sClass*)(__right_value126=map$2char$phsClass$ph_at(info->classes,name_155,((void*)0))))->mFields)==0)),    come_call_finalizer(sClass_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    come_call_finalizer(sClass_finalize, __right_value126, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X3    ) {
        klass2_156=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,name_155,((void*)0)));
        __dec_obj51=klass2_156->mFields,
        klass2_156->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(klass_154->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass2_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_157=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 250, "struct sType*")),(char*)come_increment_ref_count(name_155),(_Bool)0,info));
    override__158=((struct sType*)(__right_value132=map$2char$phsType$ph_at(info->types,((char*)(__right_value131=__builtin_string(name_155))),((void*)0))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    override__158    ) {
        if(        override__158->mTypedef        ) {
            type_157->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_155)),(struct sType*)come_increment_ref_count(sType_clone(type_157)));
    output_struct(klass_154,info);
    for(    o2_saved_180=(struct list$1sNode$ph*)come_increment_ref_count((self->mMethods)),it_183=list$1sNode$ph_begin((o2_saved_180))    ;    !list$1sNode$ph_end((o2_saved_180))    ;    it_183=list$1sNode$ph_next((o2_saved_180))    ){
        Value_186=node_compile(it_183,info);
        if(        !Value_186        ) {
            __result_obj__115 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_155 = come_decrement_ref_count(name_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__115;
        }
        else {
        }
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    info->output_header_file    ) {
        output_struct_come_header(klass_154,info);
    }
    __result_obj__116 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_155 = come_decrement_ref_count(name_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__116;
}

static void sClassNode_finalize(struct sClassNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        come_call_finalizer(sClass_finalize, self->mClass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mMethods, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_159;
unsigned int it_160;
struct sType* __result_obj__98;
struct sType* __result_obj__99;
struct sType* __result_obj__100;
struct sType* __result_obj__101;
    hash_159=string_get_hash_key(((char*)key))%self->size;
    it_160=hash_159;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_160]        ) {
            if(            string_equals(self->keys[it_160],key)            ) {
                __result_obj__98 = (struct sType*)come_increment_ref_count(self->items[it_160]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__98;
            }
            it_160++;
            if(            it_160>=self->size            ) {
                it_160=0;
            }
            else if(            it_160==hash_159            ) {
                __result_obj__99 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__99;
            }
        }
        else {
            __result_obj__100 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__100;
        }
    }
    __result_obj__101 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_176;
unsigned int it_177;
_Bool same_key_exist_178;
char* it2_179;
struct map$2char$phsType$ph* __result_obj__108;
    if(    self->len*10>=self->size    ) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_176=string_get_hash_key(((char*)key))%self->size;
    it_177=hash_176;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_177]        ) {
            if(            string_equals(self->keys[it_177],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_177]);
                    (self->keys[it_177] = come_decrement_ref_count(self->keys[it_177], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_177]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_177]);
                    self->keys[it_177]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sType_finalize, self->items[it_177], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_177]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_177]=item;
                }
                break;
            }
            it_177++;
            if(            it_177>=self->size            ) {
                it_177=0;
            }
            else if(            it_177==hash_176            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_177]=(_Bool)1;
            if(            1            ) {
                self->keys[it_177]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_177]=key;
            }
            if(            1            ) {
                self->items[it_177]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_177]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_178=(_Bool)0;
    for(    it2_179=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_179=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_179,key)        ) {
            same_key_exist_178=(_Bool)1;
        }
    }
    if(    !same_key_exist_178    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__108 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_161;
void* __right_value133 = (void*)0;
char** keys_162;
void* __right_value134 = (void*)0;
struct sType** items_163;
void* __right_value135 = (void*)0;
_Bool* item_existance_164;
int len_165;
char* it_168;
struct sType* default_value_171;
void* __right_value136 = (void*)0;
struct sType* it2_172;
unsigned int hash_173;
int n_174;
struct sType* default_value_175;
void* __right_value137 = (void*)0;
default_value_171 = (void*)0;
default_value_175 = (void*)0;
    size_161=self->size*10;
    keys_162=(char**)come_increment_ref_count(((char**)(__right_value133=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_161)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_163=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value134=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_161)), "/usr/local/include/comelang.h", 2152, "struct sType**"))));
    item_existance_164=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value135=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_161)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_165=0;
    for(    it_168=map$2char$phsType$ph_begin(self)    ;    !map$2char$phsType$ph_end(self)    ;    it_168=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_171,0,sizeof(struct sType*));
        it2_172=((struct sType*)(__right_value136=map$2char$phsType$ph_at(self,it_168,(struct sType*)come_increment_ref_count(default_value_171))));
        come_call_finalizer(sType_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_173=string_get_hash_key(((char*)it_168))%size_161;
        n_174=hash_173;
        while(        (_Bool)1        ) {
            if(            item_existance_164[n_174]            ) {
                n_174++;
                if(                n_174>=size_161                ) {
                    n_174=0;
                }
                else if(                n_174==hash_173                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_164[n_174]=(_Bool)1;
                keys_162[n_174]=it_168;
                items_163[n_174]=((struct sType*)(__right_value137=map$2char$phsType$ph_at(self,it_168,(struct sType*)come_increment_ref_count(default_value_175))));
                come_call_finalizer(sType_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_165++;
                come_call_finalizer(sType_finalize, default_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_162;
    self->items=items_163;
    self->item_existance=item_existance_164;
    self->size=size_161;
    self->len=len_165;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_166;
char* __result_obj__102;
char* __result_obj__103;
char* result_167;
char* __result_obj__104;
result_166 = (void*)0;
result_167 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_166,0,sizeof(char*));
        __result_obj__102 = result_166;
        return __result_obj__102;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__103 = self->key_list->it->item;
        return __result_obj__103;
    }
    memset(&result_167,0,sizeof(char*));
    __result_obj__104 = result_167;
    return __result_obj__104;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_169;
char* __result_obj__105;
char* __result_obj__106;
char* result_170;
char* __result_obj__107;
result_169 = (void*)0;
result_170 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_169,0,sizeof(char*));
        __result_obj__105 = result_169;
        return __result_obj__105;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__106 = self->key_list->it->item;
        return __result_obj__106;
    }
    memset(&result_170,0,sizeof(char*));
    __result_obj__107 = result_170;
    return __result_obj__107;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_181;
struct sNode* __result_obj__109;
struct sNode* __result_obj__110;
struct sNode* result_182;
struct sNode* __result_obj__111;
result_181 = (void*)0;
result_182 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_181,0,sizeof(struct sNode*));
        __result_obj__109 = result_181;
        return __result_obj__109;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__110 = self->it->item;
        return __result_obj__110;
    }
    memset(&result_182,0,sizeof(struct sNode*));
    __result_obj__111 = result_182;
    return __result_obj__111;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_184;
struct sNode* __result_obj__112;
struct sNode* __result_obj__113;
struct sNode* result_185;
struct sNode* __result_obj__114;
result_184 = (void*)0;
result_185 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_184,0,sizeof(struct sNode*));
        __result_obj__112 = result_184;
        return __result_obj__112;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__113 = self->it->item;
        return __result_obj__113;
    }
    memset(&result_185,0,sizeof(struct sNode*));
    __result_obj__114 = result_185;
    return __result_obj__114;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
struct sClass* klass_187;
void* __right_value140 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sClass* __dec_obj52;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct sClass* __dec_obj53;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sType* type_190;
void* __right_value148 = (void*)0;
struct sType* override__191;
void* __right_value149 = (void*)0;
struct sClass* parent_class_192;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
char* parent_class_name_193;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
_Bool multiple_declare_194;
char* p_195;
int sline_196;
void* __right_value154 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_197=0;
char* name_198=0;
_Bool err_199=0;
void* __right_value155 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* base_type_200=0;
char* name_201=0;
_Bool err_202=0;
void* __right_value156 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type2_203=0;
char* name2_204=0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* type2_205=0;
char* name2_206=0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_207=0;
char* name_208=0;
_Bool err_209=0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
char* struct_attribute2_210;
void* __right_value166 = (void*)0;
char* __dec_obj54;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
char* __dec_obj55;
char* __dec_obj56;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
char* __dec_obj57;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value179 = (void*)0;
struct sNode* node_211;
_Bool Value_213;
struct sNode* __result_obj__120;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value182 = (void*)0;
struct sNode* __result_obj__121;
klass_187 = (void*)0;
    if(    (_condtional_value_X4=(((struct sClass*)(__right_value140=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer(sClass_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X4    ) {
        __dec_obj52=klass_187,
        klass_187=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 279, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        come_call_finalizer(sClass_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_187));
    }
    else {
        __dec_obj53=klass_187,
        klass_187=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
        come_call_finalizer(sClass_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_reset(klass_187->mFields);
    }
    type_190=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 287, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
    override__191=((struct sType*)(__right_value148=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
    come_call_finalizer(sType_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    override__191    ) {
        if(        override__191->mTypedef        ) {
            type_190->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_190)));
    parent_class_192=((void*)0);
    if(    parsecmp("extends",info)    ) {
        ((char*)(__right_value150=parse_word(info)));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        parent_class_name_193=(char*)come_increment_ref_count(parse_word(info));
        parent_class_192=((struct sClass*)(__right_value152=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_193)));
        come_call_finalizer(sClass_finalize, __right_value152, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        parent_class_192==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value153=err_msg(info,"invalid class name(%s)",parent_class_name_193)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(1);
        }
        (parent_class_name_193 = come_decrement_ref_count(parent_class_name_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    expected_next_character(123,info);
    while(    (_Bool)1    ) {
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_194=(_Bool)0;
        {
            p_195=info->p;
            sline_196=info->sline;
            multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value154=backtrace_parse_type((_Bool)1,info)));
            type_197=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_198=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_199=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value154, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            err_199&&*info->p==44            ) {
                multiple_declare_194=(_Bool)1;
            }
            info->p=p_195;
            info->sline=sline_196;
            come_call_finalizer(sType_finalize, type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_198 = come_decrement_ref_count(name_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        multiple_declare_194        ) {
            multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value155=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_200=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_201=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_202=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value155, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value156=parse_variable_name((struct sType*)come_increment_ref_count(base_type_200),(_Bool)1,info)));
            type2_203=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_204=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_187->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 343, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_204),(struct sType*)come_increment_ref_count(type2_203))));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value159=parse_variable_name((struct sType*)come_increment_ref_count(base_type_200),(_Bool)0,info)));
                type2_205=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_206=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value159, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_187->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 351, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_206),(struct sType*)come_increment_ref_count(type2_205))));
                come_call_finalizer(sType_finalize, type2_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name2_206 = come_decrement_ref_count(name2_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, base_type_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_201 = come_decrement_ref_count(name_201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type2_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name2_204 = come_decrement_ref_count(name2_204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value162=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_207=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_208=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_209=multiple_assign_var8->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_209            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_187->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 362, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_208),(struct sType*)come_increment_ref_count(type2_207))));
            come_call_finalizer(sType_finalize, type2_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_208 = come_decrement_ref_count(name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_210=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_192    ) {
        __dec_obj54=klass_187->mParentClassName,
        klass_187->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_192->mName, "14struct.c", 382, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_187->mName)),(struct sClass*)come_increment_ref_count(sClass_clone(klass_187)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_210,"")    ) {
    }
    else if(    string_operator_equals(struct_attribute,"")    ) {
        __dec_obj55=klass_187->mAttribute,
        klass_187->mAttribute=(char*)come_increment_ref_count(struct_attribute2_210);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_210,"")    ) {
        __dec_obj56=klass_187->mAttribute,
        klass_187->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj57=klass_187->mAttribute,
        klass_187->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value170=string_operator_add(struct_attribute," "))),struct_attribute2_210));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 398, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value174=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 398, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_187,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node_211=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sStructNode_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_213=node_compile(node_211,info);
    if(    !Value_213    ) {
        __result_obj__120 = (void*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, klass_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (struct_attribute2_210 = come_decrement_ref_count(struct_attribute2_210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__120;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 404, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value181=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 404, "struct sNothingNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value182=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, klass_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (struct_attribute2_210 = come_decrement_ref_count(struct_attribute2_210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sNothingNode_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value182) ? __right_value182 = come_decrement_ref_count(__right_value182, ((struct sNode*)__right_value182)->finalize, ((struct sNode*)__right_value182)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__121;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_188;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_189;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__117;
    it_188=self->head;
    while(    it_188!=((void*)0)    ) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
struct sStructNode* __result_obj__118;
void* __right_value175 = (void*)0;
struct sStructNode* result_212;
void* __right_value176 = (void*)0;
char* __dec_obj58;
void* __right_value177 = (void*)0;
char* __dec_obj59;
void* __right_value178 = (void*)0;
struct sClass* __dec_obj60;
struct sStructNode* __result_obj__119;
    if(    self==(void*)0    ) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result_212=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*"));
    if(    self!=((void*)0)    ) {
        result_212->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj58=result_212->sname,
        result_212->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNode_clone", 5, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_212->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj59=result_212->mName,
        result_212->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNode_clone", 7, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        __dec_obj60=result_212->mClass,
        result_212->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__119 = result_212;
    come_call_finalizer(sStructNode_finalize, result_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct buffer* result_214;
char* p_215;
int sline_216;
void* __right_value185 = (void*)0;
char* buf_217;
char* head_218;
char* tail_219;
char* head_220;
char* tail_221;
void* __right_value186 = (void*)0;
char* __result_obj__122;
    parse_sharp_v5(info);
    result_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 410, "struct buffer*"))));
    while(    1    ) {
        if(        xisalnum(*info->p)||*info->p==95        ) {
        }
        else {
            break;
        }
        p_215=info->p;
        sline_216=info->sline;
        buf_217=(char*)come_increment_ref_count(parse_word(info));
        info->p=p_215;
        info->sline=sline_216;
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0        ) {
            head_218=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_219=info->p;
            buffer_append(result_214,head_218,tail_219-head_218);
        }
        else if(        string_operator_equals(buf_217,"asm")        ) {
            head_220=info->p;
            info->p+=strlen("asm");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_221=info->p;
            buffer_append(result_214,head_220,tail_221-head_220);
        }
        else {
            (buf_217 = come_decrement_ref_count(buf_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_217 = come_decrement_ref_count(buf_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value186=buffer_to_string(result_214))));
    come_call_finalizer(buffer_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_222;
void* __right_value187 = (void*)0;
char* struct_attribute_223;
void* __right_value188 = (void*)0;
char* type_name_224;
struct sClass* struct_class_225;
void* __right_value189 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sClass* __dec_obj61;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sClass* __dec_obj62;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sType* type_226;
void* __right_value198 = (void*)0;
struct sType* override__227;
char* source_tail_228;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* header_229;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* id_230;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value211 = (void*)0;
struct sNode* __result_obj__125;
void* __right_value212 = (void*)0;
char* T_232;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sClass* generics_class_233;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* type2_234=0;
char* name_235=0;
_Bool err_236=0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* name2_237;
void* __right_value225 = (void*)0;
struct sType* type3_238;
_Bool no_comma_239;
void* __right_value226 = (void*)0;
struct sNode* node_240;
struct sNode* __dec_obj65;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
char* source_tail_241;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* header_242;
void* __right_value234 = (void*)0;
char* id_243;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value238 = (void*)0;
struct sNode* __result_obj__126;
struct sClass* struct_class_244;
void* __right_value239 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sClass* __dec_obj66;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sClass* __dec_obj67;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct sType* type_245;
void* __right_value247 = (void*)0;
struct sType* override__246;
struct sClass* parent_class_247;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* parent_class_name_248;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
_Bool multiple_declare_249;
char* p_250;
int sline_251;
void* __right_value252 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_252=0;
char* name_253=0;
_Bool err_254=0;
void* __right_value253 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* base_type_255=0;
char* name_256=0;
_Bool err_257=0;
void* __right_value254 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var12 = (void*)0;
struct sType* type2_258=0;
char* name2_259=0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var13 = (void*)0;
struct sType* type2_260=0;
char* name2_261=0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type2_262=0;
char* name_263=0;
_Bool err_264=0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* struct_attribute2_265;
char* source_tail_266;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* header_267;
void* __right_value266 = (void*)0;
char* id_268;
void* __right_value267 = (void*)0;
char* __dec_obj68;
char* __dec_obj69;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
char* __dec_obj70;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value274 = (void*)0;
struct sNode* __result_obj__127;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
_Bool _condtional_value_X8;
_Bool uniq_class_269;
void* __right_value277 = (void*)0;
char* source_head_270;
void* __right_value278 = (void*)0;
char* type_name_271;
void* __right_value279 = (void*)0;
char* id_272;
struct sClass* parent_class_273;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
char* parent_class_name_274;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sClass$p* parent_classes_275;
struct sClass* parent_class2_278;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sClass* struct_class_282;
void* __right_value294 = (void*)0;
char* __dec_obj71;
struct sClass* defining_class_283;
void* __right_value295 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1sClass$p* o2_saved_289;
struct sClass* parent_292;
_Bool _condtional_value_X10;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_295;
struct tuple2$2char$phsType$ph* it_296;
void* __right_value304 = (void*)0;
char* head_297;
char* p_saved_298;
int sline_saved_299;
char* sname_saved_300;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1sNode$ph* methods_301;
void* __right_value307 = (void*)0;
char* __dec_obj72;
char* __dec_obj73;
struct map$2char$phchar$ph* __dec_obj74;
_Bool include__304;
_Bool multiple_declare_305;
char* p_306;
int sline_307;
void* __right_value308 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_308=0;
char* name_309=0;
_Bool err_310=0;
_Bool define_function_flag_311;
char* p_312;
int sline_313;
_Bool invalid_type_314;
void* __right_value309 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* result_type_315=0;
char* fun_name_316=0;
_Bool err_317=0;
char* word_318;
void* __right_value310 = (void*)0;
char* __dec_obj75;
void* __right_value311 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
void* __right_value312 = (void*)0;
char* __dec_obj78;
char* tail_319;
int pointer_num_320;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* __dec_obj79;
void* __right_value315 = (void*)0;
struct sNode* method_321;
struct sType* __dec_obj80;
void* __right_value319 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* base_type_325=0;
char* name_326=0;
_Bool err_327=0;
void* __right_value320 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_328=0;
char* name2_329=0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var19 = (void*)0;
struct sType* type2_330=0;
char* name2_331=0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* module_name_332;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1char$ph* params_333;
void* __right_value330 = (void*)0;
char* word_334;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj84;
void* __right_value334 = (void*)0;
char* __dec_obj85;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sClassModule* module_341;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2char$phchar$ph* __dec_obj87;
int i_347;
struct list$1char$ph* o2_saved_348;
char* it_349;
void* __right_value350 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __dec_obj88;
void* __right_value362 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* type2_377=0;
char* name_378=0;
_Bool err_379=0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
char* __dec_obj89;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value374 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value375 = (void*)0;
struct sNode* __result_obj__167;
struct_class_225 = (void*)0;
struct_class_244 = (void*)0;
    if(    charp_operator_equals(buf,"struct")    ) {
        source_head_222=head;
        struct_attribute_223=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_224=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_condtional_value_X5=(((struct sClass*)(__right_value189=map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0))))==((void*)0))),            come_call_finalizer(sClass_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X5            ) {
                __dec_obj61=struct_class_225,
                struct_class_225=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 472, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_224),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 474, "struct sClass*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
            }
            else {
                __dec_obj62=struct_class_225,
                struct_class_225=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0)));
                come_call_finalizer(sClass_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            type_226=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 479, "struct sType*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,info));
            override__227=((struct sType*)(__right_value198=map$2char$phsType$ph_at(info->types,type_name_224,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            override__227            ) {
                if(                override__227->mTypedef                ) {
                    type_226->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_224),(struct sType*)come_increment_ref_count(type_226));
            source_tail_228=info->p;
            header_229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 490, "struct buffer*"))));
            buffer_append(header_229,source_head_222,source_tail_228-source_head_222);
            id_230=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value202=__builtin_string(type_name_224))),";"));
            (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            add_come_code_at_come_struct_header(info,id_230,"%s",((char*)(__right_value204=buffer_to_string(header_229))));
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 496, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value207=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 496, "struct sStructNobodyNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__125 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value211=_inf_value4)));
            come_call_finalizer(sClass_finalize, struct_class_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_230 = come_decrement_ref_count(id_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sStructNobodyNode_finalize, __right_value207, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value211) ? __right_value211 = come_decrement_ref_count(__right_value211, ((struct sNode*)__right_value211)->finalize, ((struct sNode*)__right_value211)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__125;
            come_call_finalizer(sClass_finalize, struct_class_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_230 = come_decrement_ref_count(id_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        *info->p==60        ) {
            list$1char$ph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while(            (_Bool)1            ) {
                T_232=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph_push_back(info->generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(T_232, "14struct.c", 506, "char*")));
                if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_232 = come_decrement_ref_count(T_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value214=err_msg(info,"invalid generics struct definition")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value214, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                (T_232 = come_decrement_ref_count(T_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            (_condtional_value_X6=(((struct sClass*)(__right_value216=map$2char$phsClass$ph_at(info->generics_classes,((char*)(__right_value215=__builtin_string(type_name_224))),((void*)0))))!=((void*)0))),            (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sClass_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X6            ) {
                ((struct tuple2$2int$bool$*)(__right_value217=err_msg(info,"redefined generics struct(%s)",type_name_224)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value217, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            generics_class_233=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 528, "struct sClass*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
            map$2char$phsClass$ph_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_224)),(struct sClass*)come_increment_ref_count(generics_class_233));
            expected_next_character(123,info);
            while(            (_Bool)1            ) {
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value221=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_234=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_235=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_236=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value221, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_236                ) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44                ) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_233->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 553, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_235),(struct sType*)come_increment_ref_count(type2_234))));
                    while(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_237=(char*)come_increment_ref_count(parse_word(info));
                        type3_238=(struct sType*)come_increment_ref_count(sType_clone(type2_234));
                        if(                        *info->p==58                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_239=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_240=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_239;
                            __dec_obj65=type3_238->mSizeNum,
                            type3_238->mSizeNum=(struct sNode*)come_increment_ref_count(node_240);
                            (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                            ((node_240) ? node_240 = come_decrement_ref_count(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_233->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 575, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_237),(struct sType*)come_increment_ref_count(type3_238))));
                        (name2_237 = come_decrement_ref_count(name2_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, type3_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_233->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 579, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_235),(struct sType*)come_increment_ref_count(type2_234))));
                }
                if(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, type2_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_235 = come_decrement_ref_count(name_235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer(sType_finalize, type2_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_235 = come_decrement_ref_count(name_235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            ((struct tuple2$2char$phchar$ph*)(__right_value231=parse_attribute(info,(_Bool)0)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1char$ph_reset(info->generics_type_names);
            source_tail_241=info->p;
            header_242=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 603, "struct buffer*"))));
            buffer_append_str(header_242,"struct ");
            buffer_append(header_242,source_head_222,source_tail_241-source_head_222);
            id_243=(char*)come_increment_ref_count(__builtin_string(type_name_224));
            add_come_code_at_come_struct_header(info,id_243,"%s;\n",((char*)(__right_value235=buffer_to_string(header_242))));
            (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 610, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value237=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 610, "struct sNothingNode*")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__126 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value238=_inf_value5)));
            come_call_finalizer(sClass_finalize, generics_class_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_243 = come_decrement_ref_count(id_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sNothingNode_finalize, __right_value237, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value238) ? __right_value238 = come_decrement_ref_count(__right_value238, ((struct sNode*)__right_value238)->finalize, ((struct sNode*)__right_value238)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__126;
            come_call_finalizer(sClass_finalize, generics_class_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_243 = come_decrement_ref_count(id_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            (_condtional_value_X7=(((struct sClass*)(__right_value239=map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0))))==((void*)0))),            come_call_finalizer(sClass_finalize, __right_value239, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X7            ) {
                __dec_obj66=struct_class_244,
                struct_class_244=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 615, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_224)),(struct sClass*)come_increment_ref_count(struct_class_244));
            }
            else {
                __dec_obj67=struct_class_244,
                struct_class_244=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0)));
                come_call_finalizer(sClass_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(struct_class_244->mFields);
            }
            type_245=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 623, "struct sType*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,info));
            override__246=((struct sType*)(__right_value247=map$2char$phsType$ph_at(info->types,type_name_224,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value247, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            override__246            ) {
                if(                override__246->mTypedef                ) {
                    type_245->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_224),(struct sType*)come_increment_ref_count(type_245));
            parent_class_247=((void*)0);
            if(            parsecmp("extends",info)            ) {
                ((char*)(__right_value248=parse_word(info)));
                (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                parent_class_name_248=(char*)come_increment_ref_count(parse_word(info));
                parent_class_247=((struct sClass*)(__right_value250=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_248)));
                come_call_finalizer(sClass_finalize, __right_value250, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                parent_class_247==((void*)0)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value251=err_msg(info,"invalid class name(%s)",parent_class_name_248)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value251, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(1);
                }
                (parent_class_name_248 = come_decrement_ref_count(parent_class_name_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            expected_next_character(123,info);
            while(            (_Bool)1            ) {
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_249=(_Bool)0;
                {
                    p_250=info->p;
                    sline_251=info->sline;
                    multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value252=backtrace_parse_type((_Bool)1,info)));
                    type_252=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_253=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_254=multiple_assign_var10->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value252, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    err_254&&*info->p==44                    ) {
                        multiple_declare_249=(_Bool)1;
                    }
                    info->p=p_250;
                    info->sline=sline_251;
                    come_call_finalizer(sType_finalize, type_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_253 = come_decrement_ref_count(name_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                multiple_declare_249                ) {
                    multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value253=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_255=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_256=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_257=multiple_assign_var11->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value253, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    multiple_assign_var12=((struct tuple2$2sType$phchar$ph*)(__right_value254=parse_variable_name((struct sType*)come_increment_ref_count(base_type_255),(_Bool)1,info)));
                    type2_258=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_259=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value254, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_244->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 677, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_259),(struct sType*)come_increment_ref_count(type2_258))));
                    while(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sType$phchar$ph*)(__right_value257=parse_variable_name((struct sType*)come_increment_ref_count(base_type_255),(_Bool)0,info)));
                        type2_260=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_261=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_244->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 685, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_261),(struct sType*)come_increment_ref_count(type2_260))));
                        come_call_finalizer(sType_finalize, type2_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (name2_261 = come_decrement_ref_count(name2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    come_call_finalizer(sType_finalize, base_type_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type2_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name2_259 = come_decrement_ref_count(name2_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value260=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_262=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_263=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_264=multiple_assign_var14->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value260, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_264                    ) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_244->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 695, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_263),(struct sType*)come_increment_ref_count(type2_262))));
                    come_call_finalizer(sType_finalize, type2_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_263 = come_decrement_ref_count(name_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_265=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph_reset(info->generics_type_names);
            source_tail_266=info->p;
            header_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 720, "struct buffer*"))));
            buffer_append(header_267,source_head_222,source_tail_266-source_head_222);
            id_268=(char*)come_increment_ref_count(__builtin_string(type_name_224));
            add_come_code_at_come_struct_header(info,id_268,"%s;\n",((char*)(__right_value267=buffer_to_string(header_267))));
            (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            string_operator_equals(struct_attribute_223,"")&&string_operator_equals(struct_attribute2_265,"")            ) {
            }
            else if(            string_operator_equals(struct_attribute_223,"")            ) {
                __dec_obj68=struct_class_244->mAttribute,
                struct_class_244->mAttribute=(char*)come_increment_ref_count(struct_attribute2_265);
                __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_265,"")            ) {
                __dec_obj69=struct_class_244->mAttribute,
                struct_class_244->mAttribute=(char*)come_increment_ref_count(struct_attribute_223);
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj70=struct_class_244->mAttribute,
                struct_class_244->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value269=string_operator_add(struct_attribute_223," "))),struct_attribute2_265));
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 738, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value273=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 738, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),struct_class_244,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__127 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value274=_inf_value6)));
            come_call_finalizer(sClass_finalize, struct_class_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (struct_attribute2_265 = come_decrement_ref_count(struct_attribute2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, header_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_268 = come_decrement_ref_count(id_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sStructNode_finalize, __right_value273, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value274) ? __right_value274 = come_decrement_ref_count(__right_value274, ((struct sNode*)__right_value274)->finalize, ((struct sNode*)__right_value274)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__127;
            come_call_finalizer(sClass_finalize, struct_class_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (struct_attribute2_265 = come_decrement_ref_count(struct_attribute2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, header_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_268 = come_decrement_ref_count(id_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    (_condtional_value_X8=(!gComeC&&((charp_operator_equals(buf,"uniq")&&string_operator_equals(((char*)(__right_value276=charp_substring(info->p,0,strlen("class")))),"class"))||charp_operator_equals(buf,"class")))),    (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    _condtional_value_X8    ) {
        uniq_class_269=(_Bool)0;
        if(        charp_operator_equals(buf,"uniq")        ) {
            ((char*)(__right_value277=parse_word(info)));
            (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            uniq_class_269=(_Bool)1;
        }
        source_head_270=head;
        type_name_271=(char*)come_increment_ref_count(parse_word(info));
        id_272=(char*)come_increment_ref_count(__builtin_string(type_name_271));
        add_come_code_at_come_struct_header(info,id_272,"struct %s;\n",type_name_271);
        parent_class_273=((void*)0);
        if(        parsecmp("extends",info)        ) {
            ((char*)(__right_value280=parse_word(info)));
            (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            parent_class_name_274=(char*)come_increment_ref_count(parse_word(info));
            parent_class_273=((struct sClass*)(__right_value282=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_274)));
            come_call_finalizer(sClass_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            parent_class_273==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value283=err_msg(info,"invalid class name(%s)",parent_class_name_274)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(1);
            }
            (parent_class_name_274 = come_decrement_ref_count(parent_class_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        parent_classes_275=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 771, "struct list$1sClass$p*"))));
        parent_class2_278=parent_class_273;
        while(        parent_class2_278        ) {
            list$1sClass$p_add(parent_classes_275,parent_class2_278);
            if(            parent_class_273->mParentClassName            ) {
                parent_class2_278=((struct sClass*)(__right_value291=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value290=__builtin_string(parent_class_273->mParentClassName))))));
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                parent_class2_278=((void*)0);
            }
        }
        struct_class_282=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 784, "struct sClass*")),(char*)come_increment_ref_count(type_name_271),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,uniq_class_269,info));
        if(        parent_class_273        ) {
            __dec_obj71=struct_class_282->mParentClassName,
            struct_class_282->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_273->mName, "14struct.c", 787, "char*"));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        defining_class_283=info->defining_class;
        info->defining_class=struct_class_282;
        if(        (_condtional_value_X9=(((struct sClass*)(__right_value295=map$2char$phsClass$ph_at(info->classes,type_name_271,((void*)0))))==((void*)0))),        come_call_finalizer(sClass_finalize, __right_value295, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X9        ) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_271),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_282)));
        }
        else {
            ((struct sClass*)(__right_value297=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_271)))->mUniq=uniq_class_269;
            come_call_finalizer(sClass_finalize, __right_value297, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        for(        (_condtional_value_X10=(o2_saved_289=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value303=list$1sClass$p_reverse(parent_classes_275))))),parent_292=list$1sClass$p_begin((o2_saved_289)))),        come_call_finalizer(list$1sClass$p$p_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X10        ;        !list$1sClass$p_end((o2_saved_289))        ;        parent_292=list$1sClass$p_next((o2_saved_289))        ){
            for(            o2_saved_295=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((parent_292->mFields)),it_296=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_295))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_295))            ;            it_296=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_295))            ){
                list$1tuple2$2char$phsType$ph$ph_add(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_296)));
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sClass$p$p_finalize, o2_saved_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        expected_next_character(123,info);
        head_297=info->p;
        p_saved_298=((void*)0);
        sline_saved_299=0;
        sname_saved_300=((void*)0);
        methods_301=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 813, "struct list$1sNode$ph*"))));
        while(        (_Bool)1        ) {
            if(            p_saved_298            ) {
                if(                *info->p==0                ) {
                    info->p=p_saved_298;
                    info->sline=sline_saved_299;
                    __dec_obj72=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_300));
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    p_saved_298=((void*)0);
                    sline_saved_299=0;
                    __dec_obj73=sname_saved_300,
                    sname_saved_300=((void*)0);
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    __dec_obj74=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__304=parsecmp("include",info);
            multiple_declare_305=(_Bool)0;
            if(            include__304==(_Bool)0            ) {
                p_306=info->p;
                sline_307=info->sline;
                if(                memcmp(info->p,"new(",4)!=0                ) {
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value308=backtrace_parse_type((_Bool)1,info)));
                    type_308=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_309=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_310=multiple_assign_var15->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    err_310&&*info->p==44                    ) {
                        multiple_declare_305=(_Bool)1;
                    }
                    come_call_finalizer(sType_finalize, type_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_309 = come_decrement_ref_count(name_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                info->p=p_306;
                info->sline=sline_307;
            }
            define_function_flag_311=(_Bool)0;
            if(            include__304==(_Bool)0            ) {
                p_312=info->p;
                sline_313=info->sline;
                if(                memcmp(info->p,"new(",4)==0                ) {
                    define_function_flag_311=(_Bool)1;
                }
                else {
                    invalid_type_314=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value309=backtrace_parse_type((_Bool)0,info)));
                        result_type_315=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_316=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_317=multiple_assign_var16->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value309, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, result_type_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (fun_name_316 = come_decrement_ref_count(fun_name_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    word_318=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95                    ) {
                        __dec_obj75=word_318,
                        word_318=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(word_318,"extern")                        ) {
                            __dec_obj76=word_318,
                            word_318=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                    }
                    else {
                        __dec_obj77=word_318,
                        word_318=((void*)0);
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_318                    ) {
                        if(                        is_type_name(word_318,info)                        ) {
                            while(                            *info->p==42                            ) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93                            ) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58                            ) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58                            ) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95                            ) {
                                __dec_obj78=word_318,
                                word_318=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            }
                        }
                        if(                        strlen(word_318)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))                        ) {
                            define_function_flag_311=(_Bool)1;
                        }
                    }
                    (word_318 = come_decrement_ref_count(word_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                info->p=p_312;
                info->sline=sline_313;
            }
            if(            define_function_flag_311            ) {
                tail_319=info->p;
                pointer_num_320=1;
                __dec_obj79=info->class_type,
                info->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 923, "struct sType*")),(char*)come_increment_ref_count(type_name_271),(_Bool)0,info));
                come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->class_type->mPointerNum=pointer_num_320;
                info->in_class=(_Bool)1;
                method_321=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj80=info->class_type,
                info->class_type=((void*)0);
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph_push_back(methods_301,(struct sNode*)come_increment_ref_count(method_321));
                ((method_321) ? method_321 = come_decrement_ref_count(method_321, ((struct sNode*)method_321)->finalize, ((struct sNode*)method_321)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            multiple_declare_305            ) {
                multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value319=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_325=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_326=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_327=multiple_assign_var17->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value319, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value320=parse_variable_name((struct sType*)come_increment_ref_count(base_type_325),(_Bool)1,info)));
                type2_328=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_329=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value320, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 940, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_329),(struct sType*)come_increment_ref_count(type2_328))));
                while(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sType$phchar$ph*)(__right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_325),(_Bool)0,info)));
                    type2_330=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_331=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value323, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 948, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_331),(struct sType*)come_increment_ref_count(type2_330))));
                    come_call_finalizer(sType_finalize, type2_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name2_331 = come_decrement_ref_count(name2_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                expected_next_character(59,info);
                come_call_finalizer(sType_finalize, base_type_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type2_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name2_329 = come_decrement_ref_count(name2_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            parsecmp("include",info)            ) {
                ((char*)(__right_value326=parse_word(info)));
                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                module_name_332=(char*)come_increment_ref_count(parse_word(info));
                params_333=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 957, "struct list$1char$ph*"))));
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        word_334=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_333,(char*)come_increment_ref_count(word_334));
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value331=err_msg(info,"invalid source end")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value331, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_334 = come_decrement_ref_count(word_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value332=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value332, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        (word_334 = come_decrement_ref_count(word_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                if(                *info->p==59                ) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_298=info->p;
                sline_saved_299=info->sline;
                __dec_obj84=sname_saved_300,
                sname_saved_300=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj85=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_332));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->sline=0;
                if(                (_condtional_value_X11=(((struct sClassModule*)(__right_value337=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value336=__builtin_string(module_name_332))))))==((void*)0))),                (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                come_call_finalizer(sClassModule_finalize, __right_value337, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X11                ) {
                    ((struct tuple2$2int$bool$*)(__right_value338=err_msg(info,"module not found")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(1);
                }
                module_341=((struct sClassModule*)(__right_value341=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value340=__builtin_string(module_name_332))))));
                (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value341, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                list$1char$ph_length(module_341->mParams)!=list$1char$ph_length(params_333)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value342=err_msg(info,"invalid parametor number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value342, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(1);
                }
                __dec_obj87=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "14struct.c", 1011, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                i_347=0;
                for(                o2_saved_348=(struct list$1char$ph*)come_increment_ref_count((module_341->mParams)),it_349=list$1char$ph_begin((o2_saved_348))                ;                !list$1char$ph_end((o2_saved_348))                ;                it_349=list$1char$ph_next((o2_saved_348))                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_349)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value359=list$1char$ph_operator_load_element(params_333,i_347))))));
                    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    i_347++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                info->p=module_341->mText;
                info->sline=module_341->mSLine;
                __dec_obj88=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_341->mSName));
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (module_name_332 = come_decrement_ref_count(module_name_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params_333, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value362=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_377=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_378=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_379=multiple_assign_var20->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value362, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_379                ) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1030, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_378),(struct sType*)come_increment_ref_count(type2_377))));
                if(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer(sType_finalize, type2_377, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_378 = come_decrement_ref_count(name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_298        ) {
            if(            info->p==0            ) {
                info->p=p_saved_298;
                info->sline=sline_saved_299;
                __dec_obj89=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_300));
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                p_saved_298=((void*)0);
                sline_saved_299=0;
            }
        }
        list$1char$ph_reset(info->generics_type_names);
        info->defining_class=defining_class_283;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 1064, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value368=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "14struct.c", 1064, "struct sClassNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_271)),(struct sClass*)come_increment_ref_count(struct_class_282),(struct list$1sNode$ph*)come_increment_ref_count(methods_301),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value374=_inf_value7)));
        (type_name_271 = come_decrement_ref_count(type_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (id_272 = come_decrement_ref_count(id_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_saved_300 = come_decrement_ref_count(sname_saved_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, methods_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClassNode_finalize, __right_value368, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value374) ? __right_value374 = come_decrement_ref_count(__right_value374, ((struct sNode*)__right_value374)->finalize, ((struct sNode*)__right_value374)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
        (type_name_271 = come_decrement_ref_count(type_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (id_272 = come_decrement_ref_count(id_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_saved_300 = come_decrement_ref_count(sname_saved_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, methods_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__167 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value375=top_level_v97(buf,head,head_sline,info))));
    ((__right_value375) ? __right_value375 = come_decrement_ref_count(__right_value375, ((struct sNode*)__right_value375)->finalize, ((struct sNode*)__right_value375)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__167) ? __result_obj__167 = come_decrement_ref_count(__result_obj__167, ((struct sNode*)__result_obj__167)->finalize, ((struct sNode*)__result_obj__167)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__167;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
struct sStructNobodyNode* __result_obj__123;
void* __right_value208 = (void*)0;
struct sStructNobodyNode* result_231;
void* __right_value209 = (void*)0;
char* __dec_obj63;
void* __right_value210 = (void*)0;
char* __dec_obj64;
struct sStructNobodyNode* __result_obj__124;
    if(    self==(void*)0    ) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result_231=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*"));
    if(    self!=((void*)0)    ) {
        result_231->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj63=result_231->sname,
        result_231->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNobodyNode_clone", 5, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_231->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj64=result_231->mName,
        result_231->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNobodyNode_clone", 7, "char*"));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__124 = result_231;
    come_call_finalizer(sStructNobodyNode_finalize, result_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self){
struct list$1sClass$p* __result_obj__128;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__128 = (struct list$1sClass$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1sClass$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it_276;
struct list_item$1sClass$p* prev_it_277;
    it_276=self->head;
    while(    it_276!=((void*)0)    ) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer(list_item$1sClass$p$p_finalize, prev_it_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item){
void* __right_value286 = (void*)0;
struct list_item$1sClass$p* litem_279;
void* __right_value287 = (void*)0;
struct list_item$1sClass$p* litem_280;
void* __right_value288 = (void*)0;
struct list_item$1sClass$p* litem_281;
struct list$1sClass$p* __result_obj__129;
    if(    self->len==0    ) {
        litem_279=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value286=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sClass$p*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        litem_279->item=item;
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1    ) {
        litem_280=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value287=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sClass$p*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        litem_280->item=item;
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value288=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sClass$p*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        litem_281->item=item;
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self){
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sClass$p* result_284;
struct list_item$1sClass$p* it_285;
struct list$1sClass$p* __result_obj__131;
    result_284=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "/usr/local/include/comelang.h", 1791, "struct list$1sClass$p*"))));
    it_285=self->tail;
    while(    it_285!=((void*)0)    ) {
        list$1sClass$p_push_back(result_284,it_285->item);
        it_285=it_285->prev;
    }
    __result_obj__131 = (struct list$1sClass$p*)come_increment_ref_count(result_284);
    come_call_finalizer(list$1sClass$p$p_finalize, result_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item){
void* __right_value300 = (void*)0;
struct list_item$1sClass$p* litem_286;
void* __right_value301 = (void*)0;
struct list_item$1sClass$p* litem_287;
void* __right_value302 = (void*)0;
struct list_item$1sClass$p* litem_288;
struct list$1sClass$p* __result_obj__130;
    if(    self->len==0    ) {
        litem_286=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value300=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sClass$p*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        litem_286->item=item;
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1    ) {
        litem_287=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value301=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sClass$p*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        litem_287->item=item;
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value302=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sClass$p*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        litem_288->item=item;
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self){
struct sClass* result_290;
struct sClass* __result_obj__132;
struct sClass* __result_obj__133;
struct sClass* result_291;
struct sClass* __result_obj__134;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_290,0,sizeof(struct sClass*));
        __result_obj__132 = result_290;
        return __result_obj__132;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__133 = self->it->item;
        return __result_obj__133;
    }
    memset(&result_291,0,sizeof(struct sClass*));
    __result_obj__134 = result_291;
    return __result_obj__134;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self){
struct sClass* result_293;
struct sClass* __result_obj__135;
struct sClass* __result_obj__136;
struct sClass* result_294;
struct sClass* __result_obj__137;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_293,0,sizeof(struct sClass*));
        __result_obj__135 = result_293;
        return __result_obj__135;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__136 = self->it->item;
        return __result_obj__136;
    }
    memset(&result_294,0,sizeof(struct sClass*));
    __result_obj__137 = result_294;
    return __result_obj__137;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_302;
int i_303;
    for(    i_302=0    ;    i_302<self->size    ;    i_302++    ){
        if(        self->item_existance[i_302]        ) {
            if(            1            ) {
                (self->items[i_302] = come_decrement_ref_count(self->items[i_302], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_303=0    ;    i_303<self->size    ;    i_303++    ){
        if(        self->item_existance[i_303]        ) {
            if(            1            ) {
                (self->keys[i_303] = come_decrement_ref_count(self->keys[i_303], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value316 = (void*)0;
struct list_item$1sNode$ph* litem_322;
struct sNode* __dec_obj81;
void* __right_value317 = (void*)0;
struct list_item$1sNode$ph* litem_323;
struct sNode* __dec_obj82;
void* __right_value318 = (void*)0;
struct list_item$1sNode$ph* litem_324;
struct sNode* __dec_obj83;
struct list$1sNode$ph* __result_obj__138;
    if(    self->len==0    ) {
        litem_322=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value316=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sNode$ph*"))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj81=litem_322->item,
        litem_322->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1    ) {
        litem_323=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value317=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sNode$ph*"))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj82=litem_323->item,
        litem_323->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value318=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sNode$ph*"))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj83=litem_324->item,
        litem_324->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result_obj__138 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__138;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_335;
unsigned int hash_336;
unsigned int it_337;
struct sClassModule* __result_obj__139;
struct sClassModule* __result_obj__140;
struct sClassModule* __result_obj__141;
struct sClassModule* __result_obj__142;
default_value_335 = (void*)0;
    memset(&default_value_335,0,sizeof(struct sClassModule*));
    hash_336=string_get_hash_key(((char*)key))%self->size;
    it_337=hash_336;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_337]        ) {
            if(            string_equals(self->keys[it_337],key)            ) {
                __result_obj__139 = (struct sClassModule*)come_increment_ref_count(self->items[it_337]);
                come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__139;
            }
            it_337++;
            if(            it_337>=self->size            ) {
                it_337=0;
            }
            else if(            it_337==hash_336            ) {
                __result_obj__140 = (struct sClassModule*)come_increment_ref_count(default_value_335);
                come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__140;
            }
        }
        else {
            __result_obj__141 = (struct sClassModule*)come_increment_ref_count(default_value_335);
            come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__141;
        }
    }
    __result_obj__142 = (struct sClassModule*)come_increment_ref_count(default_value_335);
    come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
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
struct sClassModule* default_value_338;
unsigned int hash_339;
unsigned int it_340;
struct sClassModule* __result_obj__143;
struct sClassModule* __result_obj__144;
struct sClassModule* __result_obj__145;
struct sClassModule* __result_obj__146;
default_value_338 = (void*)0;
    memset(&default_value_338,0,sizeof(struct sClassModule*));
    hash_339=string_get_hash_key(((char*)key))%self->size;
    it_340=hash_339;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_340]        ) {
            if(            string_equals(self->keys[it_340],key)            ) {
                __result_obj__143 = (struct sClassModule*)come_increment_ref_count(self->items[it_340]);
                come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__143;
            }
            it_340++;
            if(            it_340>=self->size            ) {
                it_340=0;
            }
            else if(            it_340==hash_339            ) {
                __result_obj__144 = (struct sClassModule*)come_increment_ref_count(default_value_338);
                come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sClassModule*)come_increment_ref_count(default_value_338);
            come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sClassModule*)come_increment_ref_count(default_value_338);
    come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
int i_342;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1char$ph* __dec_obj86;
struct map$2char$phchar$ph* __result_obj__148;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1912, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value345=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1913, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1914, "_Bool*"))));
    for(    i_342=0    ;    i_342<128    ;    i_342++    ){
        self->item_existance[i_342]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj86=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1924, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__148 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__147;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__147 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_343;
struct list_item$1char$p* prev_it_344;
    it_343=self->head;
    while(    it_343!=((void*)0)    ) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_345;
int i_346;
    for(    i_345=0    ;    i_345<self->size    ;    i_345++    ){
        if(        self->item_existance[i_345]        ) {
            if(            1            ) {
                (self->items[i_345] = come_decrement_ref_count(self->items[i_345], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_346=0    ;    i_346<self->size    ;    i_346++    ){
        if(        self->item_existance[i_346]        ) {
            if(            1            ) {
                (self->keys[i_346] = come_decrement_ref_count(self->keys[i_346], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_367;
unsigned int it_368;
_Bool same_key_exist_369;
char* it2_370;
struct map$2char$phchar$ph* __result_obj__159;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_367=string_get_hash_key(((char*)key))%self->size;
    it_368=hash_367;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_368]        ) {
            if(            string_equals(self->keys[it_368],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_368]);
                    (self->keys[it_368] = come_decrement_ref_count(self->keys[it_368], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_368]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_368]);
                    self->keys[it_368]=key;
                }
                if(                1                ) {
                    (self->items[it_368] = come_decrement_ref_count(self->items[it_368], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_368]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_368]=item;
                }
                break;
            }
            it_368++;
            if(            it_368>=self->size            ) {
                it_368=0;
            }
            else if(            it_368==hash_367            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_368]=(_Bool)1;
            if(            1            ) {
                self->keys[it_368]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_368]=key;
            }
            if(            1            ) {
                self->items[it_368]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_368]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_369=(_Bool)0;
    for(    it2_370=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_370=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_370,key)        ) {
            same_key_exist_369=(_Bool)1;
        }
    }
    if(    !same_key_exist_369    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__159 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__159;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_350;
void* __right_value351 = (void*)0;
char** keys_351;
void* __right_value352 = (void*)0;
char** items_352;
void* __right_value353 = (void*)0;
_Bool* item_existance_353;
int len_354;
char* it_357;
char* default_value_360;
void* __right_value354 = (void*)0;
char* it2_361;
unsigned int hash_364;
int n_365;
char* default_value_366;
void* __right_value355 = (void*)0;
default_value_360 = (void*)0;
default_value_366 = (void*)0;
    size_350=self->size*10;
    keys_351=(char**)come_increment_ref_count(((char**)(__right_value351=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_350)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_352=(char**)come_increment_ref_count(((char**)(__right_value352=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_350)), "/usr/local/include/comelang.h", 2152, "char**"))));
    item_existance_353=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_350)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_354=0;
    for(    it_357=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_357=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_360,0,sizeof(char*));
        it2_361=((char*)(__right_value354=map$2char$phchar$ph_at(self,it_357,(char*)come_increment_ref_count(default_value_360))));
        (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_364=string_get_hash_key(((char*)it_357))%size_350;
        n_365=hash_364;
        while(        (_Bool)1        ) {
            if(            item_existance_353[n_365]            ) {
                n_365++;
                if(                n_365>=size_350                ) {
                    n_365=0;
                }
                else if(                n_365==hash_364                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_353[n_365]=(_Bool)1;
                keys_351[n_365]=it_357;
                items_352[n_365]=((char*)(__right_value355=map$2char$phchar$ph_at(self,it_357,(char*)come_increment_ref_count(default_value_366))));
                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_354++;
                (default_value_366 = come_decrement_ref_count(default_value_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_366 = come_decrement_ref_count(default_value_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_360 = come_decrement_ref_count(default_value_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_351;
    self->items=items_352;
    self->item_existance=item_existance_353;
    self->size=size_350;
    self->len=len_354;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_355;
char* __result_obj__149;
char* __result_obj__150;
char* result_356;
char* __result_obj__151;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_355,0,sizeof(char*));
        __result_obj__149 = result_355;
        return __result_obj__149;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__150 = self->key_list->it->item;
        return __result_obj__150;
    }
    memset(&result_356,0,sizeof(char*));
    __result_obj__151 = result_356;
    return __result_obj__151;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_358;
char* __result_obj__152;
char* __result_obj__153;
char* result_359;
char* __result_obj__154;
result_358 = (void*)0;
result_359 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_358,0,sizeof(char*));
        __result_obj__152 = result_358;
        return __result_obj__152;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__153 = self->key_list->it->item;
        return __result_obj__153;
    }
    memset(&result_359,0,sizeof(char*));
    __result_obj__154 = result_359;
    return __result_obj__154;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_362;
unsigned int it_363;
char* __result_obj__155;
char* __result_obj__156;
char* __result_obj__157;
char* __result_obj__158;
    hash_362=string_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_363]        ) {
            if(            string_equals(self->keys[it_363],key)            ) {
                __result_obj__155 = (char*)come_increment_ref_count(self->items[it_363]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__155;
            }
            it_363++;
            if(            it_363>=self->size            ) {
                it_363=0;
            }
            else if(            it_363==hash_362            ) {
                __result_obj__156 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__156;
            }
        }
        else {
            __result_obj__157 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__157;
        }
    }
    __result_obj__158 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_371;
int i_372;
char* __result_obj__160;
char* default_value_373;
char* __result_obj__161;
default_value_373 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_371=self->head;
    i_372=0;
    while(    it_371!=((void*)0)    ) {
        if(        position==i_372        ) {
            __result_obj__160 = (char*)come_increment_ref_count(it_371->item);
            (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__160;
        }
        it_371=it_371->next;
        i_372++;
    }
    memset(&default_value_373,0,sizeof(char*));
    __result_obj__161 = (char*)come_increment_ref_count(default_value_373);
    (default_value_373 = come_decrement_ref_count(default_value_373, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_374;
int i_375;
char* __result_obj__162;
char* default_value_376;
char* __result_obj__163;
default_value_376 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_374=self->head;
    i_375=0;
    while(    it_374!=((void*)0)    ) {
        if(        position==i_375        ) {
            __result_obj__162 = (char*)come_increment_ref_count(it_374->item);
            (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__162;
        }
        it_374=it_374->next;
        i_375++;
    }
    memset(&default_value_376,0,sizeof(char*));
    __result_obj__163 = (char*)come_increment_ref_count(default_value_376);
    (default_value_376 = come_decrement_ref_count(default_value_376, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
struct sClassNode* __result_obj__164;
void* __right_value369 = (void*)0;
struct sClassNode* result_380;
void* __right_value370 = (void*)0;
char* __dec_obj90;
void* __right_value371 = (void*)0;
char* __dec_obj91;
void* __right_value372 = (void*)0;
struct sClass* __dec_obj92;
void* __right_value373 = (void*)0;
struct list$1sNode$ph* __dec_obj93;
struct sClassNode* __result_obj__165;
    if(    self==(void*)0    ) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_380=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*"));
    if(    self!=((void*)0)    ) {
        result_380->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj90=result_380->sname,
        result_380->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sClassNode_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_380->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj91=result_380->mName,
        result_380->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClassNode_clone", 7, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        __dec_obj92=result_380->mClass,
        result_380->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)    ) {
        __dec_obj93=result_380->mMethods,
        result_380->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mMethods));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__165 = result_380;
    come_call_finalizer(sClassNode_finalize, result_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_struct_381;
char* p_382;
int sline_383;
void* __right_value376 = (void*)0;
char* type_name_384;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
char* struct_attribute_385;
void* __right_value381 = (void*)0;
char* type_name_386;
void* __right_value382 = (void*)0;
struct sNode* __result_obj__168;
void* __right_value383 = (void*)0;
struct sNode* __result_obj__169;
    define_struct_381=(_Bool)0;
    {
        p_382=info->p;
        sline_383=info->sline;
        if(        charp_operator_equals(buf,"struct")        ) {
            if(            xisalpha(*info->p)||*info->p==95            ) {
                type_name_384=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)                ) {
                    ((char*)(__right_value377=parse_word(info)));
                    (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((char*)(__right_value378=parse_word(info)));
                    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                *info->p==123                ) {
                    ((char*)(__right_value379=skip_block(info,(_Bool)0)));
                    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        define_struct_381=(_Bool)1;
                    }
                }
                (type_name_384 = come_decrement_ref_count(type_name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_382;
        info->sline=sline_383;
    }
    if(    define_struct_381    ) {
        struct_attribute_385=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_386=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__168 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value382=parse_struct((char*)come_increment_ref_count(type_name_386),(char*)come_increment_ref_count(struct_attribute_385),info))));
        (struct_attribute_385 = come_decrement_ref_count(struct_attribute_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_386 = come_decrement_ref_count(type_name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value382) ? __right_value382 = come_decrement_ref_count(__right_value382, ((struct sNode*)__right_value382)->finalize, ((struct sNode*)__right_value382)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__168;
        (struct_attribute_385 = come_decrement_ref_count(struct_attribute_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_386 = come_decrement_ref_count(type_name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value383=string_node_v13(buf,head,head_sline,info))));
    ((__right_value383) ? __right_value383 = come_decrement_ref_count(__right_value383, ((struct sNode*)__right_value383)->finalize, ((struct sNode*)__right_value383)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__169;
}

