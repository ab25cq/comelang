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

struct sUnionNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    struct sClass* klass;
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
void output_union(struct sClass* klass, struct sInfo* info);
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
struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sUnionNode_terminated(struct sUnionNode* self);
char* sUnionNode_kind(struct sUnionNode* self);
_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sUnionNode_finalize(struct sUnionNode* self);
struct sNode* parse_union(char* type_name, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
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
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function

// body function
void output_union(struct sClass* klass, struct sInfo* info){
char* name_0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_1;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_2;
struct tuple2$2char$phsType$ph* it_5;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_8=0;
struct sType* type_9=0;
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
    buf_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "15union.c", 14, "struct buffer*"))));
    buffer_append_format(buf_1,"union %s\n{\n",klass->mName);
    for(    o2_saved_2=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_5=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_2))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_2))    ;    it_5=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_2))    ){
        multiple_assign_var1=it_5;
        name_8=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_9=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        buffer_append_str(buf_1,((char*)(__right_value2=make_define_var(type_9,name_8,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(buf_1,";\n");
        (name_8 = come_decrement_ref_count(name_8, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass->mAttribute==((void*)0)    ) {
        buffer_append_str(buf_1,"};\n");
    }
    else {
        buffer_append_format(buf_1,"} %s;\n",klass->mAttribute);
    }
    if(    (_condtional_value_X1=(((struct buffer*)(__right_value5=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value4=__builtin_string(name_0))))))==((void*)0))),    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
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
struct tuple2$2char$phsType$ph* result_3;
struct tuple2$2char$phsType$ph* __result_obj__1;
struct tuple2$2char$phsType$ph* __result_obj__2;
struct tuple2$2char$phsType$ph* result_4;
struct tuple2$2char$phsType$ph* __result_obj__3;
result_3 = (void*)0;
result_4 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_3,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__1 = result_3;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_4,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__3 = result_4;
    return __result_obj__3;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_6;
struct tuple2$2char$phsType$ph* __result_obj__4;
struct tuple2$2char$phsType$ph* __result_obj__5;
struct tuple2$2char$phsType$ph* result_7;
struct tuple2$2char$phsType$ph* __result_obj__6;
result_6 = (void*)0;
result_7 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_6,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__4 = result_6;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_7,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__6 = result_7;
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
struct list_item$1sType$ph* it_10;
struct list_item$1sType$ph* prev_it_11;
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        prev_it_11=it_10;
        it_10=it_10->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_12;
struct list_item$1sNode$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        prev_it_13=it_12;
        it_12=it_12->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_14;
struct list_item$1char$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)    ) {
        prev_it_15=it_14;
        it_14=it_14->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_16;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_17;
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        prev_it_17=it_16;
        it_16=it_16->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct buffer* default_value_18;
unsigned int hash_19;
unsigned int it_20;
struct buffer* __result_obj__7;
struct buffer* __result_obj__8;
struct buffer* __result_obj__9;
struct buffer* __result_obj__10;
default_value_18 = (void*)0;
    memset(&default_value_18,0,sizeof(struct buffer*));
    hash_19=string_get_hash_key(((char*)key))%self->size;
    it_20=hash_19;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_20]        ) {
            if(            string_equals(self->keys[it_20],key)            ) {
                __result_obj__7 = (struct buffer*)come_increment_ref_count(self->items[it_20]);
                come_call_finalizer(buffer_finalize, default_value_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__7;
            }
            it_20++;
            if(            it_20>=self->size            ) {
                it_20=0;
            }
            else if(            it_20==hash_19            ) {
                __result_obj__8 = (struct buffer*)come_increment_ref_count(default_value_18);
                come_call_finalizer(buffer_finalize, default_value_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct buffer*)come_increment_ref_count(default_value_18);
            come_call_finalizer(buffer_finalize, default_value_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct buffer*)come_increment_ref_count(default_value_18);
    come_call_finalizer(buffer_finalize, default_value_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_21;
unsigned int hash_22;
unsigned int it_23;
struct buffer* __result_obj__11;
struct buffer* __result_obj__12;
struct buffer* __result_obj__13;
struct buffer* __result_obj__14;
default_value_21 = (void*)0;
    memset(&default_value_21,0,sizeof(struct buffer*));
    hash_22=string_get_hash_key(((char*)key))%self->size;
    it_23=hash_22;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_23]        ) {
            if(            string_equals(self->keys[it_23],key)            ) {
                __result_obj__11 = (struct buffer*)come_increment_ref_count(self->items[it_23]);
                come_call_finalizer(buffer_finalize, default_value_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__11;
            }
            it_23++;
            if(            it_23>=self->size            ) {
                it_23=0;
            }
            else if(            it_23==hash_22            ) {
                __result_obj__12 = (struct buffer*)come_increment_ref_count(default_value_21);
                come_call_finalizer(buffer_finalize, default_value_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct buffer*)come_increment_ref_count(default_value_21);
            come_call_finalizer(buffer_finalize, default_value_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct buffer*)come_increment_ref_count(default_value_21);
    come_call_finalizer(buffer_finalize, default_value_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_41;
unsigned int it_42;
_Bool same_key_exist_59;
char* it2_62;
struct map$2char$phbuffer$ph* __result_obj__36;
    if(    self->len*10>=self->size    ) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_41=string_get_hash_key(((char*)key))%self->size;
    it_42=hash_41;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_42]        ) {
            if(            string_equals(self->keys[it_42],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_42]);
                    (self->keys[it_42] = come_decrement_ref_count(self->keys[it_42], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_42]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_42]);
                    self->keys[it_42]=key;
                }
                if(                1                ) {
                    come_call_finalizer(buffer_finalize, self->items[it_42], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_42]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_42]=item;
                }
                break;
            }
            it_42++;
            if(            it_42>=self->size            ) {
                it_42=0;
            }
            else if(            it_42==hash_41            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_42]=(_Bool)1;
            if(            1            ) {
                self->keys[it_42]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_42]=key;
            }
            if(            1            ) {
                self->items[it_42]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_42]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_59=(_Bool)0;
    for(    it2_62=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_62=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_62,key)        ) {
            same_key_exist_59=(_Bool)1;
        }
    }
    if(    !same_key_exist_59    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__36 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_24;
void* __right_value6 = (void*)0;
char** keys_25;
void* __right_value7 = (void*)0;
struct buffer** items_26;
void* __right_value8 = (void*)0;
_Bool* item_existance_27;
int len_28;
char* it_31;
struct buffer* default_value_34;
void* __right_value9 = (void*)0;
struct buffer* it2_35;
unsigned int hash_38;
int n_39;
struct buffer* default_value_40;
void* __right_value10 = (void*)0;
default_value_34 = (void*)0;
default_value_40 = (void*)0;
    size_24=self->size*10;
    keys_25=(char**)come_increment_ref_count(((char**)(__right_value6=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_24)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_26=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value7=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size_24)), "/usr/local/include/comelang.h", 2152, "struct buffer**"))));
    item_existance_27=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value8=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_24)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_28=0;
    for(    it_31=map$2char$phbuffer$ph_begin(self)    ;    !map$2char$phbuffer$ph_end(self)    ;    it_31=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_34,0,sizeof(struct buffer*));
        it2_35=((struct buffer*)(__right_value9=map$2char$phbuffer$ph_at(self,it_31,(struct buffer*)come_increment_ref_count(default_value_34))));
        come_call_finalizer(buffer_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_38=string_get_hash_key(((char*)it_31))%size_24;
        n_39=hash_38;
        while(        (_Bool)1        ) {
            if(            item_existance_27[n_39]            ) {
                n_39++;
                if(                n_39>=size_24                ) {
                    n_39=0;
                }
                else if(                n_39==hash_38                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_27[n_39]=(_Bool)1;
                keys_25[n_39]=it_31;
                items_26[n_39]=((struct buffer*)(__right_value10=map$2char$phbuffer$ph_at(self,it_31,(struct buffer*)come_increment_ref_count(default_value_40))));
                come_call_finalizer(buffer_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_28++;
                come_call_finalizer(buffer_finalize, default_value_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_25;
    self->items=items_26;
    self->item_existance=item_existance_27;
    self->size=size_24;
    self->len=len_28;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_29;
char* __result_obj__15;
char* __result_obj__16;
char* result_30;
char* __result_obj__17;
result_29 = (void*)0;
result_30 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_29,0,sizeof(char*));
        __result_obj__15 = result_29;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_30,0,sizeof(char*));
    __result_obj__17 = result_30;
    return __result_obj__17;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_32;
char* __result_obj__18;
char* __result_obj__19;
char* result_33;
char* __result_obj__20;
result_32 = (void*)0;
result_33 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_32,0,sizeof(char*));
        __result_obj__18 = result_32;
        return __result_obj__18;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__19 = self->key_list->it->item;
        return __result_obj__19;
    }
    memset(&result_33,0,sizeof(char*));
    __result_obj__20 = result_33;
    return __result_obj__20;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_36;
unsigned int it_37;
struct buffer* __result_obj__21;
struct buffer* __result_obj__22;
struct buffer* __result_obj__23;
struct buffer* __result_obj__24;
    hash_36=string_get_hash_key(((char*)key))%self->size;
    it_37=hash_36;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_37]        ) {
            if(            string_equals(self->keys[it_37],key)            ) {
                __result_obj__21 = (struct buffer*)come_increment_ref_count(self->items[it_37]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__21;
            }
            it_37++;
            if(            it_37>=self->size            ) {
                it_37=0;
            }
            else if(            it_37==hash_36            ) {
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
int it2_43;
struct list_item$1char$ph* it_44;
struct list$1char$ph* __result_obj__28;
    it2_43=0;
    it_44=self->head;
    while(    it_44!=((void*)0)    ) {
        if(        string_equals(it_44->item,item)        ) {
            list$1char$ph_delete(self,it2_43,it2_43+1);
            break;
        }
        it2_43++;
        it_44=it_44->next;
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_45;
struct list$1char$ph* __result_obj__25;
struct list_item$1char$ph* it_48;
int i_49;
struct list_item$1char$ph* prev_it_50;
struct list_item$1char$ph* it_51;
int i_52;
struct list_item$1char$ph* prev_it_53;
struct list_item$1char$ph* it_54;
struct list_item$1char$ph* head_prev_it_55;
struct list_item$1char$ph* tail_it_56;
int i_57;
struct list_item$1char$ph* prev_it_58;
struct list$1char$ph* __result_obj__27;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_45=tail;
        tail=head;
        head=tmp_45;
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
        it_48=self->head;
        i_49=0;
        while(        it_48!=((void*)0)        ) {
            if(            i_49<tail            ) {
                prev_it_50=it_48;
                it_48=it_48->next;
                i_49++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_49==tail            ) {
                self->head=it_48;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_48=it_48->next;
                i_49++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_51=self->head;
        i_52=0;
        while(        it_51!=((void*)0)        ) {
            if(            i_52==head            ) {
                self->tail=it_51->prev;
                self->tail->next=((void*)0);
            }
            if(            i_52>=head            ) {
                prev_it_53=it_51;
                it_51=it_51->next;
                i_52++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_51=it_51->next;
                i_52++;
            }
        }
    }
    else {
        it_54=self->head;
        head_prev_it_55=((void*)0);
        tail_it_56=((void*)0);
        i_57=0;
        while(        it_54!=((void*)0)        ) {
            if(            i_57==head            ) {
                head_prev_it_55=it_54->prev;
            }
            if(            i_57==tail            ) {
                tail_it_56=it_54;
            }
            if(            i_57>=head&&i_57<tail            ) {
                prev_it_58=it_54;
                it_54=it_54->next;
                i_57++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_54=it_54->next;
                i_57++;
            }
        }
        if(        head_prev_it_55!=((void*)0)        ) {
            head_prev_it_55->next=tail_it_56;
        }
        if(        tail_it_56!=((void*)0)        ) {
            tail_it_56->prev=head_prev_it_55;
        }
    }
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_46;
struct list_item$1char$ph* prev_it_47;
struct list$1char$ph* __result_obj__26;
    it_46=self->head;
    while(    it_46!=((void*)0)    ) {
        prev_it_47=it_46;
        it_46=it_46->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_60;
char* __result_obj__29;
char* __result_obj__30;
char* result_61;
char* __result_obj__31;
result_60 = (void*)0;
result_61 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_60,0,sizeof(char*));
        __result_obj__29 = result_60;
        return __result_obj__29;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_61,0,sizeof(char*));
    __result_obj__31 = result_61;
    return __result_obj__31;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_63;
char* __result_obj__32;
char* __result_obj__33;
char* result_64;
char* __result_obj__34;
result_63 = (void*)0;
result_64 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_63,0,sizeof(char*));
        __result_obj__32 = result_63;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_64,0,sizeof(char*));
    __result_obj__34 = result_64;
    return __result_obj__34;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value11 = (void*)0;
struct list_item$1char$ph* litem_65;
char* __dec_obj1;
void* __right_value12 = (void*)0;
struct list_item$1char$ph* litem_66;
char* __dec_obj2;
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_67;
char* __dec_obj3;
struct list$1char$ph* __result_obj__35;
    if(    self->len==0    ) {
        litem_65=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value11=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_65->prev=((void*)0);
        litem_65->next=((void*)0);
        __dec_obj1=litem_65->item,
        litem_65->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_65;
        self->head=litem_65;
    }
    else if(    self->len==1    ) {
        litem_66=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value12=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_66->prev=self->head;
        litem_66->next=((void*)0);
        __dec_obj2=litem_66->item,
        litem_66->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_66;
        self->head->next=litem_66;
    }
    else {
        litem_67=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_67->prev=self->tail;
        litem_67->next=((void*)0);
        __dec_obj3=litem_67->item,
        litem_67->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_67;
        self->tail=litem_67;
    }
    self->len++;
    __result_obj__35 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__35;
}

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value15 = (void*)0;
char* __dec_obj4;
struct sUnionNode* __result_obj__37;
    ((struct sNodeBase*)(__right_value15=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj4=self->name,
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->klass=klass;
    __result_obj__37 = (struct sUnionNode*)come_increment_ref_count(self);
    come_call_finalizer(sUnionNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sUnionNode_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

_Bool sUnionNode_terminated(struct sUnionNode* self){
    return (_Bool)1;
}

char* sUnionNode_kind(struct sUnionNode* self){
void* __right_value16 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value16=__builtin_string("sUnionNode"))));
    (__right_value16 = come_decrement_ref_count(__right_value16, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__38;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
struct sClass* klass_68;
void* __right_value17 = (void*)0;
char* name_69;
_Bool __result_obj__39;
    klass_68=self->klass;
    name_69=(char*)come_increment_ref_count(__builtin_string(self->name));
    output_union(klass_68,info);
    __result_obj__39 = (_Bool)1;
    (name_69 = come_decrement_ref_count(name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__39;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sUnionNode_finalize(struct sUnionNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* parse_union(char* type_name, struct sInfo* info){
struct sClass* klass_70;
void* __right_value18 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct sType* type_92;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct sType* override__137;
_Bool typedef__138;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sType* type_139;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type2_140=0;
char* name_141=0;
_Bool err_142=0;
void* __right_value81 = (void*)0;
char* name2_143;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
char* struct_attribute_147;
char* __dec_obj34;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* __right_value95 = (void*)0;
struct sNode* node_148;
_Bool Value_150;
struct sNode* __result_obj__82;
void* __right_value96 = (void*)0;
struct sNode* __result_obj__83;
klass_70 = (void*)0;
    if(    (_condtional_value_X2=(((struct sClass*)(__right_value18=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer(sClass_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X2    ) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "15union.c", 72, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        type_92=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 74, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_92)));
        klass_70=((struct sClass*)(__right_value74=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer(sClass_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        klass_70=((struct sClass*)(__right_value75=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer(sClass_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        override__137=((struct sType*)(__right_value76=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
        come_call_finalizer(sType_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        typedef__138=(_Bool)0;
        if(        override__137        ) {
            typedef__138=override__137->mTypedef;
        }
        type_139=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 87, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
        if(        typedef__138        ) {
            type_139->mTypedef=(_Bool)1;
        }
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_139)));
        come_call_finalizer(sType_finalize, type_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    parse_sharp_v5(info);
    expected_next_character(123,info);
    while(    (_Bool)1    ) {
        multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value80=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type2_140=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_141=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_142=multiple_assign_var2->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_142        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        if(        *info->p==44        ) {
            parse_sharp_v5(info);
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                name2_143=(char*)come_increment_ref_count(parse_word(info));
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_70->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 114, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_143),(struct sType*)come_increment_ref_count(type2_140))));
                (name2_143 = come_decrement_ref_count(name2_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            expected_next_character(59,info);
        }
        else {
            parse_sharp_v5(info);
            expected_next_character(59,info);
            parse_sharp_v5(info);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_70->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 125, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_141),(struct sType*)come_increment_ref_count(type2_140))));
        }
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            come_call_finalizer(sType_finalize, type2_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_141 = come_decrement_ref_count(name_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        parse_sharp_v5(info);
        come_call_finalizer(sType_finalize, type2_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_141 = come_decrement_ref_count(name_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    struct_attribute_147=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_equals(struct_attribute_147,"")    ) {
    }
    else {
        __dec_obj34=klass_70->mAttribute,
        klass_70->mAttribute=(char*)come_increment_ref_count(struct_attribute_147);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "15union.c", 147, "struct sNode");
    _inf_obj_value1=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(__right_value91=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc_v2(1, sizeof(struct sUnionNode)*(1), "15union.c", 147, "struct sUnionNode*")),(char*)come_increment_ref_count(type_name),klass_70,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    node_148=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sUnionNode_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_150=node_compile(node_148,info);
    if(    !Value_150    ) {
        __result_obj__82 = (void*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (struct_attribute_147 = come_decrement_ref_count(struct_attribute_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_148) ? node_148 = come_decrement_ref_count(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__82) ? __result_obj__82 = come_decrement_ref_count(__result_obj__82, ((struct sNode*)__result_obj__82)->finalize, ((struct sNode*)__result_obj__82)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__82;
    }
    else {
    }
    __result_obj__83 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value96=create_nothing_node(info))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (struct_attribute_147 = come_decrement_ref_count(struct_attribute_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((node_148) ? node_148 = come_decrement_ref_count(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__right_value96) ? __right_value96 = come_decrement_ref_count(__right_value96, ((struct sNode*)__right_value96)->finalize, ((struct sNode*)__right_value96)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__83) ? __result_obj__83 = come_decrement_ref_count(__result_obj__83, ((struct sNode*)__result_obj__83)->finalize, ((struct sNode*)__result_obj__83)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__83;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_71;
unsigned int it_72;
struct sClass* __result_obj__40;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
struct sClass* __result_obj__43;
    hash_71=string_get_hash_key(((char*)key))%self->size;
    it_72=hash_71;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_72]        ) {
            if(            string_equals(self->keys[it_72],key)            ) {
                __result_obj__40 = (struct sClass*)come_increment_ref_count(self->items[it_72]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__40;
            }
            it_72++;
            if(            it_72>=self->size            ) {
                it_72=0;
            }
            else if(            it_72==hash_71            ) {
                __result_obj__41 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__41;
            }
        }
        else {
            __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__42;
        }
    }
    __result_obj__43 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_88;
unsigned int it_89;
_Bool same_key_exist_90;
char* it2_91;
struct map$2char$phsClass$ph* __result_obj__50;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_88=string_get_hash_key(((char*)key))%self->size;
    it_89=hash_88;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_89]        ) {
            if(            string_equals(self->keys[it_89],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_89]);
                    (self->keys[it_89] = come_decrement_ref_count(self->keys[it_89], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_89]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_89]);
                    self->keys[it_89]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_89], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_89]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_89]=item;
                }
                break;
            }
            it_89++;
            if(            it_89>=self->size            ) {
                it_89=0;
            }
            else if(            it_89==hash_88            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_89]=(_Bool)1;
            if(            1            ) {
                self->keys[it_89]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_89]=key;
            }
            if(            1            ) {
                self->items[it_89]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_89]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_90=(_Bool)0;
    for(    it2_91=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_91=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_91,key)        ) {
            same_key_exist_90=(_Bool)1;
        }
    }
    if(    !same_key_exist_90    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__50 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__50;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_73;
void* __right_value19 = (void*)0;
char** keys_74;
void* __right_value20 = (void*)0;
struct sClass** items_75;
void* __right_value21 = (void*)0;
_Bool* item_existance_76;
int len_77;
char* it_80;
struct sClass* default_value_83;
void* __right_value22 = (void*)0;
struct sClass* it2_84;
unsigned int hash_85;
int n_86;
struct sClass* default_value_87;
void* __right_value23 = (void*)0;
default_value_83 = (void*)0;
default_value_87 = (void*)0;
    size_73=self->size*10;
    keys_74=(char**)come_increment_ref_count(((char**)(__right_value19=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_73)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_75=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value20=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_73)), "/usr/local/include/comelang.h", 2152, "struct sClass**"))));
    item_existance_76=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value21=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_73)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_77=0;
    for(    it_80=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_80=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_83,0,sizeof(struct sClass*));
        it2_84=((struct sClass*)(__right_value22=map$2char$phsClass$ph_at(self,it_80,(struct sClass*)come_increment_ref_count(default_value_83))));
        come_call_finalizer(sClass_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_85=string_get_hash_key(((char*)it_80))%size_73;
        n_86=hash_85;
        while(        (_Bool)1        ) {
            if(            item_existance_76[n_86]            ) {
                n_86++;
                if(                n_86>=size_73                ) {
                    n_86=0;
                }
                else if(                n_86==hash_85                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_76[n_86]=(_Bool)1;
                keys_74[n_86]=it_80;
                items_75[n_86]=((struct sClass*)(__right_value23=map$2char$phsClass$ph_at(self,it_80,(struct sClass*)come_increment_ref_count(default_value_87))));
                come_call_finalizer(sClass_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_77++;
                come_call_finalizer(sClass_finalize, default_value_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_74;
    self->items=items_75;
    self->item_existance=item_existance_76;
    self->size=size_73;
    self->len=len_77;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_78;
char* __result_obj__44;
char* __result_obj__45;
char* result_79;
char* __result_obj__46;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__44 = result_78;
        return __result_obj__44;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__45 = self->key_list->it->item;
        return __result_obj__45;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__46 = result_79;
    return __result_obj__46;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_81;
char* __result_obj__47;
char* __result_obj__48;
char* result_82;
char* __result_obj__49;
result_81 = (void*)0;
result_82 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_81,0,sizeof(char*));
        __result_obj__47 = result_81;
        return __result_obj__47;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__48 = self->key_list->it->item;
        return __result_obj__48;
    }
    memset(&result_82,0,sizeof(char*));
    __result_obj__49 = result_82;
    return __result_obj__49;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_110;
unsigned int it_111;
_Bool same_key_exist_112;
char* it2_113;
struct map$2char$phsType$ph* __result_obj__61;
    if(    self->len*10>=self->size    ) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_110=string_get_hash_key(((char*)key))%self->size;
    it_111=hash_110;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_111]        ) {
            if(            string_equals(self->keys[it_111],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_111]);
                    (self->keys[it_111] = come_decrement_ref_count(self->keys[it_111], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_111]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_111]);
                    self->keys[it_111]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sType_finalize, self->items[it_111], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_111]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_111]=item;
                }
                break;
            }
            it_111++;
            if(            it_111>=self->size            ) {
                it_111=0;
            }
            else if(            it_111==hash_110            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_111]=(_Bool)1;
            if(            1            ) {
                self->keys[it_111]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_111]=key;
            }
            if(            1            ) {
                self->items[it_111]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_111]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_112=(_Bool)0;
    for(    it2_113=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_113=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_113,key)        ) {
            same_key_exist_112=(_Bool)1;
        }
    }
    if(    !same_key_exist_112    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__61 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_93;
void* __right_value30 = (void*)0;
char** keys_94;
void* __right_value31 = (void*)0;
struct sType** items_95;
void* __right_value32 = (void*)0;
_Bool* item_existance_96;
int len_97;
char* it_100;
struct sType* default_value_103;
void* __right_value33 = (void*)0;
struct sType* it2_104;
unsigned int hash_107;
int n_108;
struct sType* default_value_109;
void* __right_value34 = (void*)0;
default_value_103 = (void*)0;
default_value_109 = (void*)0;
    size_93=self->size*10;
    keys_94=(char**)come_increment_ref_count(((char**)(__right_value30=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_93)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_95=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value31=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_93)), "/usr/local/include/comelang.h", 2152, "struct sType**"))));
    item_existance_96=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value32=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_93)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_97=0;
    for(    it_100=map$2char$phsType$ph_begin(self)    ;    !map$2char$phsType$ph_end(self)    ;    it_100=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_103,0,sizeof(struct sType*));
        it2_104=((struct sType*)(__right_value33=map$2char$phsType$ph_at(self,it_100,(struct sType*)come_increment_ref_count(default_value_103))));
        come_call_finalizer(sType_finalize, __right_value33, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_107=string_get_hash_key(((char*)it_100))%size_93;
        n_108=hash_107;
        while(        (_Bool)1        ) {
            if(            item_existance_96[n_108]            ) {
                n_108++;
                if(                n_108>=size_93                ) {
                    n_108=0;
                }
                else if(                n_108==hash_107                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_96[n_108]=(_Bool)1;
                keys_94[n_108]=it_100;
                items_95[n_108]=((struct sType*)(__right_value34=map$2char$phsType$ph_at(self,it_100,(struct sType*)come_increment_ref_count(default_value_109))));
                come_call_finalizer(sType_finalize, __right_value34, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_97++;
                come_call_finalizer(sType_finalize, default_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_94;
    self->items=items_95;
    self->item_existance=item_existance_96;
    self->size=size_93;
    self->len=len_97;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_98;
char* __result_obj__51;
char* __result_obj__52;
char* result_99;
char* __result_obj__53;
result_98 = (void*)0;
result_99 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_98,0,sizeof(char*));
        __result_obj__51 = result_98;
        return __result_obj__51;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__52 = self->key_list->it->item;
        return __result_obj__52;
    }
    memset(&result_99,0,sizeof(char*));
    __result_obj__53 = result_99;
    return __result_obj__53;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_101;
char* __result_obj__54;
char* __result_obj__55;
char* result_102;
char* __result_obj__56;
result_101 = (void*)0;
result_102 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_101,0,sizeof(char*));
        __result_obj__54 = result_101;
        return __result_obj__54;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__55 = self->key_list->it->item;
        return __result_obj__55;
    }
    memset(&result_102,0,sizeof(char*));
    __result_obj__56 = result_102;
    return __result_obj__56;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_105;
unsigned int it_106;
struct sType* __result_obj__57;
struct sType* __result_obj__58;
struct sType* __result_obj__59;
struct sType* __result_obj__60;
    hash_105=string_get_hash_key(((char*)key))%self->size;
    it_106=hash_105;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_106]        ) {
            if(            string_equals(self->keys[it_106],key)            ) {
                __result_obj__57 = (struct sType*)come_increment_ref_count(self->items[it_106]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__57;
            }
            it_106++;
            if(            it_106>=self->size            ) {
                it_106=0;
            }
            else if(            it_106==hash_105            ) {
                __result_obj__58 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__58;
            }
        }
        else {
            __result_obj__59 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__59;
        }
    }
    __result_obj__60 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__62;
void* __right_value35 = (void*)0;
struct sType* result_114;
void* __right_value36 = (void*)0;
struct sType* __dec_obj5;
void* __right_value37 = (void*)0;
struct sType* __dec_obj6;
void* __right_value45 = (void*)0;
struct list$1sType$ph* __dec_obj10;
void* __right_value46 = (void*)0;
struct sType* __dec_obj11;
void* __right_value48 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value49 = (void*)0;
struct sNode* __dec_obj13;
void* __right_value50 = (void*)0;
char* __dec_obj14;
void* __right_value51 = (void*)0;
char* __dec_obj15;
void* __right_value52 = (void*)0;
char* __dec_obj16;
void* __right_value53 = (void*)0;
char* __dec_obj17;
void* __right_value61 = (void*)0;
struct list$1sNode$ph* __dec_obj21;
void* __right_value62 = (void*)0;
char* __dec_obj22;
void* __right_value63 = (void*)0;
struct list$1sType$ph* __dec_obj23;
void* __right_value71 = (void*)0;
struct list$1char$ph* __dec_obj27;
void* __right_value72 = (void*)0;
struct sType* __dec_obj28;
struct sType* __result_obj__77;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__62;
    }
    result_114=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_114->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj5=result_114->mOriginalLoadVarType,
        result_114->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj6=result_114->mChannelType,
        result_114->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj10=result_114->mGenericsTypes,
        result_114->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj11=result_114->mNoSolvedGenericsType,
        result_114->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj12=result_114->mSizeNum,
        result_114->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj13=result_114->mAlignas,
        result_114->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj14=result_114->mTupleName,
        result_114->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj15=result_114->mAttribute,
        result_114->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj16=result_114->mVarAttribute,
        result_114->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_114->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_114->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_114->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_114->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_114->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_114->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_114->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_114->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_114->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_114->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_114->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_114->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_114->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_114->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_114->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_114->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_114->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_114->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_114->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_114->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_114->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_114->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_114->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_114->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj17=result_114->mAsmName,
        result_114->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_114->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_114->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_114->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj21=result_114->mArrayNum,
        result_114->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_114->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_114->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_114->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_114->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_114->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj22=result_114->mOriginalTypeName,
        result_114->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_114->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_114->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_114->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_114->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj23=result_114->mParamTypes,
        result_114->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj27=result_114->mParamNames,
        result_114->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj28=result_114->mResultType,
        result_114->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_114->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_114->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__77 = (struct sType*)come_increment_ref_count(result_114);
    come_call_finalizer(sType_finalize, result_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__63;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1sType$ph* result_115;
struct list_item$1sType$ph* it_116;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__63;
    }
    result_115=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sType$ph*"))));
    it_116=self->head;
    while(    it_116!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_115,(struct sType*)come_increment_ref_count(sType_clone(it_116->item)));
        }
        else {
            list$1sType$ph_add(result_115,(struct sType*)come_increment_ref_count(sType_clone(it_116->item)));
        }
        it_116=it_116->next;
    }
    __result_obj__66 = (struct list$1sType$ph*)come_increment_ref_count(result_115);
    come_call_finalizer(list$1sType$ph$p_finalize, result_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__64;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__64 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value40 = (void*)0;
struct list_item$1sType$ph* litem_117;
struct sType* __dec_obj7;
void* __right_value41 = (void*)0;
struct list_item$1sType$ph* litem_118;
struct sType* __dec_obj8;
void* __right_value42 = (void*)0;
struct list_item$1sType$ph* litem_119;
struct sType* __dec_obj9;
struct list$1sType$ph* __result_obj__65;
    if(    self->len==0    ) {
        litem_117=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value40=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sType$ph*"))));
        litem_117->prev=((void*)0);
        litem_117->next=((void*)0);
        __dec_obj7=litem_117->item,
        litem_117->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_117;
        self->head=litem_117;
    }
    else if(    self->len==1    ) {
        litem_118=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value41=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sType$ph*"))));
        litem_118->prev=self->head;
        litem_118->next=((void*)0);
        __dec_obj8=litem_118->item,
        litem_118->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_118;
        self->head->next=litem_118;
    }
    else {
        litem_119=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value42=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_119->prev=self->tail;
        litem_119->next=((void*)0);
        __dec_obj9=litem_119->item,
        litem_119->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_119;
        self->tail=litem_119;
    }
    self->len++;
    __result_obj__65 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__65;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_120;
struct list_item$1sType$ph* prev_it_121;
    it_120=self->head;
    while(    it_120!=((void*)0)    ) {
        prev_it_121=it_120;
        it_120=it_120->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__67;
void* __right_value47 = (void*)0;
struct sNode* result_122;
struct sNode* __result_obj__68;
    if(    self==(void*)0    ) {
        __result_obj__67 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__67) ? __result_obj__67 = come_decrement_ref_count(__result_obj__67, ((struct sNode*)__result_obj__67)->finalize, ((struct sNode*)__result_obj__67)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__67;
    }
    result_122=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_122->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_122->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_122->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_122->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_122->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_122->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_122->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_122->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_122->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_122->no_mutex=self->no_mutex;
    }
    __result_obj__68 = (struct sNode*)come_increment_ref_count(result_122);
    ((result_122) ? result_122 = come_decrement_ref_count(result_122, ((struct sNode*)result_122)->finalize, ((struct sNode*)result_122)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__68) ? __result_obj__68 = come_decrement_ref_count(__result_obj__68, ((struct sNode*)__result_obj__68)->finalize, ((struct sNode*)__result_obj__68)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__68;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__69;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1sNode$ph* result_123;
struct list_item$1sNode$ph* it_124;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1sNode$ph* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    result_123=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_124=self->head;
    while(    it_124!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_123,(struct sNode*)come_increment_ref_count(sNode_clone(it_124->item)));
        }
        else {
            list$1sNode$ph_add(result_123,(struct sNode*)come_increment_ref_count(sNode_clone(it_124->item)));
        }
        it_124=it_124->next;
    }
    __result_obj__72 = (struct list$1sNode$ph*)come_increment_ref_count(result_123);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value56 = (void*)0;
struct list_item$1sNode$ph* litem_125;
struct sNode* __dec_obj18;
void* __right_value57 = (void*)0;
struct list_item$1sNode$ph* litem_126;
struct sNode* __dec_obj19;
void* __right_value58 = (void*)0;
struct list_item$1sNode$ph* litem_127;
struct sNode* __dec_obj20;
struct list$1sNode$ph* __result_obj__71;
    if(    self->len==0    ) {
        litem_125=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value56=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sNode$ph*"))));
        litem_125->prev=((void*)0);
        litem_125->next=((void*)0);
        __dec_obj18=litem_125->item,
        litem_125->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_125;
        self->head=litem_125;
    }
    else if(    self->len==1    ) {
        litem_126=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value57=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sNode$ph*"))));
        litem_126->prev=self->head;
        litem_126->next=((void*)0);
        __dec_obj19=litem_126->item,
        litem_126->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_126;
        self->head->next=litem_126;
    }
    else {
        litem_127=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value58=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_127->prev=self->tail;
        litem_127->next=((void*)0);
        __dec_obj20=litem_127->item,
        litem_127->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_127;
        self->tail=litem_127;
    }
    self->len++;
    __result_obj__71 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__71;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_128;
struct list_item$1sNode$ph* prev_it_129;
    it_128=self->head;
    while(    it_128!=((void*)0)    ) {
        prev_it_129=it_128;
        it_128=it_128->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__73;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1char$ph* result_130;
struct list_item$1char$ph* it_131;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1char$ph* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__73 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__73;
    }
    result_130=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1char$ph*"))));
    it_131=self->head;
    while(    it_131!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_130,(char*)come_increment_ref_count((char*)come_memdup(it_131->item, "/usr/local/include/comelang.h", 1001, "char*")));
        }
        else {
            list$1char$ph_add(result_130,(char*)come_increment_ref_count((char*)come_memdup(it_131->item, "/usr/local/include/comelang.h", 1004, "char*")));
        }
        it_131=it_131->next;
    }
    __result_obj__76 = (struct list$1char$ph*)come_increment_ref_count(result_130);
    come_call_finalizer(list$1char$ph$p_finalize, result_130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem_132;
char* __dec_obj24;
void* __right_value67 = (void*)0;
struct list_item$1char$ph* litem_133;
char* __dec_obj25;
void* __right_value68 = (void*)0;
struct list_item$1char$ph* litem_134;
char* __dec_obj26;
struct list$1char$ph* __result_obj__75;
    if(    self->len==0    ) {
        litem_132=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1char$ph*"))));
        litem_132->prev=((void*)0);
        litem_132->next=((void*)0);
        __dec_obj24=litem_132->item,
        litem_132->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_132;
        self->head=litem_132;
    }
    else if(    self->len==1    ) {
        litem_133=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value67=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1char$ph*"))));
        litem_133->prev=self->head;
        litem_133->next=((void*)0);
        __dec_obj25=litem_133->item,
        litem_133->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_133;
        self->head->next=litem_133;
    }
    else {
        litem_134=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value68=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_134->prev=self->tail;
        litem_134->next=((void*)0);
        __dec_obj26=litem_134->item,
        litem_134->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_134;
        self->tail=litem_134;
    }
    self->len++;
    __result_obj__75 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__75;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_135;
struct list_item$1char$ph* prev_it_136;
    it_135=self->head;
    while(    it_135!=((void*)0)    ) {
        prev_it_136=it_135;
        it_135=it_135->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value82 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_144;
struct tuple2$2char$phsType$ph* __dec_obj29;
void* __right_value83 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_145;
struct tuple2$2char$phsType$ph* __dec_obj30;
void* __right_value84 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_146;
struct tuple2$2char$phsType$ph* __dec_obj31;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__78;
    if(    self->len==0    ) {
        litem_144=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value82=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_144->prev=((void*)0);
        litem_144->next=((void*)0);
        __dec_obj29=litem_144->item,
        litem_144->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_144;
        self->head=litem_144;
    }
    else if(    self->len==1    ) {
        litem_145=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value83=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_145->prev=self->head;
        litem_145->next=((void*)0);
        __dec_obj30=litem_145->item,
        litem_145->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_145;
        self->head->next=litem_145;
    }
    else {
        litem_146=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value84=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_146->prev=self->tail;
        litem_146->next=((void*)0);
        __dec_obj31=litem_146->item,
        litem_146->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_146;
        self->tail=litem_146;
    }
    self->len++;
    __result_obj__78 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj32;
struct sType* __dec_obj33;
struct tuple2$2char$phsType$ph* __result_obj__79;
    __dec_obj32=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj33=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__79 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
struct sUnionNode* __result_obj__80;
void* __right_value92 = (void*)0;
struct sUnionNode* result_149;
void* __right_value93 = (void*)0;
char* __dec_obj35;
void* __right_value94 = (void*)0;
char* __dec_obj36;
struct sUnionNode* __result_obj__81;
    if(    self==(void*)0    ) {
        __result_obj__80 = (void*)0;
        return __result_obj__80;
    }
    result_149=(struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc_v2(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3, "struct sUnionNode*"));
    if(    self!=((void*)0)    ) {
        result_149->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj35=result_149->sname,
        result_149->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sUnionNode_clone", 5, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_149->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj36=result_149->name,
        result_149->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sUnionNode_clone", 7, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_149->klass=self->klass;
    }
    __result_obj__81 = result_149;
    come_call_finalizer(sUnionNode_finalize, result_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_151;
void* __right_value97 = (void*)0;
char* struct_attribute_152;
void* __right_value98 = (void*)0;
char* type_name_153;
struct sClass* klass_154;
void* __right_value99 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sType* type_155;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct sType* override__156;
_Bool typedef__157;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
struct sType* type_158;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type2_159=0;
char* name_160=0;
_Bool err_161=0;
void* __right_value114 = (void*)0;
char* name2_162;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
char* struct_attribute2_163;
char* source_tail_164;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct buffer* header_165;
void* __right_value122 = (void*)0;
char* id_166;
void* __right_value123 = (void*)0;
char* __dec_obj37;
char* __dec_obj38;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
char* __dec_obj39;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* __right_value129 = (void*)0;
struct sNode* node_167;
_Bool Value_168;
struct sNode* __result_obj__84;
void* __right_value130 = (void*)0;
struct sNode* __result_obj__85;
void* __right_value131 = (void*)0;
struct sNode* __result_obj__86;
klass_154 = (void*)0;
    if(    charp_operator_equals(buf,"union")    ) {
        source_head_151=info->p;
        struct_attribute_152=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_153=(char*)come_increment_ref_count(parse_word(info));
        if(        (_condtional_value_X3=(((struct sClass*)(__right_value99=map$2char$phsClass$ph_at(info->classes,type_name_153,((void*)0))))==((void*)0))),        come_call_finalizer(sClass_finalize, __right_value99, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X3        ) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_153)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "15union.c", 167, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_153)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
            type_155=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 168, "struct sType*")),(char*)come_increment_ref_count(type_name_153),(_Bool)0,info));
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_153),(struct sType*)come_increment_ref_count(sType_clone(type_155)));
            klass_154=((struct sClass*)(__right_value107=map$2char$phsClass$ph_at(info->classes,type_name_153,((void*)0))));
            come_call_finalizer(sClass_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            klass_154=((struct sClass*)(__right_value108=map$2char$phsClass$ph_at(info->classes,type_name_153,((void*)0))));
            come_call_finalizer(sClass_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            override__156=((struct sType*)(__right_value109=map$2char$phsType$ph_at(info->types,type_name_153,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value109, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            typedef__157=(_Bool)0;
            if(            override__156            ) {
                typedef__157=override__156->mTypedef;
            }
            type_158=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 180, "struct sType*")),(char*)come_increment_ref_count(type_name_153),(_Bool)0,info));
            if(            typedef__157            ) {
                type_158->mTypedef=typedef__157;
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_153),(struct sType*)come_increment_ref_count(sType_clone(type_158)));
            come_call_finalizer(sType_finalize, type_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        expected_next_character(123,info);
        while(        (_Bool)1        ) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value113=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_159=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_160=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_161=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_161            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                while(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    name2_162=(char*)come_increment_ref_count(parse_word(info));
                    list$1tuple2$2char$phsType$ph$ph_push_back(klass_154->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 205, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_162),(struct sType*)come_increment_ref_count(type2_159))));
                    (name2_162 = come_decrement_ref_count(name2_162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                parse_sharp_v5(info);
                expected_next_character(59,info);
                parse_sharp_v5(info);
            }
            else {
                parse_sharp_v5(info);
                expected_next_character(59,info);
                parse_sharp_v5(info);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_154->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 219, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_160),(struct sType*)come_increment_ref_count(type2_159))));
            }
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, type2_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_160 = come_decrement_ref_count(name_160, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            come_call_finalizer(sType_finalize, type2_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_160 = come_decrement_ref_count(name_160, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        struct_attribute2_163=(char*)come_increment_ref_count(parse_struct_attribute(info));
        source_tail_164=info->p;
        header_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "15union.c", 233, "struct buffer*"))));
        buffer_append_str(header_165,"union ");
        buffer_append(header_165,source_head_151,source_tail_164-source_head_151);
        id_166=(char*)come_increment_ref_count(__builtin_string(type_name_153));
        add_come_code_at_come_struct_header(info,id_166,"%s;\n",((char*)(__right_value123=buffer_to_string(header_165))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        string_operator_equals(struct_attribute_152,"")&&string_operator_equals(struct_attribute2_163,"")        ) {
        }
        else if(        string_operator_equals(struct_attribute_152,"")        ) {
            __dec_obj37=klass_154->mAttribute,
            klass_154->mAttribute=(char*)come_increment_ref_count(struct_attribute2_163);
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(struct_attribute2_163,"")        ) {
            __dec_obj38=klass_154->mAttribute,
            klass_154->mAttribute=(char*)come_increment_ref_count(struct_attribute_152);
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj39=klass_154->mAttribute,
            klass_154->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value125=string_operator_add(struct_attribute_152," "))),struct_attribute2_163));
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "15union.c", 252, "struct sNode");
        _inf_obj_value2=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(__right_value128=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc_v2(1, sizeof(struct sUnionNode)*(1), "15union.c", 252, "struct sUnionNode*")),(char*)come_increment_ref_count(type_name_153),klass_154,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        node_167=(struct sNode*)come_increment_ref_count(_inf_value2);
        come_call_finalizer(sUnionNode_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        Value_168=node_compile(node_167,info);
        if(        !Value_168        ) {
            __result_obj__84 = (void*)come_increment_ref_count(((void*)0));
            (struct_attribute_152 = come_decrement_ref_count(struct_attribute_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_153 = come_decrement_ref_count(type_name_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute2_163 = come_decrement_ref_count(struct_attribute2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, header_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_166 = come_decrement_ref_count(id_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_167) ? node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__84) ? __result_obj__84 = come_decrement_ref_count(__result_obj__84, ((struct sNode*)__result_obj__84)->finalize, ((struct sNode*)__result_obj__84)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__84;
        }
        else {
        }
        __result_obj__85 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value130=create_nothing_node(info))));
        (struct_attribute_152 = come_decrement_ref_count(struct_attribute_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_153 = come_decrement_ref_count(type_name_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (struct_attribute2_163 = come_decrement_ref_count(struct_attribute2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, header_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (id_166 = come_decrement_ref_count(id_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_167) ? node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__right_value130) ? __right_value130 = come_decrement_ref_count(__right_value130, ((struct sNode*)__right_value130)->finalize, ((struct sNode*)__right_value130)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__85) ? __result_obj__85 = come_decrement_ref_count(__result_obj__85, ((struct sNode*)__result_obj__85)->finalize, ((struct sNode*)__result_obj__85)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__85;
        (struct_attribute_152 = come_decrement_ref_count(struct_attribute_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_153 = come_decrement_ref_count(type_name_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (struct_attribute2_163 = come_decrement_ref_count(struct_attribute2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, header_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (id_166 = come_decrement_ref_count(id_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_167) ? node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__86 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value131=top_level_v96(buf,head,head_sline,info))));
    ((__right_value131) ? __right_value131 = come_decrement_ref_count(__right_value131, ((struct sNode*)__right_value131)->finalize, ((struct sNode*)__right_value131)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__86) ? __result_obj__86 = come_decrement_ref_count(__result_obj__86, ((struct sNode*)__result_obj__86)->finalize, ((struct sNode*)__result_obj__86)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__86;
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_union_169;
char* p_170;
int sline_171;
char* type_name_172;
void* __right_value132 = (void*)0;
char* __dec_obj40;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* type_name_173;
void* __right_value135 = (void*)0;
struct sNode* __result_obj__87;
void* __right_value136 = (void*)0;
struct sNode* __result_obj__88;
type_name_172 = (void*)0;
    define_union_169=(_Bool)0;
    {
        p_170=info->p;
        sline_171=info->sline;
        if(        charp_operator_equals(buf,"union")        ) {
            if(            *info->p==95||xisalpha(*info->p)            ) {
                __dec_obj40=type_name_172,
                type_name_172=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                *info->p==123                ) {
                    ((char*)(__right_value133=skip_block(info,(_Bool)0)));
                    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        define_union_169=(_Bool)1;
                    }
                }
            }
            (type_name_172 = come_decrement_ref_count(type_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_170;
        info->sline=sline_171;
    }
    if(    define_union_169    ) {
        type_name_173=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__87 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value135=parse_union((char*)come_increment_ref_count(type_name_173),info))));
        (type_name_173 = come_decrement_ref_count(type_name_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value135) ? __right_value135 = come_decrement_ref_count(__right_value135, ((struct sNode*)__right_value135)->finalize, ((struct sNode*)__right_value135)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__87) ? __result_obj__87 = come_decrement_ref_count(__result_obj__87, ((struct sNode*)__result_obj__87)->finalize, ((struct sNode*)__result_obj__87)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__87;
        (type_name_173 = come_decrement_ref_count(type_name_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__88 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value136=string_node_v14(buf,head,head_sline,info))));
    ((__right_value136) ? __right_value136 = come_decrement_ref_count(__right_value136, ((struct sNode*)__right_value136)->finalize, ((struct sNode*)__right_value136)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__88) ? __result_obj__88 = come_decrement_ref_count(__result_obj__88, ((struct sNode*)__result_obj__88)->finalize, ((struct sNode*)__result_obj__88)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__88;
}

