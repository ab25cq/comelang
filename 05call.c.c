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

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
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
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct list$1sType$ph* method_generics_types;
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

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sInnerAttribute
{
    int sline;
    char* sname;
    int sline_real;
    char* attr;
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
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX597, unsigned int anonymous_var_nameX598, int anonymous_var_nameX599);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
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
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sNode* create_output_node(char* contents, struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sNode* new_line_node(struct sInfo* info);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sNode* new_sname_node(struct sInfo* info);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sNode* new_func_node(struct sInfo* info);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
static void sWildCard_finalize(struct sWildCard* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char* attr, struct sInfo* info);
char* sInnerAttribute_kind(struct sInnerAttribute* self);
_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo* info);
static void sInnerAttribute_finalize(struct sInnerAttribute* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
char* parse_inner_attribute(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function

// body function
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value1 = (void*)0;
char* __dec_obj2;
struct sReturnNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sReturnNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
_Bool _condtional_value_X5;
struct sFun* come_fun;
void* __right_value42 = (void*)0;
struct sType* result_type;
void* __right_value43 = (void*)0;
struct sType* result_type2;
void* __right_value44 = (void*)0;
struct sType* __dec_obj28;
struct sType* result_type3;
_Bool _condtional_value_X113;
_Bool Value;
_Bool _condtional_value_X114;
_Bool __result_obj__19;
void* __right_value45 = (void*)0;
struct CVALUE* come_value;
void* __right_value46 = (void*)0;
struct sType* come_value_type;
void* __right_value47 = (void*)0;
struct sType* __dec_obj29;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
_Bool _condtional_value_X117;
_Bool _condtional_value_X118;
_Bool _condtional_value_X119;
void* __right_value51 = (void*)0;
char* type_name;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
struct list$1sVar$ph* o2_saved;
struct sVar* it;
_Bool _condtional_value_X124;
_Bool _condtional_value_X125;
_Bool _condtional_value_X128;
void* __right_value58 = (void*)0;
struct list$1sVar$ph* __dec_obj30;
_Bool _condtional_value_X136;
void* __right_value59 = (void*)0;
_Bool _condtional_value_X137;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct sFun* come_fun_8;
_Bool _condtional_value_X142;
_Bool _condtional_value_X143;
struct list$1sVar$ph* o2_saved_9;
struct sVar* it_10;
_Bool _condtional_value_X144;
_Bool _condtional_value_X145;
_Bool _condtional_value_X146;
void* __right_value64 = (void*)0;
struct list$1sVar$ph* __dec_obj31;
_Bool _condtional_value_X147;
void* __right_value65 = (void*)0;
    if(({    (_condtional_value_X5=(self->value));    _condtional_value_X5;    })) {
        come_fun=info->come_fun;
        result_type=(struct sType*)come_increment_ref_count(sType_clone(come_fun->mResultType));
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj28=result_type2,
        result_type2=(struct sType*)come_increment_ref_count(solve_method_generics(result_type2,info));
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type3=result_type2->mNoSolvedGenericsType;
        if(({        (_condtional_value_X113=(result_type2->mNoSolvedGenericsType));        _condtional_value_X113;        })) {
            result_type3=result_type2->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(self->value,info);
        if(({        (_condtional_value_X114=(!Value));        _condtional_value_X114;        })) {
            __result_obj__19 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__19;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj29=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X115=(gComeC));        _condtional_value_X115;        })) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else if(({        (_condtional_value_X116=(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0)&&!existance_free_right_value_objects(info)));        _condtional_value_X116;        })) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else {
            static int result_num=0;
            result_num++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value50=make_define_var(result_type2,((char*)(__right_value49=xsprintf("__result_obj__\%s",((char*)(__right_value48=int_to_string(result_num)))))),(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value48 = come_decrement_ref_count(__right_value48, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(({            (_condtional_value_X117=(!info->come_fun->mNoResultType));            _condtional_value_X117;            })) {
                if(({                (_condtional_value_X118=(!gComeC||!(strlen(result_type2->mClass->mName)>strlen("tuple")&&memcmp(result_type2->mClass->mName,"tuple",strlen("tuple"))==0)));                _condtional_value_X118;                })) {
                    check_assign_type("result type",result_type2,come_value_type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(({                (_condtional_value_X119=(result_type2->mHeap));                _condtional_value_X119;                })) {
                    type_name=(char*)come_increment_ref_count(make_type_name_string(come_value->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
                    add_come_code(info,((char*)(__right_value53=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value52=int_to_string(result_num)))))),type_name,come_value->c_value);
                    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value55=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value54=int_to_string(result_num)))))),come_value->c_value);
                    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value57=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value56=int_to_string(result_num)))))),come_value->c_value);
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(({            (_condtional_value_X120=(info->block_level==1));            _condtional_value_X120;            })) {
                info->inhibits_output_code=(_Bool)1;
                if(({                (_condtional_value_X121=(info->match_it_var));                _condtional_value_X121;                })) {
                    for(                    ({                    (_condtional_value_X124=(o2_saved=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it=list$1sVar$ph_begin((o2_saved))));                    _condtional_value_X124;                    });                    ({                    (_condtional_value_X125=(!list$1sVar$ph_end((o2_saved))));                    _condtional_value_X125;                    });                    ({                    (_condtional_value_X128=(it=list$1sVar$ph_next((o2_saved))));                    _condtional_value_X128;                    })                    ){
                        free_object((struct sType*)come_increment_ref_count(sType_clone(it->mType)),it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    __dec_obj30=info->match_it_var,
                    info->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            if(({            (_condtional_value_X136=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")));            _condtional_value_X136;            })) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value59=xsprintf("come_heap_final();\n"))));
                (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(({            (_condtional_value_X137=(result_type2->mHeap));            _condtional_value_X137;            })) {
                free_object((struct sType*)come_increment_ref_count(result_type2),((char*)(__right_value61=xsprintf("__result_obj__\%s",((char*)(__right_value60=int_to_string(result_num)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0);
                (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value63=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value62=int_to_string(result_num)))))));
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_fun_8=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_8->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(({        (_condtional_value_X142=(info->block_level==1));        _condtional_value_X142;        })) {
            info->inhibits_output_code=(_Bool)1;
            if(({            (_condtional_value_X143=(info->match_it_var));            _condtional_value_X143;            })) {
                for(                ({                (_condtional_value_X144=(o2_saved_9=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_10=list$1sVar$ph_begin((o2_saved_9))));                _condtional_value_X144;                });                ({                (_condtional_value_X145=(!list$1sVar$ph_end((o2_saved_9))));                _condtional_value_X145;                });                ({                (_condtional_value_X146=(it_10=list$1sVar$ph_next((o2_saved_9))));                _condtional_value_X146;                })                ){
                    free_object((struct sType*)come_increment_ref_count(sType_clone(it_10->mType)),it_10->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                __dec_obj31=info->match_it_var,
                info->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(({        (_condtional_value_X147=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")));        _condtional_value_X147;        })) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value65=xsprintf("come_heap_final();\n"))));
            (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X1;
    if(({    (_condtional_value_X1=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X1;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
_Bool _condtional_value_X2;
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
    if(({    (_condtional_value_X2=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X2;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X3;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->value_source!=((void*)0)));    _condtional_value_X4;    })) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X6;
struct sType* __result_obj__3;
void* __right_value3 = (void*)0;
struct sType* result;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
_Bool _condtional_value_X31;
void* __right_value5 = (void*)0;
struct sType* __dec_obj4;
_Bool _condtional_value_X32;
void* __right_value13 = (void*)0;
struct list$1sType$ph* __dec_obj8;
_Bool _condtional_value_X39;
void* __right_value14 = (void*)0;
struct sType* __dec_obj9;
_Bool _condtional_value_X40;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
_Bool _condtional_value_X52;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj11;
_Bool _condtional_value_X53;
void* __right_value18 = (void*)0;
char* __dec_obj12;
_Bool _condtional_value_X54;
void* __right_value19 = (void*)0;
char* __dec_obj13;
_Bool _condtional_value_X55;
void* __right_value20 = (void*)0;
char* __dec_obj14;
_Bool _condtional_value_X56;
_Bool _condtional_value_X57;
_Bool _condtional_value_X58;
_Bool _condtional_value_X59;
_Bool _condtional_value_X60;
_Bool _condtional_value_X61;
_Bool _condtional_value_X62;
_Bool _condtional_value_X63;
_Bool _condtional_value_X64;
_Bool _condtional_value_X65;
_Bool _condtional_value_X66;
_Bool _condtional_value_X67;
_Bool _condtional_value_X68;
_Bool _condtional_value_X69;
_Bool _condtional_value_X70;
_Bool _condtional_value_X71;
_Bool _condtional_value_X72;
_Bool _condtional_value_X73;
_Bool _condtional_value_X74;
_Bool _condtional_value_X75;
_Bool _condtional_value_X76;
_Bool _condtional_value_X77;
_Bool _condtional_value_X78;
_Bool _condtional_value_X79;
_Bool _condtional_value_X80;
_Bool _condtional_value_X81;
void* __right_value21 = (void*)0;
char* __dec_obj15;
_Bool _condtional_value_X82;
_Bool _condtional_value_X83;
_Bool _condtional_value_X84;
_Bool _condtional_value_X85;
void* __right_value29 = (void*)0;
struct list$1sNode$ph* __dec_obj19;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
_Bool _condtional_value_X98;
void* __right_value30 = (void*)0;
char* __dec_obj20;
_Bool _condtional_value_X99;
_Bool _condtional_value_X100;
_Bool _condtional_value_X101;
void* __right_value31 = (void*)0;
struct list$1sType$ph* __dec_obj21;
_Bool _condtional_value_X102;
void* __right_value39 = (void*)0;
struct list$1char$ph* __dec_obj25;
_Bool _condtional_value_X109;
void* __right_value40 = (void*)0;
struct sType* __dec_obj26;
_Bool _condtional_value_X110;
_Bool _condtional_value_X111;
_Bool _condtional_value_X112;
void* __right_value41 = (void*)0;
struct sNode* __dec_obj27;
struct sType* __result_obj__18;
    if(({    (_condtional_value_X6=(self==(void*)0));    _condtional_value_X6;    })) {
        __result_obj__3 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__3;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X29=(self!=((void*)0)));    _condtional_value_X29;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X30=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X30;    })) {
        __dec_obj3=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X31=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X31;    })) {
        __dec_obj4=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X32=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X32;    })) {
        __dec_obj8=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X39=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X39;    })) {
        __dec_obj9=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X40=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X40;    })) {
        __dec_obj10=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X52=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X52;    })) {
        __dec_obj11=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X53=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X53;    })) {
        __dec_obj12=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X54=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X54;    })) {
        __dec_obj13=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X55=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X55;    })) {
        __dec_obj14=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X56=(self!=((void*)0)));    _condtional_value_X56;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X57=(self!=((void*)0)));    _condtional_value_X57;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X58=(self!=((void*)0)));    _condtional_value_X58;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X59=(self!=((void*)0)));    _condtional_value_X59;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X60=(self!=((void*)0)));    _condtional_value_X60;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X61=(self!=((void*)0)));    _condtional_value_X61;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X62=(self!=((void*)0)));    _condtional_value_X62;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X63=(self!=((void*)0)));    _condtional_value_X63;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X64=(self!=((void*)0)));    _condtional_value_X64;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X65=(self!=((void*)0)));    _condtional_value_X65;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X66=(self!=((void*)0)));    _condtional_value_X66;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X67=(self!=((void*)0)));    _condtional_value_X67;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X68=(self!=((void*)0)));    _condtional_value_X68;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X69=(self!=((void*)0)));    _condtional_value_X69;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X70=(self!=((void*)0)));    _condtional_value_X70;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X71=(self!=((void*)0)));    _condtional_value_X71;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X72=(self!=((void*)0)));    _condtional_value_X72;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X73=(self!=((void*)0)));    _condtional_value_X73;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X74=(self!=((void*)0)));    _condtional_value_X74;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X75=(self!=((void*)0)));    _condtional_value_X75;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X76=(self!=((void*)0)));    _condtional_value_X76;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X77=(self!=((void*)0)));    _condtional_value_X77;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X78=(self!=((void*)0)));    _condtional_value_X78;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X79=(self!=((void*)0)));    _condtional_value_X79;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X80=(self!=((void*)0)));    _condtional_value_X80;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X81=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X81;    })) {
        __dec_obj15=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X82=(self!=((void*)0)));    _condtional_value_X82;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X83=(self!=((void*)0)));    _condtional_value_X83;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X84=(self!=((void*)0)));    _condtional_value_X84;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X85=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X85;    })) {
        __dec_obj19=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X92=(self!=((void*)0)));    _condtional_value_X92;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X93=(self!=((void*)0)));    _condtional_value_X93;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X94=(self!=((void*)0)));    _condtional_value_X94;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)));    _condtional_value_X95;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)));    _condtional_value_X96;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)));    _condtional_value_X97;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X98;    })) {
        __dec_obj20=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X99=(self!=((void*)0)));    _condtional_value_X99;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X100=(self!=((void*)0)));    _condtional_value_X100;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X101=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X101;    })) {
        __dec_obj21=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X102=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X102;    })) {
        __dec_obj25=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X109=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X109;    })) {
        __dec_obj26=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X110=(self!=((void*)0)));    _condtional_value_X110;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X111=(self!=((void*)0)));    _condtional_value_X111;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X112=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X112;    })) {
        __dec_obj27=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__18 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X33;
struct list$1sType$ph* __result_obj__4;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X34;
_Bool _condtional_value_X35;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__7;
    if(({    (_condtional_value_X33=(self==((void*)0)));    _condtional_value_X33;    })) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__4;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X34=(it!=((void*)0)));    _condtional_value_X34;    })) {
        if(({        (_condtional_value_X35=(1));        _condtional_value_X35;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X36;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj5;
_Bool _condtional_value_X37;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj6;
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj7;
struct list$1sType$ph* __result_obj__6;
    if(({    (_condtional_value_X36=(self->len==0));    _condtional_value_X36;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj5=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X37=(self->len==1));    _condtional_value_X37;    })) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj6=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj7=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__6 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X38;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X38=(it!=((void*)0)));    _condtional_value_X38;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X41;
struct sNode* __result_obj__8;
void* __right_value15 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
_Bool _condtional_value_X47;
_Bool _condtional_value_X48;
_Bool _condtional_value_X49;
_Bool _condtional_value_X50;
_Bool _condtional_value_X51;
struct sNode* __result_obj__9;
    if(({    (_condtional_value_X41=(self==(void*)0));    _condtional_value_X41;    })) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__8;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X42=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X42;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X43=(self!=((void*)0)));    _condtional_value_X43;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X44=(self!=((void*)0)));    _condtional_value_X44;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X45=(self!=((void*)0)));    _condtional_value_X45;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X46=(self!=((void*)0)));    _condtional_value_X46;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X47=(self!=((void*)0)));    _condtional_value_X47;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X48=(self!=((void*)0)));    _condtional_value_X48;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X49=(self!=((void*)0)));    _condtional_value_X49;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X50=(self!=((void*)0)));    _condtional_value_X50;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X51=(self!=((void*)0)));    _condtional_value_X51;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X86;
struct list$1sNode$ph* __result_obj__10;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X87;
_Bool _condtional_value_X88;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __result_obj__13;
    if(({    (_condtional_value_X86=(self==((void*)0)));    _condtional_value_X86;    })) {
        __result_obj__10 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__10;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X87=(it!=((void*)0)));    _condtional_value_X87;    })) {
        if(({        (_condtional_value_X88=(1));        _condtional_value_X88;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X89;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj16;
_Bool _condtional_value_X90;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj17;
void* __right_value26 = (void*)0;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj18;
struct list$1sNode$ph* __result_obj__12;
    if(({    (_condtional_value_X89=(self->len==0));    _condtional_value_X89;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X90=(self->len==1));    _condtional_value_X90;    })) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj17=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value26=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj18=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X91;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X91=(it!=((void*)0)));    _condtional_value_X91;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X103;
struct list$1char$ph* __result_obj__14;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X104;
_Bool _condtional_value_X105;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct list$1char$ph* __result_obj__17;
    if(({    (_condtional_value_X103=(self==((void*)0)));    _condtional_value_X103;    })) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__14;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X104=(it!=((void*)0)));    _condtional_value_X104;    })) {
        if(({        (_condtional_value_X105=(1));        _condtional_value_X105;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it=it->next;
    }
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X106;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj22;
_Bool _condtional_value_X107;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_4;
char* __dec_obj23;
void* __right_value36 = (void*)0;
struct list_item$1char$ph* litem_5;
char* __dec_obj24;
struct list$1char$ph* __result_obj__16;
    if(({    (_condtional_value_X106=(self->len==0));    _condtional_value_X106;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj22=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X107=(self->len==1));    _condtional_value_X107;    })) {
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj23=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value36=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj24=litem_5->item,
        litem_5->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__16 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__16;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X108;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X108=(it!=((void*)0)));    _condtional_value_X108;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
_Bool _condtional_value_X122;
struct sVar* result;
struct sVar* __result_obj__20;
_Bool _condtional_value_X123;
struct sVar* __result_obj__21;
struct sVar* result_6;
struct sVar* __result_obj__22;
result = (void*)0;
result_6 = (void*)0;
    if(({    (_condtional_value_X122=(self==((void*)0)));    _condtional_value_X122;    })) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__20 = result;
        return __result_obj__20;
    }
    self->it=self->head;
    if(({    (_condtional_value_X123=(self->it));    _condtional_value_X123;    })) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_6,0,sizeof(struct sVar*));
    __result_obj__22 = result_6;
    return __result_obj__22;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
_Bool _condtional_value_X126;
struct sVar* result;
struct sVar* __result_obj__23;
_Bool _condtional_value_X127;
struct sVar* __result_obj__24;
struct sVar* result_7;
struct sVar* __result_obj__25;
result = (void*)0;
result_7 = (void*)0;
    if(({    (_condtional_value_X126=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X126;    })) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__23 = result;
        return __result_obj__23;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X127=(self->it));    _condtional_value_X127;    })) {
        __result_obj__24 = self->it->item;
        return __result_obj__24;
    }
    memset(&result_7,0,sizeof(struct sVar*));
    __result_obj__25 = result_7;
    return __result_obj__25;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X129;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X129=(it!=((void*)0)));    _condtional_value_X129;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X130;
    if(({    (_condtional_value_X130=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X130;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X131;
_Bool _condtional_value_X132;
_Bool _condtional_value_X133;
_Bool _condtional_value_X134;
    if(({    (_condtional_value_X131=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X131;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X132=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X132;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X133=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X133;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X134=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X134;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X135;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X135=(it!=((void*)0)));    _condtional_value_X135;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X138;
_Bool _condtional_value_X139;
_Bool _condtional_value_X140;
_Bool _condtional_value_X141;
    if(({    (_condtional_value_X138=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X138;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X139=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X139;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X140=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X140;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X141=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X141;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
struct sNode* _inf_value1;
struct sReturnNode* _inf_obj_value1;
void* __right_value72 = (void*)0;
struct sNode* __result_obj__28;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 139, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value67=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 139, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__28 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value72=_inf_value1)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value72) ? __right_value72 = come_decrement_ref_count(__right_value72, ((struct sNode*)__right_value72)->finalize, ((struct sNode*)__right_value72)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__28) ? __result_obj__28 = come_decrement_ref_count(__result_obj__28, ((struct sNode*)__result_obj__28)->finalize, ((struct sNode*)__result_obj__28)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__28;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
_Bool _condtional_value_X148;
struct sReturnNode* __result_obj__26;
void* __right_value68 = (void*)0;
struct sReturnNode* result;
_Bool _condtional_value_X149;
_Bool _condtional_value_X150;
void* __right_value69 = (void*)0;
char* __dec_obj32;
_Bool _condtional_value_X151;
_Bool _condtional_value_X152;
void* __right_value70 = (void*)0;
struct sNode* __dec_obj33;
_Bool _condtional_value_X153;
void* __right_value71 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result_obj__27;
    if(({    (_condtional_value_X148=(self==(void*)0));    _condtional_value_X148;    })) {
        __result_obj__26 = (void*)0;
        return __result_obj__26;
    }
    result=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(({    (_condtional_value_X149=(self!=((void*)0)));    _condtional_value_X149;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X150=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X150;    })) {
        __dec_obj32=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X151=(self!=((void*)0)));    _condtional_value_X151;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X152=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X152;    })) {
        __dec_obj33=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X153=(self!=((void*)0)&&self->value_source!=((void*)0)));    _condtional_value_X153;    })) {
        __dec_obj34=result->value_source,
        result->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__27 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value73 = (void*)0;
char* __dec_obj35;
struct sOutputNode* __result_obj__29;
    ((struct sNodeBase*)(__right_value73=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj35=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__29 = (struct sOutputNode*)come_increment_ref_count(self);
    come_call_finalizer(sOutputNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sOutputNode_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value74 = (void*)0;
char* __result_obj__30;
    __result_obj__30 = (char*)come_increment_ref_count(((char*)(__right_value74=__builtin_string("sOutputNode"))));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__30 = come_decrement_ref_count(__result_obj__30, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__30;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
void* __right_value75 = (void*)0;
    add_come_last_code(info,"%s",((char*)(__right_value75=string_operator_load_range_element(self->contents,1,-2))));
    (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
    if(({    (_condtional_value_X154=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X154;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X155=(self!=((void*)0)&&self->contents!=((void*)0)));    _condtional_value_X155;    })) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_output_node(char* contents, struct sInfo* info){
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sNode* _inf_value2;
struct sOutputNode* _inf_obj_value2;
void* __right_value82 = (void*)0;
struct sNode* __result_obj__33;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 166, "struct sNode");
    _inf_obj_value2=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value78=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 166, "struct sOutputNode*")),(char*)come_increment_ref_count(__builtin_string(contents)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sOutputNode_finalize;
    _inf_value2->clone=(void*)sOutputNode_clone;
    _inf_value2->compile=(void*)sOutputNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sOutputNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__33 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value82=_inf_value2)));
    come_call_finalizer(sOutputNode_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value82) ? __right_value82 = come_decrement_ref_count(__right_value82, ((struct sNode*)__right_value82)->finalize, ((struct sNode*)__right_value82)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__33;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
_Bool _condtional_value_X156;
struct sOutputNode* __result_obj__31;
void* __right_value79 = (void*)0;
struct sOutputNode* result;
_Bool _condtional_value_X157;
_Bool _condtional_value_X158;
void* __right_value80 = (void*)0;
char* __dec_obj36;
_Bool _condtional_value_X159;
_Bool _condtional_value_X160;
void* __right_value81 = (void*)0;
char* __dec_obj37;
struct sOutputNode* __result_obj__32;
    if(({    (_condtional_value_X156=(self==(void*)0));    _condtional_value_X156;    })) {
        __result_obj__31 = (void*)0;
        return __result_obj__31;
    }
    result=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(({    (_condtional_value_X157=(self!=((void*)0)));    _condtional_value_X157;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X158=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X158;    })) {
        __dec_obj36=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X159=(self!=((void*)0)));    _condtional_value_X159;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X160=(self!=((void*)0)&&self->contents!=((void*)0)));    _condtional_value_X160;    })) {
        __dec_obj37=result->contents,
        result->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__32 = result;
    come_call_finalizer(sOutputNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value83 = (void*)0;
char* __dec_obj38;
struct list$1sNode$ph* __dec_obj39;
struct sInlineAssembler* __result_obj__34;
    ((struct sNodeBase*)(__right_value83=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj38=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj39=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__34 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value84 = (void*)0;
char* __result_obj__35;
    __result_obj__35 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string("sInlineAssembler"))));
    (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__35 = come_decrement_ref_count(__result_obj__35, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__35;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct CVALUE* come_value;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf;
char* p;
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
_Bool _condtional_value_X166;
_Bool dquort;
int num_exp;
_Bool _condtional_value_X167;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
_Bool _condtional_value_X170;
void* __right_value89 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X177;
_Bool __result_obj__40;
void* __right_value90 = (void*)0;
struct CVALUE* come_value_11;
_Bool _condtional_value_X178;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
char* __dec_obj40;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct sType* __dec_obj41;
_Bool __result_obj__42;
    source=(char*)come_increment_ref_count(self->source);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 188, "struct CVALUE*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 190, "struct buffer*"))));
    p=source;
    while(({    (_condtional_value_X164=(*p!=40));    _condtional_value_X164;    })) {
        buffer_append_char(buf,*p);
        p++;
    }
    if(({    (_condtional_value_X165=(*p==40));    _condtional_value_X165;    })) {
        buffer_append_char(buf,*p);
        p++;
        while(({        (_condtional_value_X166=(*p==32||*p==9||*p==10));        _condtional_value_X166;        })) {
            buffer_append_char(buf,*p);
            p++;
        }
    }
    dquort=(_Bool)0;
    num_exp=0;
    while(({    (_condtional_value_X167=(*p));    _condtional_value_X167;    })) {
        if(({        (_condtional_value_X168=(*p==34));        _condtional_value_X168;        })) {
            buffer_append_char(buf,*p);
            p++;
            dquort=!dquort;
        }
        else if(({        (_condtional_value_X169=(dquort));        _condtional_value_X169;        })) {
            buffer_append_char(buf,*p);
            p++;
        }
        else if(({        (_condtional_value_X170=(*p==40));        _condtional_value_X170;        })) {
            buffer_append_char(buf,*p);
            p++;
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp++));
            Value=node_compile(node,info);
            if(({            (_condtional_value_X177=(!Value));            _condtional_value_X177;            })) {
                __result_obj__40 = (_Bool)0;
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__40;
            }
            else {
            }
            come_value_11=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf,come_value_11->c_value);
            if(({            (_condtional_value_X178=(*p==41));            _condtional_value_X178;            })) {
                buffer_append_char(buf,*p);
                p++;
            }
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            buffer_append_char(buf,*p);
            p++;
        }
    }
    __dec_obj40=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value92=buffer_to_string(buf)))));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj41=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 247, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__42 = (_Bool)1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
_Bool _condtional_value_X161;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
    if(({    (_condtional_value_X161=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X161;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X162=(self!=((void*)0)&&self->source!=((void*)0)));    _condtional_value_X162;    })) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X163=(self!=((void*)0)&&self->exps!=((void*)0)));    _condtional_value_X163;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _condtional_value_X171;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X172;
_Bool _condtional_value_X173;
struct sNode* __result_obj__36;
struct sNode* default_value;
struct sNode* __result_obj__37;
default_value = (void*)0;
    if(({    (_condtional_value_X171=(position<0));    _condtional_value_X171;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X172=(it!=((void*)0)));    _condtional_value_X172;    })) {
        if(({        (_condtional_value_X173=(position==i));        _condtional_value_X173;        })) {
            __result_obj__36 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__36) ? __result_obj__36 = come_decrement_ref_count(__result_obj__36, ((struct sNode*)__result_obj__36)->finalize, ((struct sNode*)__result_obj__36)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__36;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__37 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__37) ? __result_obj__37 = come_decrement_ref_count(__result_obj__37, ((struct sNode*)__result_obj__37)->finalize, ((struct sNode*)__result_obj__37)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__37;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _condtional_value_X174;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X175;
_Bool _condtional_value_X176;
struct sNode* __result_obj__38;
struct sNode* default_value;
struct sNode* __result_obj__39;
default_value = (void*)0;
    if(({    (_condtional_value_X174=(position<0));    _condtional_value_X174;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X175=(it!=((void*)0)));    _condtional_value_X175;    })) {
        if(({        (_condtional_value_X176=(position==i));        _condtional_value_X176;        })) {
            __result_obj__38 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__38) ? __result_obj__38 = come_decrement_ref_count(__result_obj__38, ((struct sNode*)__result_obj__38)->finalize, ((struct sNode*)__result_obj__38)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__38;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__39 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__39) ? __result_obj__39 = come_decrement_ref_count(__result_obj__39, ((struct sNode*)__result_obj__39)->finalize, ((struct sNode*)__result_obj__39)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__39;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X179;
void* __right_value97 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj42;
_Bool _condtional_value_X180;
void* __right_value98 = (void*)0;
struct list_item$1CVALUE$ph* litem_12;
struct CVALUE* __dec_obj43;
void* __right_value99 = (void*)0;
struct list_item$1CVALUE$ph* litem_13;
struct CVALUE* __dec_obj44;
struct list$1CVALUE$ph* __result_obj__41;
    if(({    (_condtional_value_X179=(self->len==0));    _condtional_value_X179;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value97=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj42=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X180=(self->len==1));    _condtional_value_X180;    })) {
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value98=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1CVALUE$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj43=litem_12->item,
        litem_12->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value99=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1CVALUE$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj44=litem_13->item,
        litem_13->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__41 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value100 = (void*)0;
struct sLineNode* __result_obj__43;
    ((struct sNodeBase*)(__right_value100=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value100, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__43 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLineNode_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value101 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string("sLineNode"))));
    (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct CVALUE* come_value;
void* __right_value104 = (void*)0;
char* __dec_obj45;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct sType* __dec_obj46;
_Bool __result_obj__45;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 272, "struct CVALUE*"))));
    __dec_obj45=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj46=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 275, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__45 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__45;
}

static void sLineNode_finalize(struct sLineNode* self){
_Bool _condtional_value_X181;
    if(({    (_condtional_value_X181=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X181;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* new_line_node(struct sInfo* info){
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct sNode* _inf_value3;
struct sLineNode* _inf_obj_value3;
void* __right_value112 = (void*)0;
struct sNode* __result_obj__48;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 288, "struct sNode");
    _inf_obj_value3=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value109=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 288, "struct sLineNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sLineNode_finalize;
    _inf_value3->clone=(void*)sLineNode_clone;
    _inf_value3->compile=(void*)sLineNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sLineNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__48 = ((struct sNode*)(__right_value112=_inf_value3));
    come_call_finalizer(sLineNode_finalize, __right_value109, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__48;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
_Bool _condtional_value_X182;
struct sLineNode* __result_obj__46;
void* __right_value110 = (void*)0;
struct sLineNode* result;
_Bool _condtional_value_X183;
_Bool _condtional_value_X184;
void* __right_value111 = (void*)0;
char* __dec_obj47;
_Bool _condtional_value_X185;
struct sLineNode* __result_obj__47;
    if(({    (_condtional_value_X182=(self==(void*)0));    _condtional_value_X182;    })) {
        __result_obj__46 = (void*)0;
        return __result_obj__46;
    }
    result=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(({    (_condtional_value_X183=(self!=((void*)0)));    _condtional_value_X183;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X184=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X184;    })) {
        __dec_obj47=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X185=(self!=((void*)0)));    _condtional_value_X185;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__47 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value113 = (void*)0;
struct sSNameNode* __result_obj__49;
    ((struct sNodeBase*)(__right_value113=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__49 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSNameNode_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value114 = (void*)0;
char* __result_obj__50;
    __result_obj__50 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string("sSNameNode"))));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__50;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct CVALUE* come_value;
void* __right_value117 = (void*)0;
char* __dec_obj48;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__51;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 305, "struct CVALUE*"))));
    __dec_obj48=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 308, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__51 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__51;
}

static void sSNameNode_finalize(struct sSNameNode* self){
_Bool _condtional_value_X186;
    if(({    (_condtional_value_X186=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X186;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* new_sname_node(struct sInfo* info){
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct sNode* _inf_value4;
struct sSNameNode* _inf_obj_value4;
void* __right_value125 = (void*)0;
struct sNode* __result_obj__54;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 321, "struct sNode");
    _inf_obj_value4=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value122=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 321, "struct sSNameNode*")),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sSNameNode_finalize;
    _inf_value4->clone=(void*)sSNameNode_clone;
    _inf_value4->compile=(void*)sSNameNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sSNameNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__54 = ((struct sNode*)(__right_value125=_inf_value4));
    come_call_finalizer(sSNameNode_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
_Bool _condtional_value_X187;
struct sSNameNode* __result_obj__52;
void* __right_value123 = (void*)0;
struct sSNameNode* result;
_Bool _condtional_value_X188;
_Bool _condtional_value_X189;
void* __right_value124 = (void*)0;
char* __dec_obj50;
_Bool _condtional_value_X190;
struct sSNameNode* __result_obj__53;
    if(({    (_condtional_value_X187=(self==(void*)0));    _condtional_value_X187;    })) {
        __result_obj__52 = (void*)0;
        return __result_obj__52;
    }
    result=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(({    (_condtional_value_X188=(self!=((void*)0)));    _condtional_value_X188;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X189=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X189;    })) {
        __dec_obj50=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X190=(self!=((void*)0)));    _condtional_value_X190;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__53 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value126 = (void*)0;
struct sFuncNode* __result_obj__55;
    ((struct sNodeBase*)(__right_value126=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value126, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__55 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFuncNode_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value127 = (void*)0;
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value127=__builtin_string("sFuncNode"))));
    (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct CVALUE* come_value;
void* __right_value130 = (void*)0;
char* __dec_obj51;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__57;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "struct CVALUE*"))));
    __dec_obj51=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj52=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 341, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__57 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

static void sFuncNode_finalize(struct sFuncNode* self){
_Bool _condtional_value_X191;
    if(({    (_condtional_value_X191=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X191;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* new_func_node(struct sInfo* info){
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sNode* _inf_value5;
struct sSNameNode* _inf_obj_value5;
void* __right_value136 = (void*)0;
struct sNode* __result_obj__58;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 355, "struct sNode");
    _inf_obj_value5=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value135=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 355, "struct sSNameNode*")),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sSNameNode_finalize;
    _inf_value5->clone=(void*)sSNameNode_clone;
    _inf_value5->compile=(void*)sSNameNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sSNameNode_kind;
    _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__58 = ((struct sNode*)(__right_value136=_inf_value5));
    come_call_finalizer(sSNameNode_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__58;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value137 = (void*)0;
struct sWildCard* __result_obj__59;
    ((struct sNodeBase*)(__right_value137=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__59 = (struct sWildCard*)come_increment_ref_count(self);
    come_call_finalizer(sWildCard_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sWildCard_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value138 = (void*)0;
char* __result_obj__60;
    __result_obj__60 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string("sWildCard"))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct sNode* value_node;
_Bool Value;
_Bool _condtional_value_X193;
_Bool __result_obj__61;
_Bool __result_obj__62;
    value_node=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value139=xsprintf("Value"))),info));
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    Value=node_compile(value_node,info);
    if(({    (_condtional_value_X193=(!Value));    _condtional_value_X193;    })) {
        __result_obj__61 = (_Bool)0;
        ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__61;
    }
    else {
    }
    __result_obj__62 = (_Bool)1;
    ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__62;
}

static void sWildCard_finalize(struct sWildCard* self){
_Bool _condtional_value_X192;
    if(({    (_condtional_value_X192=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X192;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value141 = (void*)0;
struct sCallerFuncNode* __result_obj__63;
    ((struct sNodeBase*)(__right_value141=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value141, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__63 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value142 = (void*)0;
char* __result_obj__64;
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string("sCallerFuncNode"))));
    (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__64;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X195;
void* __right_value145 = (void*)0;
char* __dec_obj53;
void* __right_value146 = (void*)0;
char* __dec_obj54;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__65;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 395, "struct CVALUE*"))));
    if(({    (_condtional_value_X195=(info->caller_fun));    _condtional_value_X195;    })) {
        __dec_obj53=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj54=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj55=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 403, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__65 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__65;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
_Bool _condtional_value_X194;
    if(({    (_condtional_value_X194=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X194;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value150 = (void*)0;
struct sCallerLineNode* __result_obj__66;
    ((struct sNodeBase*)(__right_value150=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value150, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__66 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct CVALUE* come_value;
void* __right_value153 = (void*)0;
char* __dec_obj56;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__67;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 424, "struct CVALUE*"))));
    __dec_obj56=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 427, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__67 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__67;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value157 = (void*)0;
char* __result_obj__68;
    __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("sCallerLineNode"))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__68;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
_Bool _condtional_value_X196;
    if(({    (_condtional_value_X196=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X196;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value158 = (void*)0;
struct sCallerSNameNode* __result_obj__69;
    ((struct sNodeBase*)(__right_value158=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value158, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__69 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct CVALUE* come_value;
void* __right_value161 = (void*)0;
char* __dec_obj58;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__70;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 452, "struct CVALUE*"))));
    __dec_obj58=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj59=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 455, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__70 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__70;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value165 = (void*)0;
char* __result_obj__71;
    __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string("sCallerSNameNode"))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__71;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
_Bool _condtional_value_X197;
    if(({    (_condtional_value_X197=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X197;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
char* __dec_obj60;
void* __right_value178 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj66;
struct list$1sType$ph* __dec_obj67;
struct buffer* __dec_obj68;
struct sFunCallNode* __result_obj__78;
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value166, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj60=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj66=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj67=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj68=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__78 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value179 = (void*)0;
char* __result_obj__79;
    __result_obj__79 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string("sFunCallNode"))));
    (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__79;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
_Bool _condtional_value_X218;
    if(({    (_condtional_value_X218=(self->method_block));    _condtional_value_X218;    })) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name;
struct list$1tuple2$2char$phsNode$ph$ph* params;
struct buffer* method_block;
int method_block_sline;
struct sVar* var_;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
struct sType* lambda_type;
_Bool _condtional_value_X221;
_Bool __result_obj__80;
void* __right_value180 = (void*)0;
struct sType* result_type;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct list$1CVALUE$ph* come_params;
_Bool _condtional_value_X226;
_Bool __result_obj__82;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool _condtional_value_X233;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label=0;
struct sNode* node=0;
_Bool Value;
_Bool _condtional_value_X234;
_Bool __result_obj__89;
void* __right_value183 = (void*)0;
struct CVALUE* come_value;
void* __right_value184 = (void*)0;
struct sType* __dec_obj69;
void* __right_value185 = (void*)0;
_Bool _condtional_value_X241;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
_Bool _condtional_value_X242;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_18;
struct CVALUE* it_20;
_Bool _condtional_value_X245;
_Bool _condtional_value_X246;
_Bool _condtional_value_X249;
_Bool _condtional_value_X251;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct CVALUE* come_value_22;
void* __right_value196 = (void*)0;
char* __dec_obj70;
void* __right_value197 = (void*)0;
struct sType* __dec_obj71;
_Bool _condtional_value_X252;
_Bool __result_obj__100;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool method_generics;
_Bool _condtional_value_X268;
_Bool _condtional_value_X270;
_Bool _condtional_value_X271;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1sType$ph* method_generics_types;
void* __right_value202 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name=0;
struct sGenericsFun* gfun=0;
char* generics_fun_name;
void* __right_value203 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X296;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1CVALUE$ph* come_params_23;
void* __right_value206 = (void*)0;
struct sFun* fun_24;
_Bool no_output_come_code;
_Bool _condtional_value_X297;
_Bool __result_obj__109;
void* __right_value207 = (void*)0;
struct CVALUE* method_block_node;
void* __right_value208 = (void*)0;
struct sType* method_block_lambda_type;
void* __right_value209 = (void*)0;
struct sType* method_block_result_type;
void* __right_value210 = (void*)0;
struct sType* generics_fun_method_block_lambda_type;
struct sType* generics_fun_method_block_result_type;
_Bool _condtional_value_X304;
int method_generics_num;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
int n;
struct list$1sType$ph* o2_saved_28;
struct sType* it_30;
_Bool _condtional_value_X317;
_Bool _condtional_value_X318;
_Bool _condtional_value_X321;
_Bool _condtional_value_X322;
int method_generics_num_32;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1CVALUE$ph* come_params_33;
int i_34;
struct sType* result_type_35;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_36;
struct tuple2$2char$phsNode$ph* it_37;
_Bool _condtional_value_X323;
_Bool _condtional_value_X324;
_Bool _condtional_value_X325;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_38=0;
struct sNode* node_39=0;
_Bool Value_40;
_Bool _condtional_value_X326;
_Bool __result_obj__123;
void* __right_value222 = (void*)0;
struct CVALUE* come_value_41;
void* __right_value223 = (void*)0;
struct sType* __dec_obj76;
_Bool _condtional_value_X329;
int method_generics_num_44;
_Bool _condtional_value_X330;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
int n_45;
struct list$1sType$ph* o2_saved_46;
struct sType* it_47;
_Bool _condtional_value_X331;
_Bool _condtional_value_X332;
_Bool _condtional_value_X333;
_Bool _condtional_value_X334;
int method_generics_num_48;
_Bool _condtional_value_X335;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_55=0;
struct sGenericsFun* gfun_56=0;
char* __dec_obj80;
void* __right_value234 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_57=0;
struct sGenericsFun* gfun_58=0;
char* __dec_obj81;
_Bool _condtional_value_X367;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1CVALUE$ph* come_params_59;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_60;
struct tuple2$2char$phsNode$ph* it_61;
_Bool _condtional_value_X368;
_Bool _condtional_value_X369;
_Bool _condtional_value_X370;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_62=0;
struct sNode* node_63=0;
_Bool Value_64;
_Bool _condtional_value_X371;
_Bool __result_obj__130;
void* __right_value237 = (void*)0;
struct CVALUE* come_value_65;
void* __right_value238 = (void*)0;
struct sType* __dec_obj82;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct buffer* buf_66;
int j_67;
struct list$1CVALUE$ph* o2_saved_68;
struct CVALUE* it_69;
_Bool _condtional_value_X372;
_Bool _condtional_value_X373;
_Bool _condtional_value_X374;
_Bool _condtional_value_X375;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct CVALUE* come_value_70;
void* __right_value243 = (void*)0;
char* __dec_obj83;
_Bool _condtional_value_X376;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct sType* __dec_obj84;
_Bool _condtional_value_X377;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sType* __dec_obj85;
_Bool _condtional_value_X378;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sType* __dec_obj86;
_Bool _condtional_value_X379;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sType* __dec_obj87;
_Bool _condtional_value_X380;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sType* __dec_obj88;
_Bool _condtional_value_X381;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sType* __dec_obj89;
_Bool _condtional_value_X382;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sType* __dec_obj90;
_Bool _condtional_value_X383;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* __dec_obj91;
_Bool _condtional_value_X384;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* __dec_obj92;
_Bool _condtional_value_X385;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj93;
_Bool _condtional_value_X386;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sType* __dec_obj94;
_Bool _condtional_value_X387;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sType* __dec_obj95;
_Bool _condtional_value_X388;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj96;
_Bool _condtional_value_X389;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* __dec_obj97;
_Bool _condtional_value_X390;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sType* __dec_obj98;
_Bool _condtional_value_X391;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sType* __dec_obj99;
_Bool _condtional_value_X392;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* __dec_obj100;
_Bool _condtional_value_X393;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* __dec_obj101;
_Bool _condtional_value_X394;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sType* __dec_obj102;
_Bool _condtional_value_X395;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __dec_obj103;
_Bool _condtional_value_X396;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj104;
_Bool _condtional_value_X397;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj105;
_Bool _condtional_value_X398;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj106;
_Bool _condtional_value_X399;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj107;
_Bool _condtional_value_X400;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj108;
_Bool _condtional_value_X401;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj109;
_Bool _condtional_value_X402;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj110;
_Bool _condtional_value_X403;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj111;
_Bool _condtional_value_X404;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* __dec_obj112;
_Bool _condtional_value_X405;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj113;
_Bool _condtional_value_X406;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sType* __dec_obj114;
_Bool _condtional_value_X407;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj115;
_Bool _condtional_value_X408;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* __dec_obj116;
_Bool _condtional_value_X409;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj117;
_Bool _condtional_value_X410;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj118;
_Bool _condtional_value_X411;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj119;
_Bool _condtional_value_X412;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sType* __dec_obj120;
_Bool __result_obj__131;
_Bool _condtional_value_X413;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct list$1CVALUE$ph* come_params_71;
int i_72;
struct sType* result_type_73;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_74;
struct tuple2$2char$phsNode$ph* it_75;
_Bool _condtional_value_X414;
_Bool _condtional_value_X415;
_Bool _condtional_value_X416;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_76=0;
struct sNode* node_77=0;
_Bool Value_78;
_Bool _condtional_value_X417;
_Bool __result_obj__132;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_79;
void* __right_value349 = (void*)0;
struct sType* __dec_obj121;
struct sType* __dec_obj122;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct buffer* buf_80;
int j_81;
struct list$1CVALUE$ph* o2_saved_82;
struct CVALUE* it_83;
_Bool _condtional_value_X418;
_Bool _condtional_value_X419;
_Bool _condtional_value_X420;
_Bool _condtional_value_X421;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_84;
void* __right_value354 = (void*)0;
char* __dec_obj123;
struct sType* __dec_obj124;
_Bool __result_obj__133;
_Bool _condtional_value_X422;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1CVALUE$ph* come_params_85;
int i_86;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_87;
struct tuple2$2char$phsNode$ph* it_88;
_Bool _condtional_value_X423;
_Bool _condtional_value_X424;
_Bool _condtional_value_X425;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_89=0;
struct sNode* node_90=0;
_Bool Value_91;
_Bool _condtional_value_X426;
_Bool __result_obj__134;
void* __right_value357 = (void*)0;
struct CVALUE* come_value_92;
void* __right_value358 = (void*)0;
struct sType* __dec_obj125;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct buffer* buf_93;
int j_94;
struct list$1CVALUE$ph* o2_saved_95;
struct CVALUE* it_96;
_Bool _condtional_value_X427;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
_Bool _condtional_value_X430;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* result_type_97;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_98;
void* __right_value366 = (void*)0;
char* __dec_obj126;
struct sType* __dec_obj127;
_Bool __result_obj__135;
_Bool _condtional_value_X431;
void* __right_value367 = (void*)0;
char* __dec_obj128;
_Bool _condtional_value_X432;
void* __right_value368 = (void*)0;
char* __dec_obj129;
_Bool _condtional_value_X433;
char* p;
int version;
_Bool _condtional_value_X434;
_Bool _condtional_value_X435;
char* p2;
_Bool _condtional_value_X436;
int i_99;
_Bool _condtional_value_X437;
_Bool _condtional_value_X438;
_Bool _condtional_value_X439;
void* __right_value369 = (void*)0;
char* new_fun_name;
void* __right_value370 = (void*)0;
_Bool _condtional_value_X450;
void* __right_value371 = (void*)0;
char* __dec_obj130;
_Bool _condtional_value_X451;
void* __right_value372 = (void*)0;
char* new_fun_name_100;
void* __right_value373 = (void*)0;
_Bool _condtional_value_X452;
void* __right_value374 = (void*)0;
char* __dec_obj131;
_Bool _condtional_value_X453;
_Bool __result_obj__144;
int i_101;
_Bool _condtional_value_X454;
_Bool _condtional_value_X455;
_Bool _condtional_value_X456;
void* __right_value375 = (void*)0;
char* new_fun_name_102;
void* __right_value376 = (void*)0;
_Bool _condtional_value_X457;
void* __right_value377 = (void*)0;
char* __dec_obj132;
void* __right_value378 = (void*)0;
struct sFun* fun_103;
_Bool _condtional_value_X458;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1CVALUE$ph* come_params_104;
int i_105;
struct sType* result_type_106;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_107;
struct tuple2$2char$phsNode$ph* it_108;
_Bool _condtional_value_X459;
_Bool _condtional_value_X460;
_Bool _condtional_value_X461;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_109=0;
struct sNode* node_110=0;
_Bool Value_111;
_Bool _condtional_value_X462;
_Bool __result_obj__145;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_112;
void* __right_value382 = (void*)0;
struct sType* __dec_obj133;
struct sType* __dec_obj134;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct buffer* buf_113;
int j_114;
struct list$1CVALUE$ph* o2_saved_115;
struct CVALUE* it_116;
_Bool _condtional_value_X463;
_Bool _condtional_value_X464;
_Bool _condtional_value_X465;
_Bool _condtional_value_X466;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_117;
void* __right_value387 = (void*)0;
char* __dec_obj135;
struct sType* __dec_obj136;
_Bool __result_obj__146;
void* __right_value388 = (void*)0;
struct sType* result_type_118;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved_119;
struct sType* it_120;
_Bool _condtional_value_X467;
_Bool _condtional_value_X468;
_Bool _condtional_value_X469;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* it2;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* __dec_obj137;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct list$1CVALUE$ph* come_params_121;
int i_122;
_Bool _condtional_value_X470;
_Bool _condtional_value_X471;
_Bool _condtional_value_X472;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_123;
struct tuple2$2char$phsNode$ph* it_124;
_Bool _condtional_value_X473;
_Bool _condtional_value_X474;
_Bool _condtional_value_X475;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_125=0;
struct sNode* node_126=0;
_Bool _condtional_value_X476;
_Bool _condtional_value_X477;
_Bool Value_127;
_Bool _condtional_value_X478;
_Bool __result_obj__147;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_128;
void* __right_value398 = (void*)0;
struct sType* __dec_obj138;
int n_129;
struct list$1char$ph* o2_saved_130;
char* it_132;
_Bool _condtional_value_X481;
_Bool _condtional_value_X482;
_Bool _condtional_value_X485;
_Bool _condtional_value_X486;
void* __right_value399 = (void*)0;
_Bool _condtional_value_X487;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
_Bool _condtional_value_X488;
void* __right_value406 = (void*)0;
int i_135;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_136;
struct tuple2$2char$phsNode$ph* it_137;
_Bool _condtional_value_X497;
_Bool _condtional_value_X498;
_Bool _condtional_value_X499;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_138=0;
struct sNode* node_139=0;
_Bool _condtional_value_X500;
_Bool Value_140;
_Bool _condtional_value_X501;
_Bool __result_obj__156;
void* __right_value407 = (void*)0;
struct CVALUE* come_value_141;
void* __right_value408 = (void*)0;
struct sType* __dec_obj140;
_Bool _condtional_value_X502;
void* __right_value409 = (void*)0;
_Bool _condtional_value_X503;
_Bool _condtional_value_X504;
_Bool Value_142;
_Bool _condtional_value_X505;
_Bool __result_obj__157;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_143;
void* __right_value411 = (void*)0;
struct sType* __dec_obj141;
_Bool _condtional_value_X506;
void* __right_value412 = (void*)0;
_Bool _condtional_value_X507;
void* __right_value413 = (void*)0;
_Bool _condtional_value_X508;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
_Bool _condtional_value_X509;
void* __right_value420 = (void*)0;
_Bool _condtional_value_X510;
void* __right_value421 = (void*)0;
_Bool _condtional_value_X511;
_Bool _condtional_value_X512;
_Bool _condtional_value_X513;
_Bool _condtional_value_X514;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
char* default_param;
void* __right_value424 = (void*)0;
char* param_name;
void* __right_value425 = (void*)0;
_Bool _condtional_value_X521;
struct buffer* source;
char* p_144;
char* head;
int sline;
void* __right_value426 = (void*)0;
struct buffer* __dec_obj142;
void* __right_value427 = (void*)0;
struct sNode* node_145;
_Bool Value_146;
_Bool _condtional_value_X522;
_Bool __result_obj__162;
struct buffer* __dec_obj143;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_147;
void* __right_value429 = (void*)0;
struct sType* __dec_obj144;
void* __right_value430 = (void*)0;
_Bool _condtional_value_X523;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
_Bool _condtional_value_X524;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
_Bool _condtional_value_X525;
_Bool __result_obj__163;
_Bool _condtional_value_X526;
_Bool __result_obj__164;
_Bool _condtional_value_X527;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value443 = (void*)0;
struct sNode* current_stack_frame_node;
_Bool Value_148;
_Bool _condtional_value_X533;
_Bool __result_obj__167;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_149;
void* __right_value445 = (void*)0;
struct sType* __dec_obj146;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct buffer* method_block2;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* method_block_type;
void* __right_value450 = (void*)0;
char* class_name;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sClass* current_stack_frame_struct;
void* __right_value453 = (void*)0;
int num_method_block;
_Bool _condtional_value_X552;
_Bool __result_obj__176;
void* __right_value454 = (void*)0;
struct sType* result_type_150;
void* __right_value455 = (void*)0;
struct sType* result_type2;
void* __right_value456 = (void*)0;
struct list$1sType$ph* param_types_151;
struct list$1char$ph* param_names;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct buffer* all_alhabet_sname;
char* p_152;
_Bool _condtional_value_X553;
_Bool _condtional_value_X554;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1sType$ph* o2_saved_153;
struct sType* it_154;
_Bool _condtional_value_X555;
_Bool _condtional_value_X556;
_Bool _condtional_value_X557;
struct sType* param_type;
_Bool _condtional_value_X558;
void* __right_value461 = (void*)0;
char* param_name_155;
void* __right_value462 = (void*)0;
_Bool _condtional_value_X559;
void* __right_value463 = (void*)0;
char* param_name_156;
void* __right_value464 = (void*)0;
struct sType* param_type2;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
char* param_name_157;
void* __right_value467 = (void*)0;
struct sType* param_type2_158;
void* __right_value468 = (void*)0;
_Bool _condtional_value_X560;
void* __right_value469 = (void*)0;
struct buffer* source3;
char* p_159;
char* head_160;
int sline_161;
struct buffer* __dec_obj147;
void* __right_value470 = (void*)0;
struct sNode* node_162;
_Bool Value_163;
_Bool _condtional_value_X561;
_Bool __result_obj__177;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* method_block_name;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct CVALUE* come_value2;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X562;
_Bool __result_obj__178;
struct sType* method_block_type2;
void* __right_value477 = (void*)0;
char* __dec_obj148;
void* __right_value478 = (void*)0;
struct sType* __dec_obj149;
struct buffer* __dec_obj150;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct buffer* buf_164;
_Bool _condtional_value_X563;
void* __right_value481 = (void*)0;
char* __dec_obj151;
_Bool _condtional_value_X564;
void* __right_value482 = (void*)0;
char* __dec_obj152;
_Bool _condtional_value_X565;
void* __right_value483 = (void*)0;
char* __dec_obj153;
int j_165;
struct list$1CVALUE$ph* o2_saved_166;
struct CVALUE* it_167;
_Bool _condtional_value_X566;
_Bool _condtional_value_X567;
_Bool _condtional_value_X568;
_Bool _condtional_value_X569;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value486 = (void*)0;
char* __dec_obj154;
void* __right_value487 = (void*)0;
struct sType* __dec_obj155;
_Bool _condtional_value_X570;
_Bool _condtional_value_X571;
_Bool _condtional_value_X572;
void* __right_value488 = (void*)0;
char* __dec_obj156;
_Bool __result_obj__179;
memset(&i_99, 0, sizeof(int));
    fun_name=(char*)come_increment_ref_count(self->fun_name);
    params=self->params;
    method_block=self->method_block;
    method_block_sline=self->method_block_sline;
    var_=get_variable_from_table(info->lv_table,fun_name);
    if(({    (_condtional_value_X219=(var_==((void*)0)));    _condtional_value_X219;    })) {
        var_=get_variable_from_table(info->gv_table,fun_name);
    }
    if(({    (_condtional_value_X220=(var_));    _condtional_value_X220;    })) {
        lambda_type=var_->mType;
        if(({        (_condtional_value_X221=(string_operator_not_equals(lambda_type->mClass->mName,"lambda")));        _condtional_value_X221;        })) {
            err_msg(info,"%s is not lambda, can't call",fun_name);
            __result_obj__80 = (_Bool)1;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__80;
        }
        result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
        result_type->mStatic=(_Bool)0;
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 525, "struct list$1CVALUE$ph*"))));
        if(({        (_condtional_value_X226=(list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs));        _condtional_value_X226;        })) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
            __result_obj__82 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__82;
        }
        i=0;
        for(        ({        (_condtional_value_X229=(o2_saved=(params),it=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved))));        _condtional_value_X229;        });        ({        (_condtional_value_X230=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved))));        _condtional_value_X230;        });        ({        (_condtional_value_X233=(it=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved))));        _condtional_value_X233;        })        ){
            multiple_assign_var1=it;
            label=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X234=(!Value));            _condtional_value_X234;            })) {
                __result_obj__89 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__89;
            }
            else {
            }
            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj69=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X241=(lambda_type->mVarArgs&&((struct sType*)(__right_value185=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));            come_call_finalizer(sType_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X241;            })) {
            }
            else {
                check_assign_type(((char*)(__right_value188=xsprintf("\%s calling param #\%s",((char*)(__right_value186=string_to_string(fun_name))),((char*)(__right_value187=int_to_string(i)))))),((struct sType*)(__right_value189=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X242=(((struct sType*)(__right_value190=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value190, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X242;                })) {
                    std_move(((struct sType*)(__right_value191=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 560, "struct buffer*"))));
        buffer_append_str(buf,var_->mCValueName);
        buffer_append_str(buf,"(");
        j=0;
        for(        ({        (_condtional_value_X245=(o2_saved_18=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params)),it_20=list$1CVALUE$ph_begin((o2_saved_18))));        _condtional_value_X245;        });        ({        (_condtional_value_X246=(!list$1CVALUE$ph_end((o2_saved_18))));        _condtional_value_X246;        });        ({        (_condtional_value_X249=(it_20=list$1CVALUE$ph_next((o2_saved_18))));        _condtional_value_X249;        })        ){
            buffer_append_str(buf,it_20->c_value);
            if(({            (_condtional_value_X251=(j!=list$1CVALUE$ph_length(come_params)-1));            _condtional_value_X251;            })) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf,")");
        come_value_22=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 577, "struct CVALUE*"))));
        __dec_obj70=come_value_22->c_value,
        come_value_22->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj71=come_value_22->type,
        come_value_22->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_22->type->mStatic=(_Bool)0;
        come_value_22->var=((void*)0);
        if(({        (_condtional_value_X252=(lambda_type->mResultType->mHeap));        _condtional_value_X252;        })) {
            append_object_to_right_values(come_value_22,(struct sType*)come_increment_ref_count(lambda_type->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_22->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_22));
        info->calling_fun=((void*)0);
        __result_obj__100 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__100;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    generics_fun=((struct sGenericsFun*)(__right_value199=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value198=__builtin_string(fun_name))),((void*)0))));
    (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    method_generics=(_Bool)0;
    if(({    (_condtional_value_X268=(generics_fun));    _condtional_value_X268;    })) {
        method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
    }
    if(({    (_condtional_value_X270=(list$1sType$ph_length(self->method_generics_types)>0||method_generics));    _condtional_value_X270;    })) {
        if(({        (_condtional_value_X271=(list$1sType$ph_length(self->method_generics_types)==0));        _condtional_value_X271;        })) {
            method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 602, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value202=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value202, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            generics_fun_name=(char*)come_increment_ref_count(name);
            fun=((struct sFun*)(__right_value203=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
            come_call_finalizer(sFun_finalize, __right_value203, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X296=(method_block));            _condtional_value_X296;            })) {
                come_params_23=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 609, "struct list$1CVALUE$ph*"))));
                fun_24=((struct sFun*)(__right_value206=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(({                (_condtional_value_X297=(!compile_method_block(method_block,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_23),fun_24,fun_name,method_block_sline,info,(_Bool)1)));                _condtional_value_X297;                })) {
                    __result_obj__109 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__109;
                }
                info->no_output_come_code=no_output_come_code;
                method_block_node=((struct CVALUE*)(__right_value207=list$1CVALUE$ph_operator_load_element(come_params_23,-1)));
                come_call_finalizer(CVALUE_finalize, __right_value207, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                method_block_lambda_type=(struct sType*)come_increment_ref_count(sType_clone(method_block_node->type));
                method_block_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type=((struct sType*)(__right_value210=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                come_call_finalizer(sType_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                if(({                (_condtional_value_X304=(generics_fun_method_block_result_type->mClass->mMethodGenerics));                _condtional_value_X304;                })) {
                    method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type)));
                    come_call_finalizer(sType_finalize, __right_value214, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                n=0;
                for(                ({                (_condtional_value_X317=(o2_saved_28=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type->mParamTypes)),it_30=list$1sType$ph_begin((o2_saved_28))));                _condtional_value_X317;                });                ({                (_condtional_value_X318=(!list$1sType$ph_end((o2_saved_28))));                _condtional_value_X318;                });                ({                (_condtional_value_X321=(it_30=list$1sType$ph_next((o2_saved_28))));                _condtional_value_X321;                })                ){
                    if(({                    (_condtional_value_X322=(it_30->mClass->mMethodGenerics));                    _condtional_value_X322;                    })) {
                        method_generics_num_32=it_30->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_32,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value218=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n))))));
                        come_call_finalizer(sType_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value217, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value218, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    n++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_params_33=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 641, "struct list$1CVALUE$ph*"))));
            i_34=0;
            result_type_35=((void*)0);
            for(            ({            (_condtional_value_X323=(o2_saved_36=(params),it_37=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_36))));            _condtional_value_X323;            });            ({            (_condtional_value_X324=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_36))));            _condtional_value_X324;            });            ({            (_condtional_value_X325=(it_37=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_36))));            _condtional_value_X325;            })            ){
                multiple_assign_var3=it_37;
                label_38=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_39=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_40=node_compile(node_39,info);
                if(({                (_condtional_value_X326=(!Value_40));                _condtional_value_X326;                })) {
                    __result_obj__123 = (_Bool)0;
                    (label_38 = come_decrement_ref_count(label_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__123;
                }
                else {
                }
                come_value_41=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj76=come_value_41->type,
                come_value_41->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_41->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                list$1CVALUE$ph_add(come_params_33,(struct CVALUE*)come_increment_ref_count(come_value_41));
                (label_38 = come_decrement_ref_count(label_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X329=(generics_fun->mResultType->mClass->mMethodGenerics));            _condtional_value_X329;            })) {
                method_generics_num_44=generics_fun->mResultType->mClass->mMethodGenericsNum;
                if(({                (_condtional_value_X330=(info->function_result_type));                _condtional_value_X330;                })) {
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_44,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    come_call_finalizer(sType_finalize, __right_value227, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            n_45=0;
            for(            ({            (_condtional_value_X331=(o2_saved_46=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_47=list$1sType$ph_begin((o2_saved_46))));            _condtional_value_X331;            });            ({            (_condtional_value_X332=(!list$1sType$ph_end((o2_saved_46))));            _condtional_value_X332;            });            ({            (_condtional_value_X333=(it_47=list$1sType$ph_next((o2_saved_46))));            _condtional_value_X333;            })            ){
                if(({                (_condtional_value_X334=(it_47->mClass->mMethodGenerics));                _condtional_value_X334;                })) {
                    method_generics_num_48=it_47->mClass->mMethodGenericsNum;
                    if(({                    (_condtional_value_X335=(n_45<list$1CVALUE$ph_length(come_params_33)));                    _condtional_value_X335;                    })) {
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_48,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value231=list$1CVALUE$ph_operator_load_element(come_params_33,n_45)))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value229, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value230, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
                n_45++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value233=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),info)));
            name_55=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_56=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value233, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj80=fun_name,
            fun_name=(char*)come_increment_ref_count(name_55);
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value234=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_57=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_58=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value234, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj81=fun_name,
            fun_name=(char*)come_increment_ref_count(name_57);
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (name_57 = come_decrement_ref_count(name_57, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(({    (_condtional_value_X367=(string_operator_equals(fun_name,"__builtin_memmove")||string_operator_equals(fun_name,"__builtin_memset")||string_operator_equals(fun_name,"__builtin_ffs")||string_operator_equals(fun_name,"__builtin_ffsl")||string_operator_equals(fun_name,"__builtin_ffsll")||string_operator_equals(fun_name,"__builtin_bswap16")||string_operator_equals(fun_name,"__builtin_bswap32")||string_operator_equals(fun_name,"__builtin_bswap64")||string_operator_equals(fun_name,"__builtin_constant_p")||string_operator_equals(fun_name,"__builtin_expect")||string_operator_equals(fun_name,"__builtin___memset_chk")||string_operator_equals(fun_name,"__builtin_object_size")||string_operator_equals(fun_name,"__builtin___memcpy_chk")||string_operator_equals(fun_name,"__builtin___strncpy_chk")||string_operator_equals(fun_name,"__builtin___strncat_chk")||string_operator_equals(fun_name,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name,"__builtin_strrchr")||string_operator_equals(fun_name,"__builtin_clz")||string_operator_equals(fun_name,"__dsb")||string_operator_equals(fun_name,"__isb")||string_operator_equals(fun_name,"__dmb")||(strlen(fun_name)==strlen("__builtin_arm_")&&memcmp(fun_name,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name,"__c11_atomic_thread_fence")||string_operator_equals(fun_name,"__c11_atomic_signal_fence")||string_operator_equals(fun_name,"__c11_atomic_store")||string_operator_equals(fun_name,"__c11_atomic_load")||string_operator_equals(fun_name,"__c11_atomic_exchange")||string_operator_equals(fun_name,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name,"__c11_atomic_fetch_add")||string_operator_equals(fun_name,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name,"__c11_atomic_fetch_and")||string_operator_equals(fun_name,"__c11_atomic_fetch_or")||string_operator_equals(fun_name,"__c11_atomic_fetch_xor")));    _condtional_value_X367;    })) {
        come_params_59=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 716, "struct list$1CVALUE$ph*"))));
        for(        ({        (_condtional_value_X368=(o2_saved_60=(params),it_61=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_60))));        _condtional_value_X368;        });        ({        (_condtional_value_X369=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_60))));        _condtional_value_X369;        });        ({        (_condtional_value_X370=(it_61=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_60))));        _condtional_value_X370;        })        ){
            multiple_assign_var6=it_61;
            label_62=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_63=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_64=node_compile(node_63,info);
            if(({            (_condtional_value_X371=(!Value_64));            _condtional_value_X371;            })) {
                __result_obj__130 = (_Bool)0;
                (label_62 = come_decrement_ref_count(label_62, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__130;
            }
            else {
            }
            come_value_65=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj82=come_value_65->type,
            come_value_65->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_65->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_59,(struct CVALUE*)come_increment_ref_count(come_value_65));
            (label_62 = come_decrement_ref_count(label_62, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_66=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 731, "struct buffer*"))));
        buffer_append_str(buf_66,fun_name);
        buffer_append_str(buf_66,"(");
        j_67=0;
        for(        ({        (_condtional_value_X372=(o2_saved_68=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_59)),it_69=list$1CVALUE$ph_begin((o2_saved_68))));        _condtional_value_X372;        });        ({        (_condtional_value_X373=(!list$1CVALUE$ph_end((o2_saved_68))));        _condtional_value_X373;        });        ({        (_condtional_value_X374=(it_69=list$1CVALUE$ph_next((o2_saved_68))));        _condtional_value_X374;        })        ){
            buffer_append_str(buf_66,it_69->c_value);
            if(({            (_condtional_value_X375=(j_67!=list$1CVALUE$ph_length(come_params_59)-1));            _condtional_value_X375;            })) {
                buffer_append_str(buf_66,",");
            }
            j_67++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_66,")");
        come_value_70=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 748, "struct CVALUE*"))));
        __dec_obj83=come_value_70->c_value,
        come_value_70->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_66));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X376=(string_operator_equals(fun_name,"__builtin_memmove")||string_operator_equals(fun_name,"__builtin_memset")));        _condtional_value_X376;        })) {
            __dec_obj84=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X377=(string_operator_equals(fun_name,"__builtin_ffs")));        _condtional_value_X377;        })) {
            __dec_obj85=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X378=(string_operator_equals(fun_name,"__builtin_ffsl")));        _condtional_value_X378;        })) {
            __dec_obj86=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X379=(string_operator_equals(fun_name,"__builtin_ffsll")));        _condtional_value_X379;        })) {
            __dec_obj87=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X380=(string_operator_equals(fun_name,"__builtin_bswap16")));        _condtional_value_X380;        })) {
            __dec_obj88=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X381=(string_operator_equals(fun_name,"__builtin_bswap32")));        _condtional_value_X381;        })) {
            __dec_obj89=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X382=(string_operator_equals(fun_name,"__builtin_bswap64")));        _condtional_value_X382;        })) {
            __dec_obj90=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X383=(string_operator_equals(fun_name,"__builtin_constant_p")));        _condtional_value_X383;        })) {
            __dec_obj91=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 773, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X384=(string_operator_equals(fun_name,"__builtin_expect")));        _condtional_value_X384;        })) {
            __dec_obj92=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X385=(string_operator_equals(fun_name,"__builtin___memset_chk")));        _condtional_value_X385;        })) {
            __dec_obj93=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_70->type->mPointerNum=1;
        }
        else if(({        (_condtional_value_X386=(string_operator_equals(fun_name,"__builtin_object_size")));        _condtional_value_X386;        })) {
            __dec_obj94=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X387=(string_operator_equals(fun_name,"__builtin___memcpy_chk")));        _condtional_value_X387;        })) {
            __dec_obj95=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 786, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_70->type->mPointerNum=1;
        }
        else if(({        (_condtional_value_X388=(string_operator_equals(fun_name,"__builtin___strncpy_chk")));        _condtional_value_X388;        })) {
            __dec_obj96=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 790, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_70->type->mPointerNum=1;
        }
        else if(({        (_condtional_value_X389=(string_operator_equals(fun_name,"__builtin___strncat_chk")));        _condtional_value_X389;        })) {
            __dec_obj97=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 794, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_70->type->mPointerNum=1;
        }
        else if(({        (_condtional_value_X390=(string_operator_equals(fun_name,"__builtin_strrchr")));        _condtional_value_X390;        })) {
            __dec_obj98=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 798, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_70->type->mPointerNum=1;
        }
        else if(({        (_condtional_value_X391=(string_operator_equals(fun_name,"__builtin___vsnprintf_chk")));        _condtional_value_X391;        })) {
            __dec_obj99=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 802, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X392=(string_operator_equals(fun_name,"__builtin_clz")));        _condtional_value_X392;        })) {
            __dec_obj100=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 805, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X393=(string_operator_equals(fun_name,"__c11_atomic_thread_fence")));        _condtional_value_X393;        })) {
            __dec_obj101=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 808, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X394=(string_operator_equals(fun_name,"__c11_atomic_signal_fence")));        _condtional_value_X394;        })) {
            __dec_obj102=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X395=(string_operator_equals(fun_name,"__c11_atomic_exchange")));        _condtional_value_X395;        })) {
            __dec_obj103=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value301=list$1CVALUE$ph_operator_load_element(come_params_59,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value301, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X396=(string_operator_equals(fun_name,"__c11_atomic_exchange_strong")));        _condtional_value_X396;        })) {
            __dec_obj104=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value303=list$1CVALUE$ph_operator_load_element(come_params_59,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X397=(string_operator_equals(fun_name,"__c11_atomic_exchange_weak")));        _condtional_value_X397;        })) {
            __dec_obj105=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value305=list$1CVALUE$ph_operator_load_element(come_params_59,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value305, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X398=(string_operator_equals(fun_name,"__c11_atomic_store")));        _condtional_value_X398;        })) {
            __dec_obj106=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 823, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X399=(string_operator_equals(fun_name,"__c11_atomic_load")));        _condtional_value_X399;        })) {
            __dec_obj107=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value310=list$1CVALUE$ph_operator_load_element(come_params_59,0)))->type));
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value310, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_value_70->type->mPointerNum--;
        }
        else if(({        (_condtional_value_X400=(string_operator_equals(fun_name,"__c11_atomic_fetch_add")));        _condtional_value_X400;        })) {
            __dec_obj108=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value312=list$1CVALUE$ph_operator_load_element(come_params_59,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value312, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X401=(string_operator_equals(fun_name,"__c11_atomic_fetch_sub")));        _condtional_value_X401;        })) {
            __dec_obj109=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value314=list$1CVALUE$ph_operator_load_element(come_params_59,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value314, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X402=(string_operator_equals(fun_name,"__c11_atomic_fetch_and")));        _condtional_value_X402;        })) {
            __dec_obj110=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value316=list$1CVALUE$ph_operator_load_element(come_params_59,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value316, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X403=(string_operator_equals(fun_name,"__c11_atomic_fetch_or")));        _condtional_value_X403;        })) {
            __dec_obj111=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value318=list$1CVALUE$ph_operator_load_element(come_params_59,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value318, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X404=(string_operator_equals(fun_name,"__c11_atomic_fetch_xor")));        _condtional_value_X404;        })) {
            __dec_obj112=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value320=list$1CVALUE$ph_operator_load_element(come_params_59,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value320, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X405=(string_operator_equals(fun_name,"__dsb")));        _condtional_value_X405;        })) {
            __dec_obj113=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X406=(string_operator_equals(fun_name,"__isb")));        _condtional_value_X406;        })) {
            __dec_obj114=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X407=(string_operator_equals(fun_name,"__dmb")));        _condtional_value_X407;        })) {
            __dec_obj115=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X408=(string_operator_equals(fun_name,"__builtin_arm_cdp")));        _condtional_value_X408;        })) {
            __dec_obj116=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X409=(string_operator_equals(fun_name,"__builtin_arm_ldc")));        _condtional_value_X409;        })) {
            __dec_obj117=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 857, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X410=(string_operator_equals(fun_name,"__builtin_arm_stc")));        _condtional_value_X410;        })) {
            __dec_obj118=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 860, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X411=(string_operator_equals(fun_name,"__builtin_arm_stcl")));        _condtional_value_X411;        })) {
            __dec_obj119=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 863, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X412=(string_operator_equals(fun_name,"__builtin_arm_ldcl")));        _condtional_value_X412;        })) {
            __dec_obj120=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 866, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_70->var=((void*)0);
        add_come_last_code(info,"%s",come_value_70->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
        __result_obj__131 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__131;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X413=(string_operator_equals(fun_name,"__builtin_va_arg")));    _condtional_value_X413;    })) {
        come_params_71=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 878, "struct list$1CVALUE$ph*"))));
        i_72=0;
        result_type_73=((void*)0);
        for(        ({        (_condtional_value_X414=(o2_saved_74=(params),it_75=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_74))));        _condtional_value_X414;        });        ({        (_condtional_value_X415=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_74))));        _condtional_value_X415;        });        ({        (_condtional_value_X416=(it_75=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_74))));        _condtional_value_X416;        })        ){
            multiple_assign_var7=it_75;
            label_76=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_77=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_78=node_compile(node_77,info);
            if(({            (_condtional_value_X417=(!Value_78));            _condtional_value_X417;            })) {
                __result_obj__132 = (_Bool)0;
                (label_76 = come_decrement_ref_count(label_76, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__132;
            }
            else {
            }
            come_value_79=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj121=come_value_79->type,
            come_value_79->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_79->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_71,(struct CVALUE*)come_increment_ref_count(come_value_79));
            __dec_obj122=result_type_73,
            result_type_73=(struct sType*)come_increment_ref_count(come_value_79->type);
            come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_76 = come_decrement_ref_count(label_76, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_80=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 898, "struct buffer*"))));
        buffer_append_str(buf_80,fun_name);
        buffer_append_str(buf_80,"(");
        j_81=0;
        for(        ({        (_condtional_value_X418=(o2_saved_82=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_71)),it_83=list$1CVALUE$ph_begin((o2_saved_82))));        _condtional_value_X418;        });        ({        (_condtional_value_X419=(!list$1CVALUE$ph_end((o2_saved_82))));        _condtional_value_X419;        });        ({        (_condtional_value_X420=(it_83=list$1CVALUE$ph_next((o2_saved_82))));        _condtional_value_X420;        })        ){
            buffer_append_str(buf_80,it_83->c_value);
            if(({            (_condtional_value_X421=(j_81!=list$1CVALUE$ph_length(come_params_71)-1));            _condtional_value_X421;            })) {
                buffer_append_str(buf_80,",");
            }
            j_81++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_80,")");
        come_value_84=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 915, "struct CVALUE*"))));
        __dec_obj123=come_value_84->c_value,
        come_value_84->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_80));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj124=come_value_84->type,
        come_value_84->type=(struct sType*)come_increment_ref_count(result_type_73);
        come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_84->var=((void*)0);
        add_come_last_code(info,"%s",come_value_84->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
        __result_obj__133 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__133;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X422=(string_operator_equals(fun_name,"__builtin_va_copy")));    _condtional_value_X422;    })) {
        come_params_85=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 927, "struct list$1CVALUE$ph*"))));
        i_86=0;
        for(        ({        (_condtional_value_X423=(o2_saved_87=(params),it_88=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_87))));        _condtional_value_X423;        });        ({        (_condtional_value_X424=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_87))));        _condtional_value_X424;        });        ({        (_condtional_value_X425=(it_88=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_87))));        _condtional_value_X425;        })        ){
            multiple_assign_var8=it_88;
            label_89=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_90=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_91=node_compile(node_90,info);
            if(({            (_condtional_value_X426=(!Value_91));            _condtional_value_X426;            })) {
                __result_obj__134 = (_Bool)0;
                (label_89 = come_decrement_ref_count(label_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__134;
            }
            else {
            }
            come_value_92=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj125=come_value_92->type,
            come_value_92->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_92->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_85,(struct CVALUE*)come_increment_ref_count(come_value_92));
            (label_89 = come_decrement_ref_count(label_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_93=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 944, "struct buffer*"))));
        buffer_append_str(buf_93,fun_name);
        buffer_append_str(buf_93,"(");
        j_94=0;
        for(        ({        (_condtional_value_X427=(o2_saved_95=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_85)),it_96=list$1CVALUE$ph_begin((o2_saved_95))));        _condtional_value_X427;        });        ({        (_condtional_value_X428=(!list$1CVALUE$ph_end((o2_saved_95))));        _condtional_value_X428;        });        ({        (_condtional_value_X429=(it_96=list$1CVALUE$ph_next((o2_saved_95))));        _condtional_value_X429;        })        ){
            buffer_append_str(buf_93,it_96->c_value);
            if(({            (_condtional_value_X430=(j_94!=list$1CVALUE$ph_length(come_params_85)-1));            _condtional_value_X430;            })) {
                buffer_append_str(buf_93,",");
            }
            j_94++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_93,")");
        result_type_97=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 961, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_value_98=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 963, "struct CVALUE*"))));
        __dec_obj126=come_value_98->c_value,
        come_value_98->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_93));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj127=come_value_98->type,
        come_value_98->type=(struct sType*)come_increment_ref_count(result_type_97);
        come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_98->var=((void*)0);
        add_come_last_code(info,"%s",come_value_98->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
        __result_obj__135 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__135;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X431=(string_operator_equals(fun_name,"string")));    _condtional_value_X431;    })) {
        __dec_obj128=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X432=(string_operator_equals(fun_name,"wstring")));    _condtional_value_X432;    })) {
        __dec_obj129=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X433=(string_operator_equals(fun_name,"inherit")));    _condtional_value_X433;    })) {
        p=info->come_fun->mName;
        version=0;
        while(({        (_condtional_value_X434=(*p));        _condtional_value_X434;        })) {
            if(({            (_condtional_value_X435=(*p==95&&*(p+1)==118&&xisdigit(*(p+2))));            _condtional_value_X435;            })) {
                p2=p+2;
                version=0;
                while(({                (_condtional_value_X436=(xisdigit(*p2)));                _condtional_value_X436;                })) {
                    version=version*10+(*p2-48);
                    p2++;
                }
                break;
            }
            else {
                p++;
            }
        }
        char real_fun_name[2048];
        memset(&real_fun_name, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name,info->come_fun->mName,p-info->come_fun->mName);
        real_fun_name[p-info->come_fun->mName]=0;
        for(        ({        (_condtional_value_X437=(i_99=version-1));        _condtional_value_X437;        });        ({        (_condtional_value_X438=(i_99>=1));        _condtional_value_X438;        });        ({        (_condtional_value_X439=(i_99--));        _condtional_value_X439;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i_99));
            if(({            (_condtional_value_X450=(((struct sFun*)(__right_value370=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)))));            come_call_finalizer(sFun_finalize, __right_value370, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X450;            })) {
                __dec_obj130=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X451=(i_99==0));        _condtional_value_X451;        })) {
            new_fun_name_100=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name));
            if(({            (_condtional_value_X452=(((struct sFun*)(__right_value373=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_100)))));            come_call_finalizer(sFun_finalize, __right_value373, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X452;            })) {
                __dec_obj131=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_100));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X453=(string_operator_equals(fun_name,info->come_fun->mName)));            _condtional_value_X453;            })) {
                err_msg(info,"invalid inherit");
                __result_obj__144 = (_Bool)1;
                (new_fun_name_100 = come_decrement_ref_count(new_fun_name_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__144;
            }
            (new_fun_name_100 = come_decrement_ref_count(new_fun_name_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        ({        (_condtional_value_X454=(i_101=128));        _condtional_value_X454;        });        ({        (_condtional_value_X455=(i_101>=1));        _condtional_value_X455;        });        ({        (_condtional_value_X456=(i_101--));        _condtional_value_X456;        })        ){
            new_fun_name_102=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name,i_101));
            if(({            (_condtional_value_X457=(((struct sFun*)(__right_value376=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_102)))));            come_call_finalizer(sFun_finalize, __right_value376, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X457;            })) {
                __dec_obj132=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_102));
                __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_102 = come_decrement_ref_count(new_fun_name_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_102 = come_decrement_ref_count(new_fun_name_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    fun_103=((struct sFun*)(__right_value378=map$2char$phsFun$ph_at(info->funcs,fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value378, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X458=(fun_103==((void*)0)));    _condtional_value_X458;    })) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name);
        come_params_104=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1044, "struct list$1CVALUE$ph*"))));
        i_105=0;
        result_type_106=((void*)0);
        for(        ({        (_condtional_value_X459=(o2_saved_107=(params),it_108=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_107))));        _condtional_value_X459;        });        ({        (_condtional_value_X460=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_107))));        _condtional_value_X460;        });        ({        (_condtional_value_X461=(it_108=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_107))));        _condtional_value_X461;        })        ){
            multiple_assign_var9=it_108;
            label_109=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            node_110=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
            Value_111=node_compile(node_110,info);
            if(({            (_condtional_value_X462=(!Value_111));            _condtional_value_X462;            })) {
                __result_obj__145 = (_Bool)0;
                (label_109 = come_decrement_ref_count(label_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_110) ? node_110 = come_decrement_ref_count(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__145;
            }
            else {
            }
            come_value_112=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj133=come_value_112->type,
            come_value_112->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_112->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_104,(struct CVALUE*)come_increment_ref_count(come_value_112));
            __dec_obj134=result_type_106,
            result_type_106=(struct sType*)come_increment_ref_count(come_value_112->type);
            come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_109 = come_decrement_ref_count(label_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_110) ? node_110 = come_decrement_ref_count(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1064, "struct buffer*"))));
        buffer_append_str(buf_113,fun_name);
        buffer_append_str(buf_113,"(");
        j_114=0;
        for(        ({        (_condtional_value_X463=(o2_saved_115=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_104)),it_116=list$1CVALUE$ph_begin((o2_saved_115))));        _condtional_value_X463;        });        ({        (_condtional_value_X464=(!list$1CVALUE$ph_end((o2_saved_115))));        _condtional_value_X464;        });        ({        (_condtional_value_X465=(it_116=list$1CVALUE$ph_next((o2_saved_115))));        _condtional_value_X465;        })        ){
            buffer_append_str(buf_113,it_116->c_value);
            if(({            (_condtional_value_X466=(j_114!=list$1CVALUE$ph_length(come_params_104)-1));            _condtional_value_X466;            })) {
                buffer_append_str(buf_113,",");
            }
            j_114++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_113,")");
        come_value_117=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1081, "struct CVALUE*"))));
        __dec_obj135=come_value_117->c_value,
        come_value_117->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_113));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj136=come_value_117->type,
        come_value_117->type=(struct sType*)come_increment_ref_count(result_type_106);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_117->var=((void*)0);
        add_come_last_code(info,"%s",come_value_117->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        __result_obj__146 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__146;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    result_type_118=(struct sType*)come_increment_ref_count(sType_clone(fun_103->mResultType));
    result_type_118->mStatic=(_Bool)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1096, "struct list$1sType$ph*"))));
    for(    ({    (_condtional_value_X467=(o2_saved_119=(struct list$1sType$ph*)come_increment_ref_count((fun_103->mParamTypes)),it_120=list$1sType$ph_begin((o2_saved_119))));    _condtional_value_X467;    });    ({    (_condtional_value_X468=(!list$1sType$ph_end((o2_saved_119))));    _condtional_value_X468;    });    ({    (_condtional_value_X469=(it_120=list$1sType$ph_next((o2_saved_119))));    _condtional_value_X469;    })    ){
        it2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_120)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(it2)));
        come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj137=result_type_118,
    result_type_118=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_118),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_params_121=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1104, "struct list$1CVALUE$ph*"))));
    for(    ({    (_condtional_value_X470=(i_122=0));    _condtional_value_X470;    });    ({    (_condtional_value_X471=(i_122<list$1sType$ph_length(fun_103->mParamTypes)-(((method_block)?(2):(0)))));    _condtional_value_X471;    });    ({    (_condtional_value_X472=(i_122++));    _condtional_value_X472;    })    ){
        list$1CVALUE$ph_add(come_params_121,((void*)0));
    }
    for(    ({    (_condtional_value_X473=(o2_saved_123=(params),it_124=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_123))));    _condtional_value_X473;    });    ({    (_condtional_value_X474=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_123))));    _condtional_value_X474;    });    ({    (_condtional_value_X475=(it_124=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_123))));    _condtional_value_X475;    })    ){
        multiple_assign_var10=it_124;
        label_125=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_126=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(({        (_condtional_value_X476=(fun_103->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")));        _condtional_value_X476;        })) {
        }
        else if(({        (_condtional_value_X477=(label_125));        _condtional_value_X477;        })) {
            Value_127=node_compile(node_126,info);
            if(({            (_condtional_value_X478=(!Value_127));            _condtional_value_X478;            })) {
                __result_obj__147 = (_Bool)0;
                (label_125 = come_decrement_ref_count(label_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__147;
            }
            else {
            }
            come_value_128=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj138=come_value_128->type,
            come_value_128->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_128->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            n_129=0;
            for(            ({            (_condtional_value_X481=(o2_saved_130=(struct list$1char$ph*)come_increment_ref_count((fun_103->mParamNames)),it_132=list$1char$ph_begin((o2_saved_130))));            _condtional_value_X481;            });            ({            (_condtional_value_X482=(!list$1char$ph_end((o2_saved_130))));            _condtional_value_X482;            });            ({            (_condtional_value_X485=(it_132=list$1char$ph_next((o2_saved_130))));            _condtional_value_X485;            })            ){
                if(({                (_condtional_value_X486=(string_operator_equals(label_125,it_132)));                _condtional_value_X486;                })) {
                    break;
                }
                n_129++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X487=(((struct sType*)(__right_value399=list$1sType$ph_operator_load_element(param_types,n_129)))));            come_call_finalizer(sType_finalize, __right_value399, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X487;            })) {
                check_assign_type(((char*)(__right_value402=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value400=string_to_string(fun_name))),((char*)(__right_value401=int_to_string(n_129)))))),((struct sType*)(__right_value403=list$1sType$ph_operator_load_element(param_types,n_129))),come_value_128->type,come_value_128,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value403, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X488=(((struct sType*)(__right_value404=list$1sType$ph_operator_load_element(param_types,n_129)))&&((struct sType*)(__right_value405=list$1sType$ph_operator_load_element(param_types,n_129)))->mHeap&&come_value_128->type->mHeap));            come_call_finalizer(sType_finalize, __right_value404, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value405, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X488;            })) {
                std_move(((struct sType*)(__right_value406=list$1sType$ph_operator_load_element(param_types,n_129))),come_value_128->type,come_value_128,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value406, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_121,n_129,(struct CVALUE*)come_increment_ref_count(come_value_128));
            come_call_finalizer(CVALUE_finalize, come_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_125 = come_decrement_ref_count(label_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    i_135=0;
    for(    ({    (_condtional_value_X497=(o2_saved_136=(params),it_137=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_136))));    _condtional_value_X497;    });    ({    (_condtional_value_X498=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_136))));    _condtional_value_X498;    });    ({    (_condtional_value_X499=(it_137=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_136))));    _condtional_value_X499;    })    ){
        multiple_assign_var11=it_137;
        label_138=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_139=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        if(({        (_condtional_value_X500=(fun_103->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")));        _condtional_value_X500;        })) {
            Value_140=node_compile(node_139,info);
            if(({            (_condtional_value_X501=(!Value_140));            _condtional_value_X501;            })) {
                __result_obj__156 = (_Bool)0;
                (label_138 = come_decrement_ref_count(label_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__156;
            }
            else {
            }
            come_value_141=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj140=come_value_141->type,
            come_value_141->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_141->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(({            (_condtional_value_X502=((_Bool)1));            _condtional_value_X502;            })) {
                if(({                (_condtional_value_X503=(((struct CVALUE*)(__right_value409=list$1CVALUE$ph_operator_load_element(come_params_121,i_135)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value409, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X503;                })) {
                    break;
                }
                else {
                    i_135++;
                }
            }
            list$1CVALUE$ph_replace(come_params_121,i_135,(struct CVALUE*)come_increment_ref_count(come_value_141));
            i_135++;
            come_call_finalizer(CVALUE_finalize, come_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X504=(label_138));        _condtional_value_X504;        })) {
        }
        else {
            Value_142=node_compile(node_139,info);
            if(({            (_condtional_value_X505=(!Value_142));            _condtional_value_X505;            })) {
                __result_obj__157 = (_Bool)0;
                (label_138 = come_decrement_ref_count(label_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__157;
            }
            else {
            }
            come_value_143=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj141=come_value_143->type,
            come_value_143->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_143->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(({            (_condtional_value_X506=((_Bool)1));            _condtional_value_X506;            })) {
                if(({                (_condtional_value_X507=(((struct CVALUE*)(__right_value412=list$1CVALUE$ph_operator_load_element(come_params_121,i_135)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value412, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X507;                })) {
                    break;
                }
                else {
                    i_135++;
                }
            }
            if(({            (_condtional_value_X508=(((struct sType*)(__right_value413=list$1sType$ph_operator_load_element(param_types,i_135)))));            come_call_finalizer(sType_finalize, __right_value413, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X508;            })) {
                check_assign_type(((char*)(__right_value416=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value414=string_to_string(fun_name))),((char*)(__right_value415=int_to_string(i_135)))))),((struct sType*)(__right_value417=list$1sType$ph_operator_load_element(param_types,i_135))),come_value_143->type,come_value_143,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value415 = come_decrement_ref_count(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value416 = come_decrement_ref_count(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value417, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X509=(((struct sType*)(__right_value418=list$1sType$ph_operator_load_element(param_types,i_135)))&&((struct sType*)(__right_value419=list$1sType$ph_operator_load_element(param_types,i_135)))->mHeap&&come_value_143->type->mHeap));            come_call_finalizer(sType_finalize, __right_value418, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value419, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X509;            })) {
                std_move(((struct sType*)(__right_value420=list$1sType$ph_operator_load_element(param_types,i_135))),come_value_143->type,come_value_143,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value420, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_121,i_135,(struct CVALUE*)come_increment_ref_count(come_value_143));
            i_135++;
            come_call_finalizer(CVALUE_finalize, come_value_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_138 = come_decrement_ref_count(label_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(({    (_condtional_value_X510=((_Bool)1));    _condtional_value_X510;    })) {
        if(({        (_condtional_value_X511=(((struct CVALUE*)(__right_value421=list$1CVALUE$ph_operator_load_element(come_params_121,i_135)))==((void*)0)));        come_call_finalizer(CVALUE_finalize, __right_value421, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        _condtional_value_X511;        })) {
            break;
        }
        else {
            i_135++;
        }
    }
    if(({    (_condtional_value_X512=(list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_103->mParamTypes)));    _condtional_value_X512;    })) {
        for(        ;        ({        (_condtional_value_X513=(i_135<list$1sType$ph_length(fun_103->mParamTypes)-(((method_block)?(2):(0)))));        _condtional_value_X513;        });        ({        (_condtional_value_X514=(i_135++));        _condtional_value_X514;        })        ){
            default_param=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value422=list$1char$ph_operator_load_element(fun_103->mParamDefaultParametors,i_135))), "05call.c", 1213, "char*"));
            (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_name=((char*)(__right_value424=list$1char$ph_operator_load_element(fun_103->mParamNames,i_135)));
            (__right_value424 = come_decrement_ref_count(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(({            (_condtional_value_X521=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE*)(__right_value425=list$1CVALUE$ph_operator_load_element(come_params_121,i_135)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value425, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X521;            })) {
                source=(struct buffer*)come_increment_ref_count(info->source);
                p_144=info->p;
                head=info->head;
                sline=info->sline;
                __dec_obj142=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param));
                come_call_finalizer(buffer_finalize, __dec_obj142,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_145=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_146=node_compile(node_145,info);
                if(({                (_condtional_value_X522=(!Value_146));                _condtional_value_X522;                })) {
                    __result_obj__162 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__162;
                }
                else {
                }
                __dec_obj143=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source);
                come_call_finalizer(buffer_finalize, __dec_obj143,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=p_144;
                info->head=head;
                info->sline=sline;
                come_value_147=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj144=come_value_147->type,
                come_value_147->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_147->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X523=(((struct sType*)(__right_value430=list$1sType$ph_operator_load_element(param_types,i_135)))));                come_call_finalizer(sType_finalize, __right_value430, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X523;                })) {
                    check_assign_type(((char*)(__right_value433=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value431=string_to_string(fun_name))),((char*)(__right_value432=int_to_string(i_135)))))),((struct sType*)(__right_value434=list$1sType$ph_operator_load_element(param_types,i_135))),come_value_147->type,come_value_147,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value434, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(({                (_condtional_value_X524=(((struct sType*)(__right_value435=list$1sType$ph_operator_load_element(param_types,i_135)))&&((struct sType*)(__right_value436=list$1sType$ph_operator_load_element(param_types,i_135)))->mHeap&&come_value_147->type->mHeap));                come_call_finalizer(sType_finalize, __right_value435, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __right_value436, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X524;                })) {
                    std_move(((struct sType*)(__right_value437=list$1sType$ph_operator_load_element(param_types,i_135))),come_value_147->type,come_value_147,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value437, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_121,i_135,(struct CVALUE*)come_increment_ref_count(come_value_147));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(({                (_condtional_value_X525=(((struct CVALUE*)(__right_value438=list$1CVALUE$ph_operator_load_element(come_params_121,i_135)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value438, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X525;                })) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_103->mName,i_135);
                    __result_obj__163 = (_Bool)1;
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__163;
                }
            }
            (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(({    (_condtional_value_X526=(list$1sType$ph_length(fun_103->mParamTypes)-(((method_block)?(2):(0)))!=list$1CVALUE$ph_length(come_params_121)&&!fun_103->mVarArgs&&string_operator_not_equals(fun_name,"__builtin_va_start")&&string_operator_not_equals(fun_name,"__builtin_va_end")));    _condtional_value_X526;    })) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(fun_103->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
        __result_obj__164 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__164;
    }
    if(({    (_condtional_value_X527=(method_block));    _condtional_value_X527;    })) {
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1265, "struct sNode");
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value440=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1265, "struct sCurrentNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
        current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer(sCurrentNode_finalize, __right_value440, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        Value_148=node_compile(current_stack_frame_node,info);
        if(({        (_condtional_value_X533=(!Value_148));        _condtional_value_X533;        })) {
            __result_obj__167 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__167;
        }
        else {
        }
        come_value_149=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj146=come_value_149->type,
        come_value_149->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_149->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_121,(struct CVALUE*)come_increment_ref_count(come_value_149));
        method_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1275, "struct buffer*"))));
        method_block_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value448=list$1sType$ph_operator_load_element(fun_103->mParamTypes,-1)))));
        come_call_finalizer(sType_finalize, __right_value448, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value451=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass*)(__right_value452=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sType_finalize, __right_value451, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, __right_value452, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        current_stack_frame_struct=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value453=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sClass_finalize, __right_value453, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->num_method_block++;
        num_method_block=info->num_method_block;
        if(({        (_condtional_value_X552=(string_operator_not_equals(method_block_type->mClass->mName,"lambda")));        _condtional_value_X552;        })) {
            err_msg(info,"This function does not have method block(%s)",fun_name);
            __result_obj__176 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__176;
        }
        result_type_150=(struct sType*)come_increment_ref_count(sType_clone(method_block_type->mResultType));
        result_type_150->mStatic=(_Bool)0;
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_150),(struct sType*)come_increment_ref_count(info->generics_type),info));
        param_types_151=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type->mParamTypes));
        param_names=method_block_type->mParamNames;
        all_alhabet_sname=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1299, "struct buffer*"))));
        {
            p_152=info->sname;
            while(({            (_condtional_value_X553=(*p_152));            _condtional_value_X553;            })) {
                if(({                (_condtional_value_X554=(xisalnum(*p_152)));                _condtional_value_X554;                })) {
                    buffer_append_char(all_alhabet_sname,*p_152++);
                }
                else {
                    p_152++;
                }
            }
        }
        buffer_append_format(method_block2,"%s fun_block%d_%s(",((char*)(__right_value459=make_come_type_name_string(result_type2,info,(_Bool)0))),num_method_block,((char*)(__right_value460=buffer_to_string(all_alhabet_sname))));
        (__right_value459 = come_decrement_ref_count(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value460 = come_decrement_ref_count(__right_value460, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        i_135=0;
        for(        ({        (_condtional_value_X555=(o2_saved_153=(struct list$1sType$ph*)come_increment_ref_count((param_types_151)),it_154=list$1sType$ph_begin((o2_saved_153))));        _condtional_value_X555;        });        ({        (_condtional_value_X556=(!list$1sType$ph_end((o2_saved_153))));        _condtional_value_X556;        });        ({        (_condtional_value_X557=(it_154=list$1sType$ph_next((o2_saved_153))));        _condtional_value_X557;        })        ){
            param_type=(struct sType*)come_increment_ref_count(it_154);
            if(({            (_condtional_value_X558=(i_135==0));            _condtional_value_X558;            })) {
                param_name_155=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2,"%s",((char*)(__right_value462=make_define_var(param_type,param_name_155,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value462 = come_decrement_ref_count(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_155 = come_decrement_ref_count(param_name_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(({            (_condtional_value_X559=(i_135==1));            _condtional_value_X559;            })) {
                param_name_156=(char*)come_increment_ref_count(xsprintf("it"));
                param_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                buffer_append_format(method_block2,"%s",((char*)(__right_value465=make_define_var(param_type2,param_name_156,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value465 = come_decrement_ref_count(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_156 = come_decrement_ref_count(param_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                param_name_157=(char*)come_increment_ref_count(xsprintf("it%d",i_135));
                param_type2_158=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                buffer_append_format(method_block2,"%s",((char*)(__right_value468=make_define_var(param_type2_158,param_name_157,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_157 = come_decrement_ref_count(param_name_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X560=(i_135!=list$1sType$ph_length(param_types_151)-1));            _condtional_value_X560;            })) {
                buffer_append_str(method_block2,",");
            }
            i_135++;
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(method_block2,")\n");
        buffer_append_str(method_block2,((char*)(__right_value469=buffer_to_string(method_block))));
        (__right_value469 = come_decrement_ref_count(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        source3=(struct buffer*)come_increment_ref_count(info->source);
        p_159=info->p;
        head_160=info->head;
        sline_161=info->sline;
        __dec_obj147=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2);
        come_call_finalizer(buffer_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline;
        node_162=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_163=node_compile(node_162,info);
        if(({        (_condtional_value_X561=(!Value_163));        _condtional_value_X561;        })) {
            __result_obj__177 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__177;
        }
        else {
        }
        method_block_name=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block,((char*)(__right_value471=buffer_to_string(all_alhabet_sname)))));
        (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1366, "struct CVALUE*"))));
        fun2=((struct sFun*)(__right_value476=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value475=__builtin_string(method_block_name))),((void*)0))));
        (__right_value475 = come_decrement_ref_count(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value476, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X562=(fun2==((void*)0)));        _condtional_value_X562;        })) {
            err_msg(info,"method block function not found(%s)",method_block_name);
            __result_obj__178 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__178;
        }
        method_block_type2=fun2->mLambdaType;
        __dec_obj148=come_value2->c_value,
        come_value2->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj149=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2));
        come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_121,(struct CVALUE*)come_increment_ref_count(come_value2));
        __dec_obj150=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_159;
        info->head=head_160;
        info->sline=sline_161;
        info->current_stack_frame_struct=current_stack_frame_struct;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1391, "struct buffer*"))));
    if(({    (_condtional_value_X563=(string_operator_equals(fun_name,"__isoc23_strtoll")));    _condtional_value_X563;    })) {
        __dec_obj151=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X564=(string_operator_equals(fun_name,"__isoc23_strtoul")));    _condtional_value_X564;    })) {
        __dec_obj152=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X565=(string_operator_equals(fun_name,"__isoc23_strtoull")));    _condtional_value_X565;    })) {
        __dec_obj153=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    buffer_append_str(buf_164,fun_name);
    buffer_append_str(buf_164,"(");
    j_165=0;
    for(    ({    (_condtional_value_X566=(o2_saved_166=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_121)),it_167=list$1CVALUE$ph_begin((o2_saved_166))));    _condtional_value_X566;    });    ({    (_condtional_value_X567=(!list$1CVALUE$ph_end((o2_saved_166))));    _condtional_value_X567;    });    ({    (_condtional_value_X568=(it_167=list$1CVALUE$ph_next((o2_saved_166))));    _condtional_value_X568;    })    ){
        buffer_append_str(buf_164,it_167->c_value);
        if(({        (_condtional_value_X569=(j_165!=list$1CVALUE$ph_length(come_params_121)-1));        _condtional_value_X569;        })) {
            buffer_append_str(buf_164,",");
        }
        j_165++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_164,")");
    come_value_168=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1418, "struct CVALUE*"))));
    __dec_obj154=come_value_168->c_value,
    come_value_168->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_164));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj155=come_value_168->type,
    come_value_168->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_118));
    come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_168->type->mStatic=(_Bool)0;
    come_value_168->type->mImmutable=(_Bool)0;
    come_value_168->var=((void*)0);
    if(({    (_condtional_value_X570=(fun_103->mResultType->mHeap));    _condtional_value_X570;    })) {
        append_object_to_right_values(come_value_168,(struct sType*)come_increment_ref_count(result_type_118),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    if(({    (_condtional_value_X571=(string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")));    _condtional_value_X571;    })) {
        if(({        (_condtional_value_X572=(string_operator_not_equals(fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name,"null_check")&&string_operator_not_equals(fun_name,"come_push_stackframe")&&string_operator_not_equals(fun_name,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name,"come_pop_stackframe")&&string_operator_not_equals(fun_name,"come_pop_stackframe_v2")));        _condtional_value_X572;        })) {
            __dec_obj156=come_value_168->c_value,
            come_value_168->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_168->c_value,come_value_168->type,info));
            __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_168->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_168));
    info->calling_fun=fun_103;
    __result_obj__179 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__179;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X198;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__72;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X203;
_Bool _condtional_value_X204;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__77;
    if(({    (_condtional_value_X198=(self==((void*)0)));    _condtional_value_X198;    })) {
        __result_obj__72 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__72;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X203=(it!=((void*)0)));    _condtional_value_X203;    })) {
        if(({        (_condtional_value_X204=(1));        _condtional_value_X204;        })) {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__77 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X199;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X199=(it!=((void*)0)));    _condtional_value_X199;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X200;
    if(({    (_condtional_value_X200=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X200;    })) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
    if(({    (_condtional_value_X201=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X201;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X202=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X202;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__73;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__73 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X205;
void* __right_value170 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj61;
_Bool _condtional_value_X206;
void* __right_value171 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_14;
struct tuple2$2char$phsNode$ph* __dec_obj62;
void* __right_value172 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_15;
struct tuple2$2char$phsNode$ph* __dec_obj63;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__74;
    if(({    (_condtional_value_X205=(self->len==0));    _condtional_value_X205;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value170=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj61=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X206=(self->len==1));    _condtional_value_X206;    })) {
        litem_14=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value171=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj62=litem_14->item,
        litem_14->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value172=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj63=litem_15->item,
        litem_15->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__74 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X207;
struct tuple2$2char$phsNode$ph* __result_obj__75;
void* __right_value173 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
_Bool _condtional_value_X208;
void* __right_value174 = (void*)0;
char* __dec_obj64;
_Bool _condtional_value_X209;
void* __right_value175 = (void*)0;
struct sNode* __dec_obj65;
struct tuple2$2char$phsNode$ph* __result_obj__76;
    if(({    (_condtional_value_X207=(self==(void*)0));    _condtional_value_X207;    })) {
        __result_obj__75 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__75;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(({    (_condtional_value_X208=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X208;    })) {
        __dec_obj64=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X209=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X209;    })) {
        __dec_obj65=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__76 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X210;
_Bool _condtional_value_X211;
    if(({    (_condtional_value_X210=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X210;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X211=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X211;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X212;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X212=(it!=((void*)0)));    _condtional_value_X212;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
_Bool _condtional_value_X215;
_Bool _condtional_value_X216;
_Bool _condtional_value_X217;
    if(({    (_condtional_value_X213=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X213;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X214=(self!=((void*)0)&&self->fun_name!=((void*)0)));    _condtional_value_X214;    })) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X215=(self!=((void*)0)&&self->params!=((void*)0)));    _condtional_value_X215;    })) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X216=(self!=((void*)0)&&self->method_generics_types!=((void*)0)));    _condtional_value_X216;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X217=(self!=((void*)0)&&self->method_block!=((void*)0)));    _condtional_value_X217;    })) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__81 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X222;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X222=(it!=((void*)0)));    _condtional_value_X222;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
_Bool _condtional_value_X223;
    if(({    (_condtional_value_X223=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X223;    })) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _condtional_value_X224;
    if(({    (_condtional_value_X224=(self==((void*)0)));    _condtional_value_X224;    })) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X225;
    if(({    (_condtional_value_X225=(self==((void*)0)));    _condtional_value_X225;    })) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X227;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__83;
_Bool _condtional_value_X228;
struct tuple2$2char$phsNode$ph* __result_obj__84;
struct tuple2$2char$phsNode$ph* result_16;
struct tuple2$2char$phsNode$ph* __result_obj__85;
result = (void*)0;
result_16 = (void*)0;
    if(({    (_condtional_value_X227=(self==((void*)0)));    _condtional_value_X227;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__83 = result;
        return __result_obj__83;
    }
    self->it=self->head;
    if(({    (_condtional_value_X228=(self->it));    _condtional_value_X228;    })) {
        __result_obj__84 = self->it->item;
        return __result_obj__84;
    }
    memset(&result_16,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__85 = result_16;
    return __result_obj__85;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X231;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__86;
_Bool _condtional_value_X232;
struct tuple2$2char$phsNode$ph* __result_obj__87;
struct tuple2$2char$phsNode$ph* result_17;
struct tuple2$2char$phsNode$ph* __result_obj__88;
result = (void*)0;
result_17 = (void*)0;
    if(({    (_condtional_value_X231=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X231;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__86 = result;
        return __result_obj__86;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X232=(self->it));    _condtional_value_X232;    })) {
        __result_obj__87 = self->it->item;
        return __result_obj__87;
    }
    memset(&result_17,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__88 = result_17;
    return __result_obj__88;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X235;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X236;
_Bool _condtional_value_X237;
struct sType* __result_obj__90;
struct sType* default_value;
struct sType* __result_obj__91;
default_value = (void*)0;
    if(({    (_condtional_value_X235=(position<0));    _condtional_value_X235;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X236=(it!=((void*)0)));    _condtional_value_X236;    })) {
        if(({        (_condtional_value_X237=(position==i));        _condtional_value_X237;        })) {
            __result_obj__90 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__90;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__91 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X238;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X239;
_Bool _condtional_value_X240;
struct sType* __result_obj__92;
struct sType* default_value;
struct sType* __result_obj__93;
default_value = (void*)0;
    if(({    (_condtional_value_X238=(position<0));    _condtional_value_X238;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X239=(it!=((void*)0)));    _condtional_value_X239;    })) {
        if(({        (_condtional_value_X240=(position==i));        _condtional_value_X240;        })) {
            __result_obj__92 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__92;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__93 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X243;
struct CVALUE* result;
struct CVALUE* __result_obj__94;
_Bool _condtional_value_X244;
struct CVALUE* __result_obj__95;
struct CVALUE* result_19;
struct CVALUE* __result_obj__96;
result = (void*)0;
result_19 = (void*)0;
    if(({    (_condtional_value_X243=(self==((void*)0)));    _condtional_value_X243;    })) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__94 = result;
        return __result_obj__94;
    }
    self->it=self->head;
    if(({    (_condtional_value_X244=(self->it));    _condtional_value_X244;    })) {
        __result_obj__95 = self->it->item;
        return __result_obj__95;
    }
    memset(&result_19,0,sizeof(struct CVALUE*));
    __result_obj__96 = result_19;
    return __result_obj__96;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X247;
struct CVALUE* result;
struct CVALUE* __result_obj__97;
_Bool _condtional_value_X248;
struct CVALUE* __result_obj__98;
struct CVALUE* result_21;
struct CVALUE* __result_obj__99;
result = (void*)0;
result_21 = (void*)0;
    if(({    (_condtional_value_X247=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X247;    })) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__97 = result;
        return __result_obj__97;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X248=(self->it));    _condtional_value_X248;    })) {
        __result_obj__98 = self->it->item;
        return __result_obj__98;
    }
    memset(&result_21,0,sizeof(struct CVALUE*));
    __result_obj__99 = result_21;
    return __result_obj__99;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X250;
    if(({    (_condtional_value_X250=(self==((void*)0)));    _condtional_value_X250;    })) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X253;
_Bool _condtional_value_X254;
_Bool _condtional_value_X255;
struct sGenericsFun* __result_obj__101;
_Bool _condtional_value_X266;
_Bool _condtional_value_X267;
struct sGenericsFun* __result_obj__102;
struct sGenericsFun* __result_obj__103;
struct sGenericsFun* __result_obj__104;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X253=((_Bool)1));    _condtional_value_X253;    })) {
        if(({        (_condtional_value_X254=(self->item_existance[it]));        _condtional_value_X254;        })) {
            if(({            (_condtional_value_X255=(string_equals(self->keys[it],key)));            _condtional_value_X255;            })) {
                __result_obj__101 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__101;
            }
            it++;
            if(({            (_condtional_value_X266=(it>=self->size));            _condtional_value_X266;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X267=(it==hash));            _condtional_value_X267;            })) {
                __result_obj__102 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__102;
            }
        }
        else {
            __result_obj__103 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__103;
        }
    }
    __result_obj__104 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
_Bool _condtional_value_X258;
_Bool _condtional_value_X259;
_Bool _condtional_value_X260;
_Bool _condtional_value_X261;
_Bool _condtional_value_X262;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
_Bool _condtional_value_X265;
    if(({    (_condtional_value_X256=(self!=((void*)0)&&self->mImplType!=((void*)0)));    _condtional_value_X256;    })) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X257=(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)));    _condtional_value_X257;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X258=(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)));    _condtional_value_X258;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X259=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X259;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X260=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X260;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X261=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X261;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X262=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X262;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X263=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X263;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X264=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X264;    })) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X265=(self!=((void*)0)&&self->mGenericsSName!=((void*)0)));    _condtional_value_X265;    })) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
_Bool _condtional_value_X269;
    if(({    (_condtional_value_X269=(self==((void*)0)));    _condtional_value_X269;    })) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
_Bool _condtional_value_X272;
    if(({    (_condtional_value_X272=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X272;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X273;
_Bool _condtional_value_X274;
_Bool _condtional_value_X275;
struct sFun* __result_obj__105;
_Bool _condtional_value_X294;
_Bool _condtional_value_X295;
struct sFun* __result_obj__106;
struct sFun* __result_obj__107;
struct sFun* __result_obj__108;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X273=((_Bool)1));    _condtional_value_X273;    })) {
        if(({        (_condtional_value_X274=(self->item_existance[it]));        _condtional_value_X274;        })) {
            if(({            (_condtional_value_X275=(string_equals(self->keys[it],key)));            _condtional_value_X275;            })) {
                __result_obj__105 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__105;
            }
            it++;
            if(({            (_condtional_value_X294=(it>=self->size));            _condtional_value_X294;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X295=(it==hash));            _condtional_value_X295;            })) {
                __result_obj__106 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__106;
            }
        }
        else {
            __result_obj__107 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__107;
        }
    }
    __result_obj__108 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X276;
_Bool _condtional_value_X277;
_Bool _condtional_value_X278;
_Bool _condtional_value_X279;
_Bool _condtional_value_X280;
_Bool _condtional_value_X281;
_Bool _condtional_value_X282;
_Bool _condtional_value_X283;
_Bool _condtional_value_X286;
_Bool _condtional_value_X287;
_Bool _condtional_value_X288;
_Bool _condtional_value_X289;
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
_Bool _condtional_value_X292;
_Bool _condtional_value_X293;
    if(({    (_condtional_value_X276=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X276;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X277=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X277;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X278=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X278;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X279=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X279;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X280=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X280;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X281=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X281;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X282=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X282;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X283=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X283;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X286=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X286;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X287=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X287;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X288=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X288;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X289=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X289;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X290=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X290;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X291=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X291;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X292=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X292;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X293=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X293;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X284;
_Bool _condtional_value_X285;
    if(({    (_condtional_value_X284=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X284;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X285=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X285;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
_Bool _condtional_value_X298;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X299;
_Bool _condtional_value_X300;
struct CVALUE* __result_obj__110;
struct CVALUE* default_value;
struct CVALUE* __result_obj__111;
default_value = (void*)0;
    if(({    (_condtional_value_X298=(position<0));    _condtional_value_X298;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X299=(it!=((void*)0)));    _condtional_value_X299;    })) {
        if(({        (_condtional_value_X300=(position==i));        _condtional_value_X300;        })) {
            __result_obj__110 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__110;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__111 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
_Bool _condtional_value_X301;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X302;
_Bool _condtional_value_X303;
struct CVALUE* __result_obj__112;
struct CVALUE* default_value;
struct CVALUE* __result_obj__113;
default_value = (void*)0;
    if(({    (_condtional_value_X301=(position<0));    _condtional_value_X301;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X302=(it!=((void*)0)));    _condtional_value_X302;    })) {
        if(({        (_condtional_value_X303=(position==i));        _condtional_value_X303;        })) {
            __result_obj__112 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__112;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__113 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
_Bool _condtional_value_X305;
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
int len;
int i;
_Bool _condtional_value_X308;
_Bool _condtional_value_X309;
_Bool _condtional_value_X310;
struct sType* default_value;
struct list$1sType$ph* __result_obj__115;
struct list_item$1sType$ph* it;
int i_27;
_Bool _condtional_value_X313;
_Bool _condtional_value_X314;
struct sType* __dec_obj75;
struct list$1sType$ph* __result_obj__116;
default_value = (void*)0;
    if(({    (_condtional_value_X305=(position<0));    _condtional_value_X305;    })) {
        position+=self->len;
    }
    if(({    (_condtional_value_X306=(position<0));    _condtional_value_X306;    })) {
        position=0;
    }
    if(({    (_condtional_value_X307=(self->len==0||position>=self->len));    _condtional_value_X307;    })) {
        len=self->len;
        for(        ({        (_condtional_value_X308=(i=0));        _condtional_value_X308;        });        ({        (_condtional_value_X309=(i<position-len));        _condtional_value_X309;        });        ({        (_condtional_value_X310=(i++));        _condtional_value_X310;        })        ){
            memset(&default_value,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__115 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__115;
    }
    it=self->head;
    i_27=0;
    while(({    (_condtional_value_X313=(it!=((void*)0)));    _condtional_value_X313;    })) {
        if(({        (_condtional_value_X314=(position==i_27));        _condtional_value_X314;        })) {
            __dec_obj75=it->item,
            it->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it=it->next;
        i_27++;
    }
    __result_obj__116 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X311;
void* __right_value211 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj72;
_Bool _condtional_value_X312;
void* __right_value212 = (void*)0;
struct list_item$1sType$ph* litem_25;
struct sType* __dec_obj73;
void* __right_value213 = (void*)0;
struct list_item$1sType$ph* litem_26;
struct sType* __dec_obj74;
struct list$1sType$ph* __result_obj__114;
    if(({    (_condtional_value_X311=(self->len==0));    _condtional_value_X311;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value211=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj72=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X312=(self->len==1));    _condtional_value_X312;    })) {
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value212=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1sType$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj73=litem_25->item,
        litem_25->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value213=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1sType$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj74=litem_26->item,
        litem_26->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__114 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
_Bool _condtional_value_X315;
struct sType* result;
struct sType* __result_obj__117;
_Bool _condtional_value_X316;
struct sType* __result_obj__118;
struct sType* result_29;
struct sType* __result_obj__119;
result = (void*)0;
result_29 = (void*)0;
    if(({    (_condtional_value_X315=(self==((void*)0)));    _condtional_value_X315;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__117 = result;
        return __result_obj__117;
    }
    self->it=self->head;
    if(({    (_condtional_value_X316=(self->it));    _condtional_value_X316;    })) {
        __result_obj__118 = self->it->item;
        return __result_obj__118;
    }
    memset(&result_29,0,sizeof(struct sType*));
    __result_obj__119 = result_29;
    return __result_obj__119;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
_Bool _condtional_value_X319;
struct sType* result;
struct sType* __result_obj__120;
_Bool _condtional_value_X320;
struct sType* __result_obj__121;
struct sType* result_31;
struct sType* __result_obj__122;
result = (void*)0;
result_31 = (void*)0;
    if(({    (_condtional_value_X319=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X319;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__120 = result;
        return __result_obj__120;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X320=(self->it));    _condtional_value_X320;    })) {
        __result_obj__121 = self->it->item;
        return __result_obj__121;
    }
    memset(&result_31,0,sizeof(struct sType*));
    __result_obj__122 = result_31;
    return __result_obj__122;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X327;
void* __right_value224 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj77;
_Bool _condtional_value_X328;
void* __right_value225 = (void*)0;
struct list_item$1CVALUE$ph* litem_42;
struct CVALUE* __dec_obj78;
void* __right_value226 = (void*)0;
struct list_item$1CVALUE$ph* litem_43;
struct CVALUE* __dec_obj79;
struct list$1CVALUE$ph* __result_obj__124;
    if(({    (_condtional_value_X327=(self->len==0));    _condtional_value_X327;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value224=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj77=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X328=(self->len==1));    _condtional_value_X328;    })) {
        litem_42=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value225=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1CVALUE$ph*"))));
        litem_42->prev=self->head;
        litem_42->next=((void*)0);
        __dec_obj78=litem_42->item,
        litem_42->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_42;
        self->head->next=litem_42;
    }
    else {
        litem_43=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value226=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1CVALUE$ph*"))));
        litem_43->prev=self->tail;
        litem_43->next=((void*)0);
        __dec_obj79=litem_43->item,
        litem_43->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_43;
        self->tail=litem_43;
    }
    self->len++;
    __result_obj__124 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
_Bool _condtional_value_X338;
_Bool _condtional_value_X363;
_Bool _condtional_value_X364;
_Bool _condtional_value_X365;
_Bool _condtional_value_X366;
struct map$2char$phsFun$ph* __result_obj__129;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X336=((_Bool)1));    _condtional_value_X336;    })) {
        if(({        (_condtional_value_X337=(self->item_existance[it]));        _condtional_value_X337;        })) {
            if(({            (_condtional_value_X338=(string_equals(self->keys[it],key)));            _condtional_value_X338;            })) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=(_Bool)0;
                if(({                (_condtional_value_X363=(1));                _condtional_value_X363;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(({                (_condtional_value_X364=(1));                _condtional_value_X364;                })) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sFun*));
                self->len--;
                break;
            }
            it++;
            if(({            (_condtional_value_X365=(it>=self->size));            _condtional_value_X365;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X366=(it==hash));            _condtional_value_X366;            })) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__129 = self;
    return __result_obj__129;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X339;
_Bool _condtional_value_X340;
struct list$1char$ph* __result_obj__128;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X339=(it!=((void*)0)));    _condtional_value_X339;    })) {
        if(({        (_condtional_value_X340=(string_equals(it->item,item)));        _condtional_value_X340;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__128 = self;
    return __result_obj__128;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X341;
_Bool _condtional_value_X342;
_Bool _condtional_value_X343;
int tmp;
_Bool _condtional_value_X344;
_Bool _condtional_value_X345;
_Bool _condtional_value_X346;
struct list$1char$ph* __result_obj__125;
_Bool _condtional_value_X347;
_Bool _condtional_value_X349;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X350;
_Bool _condtional_value_X351;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X352;
_Bool _condtional_value_X353;
struct list_item$1char$ph* it_49;
int i_50;
_Bool _condtional_value_X354;
_Bool _condtional_value_X355;
_Bool _condtional_value_X356;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_53;
_Bool _condtional_value_X357;
_Bool _condtional_value_X358;
_Bool _condtional_value_X359;
_Bool _condtional_value_X360;
struct list_item$1char$ph* prev_it_54;
_Bool _condtional_value_X361;
_Bool _condtional_value_X362;
struct list$1char$ph* __result_obj__127;
    if(({    (_condtional_value_X341=(head<0));    _condtional_value_X341;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X342=(tail<0));    _condtional_value_X342;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X343=(head>tail));    _condtional_value_X343;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X344=(head<0));    _condtional_value_X344;    })) {
        head=0;
    }
    if(({    (_condtional_value_X345=(tail>self->len));    _condtional_value_X345;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X346=(head==tail));    _condtional_value_X346;    })) {
        __result_obj__125 = self;
        return __result_obj__125;
    }
    if(({    (_condtional_value_X347=(head==0&&tail==self->len));    _condtional_value_X347;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X349=(head==0));    _condtional_value_X349;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X350=(it!=((void*)0)));        _condtional_value_X350;        })) {
            if(({            (_condtional_value_X351=(i<tail));            _condtional_value_X351;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X352=(i==tail));            _condtional_value_X352;            })) {
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
    else if(({    (_condtional_value_X353=(tail==self->len));    _condtional_value_X353;    })) {
        it_49=self->head;
        i_50=0;
        while(({        (_condtional_value_X354=(it_49!=((void*)0)));        _condtional_value_X354;        })) {
            if(({            (_condtional_value_X355=(i_50==head));            _condtional_value_X355;            })) {
                self->tail=it_49->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X356=(i_50>=head));            _condtional_value_X356;            })) {
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
        while(({        (_condtional_value_X357=(it_52!=((void*)0)));        _condtional_value_X357;        })) {
            if(({            (_condtional_value_X358=(i_53==head));            _condtional_value_X358;            })) {
                head_prev_it=it_52->prev;
            }
            if(({            (_condtional_value_X359=(i_53==tail));            _condtional_value_X359;            })) {
                tail_it=it_52;
            }
            if(({            (_condtional_value_X360=(i_53>=head&&i_53<tail));            _condtional_value_X360;            })) {
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
        if(({        (_condtional_value_X361=(head_prev_it!=((void*)0)));        _condtional_value_X361;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X362=(tail_it!=((void*)0)));        _condtional_value_X362;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__127 = self;
    return __result_obj__127;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X348;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__126;
    it=self->head;
    while(({    (_condtional_value_X348=(it!=((void*)0)));    _condtional_value_X348;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__126 = self;
    return __result_obj__126;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
_Bool _condtional_value_X442;
struct sFun* __result_obj__136;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
struct sFun* __result_obj__137;
struct sFun* __result_obj__138;
struct sFun* __result_obj__139;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X440=((_Bool)1));    _condtional_value_X440;    })) {
        if(({        (_condtional_value_X441=(self->item_existance[it]));        _condtional_value_X441;        })) {
            if(({            (_condtional_value_X442=(string_equals(self->keys[it],key)));            _condtional_value_X442;            })) {
                __result_obj__136 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__136;
            }
            it++;
            if(({            (_condtional_value_X443=(it>=self->size));            _condtional_value_X443;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X444=(it==hash));            _condtional_value_X444;            })) {
                __result_obj__137 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__137;
            }
        }
        else {
            __result_obj__138 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__138;
        }
    }
    __result_obj__139 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X445;
_Bool _condtional_value_X446;
_Bool _condtional_value_X447;
struct sFun* __result_obj__140;
_Bool _condtional_value_X448;
_Bool _condtional_value_X449;
struct sFun* __result_obj__141;
struct sFun* __result_obj__142;
struct sFun* __result_obj__143;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X445=((_Bool)1));    _condtional_value_X445;    })) {
        if(({        (_condtional_value_X446=(self->item_existance[it]));        _condtional_value_X446;        })) {
            if(({            (_condtional_value_X447=(string_equals(self->keys[it],key)));            _condtional_value_X447;            })) {
                __result_obj__140 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__140;
            }
            it++;
            if(({            (_condtional_value_X448=(it>=self->size));            _condtional_value_X448;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X449=(it==hash));            _condtional_value_X449;            })) {
                __result_obj__141 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__141;
            }
        }
        else {
            __result_obj__142 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__142;
        }
    }
    __result_obj__143 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X479;
char* result;
char* __result_obj__148;
_Bool _condtional_value_X480;
char* __result_obj__149;
char* result_131;
char* __result_obj__150;
result = (void*)0;
result_131 = (void*)0;
    if(({    (_condtional_value_X479=(self==((void*)0)));    _condtional_value_X479;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__148 = result;
        return __result_obj__148;
    }
    self->it=self->head;
    if(({    (_condtional_value_X480=(self->it));    _condtional_value_X480;    })) {
        __result_obj__149 = self->it->item;
        return __result_obj__149;
    }
    memset(&result_131,0,sizeof(char*));
    __result_obj__150 = result_131;
    return __result_obj__150;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X483;
char* result;
char* __result_obj__151;
_Bool _condtional_value_X484;
char* __result_obj__152;
char* result_133;
char* __result_obj__153;
result = (void*)0;
result_133 = (void*)0;
    if(({    (_condtional_value_X483=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X483;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__151 = result;
        return __result_obj__151;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X484=(self->it));    _condtional_value_X484;    })) {
        __result_obj__152 = self->it->item;
        return __result_obj__152;
    }
    memset(&result_133,0,sizeof(char*));
    __result_obj__153 = result_133;
    return __result_obj__153;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
_Bool _condtional_value_X489;
_Bool _condtional_value_X490;
_Bool _condtional_value_X491;
int len;
int i;
_Bool _condtional_value_X492;
_Bool _condtional_value_X493;
_Bool _condtional_value_X494;
struct CVALUE* default_value;
struct list$1CVALUE$ph* __result_obj__154;
struct list_item$1CVALUE$ph* it;
int i_134;
_Bool _condtional_value_X495;
_Bool _condtional_value_X496;
struct CVALUE* __dec_obj139;
struct list$1CVALUE$ph* __result_obj__155;
default_value = (void*)0;
    if(({    (_condtional_value_X489=(position<0));    _condtional_value_X489;    })) {
        position+=self->len;
    }
    if(({    (_condtional_value_X490=(position<0));    _condtional_value_X490;    })) {
        position=0;
    }
    if(({    (_condtional_value_X491=(self->len==0||position>=self->len));    _condtional_value_X491;    })) {
        len=self->len;
        for(        ({        (_condtional_value_X492=(i=0));        _condtional_value_X492;        });        ({        (_condtional_value_X493=(i<position-len));        _condtional_value_X493;        });        ({        (_condtional_value_X494=(i++));        _condtional_value_X494;        })        ){
            memset(&default_value,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__154 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__154;
    }
    it=self->head;
    i_134=0;
    while(({    (_condtional_value_X495=(it!=((void*)0)));    _condtional_value_X495;    })) {
        if(({        (_condtional_value_X496=(position==i_134));        _condtional_value_X496;        })) {
            __dec_obj139=it->item,
            it->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj139,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it=it->next;
        i_134++;
    }
    __result_obj__155 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__155;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X515;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X516;
_Bool _condtional_value_X517;
char* __result_obj__158;
char* default_value;
char* __result_obj__159;
default_value = (void*)0;
    if(({    (_condtional_value_X515=(position<0));    _condtional_value_X515;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X516=(it!=((void*)0)));    _condtional_value_X516;    })) {
        if(({        (_condtional_value_X517=(position==i));        _condtional_value_X517;        })) {
            __result_obj__158 = (char*)come_increment_ref_count(it->item);
            (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__158;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__159 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X518;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X519;
_Bool _condtional_value_X520;
char* __result_obj__160;
char* default_value;
char* __result_obj__161;
default_value = (void*)0;
    if(({    (_condtional_value_X518=(position<0));    _condtional_value_X518;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X519=(it!=((void*)0)));    _condtional_value_X519;    })) {
        if(({        (_condtional_value_X520=(position==i));        _condtional_value_X520;        })) {
            __result_obj__160 = (char*)come_increment_ref_count(it->item);
            (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__160;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__161 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
_Bool _condtional_value_X528;
    if(({    (_condtional_value_X528=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X528;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
_Bool _condtional_value_X529;
struct sCurrentNode* __result_obj__165;
void* __right_value441 = (void*)0;
struct sCurrentNode* result;
_Bool _condtional_value_X530;
_Bool _condtional_value_X531;
void* __right_value442 = (void*)0;
char* __dec_obj145;
_Bool _condtional_value_X532;
struct sCurrentNode* __result_obj__166;
    if(({    (_condtional_value_X529=(self==(void*)0));    _condtional_value_X529;    })) {
        __result_obj__165 = (void*)0;
        return __result_obj__165;
    }
    result=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(({    (_condtional_value_X530=(self!=((void*)0)));    _condtional_value_X530;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X531=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X531;    })) {
        __dec_obj145=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X532=(self!=((void*)0)));    _condtional_value_X532;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__166 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X534;
_Bool _condtional_value_X535;
_Bool _condtional_value_X536;
struct sClass* __result_obj__168;
_Bool _condtional_value_X545;
_Bool _condtional_value_X546;
struct sClass* __result_obj__169;
struct sClass* __result_obj__170;
struct sClass* __result_obj__171;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X534=((_Bool)1));    _condtional_value_X534;    })) {
        if(({        (_condtional_value_X535=(self->item_existance[it]));        _condtional_value_X535;        })) {
            if(({            (_condtional_value_X536=(string_equals(self->keys[it],key)));            _condtional_value_X536;            })) {
                __result_obj__168 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__168;
            }
            it++;
            if(({            (_condtional_value_X545=(it>=self->size));            _condtional_value_X545;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X546=(it==hash));            _condtional_value_X546;            })) {
                __result_obj__169 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__169;
            }
        }
        else {
            __result_obj__170 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__170;
        }
    }
    __result_obj__171 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static void sClass_finalize(struct sClass* self){
_Bool _condtional_value_X537;
_Bool _condtional_value_X538;
_Bool _condtional_value_X543;
_Bool _condtional_value_X544;
    if(({    (_condtional_value_X537=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X537;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X538=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X538;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X543=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X543;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X544=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X544;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X539;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X539=(it!=((void*)0)));    _condtional_value_X539;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X540;
    if(({    (_condtional_value_X540=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X540;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X541;
_Bool _condtional_value_X542;
    if(({    (_condtional_value_X541=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X541;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X542=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X542;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X547;
_Bool _condtional_value_X548;
_Bool _condtional_value_X549;
struct sClass* __result_obj__172;
_Bool _condtional_value_X550;
_Bool _condtional_value_X551;
struct sClass* __result_obj__173;
struct sClass* __result_obj__174;
struct sClass* __result_obj__175;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X547=((_Bool)1));    _condtional_value_X547;    })) {
        if(({        (_condtional_value_X548=(self->item_existance[it]));        _condtional_value_X548;        })) {
            if(({            (_condtional_value_X549=(string_equals(self->keys[it],key)));            _condtional_value_X549;            })) {
                __result_obj__172 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__172;
            }
            it++;
            if(({            (_condtional_value_X550=(it>=self->size));            _condtional_value_X550;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X551=(it==hash));            _condtional_value_X551;            })) {
                __result_obj__173 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__173;
            }
        }
        else {
            __result_obj__174 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__174;
        }
    }
    __result_obj__175 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__175;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value489 = (void*)0;
struct buffer* __dec_obj157;
struct sComeCallNode* __result_obj__180;
    ((struct sNodeBase*)(__right_value489=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value489, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj157=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj157,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__180 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComeCallNode_finalize, __result_obj__180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__180;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value490 = (void*)0;
char* __result_obj__181;
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value490=__builtin_string("sComeCallNode"))));
    (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline;
struct buffer* come_block;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1CVALUE$ph* come_params;
void* __right_value493 = (void*)0;
char* var_name;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* type_;
_Bool _condtional_value_X580;
_Bool __result_obj__186;
void* __right_value497 = (void*)0;
struct sNode* var_node;
_Bool Value;
_Bool _condtional_value_X581;
_Bool __result_obj__187;
void* __right_value498 = (void*)0;
struct CVALUE* thread_var_value;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* come_value;
void* __right_value501 = (void*)0;
char* __dec_obj158;
struct sType* __dec_obj159;
void* __right_value502 = (void*)0;
struct sNode* null_node;
_Bool Value_169;
_Bool _condtional_value_X582;
_Bool __result_obj__188;
void* __right_value503 = (void*)0;
struct CVALUE* __dec_obj160;
void* __right_value504 = (void*)0;
struct sType* __dec_obj161;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sNode* _inf_value7;
struct sCurrentNode* _inf_obj_value7;
void* __right_value507 = (void*)0;
struct sNode* current_stack_frame_node;
_Bool Value_170;
_Bool _condtional_value_X583;
_Bool __result_obj__189;
void* __right_value508 = (void*)0;
struct CVALUE* current_stack_frame_value;
void* __right_value509 = (void*)0;
char* fun_name;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct buffer* come_block2;
void* __right_value512 = (void*)0;
char* class_name;
void* __right_value513 = (void*)0;
struct sClass* current_stack_frame_struct;
void* __right_value514 = (void*)0;
struct buffer* source3;
char* p;
char* head;
int sline;
struct buffer* __dec_obj162;
void* __right_value515 = (void*)0;
struct sNode* node;
_Bool in_method_block;
_Bool Value_171;
_Bool _condtional_value_X584;
_Bool __result_obj__190;
struct buffer* __dec_obj163;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* fun_value;
void* __right_value518 = (void*)0;
char* __dec_obj164;
struct sType* __dec_obj165;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct buffer* buf;
void* __right_value521 = (void*)0;
char* fun_name_172;
int j;
struct list$1CVALUE$ph* o2_saved;
struct CVALUE* it;
_Bool _condtional_value_X585;
_Bool _condtional_value_X586;
_Bool _condtional_value_X587;
_Bool _condtional_value_X588;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct CVALUE* come_value_173;
void* __right_value524 = (void*)0;
char* __dec_obj166;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* type;
_Bool _condtional_value_X589;
struct sType* __dec_obj167;
_Bool __result_obj__191;
    come_block_sline=self->come_block_sline;
    come_block=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1470, "struct list$1CVALUE$ph*"))));
    static int thread_num=0;
    thread_num++;
    var_name=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num));
    type_=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value495=map$2char$phsType$ph_at(info->types,((char*)(__right_value494=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value495, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X580=(type_==((void*)0)));    _condtional_value_X580;    })) {
        err_msg(info,"pthread_t is not defined");
        __result_obj__186 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__186;
    }
    var_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_),(_Bool)1,((void*)0),info,(_Bool)0));
    Value=node_compile(var_node,info);
    if(({    (_condtional_value_X581=(!Value));    _condtional_value_X581;    })) {
        __result_obj__187 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__187;
    }
    else {
    }
    thread_var_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1492, "struct CVALUE*"))));
    __dec_obj158=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value->c_value));
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj159=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(thread_var_value->type);
    come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_169=node_compile(null_node,info);
    if(({    (_condtional_value_X582=(!Value_169));    _condtional_value_X582;    })) {
        __result_obj__188 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__188;
    }
    else {
    }
    __dec_obj160=come_value,
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj161=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1511, "struct sNode");
    _inf_obj_value7=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value506=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1511, "struct sCurrentNode*")),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sCurrentNode_finalize;
    _inf_value7->clone=(void*)sCurrentNode_clone;
    _inf_value7->compile=(void*)sCurrentNode_compile;
    _inf_value7->sline=(void*)sCurrentNode_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sCurrentNode_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sCurrentNode_kind;
    _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer(sCurrentNode_finalize, __right_value506, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_170=node_compile(current_stack_frame_node,info);
    if(({    (_condtional_value_X583=(!Value_170));    _condtional_value_X583;    })) {
        __result_obj__189 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__189;
    }
    else {
    }
    current_stack_frame_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num));
    come_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1521, "struct buffer*"))));
    class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2,"void* %s(%s* parent)\n",fun_name,class_name);
    buffer_append_str(come_block2,((char*)(__right_value513=buffer_to_string(come_block))));
    (__right_value513 = come_decrement_ref_count(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value514=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    come_call_finalizer(sClass_finalize, __right_value514, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    source3=(struct buffer*)come_increment_ref_count(info->source);
    p=info->p;
    head=info->head;
    sline=info->sline;
    __dec_obj162=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2);
    come_call_finalizer(buffer_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline;
    node=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_171=node_compile(node,info);
    if(({    (_condtional_value_X584=(!Value_171));    _condtional_value_X584;    })) {
        __result_obj__190 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__190;
    }
    else {
    }
    info->in_method_block=in_method_block;
    __dec_obj163=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3);
    come_call_finalizer(buffer_finalize, __dec_obj163,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1558, "struct CVALUE*"))));
    __dec_obj164=fun_value->c_value,
    fun_value->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name));
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj165=come_value->type,
    come_value->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_add(come_params,(struct CVALUE*)come_increment_ref_count(fun_value));
    list$1CVALUE$ph_add(come_params,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1568, "struct buffer*"))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    fun_name_172=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf,"(");
    buffer_append_str(buf,fun_name_172);
    buffer_append_str(buf,"(");
    j=0;
    for(    ({    (_condtional_value_X585=(o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params)),it=list$1CVALUE$ph_begin((o2_saved))));    _condtional_value_X585;    });    ({    (_condtional_value_X586=(!list$1CVALUE$ph_end((o2_saved))));    _condtional_value_X586;    });    ({    (_condtional_value_X587=(it=list$1CVALUE$ph_next((o2_saved))));    _condtional_value_X587;    })    ){
        buffer_append_str(buf,it->c_value);
        if(({        (_condtional_value_X588=(j!=list$1CVALUE$ph_length(come_params)-1));        _condtional_value_X588;        })) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf,")");
    buffer_append_str(buf,", ");
    buffer_append_str(buf,thread_var_value->c_value);
    buffer_append_str(buf,")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_173=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1591, "struct CVALUE*"))));
    __dec_obj166=come_value_173->c_value,
    come_value_173->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value526=map$2char$phsType$ph_at(info->types,((char*)(__right_value525=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value525 = come_decrement_ref_count(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value526, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X589=(type==((void*)0)));    _condtional_value_X589;    })) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj167=come_value_173->type,
    come_value_173->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_173->var=((void*)0);
    add_come_last_code(info,"%s",come_value_173->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_173));
    __result_obj__191 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name_172 = come_decrement_ref_count(fun_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__191;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
_Bool _condtional_value_X573;
_Bool _condtional_value_X574;
    if(({    (_condtional_value_X573=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X573;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X574=(self!=((void*)0)&&self->come_block!=((void*)0)));    _condtional_value_X574;    })) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X575;
_Bool _condtional_value_X576;
_Bool _condtional_value_X577;
struct sType* __result_obj__182;
_Bool _condtional_value_X578;
_Bool _condtional_value_X579;
struct sType* __result_obj__183;
struct sType* __result_obj__184;
struct sType* __result_obj__185;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X575=((_Bool)1));    _condtional_value_X575;    })) {
        if(({        (_condtional_value_X576=(self->item_existance[it]));        _condtional_value_X576;        })) {
            if(({            (_condtional_value_X577=(string_equals(self->keys[it],key)));            _condtional_value_X577;            })) {
                __result_obj__182 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__182;
            }
            it++;
            if(({            (_condtional_value_X578=(it>=self->size));            _condtional_value_X578;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X579=(it==hash));            _condtional_value_X579;            })) {
                __result_obj__183 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__183;
            }
        }
        else {
            __result_obj__184 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__184;
        }
    }
    __result_obj__185 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__185;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value528 = (void*)0;
struct sNode* __dec_obj168;
struct sComeJoinNode* __result_obj__192;
    ((struct sNodeBase*)(__right_value528=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value528, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj168=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__192 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__192;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value529 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("sComeJoinNode"))));
    (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X592;
_Bool __result_obj__194;
void* __right_value530 = (void*)0;
struct CVALUE* come_value;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct buffer* buf;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct CVALUE* come_value_174;
void* __right_value535 = (void*)0;
char* __dec_obj169;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj170;
_Bool __result_obj__195;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(({    (_condtional_value_X592=(!Value));    _condtional_value_X592;    })) {
        __result_obj__194 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__194;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1638, "struct buffer*"))));
    buffer_append_str(buf,"pthread_join(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_174=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1643, "struct CVALUE*"))));
    __dec_obj169=come_value_174->c_value,
    come_value_174->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj170=come_value_174->type,
    come_value_174->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1645, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_174->var=((void*)0);
    add_come_last_code(info,"%s",come_value_174->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
    __result_obj__195 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__195;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
_Bool _condtional_value_X590;
_Bool _condtional_value_X591;
    if(({    (_condtional_value_X590=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X590;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X591=(self!=((void*)0)&&self->node!=((void*)0)));    _condtional_value_X591;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value539 = (void*)0;
struct list$1sNode$ph* __dec_obj171;
struct list$1sBlock$ph* __dec_obj172;
struct sBlock* __dec_obj173;
struct sComePollNode* __result_obj__196;
    ((struct sNodeBase*)(__right_value539=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value539, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj171=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj172=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj172,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj173=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj173,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->time_out=time_out;
    __result_obj__196 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComePollNode_finalize, __result_obj__196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value540 = (void*)0;
char* __result_obj__197;
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value540=__builtin_string("sComePollNode"))));
    (__right_value540 = come_decrement_ref_count(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars;
struct list$1sBlock$ph* blocks;
int time_out;
int n;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _condtional_value_X603;
_Bool _condtional_value_X604;
_Bool _condtional_value_X607;
_Bool Value;
_Bool _condtional_value_X608;
_Bool __result_obj__204;
void* __right_value541 = (void*)0;
struct CVALUE* come_value;
int n_177;
struct list$1sNode$ph* o2_saved_178;
struct sNode* it_179;
_Bool _condtional_value_X609;
_Bool _condtional_value_X610;
_Bool _condtional_value_X611;
void* __right_value542 = (void*)0;
_Bool __result_obj__209;
    vars=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out=self->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(vars));
    n=0;
    for(    ({    (_condtional_value_X603=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it=list$1sNode$ph_begin((o2_saved))));    _condtional_value_X603;    });    ({    (_condtional_value_X604=(!list$1sNode$ph_end((o2_saved))));    _condtional_value_X604;    });    ({    (_condtional_value_X607=(it=list$1sNode$ph_next((o2_saved))));    _condtional_value_X607;    })    ){
        Value=node_compile(it,info);
        if(({        (_condtional_value_X608=(!Value));        _condtional_value_X608;        })) {
            __result_obj__204 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__204;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,come_value->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x0001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(vars),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_177=0;
    for(    ({    (_condtional_value_X609=(o2_saved_178=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_179=list$1sNode$ph_begin((o2_saved_178))));    _condtional_value_X609;    });    ({    (_condtional_value_X610=(!list$1sNode$ph_end((o2_saved_178))));    _condtional_value_X610;    });    ({    (_condtional_value_X611=(it_179=list$1sNode$ph_next((o2_saved_178))));    _condtional_value_X611;    })    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_177,0x0001);
        transpile_block(((struct sBlock*)(__right_value542=list$1sBlock$ph_operator_load_element(blocks,n_177))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value542, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        add_come_code(info,"}\n");
        n_177++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__209 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__209;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
_Bool _condtional_value_X593;
struct list_item$1sBlock$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X593=(it!=((void*)0)));    _condtional_value_X593;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
_Bool _condtional_value_X594;
    if(({    (_condtional_value_X594=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X594;    })) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
_Bool _condtional_value_X595;
_Bool _condtional_value_X596;
_Bool _condtional_value_X597;
_Bool _condtional_value_X599;
    if(({    (_condtional_value_X595=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X595;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X596=(self!=((void*)0)&&self->vars!=((void*)0)));    _condtional_value_X596;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X597=(self!=((void*)0)&&self->blocks!=((void*)0)));    _condtional_value_X597;    })) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X599=(self!=((void*)0)&&self->else_block!=((void*)0)));    _condtional_value_X599;    })) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
_Bool _condtional_value_X598;
struct list_item$1sBlock$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X598=(it!=((void*)0)));    _condtional_value_X598;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _condtional_value_X600;
    if(({    (_condtional_value_X600=(self==((void*)0)));    _condtional_value_X600;    })) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X601;
struct sNode* result;
struct sNode* __result_obj__198;
_Bool _condtional_value_X602;
struct sNode* __result_obj__199;
struct sNode* result_175;
struct sNode* __result_obj__200;
result = (void*)0;
result_175 = (void*)0;
    if(({    (_condtional_value_X601=(self==((void*)0)));    _condtional_value_X601;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__198 = result;
        return __result_obj__198;
    }
    self->it=self->head;
    if(({    (_condtional_value_X602=(self->it));    _condtional_value_X602;    })) {
        __result_obj__199 = self->it->item;
        return __result_obj__199;
    }
    memset(&result_175,0,sizeof(struct sNode*));
    __result_obj__200 = result_175;
    return __result_obj__200;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X605;
struct sNode* result;
struct sNode* __result_obj__201;
_Bool _condtional_value_X606;
struct sNode* __result_obj__202;
struct sNode* result_176;
struct sNode* __result_obj__203;
result = (void*)0;
result_176 = (void*)0;
    if(({    (_condtional_value_X605=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X605;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__201 = result;
        return __result_obj__201;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X606=(self->it));    _condtional_value_X606;    })) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_176,0,sizeof(struct sNode*));
    __result_obj__203 = result_176;
    return __result_obj__203;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
_Bool _condtional_value_X612;
struct list_item$1sBlock$ph* it;
int i;
_Bool _condtional_value_X613;
_Bool _condtional_value_X614;
struct sBlock* __result_obj__205;
struct sBlock* default_value;
struct sBlock* __result_obj__206;
default_value = (void*)0;
    if(({    (_condtional_value_X612=(position<0));    _condtional_value_X612;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X613=(it!=((void*)0)));    _condtional_value_X613;    })) {
        if(({        (_condtional_value_X614=(position==i));        _condtional_value_X614;        })) {
            __result_obj__205 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__205;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sBlock*));
    __result_obj__206 = (struct sBlock*)come_increment_ref_count(default_value);
    come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__206;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
_Bool _condtional_value_X615;
struct list_item$1sBlock$ph* it;
int i;
_Bool _condtional_value_X616;
_Bool _condtional_value_X617;
struct sBlock* __result_obj__207;
struct sBlock* default_value;
struct sBlock* __result_obj__208;
default_value = (void*)0;
    if(({    (_condtional_value_X615=(position<0));    _condtional_value_X615;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X616=(it!=((void*)0)));    _condtional_value_X616;    })) {
        if(({        (_condtional_value_X617=(position==i));        _condtional_value_X617;        })) {
            __result_obj__207 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__207;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sBlock*));
    __result_obj__208 = (struct sBlock*)come_increment_ref_count(default_value);
    come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value543 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value544 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj175;
struct sLambdaCall* __result_obj__210;
    ((struct sNodeBase*)(__right_value543=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value543, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj174=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj175=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__210 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLambdaCall_finalize, __result_obj__210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value545 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value545=__builtin_string("sLambdaCall"))));
    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__211;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool Value;
_Bool _condtional_value_X621;
_Bool __result_obj__212;
void* __right_value546 = (void*)0;
struct CVALUE* come_value;
struct sType* lambda_type;
_Bool _condtional_value_X622;
_Bool __result_obj__213;
void* __right_value547 = (void*)0;
struct sType* result_type;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1CVALUE$ph* come_params;
_Bool _condtional_value_X623;
_Bool __result_obj__214;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
_Bool _condtional_value_X624;
_Bool _condtional_value_X625;
_Bool _condtional_value_X626;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label=0;
struct sNode* node_180=0;
_Bool Value_181;
_Bool _condtional_value_X627;
_Bool __result_obj__215;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_182;
void* __right_value551 = (void*)0;
struct sType* __dec_obj176;
void* __right_value552 = (void*)0;
_Bool _condtional_value_X628;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
_Bool _condtional_value_X629;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_183;
struct CVALUE* it_184;
_Bool _condtional_value_X630;
_Bool _condtional_value_X631;
_Bool _condtional_value_X632;
_Bool _condtional_value_X633;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct CVALUE* come_value2;
void* __right_value562 = (void*)0;
char* __dec_obj177;
_Bool _condtional_value_X634;
void* __right_value563 = (void*)0;
struct sType* __dec_obj178;
_Bool __result_obj__216;
    node=(struct sNode*)come_increment_ref_count(self->node);
    params=self->params;
    Value=node_compile(node,info);
    if(({    (_condtional_value_X621=(!Value));    _condtional_value_X621;    })) {
        __result_obj__212 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__212;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type=come_value->type;
    if(({    (_condtional_value_X622=(lambda_type->mResultType==((void*)0)));    _condtional_value_X622;    })) {
        err_msg(info,"invalid lambda type");
        __result_obj__213 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__213;
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
    result_type->mStatic=(_Bool)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1762, "struct list$1CVALUE$ph*"))));
    if(({    (_condtional_value_X623=(list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs));    _condtional_value_X623;    })) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
        __result_obj__214 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__214;
    }
    i=0;
    for(    ({    (_condtional_value_X624=(o2_saved=(params),it=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved))));    _condtional_value_X624;    });    ({    (_condtional_value_X625=(!list$1tuple2$2char$phsNode$ph$ph_end((o2_saved))));    _condtional_value_X625;    });    ({    (_condtional_value_X626=(it=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved))));    _condtional_value_X626;    })    ){
        multiple_assign_var12=it;
        label=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        node_180=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
        Value_181=node_compile(node_180,info);
        if(({        (_condtional_value_X627=(!Value_181));        _condtional_value_X627;        })) {
            __result_obj__215 = (_Bool)0;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_180) ? node_180 = come_decrement_ref_count(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__215;
        }
        else {
        }
        come_value_182=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj176=come_value_182->type,
        come_value_182->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_182->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X628=(lambda_type->mVarArgs&&((struct sType*)(__right_value552=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));        come_call_finalizer(sType_finalize, __right_value552, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        _condtional_value_X628;        })) {
        }
        else {
            check_assign_type(((char*)(__right_value554=xsprintf("calling param #\%s",((char*)(__right_value553=int_to_string(i)))))),((struct sType*)(__right_value555=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value_182->type,come_value_182,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value555, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X629=(((struct sType*)(__right_value556=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value_182->type->mHeap));            come_call_finalizer(sType_finalize, __right_value556, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X629;            })) {
                std_move(((struct sType*)(__right_value557=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value_182->type,come_value_182,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value557, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_182));
        i++;
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_180) ? node_180 = come_decrement_ref_count(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1794, "struct buffer*"))));
    buffer_append_str(buf,"(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,")");
    buffer_append_str(buf,"(");
    j=0;
    for(    ({    (_condtional_value_X630=(o2_saved_183=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params)),it_184=list$1CVALUE$ph_begin((o2_saved_183))));    _condtional_value_X630;    });    ({    (_condtional_value_X631=(!list$1CVALUE$ph_end((o2_saved_183))));    _condtional_value_X631;    });    ({    (_condtional_value_X632=(it_184=list$1CVALUE$ph_next((o2_saved_183))));    _condtional_value_X632;    })    ){
        buffer_append_str(buf,it_184->c_value);
        if(({        (_condtional_value_X633=(j!=list$1CVALUE$ph_length(come_params)-1));        _condtional_value_X633;        })) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf,")");
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1813, "struct CVALUE*"))));
    __dec_obj177=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    if(({    (_condtional_value_X634=(lambda_type->mResultType->mHeap));    _condtional_value_X634;    })) {
        append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(lambda_type->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __dec_obj178=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2->type->mStatic=(_Bool)0;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__216 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__216;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
_Bool _condtional_value_X618;
_Bool _condtional_value_X619;
_Bool _condtional_value_X620;
    if(({    (_condtional_value_X618=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X618;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X619=(self!=((void*)0)&&self->node!=((void*)0)));    _condtional_value_X619;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X620=(self!=((void*)0)&&self->params!=((void*)0)));    _condtional_value_X620;    })) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value564 = (void*)0;
struct sType* __dec_obj179;
struct sVarArgTypeName* __result_obj__217;
    ((struct sNodeBase*)(__right_value564=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value564, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj179=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__217 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__217;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value565 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value565=__builtin_string("sVarArgTypeName"))));
    (__right_value565 = come_decrement_ref_count(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__218;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value;
void* __right_value568 = (void*)0;
char* __dec_obj180;
struct sType* __dec_obj181;
_Bool __result_obj__219;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1850, "struct CVALUE*"))));
    __dec_obj180=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj181=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__219 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__219;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
_Bool _condtional_value_X635;
_Bool _condtional_value_X636;
    if(({    (_condtional_value_X635=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X635;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X636=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X636;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char* attr, struct sInfo* info){
void* __right_value569 = (void*)0;
char* __dec_obj182;
struct sInnerAttribute* __result_obj__220;
    ((struct sNodeBase*)(__right_value569=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value569, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj182=self->attr,
    self->attr=(char*)come_increment_ref_count(attr);
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__220 = (struct sInnerAttribute*)come_increment_ref_count(self);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__220;
}

char* sInnerAttribute_kind(struct sInnerAttribute* self){
void* __right_value570 = (void*)0;
char* __result_obj__221;
    __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value570=__builtin_string("sInnerAttribute"))));
    (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__221;
}

_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo* info){
char* attr;
_Bool __result_obj__222;
    attr=(char*)come_increment_ref_count(self->attr);
    add_come_code(info,"__attribute__%s",attr);
    __result_obj__222 = (_Bool)1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__222;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self){
_Bool _condtional_value_X637;
_Bool _condtional_value_X638;
    if(({    (_condtional_value_X637=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X637;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X638=(self!=((void*)0)&&self->attr!=((void*)0)));    _condtional_value_X638;    })) {
        (self->attr = come_decrement_ref_count(self->attr, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1sType$ph* method_generics_types;
_Bool _condtional_value_X639;
_Bool _condtional_value_X640;
_Bool _condtional_value_X641;
_Bool _condtional_value_X642;
_Bool _condtional_value_X643;
void* __right_value573 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X646;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool _va_arg;
_Bool _condtional_value_X647;
_Bool _condtional_value_X648;
_Bool _condtional_value_X649;
char* p;
int sline;
_Bool err_flag;
void* __right_value577 = (void*)0;
char* label;
_Bool _condtional_value_X650;
void* __right_value578 = (void*)0;
char* __dec_obj183;
_Bool _condtional_value_X651;
char* __dec_obj184;
_Bool no_comma;
_Bool in_fun_param;
void* __right_value579 = (void*)0;
struct sNode* node;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
_Bool _condtional_value_X654;
_Bool _condtional_value_X655;
struct buffer* method_block;
int method_block_sline;
_Bool _condtional_value_X656;
char* head;
void* __right_value586 = (void*)0;
char* tail;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct buffer* __dec_obj191;
int len;
void* __right_value589 = (void*)0;
char* mem;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value8;
struct sFunCallNode* _inf_obj_value8;
void* __right_value598 = (void*)0;
struct sNode* node_187;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj197;
struct sNode* __result_obj__227;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1888, "struct list$1sType$ph*"))));
    if(({    (_condtional_value_X639=(*info->p==60));    _condtional_value_X639;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        while(({        (_condtional_value_X640=((_Bool)1));        _condtional_value_X640;        })) {
            if(({            (_condtional_value_X641=(*info->p==0));            _condtional_value_X641;            })) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(({            (_condtional_value_X642=(*info->p==62));            _condtional_value_X642;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(({            (_condtional_value_X643=(*info->p==44));            _condtional_value_X643;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value573=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err=multiple_assign_var13->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value573, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X646=(!err));                _condtional_value_X646;                })) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types,(struct sType*)come_increment_ref_count(sType_clone(type)));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1926, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg=info->va_arg;
    if(({    (_condtional_value_X647=(charp_operator_equals(fun_name,"__builtin_va_arg")));    _condtional_value_X647;    })) {
        info->va_arg=(_Bool)1;
    }
    while(({    (_condtional_value_X648=((_Bool)1));    _condtional_value_X648;    })) {
        if(({        (_condtional_value_X649=(*info->p==41));        _condtional_value_X649;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p=info->p;
        sline=info->sline;
        err_flag=(_Bool)0;
        label=(char*)come_increment_ref_count(__builtin_string(""));
        if(({        (_condtional_value_X650=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X650;        })) {
            __dec_obj183=label,
            label=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            err_flag=(_Bool)1;
        }
        if(({        (_condtional_value_X651=(err_flag==(_Bool)1&&*info->p==58));        _condtional_value_X651;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj184=label,
            label=((void*)0);
            __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->p=p;
            info->sline=sline;
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj185=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->no_comma=no_comma;
        info->in_fun_param=in_fun_param;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1974, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node))));
        parse_sharp_v5(info);
        if(({        (_condtional_value_X654=(*info->p==44));        _condtional_value_X654;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X655=(*info->p==41));        _condtional_value_X655;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->va_arg=_va_arg;
    parse_sharp_v5(info);
    method_block=((void*)0);
    method_block_sline=0;
    if(({    (_condtional_value_X656=(*info->p==123));    _condtional_value_X656;    })) {
        head=info->p;
        method_block_sline=info->sline;
        ((char*)(__right_value586=skip_block(info,(_Bool)0)));
        (__right_value586 = come_decrement_ref_count(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        tail=info->p;
        __dec_obj191=method_block,
        method_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2004, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj191,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        len=tail-head;
        mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "05call.c", 2007, "char*"));
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2017, "struct sNode");
    _inf_obj_value8=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value591=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 2017, "struct sFunCallNode*")),fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sFunCallNode_finalize;
    _inf_value8->clone=(void*)sFunCallNode_clone;
    _inf_value8->compile=(void*)sFunCallNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sFunCallNode_terminated;
    _inf_value8->kind=(void*)sFunCallNode_kind;
    _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
    node_187=(struct sNode*)come_increment_ref_count(_inf_value8);
    come_call_finalizer(sFunCallNode_finalize, __right_value591, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj197=node_187,
    node_187=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_187),info));
    (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    parse_sharp_v5(info);
    __result_obj__227 = (struct sNode*)come_increment_ref_count(node_187);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_187) ? node_187 = come_decrement_ref_count(node_187, ((struct sNode*)node_187)->finalize, ((struct sNode*)node_187)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__227) ? __result_obj__227 = come_decrement_ref_count(__result_obj__227, ((struct sNode*)__result_obj__227)->finalize, ((struct sNode*)__result_obj__227)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__227;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X644;
_Bool _condtional_value_X645;
    if(({    (_condtional_value_X644=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X644;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X645=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X645;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X652;
void* __right_value581 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj186;
_Bool _condtional_value_X653;
void* __right_value582 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_185;
struct tuple2$2char$phsNode$ph* __dec_obj187;
void* __right_value583 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_186;
struct tuple2$2char$phsNode$ph* __dec_obj188;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__223;
    if(({    (_condtional_value_X652=(self->len==0));    _condtional_value_X652;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value581=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj186=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj186,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X653=(self->len==1));    _condtional_value_X653;    })) {
        litem_185=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value582=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        __dec_obj187=litem_185->item,
        litem_185->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj187,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value583=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        __dec_obj188=litem_186->item,
        litem_186->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj188,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__223 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__223;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj189;
struct sNode* __dec_obj190;
struct tuple2$2char$phsNode$ph* __result_obj__224;
    __dec_obj189=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj190=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__224 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__224;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
_Bool _condtional_value_X657;
struct sFunCallNode* __result_obj__225;
void* __right_value592 = (void*)0;
struct sFunCallNode* result;
_Bool _condtional_value_X658;
_Bool _condtional_value_X659;
void* __right_value593 = (void*)0;
char* __dec_obj192;
_Bool _condtional_value_X660;
_Bool _condtional_value_X661;
void* __right_value594 = (void*)0;
char* __dec_obj193;
_Bool _condtional_value_X662;
void* __right_value595 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj194;
_Bool _condtional_value_X663;
void* __right_value596 = (void*)0;
struct list$1sType$ph* __dec_obj195;
_Bool _condtional_value_X664;
void* __right_value597 = (void*)0;
struct buffer* __dec_obj196;
_Bool _condtional_value_X665;
struct sFunCallNode* __result_obj__226;
    if(({    (_condtional_value_X657=(self==(void*)0));    _condtional_value_X657;    })) {
        __result_obj__225 = (void*)0;
        return __result_obj__225;
    }
    result=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(({    (_condtional_value_X658=(self!=((void*)0)));    _condtional_value_X658;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X659=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X659;    })) {
        __dec_obj192=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X660=(self!=((void*)0)));    _condtional_value_X660;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X661=(self!=((void*)0)&&self->fun_name!=((void*)0)));    _condtional_value_X661;    })) {
        __dec_obj193=result->fun_name,
        result->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X662=(self!=((void*)0)&&self->params!=((void*)0)));    _condtional_value_X662;    })) {
        __dec_obj194=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj194,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X663=(self!=((void*)0)&&self->method_generics_types!=((void*)0)));    _condtional_value_X663;    })) {
        __dec_obj195=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj195,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X664=(self!=((void*)0)&&self->method_block!=((void*)0)));    _condtional_value_X664;    })) {
        __dec_obj196=result->method_block,
        result->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj196,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X665=(self!=((void*)0)));    _condtional_value_X665;    })) {
        result->method_block_sline=self->method_block_sline;
    }
    __result_obj__226 = result;
    come_call_finalizer(sFunCallNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__226;
}

struct sNode* expression_node_v1(struct sInfo* info){
struct sNode* __result_obj__228;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p);
    stackframe_v2();
    exit(3);
    __result_obj__228 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__228) ? __result_obj__228 = come_decrement_ref_count(__result_obj__228, ((struct sNode*)__result_obj__228)->finalize, ((struct sNode*)__result_obj__228)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__228;
}

char* parse_inner_attribute(struct sInfo* info){
char* head;
_Bool _condtional_value_X666;
_Bool in_dquort;
int brace_num;
_Bool _condtional_value_X667;
_Bool _condtional_value_X668;
_Bool _condtional_value_X669;
_Bool _condtional_value_X670;
_Bool _condtional_value_X671;
_Bool _condtional_value_X672;
char* tail;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct buffer* buf;
void* __right_value602 = (void*)0;
char* __result_obj__229;
    head=info->p;
    if(({    (_condtional_value_X666=(*info->p==40));    _condtional_value_X666;    })) {
        in_dquort=(_Bool)0;
        brace_num=0;
        while(({        (_condtional_value_X667=(*info->p));        _condtional_value_X667;        })) {
            if(({            (_condtional_value_X668=(*info->p==34));            _condtional_value_X668;            })) {
                info->p++;
                in_dquort=!in_dquort;
            }
            else if(({            (_condtional_value_X669=(in_dquort));            _condtional_value_X669;            })) {
                info->p++;
            }
            else if(({            (_condtional_value_X670=(*info->p==40));            _condtional_value_X670;            })) {
                info->p++;
                brace_num++;
            }
            else if(({            (_condtional_value_X671=(*info->p==41));            _condtional_value_X671;            })) {
                info->p++;
                brace_num--;
                if(({                (_condtional_value_X672=(brace_num==0));                _condtional_value_X672;                })) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    tail=info->p;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2075, "struct buffer*"))));
    buffer_append(buf,head,tail-head);
    __result_obj__229 = (char*)come_increment_ref_count(((char*)(__right_value602=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__229;
}

struct sNode* expression_node_v97(struct sInfo* info){
_Bool _condtional_value_X673;
_Bool _condtional_value_X674;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value606 = (void*)0;
struct sNode* __result_obj__230;
char* head;
void* __right_value607 = (void*)0;
struct sNode* value;
char* tail;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* __right_value612 = (void*)0;
struct sNode* __result_obj__231;
_Bool _condtional_value_X675;
int nest;
_Bool _condtional_value_X676;
_Bool _condtional_value_X677;
_Bool _condtional_value_X678;
_Bool _condtional_value_X679;
_Bool _condtional_value_X680;
_Bool _condtional_value_X681;
_Bool _condtional_value_X682;
_Bool _condtional_value_X683;
_Bool _condtional_value_X684;
_Bool _condtional_value_X685;
char* head_188;
int head_sline;
int sline_real;
void* __right_value613 = (void*)0;
char* buf_189;
_Bool is_type_name_;
_Bool is_special_word;
_Bool define_function_pointer_flag;
_Bool _condtional_value_X686;
void* __right_value614 = (void*)0;
_Bool _condtional_value_X687;
_Bool _condtional_value_X688;
_Bool lambda_flag;
_Bool _condtional_value_X689;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
char* word2;
_Bool _condtional_value_X690;
_Bool fun_name_with_type_name;
_Bool _condtional_value_X691;
_Bool _condtional_value_X692;
void* __right_value617 = (void*)0;
char* word2_190;
_Bool _condtional_value_X693;
_Bool _condtional_value_X694;
_Bool _condtional_value_X695;
_Bool call_method_generics_fun_call;
_Bool _condtional_value_X696;
_Bool _condtional_value_X697;
void* __right_value618 = (void*)0;
char* __dec_obj199;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
_Bool _condtional_value_X708;
int nest_191;
_Bool _condtional_value_X709;
_Bool _condtional_value_X710;
_Bool _condtional_value_X711;
_Bool _condtional_value_X712;
_Bool _condtional_value_X713;
_Bool _condtional_value_X714;
_Bool inline_asm;
_Bool _condtional_value_X715;
void* __right_value625 = (void*)0;
char* __dec_obj200;
_Bool _condtional_value_X716;
_Bool _condtional_value_X717;
_Bool _condtional_value_X718;
void* __right_value626 = (void*)0;
char* __dec_obj201;
_Bool _condtional_value_X719;
void* __right_value627 = (void*)0;
char* __dec_obj202;
_Bool _condtional_value_X720;
void* __right_value628 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__240;
_Bool _condtional_value_X721;
_Bool no_comma;
void* __right_value629 = (void*)0;
struct sNode* exp;
void* __right_value630 = (void*)0;
struct sNode* exp2;
void* __right_value631 = (void*)0;
struct sNode* __result_obj__241;
_Bool _condtional_value_X722;
void* __right_value632 = (void*)0;
char* attr;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* _inf_value11;
struct sInnerAttribute* _inf_obj_value11;
void* __right_value638 = (void*)0;
struct sNode* __result_obj__244;
_Bool _condtional_value_X728;
void* __right_value639 = (void*)0;
char* block_text;
char* contents;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* _inf_value12;
struct sOutputNode* _inf_obj_value12;
void* __right_value642 = (void*)0;
struct sNode* __result_obj__245;
_Bool _condtional_value_X729;
void* __right_value643 = (void*)0;
struct sNode* node_192;
struct sNode* __result_obj__246;
_Bool _condtional_value_X730;
void* __right_value644 = (void*)0;
struct sNode* node_193;
struct sNode* __result_obj__247;
_Bool _condtional_value_X731;
struct buffer* come_block;
int come_block_sline;
_Bool _condtional_value_X732;
char* head_194;
void* __right_value645 = (void*)0;
char* tail_195;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct buffer* __dec_obj205;
int len;
void* __right_value648 = (void*)0;
char* mem;
char* head_196;
_Bool no_output_come_code;
void* __right_value649 = (void*)0;
char* tail_197;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct buffer* __dec_obj206;
int len_198;
void* __right_value652 = (void*)0;
char* mem_199;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value13;
struct sComeCallNode* _inf_obj_value13;
void* __right_value658 = (void*)0;
struct sNode* node_200;
struct sNode* __result_obj__250;
_Bool _condtional_value_X739;
struct buffer* come_block_201;
int come_block_sline_202;
void* __right_value659 = (void*)0;
struct sNode* node_203;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value14;
struct sComeJoinNode* _inf_obj_value14;
void* __right_value665 = (void*)0;
struct sNode* __result_obj__253;
_Bool _condtional_value_X745;
int time_out;
_Bool _condtional_value_X746;
_Bool _condtional_value_X747;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1sNode$ph* vars;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1sBlock$ph* blocks;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sBlock* else_block;
_Bool _condtional_value_X748;
_Bool _condtional_value_X749;
void* __right_value672 = (void*)0;
struct sBlock* __dec_obj211;
_Bool _condtional_value_X750;
void* __right_value673 = (void*)0;
struct sNode* var_name;
void* __right_value674 = (void*)0;
struct sBlock* block;
_Bool _condtional_value_X753;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sNode* _inf_value15;
struct sComePollNode* _inf_obj_value15;
void* __right_value727 = (void*)0;
struct sNode* __result_obj__284;
_Bool _condtional_value_X849;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* _inf_value16;
struct sFuncNode* _inf_obj_value16;
void* __right_value732 = (void*)0;
struct sNode* __result_obj__287;
_Bool _condtional_value_X854;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value17;
struct sWildCard* _inf_obj_value17;
void* __right_value737 = (void*)0;
struct sNode* __result_obj__290;
_Bool _condtional_value_X859;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sNode* _inf_value18;
struct sLineNode* _inf_obj_value18;
void* __right_value740 = (void*)0;
struct sNode* __result_obj__291;
_Bool _condtional_value_X860;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value19;
struct sSNameNode* _inf_obj_value19;
void* __right_value743 = (void*)0;
struct sNode* __result_obj__292;
_Bool _condtional_value_X861;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct sNode* _inf_value20;
struct sCallerFuncNode* _inf_obj_value20;
void* __right_value748 = (void*)0;
struct sNode* __result_obj__295;
_Bool _condtional_value_X866;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sNode* _inf_value21;
struct sCallerLineNode* _inf_obj_value21;
void* __right_value753 = (void*)0;
struct sNode* __result_obj__298;
_Bool _condtional_value_X871;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* _inf_value22;
struct sCallerSNameNode* _inf_obj_value22;
void* __right_value758 = (void*)0;
struct sNode* __result_obj__301;
_Bool _condtional_value_X876;
void* __right_value759 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value23;
struct sVarArgTypeName* _inf_obj_value23;
void* __right_value765 = (void*)0;
struct sNode* __result_obj__304;
_Bool _condtional_value_X882;
void* __right_value766 = (void*)0;
struct sNode* node_213;
struct sNode* __result_obj__305;
_Bool _condtional_value_X883;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* buf2;
_Bool _condtional_value_X884;
void* __right_value769 = (void*)0;
char* word;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct list$1sNode$ph* exps;
_Bool _condtional_value_X885;
_Bool _condtional_value_X886;
void* __right_value772 = (void*)0;
struct sNode* exp_214;
_Bool _condtional_value_X887;
_Bool _condtional_value_X888;
_Bool _condtional_value_X889;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* _inf_value24;
struct sInlineAssembler* _inf_obj_value24;
void* __right_value780 = (void*)0;
struct sNode* __result_obj__308;
_Bool _condtional_value_X896;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct buffer* fun_name;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sType* type_215;
_Bool _condtional_value_X907;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sClass* klass;
_Bool _condtional_value_X908;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sType* __dec_obj241;
_Bool _condtional_value_X909;
_Bool _condtional_value_X910;
void* __right_value793 = (void*)0;
char* buf2_216;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* node_217;
struct sNode* __result_obj__317;
_Bool _condtional_value_X911;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct buffer* fun_name_218;
void* __right_value798 = (void*)0;
char* buf2_219;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sNode* node_220;
struct sNode* __result_obj__318;
_Bool _condtional_value_X912;
void* __right_value801 = (void*)0;
struct sNode* node_221;
struct sNode* __result_obj__319;
_Bool _condtional_value_X913;
void* __right_value802 = (void*)0;
struct sNode* node_222;
struct sNode* __result_obj__320;
void* __right_value803 = (void*)0;
struct sNode* node_223;
struct sNode* __result_obj__321;
void* __right_value804 = (void*)0;
struct sNode* node_224;
struct sNode* __result_obj__322;
struct sNode* __result_obj__323;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(({    (_condtional_value_X673=(parsecmp("return",info)));    _condtional_value_X673;    })) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(({        (_condtional_value_X674=(*info->p==59));        _condtional_value_X674;        })) {
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2092, "struct sNode");
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value605=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2092, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__230 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value606=_inf_value9)));
            come_call_finalizer(sReturnNode_finalize, __right_value605, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value606) ? __right_value606 = come_decrement_ref_count(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__230) ? __result_obj__230 = come_decrement_ref_count(__result_obj__230, ((struct sNode*)__result_obj__230)->finalize, ((struct sNode*)__result_obj__230)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__230;
        }
        else {
            head=info->p;
            value=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail=info->p;
            __dec_obj198=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
            (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            char buf[tail-head+1];
            memset(&buf, 0, sizeof(char)            *(tail-head+1)            );
            memcpy(buf,head,tail-head);
            buf[tail-head]=0;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2104, "struct sNode");
            _inf_obj_value10=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value611=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2104, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sReturnNode_finalize;
            _inf_value10->clone=(void*)sReturnNode_clone;
            _inf_value10->compile=(void*)sReturnNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sReturnNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__231 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value612=_inf_value10)));
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value611, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value612) ? __right_value612 = come_decrement_ref_count(__right_value612, ((struct sNode*)__right_value612)->finalize, ((struct sNode*)__right_value612)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__231) ? __result_obj__231 = come_decrement_ref_count(__result_obj__231, ((struct sNode*)__result_obj__231)->finalize, ((struct sNode*)__result_obj__231)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__231;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(({    (_condtional_value_X675=(*info->p==47&&*(info->p+1)==42));    _condtional_value_X675;    })) {
        nest=0;
        while(({        (_condtional_value_X676=(1));        _condtional_value_X676;        })) {
            if(({            (_condtional_value_X677=(*info->p==47&&*(info->p+1)==42));            _condtional_value_X677;            })) {
                info->p+=2;
                nest++;
            }
            else if(({            (_condtional_value_X678=(*info->p==42&&*(info->p+1)==47));            _condtional_value_X678;            })) {
                info->p+=2;
                nest--;
                if(({                (_condtional_value_X679=(nest==0));                _condtional_value_X679;                })) {
                    break;
                }
            }
            else if(({            (_condtional_value_X680=(*info->p==10));            _condtional_value_X680;            })) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(({    (_condtional_value_X681=(*info->p==47&&*(info->p+1)==47));    _condtional_value_X681;    })) {
        info->p+=2;
        while(({        (_condtional_value_X682=(1));        _condtional_value_X682;        })) {
            if(({            (_condtional_value_X683=(*info->p==10));            _condtional_value_X683;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(({            (_condtional_value_X684=(*info->p==0));            _condtional_value_X684;            })) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(({    (_condtional_value_X685=((xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))));    _condtional_value_X685;    })) {
        head_188=info->p;
        head_sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        buf_189=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name_=is_type_name(buf_189,info);
        static char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charppa_contained(is_special_word_array,25,buf_189);
        define_function_pointer_flag=(_Bool)0;
        if(({        (_condtional_value_X686=(!is_special_word&&*info->p==40&&*(info->p+1)!=42));        _condtional_value_X686;        })) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value614=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value614, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X687=(*info->p==40));            _condtional_value_X687;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X688=(*info->p==42));                _condtional_value_X688;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=(_Bool)1;
                }
            }
            info->p=head_188;
            info->sline=head_sline;
        }
        lambda_flag=(_Bool)0;
        if(({        (_condtional_value_X689=(!is_special_word&&is_type_name_));        _condtional_value_X689;        })) {
            info->p=head_188;
            info->sline=head_sline;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value615=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value615, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            word2=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(({            (_condtional_value_X690=(string_operator_equals(word2,"lambda")));            _condtional_value_X690;            })) {
                lambda_flag=(_Bool)1;
            }
            info->p=head_188;
            info->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        fun_name_with_type_name=(_Bool)0;
        if(({        (_condtional_value_X691=(!is_special_word));        _condtional_value_X691;        })) {
            info->p=head_188;
            info->sline=head_sline;
            info->no_output_err=(_Bool)1;
            if(({            (_condtional_value_X692=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X692;            })) {
                word2_190=(char*)come_increment_ref_count(parse_word(info));
                (word2_190 = come_decrement_ref_count(word2_190, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            while(({            (_condtional_value_X693=(*info->p==42));            _condtional_value_X693;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(({            (_condtional_value_X694=(*info->p==58&&*(info->p+1)==58));            _condtional_value_X694;            })) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X695=(xisalpha(*info->p)||*info->p==95));                _condtional_value_X695;                })) {
                    fun_name_with_type_name=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_188;
            info->sline=head_sline;
        }
        call_method_generics_fun_call=(_Bool)0;
        if(({        (_condtional_value_X696=(!is_special_word));        _condtional_value_X696;        })) {
            info->p=head_188;
            info->sline=head_sline;
            if(({            (_condtional_value_X697=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X697;            })) {
                __dec_obj199=buf_189,
                buf_189=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(({            (_condtional_value_X708=(!is_type_name(buf_189,info)&&((struct sVar*)(__right_value621=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value620=__builtin_string(buf_189))))))==((void*)0)&&((struct sVar*)(__right_value624=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value623=__builtin_string(buf_189))))))==((void*)0)&&*info->p==60));            (__right_value619 = come_decrement_ref_count(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value620 = come_decrement_ref_count(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value621, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value622 = come_decrement_ref_count(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value623 = come_decrement_ref_count(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value624, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _condtional_value_X708;            })) {
                nest_191=0;
                while(({                (_condtional_value_X709=(*info->p));                _condtional_value_X709;                })) {
                    if(({                    (_condtional_value_X710=(*info->p==60));                    _condtional_value_X710;                    })) {
                        info->p++;
                        nest_191++;
                    }
                    else if(({                    (_condtional_value_X711=(*info->p==62));                    _condtional_value_X711;                    })) {
                        info->p++;
                        if(({                        (_condtional_value_X712=(nest_191==0));                        _condtional_value_X712;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X713=(*info->p==10||*info->p==59));                    _condtional_value_X713;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(({                (_condtional_value_X714=(*info->p==40));                _condtional_value_X714;                })) {
                    call_method_generics_fun_call=(_Bool)1;
                }
            }
            info->p=head_188;
            info->sline=head_sline;
        }
        inline_asm=(_Bool)0;
        if(({        (_condtional_value_X715=(!is_special_word));        _condtional_value_X715;        })) {
            info->p=head_188;
            info->sline=head_sline;
            __dec_obj200=buf_189,
            buf_189=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(({            (_condtional_value_X716=(string_operator_equals(buf_189,"asm")||string_operator_equals(buf_189,"__asm")||string_operator_equals(buf_189,"__asm__")));            _condtional_value_X716;            })) {
                if(({                (_condtional_value_X717=(*info->p==40));                _condtional_value_X717;                })) {
                    inline_asm=(_Bool)1;
                }
                else {
                    if(({                    (_condtional_value_X718=(xisalpha(*info->p)||*info->p==95));                    _condtional_value_X718;                    })) {
                        __dec_obj201=buf_189,
                        buf_189=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(({                        (_condtional_value_X719=(*info->p==40));                        _condtional_value_X719;                        })) {
                            inline_asm=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_188;
            info->sline=head_sline;
        }
        parse_sharp_v5(info);
        __dec_obj202=buf_189,
        buf_189=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X720=(lambda_flag));        _condtional_value_X720;        })) {
            info->p=head_188;
            info->sline=head_sline;
            node=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real;
            __result_obj__240 = (struct sNode*)come_increment_ref_count(node);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__240) ? __result_obj__240 = come_decrement_ref_count(__result_obj__240, ((struct sNode*)__result_obj__240)->finalize, ((struct sNode*)__result_obj__240)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__240;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X721=((string_operator_equals(buf_189,"_Static_assert")||string_operator_equals(buf_189,"static_assert"))&&*info->p==40));        _condtional_value_X721;        })) {
            expected_next_character(40,info);
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma;
            expected_next_character(44,info);
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__241 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value631=static_assert_node((struct sNode*)come_increment_ref_count(exp),(struct sNode*)come_increment_ref_count(exp2),info))));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value631) ? __right_value631 = come_decrement_ref_count(__right_value631, ((struct sNode*)__right_value631)->finalize, ((struct sNode*)__right_value631)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__241) ? __result_obj__241 = come_decrement_ref_count(__result_obj__241, ((struct sNode*)__result_obj__241)->finalize, ((struct sNode*)__result_obj__241)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__241;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X722=(string_operator_equals(buf_189,"__attribute__")&&*info->p==40));        _condtional_value_X722;        })) {
            attr=(char*)come_increment_ref_count(parse_inner_attribute(info));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2342, "struct sNode");
            _inf_obj_value11=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value634=sInnerAttribute_initialize((struct sInnerAttribute*)come_increment_ref_count((struct sInnerAttribute*)come_calloc_v2(1, sizeof(struct sInnerAttribute)*(1), "05call.c", 2342, "struct sInnerAttribute*")),(char*)come_increment_ref_count(attr),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sInnerAttribute_finalize;
            _inf_value11->clone=(void*)sInnerAttribute_clone;
            _inf_value11->compile=(void*)sInnerAttribute_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sInnerAttribute_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__244 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value638=_inf_value11)));
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sInnerAttribute_finalize, __right_value634, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value638) ? __right_value638 = come_decrement_ref_count(__right_value638, ((struct sNode*)__right_value638)->finalize, ((struct sNode*)__right_value638)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__244;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(({        (_condtional_value_X728=(string_operator_equals(buf_189,"output")&&*info->p==123));        _condtional_value_X728;        })) {
            block_text=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents=(char*)come_increment_ref_count(block_text);
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2350, "struct sNode");
            _inf_obj_value12=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value641=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2350, "struct sOutputNode*")),(char*)come_increment_ref_count(contents),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sOutputNode_finalize;
            _inf_value12->clone=(void*)sOutputNode_clone;
            _inf_value12->compile=(void*)sOutputNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sOutputNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__245 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value642=_inf_value12)));
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sOutputNode_finalize, __right_value641, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value642) ? __right_value642 = come_decrement_ref_count(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__245;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(({        (_condtional_value_X729=(string_operator_equals(buf_189,"extern")));        _condtional_value_X729;        })) {
            node_192=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__246 = (struct sNode*)come_increment_ref_count(node_192);
            ((node_192) ? node_192 = come_decrement_ref_count(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__246;
            ((node_192) ? node_192 = come_decrement_ref_count(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X730=(!gComeC&&(string_operator_equals(buf_189,"string")||string_operator_equals(buf_189,"wstring"))&&*info->p==40));        _condtional_value_X730;        })) {
            node_193=(struct sNode*)come_increment_ref_count(parse_function_call(buf_189,info,(_Bool)0));
            info->sline_real=sline_real;
            __result_obj__247 = (struct sNode*)come_increment_ref_count(node_193);
            ((node_193) ? node_193 = come_decrement_ref_count(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__247;
            ((node_193) ? node_193 = come_decrement_ref_count(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X731=(gComePthread&&string_operator_equals(buf_189,"come")));        _condtional_value_X731;        })) {
            come_block=((void*)0);
            come_block_sline=0;
            if(({            (_condtional_value_X732=(*info->p==123));            _condtional_value_X732;            })) {
                head_194=info->p;
                come_block_sline=info->sline;
                ((char*)(__right_value645=skip_block(info,(_Bool)0)));
                (__right_value645 = come_decrement_ref_count(__right_value645, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                tail_195=info->p;
                __dec_obj205=come_block,
                come_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2375, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len=tail_195-head_194;
                mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "05call.c", 2378, "char*"));
                memcpy(mem,head_194,len);
                mem[len]=0;
                buffer_append_str(come_block,mem);
                buffer_append_str(come_block,"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                head_196=info->p;
                come_block_sline=info->sline;
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value649=expression_v13(info)));
                ((__right_value649) ? __right_value649 = come_decrement_ref_count(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code;
                tail_197=info->p;
                __dec_obj206=come_block,
                come_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2396, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj206,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_198=tail_197-head_196;
                mem_199=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_198+1)), "05call.c", 2399, "char*"));
                memcpy(mem_199,head_196,len_198);
                mem_199[len_198]=0;
                buffer_append_str(come_block,"{");
                buffer_append_str(come_block,mem_199);
                buffer_append_str(come_block,"; }");
                buffer_append_str(come_block,"return (void*)0;\n}");
                buffer_append_str(come_block,"\n");
                (mem_199 = come_decrement_ref_count(mem_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2410, "struct sNode");
            _inf_obj_value13=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value654=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2410, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block),come_block_sline,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComeCallNode_finalize;
            _inf_value13->clone=(void*)sComeCallNode_clone;
            _inf_value13->compile=(void*)sComeCallNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComeCallNode_terminated;
            _inf_value13->kind=(void*)sComeCallNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            node_200=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sComeCallNode_finalize, __right_value654, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real;
            __result_obj__250 = (struct sNode*)come_increment_ref_count(node_200);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_200) ? node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__250) ? __result_obj__250 = come_decrement_ref_count(__result_obj__250, ((struct sNode*)__result_obj__250)->finalize, ((struct sNode*)__result_obj__250)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__250;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_200) ? node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X739=(gComePthread&&string_operator_equals(buf_189,"come_join")&&*info->p==40));        _condtional_value_X739;        })) {
            come_block_201=((void*)0);
            come_block_sline_202=0;
            expected_next_character(40,info);
            node_203=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2424, "struct sNode");
            _inf_obj_value14=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value661=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2424, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_203),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sComeJoinNode_finalize;
            _inf_value14->clone=(void*)sComeJoinNode_clone;
            _inf_value14->compile=(void*)sComeJoinNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sComeJoinNode_terminated;
            _inf_value14->kind=(void*)sComeJoinNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__253 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value665=_inf_value14)));
            come_call_finalizer(buffer_finalize, come_block_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_203) ? node_203 = come_decrement_ref_count(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value661, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value665) ? __right_value665 = come_decrement_ref_count(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__253) ? __result_obj__253 = come_decrement_ref_count(__result_obj__253, ((struct sNode*)__result_obj__253)->finalize, ((struct sNode*)__result_obj__253)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__253;
            come_call_finalizer(buffer_finalize, come_block_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_203) ? node_203 = come_decrement_ref_count(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X745=(gComePthread&&string_operator_equals(buf_189,"come_poll")&&(*info->p==40||*info->p==123)));        _condtional_value_X745;        })) {
            time_out=1;
            if(({            (_condtional_value_X746=(*info->p==40));            _condtional_value_X746;            })) {
                info->p++;
                while(({                (_condtional_value_X747=(xisdigit(*info->p)));                _condtional_value_X747;                })) {
                    time_out=time_out*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2442, "struct list$1sNode$ph*"))));
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2443, "struct list$1sBlock$ph*"))));
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2444, "struct sBlock*"))));
            while(({            (_condtional_value_X748=(1));            _condtional_value_X748;            })) {
                if(({                (_condtional_value_X749=(memcmp(info->p,"else",strlen("else"))==0));                _condtional_value_X749;                })) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj211=else_block,
                    else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj211,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    if(({                    (_condtional_value_X750=(*info->p==125));                    _condtional_value_X750;                    })) {
                        break;
                    }
                }
                else {
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars,(struct sNode*)come_increment_ref_count(var_name));
                    list$1sBlock$ph_add(blocks,(struct sBlock*)come_increment_ref_count(block));
                    if(({                    (_condtional_value_X753=(*info->p==125));                    _condtional_value_X753;                    })) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2474, "struct sNode");
            _inf_obj_value15=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value679=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2474, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars),(struct list$1sBlock$ph*)come_increment_ref_count(blocks),(struct sBlock*)come_increment_ref_count(else_block),time_out,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sComePollNode_finalize;
            _inf_value15->clone=(void*)sComePollNode_clone;
            _inf_value15->compile=(void*)sComePollNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sComePollNode_terminated;
            _inf_value15->kind=(void*)sComePollNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__284 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value727=_inf_value15)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value679, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value727) ? __right_value727 = come_decrement_ref_count(__right_value727, ((struct sNode*)__right_value727)->finalize, ((struct sNode*)__right_value727)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__284;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X849=(string_operator_equals(buf_189,"__func__")||string_operator_equals(buf_189,"__FUNCTION__")));        _condtional_value_X849;        })) {
            info->sline_real=sline_real;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2479, "struct sNode");
            _inf_obj_value16=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value729=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2479, "struct sFuncNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sFuncNode_finalize;
            _inf_value16->clone=(void*)sFuncNode_clone;
            _inf_value16->compile=(void*)sFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sFuncNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__287 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value732=_inf_value16)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value729, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value732) ? __right_value732 = come_decrement_ref_count(__right_value732, ((struct sNode*)__right_value732)->finalize, ((struct sNode*)__right_value732)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__287;
        }
        else if(({        (_condtional_value_X854=(!gComeC&&string_operator_equals(buf_189,"wildcard")));        _condtional_value_X854;        })) {
            info->sline_real=sline_real;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2483, "struct sNode");
            _inf_obj_value17=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value734=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2483, "struct sWildCard*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sWildCard_finalize;
            _inf_value17->clone=(void*)sWildCard_clone;
            _inf_value17->compile=(void*)sWildCard_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sWildCard_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__290 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value737=_inf_value17)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sWildCard_finalize, __right_value734, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value737) ? __right_value737 = come_decrement_ref_count(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__290;
        }
        else if(({        (_condtional_value_X859=(string_operator_equals(buf_189,"__line__")||string_operator_equals(buf_189,"__LINE__")));        _condtional_value_X859;        })) {
            info->sline_real=sline_real;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2487, "struct sNode");
            _inf_obj_value18=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value739=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2487, "struct sLineNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLineNode_finalize;
            _inf_value18->clone=(void*)sLineNode_clone;
            _inf_value18->compile=(void*)sLineNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLineNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__291 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value740=_inf_value18)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value739, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value740) ? __right_value740 = come_decrement_ref_count(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__291;
        }
        else if(({        (_condtional_value_X860=(string_operator_equals(buf_189,"__sname__")));        _condtional_value_X860;        })) {
            info->sline_real=sline_real;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2491, "struct sNode");
            _inf_obj_value19=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value742=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2491, "struct sSNameNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSNameNode_finalize;
            _inf_value19->clone=(void*)sSNameNode_clone;
            _inf_value19->compile=(void*)sSNameNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSNameNode_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__292 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value743=_inf_value19)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value742, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value743) ? __right_value743 = come_decrement_ref_count(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__292) ? __result_obj__292 = come_decrement_ref_count(__result_obj__292, ((struct sNode*)__result_obj__292)->finalize, ((struct sNode*)__result_obj__292)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__292;
        }
        else if(({        (_condtional_value_X861=(string_operator_equals(buf_189,"__caller_func__")));        _condtional_value_X861;        })) {
            info->sline_real=sline_real;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2495, "struct sNode");
            _inf_obj_value20=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value745=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2495, "struct sCallerFuncNode*")),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value20->clone=(void*)sCallerFuncNode_clone;
            _inf_value20->compile=(void*)sCallerFuncNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerFuncNode_kind;
            _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__295 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value748=_inf_value20)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value745, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value748) ? __right_value748 = come_decrement_ref_count(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__295;
        }
        else if(({        (_condtional_value_X866=(string_operator_equals(buf_189,"__caller_line__")));        _condtional_value_X866;        })) {
            info->sline_real=sline_real;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2499, "struct sNode");
            _inf_obj_value21=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value750=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2499, "struct sCallerLineNode*")),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sCallerLineNode_finalize;
            _inf_value21->clone=(void*)sCallerLineNode_clone;
            _inf_value21->compile=(void*)sCallerLineNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sCallerLineNode_kind;
            _inf_value21->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__298 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value753=_inf_value21)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value750, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value753) ? __right_value753 = come_decrement_ref_count(__right_value753, ((struct sNode*)__right_value753)->finalize, ((struct sNode*)__right_value753)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__298) ? __result_obj__298 = come_decrement_ref_count(__result_obj__298, ((struct sNode*)__result_obj__298)->finalize, ((struct sNode*)__result_obj__298)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__298;
        }
        else if(({        (_condtional_value_X871=(string_operator_equals(buf_189,"__caller_sname__")));        _condtional_value_X871;        })) {
            info->sline_real=sline_real;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2503, "struct sNode");
            _inf_obj_value22=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value755=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2503, "struct sCallerSNameNode*")),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value22->clone=(void*)sCallerSNameNode_clone;
            _inf_value22->compile=(void*)sCallerSNameNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sCallerSNameNode_kind;
            _inf_value22->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__301 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value758=_inf_value22)));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value755, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value758) ? __right_value758 = come_decrement_ref_count(__right_value758, ((struct sNode*)__right_value758)->finalize, ((struct sNode*)__right_value758)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__301) ? __result_obj__301 = come_decrement_ref_count(__result_obj__301, ((struct sNode*)__result_obj__301)->finalize, ((struct sNode*)__result_obj__301)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__301;
        }
        else if(({        (_condtional_value_X876=(info->va_arg&&is_type_name(buf_189,info)));        _condtional_value_X876;        })) {
            info->p=head_188;
            info->sline=head_sline;
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value759=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value759, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real;
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2512, "struct sNode");
            _inf_obj_value23=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value761=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2512, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value23->clone=(void*)sVarArgTypeName_clone;
            _inf_value23->compile=(void*)sVarArgTypeName_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sVarArgTypeName_kind;
            _inf_value23->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__304 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value765=_inf_value23)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value761, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value765) ? __right_value765 = come_decrement_ref_count(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__304;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(({        (_condtional_value_X882=(string_operator_equals(buf_189,"sizeof")||string_operator_equals(buf_189,"_Alignof")||string_operator_equals(buf_189,"_Alignas")||string_operator_equals(buf_189,"__alignof__")||string_operator_equals(buf_189,"offsetof")||string_operator_equals(buf_189,"__builtin_offsetof")||string_operator_equals(buf_189,"_Generic")));        _condtional_value_X882;        })) {
            node_213=(struct sNode*)come_increment_ref_count(string_node_v21(buf_189,head_188,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__305 = (struct sNode*)come_increment_ref_count(node_213);
            ((node_213) ? node_213 = come_decrement_ref_count(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__305) ? __result_obj__305 = come_decrement_ref_count(__result_obj__305, ((struct sNode*)__result_obj__305)->finalize, ((struct sNode*)__result_obj__305)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__305;
            ((node_213) ? node_213 = come_decrement_ref_count(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X883=(inline_asm));        _condtional_value_X883;        })) {
            buf2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2521, "struct buffer*"))));
            if(({            (_condtional_value_X884=(*info->p!=40));            _condtional_value_X884;            })) {
                word=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2,word);
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2,40);
            exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2532, "struct list$1sNode$ph*"))));
            while(({            (_condtional_value_X885=((_Bool)1));            _condtional_value_X885;            })) {
                if(({                (_condtional_value_X886=(*info->p==40));                _condtional_value_X886;                })) {
                    buffer_append_char(buf2,40);
                    info->p++;
                    exp_214=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp_214));
                    expected_next_character(41,info);
                    buffer_append_char(buf2,41);
                    ((exp_214) ? exp_214 = come_decrement_ref_count(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else if(({                (_condtional_value_X887=(*info->p==41));                _condtional_value_X887;                })) {
                    buffer_append_char(buf2,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(({                (_condtional_value_X888=(*info->p==10));                _condtional_value_X888;                })) {
                    info->sline++;
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X889=(*info->p==0));                _condtional_value_X889;                })) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real;
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2569, "struct sNode");
            _inf_obj_value24=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value775=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2569, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2)),(struct list$1sNode$ph*)come_increment_ref_count(exps),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sInlineAssembler_finalize;
            _inf_value24->clone=(void*)sInlineAssembler_clone;
            _inf_value24->compile=(void*)sInlineAssembler_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sInlineAssembler_kind;
            _inf_value24->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__308 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value780=_inf_value24)));
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value775, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value780) ? __right_value780 = come_decrement_ref_count(__right_value780, ((struct sNode*)__right_value780)->finalize, ((struct sNode*)__right_value780)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__308) ? __result_obj__308 = come_decrement_ref_count(__result_obj__308, ((struct sNode*)__result_obj__308)->finalize, ((struct sNode*)__result_obj__308)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__308;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X896=(fun_name_with_type_name));        _condtional_value_X896;        })) {
            fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2572, "struct buffer*"))));
            buffer_append_str(fun_name,buf_189);
            type_215=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value785=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value784=buffer_to_string(fun_name))))))));
            (__right_value783 = come_decrement_ref_count(__right_value783, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value784 = come_decrement_ref_count(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value785, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X907=(type_215==((void*)0)));            _condtional_value_X907;            })) {
                klass=((struct sClass*)(__right_value789=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value788=buffer_to_string(fun_name))))));
                (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value788 = come_decrement_ref_count(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value789, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X908=(klass));                _condtional_value_X908;                })) {
                    __dec_obj241=type_215,
                    type_215=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2582, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_189)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj241,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_189);
                    exit(2);
                }
            }
            while(({            (_condtional_value_X909=(*info->p==42));            _condtional_value_X909;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X910=(type_215->mClass->mStruct==(_Bool)0));                _condtional_value_X910;                })) {
                    buffer_append_str(fun_name,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name,"_");
            buf2_216=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name,buf2_216);
            node_217=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value794=buffer_to_string(fun_name))),info,(_Bool)0));
            (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real;
            __result_obj__317 = (struct sNode*)come_increment_ref_count(node_217);
            come_call_finalizer(buffer_finalize, fun_name, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__317;
            come_call_finalizer(buffer_finalize, fun_name, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X911=(*info->p==58&&*(info->p+1)==58));        _condtional_value_X911;        })) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2617, "struct buffer*"))));
            buffer_append_str(fun_name_218,buf_189);
            buffer_append_str(fun_name_218,"_");
            buf2_219=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_218,buf2_219);
            node_220=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value799=buffer_to_string(fun_name_218))),info,(_Bool)0));
            (__right_value799 = come_decrement_ref_count(__right_value799, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real;
            __result_obj__318 = (struct sNode*)come_increment_ref_count(node_220);
            come_call_finalizer(buffer_finalize, fun_name_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_219 = come_decrement_ref_count(buf2_219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_220) ? node_220 = come_decrement_ref_count(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__318;
            come_call_finalizer(buffer_finalize, fun_name_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_219 = come_decrement_ref_count(buf2_219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_220) ? node_220 = come_decrement_ref_count(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X912=(call_method_generics_fun_call));        _condtional_value_X912;        })) {
            node_221=(struct sNode*)come_increment_ref_count(parse_function_call(buf_189,info,(_Bool)0));
            info->sline_real=sline_real;
            __result_obj__319 = (struct sNode*)come_increment_ref_count(node_221);
            ((node_221) ? node_221 = come_decrement_ref_count(node_221, ((struct sNode*)node_221)->finalize, ((struct sNode*)node_221)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__319;
            ((node_221) ? node_221 = come_decrement_ref_count(node_221, ((struct sNode*)node_221)->finalize, ((struct sNode*)node_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X913=(!is_special_word&&*info->p==40&&!(*(info->p+1)==42&&is_type_name_)));        _condtional_value_X913;        })) {
            node_222=(struct sNode*)come_increment_ref_count(parse_function_call(buf_189,info,(_Bool)0));
            info->sline_real=sline_real;
            __result_obj__320 = (struct sNode*)come_increment_ref_count(node_222);
            ((node_222) ? node_222 = come_decrement_ref_count(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__320;
            ((node_222) ? node_222 = come_decrement_ref_count(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            node_223=(struct sNode*)come_increment_ref_count(string_node_v21(buf_189,head_188,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__321 = (struct sNode*)come_increment_ref_count(node_223);
            ((node_223) ? node_223 = come_decrement_ref_count(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__321;
            ((node_223) ? node_223 = come_decrement_ref_count(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (buf_189 = come_decrement_ref_count(buf_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        node_224=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__322 = (struct sNode*)come_increment_ref_count(node_224);
        ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__322;
        ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*info->p);
    exit(2);
    __result_obj__323 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__323;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X698;
_Bool _condtional_value_X699;
_Bool _condtional_value_X700;
struct sVar* __result_obj__232;
_Bool _condtional_value_X701;
_Bool _condtional_value_X702;
struct sVar* __result_obj__233;
struct sVar* __result_obj__234;
struct sVar* __result_obj__235;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sVar*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X698=((_Bool)1));    _condtional_value_X698;    })) {
        if(({        (_condtional_value_X699=(self->item_existance[it]));        _condtional_value_X699;        })) {
            if(({            (_condtional_value_X700=(string_equals(self->keys[it],key)));            _condtional_value_X700;            })) {
                __result_obj__232 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__232;
            }
            it++;
            if(({            (_condtional_value_X701=(it>=self->size));            _condtional_value_X701;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X702=(it==hash));            _condtional_value_X702;            })) {
                __result_obj__233 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__233;
            }
        }
        else {
            __result_obj__234 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__234;
        }
    }
    __result_obj__235 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__235;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X703;
_Bool _condtional_value_X704;
_Bool _condtional_value_X705;
struct sVar* __result_obj__236;
_Bool _condtional_value_X706;
_Bool _condtional_value_X707;
struct sVar* __result_obj__237;
struct sVar* __result_obj__238;
struct sVar* __result_obj__239;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sVar*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X703=((_Bool)1));    _condtional_value_X703;    })) {
        if(({        (_condtional_value_X704=(self->item_existance[it]));        _condtional_value_X704;        })) {
            if(({            (_condtional_value_X705=(string_equals(self->keys[it],key)));            _condtional_value_X705;            })) {
                __result_obj__236 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__236;
            }
            it++;
            if(({            (_condtional_value_X706=(it>=self->size));            _condtional_value_X706;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X707=(it==hash));            _condtional_value_X707;            })) {
                __result_obj__237 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__237;
            }
        }
        else {
            __result_obj__238 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__238;
        }
    }
    __result_obj__239 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__239;
}

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self){
_Bool _condtional_value_X723;
struct sInnerAttribute* __result_obj__242;
void* __right_value635 = (void*)0;
struct sInnerAttribute* result;
_Bool _condtional_value_X724;
_Bool _condtional_value_X725;
void* __right_value636 = (void*)0;
char* __dec_obj203;
_Bool _condtional_value_X726;
_Bool _condtional_value_X727;
void* __right_value637 = (void*)0;
char* __dec_obj204;
struct sInnerAttribute* __result_obj__243;
    if(({    (_condtional_value_X723=(self==(void*)0));    _condtional_value_X723;    })) {
        __result_obj__242 = (void*)0;
        return __result_obj__242;
    }
    result=(struct sInnerAttribute*)come_increment_ref_count((struct sInnerAttribute*)come_calloc_v2(1, sizeof(struct sInnerAttribute)*(1), "sInnerAttribute_clone", 3, "struct sInnerAttribute*"));
    if(({    (_condtional_value_X724=(self!=((void*)0)));    _condtional_value_X724;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X725=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X725;    })) {
        __dec_obj203=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInnerAttribute_clone", 5, "char*"));
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X726=(self!=((void*)0)));    _condtional_value_X726;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X727=(self!=((void*)0)&&self->attr!=((void*)0)));    _condtional_value_X727;    })) {
        __dec_obj204=result->attr,
        result->attr=(char*)come_increment_ref_count((char*)come_memdup(self->attr, "sInnerAttribute_clone", 7, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__243 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__243;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
_Bool _condtional_value_X733;
struct sComeCallNode* __result_obj__248;
void* __right_value655 = (void*)0;
struct sComeCallNode* result;
_Bool _condtional_value_X734;
_Bool _condtional_value_X735;
void* __right_value656 = (void*)0;
char* __dec_obj207;
_Bool _condtional_value_X736;
_Bool _condtional_value_X737;
void* __right_value657 = (void*)0;
struct buffer* __dec_obj208;
_Bool _condtional_value_X738;
struct sComeCallNode* __result_obj__249;
    if(({    (_condtional_value_X733=(self==(void*)0));    _condtional_value_X733;    })) {
        __result_obj__248 = (void*)0;
        return __result_obj__248;
    }
    result=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(({    (_condtional_value_X734=(self!=((void*)0)));    _condtional_value_X734;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X735=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X735;    })) {
        __dec_obj207=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X736=(self!=((void*)0)));    _condtional_value_X736;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X737=(self!=((void*)0)&&self->come_block!=((void*)0)));    _condtional_value_X737;    })) {
        __dec_obj208=result->come_block,
        result->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj208,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X738=(self!=((void*)0)));    _condtional_value_X738;    })) {
        result->come_block_sline=self->come_block_sline;
    }
    __result_obj__249 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__249;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
_Bool _condtional_value_X740;
struct sComeJoinNode* __result_obj__251;
void* __right_value662 = (void*)0;
struct sComeJoinNode* result;
_Bool _condtional_value_X741;
_Bool _condtional_value_X742;
void* __right_value663 = (void*)0;
char* __dec_obj209;
_Bool _condtional_value_X743;
_Bool _condtional_value_X744;
void* __right_value664 = (void*)0;
struct sNode* __dec_obj210;
struct sComeJoinNode* __result_obj__252;
    if(({    (_condtional_value_X740=(self==(void*)0));    _condtional_value_X740;    })) {
        __result_obj__251 = (void*)0;
        return __result_obj__251;
    }
    result=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(({    (_condtional_value_X741=(self!=((void*)0)));    _condtional_value_X741;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X742=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X742;    })) {
        __dec_obj209=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X743=(self!=((void*)0)));    _condtional_value_X743;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X744=(self!=((void*)0)&&self->node!=((void*)0)));    _condtional_value_X744;    })) {
        __dec_obj210=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__252 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__252;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__254;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__254 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__254;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
_Bool _condtional_value_X751;
void* __right_value675 = (void*)0;
struct list_item$1sBlock$ph* litem;
struct sBlock* __dec_obj212;
_Bool _condtional_value_X752;
void* __right_value676 = (void*)0;
struct list_item$1sBlock$ph* litem_204;
struct sBlock* __dec_obj213;
void* __right_value677 = (void*)0;
struct list_item$1sBlock$ph* litem_205;
struct sBlock* __dec_obj214;
struct list$1sBlock$ph* __result_obj__255;
    if(({    (_condtional_value_X751=(self->len==0));    _condtional_value_X751;    })) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value675=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sBlock$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj212=litem->item,
        litem->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj212,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X752=(self->len==1));    _condtional_value_X752;    })) {
        litem_204=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value676=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sBlock$ph*"))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        __dec_obj213=litem_204->item,
        litem_204->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj213,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value677=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sBlock$ph*"))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        __dec_obj214=litem_205->item,
        litem_205->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj214,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result_obj__255 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__255;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
_Bool _condtional_value_X754;
struct sComePollNode* __result_obj__256;
void* __right_value680 = (void*)0;
struct sComePollNode* result;
_Bool _condtional_value_X755;
_Bool _condtional_value_X756;
void* __right_value681 = (void*)0;
char* __dec_obj215;
_Bool _condtional_value_X757;
_Bool _condtional_value_X758;
void* __right_value682 = (void*)0;
struct list$1sNode$ph* __dec_obj216;
_Bool _condtional_value_X759;
void* __right_value725 = (void*)0;
struct list$1sBlock$ph* __dec_obj229;
_Bool _condtional_value_X847;
void* __right_value726 = (void*)0;
struct sBlock* __dec_obj230;
_Bool _condtional_value_X848;
struct sComePollNode* __result_obj__283;
    if(({    (_condtional_value_X754=(self==(void*)0));    _condtional_value_X754;    })) {
        __result_obj__256 = (void*)0;
        return __result_obj__256;
    }
    result=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(({    (_condtional_value_X755=(self!=((void*)0)));    _condtional_value_X755;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X756=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X756;    })) {
        __dec_obj215=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X757=(self!=((void*)0)));    _condtional_value_X757;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X758=(self!=((void*)0)&&self->vars!=((void*)0)));    _condtional_value_X758;    })) {
        __dec_obj216=result->vars,
        result->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj216,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X759=(self!=((void*)0)&&self->blocks!=((void*)0)));    _condtional_value_X759;    })) {
        __dec_obj229=result->blocks,
        result->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj229,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X847=(self!=((void*)0)&&self->else_block!=((void*)0)));    _condtional_value_X847;    })) {
        __dec_obj230=result->else_block,
        result->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj230,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X848=(self!=((void*)0)));    _condtional_value_X848;    })) {
        result->time_out=self->time_out;
    }
    __result_obj__283 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__283;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
_Bool _condtional_value_X760;
struct list$1sBlock$ph* __result_obj__257;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1sBlock$ph* result;
struct list_item$1sBlock$ph* it;
_Bool _condtional_value_X761;
_Bool _condtional_value_X762;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct list$1sBlock$ph* __result_obj__282;
    if(({    (_condtional_value_X760=(self==((void*)0)));    _condtional_value_X760;    })) {
        __result_obj__257 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__257;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sBlock$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X761=(it!=((void*)0)));    _condtional_value_X761;    })) {
        if(({        (_condtional_value_X762=(1));        _condtional_value_X762;        })) {
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        else {
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__282 = (struct list$1sBlock$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__282;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
_Bool _condtional_value_X763;
struct sBlock* __result_obj__258;
void* __right_value685 = (void*)0;
struct sBlock* result;
_Bool _condtional_value_X764;
void* __right_value690 = (void*)0;
struct list$1sNode$ph* __dec_obj217;
_Bool _condtional_value_X768;
void* __right_value722 = (void*)0;
struct sVarTable* __dec_obj228;
_Bool _condtional_value_X846;
struct sBlock* __result_obj__281;
    if(({    (_condtional_value_X763=(self==(void*)0));    _condtional_value_X763;    })) {
        __result_obj__258 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__258;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(({    (_condtional_value_X764=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X764;    })) {
        __dec_obj217=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj217,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X768=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X768;    })) {
        __dec_obj228=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj228,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X846=(self!=((void*)0)));    _condtional_value_X846;    })) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__281 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__281;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X765;
struct list$1sNode$ph* __result_obj__259;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X766;
_Bool _condtional_value_X767;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1sNode$ph* __result_obj__260;
    if(({    (_condtional_value_X765=(self==((void*)0)));    _condtional_value_X765;    })) {
        __result_obj__259 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__259;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X766=(it!=((void*)0)));    _condtional_value_X766;    })) {
        if(({        (_condtional_value_X767=(1));        _condtional_value_X767;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__260 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__260;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
_Bool _condtional_value_X769;
struct sVarTable* __result_obj__261;
void* __right_value691 = (void*)0;
struct sVarTable* result;
_Bool _condtional_value_X770;
void* __right_value721 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj227;
_Bool _condtional_value_X844;
_Bool _condtional_value_X845;
struct sVarTable* __result_obj__280;
    if(({    (_condtional_value_X769=(self==(void*)0));    _condtional_value_X769;    })) {
        __result_obj__261 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__261;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(({    (_condtional_value_X770=(self!=((void*)0)&&self->mVars!=((void*)0)));    _condtional_value_X770;    })) {
        __dec_obj227=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj227,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X844=(self!=((void*)0)));    _condtional_value_X844;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_condtional_value_X845=(self!=((void*)0)));    _condtional_value_X845;    })) {
        result->mParent=self->mParent;
    }
    __result_obj__280 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__280;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X771;
struct map$2char$phsVar$ph* __result_obj__262;
void* __right_value692 = (void*)0;
void* __right_value698 = (void*)0;
struct map$2char$phsVar$ph* result;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1char$ph* __dec_obj219;
char* it;
_Bool _condtional_value_X788;
_Bool _condtional_value_X789;
_Bool _condtional_value_X792;
struct sVar* default_value;
void* __right_value701 = (void*)0;
struct sVar* it2;
_Bool _condtional_value_X798;
void* __right_value710 = (void*)0;
void* __right_value716 = (void*)0;
_Bool _condtional_value_X832;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
_Bool _condtional_value_X833;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__279;
default_value = (void*)0;
    if(({    (_condtional_value_X771=(self==((void*)0)));    _condtional_value_X771;    })) {
        __result_obj__262 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__262;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 2003, "struct map$2char$phsVar$ph*"))));
    __dec_obj219=result->key_list,
    result->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2005, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj219,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    ({    (_condtional_value_X788=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X788;    });    ({    (_condtional_value_X789=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X789;    });    ({    (_condtional_value_X792=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X792;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(({        (_condtional_value_X798=(1&&1));        _condtional_value_X798;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 2014, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_condtional_value_X832=(1));        _condtional_value_X832;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 2017, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_condtional_value_X833=(1));        _condtional_value_X833;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__279 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__279;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X772;
_Bool _condtional_value_X773;
_Bool _condtional_value_X774;
_Bool _condtional_value_X775;
_Bool _condtional_value_X776;
int i_206;
_Bool _condtional_value_X777;
_Bool _condtional_value_X778;
_Bool _condtional_value_X779;
_Bool _condtional_value_X780;
_Bool _condtional_value_X781;
    for(    ({    (_condtional_value_X772=(i=0));    _condtional_value_X772;    });    ({    (_condtional_value_X773=(i<self->size));    _condtional_value_X773;    });    ({    (_condtional_value_X774=(i++));    _condtional_value_X774;    })    ){
        if(({        (_condtional_value_X775=(self->item_existance[i]));        _condtional_value_X775;        })) {
            if(({            (_condtional_value_X776=(1));            _condtional_value_X776;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X777=(i_206=0));    _condtional_value_X777;    });    ({    (_condtional_value_X778=(i_206<self->size));    _condtional_value_X778;    });    ({    (_condtional_value_X779=(i_206++));    _condtional_value_X779;    })    ){
        if(({        (_condtional_value_X780=(self->item_existance[i_206]));        _condtional_value_X780;        })) {
            if(({            (_condtional_value_X781=(1));            _condtional_value_X781;            })) {
                (self->keys[i_206] = come_decrement_ref_count(self->keys[i_206], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
int i;
_Bool _condtional_value_X782;
_Bool _condtional_value_X783;
_Bool _condtional_value_X784;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1char$ph* __dec_obj218;
struct map$2char$phsVar$ph* __result_obj__264;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value693=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value694=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value695=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X782=(i=0));    _condtional_value_X782;    });    ({    (_condtional_value_X783=(i<128));    _condtional_value_X783;    });    ({    (_condtional_value_X784=(i++));    _condtional_value_X784;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj218=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj218,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__264 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__264;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__263;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__263 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__263;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it;
_Bool _condtional_value_X785;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X785=(it!=((void*)0)));    _condtional_value_X785;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X786;
char* result;
char* __result_obj__265;
_Bool _condtional_value_X787;
char* __result_obj__266;
char* result_207;
char* __result_obj__267;
result = (void*)0;
result_207 = (void*)0;
    if(({    (_condtional_value_X786=(self==((void*)0)));    _condtional_value_X786;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__265 = result;
        return __result_obj__265;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X787=(self->key_list->it));    _condtional_value_X787;    })) {
        __result_obj__266 = self->key_list->it->item;
        return __result_obj__266;
    }
    memset(&result_207,0,sizeof(char*));
    __result_obj__267 = result_207;
    return __result_obj__267;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X790;
char* result;
char* __result_obj__268;
_Bool _condtional_value_X791;
char* __result_obj__269;
char* result_208;
char* __result_obj__270;
result = (void*)0;
result_208 = (void*)0;
    if(({    (_condtional_value_X790=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X790;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__268 = result;
        return __result_obj__268;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X791=(self->key_list->it));    _condtional_value_X791;    })) {
        __result_obj__269 = self->key_list->it->item;
        return __result_obj__269;
    }
    memset(&result_208,0,sizeof(char*));
    __result_obj__270 = result_208;
    return __result_obj__270;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X793;
_Bool _condtional_value_X794;
_Bool _condtional_value_X795;
struct sVar* __result_obj__271;
_Bool _condtional_value_X796;
_Bool _condtional_value_X797;
struct sVar* __result_obj__272;
struct sVar* __result_obj__273;
struct sVar* __result_obj__274;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X793=((_Bool)1));    _condtional_value_X793;    })) {
        if(({        (_condtional_value_X794=(self->item_existance[it]));        _condtional_value_X794;        })) {
            if(({            (_condtional_value_X795=(string_equals(self->keys[it],key)));            _condtional_value_X795;            })) {
                __result_obj__271 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__271;
            }
            it++;
            if(({            (_condtional_value_X796=(it>=self->size));            _condtional_value_X796;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X797=(it==hash));            _condtional_value_X797;            })) {
                __result_obj__272 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__272;
            }
        }
        else {
            __result_obj__273 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__273;
        }
    }
    __result_obj__274 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__274;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
_Bool _condtional_value_X799;
unsigned int hash;
int it;
_Bool _condtional_value_X807;
_Bool _condtional_value_X808;
_Bool _condtional_value_X809;
_Bool _condtional_value_X810;
_Bool _condtional_value_X811;
_Bool _condtional_value_X812;
_Bool _condtional_value_X813;
_Bool _condtional_value_X814;
_Bool _condtional_value_X815;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X816;
_Bool _condtional_value_X817;
_Bool _condtional_value_X818;
_Bool _condtional_value_X819;
_Bool _condtional_value_X820;
struct map$2char$phsVar$ph* __result_obj__276;
    if(({    (_condtional_value_X799=(self->len*2>=self->size));    _condtional_value_X799;    })) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X807=((_Bool)1));    _condtional_value_X807;    })) {
        if(({        (_condtional_value_X808=(self->item_existance[it]));        _condtional_value_X808;        })) {
            if(({            (_condtional_value_X809=(string_equals(self->keys[it],key)));            _condtional_value_X809;            })) {
                if(({                (_condtional_value_X810=(1));                _condtional_value_X810;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X811=(1));                _condtional_value_X811;                })) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X812=(it>=self->size));            _condtional_value_X812;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X813=(it==hash));            _condtional_value_X813;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X814=(1));            _condtional_value_X814;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X815=(1));            _condtional_value_X815;            })) {
                self->items[it]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X816=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X816;    });    ({    (_condtional_value_X817=(!list$1char$ph_end(self->key_list)));    _condtional_value_X817;    });    ({    (_condtional_value_X818=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X818;    })    ){
        if(({        (_condtional_value_X819=(string_equals(it2,key)));        _condtional_value_X819;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X820=(!same_key_exist));    _condtional_value_X820;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__276 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__276;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value702 = (void*)0;
char** keys;
void* __right_value703 = (void*)0;
struct sVar** items;
void* __right_value704 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X800;
_Bool _condtional_value_X801;
_Bool _condtional_value_X802;
struct sVar* default_value;
void* __right_value705 = (void*)0;
struct sVar* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X803;
_Bool _condtional_value_X804;
_Bool _condtional_value_X805;
_Bool _condtional_value_X806;
struct sVar* default_value_209;
void* __right_value706 = (void*)0;
default_value = (void*)0;
default_value_209 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value702=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value703=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sVar**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value704=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X800=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X800;    });    ({    (_condtional_value_X801=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X801;    });    ({    (_condtional_value_X802=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X802;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=((struct sVar*)(__right_value705=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value705, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X803=((_Bool)1));        _condtional_value_X803;        })) {
            if(({            (_condtional_value_X804=(item_existance[n]));            _condtional_value_X804;            })) {
                n++;
                if(({                (_condtional_value_X805=(n>=size));                _condtional_value_X805;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X806=(n==hash));                _condtional_value_X806;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sVar*)(__right_value706=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_209))));
                come_call_finalizer(sVar_finalize, __right_value706, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X821;
void* __right_value707 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj220;
_Bool _condtional_value_X822;
void* __right_value708 = (void*)0;
struct list_item$1char$ph* litem_210;
char* __dec_obj221;
void* __right_value709 = (void*)0;
struct list_item$1char$ph* litem_211;
char* __dec_obj222;
struct list$1char$ph* __result_obj__275;
    if(({    (_condtional_value_X821=(self->len==0));    _condtional_value_X821;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value707=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj220=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X822=(self->len==1));    _condtional_value_X822;    })) {
        litem_210=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value708=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_210->prev=self->head;
        litem_210->next=((void*)0);
        __dec_obj221=litem_210->item,
        litem_210->item=(char*)come_increment_ref_count(item);
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_210;
        self->head->next=litem_210;
    }
    else {
        litem_211=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value709=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_211->prev=self->tail;
        litem_211->next=((void*)0);
        __dec_obj222=litem_211->item,
        litem_211->item=(char*)come_increment_ref_count(item);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_211;
        self->tail=litem_211;
    }
    self->len++;
    __result_obj__275 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__275;
}

static struct sVar* sVar_clone(struct sVar* self){
_Bool _condtional_value_X823;
struct sVar* __result_obj__277;
void* __right_value711 = (void*)0;
struct sVar* result;
_Bool _condtional_value_X824;
void* __right_value712 = (void*)0;
char* __dec_obj223;
_Bool _condtional_value_X825;
void* __right_value713 = (void*)0;
char* __dec_obj224;
_Bool _condtional_value_X826;
void* __right_value714 = (void*)0;
struct sType* __dec_obj225;
_Bool _condtional_value_X827;
_Bool _condtional_value_X828;
_Bool _condtional_value_X829;
_Bool _condtional_value_X830;
_Bool _condtional_value_X831;
void* __right_value715 = (void*)0;
char* __dec_obj226;
struct sVar* __result_obj__278;
    if(({    (_condtional_value_X823=(self==(void*)0));    _condtional_value_X823;    })) {
        __result_obj__277 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__277;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(({    (_condtional_value_X824=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X824;    })) {
        __dec_obj223=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X825=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X825;    })) {
        __dec_obj224=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X826=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X826;    })) {
        __dec_obj225=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj225,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X827=(self!=((void*)0)));    _condtional_value_X827;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_condtional_value_X828=(self!=((void*)0)));    _condtional_value_X828;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X829=(self!=((void*)0)));    _condtional_value_X829;    })) {
        result->mNoFree=self->mNoFree;
    }
    if(({    (_condtional_value_X830=(self!=((void*)0)));    _condtional_value_X830;    })) {
        result->mComma=self->mComma;
    }
    if(({    (_condtional_value_X831=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X831;    })) {
        __dec_obj226=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__278 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__278;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X834;
_Bool _condtional_value_X835;
_Bool _condtional_value_X836;
_Bool _condtional_value_X837;
_Bool _condtional_value_X838;
int i_212;
_Bool _condtional_value_X839;
_Bool _condtional_value_X840;
_Bool _condtional_value_X841;
_Bool _condtional_value_X842;
_Bool _condtional_value_X843;
    for(    ({    (_condtional_value_X834=(i=0));    _condtional_value_X834;    });    ({    (_condtional_value_X835=(i<self->size));    _condtional_value_X835;    });    ({    (_condtional_value_X836=(i++));    _condtional_value_X836;    })    ){
        if(({        (_condtional_value_X837=(self->item_existance[i]));        _condtional_value_X837;        })) {
            if(({            (_condtional_value_X838=(1));            _condtional_value_X838;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X839=(i_212=0));    _condtional_value_X839;    });    ({    (_condtional_value_X840=(i_212<self->size));    _condtional_value_X840;    });    ({    (_condtional_value_X841=(i_212++));    _condtional_value_X841;    })    ){
        if(({        (_condtional_value_X842=(self->item_existance[i_212]));        _condtional_value_X842;        })) {
            if(({            (_condtional_value_X843=(1));            _condtional_value_X843;            })) {
                (self->keys[i_212] = come_decrement_ref_count(self->keys[i_212], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
_Bool _condtional_value_X850;
struct sFuncNode* __result_obj__285;
void* __right_value730 = (void*)0;
struct sFuncNode* result;
_Bool _condtional_value_X851;
_Bool _condtional_value_X852;
void* __right_value731 = (void*)0;
char* __dec_obj231;
_Bool _condtional_value_X853;
struct sFuncNode* __result_obj__286;
    if(({    (_condtional_value_X850=(self==(void*)0));    _condtional_value_X850;    })) {
        __result_obj__285 = (void*)0;
        return __result_obj__285;
    }
    result=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(({    (_condtional_value_X851=(self!=((void*)0)));    _condtional_value_X851;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X852=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X852;    })) {
        __dec_obj231=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X853=(self!=((void*)0)));    _condtional_value_X853;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__286 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__286;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
_Bool _condtional_value_X855;
struct sWildCard* __result_obj__288;
void* __right_value735 = (void*)0;
struct sWildCard* result;
_Bool _condtional_value_X856;
_Bool _condtional_value_X857;
void* __right_value736 = (void*)0;
char* __dec_obj232;
_Bool _condtional_value_X858;
struct sWildCard* __result_obj__289;
    if(({    (_condtional_value_X855=(self==(void*)0));    _condtional_value_X855;    })) {
        __result_obj__288 = (void*)0;
        return __result_obj__288;
    }
    result=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(({    (_condtional_value_X856=(self!=((void*)0)));    _condtional_value_X856;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X857=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X857;    })) {
        __dec_obj232=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X858=(self!=((void*)0)));    _condtional_value_X858;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__289 = result;
    come_call_finalizer(sWildCard_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__289;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
_Bool _condtional_value_X862;
struct sCallerFuncNode* __result_obj__293;
void* __right_value746 = (void*)0;
struct sCallerFuncNode* result;
_Bool _condtional_value_X863;
_Bool _condtional_value_X864;
void* __right_value747 = (void*)0;
char* __dec_obj233;
_Bool _condtional_value_X865;
struct sCallerFuncNode* __result_obj__294;
    if(({    (_condtional_value_X862=(self==(void*)0));    _condtional_value_X862;    })) {
        __result_obj__293 = (void*)0;
        return __result_obj__293;
    }
    result=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(({    (_condtional_value_X863=(self!=((void*)0)));    _condtional_value_X863;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X864=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X864;    })) {
        __dec_obj233=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X865=(self!=((void*)0)));    _condtional_value_X865;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__294 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__294;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
_Bool _condtional_value_X867;
struct sCallerLineNode* __result_obj__296;
void* __right_value751 = (void*)0;
struct sCallerLineNode* result;
_Bool _condtional_value_X868;
_Bool _condtional_value_X869;
void* __right_value752 = (void*)0;
char* __dec_obj234;
_Bool _condtional_value_X870;
struct sCallerLineNode* __result_obj__297;
    if(({    (_condtional_value_X867=(self==(void*)0));    _condtional_value_X867;    })) {
        __result_obj__296 = (void*)0;
        return __result_obj__296;
    }
    result=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(({    (_condtional_value_X868=(self!=((void*)0)));    _condtional_value_X868;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X869=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X869;    })) {
        __dec_obj234=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X870=(self!=((void*)0)));    _condtional_value_X870;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__297 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__297;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
_Bool _condtional_value_X872;
struct sCallerSNameNode* __result_obj__299;
void* __right_value756 = (void*)0;
struct sCallerSNameNode* result;
_Bool _condtional_value_X873;
_Bool _condtional_value_X874;
void* __right_value757 = (void*)0;
char* __dec_obj235;
_Bool _condtional_value_X875;
struct sCallerSNameNode* __result_obj__300;
    if(({    (_condtional_value_X872=(self==(void*)0));    _condtional_value_X872;    })) {
        __result_obj__299 = (void*)0;
        return __result_obj__299;
    }
    result=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(({    (_condtional_value_X873=(self!=((void*)0)));    _condtional_value_X873;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X874=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X874;    })) {
        __dec_obj235=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X875=(self!=((void*)0)));    _condtional_value_X875;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__300 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__300;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
_Bool _condtional_value_X877;
struct sVarArgTypeName* __result_obj__302;
void* __right_value762 = (void*)0;
struct sVarArgTypeName* result;
_Bool _condtional_value_X878;
_Bool _condtional_value_X879;
void* __right_value763 = (void*)0;
char* __dec_obj236;
_Bool _condtional_value_X880;
_Bool _condtional_value_X881;
void* __right_value764 = (void*)0;
struct sType* __dec_obj237;
struct sVarArgTypeName* __result_obj__303;
    if(({    (_condtional_value_X877=(self==(void*)0));    _condtional_value_X877;    })) {
        __result_obj__302 = (void*)0;
        return __result_obj__302;
    }
    result=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(({    (_condtional_value_X878=(self!=((void*)0)));    _condtional_value_X878;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X879=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X879;    })) {
        __dec_obj236=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X880=(self!=((void*)0)));    _condtional_value_X880;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X881=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X881;    })) {
        __dec_obj237=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj237,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__303 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__303;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
_Bool _condtional_value_X890;
struct sInlineAssembler* __result_obj__306;
void* __right_value776 = (void*)0;
struct sInlineAssembler* result;
_Bool _condtional_value_X891;
_Bool _condtional_value_X892;
void* __right_value777 = (void*)0;
char* __dec_obj238;
_Bool _condtional_value_X893;
_Bool _condtional_value_X894;
void* __right_value778 = (void*)0;
char* __dec_obj239;
_Bool _condtional_value_X895;
void* __right_value779 = (void*)0;
struct list$1sNode$ph* __dec_obj240;
struct sInlineAssembler* __result_obj__307;
    if(({    (_condtional_value_X890=(self==(void*)0));    _condtional_value_X890;    })) {
        __result_obj__306 = (void*)0;
        return __result_obj__306;
    }
    result=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(({    (_condtional_value_X891=(self!=((void*)0)));    _condtional_value_X891;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X892=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X892;    })) {
        __dec_obj238=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X893=(self!=((void*)0)));    _condtional_value_X893;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X894=(self!=((void*)0)&&self->source!=((void*)0)));    _condtional_value_X894;    })) {
        __dec_obj239=result->source,
        result->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X895=(self!=((void*)0)&&self->exps!=((void*)0)));    _condtional_value_X895;    })) {
        __dec_obj240=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj240,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__307 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__307;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X897;
_Bool _condtional_value_X898;
_Bool _condtional_value_X899;
struct sType* __result_obj__309;
_Bool _condtional_value_X900;
_Bool _condtional_value_X901;
struct sType* __result_obj__310;
struct sType* __result_obj__311;
struct sType* __result_obj__312;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sType*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X897=((_Bool)1));    _condtional_value_X897;    })) {
        if(({        (_condtional_value_X898=(self->item_existance[it]));        _condtional_value_X898;        })) {
            if(({            (_condtional_value_X899=(string_equals(self->keys[it],key)));            _condtional_value_X899;            })) {
                __result_obj__309 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__309;
            }
            it++;
            if(({            (_condtional_value_X900=(it>=self->size));            _condtional_value_X900;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X901=(it==hash));            _condtional_value_X901;            })) {
                __result_obj__310 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__310;
            }
        }
        else {
            __result_obj__311 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__311, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__311;
        }
    }
    __result_obj__312 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__312, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__312;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X902;
_Bool _condtional_value_X903;
_Bool _condtional_value_X904;
struct sType* __result_obj__313;
_Bool _condtional_value_X905;
_Bool _condtional_value_X906;
struct sType* __result_obj__314;
struct sType* __result_obj__315;
struct sType* __result_obj__316;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sType*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X902=((_Bool)1));    _condtional_value_X902;    })) {
        if(({        (_condtional_value_X903=(self->item_existance[it]));        _condtional_value_X903;        })) {
            if(({            (_condtional_value_X904=(string_equals(self->keys[it],key)));            _condtional_value_X904;            })) {
                __result_obj__313 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__313;
            }
            it++;
            if(({            (_condtional_value_X905=(it>=self->size));            _condtional_value_X905;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X906=(it==hash));            _condtional_value_X906;            })) {
                __result_obj__314 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__314;
            }
        }
        else {
            __result_obj__315 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__315;
        }
    }
    __result_obj__316 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__316;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value805 = (void*)0;
struct sNode* __result_obj__324;
    __result_obj__324 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value805=expression_node_v99(info))));
    ((__right_value805) ? __right_value805 = come_decrement_ref_count(__right_value805, ((struct sNode*)__right_value805)->finalize, ((struct sNode*)__right_value805)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__324;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
_Bool _condtional_value_X914;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* __dec_obj242;
struct sNode* __result_obj__325;
_Bool _condtional_value_X915;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj243;
struct sNode* __result_obj__326;
struct sNode* __result_obj__327;
    if(({    (_condtional_value_X914=(!node->terminated(node->_protocol_obj)&&parsecmp("or",info)));    _condtional_value_X914;    })) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj242=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__325 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__325;
    }
    else if(({    (_condtional_value_X915=(!node->terminated(node->_protocol_obj)&&parsecmp("and",info)));    _condtional_value_X915;    })) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj243=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__326 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__326;
    }
    __result_obj__327 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__327;
}

struct sNode* statment(struct sInfo* info){
void* __right_value810 = (void*)0;
struct sNode* node;
void* __right_value811 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result_obj__328;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj244=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node),info));
    (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__328 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__328;
}

char* get_none_generics_name(char* class_name){
char* p;
_Bool _condtional_value_X916;
_Bool _condtional_value_X917;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
char* __result_obj__329;
void* __right_value814 = (void*)0;
char* __result_obj__330;
    p=class_name;
    while(({    (_condtional_value_X916=(*p));    _condtional_value_X916;    })) {
        if(({        (_condtional_value_X917=(*p==36));        _condtional_value_X917;        })) {
            __result_obj__329 = (char*)come_increment_ref_count(((char*)(__right_value813=charp_substring(((char*)(__right_value812=__builtin_string(class_name))),0,p-class_name))));
            (__right_value812 = come_decrement_ref_count(__right_value812, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value813 = come_decrement_ref_count(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__329 = come_decrement_ref_count(__result_obj__329, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__329;
        }
        else {
            p++;
        }
    }
    __result_obj__330 = (char*)come_increment_ref_count(((char*)(__right_value814=__builtin_string(class_name))));
    (__right_value814 = come_decrement_ref_count(__right_value814, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__330 = come_decrement_ref_count(__result_obj__330, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__330;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct buffer* buf;
struct sClass* klass;
char* class_name;
_Bool _condtional_value_X918;
int i;
_Bool _condtional_value_X919;
_Bool _condtional_value_X920;
_Bool _condtional_value_X921;
void* __right_value817 = (void*)0;
struct sType* type;
void* __right_value818 = (void*)0;
char* type_name;
int i_225;
_Bool _condtional_value_X922;
_Bool _condtional_value_X923;
_Bool _condtional_value_X924;
_Bool _condtional_value_X925;
void* __right_value819 = (void*)0;
char* __result_obj__331;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2717, "struct buffer*"))));
    klass=generics_type->mClass;
    class_name=klass->mName;
    buffer_append_str(buf,class_name);
    if(({    (_condtional_value_X918=(list$1sType$ph_length(generics_type->mGenericsTypes)>0));    _condtional_value_X918;    })) {
        buffer_append_char(buf,36);
        buffer_append_char(buf,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        ({        (_condtional_value_X919=(i=0));        _condtional_value_X919;        });        ({        (_condtional_value_X920=(i<list$1sType$ph_length(generics_type->mGenericsTypes)));        _condtional_value_X920;        });        ({        (_condtional_value_X921=(i++));        _condtional_value_X921;        })        ){
            type=((struct sType*)(__right_value817=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i)));
            come_call_finalizer(sType_finalize, __right_value817, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type_name=(char*)come_increment_ref_count(create_generics_name(type,info));
            buffer_append_str(buf,type_name);
            buffer_append_char(buf,36);
            for(            ({            (_condtional_value_X922=(i_225=0));            _condtional_value_X922;            });            ({            (_condtional_value_X923=(i_225<type->mPointerNum));            _condtional_value_X923;            });            ({            (_condtional_value_X924=(i_225++));            _condtional_value_X924;            })            ){
                buffer_append_char(buf,112);
            }
            if(({            (_condtional_value_X925=(type->mHeap));            _condtional_value_X925;            })) {
                buffer_append_str(buf,"h");
            }
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__331 = (char*)come_increment_ref_count(((char*)(__right_value819=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value819 = come_decrement_ref_count(__right_value819, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__331 = come_decrement_ref_count(__result_obj__331, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__331;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X926;
void* __right_value822 = (void*)0;
char* __dec_obj245;
_Bool _condtional_value_X927;
void* __right_value823 = (void*)0;
char* __dec_obj246;
_Bool _condtional_value_X928;
_Bool _condtional_value_X929;
int i;
_Bool _condtional_value_X930;
_Bool _condtional_value_X931;
_Bool _condtional_value_X932;
_Bool _condtional_value_X933;
void* __right_value824 = (void*)0;
char* __dec_obj247;
_Bool _condtional_value_X934;
void* __right_value825 = (void*)0;
char* __dec_obj248;
void* __right_value826 = (void*)0;
char* __dec_obj249;
_Bool _condtional_value_X935;
int i_226;
_Bool _condtional_value_X936;
_Bool _condtional_value_X937;
_Bool _condtional_value_X938;
_Bool _condtional_value_X939;
_Bool _condtional_value_X940;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
char* __result_obj__332;
struct_name = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2752, "struct buffer*"))));
    if(({    (_condtional_value_X926=(string_operator_not_equals(obj_type->mOriginalTypeName,"")));    _condtional_value_X926;    })) {
        __dec_obj245=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X927=(string_operator_equals(struct_name,"_Bool")));        _condtional_value_X927;        })) {
            __dec_obj246=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(({        (_condtional_value_X928=(!obj_type->mClass->mStruct));        _condtional_value_X928;        })) {
            if(({            (_condtional_value_X929=(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0));            _condtional_value_X929;            })) {
                buffer_append_str(buf,"$");
            }
            for(            ({            (_condtional_value_X930=(i=0));            _condtional_value_X930;            });            ({            (_condtional_value_X931=(i<obj_type->mOriginalTypeNamePointerNum));            _condtional_value_X931;            });            ({            (_condtional_value_X932=(i++));            _condtional_value_X932;            })            ){
                buffer_append_str(buf,"p");
            }
        }
    }
    else if(({    (_condtional_value_X933=(obj_type->mClass->mStruct||obj_type->mClass->mProtocol));    _condtional_value_X933;    })) {
        __dec_obj247=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X934=(string_operator_equals(struct_name,"_Bool")));        _condtional_value_X934;        })) {
            __dec_obj248=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj249=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X935=(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0));        _condtional_value_X935;        })) {
            buffer_append_str(buf,"$");
        }
        for(        ({        (_condtional_value_X936=(i_226=0));        _condtional_value_X936;        });        ({        (_condtional_value_X937=(i_226<obj_type->mPointerNum));        _condtional_value_X937;        });        ({        (_condtional_value_X938=(i_226++));        _condtional_value_X938;        })        ){
            buffer_append_str(buf,"p");
        }
    }
    if(({    (_condtional_value_X939=(obj_type->mArrayPointerType));    _condtional_value_X939;    })) {
        buffer_append_str(buf,"a");
    }
    if(({    (_condtional_value_X940=(!array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0));    _condtional_value_X940;    })) {
        buffer_append_str(buf,"pa");
    }
    __result_obj__332 = (char*)come_increment_ref_count(((char*)(__right_value828=xsprintf("%s%s_%s",struct_name,((char*)(__right_value827=buffer_to_string(buf))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value827 = come_decrement_ref_count(__right_value827, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value828 = come_decrement_ref_count(__right_value828, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__332 = come_decrement_ref_count(__result_obj__332, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__332;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X941;
void* __right_value831 = (void*)0;
char* __dec_obj250;
_Bool _condtional_value_X942;
void* __right_value832 = (void*)0;
char* __dec_obj251;
void* __right_value833 = (void*)0;
char* __dec_obj252;
_Bool _condtional_value_X943;
int i;
_Bool _condtional_value_X944;
_Bool _condtional_value_X945;
_Bool _condtional_value_X946;
_Bool _condtional_value_X947;
_Bool _condtional_value_X948;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
char* __result_obj__333;
struct_name = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2799, "struct buffer*"))));
    if(({    (_condtional_value_X941=(obj_type->mClass->mStruct||obj_type->mClass->mProtocol));    _condtional_value_X941;    })) {
        __dec_obj250=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X942=(string_operator_equals(struct_name,"_Bool")));        _condtional_value_X942;        })) {
            __dec_obj251=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj252=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X943=(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0));        _condtional_value_X943;        })) {
            buffer_append_str(buf,"$");
        }
        for(        ({        (_condtional_value_X944=(i=0));        _condtional_value_X944;        });        ({        (_condtional_value_X945=(i<obj_type->mPointerNum));        _condtional_value_X945;        });        ({        (_condtional_value_X946=(i++));        _condtional_value_X946;        })        ){
            buffer_append_str(buf,"p");
        }
    }
    if(({    (_condtional_value_X947=(obj_type->mArrayPointerType));    _condtional_value_X947;    })) {
        buffer_append_str(buf,"a");
    }
    if(({    (_condtional_value_X948=(!array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0));    _condtional_value_X948;    })) {
        buffer_append_str(buf,"pa");
    }
    __result_obj__333 = (char*)come_increment_ref_count(((char*)(__right_value835=xsprintf("%s%s_%s",struct_name,((char*)(__right_value834=buffer_to_string(buf))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value834 = come_decrement_ref_count(__right_value834, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value835 = come_decrement_ref_count(__right_value835, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__333 = come_decrement_ref_count(__result_obj__333, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__333;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X949;
void* __right_value838 = (void*)0;
char* __dec_obj253;
_Bool _condtional_value_X950;
void* __right_value839 = (void*)0;
char* __dec_obj254;
_Bool _condtional_value_X951;
_Bool _condtional_value_X952;
int i;
_Bool _condtional_value_X953;
_Bool _condtional_value_X954;
_Bool _condtional_value_X955;
_Bool _condtional_value_X956;
void* __right_value840 = (void*)0;
char* __dec_obj255;
_Bool _condtional_value_X957;
void* __right_value841 = (void*)0;
char* __dec_obj256;
void* __right_value842 = (void*)0;
char* __dec_obj257;
_Bool _condtional_value_X958;
int i_227;
_Bool _condtional_value_X959;
_Bool _condtional_value_X960;
_Bool _condtional_value_X961;
_Bool _condtional_value_X962;
_Bool _condtional_value_X963;
void* __right_value843 = (void*)0;
int len;
void* __right_value844 = (void*)0;
char* __result_obj__334;
struct_name = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2831, "struct buffer*"))));
    if(({    (_condtional_value_X949=(string_operator_not_equals(obj_type->mOriginalTypeName,"")));    _condtional_value_X949;    })) {
        __dec_obj253=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X950=(string_operator_equals(struct_name,"_Bool")));        _condtional_value_X950;        })) {
            __dec_obj254=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(({        (_condtional_value_X951=(!obj_type->mClass->mStruct));        _condtional_value_X951;        })) {
            if(({            (_condtional_value_X952=(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0));            _condtional_value_X952;            })) {
                buffer_append_str(buf,"$");
            }
            for(            ({            (_condtional_value_X953=(i=0));            _condtional_value_X953;            });            ({            (_condtional_value_X954=(i<obj_type->mOriginalTypeNamePointerNum));            _condtional_value_X954;            });            ({            (_condtional_value_X955=(i++));            _condtional_value_X955;            })            ){
                buffer_append_str(buf,"p");
            }
        }
    }
    else if(({    (_condtional_value_X956=(obj_type->mClass->mStruct||obj_type->mClass->mProtocol));    _condtional_value_X956;    })) {
        __dec_obj255=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X957=(string_operator_equals(struct_name,"_Bool")));        _condtional_value_X957;        })) {
            __dec_obj256=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj257=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X958=(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0));        _condtional_value_X958;        })) {
            buffer_append_str(buf,"$");
        }
        for(        ({        (_condtional_value_X959=(i_227=0));        _condtional_value_X959;        });        ({        (_condtional_value_X960=(i_227<obj_type->mPointerNum));        _condtional_value_X960;        });        ({        (_condtional_value_X961=(i_227++));        _condtional_value_X961;        })        ){
            buffer_append_str(buf,"p");
        }
    }
    if(({    (_condtional_value_X962=(obj_type->mArrayPointerType));    _condtional_value_X962;    })) {
        buffer_append_str(buf,"a");
    }
    if(({    (_condtional_value_X963=(!array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0));    _condtional_value_X963;    })) {
        buffer_append_str(buf,"pa");
    }
    char none_method_name[charp_length(fun_name)+1];
    memset(&none_method_name, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len=string_length(struct_name)+string_length(((char*)(__right_value843=buffer_to_string(buf))));
    (__right_value843 = come_decrement_ref_count(__right_value843, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    memcpy(none_method_name,fun_name+len+1,charp_length(fun_name)-len-1);
    none_method_name[charp_length(fun_name)-len-1]=0;
    __result_obj__334 = (char*)come_increment_ref_count(((char*)(__right_value844=__builtin_string(none_method_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value844 = come_decrement_ref_count(__right_value844, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__334 = come_decrement_ref_count(__result_obj__334, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__334;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value845 = (void*)0;
char* struct_name;
_Bool _condtional_value_X964;
void* __right_value846 = (void*)0;
char* __dec_obj258;
void* __right_value847 = (void*)0;
char* __result_obj__335;
    struct_name=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(({    (_condtional_value_X964=(string_operator_equals(struct_name,"_Bool")));    _condtional_value_X964;    })) {
        __dec_obj258=struct_name,
        struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__335 = (char*)come_increment_ref_count(((char*)(__right_value847=xsprintf("%s_%s",struct_name,fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value847 = come_decrement_ref_count(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__335 = come_decrement_ref_count(__result_obj__335, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__335;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
struct sNode* __result_obj__336;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
    __result_obj__336 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__336) ? __result_obj__336 = come_decrement_ref_count(__result_obj__336, ((struct sNode*)__result_obj__336)->finalize, ((struct sNode*)__result_obj__336)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__336;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
_Bool _condtional_value_X965;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool _condtional_value_X966;
_Bool _condtional_value_X967;
char* p;
int sline;
_Bool err_flag;
void* __right_value850 = (void*)0;
char* label;
_Bool _condtional_value_X968;
void* __right_value851 = (void*)0;
char* __dec_obj259;
_Bool _condtional_value_X969;
char* __dec_obj260;
_Bool no_comma;
_Bool in_fun_param;
void* __right_value852 = (void*)0;
struct sNode* node_228;
void* __right_value853 = (void*)0;
struct sNode* __dec_obj261;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
_Bool _condtional_value_X970;
_Bool _condtional_value_X971;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sNode* _inf_value25;
struct sLambdaCall* _inf_obj_value25;
void* __right_value862 = (void*)0;
struct sNode* __result_obj__339;
struct sNode* __result_obj__340;
    parse_sharp_v5(info);
    if(({    (_condtional_value_X965=(!node->terminated(node->_protocol_obj)&&*info->p==40));    _condtional_value_X965;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2909, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(({        (_condtional_value_X966=((_Bool)1));        _condtional_value_X966;        })) {
            if(({            (_condtional_value_X967=(*info->p==41));            _condtional_value_X967;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p=info->p;
            sline=info->sline;
            err_flag=(_Bool)0;
            label=(char*)come_increment_ref_count(__builtin_string(""));
            if(({            (_condtional_value_X968=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X968;            })) {
                __dec_obj259=label,
                label=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                err_flag=(_Bool)1;
            }
            if(({            (_condtional_value_X969=(err_flag==(_Bool)1&&*info->p==58));            _condtional_value_X969;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj260=label,
                label=((void*)0);
                __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->p=p;
                info->sline=sline;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_228=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj261=node_228,
            node_228=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_228),info));
            (__dec_obj261 ? __dec_obj261 = come_decrement_ref_count(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->no_comma=no_comma;
            info->in_fun_param=in_fun_param;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2952, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node_228))));
            parse_sharp_v5(info);
            if(({            (_condtional_value_X970=(*info->p==44));            _condtional_value_X970;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(({            (_condtional_value_X971=(*info->p==41));            _condtional_value_X971;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_228) ? node_228 = come_decrement_ref_count(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_228) ? node_228 = come_decrement_ref_count(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2970, "struct sNode");
        _inf_obj_value25=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value857=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2970, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params,info))));
        _inf_value25->_protocol_obj=_inf_obj_value25;
        _inf_value25->finalize=(void*)sLambdaCall_finalize;
        _inf_value25->clone=(void*)sLambdaCall_clone;
        _inf_value25->compile=(void*)sLambdaCall_compile;
        _inf_value25->sline=(void*)sNodeBase_sline;
        _inf_value25->sline_real=(void*)sNodeBase_sline_real;
        _inf_value25->sname=(void*)sNodeBase_sname;
        _inf_value25->terminated=(void*)sNodeBase_terminated;
        _inf_value25->kind=(void*)sLambdaCall_kind;
        _inf_value25->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__339 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value862=_inf_value25)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value857, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value862) ? __right_value862 = come_decrement_ref_count(__right_value862, ((struct sNode*)__right_value862)->finalize, ((struct sNode*)__right_value862)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__339;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __result_obj__340 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__340;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
_Bool _condtional_value_X972;
struct sLambdaCall* __result_obj__337;
void* __right_value858 = (void*)0;
struct sLambdaCall* result;
_Bool _condtional_value_X973;
_Bool _condtional_value_X974;
void* __right_value859 = (void*)0;
char* __dec_obj262;
_Bool _condtional_value_X975;
_Bool _condtional_value_X976;
void* __right_value860 = (void*)0;
struct sNode* __dec_obj263;
_Bool _condtional_value_X977;
void* __right_value861 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj264;
struct sLambdaCall* __result_obj__338;
    if(({    (_condtional_value_X972=(self==(void*)0));    _condtional_value_X972;    })) {
        __result_obj__337 = (void*)0;
        return __result_obj__337;
    }
    result=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(({    (_condtional_value_X973=(self!=((void*)0)));    _condtional_value_X973;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X974=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X974;    })) {
        __dec_obj262=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X975=(self!=((void*)0)));    _condtional_value_X975;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X976=(self!=((void*)0)&&self->node!=((void*)0)));    _condtional_value_X976;    })) {
        __dec_obj263=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj263 ? __dec_obj263 = come_decrement_ref_count(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X977=(self!=((void*)0)&&self->params!=((void*)0)));    _condtional_value_X977;    })) {
        __dec_obj264=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj264,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__338 = result;
    come_call_finalizer(sLambdaCall_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__338;
}

