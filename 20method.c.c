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

struct tuple2$2char$phvoid$p
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
    _Bool no_err;
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
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info, _Bool no_err);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value0 = (void*)0;
char* none_generics_name_0;
void* __right_value1 = (void*)0;
char* fun_name2_1;
void* __right_value2 = (void*)0;
char* fun_name3_2;
void* __right_value41 = (void*)0;
struct sType* no_solved_type_3;
void* __right_value42 = (void*)0;
struct sGenericsFun* generics_fun_33;
struct sType* type2_36;
void* __right_value43 = (void*)0;
struct sType* type_before_37;
void* __right_value44 = (void*)0;
char* __dec_obj25;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_38=0;
_Bool err_39=0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__22;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__24;
    none_generics_name_0=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_1=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_2=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_0,fun_name));
    no_solved_type_3=(struct sType*)come_increment_ref_count(sType_clone(type));
    generics_fun_33=((struct sGenericsFun*)(__right_value42=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_2,((void*)0))));
    come_call_finalizer(sGenericsFun_finalize, __right_value42, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    generics_fun_33    ) {
        type2_36=(struct sType*)come_increment_ref_count(no_solved_type_3);
        type_before_37=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj25=fun_name2_1,
        fun_name2_1=(char*)come_increment_ref_count(create_method_name(type2_36,(_Bool)0,fun_name,info,array_equal_pointer));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value46=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1)),generics_fun_33,(struct sType*)come_increment_ref_count(type2_36),info)));
        name_38=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err_39=multiple_assign_var1->v2;
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_39        ) {
            ((struct tuple2$2int$bool$*)(__right_value47=err_msg(info,"%s not found",fun_name3_2)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__22 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value50=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 24, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            come_call_finalizer(sType_finalize, type2_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_before_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_38 = come_decrement_ref_count(name_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (none_generics_name_0 = come_decrement_ref_count(none_generics_name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name2_1 = come_decrement_ref_count(fun_name2_1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name3_2 = come_decrement_ref_count(fun_name3_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, no_solved_type_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__22;
        }
        type=type_before_37;
        come_call_finalizer(sType_finalize, type2_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_before_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_38 = come_decrement_ref_count(name_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__24 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value53=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 30, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name2_1, "20method.c", 30, "char*")),generics_fun_33))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (none_generics_name_0 = come_decrement_ref_count(none_generics_name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name2_1 = come_decrement_ref_count(fun_name2_1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name3_2 = come_decrement_ref_count(fun_name3_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, no_solved_type_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value3 = (void*)0;
struct sType* result_4;
void* __right_value4 = (void*)0;
struct sType* __dec_obj1;
void* __right_value5 = (void*)0;
struct sType* __dec_obj2;
void* __right_value13 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value14 = (void*)0;
struct sType* __dec_obj7;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value18 = (void*)0;
char* __dec_obj10;
void* __right_value19 = (void*)0;
char* __dec_obj11;
void* __right_value20 = (void*)0;
char* __dec_obj12;
void* __right_value21 = (void*)0;
char* __dec_obj13;
void* __right_value29 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value30 = (void*)0;
char* __dec_obj18;
void* __right_value31 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value39 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value40 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result_4=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_4->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_4->mOriginalLoadVarType,
        result_4->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_4->mChannelType,
        result_4->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_4->mGenericsTypes,
        result_4->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_4->mNoSolvedGenericsType,
        result_4->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_4->mSizeNum,
        result_4->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_4->mAlignas,
        result_4->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_4->mTupleName,
        result_4->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_4->mAttribute,
        result_4->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj12=result_4->mVarAttribute,
        result_4->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_4->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_4->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_4->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_4->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_4->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_4->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_4->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_4->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_4->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_4->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_4->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_4->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_4->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_4->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_4->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_4->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_4->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_4->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_4->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_4->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_4->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_4->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_4->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_4->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_4->mAsmName,
        result_4->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_4->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_4->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_4->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_4->mArrayNum,
        result_4->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_4->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_4->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_4->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_4->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_4->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_4->mOriginalTypeName,
        result_4->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_4->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_4->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_4->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_4->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_4->mParamTypes,
        result_4->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_4->mParamNames,
        result_4->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_4->mResultType,
        result_4->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_4->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_4->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = result_4;
    come_call_finalizer(sType_finalize, result_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
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
struct list_item$1sType$ph* it_5;
struct list_item$1sType$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_7;
struct list_item$1sNode$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_9;
struct list_item$1char$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result_11;
struct list_item$1sType$ph* it_12;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_11=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sType$ph*"))));
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_11,(struct sType*)come_increment_ref_count(sType_clone(it_12->item)));
        }
        else {
            list$1sType$ph_add(result_11,(struct sType*)come_increment_ref_count(sType_clone(it_12->item)));
        }
        it_12=it_12->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_11);
    come_call_finalizer(list$1sType$ph$p_finalize, result_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj3;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_14;
struct sType* __dec_obj4;
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_15;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sType$ph*"))));
        litem_13->prev=((void*)0);
        litem_13->next=((void*)0);
        __dec_obj3=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_13;
        self->head=litem_13;
    }
    else if(    self->len==1    ) {
        litem_14=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sType$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj4=litem_14->item,
        litem_14->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj5=litem_15->item,
        litem_15->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_16;
struct list_item$1sType$ph* prev_it_17;
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        prev_it_17=it_16;
        it_16=it_16->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value15 = (void*)0;
struct sNode* result_18;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_18=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_18->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_18->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_18->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_18->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_18->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_18->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_18->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_18->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_18->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_18->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_18);
    ((result_18) ? result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct list$1sNode$ph* result_19;
struct list_item$1sNode$ph* it_20;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_19=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_20=self->head;
    while(    it_20!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_19,(struct sNode*)come_increment_ref_count(sNode_clone(it_20->item)));
        }
        else {
            list$1sNode$ph_add(result_19,(struct sNode*)come_increment_ref_count(sNode_clone(it_20->item)));
        }
        it_20=it_20->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_19);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_21;
struct sNode* __dec_obj14;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_22;
struct sNode* __dec_obj15;
void* __right_value26 = (void*)0;
struct list_item$1sNode$ph* litem_23;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sNode$ph*"))));
        litem_21->prev=((void*)0);
        litem_21->next=((void*)0);
        __dec_obj14=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_21;
        self->head=litem_21;
    }
    else if(    self->len==1    ) {
        litem_22=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sNode$ph*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj15=litem_22->item,
        litem_22->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value26=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj16=litem_23->item,
        litem_23->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_24;
struct list_item$1sNode$ph* prev_it_25;
    it_24=self->head;
    while(    it_24!=((void*)0)    ) {
        prev_it_25=it_24;
        it_24=it_24->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
struct list$1char$ph* result_26;
struct list_item$1char$ph* it_27;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_26=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1char$ph*"))));
    it_27=self->head;
    while(    it_27!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_26,(char*)come_increment_ref_count((char*)come_memdup(it_27->item, "/usr/local/include/comelang.h", 1001, "char*")));
        }
        else {
            list$1char$ph_add(result_26,(char*)come_increment_ref_count((char*)come_memdup(it_27->item, "/usr/local/include/comelang.h", 1004, "char*")));
        }
        it_27=it_27->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_26);
    come_call_finalizer(list$1char$ph$p_finalize, result_26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj20;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_29;
char* __dec_obj21;
void* __right_value36 = (void*)0;
struct list_item$1char$ph* litem_30;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1char$ph*"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        __dec_obj20=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1    ) {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1char$ph*"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        __dec_obj21=litem_29->item,
        litem_29->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value36=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        __dec_obj22=litem_30->item,
        litem_30->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_31;
struct list_item$1char$ph* prev_it_32;
    it_31=self->head;
    while(    it_31!=((void*)0)    ) {
        prev_it_32=it_31;
        it_31=it_31->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_34;
unsigned int it_35;
struct sGenericsFun* __result_obj__17;
struct sGenericsFun* __result_obj__18;
struct sGenericsFun* __result_obj__19;
struct sGenericsFun* __result_obj__20;
    hash_34=string_get_hash_key(((char*)key))%self->size;
    it_35=hash_34;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_35]        ) {
            if(            string_equals(self->keys[it_35],key)            ) {
                __result_obj__17 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_35]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__17;
            }
            it_35++;
            if(            it_35>=self->size            ) {
                it_35=0;
            }
            else if(            it_35==hash_34            ) {
                __result_obj__18 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__18;
            }
        }
        else {
            __result_obj__19 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__19;
        }
    }
    __result_obj__20 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj26;
struct tuple2$2char$phvoid$p* __result_obj__21;
    __dec_obj26=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__21 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj27;
struct tuple2$2char$phsGenericsFun$p* __result_obj__23;
    __dec_obj27=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__23 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value54 = (void*)0;
char* fun_name3_41;
struct list$1sType$ph* method_generics_types_before_42;
struct list$1sType$ph* __dec_obj28;
void* __right_value55 = (void*)0;
struct sGenericsFun* generics_fun_43;
void* __right_value56 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__25;
struct list$1sType$ph* __dec_obj29;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__26;
    static int num_method_generics_40=0;
    fun_name3_41=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_40++));
    method_generics_types_before_42=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj28=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    generics_fun_43=((struct sGenericsFun*)(__right_value55=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer(sGenericsFun_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    generics_fun_43    ) {
        if(        (_condtional_value_X1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_41)),generics_fun_43,info))),        _condtional_value_X1        ) {
            ((struct tuple2$2int$bool$*)(__right_value57=err_msg(info,"%s not found",fun_name3_41)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__25 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value60=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 46, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name3_41 = come_decrement_ref_count(fun_name3_41, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before_42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__25;
        }
    }
    __dec_obj29=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_42);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__26 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value63=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 52, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name3_41, "20method.c", 52, "char*")),generics_fun_43))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name3_41 = come_decrement_ref_count(fun_name3_41, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before_42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value68 = (void*)0;
struct sNode* current_stack_frame_node_44;
_Bool Value_46;
_Bool __result_obj__29;
void* __right_value69 = (void*)0;
struct CVALUE* come_value_49;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* method_block2_53;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct sType* method_block_type_54;
void* __right_value77 = (void*)0;
char* class_name_61;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct sClass* current_stack_frame_struct_70;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
_Bool __result_obj__43;
void* __right_value82 = (void*)0;
struct sType* result_type_71;
void* __right_value83 = (void*)0;
struct sType* result_type2_72;
struct list$1sType$ph* param_types_73;
struct list$1char$ph* param_names_74;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct buffer* all_alhabet_sname_75;
char* p_76;
int num_method_block_77;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
int i_78;
struct list$1sType$ph* o2_saved_79;
struct sType* it_82;
struct sType* param_type_85;
void* __right_value88 = (void*)0;
char* param_name_86;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
char* param_name_87;
void* __right_value91 = (void*)0;
struct sType* param_type2_88;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
char* param_name_89;
void* __right_value94 = (void*)0;
struct sType* param_type2_90;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct buffer* source3_91;
char* p_92;
char* head_93;
int sline_94;
struct buffer* __dec_obj34;
void* __right_value97 = (void*)0;
struct sNode* node_95;
_Bool in_method_block_96;
_Bool Value_97;
_Bool __result_obj__50;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
char* method_block_name_98;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value2_99;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct sFun* fun2_100;
void* __right_value104 = (void*)0;
_Bool __result_obj__55;
struct sType* method_block_type2_103;
void* __right_value105 = (void*)0;
char* __dec_obj35;
void* __right_value106 = (void*)0;
struct sType* __dec_obj36;
struct buffer* __dec_obj37;
void* __right_value107 = (void*)0;
struct sType* __dec_obj38;
_Bool __result_obj__56;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 57, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value65=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 57, "struct sCurrentNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    current_stack_frame_node_44=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sCurrentNode_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_46=node_compile(current_stack_frame_node_44,info);
    if(    !Value_46    ) {
        __result_obj__29 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_44) ? current_stack_frame_node_44 = come_decrement_ref_count(current_stack_frame_node_44, ((struct sNode*)current_stack_frame_node_44)->finalize, ((struct sNode*)current_stack_frame_node_44)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__29;
    }
    else {
    }
    come_value_49=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_49));
    method_block2_53=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 66, "struct buffer*"))));
    method_block_type_54=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value75=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))));
    come_call_finalizer(sType_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    class_name_61=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value78=list$1sType$ph_operator_load_element(method_block_type_54->mParamTypes,0)))->mClass=((struct sClass*)(__right_value79=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_61)));
    come_call_finalizer(sType_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    current_stack_frame_struct_70=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value80=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_61)));
    come_call_finalizer(sClass_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_54->mClass->mName,"lambda")    ) {
        ((struct tuple2$2int$bool$*)(__right_value81=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__43 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_44) ? current_stack_frame_node_44 = come_decrement_ref_count(current_stack_frame_node_44, ((struct sNode*)current_stack_frame_node_44)->finalize, ((struct sNode*)current_stack_frame_node_44)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_61 = come_decrement_ref_count(class_name_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__43;
    }
    result_type_71=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_54->mResultType));
    result_type_71->mStatic=(_Bool)0;
    result_type2_72=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_71),(struct sType*)come_increment_ref_count(info->generics_type),info));
    param_types_73=method_block_type_54->mParamTypes;
    param_names_74=method_block_type_54->mParamNames;
    all_alhabet_sname_75=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 88, "struct buffer*"))));
    {
        p_76=info->sname;
        while(        *p_76        ) {
            if(            xisalnum(*p_76)            ) {
                buffer_append_char(all_alhabet_sname_75,*p_76++);
            }
            else {
                p_76++;
            }
        }
    }
    num_method_block_77=info->num_method_block;
    buffer_append_format(method_block2_53,"%s method_block%d_%s(",((char*)(__right_value86=make_come_type_name_string(result_type2_72,info,(_Bool)0))),num_method_block_77,((char*)(__right_value87=buffer_to_string(all_alhabet_sname_75))));
    (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    i_78=0;
    for(    o2_saved_79=(param_types_73),it_82=list$1sType$ph_begin((o2_saved_79))    ;    !list$1sType$ph_end((o2_saved_79))    ;    it_82=list$1sType$ph_next((o2_saved_79))    ){
        param_type_85=(struct sType*)come_increment_ref_count(it_82);
        if(        i_78==0        ) {
            param_name_86=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_53,"%s",((char*)(__right_value89=make_define_var(param_type_85,param_name_86,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (param_name_86 = come_decrement_ref_count(param_name_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        i_78==1        ) {
            param_name_87=(char*)come_increment_ref_count(xsprintf("it"));
            param_type2_88=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_85),(struct sType*)come_increment_ref_count(info->generics_type),info));
            buffer_append_format(method_block2_53,"%s",((char*)(__right_value92=make_define_var(param_type2_88,param_name_87,(_Bool)0,(_Bool)1,info,(_Bool)1))));
            (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (param_name_87 = come_decrement_ref_count(param_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, param_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            param_name_89=(char*)come_increment_ref_count(xsprintf("it%d",i_78));
            param_type2_90=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_85),(struct sType*)come_increment_ref_count(info->generics_type),info));
            buffer_append_format(method_block2_53,"%s",((char*)(__right_value95=make_define_var(param_type2_90,param_name_89,(_Bool)0,(_Bool)1,info,(_Bool)1))));
            (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (param_name_89 = come_decrement_ref_count(param_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, param_type2_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        i_78!=list$1sType$ph_length(param_types_73)-1        ) {
            buffer_append_str(method_block2_53,",");
        }
        i_78++;
        come_call_finalizer(sType_finalize, param_type_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buffer_append_str(method_block2_53,")\n");
    buffer_append_str(method_block2_53,((char*)(__right_value96=buffer_to_string(method_block))));
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    source3_91=(struct buffer*)come_increment_ref_count(info->source);
    p_92=info->p;
    head_93=info->head;
    sline_94=info->sline;
    __dec_obj34=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2_53);
    come_call_finalizer(buffer_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_95=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_96=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_97=node_compile(node_95,info);
    if(    !Value_97    ) {
        __result_obj__50 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_44) ? current_stack_frame_node_44 = come_decrement_ref_count(current_stack_frame_node_44, ((struct sNode*)current_stack_frame_node_44)->finalize, ((struct sNode*)current_stack_frame_node_44)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_61 = come_decrement_ref_count(class_name_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_95) ? node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__50;
    }
    else {
    }
    info->in_method_block=in_method_block_96;
    method_block_name_98=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block_77,((char*)(__right_value98=buffer_to_string(all_alhabet_sname_75)))));
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_value2_99=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 160, "struct CVALUE*"))));
    fun2_100=((struct sFun*)(__right_value103=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value102=__builtin_string(method_block_name_98))),((void*)0))));
    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value103, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun2_100==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value104=err_msg(info,"method block function not found(%s)",method_block_name_98)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value104, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__55 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_44) ? current_stack_frame_node_44 = come_decrement_ref_count(current_stack_frame_node_44, ((struct sNode*)current_stack_frame_node_44)->finalize, ((struct sNode*)current_stack_frame_node_44)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_61 = come_decrement_ref_count(class_name_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_95) ? node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (method_block_name_98 = come_decrement_ref_count(method_block_name_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__55;
    }
    method_block_type2_103=fun2_100->mLambdaType;
    __dec_obj35=come_value2_99->c_value,
    come_value2_99->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_98));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj36=come_value2_99->type,
    come_value2_99->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_103));
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_99->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_99));
    __dec_obj37=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_91);
    come_call_finalizer(buffer_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_92;
    info->head=head_93;
    info->sline=sline_94;
    info->current_stack_frame_struct=current_stack_frame_struct_70;
    __dec_obj38=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__56 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((current_stack_frame_node_44) ? current_stack_frame_node_44 = come_decrement_ref_count(current_stack_frame_node_44, ((struct sNode*)current_stack_frame_node_44)->finalize, ((struct sNode*)current_stack_frame_node_44)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block2_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, method_block_type_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (class_name_61 = come_decrement_ref_count(class_name_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type2_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, all_alhabet_sname_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, source3_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_95) ? node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (method_block_name_98 = come_decrement_ref_count(method_block_name_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value2_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__56;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__27;
void* __right_value66 = (void*)0;
struct sCurrentNode* result_45;
void* __right_value67 = (void*)0;
char* __dec_obj30;
struct sCurrentNode* __result_obj__28;
    if(    self==(void*)0    ) {
        __result_obj__27 = (void*)0;
        return __result_obj__27;
    }
    result_45=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result_45->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj30=result_45->sname,
        result_45->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_45->sline_real=self->sline_real;
    }
    __result_obj__28 = result_45;
    come_call_finalizer(sCurrentNode_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_47;
struct list_item$1CVALUE$ph* prev_it_48;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value70 = (void*)0;
struct list_item$1CVALUE$ph* litem_50;
struct CVALUE* __dec_obj31;
void* __right_value71 = (void*)0;
struct list_item$1CVALUE$ph* litem_51;
struct CVALUE* __dec_obj32;
void* __right_value72 = (void*)0;
struct list_item$1CVALUE$ph* litem_52;
struct CVALUE* __dec_obj33;
struct list$1CVALUE$ph* __result_obj__30;
    if(    self->len==0    ) {
        litem_50=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value70=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1CVALUE$ph*"))));
        litem_50->prev=((void*)0);
        litem_50->next=((void*)0);
        __dec_obj31=litem_50->item,
        litem_50->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_50;
        self->head=litem_50;
    }
    else if(    self->len==1    ) {
        litem_51=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value71=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1CVALUE$ph*"))));
        litem_51->prev=self->head;
        litem_51->next=((void*)0);
        __dec_obj32=litem_51->item,
        litem_51->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_51;
        self->head->next=litem_51;
    }
    else {
        litem_52=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value72=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1CVALUE$ph*"))));
        litem_52->prev=self->tail;
        litem_52->next=((void*)0);
        __dec_obj33=litem_52->item,
        litem_52->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_52;
        self->tail=litem_52;
    }
    self->len++;
    __result_obj__30 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_55;
int i_56;
struct sType* __result_obj__31;
struct sType* default_value_57;
struct sType* __result_obj__32;
default_value_57 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_55=self->head;
    i_56=0;
    while(    it_55!=((void*)0)    ) {
        if(        position==i_56        ) {
            __result_obj__31 = (struct sType*)come_increment_ref_count(it_55->item);
            come_call_finalizer(sType_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
        it_55=it_55->next;
        i_56++;
    }
    memset(&default_value_57,0,sizeof(struct sType*));
    __result_obj__32 = (struct sType*)come_increment_ref_count(default_value_57);
    come_call_finalizer(sType_finalize, default_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_58;
int i_59;
struct sType* __result_obj__33;
struct sType* default_value_60;
struct sType* __result_obj__34;
default_value_60 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_58=self->head;
    i_59=0;
    while(    it_58!=((void*)0)    ) {
        if(        position==i_59        ) {
            __result_obj__33 = (struct sType*)come_increment_ref_count(it_58->item);
            come_call_finalizer(sType_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__33;
        }
        it_58=it_58->next;
        i_59++;
    }
    memset(&default_value_60,0,sizeof(struct sType*));
    __result_obj__34 = (struct sType*)come_increment_ref_count(default_value_60);
    come_call_finalizer(sType_finalize, default_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_62;
unsigned int hash_63;
unsigned int it_64;
struct sClass* __result_obj__35;
struct sClass* __result_obj__36;
struct sClass* __result_obj__37;
struct sClass* __result_obj__38;
default_value_62 = (void*)0;
    memset(&default_value_62,0,sizeof(struct sClass*));
    hash_63=string_get_hash_key(((char*)key))%self->size;
    it_64=hash_63;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_64]        ) {
            if(            string_equals(self->keys[it_64],key)            ) {
                __result_obj__35 = (struct sClass*)come_increment_ref_count(self->items[it_64]);
                come_call_finalizer(sClass_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__35;
            }
            it_64++;
            if(            it_64>=self->size            ) {
                it_64=0;
            }
            else if(            it_64==hash_63            ) {
                __result_obj__36 = (struct sClass*)come_increment_ref_count(default_value_62);
                come_call_finalizer(sClass_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__36;
            }
        }
        else {
            __result_obj__37 = (struct sClass*)come_increment_ref_count(default_value_62);
            come_call_finalizer(sClass_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__37;
        }
    }
    __result_obj__38 = (struct sClass*)come_increment_ref_count(default_value_62);
    come_call_finalizer(sClass_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_65;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_66;
    it_65=self->head;
    while(    it_65!=((void*)0)    ) {
        prev_it_66=it_65;
        it_65=it_65->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct sClass* default_value_67;
unsigned int hash_68;
unsigned int it_69;
struct sClass* __result_obj__39;
struct sClass* __result_obj__40;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
default_value_67 = (void*)0;
    memset(&default_value_67,0,sizeof(struct sClass*));
    hash_68=string_get_hash_key(((char*)key))%self->size;
    it_69=hash_68;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_69]        ) {
            if(            string_equals(self->keys[it_69],key)            ) {
                __result_obj__39 = (struct sClass*)come_increment_ref_count(self->items[it_69]);
                come_call_finalizer(sClass_finalize, default_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__39;
            }
            it_69++;
            if(            it_69>=self->size            ) {
                it_69=0;
            }
            else if(            it_69==hash_68            ) {
                __result_obj__40 = (struct sClass*)come_increment_ref_count(default_value_67);
                come_call_finalizer(sClass_finalize, default_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__40;
            }
        }
        else {
            __result_obj__41 = (struct sClass*)come_increment_ref_count(default_value_67);
            come_call_finalizer(sClass_finalize, default_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__41;
        }
    }
    __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value_67);
    come_call_finalizer(sClass_finalize, default_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_80;
struct sType* __result_obj__44;
struct sType* __result_obj__45;
struct sType* result_81;
struct sType* __result_obj__46;
result_80 = (void*)0;
result_81 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_80,0,sizeof(struct sType*));
        __result_obj__44 = result_80;
        return __result_obj__44;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__45 = self->it->item;
        return __result_obj__45;
    }
    memset(&result_81,0,sizeof(struct sType*));
    __result_obj__46 = result_81;
    return __result_obj__46;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_83;
struct sType* __result_obj__47;
struct sType* __result_obj__48;
struct sType* result_84;
struct sType* __result_obj__49;
result_83 = (void*)0;
result_84 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_83,0,sizeof(struct sType*));
        __result_obj__47 = result_83;
        return __result_obj__47;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__48 = self->it->item;
        return __result_obj__48;
    }
    memset(&result_84,0,sizeof(struct sType*));
    __result_obj__49 = result_84;
    return __result_obj__49;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_101;
unsigned int it_102;
struct sFun* __result_obj__51;
struct sFun* __result_obj__52;
struct sFun* __result_obj__53;
struct sFun* __result_obj__54;
    hash_101=string_get_hash_key(((char*)key))%self->size;
    it_102=hash_101;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_102]        ) {
            if(            string_equals(self->keys[it_102],key)            ) {
                __result_obj__51 = (struct sFun*)come_increment_ref_count(self->items[it_102]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__51;
            }
            it_102++;
            if(            it_102>=self->size            ) {
                it_102=0;
            }
            else if(            it_102==hash_101            ) {
                __result_obj__52 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__52;
            }
        }
        else {
            __result_obj__53 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__53;
        }
    }
    __result_obj__54 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
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

struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info){
char* generics_fun_name_104;
struct sFun* fun_105;
struct sGenericsFun* generics_fun_106;
void* __right_value108 = (void*)0;
struct sClass* klass_107;
void* __right_value109 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
char* __dec_obj39;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_108=0;
struct sGenericsFun* gfun_109=0;
char* __dec_obj40;
void* __right_value116 = (void*)0;
char* none_generics_name_110;
void* __right_value117 = (void*)0;
char* fun_name3_111;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_112=0;
struct sGenericsFun* gfun_113=0;
char* __dec_obj41;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_114=0;
struct sGenericsFun* gfun_115=0;
char* __dec_obj42;
int i_116;
void* __right_value122 = (void*)0;
char* new_fun_name_117;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
char* __dec_obj43;
struct sType* obj_array_type_124;
void* __right_value127 = (void*)0;
char* array_method_name_125;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
char* __dec_obj44;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* __dec_obj45;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__66;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
char* __dec_obj47;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct sClass* klass_126;
void* __right_value145 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
char* __dec_obj48;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_127=0;
char* real_fun_name_128=0;
char* __dec_obj49;
void* __right_value151 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_129=0;
char* real_fun_name_130=0;
void* __right_value152 = (void*)0;
char* __dec_obj50;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
char* original_obj_type_fun_name_131;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
char* __dec_obj51;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__67;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__68;
    generics_fun_name_104=((void*)0);
    fun_105=((void*)0);
    generics_fun_106=((void*)0);
    if(    charp_operator_equals(fun_name,"super")    ) {
        fun_name=((char*)(__right_value108=create_non_method_name(obj_type,(_Bool)0,info->come_fun->mName,info,(_Bool)1)));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        klass_107=obj_type->mClass;
        while(        (_condtional_value_X2=(((struct sClass*)(__right_value109=map$2char$phsClass$ph_operator_load_element(info->classes,klass_107->mParentClassName))))),        come_call_finalizer(sClass_finalize, __right_value109, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X2        ) {
            klass_107=((struct sClass*)(__right_value110=map$2char$phsClass$ph_operator_load_element(info->classes,klass_107->mParentClassName)));
            come_call_finalizer(sClass_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj39=generics_fun_name_104,
            generics_fun_name_104=(char*)come_increment_ref_count(create_method_name_using_class(klass_107,(_Bool)0,fun_name,info,(_Bool)1));
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            fun_105=((struct sFun*)(__right_value113=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value112=__builtin_string(generics_fun_name_104))),((void*)0))));
            (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            fun_105            ) {
                break;
            }
        }
    }
    else {
        if(        obj_type&&obj_type->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type->mNoSolvedGenericsType->mGenericsTypes)>0        ) {
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value115=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
            name_108=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_109=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value115, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj40=generics_fun_name_104,
            generics_fun_name_104=(char*)come_increment_ref_count(name_108);
            __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            generics_fun_106=gfun_109;
            (name_108 = come_decrement_ref_count(name_108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        list$1sType$ph_length(info->method_generics_types)>0        ) {
            none_generics_name_110=(char*)come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName));
            fun_name3_111=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_110,fun_name));
            multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value119=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_111)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
            name_112=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            gfun_113=multiple_assign_var3->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj41=generics_fun_name_104,
            generics_fun_name_104=(char*)come_increment_ref_count(name_112);
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            generics_fun_106=gfun_113;
            (none_generics_name_110 = come_decrement_ref_count(none_generics_name_110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name3_111 = come_decrement_ref_count(fun_name3_111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (name_112 = come_decrement_ref_count(name_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value121=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
            name_114=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_115=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value121, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj42=generics_fun_name_104,
            generics_fun_name_104=(char*)come_increment_ref_count(name_114);
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            generics_fun_106=gfun_115;
            (name_114 = come_decrement_ref_count(name_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        for(        i_116=128        ;        i_116>=1        ;        i_116--        ){
            new_fun_name_117=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_104,i_116));
            fun_105=((struct sFun*)(__right_value125=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value124=__builtin_string(new_fun_name_117))))));
            (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            fun_105!=((void*)0)            ) {
                __dec_obj43=generics_fun_name_104,
                generics_fun_name_104=(char*)come_increment_ref_count(__builtin_string(new_fun_name_117));
                __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_117 = come_decrement_ref_count(new_fun_name_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_117 = come_decrement_ref_count(new_fun_name_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        fun_105==((void*)0)        ) {
            obj_array_type_124=obj_type->mOriginalLoadVarType;
            if(            obj_array_type_124&&list$1sNode$ph_length(obj_array_type_124->mArrayNum)>0            ) {
                array_method_name_125=(char*)come_increment_ref_count(create_method_name(obj_array_type_124,(_Bool)0,fun_name,info,(_Bool)0));
                fun_105=((struct sFun*)(__right_value129=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value128=__builtin_string(array_method_name_125))),((void*)0))));
                (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value129, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                fun_105                ) {
                    __dec_obj44=generics_fun_name_104,
                    generics_fun_name_104=(char*)come_increment_ref_count(__builtin_string(array_method_name_125));
                    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    fun_105=((struct sFun*)(__right_value132=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value131=__builtin_string(generics_fun_name_104))),((void*)0))));
                    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    fun_105==((void*)0)                    ) {
                        __dec_obj45=generics_fun_name_104,
                        generics_fun_name_104=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value133=__builtin_string(fun_name))),info,(_Bool)1));
                        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        fun_105=((struct sFun*)(__right_value136=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value135=__builtin_string(generics_fun_name_104))),((void*)0))));
                        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sFun_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        fun_105==((void*)0)                        ) {
                            __result_obj__66 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value138=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 257, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                            (array_method_name_125 = come_decrement_ref_count(array_method_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            (generics_fun_name_104 = come_decrement_ref_count(generics_fun_name_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                            return __result_obj__66;
                        }
                    }
                }
                (array_method_name_125 = come_decrement_ref_count(array_method_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                fun_105=((struct sFun*)(__right_value140=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value139=__builtin_string(generics_fun_name_104))),((void*)0))));
                (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                fun_105==((void*)0)                ) {
                    __dec_obj47=generics_fun_name_104,
                    generics_fun_name_104=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value141=__builtin_string(fun_name))),info,(_Bool)1));
                    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    fun_105=((struct sFun*)(__right_value144=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value143=__builtin_string(generics_fun_name_104))),((void*)0))));
                    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value144, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    fun_105==((void*)0)                    ) {
                        klass_126=obj_type->mClass;
                        while(                        (_condtional_value_X3=(((struct sClass*)(__right_value145=map$2char$phsClass$ph_operator_load_element(info->classes,klass_126->mParentClassName))))),                        come_call_finalizer(sClass_finalize, __right_value145, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                        _condtional_value_X3                        ) {
                            klass_126=((struct sClass*)(__right_value146=map$2char$phsClass$ph_operator_load_element(info->classes,klass_126->mParentClassName)));
                            come_call_finalizer(sClass_finalize, __right_value146, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            __dec_obj48=generics_fun_name_104,
                            generics_fun_name_104=(char*)come_increment_ref_count(create_method_name_using_class(klass_126,(_Bool)0,fun_name,info,(_Bool)1));
                            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            fun_105=((struct sFun*)(__right_value149=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value148=__builtin_string(generics_fun_name_104))),((void*)0))));
                            (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                            come_call_finalizer(sFun_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            if(                            fun_105                            ) {
                                break;
                            }
                        }
                    }
                    if(                    fun_105==((void*)0)&&charp_operator_equals(fun_name,"to_string")                    ) {
                        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value150=create_to_string_automatically((struct sType*)come_increment_ref_count(obj_type),fun_name,info)));
                        fun2_127=multiple_assign_var5->v1;
                        real_fun_name_128=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value150, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        fun_105=fun2_127;
                        __dec_obj49=generics_fun_name_104,
                        generics_fun_name_104=(char*)come_increment_ref_count(real_fun_name_128);
                        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        (real_fun_name_128 = come_decrement_ref_count(real_fun_name_128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    fun_105==((void*)0)&&charp_operator_equals(fun_name,"equals")                    ) {
                        multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value151=create_equals_automatically((struct sType*)come_increment_ref_count(obj_type),fun_name,info)));
                        fun2_129=multiple_assign_var6->v1;
                        real_fun_name_130=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        fun_105=((struct sFun*)(__right_value152=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_130)));
                        come_call_finalizer(sFun_finalize, __right_value152, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __dec_obj50=generics_fun_name_104,
                        generics_fun_name_104=(char*)come_increment_ref_count(real_fun_name_130);
                        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        (real_fun_name_130 = come_decrement_ref_count(real_fun_name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    fun_105==((void*)0)                    ) {
                        original_obj_type_fun_name_131=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type,(_Bool)0,((char*)(__right_value153=__builtin_string(fun_name))),info,(_Bool)1));
                        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        fun_105=((struct sFun*)(__right_value156=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value155=__builtin_string(original_obj_type_fun_name_131))),((void*)0))));
                        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sFun_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        fun_105                        ) {
                            __dec_obj51=generics_fun_name_104,
                            generics_fun_name_104=(char*)come_increment_ref_count(original_obj_type_fun_name_131);
                            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        (original_obj_type_fun_name_131 = come_decrement_ref_count(original_obj_type_fun_name_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    fun_105==((void*)0)                    ) {
                        __result_obj__67 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value158=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 306, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name_104),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (generics_fun_name_104 = come_decrement_ref_count(generics_fun_name_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value158, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                        return __result_obj__67;
                    }
                }
            }
        }
    }
    __result_obj__68 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value160=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 313, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name_104),fun_105,generics_fun_106))));
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (generics_fun_name_104 = come_decrement_ref_count(generics_fun_name_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_118;
unsigned int hash_119;
unsigned int it_120;
struct sFun* __result_obj__57;
struct sFun* __result_obj__58;
struct sFun* __result_obj__59;
struct sFun* __result_obj__60;
default_value_118 = (void*)0;
    memset(&default_value_118,0,sizeof(struct sFun*));
    hash_119=string_get_hash_key(((char*)key))%self->size;
    it_120=hash_119;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_120]        ) {
            if(            string_equals(self->keys[it_120],key)            ) {
                __result_obj__57 = (struct sFun*)come_increment_ref_count(self->items[it_120]);
                come_call_finalizer(sFun_finalize, default_value_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__57;
            }
            it_120++;
            if(            it_120>=self->size            ) {
                it_120=0;
            }
            else if(            it_120==hash_119            ) {
                __result_obj__58 = (struct sFun*)come_increment_ref_count(default_value_118);
                come_call_finalizer(sFun_finalize, default_value_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__58;
            }
        }
        else {
            __result_obj__59 = (struct sFun*)come_increment_ref_count(default_value_118);
            come_call_finalizer(sFun_finalize, default_value_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__59;
        }
    }
    __result_obj__60 = (struct sFun*)come_increment_ref_count(default_value_118);
    come_call_finalizer(sFun_finalize, default_value_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_121;
unsigned int hash_122;
unsigned int it_123;
struct sFun* __result_obj__61;
struct sFun* __result_obj__62;
struct sFun* __result_obj__63;
struct sFun* __result_obj__64;
default_value_121 = (void*)0;
    memset(&default_value_121,0,sizeof(struct sFun*));
    hash_122=string_get_hash_key(((char*)key))%self->size;
    it_123=hash_122;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_123]        ) {
            if(            string_equals(self->keys[it_123],key)            ) {
                __result_obj__61 = (struct sFun*)come_increment_ref_count(self->items[it_123]);
                come_call_finalizer(sFun_finalize, default_value_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__61;
            }
            it_123++;
            if(            it_123>=self->size            ) {
                it_123=0;
            }
            else if(            it_123==hash_122            ) {
                __result_obj__62 = (struct sFun*)come_increment_ref_count(default_value_121);
                come_call_finalizer(sFun_finalize, default_value_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__62;
            }
        }
        else {
            __result_obj__63 = (struct sFun*)come_increment_ref_count(default_value_121);
            come_call_finalizer(sFun_finalize, default_value_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__63;
        }
    }
    __result_obj__64 = (struct sFun*)come_increment_ref_count(default_value_121);
    come_call_finalizer(sFun_finalize, default_value_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
char* __dec_obj46;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__65;
    __dec_obj46=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__65 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info, _Bool no_err){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj52;
void* __right_value163 = (void*)0;
char* __dec_obj53;
void* __right_value174 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj59;
void* __right_value175 = (void*)0;
struct buffer* __dec_obj60;
void* __right_value176 = (void*)0;
struct list$1sType$ph* __dec_obj61;
struct sMethodCallNode* __result_obj__75;
    ((struct sNodeBase*)(__right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj52=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj53=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj59=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj60=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    come_call_finalizer(buffer_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj61=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    self->no_err=no_err;
    __result_obj__75 = (struct sMethodCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sMethodCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sMethodCallNode_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block    ) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value177 = (void*)0;
char* __result_obj__76;
    __result_obj__76 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string("sMethodCallNode"))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__76 = come_decrement_ref_count(__result_obj__76, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__76;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_142;
struct list$1tuple2$2char$phsNode$ph$ph* params_143;
struct sNode* obj_144;
struct buffer* method_block_145;
int method_block_sline_146;
struct list$1sType$ph* method_generics_types_147;
_Bool recursive_148;
_Bool no_infference_method_generics_149;
struct list$1sType$ph* method_generics_types_150;
void* __right_value178 = (void*)0;
struct list$1sType$ph* __dec_obj62;
_Bool Value_151;
_Bool __result_obj__77;
void* __right_value179 = (void*)0;
struct CVALUE* obj_value_152;
void* __right_value180 = (void*)0;
struct sType* obj_type_153;
_Bool no_output_come_code_154;
void* __right_value181 = (void*)0;
struct sType* type_155;
void* __right_value182 = (void*)0;
char* none_generics_name_156;
void* __right_value183 = (void*)0;
char* fun_name2_157;
void* __right_value184 = (void*)0;
char* fun_name3_158;
void* __right_value185 = (void*)0;
struct sGenericsFun* generics_fun_159;
_Bool method_generics_160;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var7 = (void*)0;
char* name_161=0;
struct sGenericsFun* gfun_162=0;
char* generics_fun_name_163;
void* __right_value188 = (void*)0;
struct sFun* fun_164;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct list$1CVALUE$ph* come_params_165;
_Bool no_output_come_code_166;
_Bool __result_obj__79;
void* __right_value191 = (void*)0;
struct CVALUE* method_block_node_167;
void* __right_value192 = (void*)0;
struct sType* method_block_lambda_type_174;
void* __right_value193 = (void*)0;
struct sType* method_block_result_type_175;
void* __right_value194 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_176;
struct sType* generics_fun_method_block_result_type_177;
int method_generics_num_178;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
int n_187;
struct list$1sType$ph* o2_saved_188;
struct sType* it_189;
int method_generics_num_190;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1CVALUE$ph* come_params_191;
int i_192;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_193;
struct tuple2$2char$phsNode$ph* it_196;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_199=0;
struct sNode* node_200=0;
_Bool Value_201;
_Bool __result_obj__93;
void* __right_value206 = (void*)0;
struct CVALUE* come_value_202;
void* __right_value207 = (void*)0;
struct sType* __dec_obj67;
int method_generics_num_203;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct list$1sType$ph* o2_saved_204;
struct sType* it_205;
int method_generics_num_206;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1CVALUE$ph* come_params_207;
int i_208;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_209;
struct tuple2$2char$phsNode$ph* it_210;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_211=0;
struct sNode* node_212=0;
_Bool Value_213;
_Bool __result_obj__94;
void* __right_value216 = (void*)0;
struct CVALUE* come_value_214;
void* __right_value217 = (void*)0;
struct sType* __dec_obj68;
int method_generics_num_215;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
int n_216;
struct list$1sType$ph* o2_saved_217;
struct sType* it_218;
int method_generics_num_219;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sClass* klass_238;
_Bool calling_dynamic_method_239;
struct sType* lambda_type_240;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_241;
struct tuple2$2char$phsType$ph* it_244;
struct tuple2$2char$phsType$ph* multiple_assign_var10 = (void*)0;
char* field_name_247=0;
struct sType* field_type_248=0;
void* __right_value224 = (void*)0;
struct sType* result_type_249;
void* __right_value225 = (void*)0;
_Bool __result_obj__106;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1CVALUE$ph* come_params_250;
int i_251;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_252;
struct tuple2$2char$phsNode$ph* it_253;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_254=0;
struct sNode* node_255=0;
_Bool Value_256;
_Bool __result_obj__107;
void* __right_value228 = (void*)0;
struct CVALUE* come_value_257;
void* __right_value229 = (void*)0;
struct sType* __dec_obj69;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct buffer* buf_258;
int j_259;
struct list$1CVALUE$ph* o2_saved_260;
struct CVALUE* it_263;
void* __right_value238 = (void*)0;
char* __dec_obj70;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value2_266;
void* __right_value241 = (void*)0;
char* __dec_obj71;
void* __right_value242 = (void*)0;
struct sType* result_type2_267;
void* __right_value243 = (void*)0;
struct sType* __dec_obj72;
struct list$1sType$ph* __dec_obj73;
void* __right_value244 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var12 = (void*)0;
char* generics_fun_name_268=0;
struct sFun* fun_269=0;
struct sGenericsFun* generics_fun_270=0;
void* __right_value245 = (void*)0;
_Bool __result_obj__114;
void* __right_value246 = (void*)0;
_Bool __result_obj__115;
void* __right_value247 = (void*)0;
struct sType* result_type_271;
void* __right_value248 = (void*)0;
struct sType* __dec_obj74;
void* __right_value249 = (void*)0;
_Bool __result_obj__116;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1sType$ph* param_types_272;
struct list$1sType$ph* o2_saved_273;
struct sType* it_274;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* it2_275;
struct sType* no_solved_obj_type_276;
void* __right_value254 = (void*)0;
struct sType* it3_277;
void* __right_value255 = (void*)0;
struct list$1sType$ph* type_checking_param_types_278;
int n_279;
struct list$1sType$ph* o2_saved_280;
struct sType* it_281;
struct sType* no_solved_obj_type_282;
void* __right_value256 = (void*)0;
struct sType* it3_283;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1CVALUE$ph* come_params_284;
int i_285;
_Bool first_param_289;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_290;
struct tuple2$2char$phsNode$ph* it_291;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_292=0;
struct sNode* node_293=0;
int n_294;
struct list$1char$ph* o2_saved_295;
char* it_298;
_Bool Value_301;
_Bool __result_obj__124;
void* __right_value262 = (void*)0;
struct CVALUE* come_value_302;
void* __right_value263 = (void*)0;
struct sType* __dec_obj78;
void* __right_value264 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value271 = (void*)0;
int i_308;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_309;
struct tuple2$2char$phsNode$ph* it_310;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_311=0;
struct sNode* node_312=0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
_Bool _condtional_value_X8;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
_Bool __result_obj__131;
void* __right_value281 = (void*)0;
_Bool _condtional_value_X9;
_Bool Value_319;
_Bool __result_obj__132;
void* __right_value282 = (void*)0;
struct CVALUE* come_value_320;
void* __right_value283 = (void*)0;
struct sType* __dec_obj80;
void* __right_value284 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* default_param_321;
void* __right_value295 = (void*)0;
char* param_name_322;
void* __right_value296 = (void*)0;
_Bool _condtional_value_X13;
struct buffer* source_323;
char* p_324;
char* head_325;
int sline_326;
void* __right_value297 = (void*)0;
struct buffer* __dec_obj81;
void* __right_value298 = (void*)0;
struct sNode* node_327;
_Bool Value_328;
_Bool __result_obj__133;
struct buffer* __dec_obj82;
void* __right_value299 = (void*)0;
struct CVALUE* come_value_329;
void* __right_value300 = (void*)0;
struct sType* __dec_obj83;
void* __right_value301 = (void*)0;
_Bool _condtional_value_X14;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
_Bool _condtional_value_X15;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
_Bool _condtional_value_X16;
void* __right_value310 = (void*)0;
_Bool __result_obj__134;
_Bool __result_obj__135;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct buffer* buf_330;
char* saved_obj_value_331;
struct sVar* saved_var_332;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* var_name_334;
void* __right_value315 = (void*)0;
struct sType* type_335;
struct sVar* var__336;
void* __right_value316 = (void*)0;
char* __dec_obj84;
int j_337;
struct list$1CVALUE$ph* o2_saved_338;
struct CVALUE* it_339;
int j_340;
struct list$1CVALUE$ph* o2_saved_341;
struct CVALUE* it_342;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct CVALUE* come_value2_343;
void* __right_value319 = (void*)0;
char* __dec_obj85;
void* __right_value320 = (void*)0;
struct sType* __dec_obj86;
void* __right_value321 = (void*)0;
char* __dec_obj87;
struct list$1sType$ph* __dec_obj88;
_Bool __result_obj__136;
    fun_name_142=(char*)come_increment_ref_count(self->fun_name);
    params_143=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_144=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_145=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_146=self->method_block_sline;
    method_generics_types_147=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_148=self->recursive;
    no_infference_method_generics_149=self->no_infference_method_generics;
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    method_generics_types_150=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj62=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    Value_151=node_compile(obj_144,info);
    if(    !Value_151    ) {
        __result_obj__77 = (_Bool)0;
        (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__77;
    }
    else {
    }
    obj_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_153=(struct sType*)come_increment_ref_count(sType_clone(obj_value_152->type));
    if(    !no_infference_method_generics_149    ) {
        no_output_come_code_154=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_155=(struct sType*)come_increment_ref_count(sType_clone(obj_type_153));
        none_generics_name_156=(char*)come_increment_ref_count(get_none_generics_name(type_155->mClass->mName));
        fun_name2_157=(char*)come_increment_ref_count(create_method_name(type_155,(_Bool)0,fun_name_142,info,(_Bool)1));
        fun_name3_158=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_156,fun_name_142));
        generics_fun_159=((struct sGenericsFun*)(__right_value185=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_158,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_159        ) {
            method_generics_160=list$1char$ph_length(generics_fun_159->mMethodGenericsTypeNames)>0;
            if(            method_generics_160&&list$1sType$ph_length(info->method_generics_types)==0            ) {
                multiple_assign_var7=((struct tuple2$2char$phsGenericsFun$p*)(__right_value187=make_generics_function(type_155,(char*)come_increment_ref_count(__builtin_string(fun_name_142)),info,(_Bool)1)));
                name_161=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                gfun_162=multiple_assign_var7->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                generics_fun_name_163=(char*)come_increment_ref_count(name_161);
                fun_164=((struct sFun*)(__right_value188=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_163,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_params_165=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 397, "struct list$1CVALUE$ph*"))));
                if(                method_block_145                ) {
                    no_output_come_code_166=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_145,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_165),fun_164,fun_name3_158,method_block_sline_146,info,(_Bool)1)                    ) {
                        __result_obj__79 = (_Bool)0;
                        (name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (generics_fun_name_163 = come_decrement_ref_count(generics_fun_name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, type_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (none_generics_name_156 = come_decrement_ref_count(none_generics_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (fun_name2_157 = come_decrement_ref_count(fun_name2_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (fun_name3_158 = come_decrement_ref_count(fun_name3_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__79;
                    }
                    info->no_output_come_code=no_output_come_code_166;
                    method_block_node_167=((struct CVALUE*)(__right_value191=list$1CVALUE$ph_operator_load_element(come_params_165,-1)));
                    come_call_finalizer(CVALUE_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    method_block_lambda_type_174=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_167->type));
                    method_block_result_type_175=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_176=((struct sType*)(__right_value194=list$1sType$ph_operator_load_element(generics_fun_159->mParamTypes,-1)));
                    come_call_finalizer(sType_finalize, __right_value194, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    generics_fun_method_block_result_type_177=generics_fun_method_block_lambda_type_176->mResultType;
                    if(                    generics_fun_method_block_result_type_177->mClass->mMethodGenerics                    ) {
                        method_generics_num_178=generics_fun_method_block_result_type_177->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_178,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_175)));
                        come_call_finalizer(sType_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    n_187=0;
                    for(                    o2_saved_188=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_176->mParamTypes)),it_189=list$1sType$ph_begin((o2_saved_188))                    ;                    !list$1sType$ph_end((o2_saved_188))                    ;                    it_189=list$1sType$ph_next((o2_saved_188))                    ){
                        if(                        it_189->mClass->mMethodGenerics                        ) {
                            method_generics_num_190=it_189->mClass->mMethodGenericsNum;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_190,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value202=list$1sType$ph_operator_load_element(method_block_lambda_type_174->mParamTypes,n_187))))));
                            come_call_finalizer(sType_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(sType_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(sType_finalize, __right_value202, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        n_187++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_params_191=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 426, "struct list$1CVALUE$ph*"))));
                    i_192=0;
                    for(                    o2_saved_193=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_143)),it_196=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_193))                    ;                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_193))                    ;                    it_196=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_193))                    ){
                        multiple_assign_var8=it_196;
                        label_199=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                        node_200=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
                        if(                        i_192==0                        ) {
                            list$1CVALUE$ph_push_back(come_params_191,(struct CVALUE*)come_increment_ref_count(obj_value_152));
                            i_192++;
                        }
                        else {
                            Value_201=node_compile(node_200,info);
                            if(                            !Value_201                            ) {
                                __result_obj__93 = (_Bool)0;
                                (label_199 = come_decrement_ref_count(label_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                ((node_200) ? node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, method_block_lambda_type_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, method_block_result_type_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (generics_fun_name_163 = come_decrement_ref_count(generics_fun_name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, type_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (none_generics_name_156 = come_decrement_ref_count(none_generics_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name2_157 = come_decrement_ref_count(fun_name2_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name3_158 = come_decrement_ref_count(fun_name3_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                return __result_obj__93;
                            }
                            else {
                            }
                            come_value_202=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj67=come_value_202->type,
                            come_value_202->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_202->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                            come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_191,(struct CVALUE*)come_increment_ref_count(come_value_202));
                            come_call_finalizer(CVALUE_finalize, come_value_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        (label_199 = come_decrement_ref_count(label_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        ((node_200) ? node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    generics_fun_159->mResultType->mClass->mMethodGenerics                    ) {
                        method_generics_num_203=generics_fun_159->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type                        ) {
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_203,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            come_call_finalizer(sType_finalize, __right_value208, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                    }
                    n_187=0;
                    for(                    o2_saved_204=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_159->mParamTypes)),it_205=list$1sType$ph_begin((o2_saved_204))                    ;                    !list$1sType$ph_end((o2_saved_204))                    ;                    it_205=list$1sType$ph_next((o2_saved_204))                    ){
                        if(                        it_205->mClass->mMethodGenerics                        ) {
                            method_generics_num_206=it_205->mClass->mMethodGenericsNum;
                            if(                            n_187<list$1CVALUE$ph_length(come_params_191)                            ) {
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_206,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value212=list$1CVALUE$ph_operator_load_element(come_params_191,n_187)))->type)));
                                come_call_finalizer(CVALUE_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, __right_value211, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, __right_value212, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                        }
                        n_187++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, method_block_lambda_type_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, method_block_result_type_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    come_params_207=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 465, "struct list$1CVALUE$ph*"))));
                    i_208=0;
                    for(                    o2_saved_209=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_143)),it_210=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_209))                    ;                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_209))                    ;                    it_210=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_209))                    ){
                        multiple_assign_var9=it_210;
                        label_211=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_212=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_208==0                        ) {
                            list$1CVALUE$ph_push_back(come_params_207,(struct CVALUE*)come_increment_ref_count(obj_value_152));
                            i_208++;
                        }
                        else {
                            Value_213=node_compile(node_212,info);
                            if(                            !Value_213                            ) {
                                __result_obj__94 = (_Bool)0;
                                (label_211 = come_decrement_ref_count(label_211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                ((node_212) ? node_212 = come_decrement_ref_count(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (generics_fun_name_163 = come_decrement_ref_count(generics_fun_name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, type_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (none_generics_name_156 = come_decrement_ref_count(none_generics_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name2_157 = come_decrement_ref_count(fun_name2_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name3_158 = come_decrement_ref_count(fun_name3_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                return __result_obj__94;
                            }
                            else {
                            }
                            come_value_214=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj68=come_value_214->type,
                            come_value_214->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_214->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                            come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_207,(struct CVALUE*)come_increment_ref_count(come_value_214));
                            come_call_finalizer(CVALUE_finalize, come_value_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        (label_211 = come_decrement_ref_count(label_211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        ((node_212) ? node_212 = come_decrement_ref_count(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    generics_fun_159->mResultType->mClass->mMethodGenerics                    ) {
                        method_generics_num_215=generics_fun_159->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type                        ) {
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_215,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            come_call_finalizer(sType_finalize, __right_value218, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                    }
                    n_216=0;
                    for(                    o2_saved_217=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_159->mParamTypes)),it_218=list$1sType$ph_begin((o2_saved_217))                    ;                    !list$1sType$ph_end((o2_saved_217))                    ;                    it_218=list$1sType$ph_next((o2_saved_217))                    ){
                        if(                        it_218->mClass->mMethodGenerics                        ) {
                            method_generics_num_219=it_218->mClass->mMethodGenericsNum;
                            if(                            n_216<list$1CVALUE$ph_length(come_params_207)                            ) {
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_219,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value222=list$1CVALUE$ph_operator_load_element(come_params_207,n_216)))->type)));
                                come_call_finalizer(CVALUE_finalize, __right_value220, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, __right_value221, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, __right_value222, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                        }
                        n_216++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_163);
                (name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_163 = come_decrement_ref_count(generics_fun_name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_154;
        come_call_finalizer(sType_finalize, type_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (none_generics_name_156 = come_decrement_ref_count(none_generics_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name2_157 = come_decrement_ref_count(fun_name2_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name3_158 = come_decrement_ref_count(fun_name3_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    klass_238=obj_type_153->mClass;
    calling_dynamic_method_239=(_Bool)0;
    lambda_type_240=((void*)0);
    for(    o2_saved_241=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_238->mFields)),it_244=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_241))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_241))    ;    it_244=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_241))    ){
        multiple_assign_var10=it_244;
        field_name_247=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        field_type_248=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        string_operator_equals(field_name_247,fun_name_142)&&string_operator_equals(field_type_248->mClass->mName,"lambda")        ) {
            calling_dynamic_method_239=(_Bool)1;
            lambda_type_240=field_type_248;
            (field_name_247 = come_decrement_ref_count(field_name_247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        (field_name_247 = come_decrement_ref_count(field_name_247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    calling_dynamic_method_239    ) {
        result_type_249=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_240->mResultType));
        result_type_249->mStatic=(_Bool)0;
        if(        obj_type_153->mImmutable        ) {
            if(            !result_type_249->mImmutable            ) {
                ((struct tuple2$2int$bool$*)(__right_value225=err_msg(info,"Immutable object can't call mutable method(%s)",fun_name_142)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value225, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__106 = (_Bool)1;
                come_call_finalizer(sType_finalize, result_type_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__106;
            }
        }
        come_params_250=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 535, "struct list$1CVALUE$ph*"))));
        i_251=0;
        for(        o2_saved_252=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_143)),it_253=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_252))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_252))        ;        it_253=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_252))        ){
            multiple_assign_var11=it_253;
            label_254=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_255=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            i_251==0            ) {
                list$1CVALUE$ph_push_back(come_params_250,(struct CVALUE*)come_increment_ref_count(obj_value_152));
                i_251++;
            }
            else {
                Value_256=node_compile(node_255,info);
                if(                !Value_256                ) {
                    __result_obj__107 = (_Bool)0;
                    (label_254 = come_decrement_ref_count(label_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_255) ? node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__107;
                }
                else {
                }
                come_value_257=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj69=come_value_257->type,
                come_value_257->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_257->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                check_assign_type(((char*)(__right_value232=xsprintf("(a). \%s param num \%s is assinged to",((char*)(__right_value230=string_to_string(fun_name_142))),((char*)(__right_value231=int_to_string(i_251)))))),((struct sType*)(__right_value233=list$1sType$ph_operator_load_element(lambda_type_240->mParamTypes,i_251-1))),come_value_257->type,come_value_257,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value233, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X4=(((struct sType*)(__right_value234=list$1sType$ph_operator_load_element(lambda_type_240->mParamTypes,i_251-1)))->mHeap&&come_value_257->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value234, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X4                ) {
                    std_move(((struct sType*)(__right_value235=list$1sType$ph_operator_load_element(lambda_type_240->mParamTypes,i_251-1))),come_value_257->type,come_value_257,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value235, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_250,(struct CVALUE*)come_increment_ref_count(come_value_257));
                i_251++;
                come_call_finalizer(CVALUE_finalize, come_value_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (label_254 = come_decrement_ref_count(label_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_255) ? node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buf_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 566, "struct buffer*"))));
        buffer_append_format(buf_258,"%s->%s",obj_value_152->c_value,fun_name_142);
        buffer_append_str(buf_258,"(");
        j_259=0;
        for(        o2_saved_260=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_250)),it_263=list$1CVALUE$ph_begin((o2_saved_260))        ;        !list$1CVALUE$ph_end((o2_saved_260))        ;        it_263=list$1CVALUE$ph_next((o2_saved_260))        ){
            if(            j_259==0            ) {
                __dec_obj70=it_263->c_value,
                it_263->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_263->c_value));
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            buffer_append_str(buf_258,it_263->c_value);
            if(            j_259!=list$1CVALUE$ph_length(come_params_250)-1            ) {
                buffer_append_str(buf_258,",");
            }
            j_259++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_258,")");
        come_value2_266=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 586, "struct CVALUE*"))));
        __dec_obj71=come_value2_266->c_value,
        come_value2_266->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_258));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type2_267=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_249),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj72=come_value2_266->type,
        come_value2_266->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_267));
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_266->type->mStatic=(_Bool)0;
        come_value2_266->type->mImmutable=(_Bool)0;
        come_value2_266->var=((void*)0);
        if(        result_type2_267->mHeap        ) {
            append_object_to_right_values(come_value2_266,(struct sType*)come_increment_ref_count(result_type2_267),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2_266->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_266));
        come_call_finalizer(list$1sType$ph$p_finalize, info->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj73=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_150);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer(sType_finalize, result_type_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        multiple_assign_var12=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value244=get_method(fun_name_142,(struct sType*)come_increment_ref_count(obj_type_153),info)));
        generics_fun_name_268=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        fun_269=multiple_assign_var12->v2;
        generics_fun_270=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value244, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_269==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value245=err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_268,info->come_fun->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value245, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__114 = (_Bool)1;
            (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__114;
        }
        if(        list$1sType$ph_length(fun_269->mParamTypes)==0        ) {
            ((struct tuple2$2int$bool$*)(__right_value246=err_msg(info,"Method require function parametor")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value246, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__115 = (_Bool)1;
            (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__115;
        }
        result_type_271=(struct sType*)come_increment_ref_count(sType_clone(fun_269->mResultType));
        __dec_obj74=result_type_271,
        result_type_271=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_271),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_271->mStatic=(_Bool)0;
        if(        obj_type_153->mImmutable        ) {
            if(            !result_type_271->mImmutable            ) {
                ((struct tuple2$2int$bool$*)(__right_value249=err_msg(info,"Immutable object can't call mutable method(%s)",fun_name_142)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value249, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__116 = (_Bool)1;
                (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__116;
            }
        }
        param_types_272=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 636, "struct list$1sType$ph*"))));
        for(        o2_saved_273=(struct list$1sType$ph*)come_increment_ref_count((fun_269->mParamTypes)),it_274=list$1sType$ph_begin((o2_saved_273))        ;        !list$1sType$ph_end((o2_saved_273))        ;        it_274=list$1sType$ph_next((o2_saved_273))        ){
            if(            it_274==((void*)0)            ) {
                list$1sType$ph_push_back(param_types_272,(struct sType*)come_increment_ref_count(sType_clone(it_274)));
            }
            else {
                it2_275=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_274),(struct sType*)come_increment_ref_count(info->generics_type),info));
                no_solved_obj_type_276=(struct sType*)come_increment_ref_count(obj_type_153->mNoSolvedGenericsType);
                it3_277=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_274),(struct sType*)come_increment_ref_count(no_solved_obj_type_276),info));
                list$1sType$ph_push_back(param_types_272,(struct sType*)come_increment_ref_count(it2_275));
                come_call_finalizer(sType_finalize, it2_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, no_solved_obj_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, it3_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        type_checking_param_types_278=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_272));
        if(        generics_fun_270        ) {
            n_279=0;
            for(            o2_saved_280=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_270->mParamTypes)),it_281=list$1sType$ph_begin((o2_saved_280))            ;            !list$1sType$ph_end((o2_saved_280))            ;            it_281=list$1sType$ph_next((o2_saved_280))            ){
                if(                it_281==((void*)0)                ) {
                }
                else {
                    no_solved_obj_type_282=(struct sType*)come_increment_ref_count(obj_type_153->mNoSolvedGenericsType);
                    it3_283=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_281),(struct sType*)come_increment_ref_count(no_solved_obj_type_282),info));
                    come_call_finalizer(sType_finalize, no_solved_obj_type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, it3_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                n_279++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_params_284=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 666, "struct list$1CVALUE$ph*"))));
        for(        i_285=0        ;        i_285<list$1sType$ph_length(fun_269->mParamTypes)-(((method_block_145)?(2):(0)))        ;        i_285++        ){
            list$1CVALUE$ph_add(come_params_284,((void*)0));
        }
        first_param_289=(_Bool)1;
        for(        o2_saved_290=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_143)),it_291=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_290))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_290))        ;        it_291=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_290))        ){
            multiple_assign_var13=it_291;
            label_292=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_293=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param_289            ) {
                first_param_289=(_Bool)0;
            }
            else if(            label_292            ) {
                n_294=0;
                for(                o2_saved_295=(struct list$1char$ph*)come_increment_ref_count((fun_269->mParamNames)),it_298=list$1char$ph_begin((o2_saved_295))                ;                !list$1char$ph_end((o2_saved_295))                ;                it_298=list$1char$ph_next((o2_saved_295))                ){
                    if(                    string_operator_equals(label_292,it_298)                    ) {
                        break;
                    }
                    n_294++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                Value_301=node_compile(node_293,info);
                if(                !Value_301                ) {
                    __result_obj__124 = (_Bool)0;
                    (label_292 = come_decrement_ref_count(label_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_293) ? node_293 = come_decrement_ref_count(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__124;
                }
                else {
                }
                come_value_302=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj78=come_value_302->type,
                come_value_302->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_302->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X5=(((struct sType*)(__right_value264=list$1sType$ph_operator_load_element(param_types_272,n_294))))),                come_call_finalizer(sType_finalize, __right_value264, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X5                ) {
                    check_assign_type(((char*)(__right_value267=xsprintf("(b). \%s param num \%s is assinged to",((char*)(__right_value265=string_to_string(fun_name_142))),((char*)(__right_value266=int_to_string(n_294)))))),((struct sType*)(__right_value268=list$1sType$ph_operator_load_element(type_checking_param_types_278,n_294))),come_value_302->type,come_value_302,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value268, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X6=(((struct sType*)(__right_value269=list$1sType$ph_operator_load_element(param_types_272,n_294)))&&((struct sType*)(__right_value270=list$1sType$ph_operator_load_element(param_types_272,n_294)))->mHeap&&come_value_302->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value269, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value270, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X6                ) {
                    std_move(((struct sType*)(__right_value271=list$1sType$ph_operator_load_element(param_types_272,n_294))),come_value_302->type,come_value_302,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value271, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_284,n_294,(struct CVALUE*)come_increment_ref_count(come_value_302));
                come_call_finalizer(CVALUE_finalize, come_value_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (label_292 = come_decrement_ref_count(label_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_293) ? node_293 = come_decrement_ref_count(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        i_308=0;
        for(        o2_saved_309=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_143)),it_310=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_309))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_309))        ;        it_310=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_309))        ){
            multiple_assign_var14=it_310;
            label_311=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_312=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_308==0            ) {
                check_assign_type(((char*)(__right_value274=xsprintf("(c). \%s param num \%s is assinged to",((char*)(__right_value272=string_to_string(fun_name_142))),((char*)(__right_value273=int_to_string(i_308)))))),((struct sType*)(__right_value275=list$1sType$ph_operator_load_element(type_checking_param_types_278,i_308))),obj_value_152->type,obj_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value275, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X7=(((struct sType*)(__right_value276=list$1sType$ph_operator_load_element(param_types_272,i_308)))->mHeap&&obj_value_152->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value276, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X7                ) {
                    std_move(((struct sType*)(__right_value277=list$1sType$ph_operator_load_element(param_types_272,i_308))),obj_value_152->type,obj_value_152,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value277, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else if(                (_condtional_value_X8=(((struct sType*)(__right_value278=list$1sType$ph_operator_load_element(param_types_272,i_308)))->mHeap&&!obj_value_152->type->mHeap&&!gComeGC)),                come_call_finalizer(sType_finalize, __right_value278, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X8                ) {
                    ((struct tuple2$2int$bool$*)(__right_value280=err_msg(info,"require heap parametor(%s)",((char*)(__right_value279=list$1char$ph_operator_load_element(fun_269->mParamNames,i_308))))));
                    (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__131 = (_Bool)1;
                    (label_311 = come_decrement_ref_count(label_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_312) ? node_312 = come_decrement_ref_count(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__131;
                }
                list$1CVALUE$ph_replace(come_params_284,i_308,(struct CVALUE*)come_increment_ref_count(obj_value_152));
                i_308++;
            }
            else if(            label_311            ) {
            }
            else {
                while(                (_Bool)1                ) {
                    if(                    (_condtional_value_X9=(((struct CVALUE*)(__right_value281=list$1CVALUE$ph_operator_load_element(come_params_284,i_308)))==((void*)0))),                    come_call_finalizer(CVALUE_finalize, __right_value281, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X9                    ) {
                        break;
                    }
                    else {
                        i_308++;
                    }
                }
                Value_319=node_compile(node_312,info);
                if(                !Value_319                ) {
                    __result_obj__132 = (_Bool)0;
                    (label_311 = come_decrement_ref_count(label_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_312) ? node_312 = come_decrement_ref_count(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__132;
                }
                else {
                }
                come_value_320=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj80=come_value_320->type,
                come_value_320->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_320->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X10=(((struct sType*)(__right_value284=list$1sType$ph_operator_load_element(param_types_272,i_308))))),                come_call_finalizer(sType_finalize, __right_value284, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X10                ) {
                    check_assign_type(((char*)(__right_value287=xsprintf("(d). \%s param num \%s is assinged to",((char*)(__right_value285=string_to_string(fun_name_142))),((char*)(__right_value286=int_to_string(i_308)))))),((struct sType*)(__right_value288=list$1sType$ph_operator_load_element(type_checking_param_types_278,i_308))),come_value_320->type,come_value_320,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value288, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X11=(((struct sType*)(__right_value289=list$1sType$ph_operator_load_element(param_types_272,i_308)))&&((struct sType*)(__right_value290=list$1sType$ph_operator_load_element(param_types_272,i_308)))->mHeap&&come_value_320->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value290, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X11                ) {
                    std_move(((struct sType*)(__right_value291=list$1sType$ph_operator_load_element(param_types_272,i_308))),come_value_320->type,come_value_320,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_284,i_308,(struct CVALUE*)come_increment_ref_count(come_value_320));
                i_308++;
                come_call_finalizer(CVALUE_finalize, come_value_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (label_311 = come_decrement_ref_count(label_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_312) ? node_312 = come_decrement_ref_count(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        while(        (_Bool)1        ) {
            if(            (_condtional_value_X12=(((struct CVALUE*)(__right_value292=list$1CVALUE$ph_operator_load_element(come_params_284,i_308)))==((void*)0))),            come_call_finalizer(CVALUE_finalize, __right_value292, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X12            ) {
                break;
            }
            else {
                i_308++;
            }
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params_143)<list$1sType$ph_length(fun_269->mParamTypes)+(((method_block_145)?(-2):(0)))        ) {
            for(            ;            i_308<list$1sType$ph_length(fun_269->mParamTypes)+(((method_block_145)?(-2):(0)))            ;            i_308++            ){
                default_param_321=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value293=list$1char$ph_operator_load_element(fun_269->mParamDefaultParametors,i_308))), "20method.c", 769, "char*"));
                (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                param_name_322=((char*)(__right_value295=list$1char$ph_operator_load_element(fun_269->mParamNames,i_308)));
                (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                (_condtional_value_X13=(default_param_321&&string_operator_not_equals(default_param_321,"")&&((struct CVALUE*)(__right_value296=list$1CVALUE$ph_operator_load_element(come_params_284,i_308)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value296, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X13                ) {
                    source_323=(struct buffer*)come_increment_ref_count(info->source);
                    p_324=info->p;
                    head_325=info->head;
                    sline_326=info->sline;
                    __dec_obj81=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_321));
                    come_call_finalizer(buffer_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_327=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_328=node_compile(node_327,info);
                    if(                    !Value_328                    ) {
                        __result_obj__133 = (_Bool)0;
                        come_call_finalizer(buffer_finalize, source_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((node_327) ? node_327 = come_decrement_ref_count(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        (default_param_321 = come_decrement_ref_count(default_param_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__133;
                    }
                    else {
                    }
                    __dec_obj82=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source_323);
                    come_call_finalizer(buffer_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    info->p=p_324;
                    info->head=head_325;
                    info->sline=sline_326;
                    come_value_329=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    __dec_obj83=come_value_329->type,
                    come_value_329->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_329->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                    come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    if(                    (_condtional_value_X14=(((struct sType*)(__right_value301=list$1sType$ph_operator_load_element(param_types_272,i_308))))),                    come_call_finalizer(sType_finalize, __right_value301, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X14                    ) {
                        check_assign_type(((char*)(__right_value304=xsprintf("(e). \%s param num \%s is assinged to",((char*)(__right_value302=string_to_string(fun_name_142))),((char*)(__right_value303=int_to_string(i_308)))))),((struct sType*)(__right_value305=list$1sType$ph_operator_load_element(type_checking_param_types_278,i_308))),come_value_329->type,come_value_329,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, __right_value305, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    if(                    (_condtional_value_X15=(((struct sType*)(__right_value306=list$1sType$ph_operator_load_element(param_types_272,i_308)))&&((struct sType*)(__right_value307=list$1sType$ph_operator_load_element(param_types_272,i_308)))->mHeap&&come_value_329->type->mHeap)),                    come_call_finalizer(sType_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    come_call_finalizer(sType_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X15                    ) {
                        std_move(((struct sType*)(__right_value308=list$1sType$ph_operator_load_element(param_types_272,i_308))),come_value_329->type,come_value_329,info,(_Bool)1);
                        come_call_finalizer(sType_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_284,i_308,(struct CVALUE*)come_increment_ref_count(come_value_329));
                    come_call_finalizer(buffer_finalize, source_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((node_327) ? node_327 = come_decrement_ref_count(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    if(                    (_condtional_value_X16=(((struct CVALUE*)(__right_value309=list$1CVALUE$ph_operator_load_element(come_params_284,i_308)))==((void*)0))),                    come_call_finalizer(CVALUE_finalize, __right_value309, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X16                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value310=err_msg(info,"require parametor(%s) %d",fun_269->mName,i_308)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value310, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __result_obj__134 = (_Bool)1;
                        (default_param_321 = come_decrement_ref_count(default_param_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__134;
                    }
                }
                (default_param_321 = come_decrement_ref_count(default_param_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        if(        method_block_145        ) {
            if(            !compile_method_block(method_block_145,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_284),fun_269,fun_name_142,method_block_sline_146,info,(_Bool)0)            ) {
                __result_obj__135 = (_Bool)0;
                (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__135;
            }
        }
        buf_330=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 818, "struct buffer*"))));
        buffer_append_str(buf_330,generics_fun_name_268);
        buffer_append_str(buf_330,"(");
        saved_obj_value_331=((void*)0);
        saved_var_332=((void*)0);
        if(        result_type_271->mDefferRightValue        ) {
            static int n_333=0;
            n_333++;
            var_name_334=(char*)come_increment_ref_count(xsprintf("deffer_right_value\%s",((char*)(__right_value313=int_to_string(n_333)))));
            (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            type_335=(struct sType*)come_increment_ref_count(sType_clone(obj_type_153));
            type_335->mDefferRightValue=(_Bool)1;
            add_variable_to_table(var_name_334,(struct sType*)come_increment_ref_count(type_335),info,(_Bool)0,info->comma_instead_of_semicolon);
            var__336=get_variable_from_table(info->lv_table,var_name_334);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value316=make_define_var(type_335,var__336->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            info->comma_instead_of_semicolon            ) {
                add_come_code(info,"%s=%s,",var__336->mCValueName,obj_value_152->c_value);
            }
            else {
                add_come_code(info,"%s=%s;\n",var__336->mCValueName,obj_value_152->c_value);
            }
            __dec_obj84=saved_obj_value_331,
            saved_obj_value_331=(char*)come_increment_ref_count(var__336->mCValueName);
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            saved_var_332=var__336;
            j_337=0;
            for(            o2_saved_338=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_284)),it_339=list$1CVALUE$ph_begin((o2_saved_338))            ;            !list$1CVALUE$ph_end((o2_saved_338))            ;            it_339=list$1CVALUE$ph_next((o2_saved_338))            ){
                if(                j_337==0                ) {
                    buffer_append_str(buf_330,saved_obj_value_331);
                }
                else {
                    buffer_append_str(buf_330,it_339->c_value);
                }
                if(                j_337!=list$1CVALUE$ph_length(come_params_284)-1                ) {
                    buffer_append_str(buf_330,",");
                }
                j_337++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_334 = come_decrement_ref_count(var_name_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            j_340=0;
            for(            o2_saved_341=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_284)),it_342=list$1CVALUE$ph_begin((o2_saved_341))            ;            !list$1CVALUE$ph_end((o2_saved_341))            ;            it_342=list$1CVALUE$ph_next((o2_saved_341))            ){
                buffer_append_str(buf_330,it_342->c_value);
                if(                j_340!=list$1CVALUE$ph_length(come_params_284)-1                ) {
                    buffer_append_str(buf_330,",");
                }
                j_340++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(buf_330,")");
        come_value2_343=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 877, "struct CVALUE*"))));
        come_value2_343->var=((void*)0);
        __dec_obj85=come_value2_343->c_value,
        come_value2_343->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_330));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj86=come_value2_343->type,
        come_value2_343->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_271));
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_343->type->mStatic=(_Bool)0;
        come_value2_343->type->mImmutable=(_Bool)0;
        if(        result_type_271->mHeap        ) {
            append_object_to_right_values(come_value2_343,(struct sType*)come_increment_ref_count(result_type_271),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_153),saved_obj_value_331,saved_var_332);
        }
        else if(        saved_obj_value_331        ) {
            append_object_to_right_values(come_value2_343,(struct sType*)come_increment_ref_count(result_type_271),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_153),saved_obj_value_331,saved_var_332);
        }
        __dec_obj87=come_value2_343->c_value,
        come_value2_343->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_343->c_value,come_value2_343->type,info));
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        add_come_last_code(info,"%s",come_value2_343->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_343));
        come_call_finalizer(list$1sType$ph$p_finalize, info->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj88=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_150);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->calling_fun=fun_269;
        (generics_fun_name_268 = come_decrement_ref_count(generics_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (saved_obj_value_331 = come_decrement_ref_count(saved_obj_value_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__136 = (_Bool)1;
    (fun_name_142 = come_decrement_ref_count(fun_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((obj_144) ? obj_144 = come_decrement_ref_count(obj_144, ((struct sNode*)obj_144)->finalize, ((struct sNode*)obj_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, method_block_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__69;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_134;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_135;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__74;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    result_134=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_135=self->head;
    while(    it_135!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_134,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_135->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_134,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_135->item)));
        }
        it_135=it_135->next;
    }
    __result_obj__74 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_134);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_132;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_133;
    it_132=self->head;
    while(    it_132!=((void*)0)    ) {
        prev_it_133=it_132;
        it_132=it_132->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value166 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_136;
struct tuple2$2char$phsNode$ph* __dec_obj54;
void* __right_value167 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_137;
struct tuple2$2char$phsNode$ph* __dec_obj55;
void* __right_value168 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_138;
struct tuple2$2char$phsNode$ph* __dec_obj56;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__71;
    if(    self->len==0    ) {
        litem_136=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value166=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        __dec_obj54=litem_136->item,
        litem_136->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1    ) {
        litem_137=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value167=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        __dec_obj55=litem_137->item,
        litem_137->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value168=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        __dec_obj56=litem_138->item,
        litem_138->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result_obj__71 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__71;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__72;
void* __right_value169 = (void*)0;
struct tuple2$2char$phsNode$ph* result_139;
void* __right_value170 = (void*)0;
char* __dec_obj57;
void* __right_value171 = (void*)0;
struct sNode* __dec_obj58;
struct tuple2$2char$phsNode$ph* __result_obj__73;
    if(    self==(void*)0    ) {
        __result_obj__72 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__72;
    }
    result_139=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj57=result_139->v1,
        result_139->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj58=result_139->v2,
        result_139->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__73 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_139);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_140;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_141;
    it_140=self->head;
    while(    it_140!=((void*)0)    ) {
        prev_it_141=it_140;
        it_140=it_140->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)    ) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__78 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_168;
int i_169;
struct CVALUE* __result_obj__80;
struct CVALUE* default_value_170;
struct CVALUE* __result_obj__81;
default_value_170 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_168=self->head;
    i_169=0;
    while(    it_168!=((void*)0)    ) {
        if(        position==i_169        ) {
            __result_obj__80 = (struct CVALUE*)come_increment_ref_count(it_168->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__80;
        }
        it_168=it_168->next;
        i_169++;
    }
    memset(&default_value_170,0,sizeof(struct CVALUE*));
    __result_obj__81 = (struct CVALUE*)come_increment_ref_count(default_value_170);
    come_call_finalizer(CVALUE_finalize, default_value_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_171;
int i_172;
struct CVALUE* __result_obj__82;
struct CVALUE* default_value_173;
struct CVALUE* __result_obj__83;
default_value_173 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_171=self->head;
    i_172=0;
    while(    it_171!=((void*)0)    ) {
        if(        position==i_172        ) {
            __result_obj__82 = (struct CVALUE*)come_increment_ref_count(it_171->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__82;
        }
        it_171=it_171->next;
        i_172++;
    }
    memset(&default_value_173,0,sizeof(struct CVALUE*));
    __result_obj__83 = (struct CVALUE*)come_increment_ref_count(default_value_173);
    come_call_finalizer(CVALUE_finalize, default_value_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_179;
int i_180;
struct sType* default_value_181;
struct list$1sType$ph* __result_obj__85;
struct list_item$1sType$ph* it_185;
int i_186;
struct sType* __dec_obj66;
struct list$1sType$ph* __result_obj__86;
default_value_181 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_179=self->len;
        for(        i_180=0        ;        i_180<position-len_179        ;        i_180++        ){
            memset(&default_value_181,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_181));
            come_call_finalizer(sType_finalize, default_value_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__85 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__85;
    }
    it_185=self->head;
    i_186=0;
    while(    it_185!=((void*)0)    ) {
        if(        position==i_186        ) {
            __dec_obj66=it_185->item,
            it_185->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_185=it_185->next;
        i_186++;
    }
    __result_obj__86 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_182;
struct sType* __dec_obj63;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_183;
struct sType* __dec_obj64;
void* __right_value197 = (void*)0;
struct list_item$1sType$ph* litem_184;
struct sType* __dec_obj65;
struct list$1sType$ph* __result_obj__84;
    if(    self->len==0    ) {
        litem_182=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sType$ph*"))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        __dec_obj63=litem_182->item,
        litem_182->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1    ) {
        litem_183=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sType$ph*"))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        __dec_obj64=litem_183->item,
        litem_183->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value197=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        __dec_obj65=litem_184->item,
        litem_184->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result_obj__84 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_194;
struct tuple2$2char$phsNode$ph* __result_obj__87;
struct tuple2$2char$phsNode$ph* __result_obj__88;
struct tuple2$2char$phsNode$ph* result_195;
struct tuple2$2char$phsNode$ph* __result_obj__89;
result_194 = (void*)0;
result_195 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_194,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__87 = result_194;
        return __result_obj__87;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_195,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__89 = result_195;
    return __result_obj__89;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_197;
struct tuple2$2char$phsNode$ph* __result_obj__90;
struct tuple2$2char$phsNode$ph* __result_obj__91;
struct tuple2$2char$phsNode$ph* result_198;
struct tuple2$2char$phsNode$ph* __result_obj__92;
result_197 = (void*)0;
result_198 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_197,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__90 = result_197;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_198,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__92 = result_198;
    return __result_obj__92;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_220;
unsigned int it_221;
struct map$2char$phsFun$ph* __result_obj__99;
    hash_220=string_get_hash_key(((char*)key))%self->size;
    it_221=hash_220;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_221]        ) {
            if(            string_equals(self->keys[it_221],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_221]);
                self->item_existance[it_221]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_221] = come_decrement_ref_count(self->keys[it_221], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_221]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_221], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_221]=((void*)0);
                self->len--;
                break;
            }
            it_221++;
            if(            it_221>=self->size            ) {
                it_221=0;
            }
            else if(            it_221==hash_220            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__99 = self;
    return __result_obj__99;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_222;
struct list_item$1char$ph* it_223;
struct list$1char$ph* __result_obj__98;
    it2_222=0;
    it_223=self->head;
    while(    it_223!=((void*)0)    ) {
        if(        string_equals(it_223->item,item)        ) {
            list$1char$ph_delete(self,it2_222,it2_222+1);
            break;
        }
        it2_222++;
        it_223=it_223->next;
    }
    __result_obj__98 = self;
    return __result_obj__98;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_224;
struct list$1char$ph* __result_obj__95;
struct list_item$1char$ph* it_227;
int i_228;
struct list_item$1char$ph* prev_it_229;
struct list_item$1char$ph* it_230;
int i_231;
struct list_item$1char$ph* prev_it_232;
struct list_item$1char$ph* it_233;
struct list_item$1char$ph* head_prev_it_234;
struct list_item$1char$ph* tail_it_235;
int i_236;
struct list_item$1char$ph* prev_it_237;
struct list$1char$ph* __result_obj__97;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_224=tail;
        tail=head;
        head=tmp_224;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__95 = self;
        return __result_obj__95;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_227=self->head;
        i_228=0;
        while(        it_227!=((void*)0)        ) {
            if(            i_228<tail            ) {
                prev_it_229=it_227;
                it_227=it_227->next;
                i_228++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_228==tail            ) {
                self->head=it_227;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_227=it_227->next;
                i_228++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_230=self->head;
        i_231=0;
        while(        it_230!=((void*)0)        ) {
            if(            i_231==head            ) {
                self->tail=it_230->prev;
                self->tail->next=((void*)0);
            }
            if(            i_231>=head            ) {
                prev_it_232=it_230;
                it_230=it_230->next;
                i_231++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_230=it_230->next;
                i_231++;
            }
        }
    }
    else {
        it_233=self->head;
        head_prev_it_234=((void*)0);
        tail_it_235=((void*)0);
        i_236=0;
        while(        it_233!=((void*)0)        ) {
            if(            i_236==head            ) {
                head_prev_it_234=it_233->prev;
            }
            if(            i_236==tail            ) {
                tail_it_235=it_233;
            }
            if(            i_236>=head&&i_236<tail            ) {
                prev_it_237=it_233;
                it_233=it_233->next;
                i_236++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_233=it_233->next;
                i_236++;
            }
        }
        if(        head_prev_it_234!=((void*)0)        ) {
            head_prev_it_234->next=tail_it_235;
        }
        if(        tail_it_235!=((void*)0)        ) {
            tail_it_235->prev=head_prev_it_234;
        }
    }
    __result_obj__97 = self;
    return __result_obj__97;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_225;
struct list_item$1char$ph* prev_it_226;
struct list$1char$ph* __result_obj__96;
    it_225=self->head;
    while(    it_225!=((void*)0)    ) {
        prev_it_226=it_225;
        it_225=it_225->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__96 = self;
    return __result_obj__96;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_242;
struct tuple2$2char$phsType$ph* __result_obj__100;
struct tuple2$2char$phsType$ph* __result_obj__101;
struct tuple2$2char$phsType$ph* result_243;
struct tuple2$2char$phsType$ph* __result_obj__102;
result_242 = (void*)0;
result_243 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_242,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__100 = result_242;
        return __result_obj__100;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__101 = self->it->item;
        return __result_obj__101;
    }
    memset(&result_243,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__102 = result_243;
    return __result_obj__102;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_245;
struct tuple2$2char$phsType$ph* __result_obj__103;
struct tuple2$2char$phsType$ph* __result_obj__104;
struct tuple2$2char$phsType$ph* result_246;
struct tuple2$2char$phsType$ph* __result_obj__105;
result_245 = (void*)0;
result_246 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_245,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__103 = result_245;
        return __result_obj__103;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__104 = self->it->item;
        return __result_obj__104;
    }
    memset(&result_246,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__105 = result_246;
    return __result_obj__105;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_261;
struct CVALUE* __result_obj__108;
struct CVALUE* __result_obj__109;
struct CVALUE* result_262;
struct CVALUE* __result_obj__110;
result_261 = (void*)0;
result_262 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_261,0,sizeof(struct CVALUE*));
        __result_obj__108 = result_261;
        return __result_obj__108;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__109 = self->it->item;
        return __result_obj__109;
    }
    memset(&result_262,0,sizeof(struct CVALUE*));
    __result_obj__110 = result_262;
    return __result_obj__110;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_264;
struct CVALUE* __result_obj__111;
struct CVALUE* __result_obj__112;
struct CVALUE* result_265;
struct CVALUE* __result_obj__113;
result_264 = (void*)0;
result_265 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_264,0,sizeof(struct CVALUE*));
        __result_obj__111 = result_264;
        return __result_obj__111;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__112 = self->it->item;
        return __result_obj__112;
    }
    memset(&result_265,0,sizeof(struct CVALUE*));
    __result_obj__113 = result_265;
    return __result_obj__113;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value259 = (void*)0;
struct list_item$1CVALUE$ph* litem_286;
struct CVALUE* __dec_obj75;
void* __right_value260 = (void*)0;
struct list_item$1CVALUE$ph* litem_287;
struct CVALUE* __dec_obj76;
void* __right_value261 = (void*)0;
struct list_item$1CVALUE$ph* litem_288;
struct CVALUE* __dec_obj77;
struct list$1CVALUE$ph* __result_obj__117;
    if(    self->len==0    ) {
        litem_286=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value259=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1CVALUE$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj75=litem_286->item,
        litem_286->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1    ) {
        litem_287=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value260=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1CVALUE$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj76=litem_287->item,
        litem_287->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value261=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1CVALUE$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj77=litem_288->item,
        litem_288->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__117 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__117;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_296;
char* __result_obj__118;
char* __result_obj__119;
char* result_297;
char* __result_obj__120;
result_296 = (void*)0;
result_297 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_296,0,sizeof(char*));
        __result_obj__118 = result_296;
        return __result_obj__118;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__119 = self->it->item;
        return __result_obj__119;
    }
    memset(&result_297,0,sizeof(char*));
    __result_obj__120 = result_297;
    return __result_obj__120;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_299;
char* __result_obj__121;
char* __result_obj__122;
char* result_300;
char* __result_obj__123;
result_299 = (void*)0;
result_300 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_299,0,sizeof(char*));
        __result_obj__121 = result_299;
        return __result_obj__121;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__122 = self->it->item;
        return __result_obj__122;
    }
    memset(&result_300,0,sizeof(char*));
    __result_obj__123 = result_300;
    return __result_obj__123;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_303;
int i_304;
struct CVALUE* default_value_305;
struct list$1CVALUE$ph* __result_obj__125;
struct list_item$1CVALUE$ph* it_306;
int i_307;
struct CVALUE* __dec_obj79;
struct list$1CVALUE$ph* __result_obj__126;
default_value_305 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_303=self->len;
        for(        i_304=0        ;        i_304<position-len_303        ;        i_304++        ){
            memset(&default_value_305,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_305));
            come_call_finalizer(CVALUE_finalize, default_value_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__125 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__125;
    }
    it_306=self->head;
    i_307=0;
    while(    it_306!=((void*)0)    ) {
        if(        position==i_307        ) {
            __dec_obj79=it_306->item,
            it_306->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_306=it_306->next;
        i_307++;
    }
    __result_obj__126 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__126;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_313;
int i_314;
char* __result_obj__127;
char* default_value_315;
char* __result_obj__128;
default_value_315 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_313=self->head;
    i_314=0;
    while(    it_313!=((void*)0)    ) {
        if(        position==i_314        ) {
            __result_obj__127 = (char*)come_increment_ref_count(it_313->item);
            (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__127;
        }
        it_313=it_313->next;
        i_314++;
    }
    memset(&default_value_315,0,sizeof(char*));
    __result_obj__128 = (char*)come_increment_ref_count(default_value_315);
    (default_value_315 = come_decrement_ref_count(default_value_315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_316;
int i_317;
char* __result_obj__129;
char* default_value_318;
char* __result_obj__130;
default_value_318 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_316=self->head;
    i_317=0;
    while(    it_316!=((void*)0)    ) {
        if(        position==i_317        ) {
            __result_obj__129 = (char*)come_increment_ref_count(it_316->item);
            (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__129;
        }
        it_316=it_316->next;
        i_317++;
    }
    memset(&default_value_318,0,sizeof(char*));
    __result_obj__130 = (char*)come_increment_ref_count(default_value_318);
    (default_value_318 = come_decrement_ref_count(default_value_318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err){
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value331 = (void*)0;
struct sNode* node_344;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj95;
struct sNode* __result_obj__139;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 911, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value323=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 911, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info,no_err))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node_344=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sMethodCallNode_finalize, __right_value323, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    !no_err    ) {
        __dec_obj95=node_344,
        node_344=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_344),info));
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__139 = (struct sNode*)come_increment_ref_count(node_344);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_344) ? node_344 = come_decrement_ref_count(node_344, ((struct sNode*)node_344)->finalize, ((struct sNode*)node_344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__139;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__137;
void* __right_value324 = (void*)0;
struct sMethodCallNode* result_345;
void* __right_value325 = (void*)0;
char* __dec_obj89;
void* __right_value326 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value327 = (void*)0;
char* __dec_obj91;
void* __right_value328 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj92;
void* __right_value329 = (void*)0;
struct buffer* __dec_obj93;
void* __right_value330 = (void*)0;
struct list$1sType$ph* __dec_obj94;
struct sMethodCallNode* __result_obj__138;
    if(    self==(void*)0    ) {
        __result_obj__137 = (void*)0;
        return __result_obj__137;
    }
    result_345=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)    ) {
        result_345->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj89=result_345->sname,
        result_345->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMethodCallNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_345->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)    ) {
        __dec_obj90=result_345->obj,
        result_345->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __dec_obj91=result_345->fun_name,
        result_345->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sMethodCallNode_clone", 8, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj92=result_345->params,
        result_345->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __dec_obj93=result_345->method_block,
        result_345->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_345->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __dec_obj94=result_345->method_generics_types,
        result_345->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_345->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)    ) {
        result_345->recursive=self->recursive;
    }
    if(    self!=((void*)0)    ) {
        result_345->fun=self->fun;
    }
    if(    self!=((void*)0)    ) {
        result_345->no_err=self->no_err;
    }
    __result_obj__138 = result_345;
    come_call_finalizer(sMethodCallNode_finalize, result_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_346;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
_Bool parse_method_generics_type_350;
char* p_351;
int sline_352;
void* __right_value341 = (void*)0;
char* word_353;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1sType$ph* method_generics_types_354;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_355=0;
char* name_356=0;
_Bool err_357=0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* p_358;
int sline_359;
_Bool err_flag_360;
void* __right_value348 = (void*)0;
char* label_361;
void* __right_value349 = (void*)0;
char* __dec_obj101;
char* __dec_obj102;
_Bool no_comma_362;
_Bool in_fun_param_363;
void* __right_value350 = (void*)0;
struct sNode* node_364;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj103;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* method_block_365;
int method_block_sline_366;
char* head_367;
void* __right_value354 = (void*)0;
char* tail_368;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct buffer* __dec_obj104;
int len_369;
void* __right_value357 = (void*)0;
char* mem_370;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value361 = (void*)0;
struct sNode* node_371;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj105;
struct sNode* __result_obj__142;
    params_346=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 922, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_push_back(params_346,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 923, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_350=(_Bool)0;
    {
        p_351=info->p;
        sline_352=info->sline;
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_353=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_353,info)                ) {
                    parse_method_generics_type_350=(_Bool)1;
                }
                (word_353 = come_decrement_ref_count(word_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_351;
        info->sline=sline_352;
    }
    method_generics_types_354=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 953, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type_350&&*info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value344=err_msg(info,"unexpected source end")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else if(            *info->p==62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value345=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_355=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name_356=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err_357=multiple_assign_var15->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value345, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_357                ) {
                    ((struct tuple2$2int$bool$*)(__right_value346=err_msg(info,"invalid method generics paramtor type")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_354,(struct sType*)come_increment_ref_count(sType_clone(type_355)));
                come_call_finalizer(sType_finalize, type_355, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_356 = come_decrement_ref_count(name_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123    ) {
        expected_next_character(40,info);
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_358=info->p;
            sline_359=info->sline;
            err_flag_360=(_Bool)0;
            label_361=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj101=label_361,
                label_361=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                err_flag_360=(_Bool)1;
            }
            if(            err_flag_360==(_Bool)1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj102=label_361,
                label_361=((void*)0);
                __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->p=p_358;
                info->sline=sline_359;
            }
            no_comma_362=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_363=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_364=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj103=node_364,
            node_364=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_364),info));
            (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->in_fun_param=in_fun_param_363;
            info->no_comma=no_comma_362;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_346,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1029, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_361),(struct sNode*)come_increment_ref_count(node_364))));
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_361 = come_decrement_ref_count(label_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_364) ? node_364 = come_decrement_ref_count(node_364, ((struct sNode*)node_364)->finalize, ((struct sNode*)node_364)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            (label_361 = come_decrement_ref_count(label_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_364) ? node_364 = come_decrement_ref_count(node_364, ((struct sNode*)node_364)->finalize, ((struct sNode*)node_364)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    method_block_365=((void*)0);
    method_block_sline_366=0;
    if(    *info->p==123    ) {
        head_367=info->p;
        method_block_sline_366=info->sline;
        ((char*)(__right_value354=skip_block(info,(_Bool)0)));
        (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        tail_368=info->p;
        __dec_obj104=method_block_365,
        method_block_365=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 1053, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        len_369=tail_368-head_367;
        mem_370=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_369+1)), "20method.c", 1056, "char*"));
        memcpy(mem_370,head_367,len_369);
        mem_370[len_369]=0;
        buffer_append_str(method_block_365,mem_370);
        buffer_append_str(method_block_365,"\n");
        (mem_370 = come_decrement_ref_count(mem_370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1066, "struct sNode");
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value360=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1066, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_346),method_block_365,method_block_sline_366,method_generics_types_354,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_371=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sMethodCallNode_finalize, __right_value360, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj105=node_371,
    node_371=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_371),info));
    (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__142 = (struct sNode*)come_increment_ref_count(node_371);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block_365, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_371) ? node_371 = come_decrement_ref_count(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__142;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_347;
struct tuple2$2char$phsNode$ph* __dec_obj96;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_348;
struct tuple2$2char$phsNode$ph* __dec_obj97;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_349;
struct tuple2$2char$phsNode$ph* __dec_obj98;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__140;
    if(    self->len==0    ) {
        litem_347=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value335=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_347->prev=((void*)0);
        litem_347->next=((void*)0);
        __dec_obj96=litem_347->item,
        litem_347->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_347;
        self->head=litem_347;
    }
    else if(    self->len==1    ) {
        litem_348=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value336=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_348->prev=self->head;
        litem_348->next=((void*)0);
        __dec_obj97=litem_348->item,
        litem_348->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_348;
        self->head->next=litem_348;
    }
    else {
        litem_349=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value337=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_349->prev=self->tail;
        litem_349->next=((void*)0);
        __dec_obj98=litem_349->item,
        litem_349->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_349;
        self->tail=litem_349;
    }
    self->len++;
    __result_obj__140 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__140;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj99;
struct sNode* __dec_obj100;
struct tuple2$2char$phsNode$ph* __result_obj__141;
    __dec_obj99=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj100=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__141 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value365 = (void*)0;
struct sNode* __result_obj__143;
void* __right_value366 = (void*)0;
struct sNode* __result_obj__144;
    if(    charp_operator_equals(buf,"__current__")    ) {
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1076, "struct sNode");
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value364=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1076, "struct sCurrentNode*")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__143 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value365=_inf_value4)));
        come_call_finalizer(sCurrentNode_finalize, __right_value364, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value365) ? __right_value365 = come_decrement_ref_count(__right_value365, ((struct sNode*)__right_value365)->finalize, ((struct sNode*)__right_value365)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__143;
    }
    __result_obj__144 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value366=string_node_v17(buf,head,head_sline,info))));
    ((__right_value366) ? __right_value366 = come_decrement_ref_count(__right_value366, ((struct sNode*)__right_value366)->finalize, ((struct sNode*)__right_value366)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__144;
}

