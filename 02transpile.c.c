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
enum anonymous_typeY1 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY1 idtype_t;

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

struct anonymous_typeX2
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX3
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX2 w_T;
struct anonymous_typeX3 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

struct anonymous_typeX4
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX4 div_t;

struct anonymous_typeX5
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX5 ldiv_t;

struct anonymous_typeX6
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX6 lldiv_t;

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

struct anonymous_typeX7
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX7 _RuneEntry;

struct anonymous_typeX8
{
    int __nranges;
    struct anonymous_typeX7* __ranges;
};

typedef struct anonymous_typeX8 _RuneRange;

struct anonymous_typeX9
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX9 _RuneCharClass;

struct anonymous_typeX10
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX8 __runetype_ext;
    struct anonymous_typeX8 __maplower_ext;
    struct anonymous_typeX8 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX9* __charclasses;
};

typedef struct anonymous_typeX10 _RuneLocale;

extern struct anonymous_typeX10 _DefaultRuneLocale;
extern struct anonymous_typeX10* _CurrentRuneLocale;
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
enum anonymous_typeY10 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY10 clockid_t;

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

extern int gComeDebugLib;

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
    _Bool mThreadLocal;
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
    int mArrayPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mDefferRightValue;
    struct sNode* mTypeOfNode;
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

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct list$1sVar$ph* mAllVar;
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
    _Bool undefined_array_num_var;
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
    _Bool in_offsetof;
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

_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
_Bool gComeBareMetal=(_Bool)0;
char* CC="clang";
static char* RM="rm -rf";
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
int waitid(enum anonymous_typeY1 anonymous_var_nameX183, unsigned int anonymous_var_nameX184, struct __siginfo* anonymous_var_nameX185, int anonymous_var_nameX186);
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
struct anonymous_typeX4 div(int anonymous_var_nameX202, int anonymous_var_nameX203);
void exit(int anonymous_var_nameX204);
char* getenv(const char* anonymous_var_nameX205);
long labs(long anonymous_var_nameX206);
struct anonymous_typeX5 ldiv(long anonymous_var_nameX207, long anonymous_var_nameX208);
long long llabs(long  long anonymous_var_nameX209);
struct anonymous_typeX6 lldiv(long  long anonymous_var_nameX210, long  long anonymous_var_nameX211);
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
int clock_getres(enum anonymous_typeY10 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY10 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY10 __clock_id);
int clock_settime(enum anonymous_typeY10 __clock_id, const struct timespec* __tp);
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
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
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
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas);
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
struct sNode* create_int_node(char* value, struct sInfo* info);
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
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info);
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
struct sNode* new_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* new_output_node(char* contents, struct sInfo* info);
struct sNode* new_inline_assembler_node(char* source, int num_exps, struct sNode** exps, struct sInfo* info);
struct sNode* new_line_node(struct sInfo* info);
struct sNode* new_sname_node(struct sInfo* info);
struct sNode* new_func_node(struct sInfo* info);
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* conditional_value, struct sInfo* info);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files);
static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
void create_pico_version_header();
int come_main(int argc, char** argv);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static char* list$1char$ph_join(struct list$1char$ph* self, char* sep);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self);
static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void sInfo_finalize(struct sInfo* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
// uniq global variable
// inline function

// body function
static void write_source_file_position_to_source(struct sInfo* info){
_Bool _condtional_value_X1;
_Bool _condtional_value_X2;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
    if(({    (_condtional_value_X1=(gComeOriginalSourcePosition));    _condtional_value_X1;    })) {
        if(({        (_condtional_value_X2=(info->writing_source_file_position));        _condtional_value_X2;        })) {
            add_come_code(info,((char*)(__right_value2=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value0=int_to_string(info->sline))),((char*)(__right_value1=string_to_string(info->sname)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value3 = (void*)0;
char* sname;
int sline;
int sline_real;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
_Bool result;
void* __right_value6 = (void*)0;
char* __dec_obj2;
_Bool __result_obj__1;
    sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline=info->sline;
    sline_real=info->sline_real;
    __dec_obj1=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value4=node->sname(node->_protocol_obj)))));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result=node->compile(node->_protocol_obj,info);
    __dec_obj2=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline;
    info->sline_real=sline_real;
    __result_obj__1 = result;
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__1;
}

void transpile_conditional_with_free_right_object_value(struct CVALUE* conditional_value, struct sInfo* info){
int num_condtional_stack;
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
    add_last_code_to_source(info);
    static int num_condtional=0;
    add_come_code_at_function_head(info,"_Bool _condtional_value_X%d;\n",++num_condtional);
    num_condtional_stack=num_condtional;
    if(({    (_condtional_value_X3=(string_operator_not_equals(conditional_value->c_value,"")));    _condtional_value_X3;    })) {
        add_come_code(info,"(_condtional_value_X%d=(%s));",num_condtional_stack,conditional_value->c_value);
    }
    free_right_value_objects(info,(_Bool)0);
    if(({    (_condtional_value_X4=(string_operator_not_equals(conditional_value->c_value,"")));    _condtional_value_X4;    })) {
        add_come_code(info,"_condtional_value_X%d;",num_condtional_stack);
    }
    come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X5;
_Bool _condtional_value_X6;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
    if(({    (_condtional_value_X5=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X5;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X29=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X29;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X30=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X30;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X7;
_Bool _condtional_value_X8;
_Bool _condtional_value_X9;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X16;
_Bool _condtional_value_X17;
_Bool _condtional_value_X18;
_Bool _condtional_value_X19;
_Bool _condtional_value_X22;
_Bool _condtional_value_X23;
_Bool _condtional_value_X24;
_Bool _condtional_value_X27;
_Bool _condtional_value_X28;
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X7;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X8=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X8;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X9;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X12;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X13;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X14;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X15;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X16;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X17;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X18;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X19;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X22;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X23;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X24;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X27;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X28;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X10;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X10=(it!=((void*)0)));    _condtional_value_X10;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X11;
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X11;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X20;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X20=(it!=((void*)0)));    _condtional_value_X20;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X21;
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X21;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X25;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X25=(it!=((void*)0)));    _condtional_value_X25;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X26;
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X26;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name;
_Bool _condtional_value_X31;
void* __right_value7 = (void*)0;
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(({    (_condtional_value_X31=(input_file_name!=((void*)0)&&string_operator_not_equals(input_file_name,"")));    _condtional_value_X31;    })) {
        (void)system(((char*)(__right_value7=xsprintf("%s %s.*",RM,input_file_name))));
        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name;
_Bool _condtional_value_X32;
void* __right_value8 = (void*)0;
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(({    (_condtional_value_X32=(input_file_name!=((void*)0)&&string_operator_not_equals(input_file_name,"")));    _condtional_value_X32;    })) {
        (void)system(((char*)(__right_value8=xsprintf("%s %s.i* %s.c*",RM,input_file_name,input_file_name))));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name;
_Bool _condtional_value_X33;
void* __right_value9 = (void*)0;
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(({    (_condtional_value_X33=(input_file_name!=((void*)0)&&string_operator_not_equals(input_file_name,"")));    _condtional_value_X33;    })) {
        (void)system(((char*)(__right_value9=xsprintf("%s %s.i* %s.c.out",RM,input_file_name,input_file_name))));
        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static _Bool cpp(struct sInfo* info){
char* input_file_name;
char* output_file_name;
_Bool _condtional_value_X34;
void* __right_value10 = (void*)0;
char* __dec_obj3;
void* __right_value11 = (void*)0;
char* __dec_obj4;
_Bool exist_common_h;
struct __sFILE* Value;
_Bool _condtional_value_X35;
_Bool _condtional_value_X36;
_Bool _condtional_value_X37;
int is_mac;
int is_android;
int is_debian;
int is_linux;
int is_m5stack;
int is_pico;
int is_emb;
_Bool _32bit;
struct __sFILE* f;
int is_raspi;
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
char* __dec_obj5;
_Bool _condtional_value_X42;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
char* cmd3;
_Bool _condtional_value_X43;
int rc;
void* __right_value17 = (void*)0;
char* command2;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
char* cmd2;
_Bool _condtional_value_X47;
int rc_0;
void* __right_value20 = (void*)0;
char* command2_1;
_Bool _condtional_value_X48;
_Bool _condtional_value_X49;
void* __right_value21 = (void*)0;
char* command2_2;
_Bool _condtional_value_X50;
_Bool _condtional_value_X51;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
char* cmd2_3;
_Bool _condtional_value_X52;
void* __right_value24 = (void*)0;
char* command2_4;
_Bool _condtional_value_X53;
int rc_5;
_Bool _condtional_value_X54;
void* __right_value25 = (void*)0;
char* command2_6;
_Bool _condtional_value_X55;
_Bool _condtional_value_X56;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
char* cmd2_7;
_Bool _condtional_value_X57;
void* __right_value28 = (void*)0;
char* command2_8;
_Bool _condtional_value_X58;
int rc_9;
_Bool _condtional_value_X59;
void* __right_value29 = (void*)0;
char* command2_10;
_Bool _condtional_value_X60;
_Bool _condtional_value_X61;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
char* cmd3_11;
_Bool _condtional_value_X62;
int rc_12;
void* __right_value32 = (void*)0;
char* command2_13;
_Bool _condtional_value_X63;
_Bool _condtional_value_X64;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
char* cmd4;
_Bool _condtional_value_X65;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
char* __dec_obj6;
void* __right_value37 = (void*)0;
char* command2_14;
_Bool _condtional_value_X66;
_Bool _condtional_value_X67;
_Bool _condtional_value_X68;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
char* cmd3_15;
_Bool _condtional_value_X69;
int rc_16;
void* __right_value40 = (void*)0;
char* command2_17;
_Bool _condtional_value_X70;
_Bool _condtional_value_X71;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
char* cmd4_18;
void* __right_value43 = (void*)0;
char* command2_19;
_Bool _condtional_value_X72;
_Bool _condtional_value_X73;
_Bool _condtional_value_X74;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
char* cmd3_20;
_Bool _condtional_value_X75;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
char* __dec_obj7;
_Bool _condtional_value_X76;
int rc_21;
void* __right_value48 = (void*)0;
char* command2_22;
_Bool _condtional_value_X77;
_Bool _condtional_value_X78;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
char* cmd4_23;
_Bool _condtional_value_X79;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
char* __dec_obj8;
void* __right_value53 = (void*)0;
char* command2_24;
_Bool _condtional_value_X80;
_Bool _condtional_value_X81;
_Bool __result_obj__2;
output_file_name = (void*)0;
memset(&is_raspi, 0, sizeof(int));
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(({    (_condtional_value_X34=(!info->output_header_file&&info->output_file_name));    _condtional_value_X34;    })) {
        __dec_obj3=output_file_name,
        output_file_name=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj4=output_file_name,
        output_file_name=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    exist_common_h=(_Bool)0;
    {
        Value=fopen("common.h","r");
        if(({        (_condtional_value_X35=(Value));        _condtional_value_X35;        })) {
            exist_common_h=(_Bool)1;
            fclose(Value);
        }
        else {
        }
        if(({        (_condtional_value_X36=(string_operator_equals(info->output_file_name,"common.h")));        _condtional_value_X36;        })) {
            exist_common_h=(_Bool)0;
        }
        if(({        (_condtional_value_X37=(!gCommonHeader));        _condtional_value_X37;        })) {
            exist_common_h=(_Bool)0;
        }
    }
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    is_android=system("uname -a | grep Android 1> /dev/null 2>/dev/null")==0;
    is_debian=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
    is_linux=1;
    is_m5stack=info->m5stack_cpp;
    is_pico=info->pico_cpp;
    is_emb=info->emb_cpp;
    _32bit=(_Bool)0;
    f=fopen("/proc/cpuinfo","r");
    if(({    (_condtional_value_X38=(f));    _condtional_value_X38;    })) {
        fclose(f);
        is_raspi=system("cat /proc/cpuinfo | grep 'Model' | grep 'Raspberry Pi' > /dev/null 2> /dev/null ")==0;
        if(({        (_condtional_value_X39=(is_raspi));        _condtional_value_X39;        })) {
            _32bit=system(" lscpu | grep armv7l > /dev/null 2> /dev/null ")==0;
        }
    }
    else {
        is_raspi=0;
    }
    if(({    (_condtional_value_X40=(is_pico||is_m5stack));    _condtional_value_X40;    })) {
        _32bit=(_Bool)1;
    }
    if(({    (_condtional_value_X41=(_32bit));    _condtional_value_X41;    })) {
        __dec_obj5=info->cpp_option,
        info->cpp_option=(char*)come_increment_ref_count(string_operator_add(info->cpp_option,((char*)(__right_value13=xsprintf(" -D__32BIT_CPU__ ")))));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X42=(is_android));    _condtional_value_X42;    })) {
        cmd3=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value15=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X43=(info->verbose));        _condtional_value_X43;        })) {
            puts(cmd3);
        }
        rc=system(cmd3);
        command2=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X44=(info->verbose));        _condtional_value_X44;        })) {
            puts(command2);
        }
        (void)system(command2);
        if(({        (_condtional_value_X45=(rc!=0));        _condtional_value_X45;        })) {
            printf("cpp failed(%s)\n",command2);
            exit(2);
        }
        (cmd3 = come_decrement_ref_count(cmd3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2 = come_decrement_ref_count(command2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X46=(is_m5stack));    _condtional_value_X46;    })) {
        cmd2=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value18=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X47=(info->verbose));        _condtional_value_X47;        })) {
            puts(cmd2);
        }
        rc_0=system(cmd2);
        command2_1=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X48=(info->verbose));        _condtional_value_X48;        })) {
            puts(command2_1);
        }
        (void)system(command2_1);
        if(({        (_condtional_value_X49=(rc_0!=0));        _condtional_value_X49;        })) {
            printf("failed to cpp(2) (%s)\n",cmd2);
            exit(5);
        }
        (command2_1 = come_decrement_ref_count(command2_1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        command2_2=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X50=(info->verbose));        _condtional_value_X50;        })) {
            puts(command2_2);
        }
        (void)system(command2_2);
        (cmd2 = come_decrement_ref_count(cmd2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_2 = come_decrement_ref_count(command2_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X51=(is_pico));    _condtional_value_X51;    })) {
        cmd2_3=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value22=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value22 = come_decrement_ref_count(__right_value22, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X52=(info->verbose));        _condtional_value_X52;        })) {
            puts(cmd2_3);
        }
        command2_4=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X53=(info->verbose));        _condtional_value_X53;        })) {
            puts(command2_4);
        }
        (void)system(command2_4);
        rc_5=system(cmd2_3);
        if(({        (_condtional_value_X54=(rc_5!=0));        _condtional_value_X54;        })) {
            printf("failed to cpp(2) (%s)\n",cmd2_3);
            exit(5);
        }
        (command2_4 = come_decrement_ref_count(command2_4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        command2_6=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X55=(info->verbose));        _condtional_value_X55;        })) {
            puts(command2_6);
        }
        (void)system(command2_6);
        (cmd2_3 = come_decrement_ref_count(cmd2_3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_6 = come_decrement_ref_count(command2_6, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X56=(is_mac));    _condtional_value_X56;    })) {
        cmd2_7=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value26=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X57=(info->verbose));        _condtional_value_X57;        })) {
            puts(cmd2_7);
        }
        command2_8=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X58=(info->verbose));        _condtional_value_X58;        })) {
            puts(command2_8);
        }
        (void)system(command2_8);
        rc_9=system(cmd2_7);
        if(({        (_condtional_value_X59=(rc_9!=0));        _condtional_value_X59;        })) {
            printf("failed to cpp(2) (%s)\n",cmd2_7);
            exit(5);
        }
        (command2_8 = come_decrement_ref_count(command2_8, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        command2_10=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X60=(info->verbose));        _condtional_value_X60;        })) {
            puts(command2_10);
        }
        (void)system(command2_10);
        (cmd2_7 = come_decrement_ref_count(cmd2_7, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_10 = come_decrement_ref_count(command2_10, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X61=(is_emb));    _condtional_value_X61;    })) {
        cmd3_11=(char*)come_increment_ref_count(xsprintf("clang -E %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value30=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X62=(info->verbose));        _condtional_value_X62;        })) {
            puts(cmd3_11);
        }
        rc_12=system(cmd3_11);
        command2_13=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X63=(info->verbose));        _condtional_value_X63;        })) {
            puts(command2_13);
        }
        (void)system(command2_13);
        if(({        (_condtional_value_X64=(rc_12!=0));        _condtional_value_X64;        })) {
            cmd4=(char*)come_increment_ref_count(xsprintf("clang -E %s -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value33=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
            (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(({            (_condtional_value_X65=(is_debian));            _condtional_value_X65;            })) {
                __dec_obj6=cmd4,
                cmd4=(char*)come_increment_ref_count(xsprintf("clang -E %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value35=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
                __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            command2_14=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
            if(({            (_condtional_value_X66=(info->verbose));            _condtional_value_X66;            })) {
                puts(command2_14);
            }
            (void)system(command2_14);
            if(({            (_condtional_value_X67=(rc_12!=0));            _condtional_value_X67;            })) {
                printf("failed to cpp(2) (%s)\n",cmd4);
                exit(5);
            }
            (cmd4 = come_decrement_ref_count(cmd4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (command2_14 = come_decrement_ref_count(command2_14, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (cmd3_11 = come_decrement_ref_count(cmd3_11, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_13 = come_decrement_ref_count(command2_13, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X68=(is_raspi));    _condtional_value_X68;    })) {
        cmd3_15=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value38=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X69=(info->verbose));        _condtional_value_X69;        })) {
            puts(cmd3_15);
        }
        rc_16=system(cmd3_15);
        command2_17=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X70=(info->verbose));        _condtional_value_X70;        })) {
            puts(command2_17);
        }
        (void)system(command2_17);
        if(({        (_condtional_value_X71=(rc_16!=0));        _condtional_value_X71;        })) {
            cmd4_18=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value41=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
            (__right_value41 = come_decrement_ref_count(__right_value41, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            command2_19=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
            if(({            (_condtional_value_X72=(info->verbose));            _condtional_value_X72;            })) {
                puts(command2_19);
            }
            (void)system(command2_19);
            if(({            (_condtional_value_X73=(rc_16!=0));            _condtional_value_X73;            })) {
                printf("failed to cpp(2) (%s)\n",cmd4_18);
                exit(5);
            }
            (cmd4_18 = come_decrement_ref_count(cmd4_18, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (command2_19 = come_decrement_ref_count(command2_19, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (cmd3_15 = come_decrement_ref_count(cmd3_15, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_17 = come_decrement_ref_count(command2_17, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X74=(is_linux));    _condtional_value_X74;    })) {
        cmd3_20=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value44=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
        (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X75=(is_debian));        _condtional_value_X75;        })) {
            __dec_obj7=cmd3_20,
            cmd3_20=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value46=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
            __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X76=(info->verbose));        _condtional_value_X76;        })) {
            puts(cmd3_20);
        }
        rc_21=system(cmd3_20);
        command2_22=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
        if(({        (_condtional_value_X77=(info->verbose));        _condtional_value_X77;        })) {
            puts(command2_22);
        }
        (void)system(command2_22);
        if(({        (_condtional_value_X78=(rc_21!=0));        _condtional_value_X78;        })) {
            cmd4_23=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value49=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
            (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(({            (_condtional_value_X79=(is_debian));            _condtional_value_X79;            })) {
                __dec_obj8=cmd4_23,
                cmd4_23=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h)?(((char*)(__right_value51=__builtin_string(" -include common.h ")))):("")),input_file_name,output_file_name,output_file_name));
                __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            command2_24=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
            if(({            (_condtional_value_X80=(info->verbose));            _condtional_value_X80;            })) {
                puts(command2_24);
            }
            (void)system(command2_24);
            if(({            (_condtional_value_X81=(rc_21!=0));            _condtional_value_X81;            })) {
                printf("failed to cpp(2) (%s)\n",cmd4_23);
                exit(5);
            }
            (cmd4_23 = come_decrement_ref_count(cmd4_23, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (command2_24 = come_decrement_ref_count(command2_24, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (cmd3_20 = come_decrement_ref_count(cmd3_20, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_22 = come_decrement_ref_count(command2_22, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__2 = (_Bool)1;
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__2;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files){
void* __right_value54 = (void*)0;
char* input_file_name;
char* output_file_name;
_Bool _condtional_value_X82;
void* __right_value55 = (void*)0;
char* __dec_obj9;
void* __right_value56 = (void*)0;
char* __dec_obj10;
int is_mac;
_Bool _condtional_value_X83;
void* __right_value57 = (void*)0;
char* __dec_obj11;
void* __right_value58 = (void*)0;
char* command;
_Bool _condtional_value_X84;
int rc;
_Bool _condtional_value_X85;
void* __right_value59 = (void*)0;
char* __dec_obj12;
_Bool _condtional_value_X86;
int rc_25;
_Bool _condtional_value_X87;
void* __right_value60 = (void*)0;
char* command2;
_Bool _condtional_value_X88;
_Bool _condtional_value_X89;
void* __right_value67 = (void*)0;
_Bool __result_obj__6;
output_file_name = (void*)0;
    input_file_name=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(({    (_condtional_value_X82=(info->output_file_name&&output_object_file));    _condtional_value_X82;    })) {
        __dec_obj9=output_file_name,
        output_file_name=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj10=output_file_name,
        output_file_name=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(({    (_condtional_value_X83=(is_mac));    _condtional_value_X83;    })) {
        __dec_obj11=info->clang_option,
        info->clang_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option," -std=gnu17 "));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    command=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name,input_file_name,info->clang_option,input_file_name));
    if(({    (_condtional_value_X84=(info->verbose));    _condtional_value_X84;    })) {
        puts(command);
    }
    rc=system(command);
    if(({    (_condtional_value_X85=(rc!=0));    _condtional_value_X85;    })) {
        __dec_obj12=command,
        command=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name,input_file_name,info->clang_option,input_file_name));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X86=(info->verbose));        _condtional_value_X86;        })) {
            puts(command);
        }
        rc_25=system(command);
        if(({        (_condtional_value_X87=(rc_25!=0));        _condtional_value_X87;        })) {
            printf("%s is faild\n",CC);
            command2=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out 2>/dev/null",input_file_name));
            if(({            (_condtional_value_X88=(info->verbose));            _condtional_value_X88;            })) {
                puts(command2);
            }
            (void)system(command2);
            exit(2);
            (command2 = come_decrement_ref_count(command2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(({    (_condtional_value_X89=(!output_object_file));    _condtional_value_X89;    })) {
        list$1char$ph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name)));
    }
    __result_obj__6 = (_Bool)1;
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__6;
}

static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item){
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
int len;
int i;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
_Bool _condtional_value_X95;
char* default_value;
struct list$1char$ph* __result_obj__4;
_Bool _condtional_value_X98;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj16;
_Bool _condtional_value_X99;
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj17;
struct list_item$1char$ph* it;
int i_29;
_Bool _condtional_value_X100;
_Bool _condtional_value_X101;
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem_30;
char* __dec_obj18;
struct list$1char$ph* __result_obj__5;
default_value = (void*)0;
    if(({    (_condtional_value_X90=(position<0));    _condtional_value_X90;    })) {
        position+=self->len+1;
    }
    if(({    (_condtional_value_X91=(position<0));    _condtional_value_X91;    })) {
        position=0;
    }
    if(({    (_condtional_value_X92=(self->len==0||position>=self->len));    _condtional_value_X92;    })) {
        len=self->len;
        for(        ({        (_condtional_value_X93=(i=0));        _condtional_value_X93;        });        ({        (_condtional_value_X94=(i<position-len));        _condtional_value_X94;        });        ({        (_condtional_value_X95=(i++));        _condtional_value_X95;        })        ){
            memset(&default_value,0,sizeof(char*));
            list$1char$ph_push_back(self,(char*)come_increment_ref_count(default_value));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__4 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__4;
    }
    if(({    (_condtional_value_X98=(position==0));    _condtional_value_X98;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1265, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=self->head;
        __dec_obj16=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->head->prev=litem;
        self->head=litem;
        self->len++;
    }
    else if(({    (_condtional_value_X99=(self->len==1));    _condtional_value_X99;    })) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1277, "struct list_item$1char$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=self->tail;
        __dec_obj17=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->prev=litem_28;
        self->head->next=litem_28;
        self->len++;
    }
    else {
        it=self->head;
        i_29=0;
        while(({        (_condtional_value_X100=(it!=((void*)0)));        _condtional_value_X100;        })) {
            if(({            (_condtional_value_X101=(position==i_29));            _condtional_value_X101;            })) {
                litem_30=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1293, "struct list_item$1char$ph*"))));
                litem_30->prev=it->prev;
                litem_30->next=it;
                __dec_obj18=litem_30->item,
                litem_30->item=(char*)come_increment_ref_count(item);
                __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                it->prev->next=litem_30;
                it->prev=litem_30;
                self->len++;
            }
            it=it->next;
            i_29++;
        }
    }
    __result_obj__5 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__5;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X96;
void* __right_value61 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj13;
_Bool _condtional_value_X97;
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj14;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj15;
struct list$1char$ph* __result_obj__3;
    if(({    (_condtional_value_X96=(self->len==0));    _condtional_value_X96;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value61=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X97=(self->len==1));    _condtional_value_X97;    })) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj14=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj15=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__3 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__3;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files){
char* output_file_name;
_Bool _condtional_value_X102;
void* __right_value68 = (void*)0;
char* __dec_obj19;
void* __right_value69 = (void*)0;
char* __dec_obj20;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* command;
int is_mac;
_Bool _condtional_value_X103;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
char* __dec_obj21;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1char$ph* o2_saved;
char* it;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
_Bool _condtional_value_X110;
int is_mac_33;
_Bool _condtional_value_X111;
void* __right_value78 = (void*)0;
char* cmd;
int rc;
_Bool _condtional_value_X112;
void* __right_value79 = (void*)0;
char* cmd_34;
int rc_35;
_Bool _condtional_value_X113;
void* __right_value80 = (void*)0;
char* cmd_36;
int rc_37;
_Bool _condtional_value_X114;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
_Bool _condtional_value_X117;
_Bool _condtional_value_X118;
int is_apline;
int is_debian;
int is_android;
_Bool _condtional_value_X119;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
_Bool _condtional_value_X122;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
int Value;
_Bool _condtional_value_X123;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
char* str;
int Value_38;
_Bool _condtional_value_X124;
_Bool __result_obj__13;
_Bool __result_obj__14;
    output_file_name=((void*)0);
    if(({    (_condtional_value_X102=(info->output_file_name));    _condtional_value_X102;    })) {
        __dec_obj19=output_file_name,
        output_file_name=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj20=output_file_name,
        output_file_name=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    command=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 389, "struct buffer*"))));
    buffer_append_format(command,"%s -o %s ",CC,output_file_name);
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(({    (_condtional_value_X103=(is_mac));    _condtional_value_X103;    })) {
        __dec_obj21=info->linker_option,
        info->linker_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option,((char*)(__right_value73=xsprintf(" -std=gnu17 ")))));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    buffer_append_str(command,((char*)(__right_value77=string_operator_add(((char*)(__right_value76=charp_operator_add(" ",info->linker_option)))," "))));
    (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    for(    ({    (_condtional_value_X106=(o2_saved=object_files,it=list$1char$ph_begin(o2_saved)));    _condtional_value_X106;    });    ({    (_condtional_value_X107=(!list$1char$ph_end(o2_saved)));    _condtional_value_X107;    });    ({    (_condtional_value_X110=(it=list$1char$ph_next(o2_saved)));    _condtional_value_X110;    })    ){
        buffer_append_format(command,"%s ",it);
    }
    is_mac_33=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(({    (_condtional_value_X111=(is_mac_33));    _condtional_value_X111;    })) {
        buffer_append_str(command," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc=system(cmd);
    if(({    (_condtional_value_X112=(rc==0));    _condtional_value_X112;    })) {
        buffer_append_str(command," -L. -L/usr/local/lib ");
    }
    (cmd = come_decrement_ref_count(cmd, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    cmd_34=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_35=system(cmd_34);
    if(({    (_condtional_value_X113=(rc_35==0));    _condtional_value_X113;    })) {
        buffer_append_format(command," -L%s/lib ",getenv("HOME"));
    }
    (cmd_34 = come_decrement_ref_count(cmd_34, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    cmd_36=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_37=system(cmd_36);
    if(({    (_condtional_value_X114=(rc_37==0));    _condtional_value_X114;    })) {
        buffer_append_format(command," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command," %s ",info->clang_option);
    if(({    (_condtional_value_X115=(gComeStr));    _condtional_value_X115;    })) {
        buffer_append_format(command," -lpcre ");
    }
    if(({    (_condtional_value_X116=(gComeGC));    _condtional_value_X116;    })) {
        buffer_append_str(command," -lgc ");
    }
    if(({    (_condtional_value_X117=(gComePthread));    _condtional_value_X117;    })) {
        buffer_append_str(command," -lpthread ");
    }
    if(({    (_condtional_value_X118=(gComeNet));    _condtional_value_X118;    })) {
        is_apline=system("which apk 1> /dev/null 2>/dev/null")==0;
        is_debian=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
        is_android=system("uname -a | grep Android 1>/dev/null 2>/dev/null")==0;
        if(({        (_condtional_value_X119=(is_android));        _condtional_value_X119;        })) {
            buffer_append_str(command," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(({        (_condtional_value_X120=(is_apline||is_debian));        _condtional_value_X120;        })) {
            buffer_append_str(command," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(({        (_condtional_value_X121=(is_mac_33));        _condtional_value_X121;        })) {
            buffer_append_format(command," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command," -lssl `mysql_config --cflags --libs`");
        }
    }
    if(({    (_condtional_value_X122=(info->verbose));    _condtional_value_X122;    })) {
        puts(((char*)(__right_value81=buffer_to_string(command))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    Value=system(((char*)(__right_value82=buffer_to_string(command))));
    if(({    (_condtional_value_X123=(Value));    (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    _condtional_value_X123;    })) {
        str=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value86=xsprintf("gcc"))),((char*)(__right_value88=charp_substring(((char*)(__right_value87=buffer_to_string(command))),strlen(CC),-1)))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        Value_38=system(str);
        if(({        (_condtional_value_X124=(Value_38));        _condtional_value_X124;        })) {
            printf("%s is failed\n",CC);
            __result_obj__13 = (_Bool)0;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (cmd_36 = come_decrement_ref_count(cmd_36, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__13;
        }
        else {
        }
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
    }
    __result_obj__14 = (_Bool)1;
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (cmd_36 = come_decrement_ref_count(cmd_36, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X104;
char* result;
char* __result_obj__7;
_Bool _condtional_value_X105;
char* __result_obj__8;
char* result_31;
char* __result_obj__9;
result = (void*)0;
result_31 = (void*)0;
    if(({    (_condtional_value_X104=(self==((void*)0)));    _condtional_value_X104;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__7 = result;
        return __result_obj__7;
    }
    self->it=self->head;
    if(({    (_condtional_value_X105=(self->it));    _condtional_value_X105;    })) {
        __result_obj__8 = self->it->item;
        return __result_obj__8;
    }
    memset(&result_31,0,sizeof(char*));
    __result_obj__9 = result_31;
    return __result_obj__9;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X108;
char* result;
char* __result_obj__10;
_Bool _condtional_value_X109;
char* __result_obj__11;
char* result_32;
char* __result_obj__12;
result = (void*)0;
result_32 = (void*)0;
    if(({    (_condtional_value_X108=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X108;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__10 = result;
        return __result_obj__10;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X109=(self->it));    _condtional_value_X109;    })) {
        __result_obj__11 = self->it->item;
        return __result_obj__11;
    }
    memset(&result_32,0,sizeof(char*));
    __result_obj__12 = result_32;
    return __result_obj__12;
}

_Bool new_project(int argc, char** argv){
void* __right_value90 = (void*)0;
char* project_name;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
char* project_name_debug;
void* __right_value96 = (void*)0;
char* cc;
void* __right_value97 = (void*)0;
char* install;
void* __right_value98 = (void*)0;
char* libs;
void* __right_value99 = (void*)0;
char* os;
void* __right_value100 = (void*)0;
char* prefix;
void* __right_value101 = (void*)0;
char* cflags;
void* __right_value102 = (void*)0;
char* cflags_debug;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
int Value;
_Bool _condtional_value_X125;
_Bool __exception_result_var_b1;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
_Bool __result_obj__15;
    project_name=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value93=__builtin_string(argv[2]))),((char*)(__right_value94=__builtin_string("-debug")))));
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    cc=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install=(char*)come_increment_ref_count(__builtin_string("install"));
    libs=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 -std=c99 "));
    cflags_debug=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg -g "));
    Value=system(((char*)(__right_value104=xsprintf("mkdir \%s",((char*)(__right_value103=string_to_string(project_name)))))));
    if(({    (_condtional_value_X125=(Value<0));    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    _condtional_value_X125;    })) {
        (come_push_stackframe("02transpile.c", 489, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value130=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c tmp-common-header.*\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value105=string_to_string(project_name))),((char*)(__right_value106=string_to_string(project_name))),((char*)(__right_value107=string_to_string(project_name))),((char*)(__right_value108=string_to_string(project_name))),((char*)(__right_value109=string_to_string(cc))),((char*)(__right_value110=string_to_string(install))),((char*)(__right_value111=string_to_string(cflags))),((char*)(__right_value112=string_to_string(cflags_debug))),((char*)(__right_value113=string_to_string(libs))),((char*)(__right_value114=string_to_string(os))),((char*)(__right_value115=string_to_string(prefix))),((char*)(__right_value116=string_to_string(project_name))),((char*)(__right_value117=string_to_string(project_name_debug))),((char*)(__right_value118=string_to_string(project_name))),((char*)(__right_value119=string_to_string(project_name))),((char*)(__right_value120=string_to_string(project_name))),((char*)(__right_value121=string_to_string(project_name))),((char*)(__right_value122=string_to_string(project_name_debug))),((char*)(__right_value123=string_to_string(project_name))),((char*)(__right_value124=string_to_string(project_name))),((char*)(__right_value125=string_to_string(project_name))),((char*)(__right_value126=string_to_string(project_name))),((char*)(__right_value127=string_to_string(project_name))),((char*)(__right_value128=string_to_string(project_name_debug))),((char*)(__right_value129=string_to_string(project_name_debug)))))),((char*)(__right_value132=xsprintf("\%s/Makefile",((char*)(__right_value131=string_to_string(project_name)))))),(_Bool)0);
    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __result_obj__15 = (_Bool)1;
    (project_name = come_decrement_ref_count(project_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (project_name_debug = come_decrement_ref_count(project_name_debug, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cc = come_decrement_ref_count(cc, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (install = come_decrement_ref_count(install, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (libs = come_decrement_ref_count(libs, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (os = come_decrement_ref_count(os, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cflags = come_decrement_ref_count(cflags, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cflags_debug = come_decrement_ref_count(cflags_debug, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__15;
}

_Bool run_project(int argc, char** argv){
struct __sFILE* Value;
_Bool _condtional_value_X126;
int Value_39;
_Bool _condtional_value_X127;
_Bool __exception_result_var_b2;
int Value_40;
_Bool _condtional_value_X128;
_Bool __exception_result_var_b3;
int Value_41;
_Bool _condtional_value_X129;
_Bool __exception_result_var_b4;
    Value=fopen("common.h","r");
    if(({    (_condtional_value_X126=(Value));    _condtional_value_X126;    })) {
        fclose(Value);
    }
    else {
        Value_39=system("make header");
        if(({        (_condtional_value_X127=(Value_39<0));        _condtional_value_X127;        })) {
            (come_push_stackframe("02transpile.c", 595, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_40=system("make compile -j$(sysctl -n hw.logicalcpu)");
    if(({    (_condtional_value_X128=(Value_40<0));    _condtional_value_X128;    })) {
        (come_push_stackframe("02transpile.c", 601, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    Value_41=system("make run");
    if(({    (_condtional_value_X129=(Value_41<0));    _condtional_value_X129;    })) {
        (come_push_stackframe("02transpile.c", 610, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value;
_Bool _condtional_value_X130;
_Bool __exception_result_var_b5;
    Value=system("make header");
    if(({    (_condtional_value_X130=(Value<0));    _condtional_value_X130;    })) {
        (come_push_stackframe("02transpile.c", 619, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct __sFILE* Value;
_Bool _condtional_value_X131;
int Value_42;
_Bool _condtional_value_X132;
_Bool __exception_result_var_b6;
int Value_43;
_Bool _condtional_value_X133;
_Bool __exception_result_var_b7;
    Value=fopen("common.h","r");
    if(({    (_condtional_value_X131=(Value));    _condtional_value_X131;    })) {
        fclose(Value);
    }
    else {
        Value_42=system("make header");
        if(({        (_condtional_value_X132=(Value_42<0));        _condtional_value_X132;        })) {
            (come_push_stackframe("02transpile.c", 632, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
        }
        else {
        }
    }
    Value_43=system("make compile -j$(sysctl -n hw.logicalcpu)");
    if(({    (_condtional_value_X133=(Value_43<0));    _condtional_value_X133;    })) {
        (come_push_stackframe("02transpile.c", 638, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct __sFILE* Value;
_Bool _condtional_value_X134;
int Value_44;
_Bool _condtional_value_X135;
_Bool __exception_result_var_b8;
int Value_45;
_Bool _condtional_value_X136;
_Bool __exception_result_var_b9;
    Value=fopen("common.h","r");
    if(({    (_condtional_value_X134=(Value));    _condtional_value_X134;    })) {
        fclose(Value);
    }
    else {
        Value_44=system("make header");
        if(({        (_condtional_value_X135=(Value_44<0));        _condtional_value_X135;        })) {
            (come_push_stackframe("02transpile.c", 656, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
        }
        else {
        }
    }
    Value_45=system("make debug -j$(sysctl -n hw.logicalcpu)");
    if(({    (_condtional_value_X136=(Value_45<0));    _condtional_value_X136;    })) {
        (come_push_stackframe("02transpile.c", 662, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value;
_Bool _condtional_value_X137;
_Bool __exception_result_var_b10;
    Value=system("make clean");
    if(({    (_condtional_value_X137=(Value<0));    _condtional_value_X137;    })) {
        (come_push_stackframe("02transpile.c", 676, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
int Value;
_Bool _condtional_value_X138;
_Bool __exception_result_var_b11;
    Value=system(((char*)(__right_value134=xsprintf("make install DESTDIR=\%s",((char*)(__right_value133=charp_to_string(prefix)))))));
    if(({    (_condtional_value_X138=(Value<0));    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    _condtional_value_X138;    })) {
        (come_push_stackframe("02transpile.c", 685, 10),__exception_result_var_b11=die("system"), come_pop_stackframe(), __exception_result_var_b11);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value140 = (void*)0;
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
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
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
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
int i;
_Bool _condtional_value_X202;
_Bool _condtional_value_X203;
_Bool _condtional_value_X204;
void* __right_value192 = (void*)0;
char* generics_type;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
int i_55;
_Bool _condtional_value_X205;
_Bool _condtional_value_X206;
_Bool _condtional_value_X207;
void* __right_value195 = (void*)0;
char* generics_type_56;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
int is_mac;
_Bool _condtional_value_X208;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* type_name;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sType* type;
void* __right_value206 = (void*)0;
char* __dec_obj22;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sClass* klass;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 693, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 694, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 695, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 696, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 697, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 698, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 699, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 700, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 701, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 702, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("_Float16")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 703, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 704, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__uint128_t")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 705, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__int128")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    for(    ({    (_condtional_value_X202=(i=0));    _condtional_value_X202;    });    ({    (_condtional_value_X203=(i<12));    _condtional_value_X203;    });    ({    (_condtional_value_X204=(i++));    _condtional_value_X204;    })    ){
        generics_type=(char*)come_increment_ref_count(xsprintf("__generics_type%d",i));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 708, "struct sClass*")),(char*)come_increment_ref_count(generics_type),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i,-1,(_Bool)0,(_Bool)0,info)));
        (generics_type = come_decrement_ref_count(generics_type, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    for(    ({    (_condtional_value_X205=(i_55=0));    _condtional_value_X205;    });    ({    (_condtional_value_X206=(i_55<7));    _condtional_value_X206;    });    ({    (_condtional_value_X207=(i_55++));    _condtional_value_X207;    })    ){
        generics_type_56=(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_55));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type_56),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 712, "struct sClass*")),(char*)come_increment_ref_count(generics_type_56),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_55,(_Bool)0,(_Bool)0,info)));
        (generics_type_56 = come_decrement_ref_count(generics_type_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(({    (_condtional_value_X208=(is_mac));    _condtional_value_X208;    })) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 717, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        type_name=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 721, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,info));
        __dec_obj22=type->mOriginalTypeName,
        type->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sType*)come_increment_ref_count(type));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        klass=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 727, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 729, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 729, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 730, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 730, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 731, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 731, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 732, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 733, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 733, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass));
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
_Bool _condtional_value_X139;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
_Bool _condtional_value_X166;
_Bool _condtional_value_X167;
_Bool _condtional_value_X192;
_Bool _condtional_value_X193;
_Bool _condtional_value_X194;
_Bool _condtional_value_X195;
_Bool _condtional_value_X196;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X197;
_Bool _condtional_value_X198;
_Bool _condtional_value_X199;
_Bool _condtional_value_X200;
_Bool _condtional_value_X201;
struct map$2char$phsClass$ph* __result_obj__30;
    if(({    (_condtional_value_X139=(self->len*10>=self->size));    _condtional_value_X139;    })) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X164=((_Bool)1));    _condtional_value_X164;    })) {
        if(({        (_condtional_value_X165=(self->item_existance[it]));        _condtional_value_X165;        })) {
            if(({            (_condtional_value_X166=(string_equals(self->keys[it],key)));            _condtional_value_X166;            })) {
                if(({                (_condtional_value_X167=(1));                _condtional_value_X167;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X192=(1));                _condtional_value_X192;                })) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X193=(it>=self->size));            _condtional_value_X193;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X194=(it==hash));            _condtional_value_X194;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X195=(1));            _condtional_value_X195;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X196=(1));            _condtional_value_X196;            })) {
                self->items[it]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X197=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X197;    });    ({    (_condtional_value_X198=(!list$1char$ph_end(self->key_list)));    _condtional_value_X198;    });    ({    (_condtional_value_X199=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X199;    })    ){
        if(({        (_condtional_value_X200=(string_equals(it2,key)));        _condtional_value_X200;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X201=(!same_key_exist));    _condtional_value_X201;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__30 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size;
void* __right_value135 = (void*)0;
char** keys;
void* __right_value136 = (void*)0;
struct sClass** items;
void* __right_value137 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X142;
_Bool _condtional_value_X143;
_Bool _condtional_value_X146;
struct sClass* default_value;
void* __right_value138 = (void*)0;
struct sClass* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X160;
_Bool _condtional_value_X161;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
struct sClass* default_value_48;
void* __right_value139 = (void*)0;
default_value = (void*)0;
default_value_48 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value135=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value136=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value137=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X142=(it=map$2char$phsClass$ph_begin(self)));    _condtional_value_X142;    });    ({    (_condtional_value_X143=(!map$2char$phsClass$ph_end(self)));    _condtional_value_X143;    });    ({    (_condtional_value_X146=(it=map$2char$phsClass$ph_next(self)));    _condtional_value_X146;    })    ){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value138=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        come_call_finalizer(sClass_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X160=((_Bool)1));        _condtional_value_X160;        })) {
            if(({            (_condtional_value_X161=(item_existance[n]));            _condtional_value_X161;            })) {
                n++;
                if(({                (_condtional_value_X162=(n>=size));                _condtional_value_X162;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X163=(n==hash));                _condtional_value_X163;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sClass*)(__right_value139=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_48))));
                come_call_finalizer(sClass_finalize, __right_value139, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sClass_finalize, default_value_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X140;
char* result;
char* __result_obj__16;
_Bool _condtional_value_X141;
char* __result_obj__17;
char* result_46;
char* __result_obj__18;
result = (void*)0;
result_46 = (void*)0;
    if(({    (_condtional_value_X140=(self==((void*)0)));    _condtional_value_X140;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__16 = result;
        return __result_obj__16;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X141=(self->key_list->it));    _condtional_value_X141;    })) {
        __result_obj__17 = self->key_list->it->item;
        return __result_obj__17;
    }
    memset(&result_46,0,sizeof(char*));
    __result_obj__18 = result_46;
    return __result_obj__18;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X144;
char* result;
char* __result_obj__19;
_Bool _condtional_value_X145;
char* __result_obj__20;
char* result_47;
char* __result_obj__21;
result = (void*)0;
result_47 = (void*)0;
    if(({    (_condtional_value_X144=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X144;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__19 = result;
        return __result_obj__19;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X145=(self->key_list->it));    _condtional_value_X145;    })) {
        __result_obj__20 = self->key_list->it->item;
        return __result_obj__20;
    }
    memset(&result_47,0,sizeof(char*));
    __result_obj__21 = result_47;
    return __result_obj__21;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
_Bool _condtional_value_X149;
struct sClass* __result_obj__22;
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
struct sClass* __result_obj__23;
struct sClass* __result_obj__24;
struct sClass* __result_obj__25;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X147=((_Bool)1));    _condtional_value_X147;    })) {
        if(({        (_condtional_value_X148=(self->item_existance[it]));        _condtional_value_X148;        })) {
            if(({            (_condtional_value_X149=(string_equals(self->keys[it],key)));            _condtional_value_X149;            })) {
                __result_obj__22 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__22;
            }
            it++;
            if(({            (_condtional_value_X158=(it>=self->size));            _condtional_value_X158;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X159=(it==hash));            _condtional_value_X159;            })) {
                __result_obj__23 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__23;
            }
        }
        else {
            __result_obj__24 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__24;
        }
    }
    __result_obj__25 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static void sClass_finalize(struct sClass* self){
_Bool _condtional_value_X150;
_Bool _condtional_value_X151;
_Bool _condtional_value_X156;
_Bool _condtional_value_X157;
    if(({    (_condtional_value_X150=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X150;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X151=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X151;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X156=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X156;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X157=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X157;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X152;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X152=(it!=((void*)0)));    _condtional_value_X152;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X153;
    if(({    (_condtional_value_X153=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X153;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
    if(({    (_condtional_value_X154=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X154;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X155=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X155;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
struct list$1char$ph* __result_obj__29;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X168=(it!=((void*)0)));    _condtional_value_X168;    })) {
        if(({        (_condtional_value_X169=(string_equals(it->item,item)));        _condtional_value_X169;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__29 = self;
    return __result_obj__29;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X170;
_Bool _condtional_value_X171;
_Bool _condtional_value_X172;
int tmp;
_Bool _condtional_value_X173;
_Bool _condtional_value_X174;
_Bool _condtional_value_X175;
struct list$1char$ph* __result_obj__26;
_Bool _condtional_value_X176;
_Bool _condtional_value_X178;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X179;
_Bool _condtional_value_X180;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X181;
_Bool _condtional_value_X182;
struct list_item$1char$ph* it_49;
int i_50;
_Bool _condtional_value_X183;
_Bool _condtional_value_X184;
_Bool _condtional_value_X185;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_53;
_Bool _condtional_value_X186;
_Bool _condtional_value_X187;
_Bool _condtional_value_X188;
_Bool _condtional_value_X189;
struct list_item$1char$ph* prev_it_54;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
struct list$1char$ph* __result_obj__28;
    if(({    (_condtional_value_X170=(head<0));    _condtional_value_X170;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X171=(tail<0));    _condtional_value_X171;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X172=(head>tail));    _condtional_value_X172;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X173=(head<0));    _condtional_value_X173;    })) {
        head=0;
    }
    if(({    (_condtional_value_X174=(tail>self->len));    _condtional_value_X174;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X175=(head==tail));    _condtional_value_X175;    })) {
        __result_obj__26 = self;
        return __result_obj__26;
    }
    if(({    (_condtional_value_X176=(head==0&&tail==self->len));    _condtional_value_X176;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X178=(head==0));    _condtional_value_X178;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X179=(it!=((void*)0)));        _condtional_value_X179;        })) {
            if(({            (_condtional_value_X180=(i<tail));            _condtional_value_X180;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X181=(i==tail));            _condtional_value_X181;            })) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(({    (_condtional_value_X182=(tail==self->len));    _condtional_value_X182;    })) {
        it_49=self->head;
        i_50=0;
        while(({        (_condtional_value_X183=(it_49!=((void*)0)));        _condtional_value_X183;        })) {
            if(({            (_condtional_value_X184=(i_50==head));            _condtional_value_X184;            })) {
                self->tail=it_49->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X185=(i_50>=head));            _condtional_value_X185;            })) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
    }
    else {
        it_52=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_53=0;
        while(({        (_condtional_value_X186=(it_52!=((void*)0)));        _condtional_value_X186;        })) {
            if(({            (_condtional_value_X187=(i_53==head));            _condtional_value_X187;            })) {
                head_prev_it=it_52->prev;
            }
            if(({            (_condtional_value_X188=(i_53==tail));            _condtional_value_X188;            })) {
                tail_it=it_52;
            }
            if(({            (_condtional_value_X189=(i_53>=head&&i_53<tail));            _condtional_value_X189;            })) {
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
        if(({        (_condtional_value_X190=(head_prev_it!=((void*)0)));        _condtional_value_X190;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X191=(tail_it!=((void*)0)));        _condtional_value_X191;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X177;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__27;
    it=self->head;
    while(({    (_condtional_value_X177=(it!=((void*)0)));    _condtional_value_X177;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
_Bool _condtional_value_X209;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X226;
_Bool _condtional_value_X227;
_Bool _condtional_value_X228;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool _condtional_value_X231;
_Bool _condtional_value_X232;
_Bool _condtional_value_X233;
_Bool _condtional_value_X234;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X235;
_Bool _condtional_value_X236;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
_Bool _condtional_value_X239;
struct map$2char$phsType$ph* __result_obj__41;
    if(({    (_condtional_value_X209=(self->len*10>=self->size));    _condtional_value_X209;    })) {
        map$2char$phsType$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X226=((_Bool)1));    _condtional_value_X226;    })) {
        if(({        (_condtional_value_X227=(self->item_existance[it]));        _condtional_value_X227;        })) {
            if(({            (_condtional_value_X228=(string_equals(self->keys[it],key)));            _condtional_value_X228;            })) {
                if(({                (_condtional_value_X229=(1));                _condtional_value_X229;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X230=(1));                _condtional_value_X230;                })) {
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X231=(it>=self->size));            _condtional_value_X231;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X232=(it==hash));            _condtional_value_X232;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X233=(1));            _condtional_value_X233;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X234=(1));            _condtional_value_X234;            })) {
                self->items[it]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X235=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X235;    });    ({    (_condtional_value_X236=(!list$1char$ph_end(self->key_list)));    _condtional_value_X236;    });    ({    (_condtional_value_X237=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X237;    })    ){
        if(({        (_condtional_value_X238=(string_equals(it2,key)));        _condtional_value_X238;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X239=(!same_key_exist));    _condtional_value_X239;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__41 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size;
void* __right_value207 = (void*)0;
char** keys;
void* __right_value208 = (void*)0;
struct sType** items;
void* __right_value209 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X212;
_Bool _condtional_value_X213;
_Bool _condtional_value_X216;
struct sType* default_value;
void* __right_value210 = (void*)0;
struct sType* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
struct sType* default_value_59;
void* __right_value211 = (void*)0;
default_value = (void*)0;
default_value_59 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value207=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value208=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sType**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value209=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X212=(it=map$2char$phsType$ph_begin(self)));    _condtional_value_X212;    });    ({    (_condtional_value_X213=(!map$2char$phsType$ph_end(self)));    _condtional_value_X213;    });    ({    (_condtional_value_X216=(it=map$2char$phsType$ph_next(self)));    _condtional_value_X216;    })    ){
        memset(&default_value,0,sizeof(struct sType*));
        it2=((struct sType*)(__right_value210=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value))));
        come_call_finalizer(sType_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X222=((_Bool)1));        _condtional_value_X222;        })) {
            if(({            (_condtional_value_X223=(item_existance[n]));            _condtional_value_X223;            })) {
                n++;
                if(({                (_condtional_value_X224=(n>=size));                _condtional_value_X224;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X225=(n==hash));                _condtional_value_X225;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sType*)(__right_value211=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value_59))));
                come_call_finalizer(sType_finalize, __right_value211, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sType_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
_Bool _condtional_value_X210;
char* result;
char* __result_obj__31;
_Bool _condtional_value_X211;
char* __result_obj__32;
char* result_57;
char* __result_obj__33;
result = (void*)0;
result_57 = (void*)0;
    if(({    (_condtional_value_X210=(self==((void*)0)));    _condtional_value_X210;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__31 = result;
        return __result_obj__31;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X211=(self->key_list->it));    _condtional_value_X211;    })) {
        __result_obj__32 = self->key_list->it->item;
        return __result_obj__32;
    }
    memset(&result_57,0,sizeof(char*));
    __result_obj__33 = result_57;
    return __result_obj__33;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
_Bool _condtional_value_X214;
char* result;
char* __result_obj__34;
_Bool _condtional_value_X215;
char* __result_obj__35;
char* result_58;
char* __result_obj__36;
result = (void*)0;
result_58 = (void*)0;
    if(({    (_condtional_value_X214=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X214;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__34 = result;
        return __result_obj__34;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X215=(self->key_list->it));    _condtional_value_X215;    })) {
        __result_obj__35 = self->key_list->it->item;
        return __result_obj__35;
    }
    memset(&result_58,0,sizeof(char*));
    __result_obj__36 = result_58;
    return __result_obj__36;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X217;
_Bool _condtional_value_X218;
_Bool _condtional_value_X219;
struct sType* __result_obj__37;
_Bool _condtional_value_X220;
_Bool _condtional_value_X221;
struct sType* __result_obj__38;
struct sType* __result_obj__39;
struct sType* __result_obj__40;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X217=((_Bool)1));    _condtional_value_X217;    })) {
        if(({        (_condtional_value_X218=(self->item_existance[it]));        _condtional_value_X218;        })) {
            if(({            (_condtional_value_X219=(string_equals(self->keys[it],key)));            _condtional_value_X219;            })) {
                __result_obj__37 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__37;
            }
            it++;
            if(({            (_condtional_value_X220=(it>=self->size));            _condtional_value_X220;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X221=(it==hash));            _condtional_value_X221;            })) {
                __result_obj__38 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X240;
void* __right_value216 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj23;
_Bool _condtional_value_X241;
void* __right_value217 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_60;
struct tuple2$2char$phsType$ph* __dec_obj24;
void* __right_value218 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_61;
struct tuple2$2char$phsType$ph* __dec_obj25;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__42;
    if(({    (_condtional_value_X240=(self->len==0));    _condtional_value_X240;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value216=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj23=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X241=(self->len==1));    _condtional_value_X241;    })) {
        litem_60=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value217=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_60->prev=self->head;
        litem_60->next=((void*)0);
        __dec_obj24=litem_60->item,
        litem_60->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_60;
        self->head->next=litem_60;
    }
    else {
        litem_61=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value218=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_61->prev=self->tail;
        litem_61->next=((void*)0);
        __dec_obj25=litem_61->item,
        litem_61->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_61;
        self->tail=litem_61;
    }
    self->len++;
    __result_obj__42 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj26;
struct sType* __dec_obj27;
struct tuple2$2char$phsType$ph* __result_obj__43;
    __dec_obj26=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj27=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__43 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

void create_pico_version_header(){
_Bool _condtional_value_X242;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* Value;
_Bool _condtional_value_X243;
int version_major;
char* p;
_Bool _condtional_value_X244;
_Bool _condtional_value_X245;
_Bool _condtional_value_X246;
int version_miner;
char* p_62;
_Bool _condtional_value_X247;
_Bool _condtional_value_X248;
_Bool _condtional_value_X249;
int version_revision;
char* p_63;
_Bool _condtional_value_X250;
_Bool _condtional_value_X251;
_Bool _condtional_value_X252;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* version_string;
int Value_64;
_Bool _condtional_value_X253;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
    if(({    (_condtional_value_X242=(getenv("PICO_SDK_PATH")));    _condtional_value_X242;    })) {
        Value=(char*)come_increment_ref_count(charp_read((((char*)(__right_value250=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(({        (_condtional_value_X243=(Value));        (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        _condtional_value_X243;        })) {
            version_major=0;
            p=strstr(Value,"set(PICO_SDK_VERSION_MAJOR");
            if(({            (_condtional_value_X244=(p));            _condtional_value_X244;            })) {
                p+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(({                (_condtional_value_X245=(*p==32||*p==9));                _condtional_value_X245;                })) {
                    p++;
                }
                while(({                (_condtional_value_X246=(xisdigit(*p)));                _condtional_value_X246;                })) {
                    version_major=version_major*10+(*p-48);
                    p++;
                }
            }
            version_miner=0;
            p_62=strstr(Value,"set(PICO_SDK_VERSION_MINOR");
            if(({            (_condtional_value_X247=(p_62));            _condtional_value_X247;            })) {
                p_62+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(({                (_condtional_value_X248=(*p_62==32||*p_62==9));                _condtional_value_X248;                })) {
                    p_62++;
                }
                while(({                (_condtional_value_X249=(xisdigit(*p_62)));                _condtional_value_X249;                })) {
                    version_miner=version_miner*10+*p_62-48;
                    p_62++;
                }
            }
            version_revision=0;
            p_63=strstr(Value,"set(PICO_SDK_VERSION_REVISION");
            if(({            (_condtional_value_X250=(p_63));            _condtional_value_X250;            })) {
                p_63+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(({                (_condtional_value_X251=(*p_63==32||*p_63==9));                _condtional_value_X251;                })) {
                    p_63++;
                }
                while(({                (_condtional_value_X252=(xisdigit(*p_63)));                _condtional_value_X252;                })) {
                    version_revision=version_revision*10+*p_63-48;
                    p_63++;
                }
            }
            version_string=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value252=int_to_string(version_major))),((char*)(__right_value253=int_to_string(version_miner))),((char*)(__right_value254=int_to_string(version_revision)))));
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            Value_64=system("mkdir -p pico");
            if(({            (_condtional_value_X253=(!Value_64));            _condtional_value_X253;            })) {
                charp_write(((char*)(__right_value260=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value256=int_to_string(version_major))),((char*)(__right_value257=int_to_string(version_miner))),((char*)(__right_value258=int_to_string(version_revision))),((char*)(__right_value259=string_to_string(version_string)))))),"pico/version.h",(_Bool)0);
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
            }
            (version_string = come_decrement_ref_count(version_string, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
        }
        (Value = come_decrement_ref_count(Value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main(int argc, char** argv){
_Bool _condtional_value_X254;
int start_num;
void* __right_value261 = (void*)0;
char* output_file_name_str;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct buffer* clang_option;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* linker_option;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* cpp_option;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1char$ph* files;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1char$ph* object_files;
_Bool output_object_file;
_Bool output_cpp_file;
_Bool output_source_file_flag;
_Bool output_object_file_flag;
char* output_file_name;
_Bool verbose;
_Bool come_debug;
_Bool come_malloc;
_Bool m5stack_cpp;
_Bool pico_cpp;
_Bool emb_cpp;
_Bool gcc_compiler;
int i;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
void* __right_value272 = (void*)0;
char* ext_name;
_Bool _condtional_value_X258;
void* __right_value273 = (void*)0;
char* __dec_obj28;
_Bool _condtional_value_X259;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
_Bool _condtional_value_X260;
_Bool _condtional_value_X261;
_Bool _condtional_value_X262;
void* __right_value276 = (void*)0;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
_Bool _condtional_value_X265;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
_Bool _condtional_value_X266;
char* env;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct buffer* __dec_obj29;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
_Bool _condtional_value_X267;
_Bool _condtional_value_X268;
char* env_65;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct buffer* __dec_obj30;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
_Bool _condtional_value_X269;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
_Bool _condtional_value_X270;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
_Bool _condtional_value_X273;
_Bool _condtional_value_X274;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool _condtional_value_X275;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
_Bool _condtional_value_X276;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
_Bool _condtional_value_X277;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
_Bool _condtional_value_X278;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
_Bool _condtional_value_X279;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
_Bool _condtional_value_X280;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
_Bool _condtional_value_X281;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
_Bool _condtional_value_X282;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _condtional_value_X283;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
_Bool _condtional_value_X284;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
_Bool _condtional_value_X285;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
_Bool _condtional_value_X286;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
_Bool _condtional_value_X287;
_Bool _condtional_value_X288;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
_Bool _condtional_value_X289;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
_Bool _condtional_value_X290;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
_Bool _condtional_value_X291;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
_Bool _condtional_value_X292;
_Bool _condtional_value_X293;
_Bool _condtional_value_X294;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
_Bool _condtional_value_X295;
_Bool _condtional_value_X296;
_Bool _condtional_value_X297;
_Bool _condtional_value_X298;
_Bool _condtional_value_X299;
_Bool _condtional_value_X300;
void* __right_value361 = (void*)0;
_Bool _condtional_value_X301;
void* __right_value362 = (void*)0;
_Bool _condtional_value_X302;
void* __right_value363 = (void*)0;
_Bool _condtional_value_X303;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
int Value;
_Bool _condtional_value_X304;
_Bool __exception_result_var_b12;
struct __sFILE* Value_66;
_Bool _condtional_value_X305;
_Bool __exception_result_var_b13;
void* __right_value367 = (void*)0;
char* tmp_file;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
int Value_67;
_Bool _condtional_value_X311;
_Bool __exception_result_var_b14;
struct sInfo info;
void* __right_value375 = (void*)0;
char* __dec_obj31;
void* __right_value376 = (void*)0;
char* __dec_obj32;
void* __right_value377 = (void*)0;
char* __dec_obj33;
void* __right_value378 = (void*)0;
char* __dec_obj34;
void* __right_value379 = (void*)0;
char* __dec_obj35;
void* __right_value380 = (void*)0;
void* __right_value386 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj37;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj38;
void* __right_value389 = (void*)0;
void* __right_value395 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj40;
void* __right_value396 = (void*)0;
void* __right_value402 = (void*)0;
struct map$2char$phchar$ph* __dec_obj42;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj43;
void* __right_value405 = (void*)0;
void* __right_value411 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj45;
void* __right_value412 = (void*)0;
void* __right_value418 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj47;
void* __right_value419 = (void*)0;
void* __right_value425 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj49;
void* __right_value426 = (void*)0;
void* __right_value432 = (void*)0;
struct map$2char$phsType$ph* __dec_obj51;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sModule* __dec_obj52;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj53;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1CVALUE$ph* __dec_obj54;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sVarTable* __dec_obj55;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sVarTable* lv_table;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1char$ph* __dec_obj56;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct list$1char$ph* __dec_obj57;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj58;
void* __right_value449 = (void*)0;
char* __dec_obj59;
_Bool Value_82;
_Bool _condtional_value_X530;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct buffer* __dec_obj60;
_Bool Value_83;
_Bool _condtional_value_X531;
_Bool Value_84;
_Bool _condtional_value_X532;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
_Bool _condtional_value_X568;
_Bool Value_85;
_Bool _condtional_value_X569;
_Bool _condtional_value_X570;
_Bool Value_86;
_Bool _condtional_value_X571;
_Bool _condtional_value_X572;
_Bool Value_87;
_Bool _condtional_value_X573;
_Bool _condtional_value_X574;
_Bool Value_88;
_Bool _condtional_value_X575;
_Bool _condtional_value_X576;
_Bool Value_89;
_Bool _condtional_value_X577;
_Bool _condtional_value_X578;
_Bool Value_90;
_Bool _condtional_value_X579;
_Bool _condtional_value_X580;
_Bool _condtional_value_X581;
_Bool Value_91;
_Bool _condtional_value_X582;
_Bool _condtional_value_X583;
_Bool Value_92;
_Bool _condtional_value_X584;
int start_num_93;
char* output_file_name_str_94;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct buffer* clang_option_95;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct buffer* linker_option_96;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct buffer* cpp_option_97;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1char$ph* files_98;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1char$ph* object_files_99;
_Bool output_object_file_100;
_Bool output_cpp_file_101;
_Bool output_source_file_flag_102;
_Bool output_object_file_flag_103;
char* output_file_name_104;
_Bool verbose_105;
_Bool come_debug_106;
_Bool come_malloc_107;
_Bool m5stack_cpp_108;
_Bool pico_cpp_109;
_Bool emb_cpp_110;
_Bool gcc_compiler_111;
int i_112;
_Bool _condtional_value_X585;
_Bool _condtional_value_X586;
_Bool _condtional_value_X587;
void* __right_value466 = (void*)0;
char* ext_name_113;
_Bool _condtional_value_X588;
void* __right_value467 = (void*)0;
char* __dec_obj61;
_Bool _condtional_value_X589;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
_Bool _condtional_value_X590;
_Bool _condtional_value_X591;
_Bool _condtional_value_X592;
void* __right_value470 = (void*)0;
_Bool _condtional_value_X593;
_Bool _condtional_value_X594;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
_Bool _condtional_value_X595;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
_Bool _condtional_value_X596;
char* env_114;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct buffer* __dec_obj62;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
_Bool _condtional_value_X597;
_Bool _condtional_value_X598;
char* env_115;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct buffer* __dec_obj63;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
_Bool _condtional_value_X599;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
_Bool _condtional_value_X600;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
_Bool _condtional_value_X601;
_Bool _condtional_value_X602;
_Bool _condtional_value_X603;
_Bool _condtional_value_X604;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
_Bool _condtional_value_X605;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
_Bool _condtional_value_X606;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
_Bool _condtional_value_X607;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
_Bool _condtional_value_X608;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
_Bool _condtional_value_X609;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
_Bool _condtional_value_X610;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
_Bool _condtional_value_X611;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
_Bool _condtional_value_X612;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
_Bool _condtional_value_X613;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
_Bool _condtional_value_X614;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
_Bool _condtional_value_X615;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
_Bool _condtional_value_X616;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
_Bool _condtional_value_X617;
_Bool _condtional_value_X618;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
_Bool _condtional_value_X619;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
_Bool _condtional_value_X620;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
_Bool _condtional_value_X621;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
_Bool _condtional_value_X622;
_Bool _condtional_value_X623;
_Bool _condtional_value_X624;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
_Bool _condtional_value_X625;
_Bool _condtional_value_X626;
_Bool _condtional_value_X627;
_Bool _condtional_value_X628;
_Bool _condtional_value_X629;
_Bool _condtional_value_X630;
void* __right_value555 = (void*)0;
_Bool _condtional_value_X631;
void* __right_value556 = (void*)0;
_Bool _condtional_value_X632;
void* __right_value557 = (void*)0;
_Bool _condtional_value_X633;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1char$ph* o2_saved;
char* it;
_Bool _condtional_value_X634;
_Bool _condtional_value_X635;
_Bool _condtional_value_X636;
struct sInfo info_116;
struct __sFILE* Value_117;
_Bool _condtional_value_X637;
void* __right_value560 = (void*)0;
char* __dec_obj64;
void* __right_value561 = (void*)0;
char* __dec_obj65;
void* __right_value562 = (void*)0;
char* __dec_obj66;
void* __right_value563 = (void*)0;
char* __dec_obj67;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj68;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj69;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj70;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct map$2char$phchar$ph* __dec_obj71;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj72;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj73;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj74;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj75;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct map$2char$phsType$ph* __dec_obj76;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sModule* __dec_obj77;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj78;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1CVALUE$ph* __dec_obj79;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sVarTable* __dec_obj80;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sVarTable* lv_table_118;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1char$ph* __dec_obj81;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1char$ph* __dec_obj82;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj83;
_Bool Value_119;
_Bool _condtional_value_X638;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct buffer* __dec_obj84;
_Bool _condtional_value_X639;
void* __right_value601 = (void*)0;
char* __dec_obj85;
char* __dec_obj86;
_Bool Value_120;
_Bool _condtional_value_X640;
_Bool Value_121;
_Bool _condtional_value_X641;
_Bool _condtional_value_X642;
_Bool Value_122;
_Bool _condtional_value_X643;
_Bool Value_123;
_Bool _condtional_value_X644;
_Bool _condtional_value_X645;
_Bool _condtional_value_X646;
_Bool _condtional_value_X647;
_Bool _condtional_value_X648;
struct sInfo info_124;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
char* __dec_obj87;
void* __right_value604 = (void*)0;
char* __dec_obj88;
void* __right_value605 = (void*)0;
char* __dec_obj89;
_Bool _condtional_value_X655;
void* __right_value606 = (void*)0;
char* __dec_obj90;
char* __dec_obj91;
_Bool _condtional_value_X656;
_Bool Value_125;
_Bool _condtional_value_X657;
_Bool _condtional_value_X658;
memset(&info, 0, sizeof(struct sInfo));
memset(&info_116, 0, sizeof(struct sInfo));
memset(&info_124, 0, sizeof(struct sInfo));
    if(({    (_condtional_value_X254=(charp_operator_equals(argv[1],"header")&&argc>=3));    _condtional_value_X254;    })) {
        start_num=2;
        output_file_name_str=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 802, "struct buffer*"))));
        buffer_append_str(clang_option," -std=c99 ");
        linker_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 804, "struct buffer*"))));
        cpp_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 805, "struct buffer*"))));
        buffer_append_str(cpp_option,"-U__GNUC__");
        files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 807, "struct list$1char$ph*"))));
        object_files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 808, "struct list$1char$ph*"))));
        output_object_file=(_Bool)0;
        output_cpp_file=(_Bool)0;
        output_source_file_flag=(_Bool)0;
        output_object_file_flag=(_Bool)1;
        output_file_name=(char*)come_increment_ref_count(output_file_name_str);
        verbose=(_Bool)0;
        come_debug=(_Bool)0;
        come_malloc=(_Bool)0;
        m5stack_cpp=(_Bool)0;
        pico_cpp=(_Bool)0;
        emb_cpp=(_Bool)0;
        gcc_compiler=(_Bool)0;
        for(        ({        (_condtional_value_X255=(i=start_num));        _condtional_value_X255;        });        ({        (_condtional_value_X256=(i<argc));        _condtional_value_X256;        });        ({        (_condtional_value_X257=(i++));        _condtional_value_X257;        })        ){
            ext_name=(char*)come_increment_ref_count(xextname(argv[i]));
            if(({            (_condtional_value_X258=(charp_operator_equals(argv[i],"-o")&&i+1<argc));            _condtional_value_X258;            })) {
                __dec_obj28=output_file_name,
                output_file_name=(char*)come_increment_ref_count(__builtin_string(argv[i+1]));
                __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                i++;
            }
            else if(({            (_condtional_value_X259=(charp_operator_equals(argv[i],"-e")&&i+1<argc));            _condtional_value_X259;            })) {
                buffer_append_str(linker_option,((char*)(__right_value275=xsprintf("-e \%s",((char*)(__right_value274=charp_to_string(argv[i+1])))))));
                (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X260=(charp_operator_equals(argv[i],"-str")));            _condtional_value_X260;            })) {
                gComeStr=(_Bool)1;
            }
            else if(({            (_condtional_value_X261=(charp_operator_equals(argv[i],"-pthread")));            _condtional_value_X261;            })) {
                gComePthread=(_Bool)1;
            }
            else if(({            (_condtional_value_X262=(charp_operator_equals(argv[i],"-gc")));            _condtional_value_X262;            })) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option,((char*)(__right_value276=xsprintf(" -DENABLE_GC "))));
                (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X263=(charp_operator_equals(argv[i],"-gcc")));            _condtional_value_X263;            })) {
                gcc_compiler=(_Bool)1;
                CC="gcc";
            }
            else if(({            (_condtional_value_X264=(charp_operator_equals(argv[i],"-riscv")));            _condtional_value_X264;            })) {
                gcc_compiler=(_Bool)1;
                output_object_file_flag=(_Bool)0;
                CC="riscv64-unknown-elf-gcc";
                buffer_append_format(cpp_option,((char*)(__right_value277=xsprintf(" -D__BARE_METAL__ -D__RISCV__ "))));
                (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option,((char*)(__right_value278=xsprintf(" -nostdlib -ffreestanding -D__RISCV__"))));
                (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                gComeBareMetal=(_Bool)1;
            }
            else if(({            (_condtional_value_X265=(charp_operator_equals(argv[i],"-bare")));            _condtional_value_X265;            })) {
                output_source_file_flag=(_Bool)1;
                gcc_compiler=(_Bool)1;
                output_object_file_flag=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                CC="gcc";
                gComeBareMetal=(_Bool)1;
                buffer_append_format(cpp_option,((char*)(__right_value279=xsprintf(" -D__BARE_METAL__ "))));
                (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option,((char*)(__right_value280=xsprintf(" -nostdlib -ffreestanding "))));
                (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X266=(charp_operator_equals(argv[i],"-pico")));            _condtional_value_X266;            })) {
                output_source_file_flag=(_Bool)1;
                output_object_file_flag=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env=getenv("PICO_SDK_PATH");
                __dec_obj29=cpp_option,
                cpp_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 869, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option,((char*)(__right_value285=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value283=charp_to_string(env))),((char*)(__right_value284=charp_to_string(env)))))));
                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                create_pico_version_header();
                pico_cpp=(_Bool)1;
            }
            else if(({            (_condtional_value_X267=(charp_operator_equals(argv[i],"-emb")));            _condtional_value_X267;            })) {
                output_source_file_flag=(_Bool)1;
                output_object_file_flag=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                emb_cpp=(_Bool)1;
            }
            else if(({            (_condtional_value_X268=(charp_operator_equals(argv[i],"-m5stack")));            _condtional_value_X268;            })) {
                m5stack_cpp=(_Bool)1;
                output_source_file_flag=(_Bool)1;
                output_object_file_flag=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_65=getenv("IDF_PATH");
                __dec_obj30=cpp_option,
                cpp_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 886, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option,((char*)(__right_value309=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value288=charp_to_string(getenv("HOME")))),((char*)(__right_value289=charp_to_string(env_65))),((char*)(__right_value290=charp_to_string(env_65))),((char*)(__right_value291=charp_to_string(env_65))),((char*)(__right_value292=charp_to_string(env_65))),((char*)(__right_value293=charp_to_string(env_65))),((char*)(__right_value294=charp_to_string(env_65))),((char*)(__right_value295=charp_to_string(env_65))),((char*)(__right_value296=charp_to_string(env_65))),((char*)(__right_value297=charp_to_string(env_65))),((char*)(__right_value298=charp_to_string(env_65))),((char*)(__right_value299=charp_to_string(env_65))),((char*)(__right_value300=charp_to_string(env_65))),((char*)(__right_value301=charp_to_string(env_65))),((char*)(__right_value302=charp_to_string(env_65))),((char*)(__right_value303=charp_to_string(env_65))),((char*)(__right_value304=charp_to_string(env_65))),((char*)(__right_value305=charp_to_string(env_65))),((char*)(__right_value306=charp_to_string(env_65))),((char*)(__right_value307=charp_to_string(env_65))),((char*)(__right_value308=charp_to_string(env_65)))))),"/usr/local/");
                (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X269=(i+1<argc&&charp_operator_equals(argv[i],"-target")));            _condtional_value_X269;            })) {
                buffer_append_str(clang_option,((char*)(__right_value311=xsprintf("-target \%s",((char*)(__right_value310=charp_to_string(argv[i+1])))))));
                (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X270=(i+1<argc&&charp_operator_equals(argv[i],"-T")));            _condtional_value_X270;            })) {
                buffer_append_str(clang_option,((char*)(__right_value313=xsprintf(" -T \%s ",((char*)(__right_value312=charp_to_string(argv[i+1])))))));
                (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X271=(charp_operator_equals(argv[i],"-net")));            _condtional_value_X271;            })) {
                gComeNet=(_Bool)1;
            }
            else if(({            (_condtional_value_X272=(charp_operator_equals(argv[i],"-cg")));            _condtional_value_X272;            })) {
                come_debug=(_Bool)1;
                buffer_append_str(clang_option,"-g ");
            }
            else if(({            (_condtional_value_X273=(charp_operator_equals(argv[i],"-cg2")));            _condtional_value_X273;            })) {
                buffer_append_str(clang_option," -fsanitize=address,undefined -g ");
                buffer_append_str(linker_option," -fsanitize=address,undefined -g ");
            }
            else if(({            (_condtional_value_X274=(charp_operator_equals(argv[i],"-C")));            _condtional_value_X274;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value315=xsprintf("\%s ",((char*)(__right_value314=charp_to_string(argv[i])))))));
                (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X275=(charp_operator_equals(argv[i],"-M")));            _condtional_value_X275;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value317=xsprintf("\%s ",((char*)(__right_value316=charp_to_string(argv[i])))))));
                (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X276=(charp_operator_equals(argv[i],"-MM")));            _condtional_value_X276;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value319=xsprintf("\%s ",((char*)(__right_value318=charp_to_string(argv[i])))))));
                (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X277=(charp_operator_equals(argv[i],"-dM")));            _condtional_value_X277;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value321=xsprintf("\%s ",((char*)(__right_value320=charp_to_string(argv[i])))))));
                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X278=(charp_operator_equals(argv[i],"-dD")));            _condtional_value_X278;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value323=xsprintf("\%s ",((char*)(__right_value322=charp_to_string(argv[i])))))));
                (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X279=(charp_operator_equals(argv[i],"-H")));            _condtional_value_X279;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value325=xsprintf("\%s ",((char*)(__right_value324=charp_to_string(argv[i])))))));
                (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X280=(charp_operator_equals(argv[i],"-P")));            _condtional_value_X280;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value327=xsprintf("\%s ",((char*)(__right_value326=charp_to_string(argv[i])))))));
                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X281=(charp_operator_equals(argv[i],"-nostdinc")));            _condtional_value_X281;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value329=xsprintf("\%s ",((char*)(__right_value328=charp_to_string(argv[i])))))));
                (__right_value328 = come_decrement_ref_count(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X282=(charp_operator_equals(argv[i],"-CC")));            _condtional_value_X282;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value331=xsprintf("\%s ",((char*)(__right_value330=charp_to_string(argv[i])))))));
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X283=(i+1<argc&&charp_operator_equals(argv[i],"-target")));            _condtional_value_X283;            })) {
                buffer_append_str(clang_option,((char*)(__right_value333=xsprintf("-target \%s",((char*)(__right_value332=charp_to_string(argv[i+1])))))));
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X284=(i+1<argc&&charp_operator_equals(argv[i],"-include")));            _condtional_value_X284;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value335=xsprintf("-iclude \%s",((char*)(__right_value334=charp_to_string(argv[i+1])))))));
                (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X285=(i+1<argc&&charp_operator_equals(argv[i],"-isystem")));            _condtional_value_X285;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value337=xsprintf("-isystem \%s",((char*)(__right_value336=charp_to_string(argv[i+1])))))));
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option,((char*)(__right_value339=xsprintf("-isystem \%s",((char*)(__right_value338=charp_to_string(argv[i+1])))))));
                (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X286=(i+1<argc&&charp_operator_equals(argv[i],"-T")));            _condtional_value_X286;            })) {
                buffer_append_str(clang_option,((char*)(__right_value341=xsprintf(" -T \%s ",((char*)(__right_value340=charp_to_string(argv[i+1])))))));
                (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i++;
            }
            else if(({            (_condtional_value_X287=(charp_operator_equals(argv[i],"-common-header")));            _condtional_value_X287;            })) {
                gCommonHeader=(_Bool)1;
            }
            else if(({            (_condtional_value_X288=(charp_operator_equals(argv[i],"-original-position")));            _condtional_value_X288;            })) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(({            (_condtional_value_X289=(string_operator_equals(((char*)(__right_value343=charp_operator_load_range_element(argv[i],0,2))),"-O")));            (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _condtional_value_X289;            })) {
                buffer_append_str(clang_option,((char*)(__right_value345=xsprintf(" \%s ",((char*)(__right_value344=charp_to_string(argv[i])))))));
                (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_debug=(_Bool)0;
            }
            else if(({            (_condtional_value_X290=(string_operator_equals(((char*)(__right_value347=charp_operator_load_range_element(argv[i],0,2))),"-D")));            (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _condtional_value_X290;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value349=xsprintf(" \%s ",((char*)(__right_value348=charp_to_string(argv[i])))))));
                (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option,((char*)(__right_value351=xsprintf(" \%s ",((char*)(__right_value350=charp_to_string(argv[i])))))));
                (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X291=(string_operator_equals(((char*)(__right_value353=charp_operator_load_range_element(argv[i],0,2))),"-U")));            (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _condtional_value_X291;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value355=xsprintf(" \%s ",((char*)(__right_value354=charp_to_string(argv[i])))))));
                (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option,((char*)(__right_value357=xsprintf(" \%s ",((char*)(__right_value356=charp_to_string(argv[i])))))));
                (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X292=(charp_operator_equals(argv[i],"-g")));            _condtional_value_X292;            })) {
                buffer_append_str(clang_option,"-g ");
            }
            else if(({            (_condtional_value_X293=(charp_operator_equals(argv[i],"-v")));            _condtional_value_X293;            })) {
                buffer_append_str(clang_option,"-v ");
                buffer_append_str(cpp_option,"-v ");
                verbose=(_Bool)1;
            }
            else if(({            (_condtional_value_X294=(strlen(argv[i])>=2&&memcmp(argv[i],"-I",strlen("-I"))==0));            _condtional_value_X294;            })) {
                buffer_append_str(cpp_option,((char*)(__right_value360=string_operator_add(((char*)(__right_value359=charp_operator_add(" ",argv[i])))," "))));
                (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X295=(charp_operator_equals(argv[i],"-gdwarf-4")));            _condtional_value_X295;            })) {
                buffer_append_str(clang_option,"-gdwarf-4 ");
            }
            else if(({            (_condtional_value_X296=(charp_operator_equals(argv[i],"-S")));            _condtional_value_X296;            })) {
                output_source_file_flag=(_Bool)1;
                output_object_file_flag=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(({            (_condtional_value_X297=(charp_operator_equals(argv[i],"-s")));            _condtional_value_X297;            })) {
                output_source_file_flag=(_Bool)1;
                output_object_file_flag=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(({            (_condtional_value_X298=(charp_operator_equals(argv[i],"-c")));            _condtional_value_X298;            })) {
                output_object_file=(_Bool)1;
            }
            else if(({            (_condtional_value_X299=(charp_operator_equals(argv[i],"-E")));            _condtional_value_X299;            })) {
                output_cpp_file=(_Bool)1;
            }
            else if(({            (_condtional_value_X300=(argv[i][0]==45));            _condtional_value_X300;            })) {
                buffer_append_str(clang_option,((char*)(__right_value361=charp_operator_add(argv[i]," "))));
                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X301=(strlen(argv[i])>2&&memcmp(argv[i]+strlen(argv[i])-2,".o",2)==0));            _condtional_value_X301;            })) {
                list$1char$ph_push_back(object_files,(char*)come_increment_ref_count(__builtin_string(argv[i])));
            }
            else if(({            (_condtional_value_X302=(strlen(argv[i])>2&&memcmp(argv[i]+strlen(argv[i])-2,".a",2)==0));            _condtional_value_X302;            })) {
                list$1char$ph_push_back(object_files,(char*)come_increment_ref_count(__builtin_string(argv[i])));
            }
            else if(({            (_condtional_value_X303=(string_operator_equals(ext_name,"c")));            _condtional_value_X303;            })) {
                list$1char$ph_push_back(files,(char*)come_increment_ref_count(__builtin_string(argv[i])));
            }
            else {
                buffer_append_str(clang_option,((char*)(__right_value365=charp_operator_add(argv[i]," "))));
                (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (ext_name = come_decrement_ref_count(ext_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        output_source_file_flag=(_Bool)1;
        gComeOriginalSourcePosition=(_Bool)0;
        gComeDebug=come_debug;
        gComeMalloc=come_malloc;
        Value=system(((char*)(__right_value366=xsprintf("%s %s",RM,output_file_name))));
        if(({        (_condtional_value_X304=(Value<0));        (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        _condtional_value_X304;        })) {
            (come_push_stackframe("02transpile.c", 1035, 11),__exception_result_var_b12=die("rm"), come_pop_stackframe(), __exception_result_var_b12);
        }
        else {
        }
        Value_66=fopen(output_file_name,"w");
        if(({        (_condtional_value_X305=(Value_66));        _condtional_value_X305;        })) {
            fclose(Value_66);
        }
        else {
            (come_push_stackframe("02transpile.c", 1042, 12),__exception_result_var_b13=die("fopen"), come_pop_stackframe(), __exception_result_var_b13);
        }
        tmp_file=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_67=system(((char*)(__right_value374=xsprintf("cat \%s > \%s",((char*)(__right_value372=string_to_string(((char*)(__right_value371=list$1char$ph_join(files," ")))))),((char*)(__right_value373=string_to_string(tmp_file)))))));
        if(({        (_condtional_value_X311=(Value_67<0));        (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        _condtional_value_X311;        })) {
            (come_push_stackframe("02transpile.c", 1048, 13),__exception_result_var_b14=die("cat"), come_pop_stackframe(), __exception_result_var_b14);
        }
        else {
        }
        memset(&info,0,sizeof(struct sInfo));
        __dec_obj31=info.base_sname,
        info.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj32=info.sname,
        info.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info.sline=1;
        info.err_num=0;
        __dec_obj33=info.clang_option,
        info.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj34=info.cpp_option,
        info.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj35=info.linker_option,
        info.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info.no_output_err=(_Bool)0;
        __dec_obj37=info.funcs,
        info.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1063, "struct map$2char$phsFun$ph*"))));
        come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj38=info.uniq_funcs,
        info.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1064, "struct map$2char$phsFun$ph*"))));
        come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj40=info.struct_definition,
        info.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1065, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj42=info.uniq_definition,
        info.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1066, "struct map$2char$phchar$ph*"))));
        come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj43=info.previous_struct_definition,
        info.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1067, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj45=info.generics_funcs,
        info.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1068, "struct map$2char$phsGenericsFun$ph*"))));
        come_call_finalizer(map$2char$phsGenericsFun$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj47=info.classes,
        info.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1069, "struct map$2char$phsClass$ph*"))));
        come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj49=info.modules,
        info.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1070, "struct map$2char$phsClassModule$ph*"))));
        come_call_finalizer(map$2char$phsClassModule$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj51=info.types,
        info.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1071, "struct map$2char$phsType$ph*"))));
        come_call_finalizer(map$2char$phsType$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj52=info.module,
        info.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1072, "struct sModule*"))));
        come_call_finalizer(sModule_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj53=info.right_value_objects,
        info.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1073, "struct list$1sRightValueObject$ph*"))));
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj54=info.stack,
        info.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1074, "struct list$1CVALUE$ph*"))));
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj55=info.gv_table,
        info.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1075, "struct sVarTable*")),(_Bool)1,((void*)0)));
        come_call_finalizer(sVarTable_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        lv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1076, "struct sVarTable*")),(_Bool)0,((void*)0)));
        info.lv_table=lv_table;
        __dec_obj56=info.generics_type_names,
        info.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1078, "struct list$1char$ph*"))));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj57=info.method_generics_type_names,
        info.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1079, "struct list$1char$ph*"))));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj58=info.generics_classes,
        info.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1080, "struct map$2char$phsClass$ph*"))));
        come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info.verbose=verbose;
        info.output_header_file=(_Bool)1;
        static int n=0;
        info.num_source_files=n++;
        info.max_source_files=list$1char$ph_length(files);
        __dec_obj59=info.output_file_name,
        info.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        init_classes(&info);
        clear_tmp_file(&info);
        Value_82=cpp(&info);
        if(({        (_condtional_value_X530=(!Value_82));        _condtional_value_X530;        })) {
            printf("transpile failed\n");
            system(((char*)(__right_value450=xsprintf("%s %s*",RM,tmp_file))));
            (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            exit(2);
        }
        else {
        }
        __dec_obj60=info.source,
        info.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value452=charp_read(((char*)(__right_value451=xsprintf("%s.i",tmp_file))))))));
        come_call_finalizer(buffer_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        info.p=info.source->buf;
        info.head=info.source->buf;
        Value_83=output_cpp_file;
        if(({        (_condtional_value_X531=(!Value_83));        _condtional_value_X531;        })) {
            transpile(&info);
            Value_84=output_header_file(&info);
            if(({            (_condtional_value_X532=(!Value_84));            _condtional_value_X532;            })) {
                printf("output source file failed\n");
                system(((char*)(__right_value454=xsprintf("%s %s*",RM,tmp_file))));
                (__right_value454 = come_decrement_ref_count(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value455=xsprintf("%s %s*",RM,tmp_file))));
        (__right_value455 = come_decrement_ref_count(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (output_file_name_str = come_decrement_ref_count(output_file_name_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, clang_option, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, linker_option, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, cpp_option, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, files, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, object_files, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (tmp_file = come_decrement_ref_count(tmp_file, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sInfo_finalize, (&info), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVarTable_finalize, lv_table, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X568=(charp_operator_equals(argv[1],"new")&&argc==3));    _condtional_value_X568;    })) {
        Value_85=new_project(argc,argv);
        if(({        (_condtional_value_X569=(!Value_85));        _condtional_value_X569;        })) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(({    (_condtional_value_X570=(charp_operator_equals(argv[1],"run")&&argc==2));    _condtional_value_X570;    })) {
        Value_86=run_project(argc,argv);
        if(({        (_condtional_value_X571=(!Value_86));        _condtional_value_X571;        })) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(({    (_condtional_value_X572=(charp_operator_equals(argv[1],"header")&&argc==2));    _condtional_value_X572;    })) {
        Value_87=make_header_project(argc,argv);
        if(({        (_condtional_value_X573=(!Value_87));        _condtional_value_X573;        })) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(({    (_condtional_value_X574=(charp_operator_equals(argv[1],"compile")&&argc==2));    _condtional_value_X574;    })) {
        Value_88=compile_project(argc,argv);
        if(({        (_condtional_value_X575=(!Value_88));        _condtional_value_X575;        })) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(({    (_condtional_value_X576=(charp_operator_equals(argv[1],"debug")&&argc==2));    _condtional_value_X576;    })) {
        Value_89=debug_run_project(argc,argv);
        if(({        (_condtional_value_X577=(!Value_89));        _condtional_value_X577;        })) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(({    (_condtional_value_X578=(charp_operator_equals(argv[1],"clean")&&argc==2));    _condtional_value_X578;    })) {
        Value_90=clean_project(argc,argv);
        if(({        (_condtional_value_X579=(!Value_90));        _condtional_value_X579;        })) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(({    (_condtional_value_X580=(charp_operator_equals(argv[1],"install")&&argc>=2));    _condtional_value_X580;    })) {
        if(({        (_condtional_value_X581=(argc==2));        _condtional_value_X581;        })) {
            Value_91=install_project(argc,argv,"/usr/local");
            if(({            (_condtional_value_X582=(!Value_91));            _condtional_value_X582;            })) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(({        (_condtional_value_X583=(argc>=3));        _condtional_value_X583;        })) {
            Value_92=install_project(argc,argv,argv[2]);
            if(({            (_condtional_value_X584=(!Value_92));            _condtional_value_X584;            })) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        start_num_93=1;
        output_file_name_str_94=((void*)0);
        clang_option_95=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 802, "struct buffer*"))));
        buffer_append_str(clang_option_95," -std=c99 ");
        linker_option_96=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 804, "struct buffer*"))));
        cpp_option_97=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 805, "struct buffer*"))));
        buffer_append_str(cpp_option_97,"-U__GNUC__");
        files_98=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 807, "struct list$1char$ph*"))));
        object_files_99=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 808, "struct list$1char$ph*"))));
        output_object_file_100=(_Bool)0;
        output_cpp_file_101=(_Bool)0;
        output_source_file_flag_102=(_Bool)0;
        output_object_file_flag_103=(_Bool)1;
        output_file_name_104=(char*)come_increment_ref_count(output_file_name_str_94);
        verbose_105=(_Bool)0;
        come_debug_106=(_Bool)0;
        come_malloc_107=(_Bool)0;
        m5stack_cpp_108=(_Bool)0;
        pico_cpp_109=(_Bool)0;
        emb_cpp_110=(_Bool)0;
        gcc_compiler_111=(_Bool)0;
        for(        ({        (_condtional_value_X585=(i_112=start_num_93));        _condtional_value_X585;        });        ({        (_condtional_value_X586=(i_112<argc));        _condtional_value_X586;        });        ({        (_condtional_value_X587=(i_112++));        _condtional_value_X587;        })        ){
            ext_name_113=(char*)come_increment_ref_count(xextname(argv[i_112]));
            if(({            (_condtional_value_X588=(charp_operator_equals(argv[i_112],"-o")&&i_112+1<argc));            _condtional_value_X588;            })) {
                __dec_obj61=output_file_name_104,
                output_file_name_104=(char*)come_increment_ref_count(__builtin_string(argv[i_112+1]));
                __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                i_112++;
            }
            else if(({            (_condtional_value_X589=(charp_operator_equals(argv[i_112],"-e")&&i_112+1<argc));            _condtional_value_X589;            })) {
                buffer_append_str(linker_option_96,((char*)(__right_value469=xsprintf("-e \%s",((char*)(__right_value468=charp_to_string(argv[i_112+1])))))));
                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value469 = come_decrement_ref_count(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X590=(charp_operator_equals(argv[i_112],"-str")));            _condtional_value_X590;            })) {
                gComeStr=(_Bool)1;
            }
            else if(({            (_condtional_value_X591=(charp_operator_equals(argv[i_112],"-pthread")));            _condtional_value_X591;            })) {
                gComePthread=(_Bool)1;
            }
            else if(({            (_condtional_value_X592=(charp_operator_equals(argv[i_112],"-gc")));            _condtional_value_X592;            })) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_97,((char*)(__right_value470=xsprintf(" -DENABLE_GC "))));
                (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X593=(charp_operator_equals(argv[i_112],"-gcc")));            _condtional_value_X593;            })) {
                gcc_compiler_111=(_Bool)1;
                CC="gcc";
            }
            else if(({            (_condtional_value_X594=(charp_operator_equals(argv[i_112],"-riscv")));            _condtional_value_X594;            })) {
                gcc_compiler_111=(_Bool)1;
                output_object_file_flag_103=(_Bool)0;
                CC="riscv64-unknown-elf-gcc";
                buffer_append_format(cpp_option_97,((char*)(__right_value471=xsprintf(" -D__BARE_METAL__ -D__RISCV__ "))));
                (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_95,((char*)(__right_value472=xsprintf(" -nostdlib -ffreestanding -D__RISCV__"))));
                (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                gComeBareMetal=(_Bool)1;
            }
            else if(({            (_condtional_value_X595=(charp_operator_equals(argv[i_112],"-bare")));            _condtional_value_X595;            })) {
                output_source_file_flag_102=(_Bool)1;
                gcc_compiler_111=(_Bool)1;
                output_object_file_flag_103=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                CC="gcc";
                gComeBareMetal=(_Bool)1;
                buffer_append_format(cpp_option_97,((char*)(__right_value473=xsprintf(" -D__BARE_METAL__ "))));
                (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_95,((char*)(__right_value474=xsprintf(" -nostdlib -ffreestanding "))));
                (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X596=(charp_operator_equals(argv[i_112],"-pico")));            _condtional_value_X596;            })) {
                output_source_file_flag_102=(_Bool)1;
                output_object_file_flag_103=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_114=getenv("PICO_SDK_PATH");
                __dec_obj62=cpp_option_97,
                cpp_option_97=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 869, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option_97,((char*)(__right_value479=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value477=charp_to_string(env_114))),((char*)(__right_value478=charp_to_string(env_114)))))));
                (__right_value477 = come_decrement_ref_count(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value478 = come_decrement_ref_count(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value479 = come_decrement_ref_count(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                create_pico_version_header();
                pico_cpp_109=(_Bool)1;
            }
            else if(({            (_condtional_value_X597=(charp_operator_equals(argv[i_112],"-emb")));            _condtional_value_X597;            })) {
                output_source_file_flag_102=(_Bool)1;
                output_object_file_flag_103=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                emb_cpp_110=(_Bool)1;
            }
            else if(({            (_condtional_value_X598=(charp_operator_equals(argv[i_112],"-m5stack")));            _condtional_value_X598;            })) {
                m5stack_cpp_108=(_Bool)1;
                output_source_file_flag_102=(_Bool)1;
                output_object_file_flag_103=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_115=getenv("IDF_PATH");
                __dec_obj63=cpp_option_97,
                cpp_option_97=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 886, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option_97,((char*)(__right_value503=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value482=charp_to_string(getenv("HOME")))),((char*)(__right_value483=charp_to_string(env_115))),((char*)(__right_value484=charp_to_string(env_115))),((char*)(__right_value485=charp_to_string(env_115))),((char*)(__right_value486=charp_to_string(env_115))),((char*)(__right_value487=charp_to_string(env_115))),((char*)(__right_value488=charp_to_string(env_115))),((char*)(__right_value489=charp_to_string(env_115))),((char*)(__right_value490=charp_to_string(env_115))),((char*)(__right_value491=charp_to_string(env_115))),((char*)(__right_value492=charp_to_string(env_115))),((char*)(__right_value493=charp_to_string(env_115))),((char*)(__right_value494=charp_to_string(env_115))),((char*)(__right_value495=charp_to_string(env_115))),((char*)(__right_value496=charp_to_string(env_115))),((char*)(__right_value497=charp_to_string(env_115))),((char*)(__right_value498=charp_to_string(env_115))),((char*)(__right_value499=charp_to_string(env_115))),((char*)(__right_value500=charp_to_string(env_115))),((char*)(__right_value501=charp_to_string(env_115))),((char*)(__right_value502=charp_to_string(env_115)))))),"/usr/local/");
                (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value485 = come_decrement_ref_count(__right_value485, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value486 = come_decrement_ref_count(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value488 = come_decrement_ref_count(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value489 = come_decrement_ref_count(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value491 = come_decrement_ref_count(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value499 = come_decrement_ref_count(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value500 = come_decrement_ref_count(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X599=(i_112+1<argc&&charp_operator_equals(argv[i_112],"-target")));            _condtional_value_X599;            })) {
                buffer_append_str(clang_option_95,((char*)(__right_value505=xsprintf("-target \%s",((char*)(__right_value504=charp_to_string(argv[i_112+1])))))));
                (__right_value504 = come_decrement_ref_count(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value505 = come_decrement_ref_count(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X600=(i_112+1<argc&&charp_operator_equals(argv[i_112],"-T")));            _condtional_value_X600;            })) {
                buffer_append_str(clang_option_95,((char*)(__right_value507=xsprintf(" -T \%s ",((char*)(__right_value506=charp_to_string(argv[i_112+1])))))));
                (__right_value506 = come_decrement_ref_count(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X601=(charp_operator_equals(argv[i_112],"-net")));            _condtional_value_X601;            })) {
                gComeNet=(_Bool)1;
            }
            else if(({            (_condtional_value_X602=(charp_operator_equals(argv[i_112],"-cg")));            _condtional_value_X602;            })) {
                come_debug_106=(_Bool)1;
                buffer_append_str(clang_option_95,"-g ");
            }
            else if(({            (_condtional_value_X603=(charp_operator_equals(argv[i_112],"-cg2")));            _condtional_value_X603;            })) {
                buffer_append_str(clang_option_95," -fsanitize=address,undefined -g ");
                buffer_append_str(linker_option_96," -fsanitize=address,undefined -g ");
            }
            else if(({            (_condtional_value_X604=(charp_operator_equals(argv[i_112],"-C")));            _condtional_value_X604;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value509=xsprintf("\%s ",((char*)(__right_value508=charp_to_string(argv[i_112])))))));
                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X605=(charp_operator_equals(argv[i_112],"-M")));            _condtional_value_X605;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value511=xsprintf("\%s ",((char*)(__right_value510=charp_to_string(argv[i_112])))))));
                (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X606=(charp_operator_equals(argv[i_112],"-MM")));            _condtional_value_X606;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value513=xsprintf("\%s ",((char*)(__right_value512=charp_to_string(argv[i_112])))))));
                (__right_value512 = come_decrement_ref_count(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value513 = come_decrement_ref_count(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X607=(charp_operator_equals(argv[i_112],"-dM")));            _condtional_value_X607;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value515=xsprintf("\%s ",((char*)(__right_value514=charp_to_string(argv[i_112])))))));
                (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X608=(charp_operator_equals(argv[i_112],"-dD")));            _condtional_value_X608;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value517=xsprintf("\%s ",((char*)(__right_value516=charp_to_string(argv[i_112])))))));
                (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X609=(charp_operator_equals(argv[i_112],"-H")));            _condtional_value_X609;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value519=xsprintf("\%s ",((char*)(__right_value518=charp_to_string(argv[i_112])))))));
                (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X610=(charp_operator_equals(argv[i_112],"-P")));            _condtional_value_X610;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value521=xsprintf("\%s ",((char*)(__right_value520=charp_to_string(argv[i_112])))))));
                (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X611=(charp_operator_equals(argv[i_112],"-nostdinc")));            _condtional_value_X611;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value523=xsprintf("\%s ",((char*)(__right_value522=charp_to_string(argv[i_112])))))));
                (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X612=(charp_operator_equals(argv[i_112],"-CC")));            _condtional_value_X612;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value525=xsprintf("\%s ",((char*)(__right_value524=charp_to_string(argv[i_112])))))));
                (__right_value524 = come_decrement_ref_count(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value525 = come_decrement_ref_count(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X613=(i_112+1<argc&&charp_operator_equals(argv[i_112],"-target")));            _condtional_value_X613;            })) {
                buffer_append_str(clang_option_95,((char*)(__right_value527=xsprintf("-target \%s",((char*)(__right_value526=charp_to_string(argv[i_112+1])))))));
                (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X614=(i_112+1<argc&&charp_operator_equals(argv[i_112],"-include")));            _condtional_value_X614;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value529=xsprintf("-iclude \%s",((char*)(__right_value528=charp_to_string(argv[i_112+1])))))));
                (__right_value528 = come_decrement_ref_count(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X615=(i_112+1<argc&&charp_operator_equals(argv[i_112],"-isystem")));            _condtional_value_X615;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value531=xsprintf("-isystem \%s",((char*)(__right_value530=charp_to_string(argv[i_112+1])))))));
                (__right_value530 = come_decrement_ref_count(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value531 = come_decrement_ref_count(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_95,((char*)(__right_value533=xsprintf("-isystem \%s",((char*)(__right_value532=charp_to_string(argv[i_112+1])))))));
                (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X616=(i_112+1<argc&&charp_operator_equals(argv[i_112],"-T")));            _condtional_value_X616;            })) {
                buffer_append_str(clang_option_95,((char*)(__right_value535=xsprintf(" -T \%s ",((char*)(__right_value534=charp_to_string(argv[i_112+1])))))));
                (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value535 = come_decrement_ref_count(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_112++;
            }
            else if(({            (_condtional_value_X617=(charp_operator_equals(argv[i_112],"-common-header")));            _condtional_value_X617;            })) {
                gCommonHeader=(_Bool)1;
            }
            else if(({            (_condtional_value_X618=(charp_operator_equals(argv[i_112],"-original-position")));            _condtional_value_X618;            })) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(({            (_condtional_value_X619=(string_operator_equals(((char*)(__right_value537=charp_operator_load_range_element(argv[i_112],0,2))),"-O")));            (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _condtional_value_X619;            })) {
                buffer_append_str(clang_option_95,((char*)(__right_value539=xsprintf(" \%s ",((char*)(__right_value538=charp_to_string(argv[i_112])))))));
                (__right_value538 = come_decrement_ref_count(__right_value538, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value539 = come_decrement_ref_count(__right_value539, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_debug_106=(_Bool)0;
            }
            else if(({            (_condtional_value_X620=(string_operator_equals(((char*)(__right_value541=charp_operator_load_range_element(argv[i_112],0,2))),"-D")));            (__right_value540 = come_decrement_ref_count(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value541 = come_decrement_ref_count(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _condtional_value_X620;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value543=xsprintf(" \%s ",((char*)(__right_value542=charp_to_string(argv[i_112])))))));
                (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value543 = come_decrement_ref_count(__right_value543, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_95,((char*)(__right_value545=xsprintf(" \%s ",((char*)(__right_value544=charp_to_string(argv[i_112])))))));
                (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X621=(string_operator_equals(((char*)(__right_value547=charp_operator_load_range_element(argv[i_112],0,2))),"-U")));            (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _condtional_value_X621;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value549=xsprintf(" \%s ",((char*)(__right_value548=charp_to_string(argv[i_112])))))));
                (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value549 = come_decrement_ref_count(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_95,((char*)(__right_value551=xsprintf(" \%s ",((char*)(__right_value550=charp_to_string(argv[i_112])))))));
                (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value551 = come_decrement_ref_count(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X622=(charp_operator_equals(argv[i_112],"-g")));            _condtional_value_X622;            })) {
                buffer_append_str(clang_option_95,"-g ");
            }
            else if(({            (_condtional_value_X623=(charp_operator_equals(argv[i_112],"-v")));            _condtional_value_X623;            })) {
                buffer_append_str(clang_option_95,"-v ");
                buffer_append_str(cpp_option_97,"-v ");
                verbose_105=(_Bool)1;
            }
            else if(({            (_condtional_value_X624=(strlen(argv[i_112])>=2&&memcmp(argv[i_112],"-I",strlen("-I"))==0));            _condtional_value_X624;            })) {
                buffer_append_str(cpp_option_97,((char*)(__right_value554=string_operator_add(((char*)(__right_value553=charp_operator_add(" ",argv[i_112])))," "))));
                (__right_value552 = come_decrement_ref_count(__right_value552, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X625=(charp_operator_equals(argv[i_112],"-gdwarf-4")));            _condtional_value_X625;            })) {
                buffer_append_str(clang_option_95,"-gdwarf-4 ");
            }
            else if(({            (_condtional_value_X626=(charp_operator_equals(argv[i_112],"-S")));            _condtional_value_X626;            })) {
                output_source_file_flag_102=(_Bool)1;
                output_object_file_flag_103=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(({            (_condtional_value_X627=(charp_operator_equals(argv[i_112],"-s")));            _condtional_value_X627;            })) {
                output_source_file_flag_102=(_Bool)1;
                output_object_file_flag_103=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(({            (_condtional_value_X628=(charp_operator_equals(argv[i_112],"-c")));            _condtional_value_X628;            })) {
                output_object_file_100=(_Bool)1;
            }
            else if(({            (_condtional_value_X629=(charp_operator_equals(argv[i_112],"-E")));            _condtional_value_X629;            })) {
                output_cpp_file_101=(_Bool)1;
            }
            else if(({            (_condtional_value_X630=(argv[i_112][0]==45));            _condtional_value_X630;            })) {
                buffer_append_str(clang_option_95,((char*)(__right_value555=charp_operator_add(argv[i_112]," "))));
                (__right_value555 = come_decrement_ref_count(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X631=(strlen(argv[i_112])>2&&memcmp(argv[i_112]+strlen(argv[i_112])-2,".o",2)==0));            _condtional_value_X631;            })) {
                list$1char$ph_push_back(object_files_99,(char*)come_increment_ref_count(__builtin_string(argv[i_112])));
            }
            else if(({            (_condtional_value_X632=(strlen(argv[i_112])>2&&memcmp(argv[i_112]+strlen(argv[i_112])-2,".a",2)==0));            _condtional_value_X632;            })) {
                list$1char$ph_push_back(object_files_99,(char*)come_increment_ref_count(__builtin_string(argv[i_112])));
            }
            else if(({            (_condtional_value_X633=(string_operator_equals(ext_name_113,"c")));            _condtional_value_X633;            })) {
                list$1char$ph_push_back(files_98,(char*)come_increment_ref_count(__builtin_string(argv[i_112])));
            }
            else {
                buffer_append_str(clang_option_95,((char*)(__right_value559=charp_operator_add(argv[i_112]," "))));
                (__right_value559 = come_decrement_ref_count(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (ext_name_113 = come_decrement_ref_count(ext_name_113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        output_source_file_flag_102=(_Bool)1;
        gComeOriginalSourcePosition=(_Bool)0;
        gComeDebug=come_debug_106;
        gComeMalloc=come_malloc_107;
        for(        ({        (_condtional_value_X634=(o2_saved=(struct list$1char$ph*)come_increment_ref_count(files_98),it=list$1char$ph_begin(o2_saved)));        _condtional_value_X634;        });        ({        (_condtional_value_X635=(!list$1char$ph_end(o2_saved)));        _condtional_value_X635;        });        ({        (_condtional_value_X636=(it=list$1char$ph_next(o2_saved)));        _condtional_value_X636;        })        ){
            memset(&info_116,0,sizeof(struct sInfo));
            Value_117=fopen(it,"r");
            if(({            (_condtional_value_X637=(Value_117));            _condtional_value_X637;            })) {
                fclose(Value_117);
            }
            else {
                come_call_finalizer(sInfo_finalize, (&info_116), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                continue;
            }
            __dec_obj64=info_116.sname,
            info_116.sname=(char*)come_increment_ref_count(__builtin_string(it));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info_116.sline=1;
            info_116.err_num=0;
            __dec_obj65=info_116.clang_option,
            info_116.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_95));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj66=info_116.cpp_option,
            info_116.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_97));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj67=info_116.linker_option,
            info_116.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_96));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info_116.no_output_err=(_Bool)0;
            __dec_obj68=info_116.funcs,
            info_116.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1182, "struct map$2char$phsFun$ph*"))));
            come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj69=info_116.uniq_funcs,
            info_116.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1183, "struct map$2char$phsFun$ph*"))));
            come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj70=info_116.struct_definition,
            info_116.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1184, "struct map$2char$phbuffer$ph*"))));
            come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj71=info_116.uniq_definition,
            info_116.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1185, "struct map$2char$phchar$ph*"))));
            come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj72=info_116.previous_struct_definition,
            info_116.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1186, "struct map$2char$phbuffer$ph*"))));
            come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj73=info_116.generics_funcs,
            info_116.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1187, "struct map$2char$phsGenericsFun$ph*"))));
            come_call_finalizer(map$2char$phsGenericsFun$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj74=info_116.classes,
            info_116.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1188, "struct map$2char$phsClass$ph*"))));
            come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj75=info_116.modules,
            info_116.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1189, "struct map$2char$phsClassModule$ph*"))));
            come_call_finalizer(map$2char$phsClassModule$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj76=info_116.types,
            info_116.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1190, "struct map$2char$phsType$ph*"))));
            come_call_finalizer(map$2char$phsType$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj77=info_116.module,
            info_116.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1191, "struct sModule*"))));
            come_call_finalizer(sModule_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj78=info_116.right_value_objects,
            info_116.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1192, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj79=info_116.stack,
            info_116.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1193, "struct list$1CVALUE$ph*"))));
            come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj80=info_116.gv_table,
            info_116.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1194, "struct sVarTable*")),(_Bool)1,((void*)0)));
            come_call_finalizer(sVarTable_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            lv_table_118=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1195, "struct sVarTable*")),(_Bool)0,((void*)0)));
            info_116.lv_table=lv_table_118;
            __dec_obj81=info_116.generics_type_names,
            info_116.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1197, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj82=info_116.method_generics_type_names,
            info_116.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1198, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj83=info_116.generics_classes,
            info_116.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1199, "struct map$2char$phsClass$ph*"))));
            come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info_116.verbose=verbose_105;
            info_116.m5stack_cpp=m5stack_cpp_108;
            info_116.pico_cpp=pico_cpp_109;
            info_116.emb_cpp=emb_cpp_110;
            info_116.gcc_compiler=gcc_compiler_111;
            init_classes(&info_116);
            clear_tmp_file(&info_116);
            Value_119=cpp(&info_116);
            if(({            (_condtional_value_X638=(!Value_119));            _condtional_value_X638;            })) {
                printf("transpile failed\n");
                exit(2);
            }
            else {
            }
            __dec_obj84=info_116.source,
            info_116.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value599=charp_read(((char*)(__right_value598=xsprintf("%s.i",it))))))));
            come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (__right_value598 = come_decrement_ref_count(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value599 = come_decrement_ref_count(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info_116.p=info_116.source->buf;
            info_116.head=info_116.source->buf;
            if(({            (_condtional_value_X639=(output_file_name_104));            _condtional_value_X639;            })) {
                __dec_obj85=info_116.output_file_name,
                info_116.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_104));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj86=info_116.output_file_name,
                info_116.output_file_name=((void*)0);
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            Value_120=output_cpp_file_101;
            if(({            (_condtional_value_X640=(!Value_120));            _condtional_value_X640;            })) {
                transpile(&info_116);
                Value_121=output_source_file(&info_116);
                if(({                (_condtional_value_X641=(!Value_121));                _condtional_value_X641;                })) {
                    printf("output source file faield\n");
                    exit(2);
                }
                else {
                }
                if(({                (_condtional_value_X642=(info_116.err_num>0));                _condtional_value_X642;                })) {
                    printf("transpile error. err num %d\n",info_116.err_num);
                    exit(2);
                }
                Value_122=output_object_file_flag_103;
                if(({                (_condtional_value_X643=(Value_122));                _condtional_value_X643;                })) {
                    Value_123=compile(&info_116,output_object_file_100,object_files_99);
                    if(({                    (_condtional_value_X644=(!Value_123));                    _condtional_value_X644;                    })) {
                        printf("compile faield\n");
                        exit(27);
                    }
                    else {
                    }
                }
                else {
                }
            }
            else {
            }
            if(({            (_condtional_value_X645=(output_cpp_file_101));            _condtional_value_X645;            })) {
            }
            else if(({            (_condtional_value_X646=(info_116.err_num>0));            _condtional_value_X646;            })) {
            }
            else if(({            (_condtional_value_X647=(output_source_file_flag_102));            _condtional_value_X647;            })) {
                clear_tmp_file_without_object_file_and_ccfile(&info_116);
            }
            else {
                clear_tmp_file_without_object_file(&info_116);
            }
            come_call_finalizer(sInfo_finalize, (&info_116), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sVarTable_finalize, lv_table_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X648=(!output_object_file_100&&!output_cpp_file_101&&(list$1char$ph_length(files_98)>0||list$1char$ph_length(object_files_99)>0)));        _condtional_value_X648;        })) {
            memset(&info_124,0,sizeof(struct sInfo));
            __dec_obj87=info_124.sname,
            info_124.sname=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value602=list$1char$ph_operator_load_element(files_98,0))), "02transpile.c", 1265, "char*"));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj88=info_124.clang_option,
            info_124.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_95));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj89=info_124.linker_option,
            info_124.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_96));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info_124.verbose=verbose_105;
            if(({            (_condtional_value_X655=(output_file_name_104));            _condtional_value_X655;            })) {
                __dec_obj90=info_124.output_file_name,
                info_124.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_104));
                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj91=info_124.output_file_name,
                info_124.output_file_name=((void*)0);
                __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X656=(output_object_file_flag_103));            _condtional_value_X656;            })) {
                Value_125=linker(&info_124,object_files_99);
                if(({                (_condtional_value_X657=(!Value_125));                _condtional_value_X657;                })) {
                    printf("linker faield\n");
                    exit(13);
                }
                else {
                }
            }
            if(({            (_condtional_value_X658=(!output_cpp_file_101&&!output_source_file_flag_102));            _condtional_value_X658;            })) {
                clear_tmp_file(&info_124);
            }
            come_call_finalizer(sInfo_finalize, (&info_124), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (output_file_name_str_94 = come_decrement_ref_count(output_file_name_str_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, clang_option_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, linker_option_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, cpp_option_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, files_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, object_files_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (output_file_name_104 = come_decrement_ref_count(output_file_name_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    return 0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__44;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__44 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

static char* list$1char$ph_join(struct list$1char$ph* self, char* sep){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct buffer* buf;
int n;
char* it;
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
_Bool _condtional_value_X308;
_Bool _condtional_value_X310;
void* __right_value370 = (void*)0;
char* __result_obj__45;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 1894, "struct buffer*"))));
    n=0;
    for(    ({    (_condtional_value_X306=(it=list$1char$ph_begin(self)));    _condtional_value_X306;    });    ({    (_condtional_value_X307=(!list$1char$ph_end(self)));    _condtional_value_X307;    });    ({    (_condtional_value_X308=(it=list$1char$ph_next(self)));    _condtional_value_X308;    })    ){
        buffer_append_str(buf,it);
        if(({        (_condtional_value_X310=(n<list$1char$ph_length(self)-1));        _condtional_value_X310;        })) {
            buffer_append_str(buf,sep);
        }
        n++;
    }
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value370=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__45;
}

static int list$1char$ph_length(struct list$1char$ph* self){
_Bool _condtional_value_X309;
    if(({    (_condtional_value_X309=(self==((void*)0)));    _condtional_value_X309;    })) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
int i;
_Bool _condtional_value_X312;
_Bool _condtional_value_X313;
_Bool _condtional_value_X314;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1char$ph* __dec_obj36;
struct map$2char$phsFun$ph* __result_obj__47;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value381=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value382=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value383=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X312=(i=0));    _condtional_value_X312;    });    ({    (_condtional_value_X313=(i<128));    _condtional_value_X313;    });    ({    (_condtional_value_X314=(i++));    _condtional_value_X314;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj36=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__47 = (struct map$2char$phsFun$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__46;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__46 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it;
_Bool _condtional_value_X315;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X315=(it!=((void*)0)));    _condtional_value_X315;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X316;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X316=(it!=((void*)0)));    _condtional_value_X316;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i;
_Bool _condtional_value_X317;
_Bool _condtional_value_X318;
_Bool _condtional_value_X319;
_Bool _condtional_value_X320;
_Bool _condtional_value_X321;
int i_68;
_Bool _condtional_value_X346;
_Bool _condtional_value_X347;
_Bool _condtional_value_X348;
_Bool _condtional_value_X349;
_Bool _condtional_value_X350;
    for(    ({    (_condtional_value_X317=(i=0));    _condtional_value_X317;    });    ({    (_condtional_value_X318=(i<self->size));    _condtional_value_X318;    });    ({    (_condtional_value_X319=(i++));    _condtional_value_X319;    })    ){
        if(({        (_condtional_value_X320=(self->item_existance[i]));        _condtional_value_X320;        })) {
            if(({            (_condtional_value_X321=(1));            _condtional_value_X321;            })) {
                come_call_finalizer(sFun_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X346=(i_68=0));    _condtional_value_X346;    });    ({    (_condtional_value_X347=(i_68<self->size));    _condtional_value_X347;    });    ({    (_condtional_value_X348=(i_68++));    _condtional_value_X348;    })    ){
        if(({        (_condtional_value_X349=(self->item_existance[i_68]));        _condtional_value_X349;        })) {
            if(({            (_condtional_value_X350=(1));            _condtional_value_X350;            })) {
                (self->keys[i_68] = come_decrement_ref_count(self->keys[i_68], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X322;
_Bool _condtional_value_X323;
_Bool _condtional_value_X324;
_Bool _condtional_value_X325;
_Bool _condtional_value_X326;
_Bool _condtional_value_X327;
_Bool _condtional_value_X328;
_Bool _condtional_value_X335;
_Bool _condtional_value_X338;
_Bool _condtional_value_X339;
_Bool _condtional_value_X340;
_Bool _condtional_value_X341;
_Bool _condtional_value_X342;
_Bool _condtional_value_X343;
_Bool _condtional_value_X344;
_Bool _condtional_value_X345;
    if(({    (_condtional_value_X322=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X322;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X323=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X323;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X324=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X324;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X325=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X325;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X326=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X326;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X327=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X327;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X328=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X328;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X335=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X335;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X338=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X338;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X339=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X339;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X340=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X340;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X341=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X341;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X342=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X342;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X343=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X343;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X344=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X344;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X345=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X345;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X329;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X329=(it!=((void*)0)));    _condtional_value_X329;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X330;
    if(({    (_condtional_value_X330=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X330;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X331;
_Bool _condtional_value_X332;
_Bool _condtional_value_X333;
_Bool _condtional_value_X334;
    if(({    (_condtional_value_X331=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X331;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X332=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X332;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X333=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X333;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X334=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X334;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
    if(({    (_condtional_value_X336=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X336;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X337=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X337;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self){
int i;
_Bool _condtional_value_X351;
_Bool _condtional_value_X352;
_Bool _condtional_value_X353;
_Bool _condtional_value_X354;
_Bool _condtional_value_X355;
int i_69;
_Bool _condtional_value_X356;
_Bool _condtional_value_X357;
_Bool _condtional_value_X358;
_Bool _condtional_value_X359;
_Bool _condtional_value_X360;
    for(    ({    (_condtional_value_X351=(i=0));    _condtional_value_X351;    });    ({    (_condtional_value_X352=(i<self->size));    _condtional_value_X352;    });    ({    (_condtional_value_X353=(i++));    _condtional_value_X353;    })    ){
        if(({        (_condtional_value_X354=(self->item_existance[i]));        _condtional_value_X354;        })) {
            if(({            (_condtional_value_X355=(1));            _condtional_value_X355;            })) {
                come_call_finalizer(sFun_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X356=(i_69=0));    _condtional_value_X356;    });    ({    (_condtional_value_X357=(i_69<self->size));    _condtional_value_X357;    });    ({    (_condtional_value_X358=(i_69++));    _condtional_value_X358;    })    ){
        if(({        (_condtional_value_X359=(self->item_existance[i_69]));        _condtional_value_X359;        })) {
            if(({            (_condtional_value_X360=(1));            _condtional_value_X360;            })) {
                (self->keys[i_69] = come_decrement_ref_count(self->keys[i_69], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self){
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
int i;
_Bool _condtional_value_X361;
_Bool _condtional_value_X362;
_Bool _condtional_value_X363;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1char$ph* __dec_obj39;
struct map$2char$phbuffer$ph* __result_obj__48;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value390=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value391=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct buffer**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value392=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X361=(i=0));    _condtional_value_X361;    });    ({    (_condtional_value_X362=(i<128));    _condtional_value_X362;    });    ({    (_condtional_value_X363=(i++));    _condtional_value_X363;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj39=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__48 = (struct map$2char$phbuffer$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i;
_Bool _condtional_value_X364;
_Bool _condtional_value_X365;
_Bool _condtional_value_X366;
_Bool _condtional_value_X367;
_Bool _condtional_value_X368;
int i_70;
_Bool _condtional_value_X369;
_Bool _condtional_value_X370;
_Bool _condtional_value_X371;
_Bool _condtional_value_X372;
_Bool _condtional_value_X373;
    for(    ({    (_condtional_value_X364=(i=0));    _condtional_value_X364;    });    ({    (_condtional_value_X365=(i<self->size));    _condtional_value_X365;    });    ({    (_condtional_value_X366=(i++));    _condtional_value_X366;    })    ){
        if(({        (_condtional_value_X367=(self->item_existance[i]));        _condtional_value_X367;        })) {
            if(({            (_condtional_value_X368=(1));            _condtional_value_X368;            })) {
                come_call_finalizer(buffer_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X369=(i_70=0));    _condtional_value_X369;    });    ({    (_condtional_value_X370=(i_70<self->size));    _condtional_value_X370;    });    ({    (_condtional_value_X371=(i_70++));    _condtional_value_X371;    })    ){
        if(({        (_condtional_value_X372=(self->item_existance[i_70]));        _condtional_value_X372;        })) {
            if(({            (_condtional_value_X373=(1));            _condtional_value_X373;            })) {
                (self->keys[i_70] = come_decrement_ref_count(self->keys[i_70], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self){
int i;
_Bool _condtional_value_X374;
_Bool _condtional_value_X375;
_Bool _condtional_value_X376;
_Bool _condtional_value_X377;
_Bool _condtional_value_X378;
int i_71;
_Bool _condtional_value_X379;
_Bool _condtional_value_X380;
_Bool _condtional_value_X381;
_Bool _condtional_value_X382;
_Bool _condtional_value_X383;
    for(    ({    (_condtional_value_X374=(i=0));    _condtional_value_X374;    });    ({    (_condtional_value_X375=(i<self->size));    _condtional_value_X375;    });    ({    (_condtional_value_X376=(i++));    _condtional_value_X376;    })    ){
        if(({        (_condtional_value_X377=(self->item_existance[i]));        _condtional_value_X377;        })) {
            if(({            (_condtional_value_X378=(1));            _condtional_value_X378;            })) {
                come_call_finalizer(buffer_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X379=(i_71=0));    _condtional_value_X379;    });    ({    (_condtional_value_X380=(i_71<self->size));    _condtional_value_X380;    });    ({    (_condtional_value_X381=(i_71++));    _condtional_value_X381;    })    ){
        if(({        (_condtional_value_X382=(self->item_existance[i_71]));        _condtional_value_X382;        })) {
            if(({            (_condtional_value_X383=(1));            _condtional_value_X383;            })) {
                (self->keys[i_71] = come_decrement_ref_count(self->keys[i_71], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
int i;
_Bool _condtional_value_X384;
_Bool _condtional_value_X385;
_Bool _condtional_value_X386;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1char$ph* __dec_obj41;
struct map$2char$phchar$ph* __result_obj__49;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value397=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value398=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value399=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X384=(i=0));    _condtional_value_X384;    });    ({    (_condtional_value_X385=(i<128));    _condtional_value_X385;    });    ({    (_condtional_value_X386=(i++));    _condtional_value_X386;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj41=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__49 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X387;
_Bool _condtional_value_X388;
_Bool _condtional_value_X389;
_Bool _condtional_value_X390;
_Bool _condtional_value_X391;
int i_72;
_Bool _condtional_value_X392;
_Bool _condtional_value_X393;
_Bool _condtional_value_X394;
_Bool _condtional_value_X395;
_Bool _condtional_value_X396;
    for(    ({    (_condtional_value_X387=(i=0));    _condtional_value_X387;    });    ({    (_condtional_value_X388=(i<self->size));    _condtional_value_X388;    });    ({    (_condtional_value_X389=(i++));    _condtional_value_X389;    })    ){
        if(({        (_condtional_value_X390=(self->item_existance[i]));        _condtional_value_X390;        })) {
            if(({            (_condtional_value_X391=(1));            _condtional_value_X391;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X392=(i_72=0));    _condtional_value_X392;    });    ({    (_condtional_value_X393=(i_72<self->size));    _condtional_value_X393;    });    ({    (_condtional_value_X394=(i_72++));    _condtional_value_X394;    })    ){
        if(({        (_condtional_value_X395=(self->item_existance[i_72]));        _condtional_value_X395;        })) {
            if(({            (_condtional_value_X396=(1));            _condtional_value_X396;            })) {
                (self->keys[i_72] = come_decrement_ref_count(self->keys[i_72], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X397;
_Bool _condtional_value_X398;
_Bool _condtional_value_X399;
_Bool _condtional_value_X400;
_Bool _condtional_value_X401;
int i_73;
_Bool _condtional_value_X402;
_Bool _condtional_value_X403;
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
_Bool _condtional_value_X406;
    for(    ({    (_condtional_value_X397=(i=0));    _condtional_value_X397;    });    ({    (_condtional_value_X398=(i<self->size));    _condtional_value_X398;    });    ({    (_condtional_value_X399=(i++));    _condtional_value_X399;    })    ){
        if(({        (_condtional_value_X400=(self->item_existance[i]));        _condtional_value_X400;        })) {
            if(({            (_condtional_value_X401=(1));            _condtional_value_X401;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X402=(i_73=0));    _condtional_value_X402;    });    ({    (_condtional_value_X403=(i_73<self->size));    _condtional_value_X403;    });    ({    (_condtional_value_X404=(i_73++));    _condtional_value_X404;    })    ){
        if(({        (_condtional_value_X405=(self->item_existance[i_73]));        _condtional_value_X405;        })) {
            if(({            (_condtional_value_X406=(1));            _condtional_value_X406;            })) {
                (self->keys[i_73] = come_decrement_ref_count(self->keys[i_73], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self){
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
int i;
_Bool _condtional_value_X407;
_Bool _condtional_value_X408;
_Bool _condtional_value_X409;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1char$ph* __dec_obj44;
struct map$2char$phsGenericsFun$ph* __result_obj__50;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value406=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value407=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sGenericsFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value408=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X407=(i=0));    _condtional_value_X407;    });    ({    (_condtional_value_X408=(i<128));    _condtional_value_X408;    });    ({    (_condtional_value_X409=(i++));    _condtional_value_X409;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj44=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__50 = (struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self){
int i;
_Bool _condtional_value_X410;
_Bool _condtional_value_X411;
_Bool _condtional_value_X412;
_Bool _condtional_value_X413;
_Bool _condtional_value_X414;
int i_74;
_Bool _condtional_value_X425;
_Bool _condtional_value_X426;
_Bool _condtional_value_X427;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
    for(    ({    (_condtional_value_X410=(i=0));    _condtional_value_X410;    });    ({    (_condtional_value_X411=(i<self->size));    _condtional_value_X411;    });    ({    (_condtional_value_X412=(i++));    _condtional_value_X412;    })    ){
        if(({        (_condtional_value_X413=(self->item_existance[i]));        _condtional_value_X413;        })) {
            if(({            (_condtional_value_X414=(1));            _condtional_value_X414;            })) {
                come_call_finalizer(sGenericsFun_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X425=(i_74=0));    _condtional_value_X425;    });    ({    (_condtional_value_X426=(i_74<self->size));    _condtional_value_X426;    });    ({    (_condtional_value_X427=(i_74++));    _condtional_value_X427;    })    ){
        if(({        (_condtional_value_X428=(self->item_existance[i_74]));        _condtional_value_X428;        })) {
            if(({            (_condtional_value_X429=(1));            _condtional_value_X429;            })) {
                (self->keys[i_74] = come_decrement_ref_count(self->keys[i_74], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
_Bool _condtional_value_X415;
_Bool _condtional_value_X416;
_Bool _condtional_value_X417;
_Bool _condtional_value_X418;
_Bool _condtional_value_X419;
_Bool _condtional_value_X420;
_Bool _condtional_value_X421;
_Bool _condtional_value_X422;
_Bool _condtional_value_X423;
_Bool _condtional_value_X424;
    if(({    (_condtional_value_X415=(self!=((void*)0)&&self->mImplType!=((void*)0)));    _condtional_value_X415;    })) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X416=(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)));    _condtional_value_X416;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X417=(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)));    _condtional_value_X417;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X418=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X418;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X419=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X419;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X420=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X420;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X421=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X421;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X422=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X422;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X423=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X423;    })) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X424=(self!=((void*)0)&&self->mGenericsSName!=((void*)0)));    _condtional_value_X424;    })) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self){
int i;
_Bool _condtional_value_X430;
_Bool _condtional_value_X431;
_Bool _condtional_value_X432;
_Bool _condtional_value_X433;
_Bool _condtional_value_X434;
int i_75;
_Bool _condtional_value_X435;
_Bool _condtional_value_X436;
_Bool _condtional_value_X437;
_Bool _condtional_value_X438;
_Bool _condtional_value_X439;
    for(    ({    (_condtional_value_X430=(i=0));    _condtional_value_X430;    });    ({    (_condtional_value_X431=(i<self->size));    _condtional_value_X431;    });    ({    (_condtional_value_X432=(i++));    _condtional_value_X432;    })    ){
        if(({        (_condtional_value_X433=(self->item_existance[i]));        _condtional_value_X433;        })) {
            if(({            (_condtional_value_X434=(1));            _condtional_value_X434;            })) {
                come_call_finalizer(sGenericsFun_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X435=(i_75=0));    _condtional_value_X435;    });    ({    (_condtional_value_X436=(i_75<self->size));    _condtional_value_X436;    });    ({    (_condtional_value_X437=(i_75++));    _condtional_value_X437;    })    ){
        if(({        (_condtional_value_X438=(self->item_existance[i_75]));        _condtional_value_X438;        })) {
            if(({            (_condtional_value_X439=(1));            _condtional_value_X439;            })) {
                (self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self){
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
int i;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
_Bool _condtional_value_X442;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1char$ph* __dec_obj46;
struct map$2char$phsClass$ph* __result_obj__51;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value413=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value414=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sClass**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value415=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X440=(i=0));    _condtional_value_X440;    });    ({    (_condtional_value_X441=(i<128));    _condtional_value_X441;    });    ({    (_condtional_value_X442=(i++));    _condtional_value_X442;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj46=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__51 = (struct map$2char$phsClass$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsClass$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsClass$ph$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self){
int i;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
_Bool _condtional_value_X445;
_Bool _condtional_value_X446;
_Bool _condtional_value_X447;
int i_76;
_Bool _condtional_value_X448;
_Bool _condtional_value_X449;
_Bool _condtional_value_X450;
_Bool _condtional_value_X451;
_Bool _condtional_value_X452;
    for(    ({    (_condtional_value_X443=(i=0));    _condtional_value_X443;    });    ({    (_condtional_value_X444=(i<self->size));    _condtional_value_X444;    });    ({    (_condtional_value_X445=(i++));    _condtional_value_X445;    })    ){
        if(({        (_condtional_value_X446=(self->item_existance[i]));        _condtional_value_X446;        })) {
            if(({            (_condtional_value_X447=(1));            _condtional_value_X447;            })) {
                come_call_finalizer(sClass_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X448=(i_76=0));    _condtional_value_X448;    });    ({    (_condtional_value_X449=(i_76<self->size));    _condtional_value_X449;    });    ({    (_condtional_value_X450=(i_76++));    _condtional_value_X450;    })    ){
        if(({        (_condtional_value_X451=(self->item_existance[i_76]));        _condtional_value_X451;        })) {
            if(({            (_condtional_value_X452=(1));            _condtional_value_X452;            })) {
                (self->keys[i_76] = come_decrement_ref_count(self->keys[i_76], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self){
int i;
_Bool _condtional_value_X453;
_Bool _condtional_value_X454;
_Bool _condtional_value_X455;
_Bool _condtional_value_X456;
_Bool _condtional_value_X457;
int i_77;
_Bool _condtional_value_X458;
_Bool _condtional_value_X459;
_Bool _condtional_value_X460;
_Bool _condtional_value_X461;
_Bool _condtional_value_X462;
    for(    ({    (_condtional_value_X453=(i=0));    _condtional_value_X453;    });    ({    (_condtional_value_X454=(i<self->size));    _condtional_value_X454;    });    ({    (_condtional_value_X455=(i++));    _condtional_value_X455;    })    ){
        if(({        (_condtional_value_X456=(self->item_existance[i]));        _condtional_value_X456;        })) {
            if(({            (_condtional_value_X457=(1));            _condtional_value_X457;            })) {
                come_call_finalizer(sClass_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X458=(i_77=0));    _condtional_value_X458;    });    ({    (_condtional_value_X459=(i_77<self->size));    _condtional_value_X459;    });    ({    (_condtional_value_X460=(i_77++));    _condtional_value_X460;    })    ){
        if(({        (_condtional_value_X461=(self->item_existance[i_77]));        _condtional_value_X461;        })) {
            if(({            (_condtional_value_X462=(1));            _condtional_value_X462;            })) {
                (self->keys[i_77] = come_decrement_ref_count(self->keys[i_77], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self){
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
int i;
_Bool _condtional_value_X463;
_Bool _condtional_value_X464;
_Bool _condtional_value_X465;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1char$ph* __dec_obj48;
struct map$2char$phsClassModule$ph* __result_obj__52;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value420=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value421=(struct sClassModule**)come_calloc_v2(1, sizeof(struct sClassModule*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sClassModule**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value422=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X463=(i=0));    _condtional_value_X463;    });    ({    (_condtional_value_X464=(i<128));    _condtional_value_X464;    });    ({    (_condtional_value_X465=(i++));    _condtional_value_X465;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj48=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__52 = (struct map$2char$phsClassModule$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self){
int i;
_Bool _condtional_value_X466;
_Bool _condtional_value_X467;
_Bool _condtional_value_X468;
_Bool _condtional_value_X469;
_Bool _condtional_value_X470;
int i_78;
_Bool _condtional_value_X475;
_Bool _condtional_value_X476;
_Bool _condtional_value_X477;
_Bool _condtional_value_X478;
_Bool _condtional_value_X479;
    for(    ({    (_condtional_value_X466=(i=0));    _condtional_value_X466;    });    ({    (_condtional_value_X467=(i<self->size));    _condtional_value_X467;    });    ({    (_condtional_value_X468=(i++));    _condtional_value_X468;    })    ){
        if(({        (_condtional_value_X469=(self->item_existance[i]));        _condtional_value_X469;        })) {
            if(({            (_condtional_value_X470=(1));            _condtional_value_X470;            })) {
                come_call_finalizer(sClassModule_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X475=(i_78=0));    _condtional_value_X475;    });    ({    (_condtional_value_X476=(i_78<self->size));    _condtional_value_X476;    });    ({    (_condtional_value_X477=(i_78++));    _condtional_value_X477;    })    ){
        if(({        (_condtional_value_X478=(self->item_existance[i_78]));        _condtional_value_X478;        })) {
            if(({            (_condtional_value_X479=(1));            _condtional_value_X479;            })) {
                (self->keys[i_78] = come_decrement_ref_count(self->keys[i_78], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sClassModule_finalize(struct sClassModule* self){
_Bool _condtional_value_X471;
_Bool _condtional_value_X472;
_Bool _condtional_value_X473;
_Bool _condtional_value_X474;
    if(({    (_condtional_value_X471=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X471;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X472=(self!=((void*)0)&&self->mText!=((void*)0)));    _condtional_value_X472;    })) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X473=(self!=((void*)0)&&self->mParams!=((void*)0)));    _condtional_value_X473;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X474=(self!=((void*)0)&&self->mSName!=((void*)0)));    _condtional_value_X474;    })) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self){
int i;
_Bool _condtional_value_X480;
_Bool _condtional_value_X481;
_Bool _condtional_value_X482;
_Bool _condtional_value_X483;
_Bool _condtional_value_X484;
int i_79;
_Bool _condtional_value_X485;
_Bool _condtional_value_X486;
_Bool _condtional_value_X487;
_Bool _condtional_value_X488;
_Bool _condtional_value_X489;
    for(    ({    (_condtional_value_X480=(i=0));    _condtional_value_X480;    });    ({    (_condtional_value_X481=(i<self->size));    _condtional_value_X481;    });    ({    (_condtional_value_X482=(i++));    _condtional_value_X482;    })    ){
        if(({        (_condtional_value_X483=(self->item_existance[i]));        _condtional_value_X483;        })) {
            if(({            (_condtional_value_X484=(1));            _condtional_value_X484;            })) {
                come_call_finalizer(sClassModule_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X485=(i_79=0));    _condtional_value_X485;    });    ({    (_condtional_value_X486=(i_79<self->size));    _condtional_value_X486;    });    ({    (_condtional_value_X487=(i_79++));    _condtional_value_X487;    })    ){
        if(({        (_condtional_value_X488=(self->item_existance[i_79]));        _condtional_value_X488;        })) {
            if(({            (_condtional_value_X489=(1));            _condtional_value_X489;            })) {
                (self->keys[i_79] = come_decrement_ref_count(self->keys[i_79], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self){
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
int i;
_Bool _condtional_value_X490;
_Bool _condtional_value_X491;
_Bool _condtional_value_X492;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1char$ph* __dec_obj50;
struct map$2char$phsType$ph* __result_obj__53;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value427=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value428=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sType**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value429=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X490=(i=0));    _condtional_value_X490;    });    ({    (_condtional_value_X491=(i<128));    _condtional_value_X491;    });    ({    (_condtional_value_X492=(i++));    _condtional_value_X492;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj50=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__53 = (struct map$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsType$ph$p_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self){
int i;
_Bool _condtional_value_X493;
_Bool _condtional_value_X494;
_Bool _condtional_value_X495;
_Bool _condtional_value_X496;
_Bool _condtional_value_X497;
int i_80;
_Bool _condtional_value_X498;
_Bool _condtional_value_X499;
_Bool _condtional_value_X500;
_Bool _condtional_value_X501;
_Bool _condtional_value_X502;
    for(    ({    (_condtional_value_X493=(i=0));    _condtional_value_X493;    });    ({    (_condtional_value_X494=(i<self->size));    _condtional_value_X494;    });    ({    (_condtional_value_X495=(i++));    _condtional_value_X495;    })    ){
        if(({        (_condtional_value_X496=(self->item_existance[i]));        _condtional_value_X496;        })) {
            if(({            (_condtional_value_X497=(1));            _condtional_value_X497;            })) {
                come_call_finalizer(sType_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X498=(i_80=0));    _condtional_value_X498;    });    ({    (_condtional_value_X499=(i_80<self->size));    _condtional_value_X499;    });    ({    (_condtional_value_X500=(i_80++));    _condtional_value_X500;    })    ){
        if(({        (_condtional_value_X501=(self->item_existance[i_80]));        _condtional_value_X501;        })) {
            if(({            (_condtional_value_X502=(1));            _condtional_value_X502;            })) {
                (self->keys[i_80] = come_decrement_ref_count(self->keys[i_80], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self){
int i;
_Bool _condtional_value_X503;
_Bool _condtional_value_X504;
_Bool _condtional_value_X505;
_Bool _condtional_value_X506;
_Bool _condtional_value_X507;
int i_81;
_Bool _condtional_value_X508;
_Bool _condtional_value_X509;
_Bool _condtional_value_X510;
_Bool _condtional_value_X511;
_Bool _condtional_value_X512;
    for(    ({    (_condtional_value_X503=(i=0));    _condtional_value_X503;    });    ({    (_condtional_value_X504=(i<self->size));    _condtional_value_X504;    });    ({    (_condtional_value_X505=(i++));    _condtional_value_X505;    })    ){
        if(({        (_condtional_value_X506=(self->item_existance[i]));        _condtional_value_X506;        })) {
            if(({            (_condtional_value_X507=(1));            _condtional_value_X507;            })) {
                come_call_finalizer(sType_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X508=(i_81=0));    _condtional_value_X508;    });    ({    (_condtional_value_X509=(i_81<self->size));    _condtional_value_X509;    });    ({    (_condtional_value_X510=(i_81++));    _condtional_value_X510;    })    ){
        if(({        (_condtional_value_X511=(self->item_existance[i_81]));        _condtional_value_X511;        })) {
            if(({            (_condtional_value_X512=(1));            _condtional_value_X512;            })) {
                (self->keys[i_81] = come_decrement_ref_count(self->keys[i_81], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
_Bool _condtional_value_X513;
_Bool _condtional_value_X514;
_Bool _condtional_value_X515;
_Bool _condtional_value_X516;
_Bool _condtional_value_X517;
_Bool _condtional_value_X518;
    if(({    (_condtional_value_X513=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X513;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X514=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X514;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X515=(self!=((void*)0)&&self->mLastCode!=((void*)0)));    _condtional_value_X515;    })) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X516=(self!=((void*)0)&&self->mLastCode2!=((void*)0)));    _condtional_value_X516;    })) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X517=(self!=((void*)0)&&self->mHeader!=((void*)0)));    _condtional_value_X517;    })) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X518=(self!=((void*)0)&&self->mHeaderStructs!=((void*)0)));    _condtional_value_X518;    })) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeaderStructs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__54;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
_Bool _condtional_value_X519;
struct list_item$1sRightValueObject$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X519=(it!=((void*)0)));    _condtional_value_X519;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
_Bool _condtional_value_X520;
    if(({    (_condtional_value_X520=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X520;    })) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
_Bool _condtional_value_X521;
_Bool _condtional_value_X522;
_Bool _condtional_value_X523;
_Bool _condtional_value_X524;
_Bool _condtional_value_X525;
    if(({    (_condtional_value_X521=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X521;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X522=(self!=((void*)0)&&self->mVarName!=((void*)0)));    _condtional_value_X522;    })) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X523=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X523;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X524=(self!=((void*)0)&&self->mObjType!=((void*)0)));    _condtional_value_X524;    })) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X525=(self!=((void*)0)&&self->mObjValue!=((void*)0)));    _condtional_value_X525;    })) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
_Bool _condtional_value_X526;
struct list_item$1sRightValueObject$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X526=(it!=((void*)0)));    _condtional_value_X526;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__55;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__55 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X527;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X527=(it!=((void*)0)));    _condtional_value_X527;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
_Bool _condtional_value_X528;
    if(({    (_condtional_value_X528=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X528;    })) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X529;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X529=(it!=((void*)0)));    _condtional_value_X529;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
_Bool _condtional_value_X533;
_Bool _condtional_value_X534;
_Bool _condtional_value_X535;
_Bool _condtional_value_X536;
_Bool _condtional_value_X537;
_Bool _condtional_value_X538;
_Bool _condtional_value_X539;
_Bool _condtional_value_X540;
_Bool _condtional_value_X541;
_Bool _condtional_value_X542;
_Bool _condtional_value_X543;
_Bool _condtional_value_X544;
_Bool _condtional_value_X545;
_Bool _condtional_value_X546;
_Bool _condtional_value_X547;
_Bool _condtional_value_X548;
_Bool _condtional_value_X549;
_Bool _condtional_value_X550;
_Bool _condtional_value_X551;
_Bool _condtional_value_X552;
_Bool _condtional_value_X553;
_Bool _condtional_value_X554;
_Bool _condtional_value_X555;
_Bool _condtional_value_X556;
_Bool _condtional_value_X557;
_Bool _condtional_value_X558;
_Bool _condtional_value_X559;
_Bool _condtional_value_X560;
_Bool _condtional_value_X561;
_Bool _condtional_value_X562;
_Bool _condtional_value_X563;
_Bool _condtional_value_X564;
_Bool _condtional_value_X565;
_Bool _condtional_value_X566;
_Bool _condtional_value_X567;
    if(({    (_condtional_value_X533=(self!=((void*)0)&&self->source!=((void*)0)));    _condtional_value_X533;    })) {
        come_call_finalizer(buffer_finalize, self->source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X534=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X534;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X535=(self!=((void*)0)&&self->sname_at_head!=((void*)0)));    _condtional_value_X535;    })) {
        (self->sname_at_head = come_decrement_ref_count(self->sname_at_head, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X536=(self!=((void*)0)&&self->base_sname!=((void*)0)));    _condtional_value_X536;    })) {
        (self->base_sname = come_decrement_ref_count(self->base_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X537=(self!=((void*)0)&&self->clang_option!=((void*)0)));    _condtional_value_X537;    })) {
        (self->clang_option = come_decrement_ref_count(self->clang_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X538=(self!=((void*)0)&&self->cpp_option!=((void*)0)));    _condtional_value_X538;    })) {
        (self->cpp_option = come_decrement_ref_count(self->cpp_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X539=(self!=((void*)0)&&self->linker_option!=((void*)0)));    _condtional_value_X539;    })) {
        (self->linker_option = come_decrement_ref_count(self->linker_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X540=(self!=((void*)0)&&self->funcs!=((void*)0)));    _condtional_value_X540;    })) {
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, self->funcs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X541=(self!=((void*)0)&&self->uniq_funcs!=((void*)0)));    _condtional_value_X541;    })) {
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, self->uniq_funcs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X542=(self!=((void*)0)&&self->generics_funcs!=((void*)0)));    _condtional_value_X542;    })) {
        come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, self->generics_funcs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X543=(self!=((void*)0)&&self->classes!=((void*)0)));    _condtional_value_X543;    })) {
        come_call_finalizer(map$2char$phsClass$ph$p_finalize, self->classes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X544=(self!=((void*)0)&&self->modules!=((void*)0)));    _condtional_value_X544;    })) {
        come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, self->modules, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X545=(self!=((void*)0)&&self->types!=((void*)0)));    _condtional_value_X545;    })) {
        come_call_finalizer(map$2char$phsType$ph$p_finalize, self->types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X546=(self!=((void*)0)&&self->generics_classes!=((void*)0)));    _condtional_value_X546;    })) {
        come_call_finalizer(map$2char$phsClass$ph$p_finalize, self->generics_classes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X547=(self!=((void*)0)&&self->struct_definition!=((void*)0)));    _condtional_value_X547;    })) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->struct_definition, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X548=(self!=((void*)0)&&self->previous_struct_definition!=((void*)0)));    _condtional_value_X548;    })) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->previous_struct_definition, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X549=(self!=((void*)0)&&self->module!=((void*)0)));    _condtional_value_X549;    })) {
        come_call_finalizer(sModule_finalize, self->module, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X550=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X550;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X551=(self!=((void*)0)&&self->right_value_objects!=((void*)0)));    _condtional_value_X551;    })) {
        come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self->right_value_objects, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X552=(self!=((void*)0)&&self->generics_type!=((void*)0)));    _condtional_value_X552;    })) {
        come_call_finalizer(sType_finalize, self->generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X553=(self!=((void*)0)&&self->method_generics_types!=((void*)0)));    _condtional_value_X553;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X554=(self!=((void*)0)&&self->stack!=((void*)0)));    _condtional_value_X554;    })) {
        come_call_finalizer(list$1CVALUE$ph$p_finalize, self->stack, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X555=(self!=((void*)0)&&self->come_function_result_type!=((void*)0)));    _condtional_value_X555;    })) {
        come_call_finalizer(sType_finalize, self->come_function_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X556=(self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)));    _condtional_value_X556;    })) {
        come_call_finalizer(sType_finalize, self->come_method_block_function_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X557=(self!=((void*)0)&&self->gv_table!=((void*)0)));    _condtional_value_X557;    })) {
        come_call_finalizer(sVarTable_finalize, self->gv_table, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X558=(self!=((void*)0)&&self->generics_type_names!=((void*)0)));    _condtional_value_X558;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X559=(self!=((void*)0)&&self->method_generics_type_names!=((void*)0)));    _condtional_value_X559;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->method_generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X560=(self!=((void*)0)&&self->impl_type!=((void*)0)));    _condtional_value_X560;    })) {
        come_call_finalizer(sType_finalize, self->impl_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X561=(self!=((void*)0)&&self->class_type!=((void*)0)));    _condtional_value_X561;    })) {
        come_call_finalizer(sType_finalize, self->class_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X562=(self!=((void*)0)&&self->output_file_name!=((void*)0)));    _condtional_value_X562;    })) {
        (self->output_file_name = come_decrement_ref_count(self->output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X563=(self!=((void*)0)&&self->function_result_type!=((void*)0)));    _condtional_value_X563;    })) {
        come_call_finalizer(sType_finalize, self->function_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X564=(self!=((void*)0)&&self->module_params!=((void*)0)));    _condtional_value_X564;    })) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->module_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X565=(self!=((void*)0)&&self->if_result_var_name!=((void*)0)));    _condtional_value_X565;    })) {
        (self->if_result_var_name = come_decrement_ref_count(self->if_result_var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X566=(self!=((void*)0)&&self->match_it_var!=((void*)0)));    _condtional_value_X566;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->match_it_var, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X567=(self!=((void*)0)&&self->uniq_definition!=((void*)0)));    _condtional_value_X567;    })) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->uniq_definition, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X649;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X650;
_Bool _condtional_value_X651;
char* __result_obj__56;
char* default_value;
char* __result_obj__57;
default_value = (void*)0;
    if(({    (_condtional_value_X649=(position<0));    _condtional_value_X649;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X650=(it!=((void*)0)));    _condtional_value_X650;    })) {
        if(({        (_condtional_value_X651=(position==i));        _condtional_value_X651;        })) {
            __result_obj__56 = (char*)come_increment_ref_count(it->item);
            (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__56;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__57 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X652;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X653;
_Bool _condtional_value_X654;
char* __result_obj__58;
char* default_value;
char* __result_obj__59;
default_value = (void*)0;
    if(({    (_condtional_value_X652=(position<0));    _condtional_value_X652;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X653=(it!=((void*)0)));    _condtional_value_X653;    })) {
        if(({        (_condtional_value_X654=(position==i));        _condtional_value_X654;        })) {
            __result_obj__58 = (char*)come_increment_ref_count(it->item);
            (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__58;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__59 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__59;
}

