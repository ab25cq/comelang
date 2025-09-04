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
struct sNode* create_int_node(char* value, struct sInfo* info);
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
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
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
static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
static struct sVar* sVar_clone(struct sVar* self);
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
_Bool _condtional_value_X1;
    if(({    (_condtional_value_X1=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X1;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
_Bool _condtional_value_X2;
    if(({    (_condtional_value_X2=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X2;    })) {
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
struct sFun* come_fun;
int block_level;
_Bool _condtional_value_X4;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct CVALUE* come_value;
void* __right_value6 = (void*)0;
char* __dec_obj1;
void* __right_value46 = (void*)0;
struct sType* __dec_obj27;
_Bool __result_obj__22;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    block_level=info->block_level;
    info->block_level=0;
    if(({    (_condtional_value_X4=(self->mFun->mBlock));    _condtional_value_X4;    })) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj1=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj27=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    info->come_fun=come_fun;
    __result_obj__22 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__22;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
_Bool _condtional_value_X3;
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X3;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X5;
struct sType* __result_obj__5;
void* __right_value7 = (void*)0;
struct sType* result;
_Bool _condtional_value_X28;
_Bool _condtional_value_X29;
void* __right_value8 = (void*)0;
struct sType* __dec_obj2;
_Bool _condtional_value_X30;
void* __right_value9 = (void*)0;
struct sType* __dec_obj3;
_Bool _condtional_value_X31;
void* __right_value17 = (void*)0;
struct list$1sType$ph* __dec_obj7;
_Bool _condtional_value_X38;
void* __right_value18 = (void*)0;
struct sType* __dec_obj8;
_Bool _condtional_value_X39;
void* __right_value20 = (void*)0;
struct sNode* __dec_obj9;
_Bool _condtional_value_X51;
void* __right_value21 = (void*)0;
struct sNode* __dec_obj10;
_Bool _condtional_value_X52;
void* __right_value22 = (void*)0;
char* __dec_obj11;
_Bool _condtional_value_X53;
void* __right_value23 = (void*)0;
char* __dec_obj12;
_Bool _condtional_value_X54;
void* __right_value24 = (void*)0;
char* __dec_obj13;
_Bool _condtional_value_X55;
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
void* __right_value25 = (void*)0;
char* __dec_obj14;
_Bool _condtional_value_X81;
_Bool _condtional_value_X82;
_Bool _condtional_value_X83;
_Bool _condtional_value_X84;
void* __right_value33 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
void* __right_value34 = (void*)0;
char* __dec_obj19;
_Bool _condtional_value_X98;
_Bool _condtional_value_X99;
_Bool _condtional_value_X100;
void* __right_value35 = (void*)0;
struct list$1sType$ph* __dec_obj20;
_Bool _condtional_value_X101;
void* __right_value43 = (void*)0;
struct list$1char$ph* __dec_obj24;
_Bool _condtional_value_X108;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
_Bool _condtional_value_X109;
_Bool _condtional_value_X110;
_Bool _condtional_value_X111;
void* __right_value45 = (void*)0;
struct sNode* __dec_obj26;
struct sType* __result_obj__20;
    if(({    (_condtional_value_X5=(self==(void*)0));    _condtional_value_X5;    })) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__5;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X28=(self!=((void*)0)));    _condtional_value_X28;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X29=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X29;    })) {
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X30=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X30;    })) {
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X31=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X31;    })) {
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X38=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X38;    })) {
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X39=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X39;    })) {
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X51=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X51;    })) {
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X52=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X52;    })) {
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X53=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X53;    })) {
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X54=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X54;    })) {
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X55=(self!=((void*)0)));    _condtional_value_X55;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X56=(self!=((void*)0)));    _condtional_value_X56;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X57=(self!=((void*)0)));    _condtional_value_X57;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X58=(self!=((void*)0)));    _condtional_value_X58;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X59=(self!=((void*)0)));    _condtional_value_X59;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X60=(self!=((void*)0)));    _condtional_value_X60;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X61=(self!=((void*)0)));    _condtional_value_X61;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X62=(self!=((void*)0)));    _condtional_value_X62;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X63=(self!=((void*)0)));    _condtional_value_X63;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X64=(self!=((void*)0)));    _condtional_value_X64;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X65=(self!=((void*)0)));    _condtional_value_X65;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X66=(self!=((void*)0)));    _condtional_value_X66;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X67=(self!=((void*)0)));    _condtional_value_X67;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X68=(self!=((void*)0)));    _condtional_value_X68;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X69=(self!=((void*)0)));    _condtional_value_X69;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X70=(self!=((void*)0)));    _condtional_value_X70;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X71=(self!=((void*)0)));    _condtional_value_X71;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X72=(self!=((void*)0)));    _condtional_value_X72;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X73=(self!=((void*)0)));    _condtional_value_X73;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X74=(self!=((void*)0)));    _condtional_value_X74;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X75=(self!=((void*)0)));    _condtional_value_X75;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X76=(self!=((void*)0)));    _condtional_value_X76;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X77=(self!=((void*)0)));    _condtional_value_X77;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X78=(self!=((void*)0)));    _condtional_value_X78;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X79=(self!=((void*)0)));    _condtional_value_X79;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X80=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X80;    })) {
        __dec_obj14=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X81=(self!=((void*)0)));    _condtional_value_X81;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X82=(self!=((void*)0)));    _condtional_value_X82;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X83=(self!=((void*)0)));    _condtional_value_X83;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X84=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X84;    })) {
        __dec_obj18=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X91=(self!=((void*)0)));    _condtional_value_X91;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X92=(self!=((void*)0)));    _condtional_value_X92;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X93=(self!=((void*)0)));    _condtional_value_X93;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X94=(self!=((void*)0)));    _condtional_value_X94;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)));    _condtional_value_X95;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)));    _condtional_value_X96;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X97;    })) {
        __dec_obj19=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)));    _condtional_value_X98;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X99=(self!=((void*)0)));    _condtional_value_X99;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X100=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X100;    })) {
        __dec_obj20=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X101=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X101;    })) {
        __dec_obj24=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X108=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X108;    })) {
        __dec_obj25=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X109=(self!=((void*)0)));    _condtional_value_X109;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X110=(self!=((void*)0)));    _condtional_value_X110;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X111=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X111;    })) {
        __dec_obj26=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X6;
_Bool _condtional_value_X7;
_Bool _condtional_value_X8;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X16;
_Bool _condtional_value_X17;
_Bool _condtional_value_X18;
_Bool _condtional_value_X21;
_Bool _condtional_value_X22;
_Bool _condtional_value_X23;
_Bool _condtional_value_X26;
_Bool _condtional_value_X27;
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X7;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X8=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X8;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X11;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X12;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X13;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X14;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X15;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X16;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X17;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X18;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X21;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X22;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X23;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X26;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X27;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X9;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X9=(it!=((void*)0)));    _condtional_value_X9;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X10;
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X10;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X19;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X19=(it!=((void*)0)));    _condtional_value_X19;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X20;
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X20;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X24;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X24=(it!=((void*)0)));    _condtional_value_X24;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X25;
    if(({    (_condtional_value_X25=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X25;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X32;
struct list$1sType$ph* __result_obj__6;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X33;
_Bool _condtional_value_X34;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__9;
    if(({    (_condtional_value_X32=(self==((void*)0)));    _condtional_value_X32;    })) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__6;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X33=(it!=((void*)0)));    _condtional_value_X33;    })) {
        if(({        (_condtional_value_X34=(1));        _condtional_value_X34;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
_Bool _condtional_value_X35;
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
_Bool _condtional_value_X36;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(({    (_condtional_value_X35=(self->len==0));    _condtional_value_X35;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X36=(self->len==1));    _condtional_value_X36;    })) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__8 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X37;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X37=(it!=((void*)0)));    _condtional_value_X37;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X40;
struct sNode* __result_obj__10;
void* __right_value19 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
_Bool _condtional_value_X47;
_Bool _condtional_value_X48;
_Bool _condtional_value_X49;
_Bool _condtional_value_X50;
struct sNode* __result_obj__11;
    if(({    (_condtional_value_X40=(self==(void*)0));    _condtional_value_X40;    })) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__10;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X41=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X41;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X42=(self!=((void*)0)));    _condtional_value_X42;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X43=(self!=((void*)0)));    _condtional_value_X43;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X44=(self!=((void*)0)));    _condtional_value_X44;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X45=(self!=((void*)0)));    _condtional_value_X45;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X46=(self!=((void*)0)));    _condtional_value_X46;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X47=(self!=((void*)0)));    _condtional_value_X47;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X48=(self!=((void*)0)));    _condtional_value_X48;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X49=(self!=((void*)0)));    _condtional_value_X49;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X50=(self!=((void*)0)));    _condtional_value_X50;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X85;
struct list$1sNode$ph* __result_obj__12;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X86;
_Bool _condtional_value_X87;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1sNode$ph* __result_obj__15;
    if(({    (_condtional_value_X85=(self==((void*)0)));    _condtional_value_X85;    })) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X86=(it!=((void*)0)));    _condtional_value_X86;    })) {
        if(({        (_condtional_value_X87=(1));        _condtional_value_X87;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
_Bool _condtional_value_X88;
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj15;
_Bool _condtional_value_X89;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj16;
void* __right_value30 = (void*)0;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__14;
    if(({    (_condtional_value_X88=(self->len==0));    _condtional_value_X88;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X89=(self->len==1));    _condtional_value_X89;    })) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj16=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value30=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj17=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X90;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X90=(it!=((void*)0)));    _condtional_value_X90;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X102;
struct list$1char$ph* __result_obj__16;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X103;
_Bool _condtional_value_X104;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct list$1char$ph* __result_obj__19;
    if(({    (_condtional_value_X102=(self==((void*)0)));    _condtional_value_X102;    })) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__16;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X103=(it!=((void*)0)));    _condtional_value_X103;    })) {
        if(({        (_condtional_value_X104=(1));        _condtional_value_X104;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it=it->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
_Bool _condtional_value_X105;
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj21;
_Bool _condtional_value_X106;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_4;
char* __dec_obj22;
void* __right_value40 = (void*)0;
struct list_item$1char$ph* litem_5;
char* __dec_obj23;
struct list$1char$ph* __result_obj__18;
    if(({    (_condtional_value_X105=(self->len==0));    _condtional_value_X105;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj21=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X106=(self->len==1));    _condtional_value_X106;    })) {
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj22=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value40=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj23=litem_5->item,
        litem_5->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X107;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X107=(it!=((void*)0)));    _condtional_value_X107;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X112;
void* __right_value47 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj28;
_Bool _condtional_value_X117;
void* __right_value48 = (void*)0;
struct list_item$1CVALUE$ph* litem_6;
struct CVALUE* __dec_obj29;
void* __right_value49 = (void*)0;
struct list_item$1CVALUE$ph* litem_7;
struct CVALUE* __dec_obj30;
struct list$1CVALUE$ph* __result_obj__21;
    if(({    (_condtional_value_X112=(self->len==0));    _condtional_value_X112;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value47=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X117=(self->len==1));    _condtional_value_X117;    })) {
        litem_6=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value48=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1CVALUE$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value49=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1CVALUE$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__21 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__21;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X113;
_Bool _condtional_value_X114;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
    if(({    (_condtional_value_X113=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X113;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X114=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X114;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X115=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X115;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X116=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X116;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value50 = (void*)0;
struct sFun* __dec_obj31;
struct sFunNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value50=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj31=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer(sFun_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__23 = (struct sFunNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunNode_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value51 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value51=__builtin_string("sFunNode"))));
    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun;
_Bool _condtional_value_X144;
_Bool _condtional_value_X145;
int block_level;
_Bool _condtional_value_X146;
void* __right_value52 = (void*)0;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    if(({    (_condtional_value_X144=(self->mFun->mBlock));    _condtional_value_X144;    })) {
        if(({        (_condtional_value_X145=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")));        _condtional_value_X145;        })) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level;
        if(({        (_condtional_value_X146=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2));        _condtional_value_X146;        })) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value52=xsprintf("come_heap_final();\n"))));
            (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    info->come_fun=come_fun;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X118;
_Bool _condtional_value_X119;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
_Bool _condtional_value_X122;
_Bool _condtional_value_X123;
_Bool _condtional_value_X124;
_Bool _condtional_value_X131;
_Bool _condtional_value_X134;
_Bool _condtional_value_X135;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
_Bool _condtional_value_X138;
_Bool _condtional_value_X139;
_Bool _condtional_value_X140;
_Bool _condtional_value_X141;
    if(({    (_condtional_value_X118=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X118;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X119=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X119;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X120=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X120;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X121=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X121;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X122;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X123=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X123;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X124=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X124;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X131=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X131;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X134=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X134;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X135=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X135;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X136=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X136;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X137=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X137;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X138=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X138;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X139=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X139;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X140=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X140;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X141=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X141;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X125;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X125=(it!=((void*)0)));    _condtional_value_X125;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X126;
    if(({    (_condtional_value_X126=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X126;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X127;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
_Bool _condtional_value_X130;
    if(({    (_condtional_value_X127=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X127;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X128;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X129=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X129;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X130=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X130;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X132;
_Bool _condtional_value_X133;
    if(({    (_condtional_value_X132=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X132;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X133=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X133;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sFunNode_finalize(struct sFunNode* self){
_Bool _condtional_value_X142;
_Bool _condtional_value_X143;
    if(({    (_condtional_value_X142=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X142;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X143=(self!=((void*)0)&&self->mFun!=((void*)0)));    _condtional_value_X143;    })) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct sBlock* result;
int sline_top;
int block_level;
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
char* p_saved;
int sline_saved;
char* sname_saved;
_Bool _condtional_value_X149;
_Bool _condtional_value_X150;
_Bool _condtional_value_X151;
void* __right_value55 = (void*)0;
char* __dec_obj32;
char* __dec_obj33;
struct map$2char$phchar$ph* __dec_obj34;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
char* p;
int sline;
void* __right_value56 = (void*)0;
char* sname;
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
char* module_name;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1char$ph* params;
_Bool _condtional_value_X166;
_Bool _condtional_value_X167;
void* __right_value61 = (void*)0;
char* word;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
_Bool _condtional_value_X170;
_Bool _condtional_value_X171;
void* __right_value62 = (void*)0;
char* __dec_obj35;
void* __right_value63 = (void*)0;
char* __dec_obj36;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
_Bool _condtional_value_X186;
struct sBlock* __result_obj__33;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct sClassModule* module;
_Bool _condtional_value_X188;
struct sBlock* __result_obj__34;
void* __right_value70 = (void*)0;
void* __right_value76 = (void*)0;
struct map$2char$phchar$ph* __dec_obj38;
int i;
struct list$1char$ph* o2_saved;
char* it;
_Bool _condtional_value_X205;
_Bool _condtional_value_X206;
_Bool _condtional_value_X209;
void* __right_value77 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
char* __dec_obj42;
void* __right_value92 = (void*)0;
struct sNode* node;
void* __right_value93 = (void*)0;
char* __dec_obj43;
_Bool _condtional_value_X273;
struct sBlock* __result_obj__63;
_Bool _condtional_value_X276;
_Bool omit_semicolon;
_Bool _condtional_value_X277;
_Bool _condtional_value_X278;
_Bool _condtional_value_X279;
_Bool _condtional_value_X280;
void* __right_value97 = (void*)0;
char* __dec_obj47;
char* head;
void* __right_value98 = (void*)0;
struct sNode* value;
char* tail;
void* __right_value99 = (void*)0;
struct sNode* __dec_obj48;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct sNode* node_31;
_Bool _condtional_value_X303;
_Bool _condtional_value_X304;
void* __right_value102 = (void*)0;
char* __dec_obj49;
struct sNode* node_32;
_Bool _condtional_value_X305;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value107 = (void*)0;
struct sNode* __dec_obj51;
void* __right_value108 = (void*)0;
struct sNode* __dec_obj52;
_Bool _condtional_value_X310;
struct sBlock* __result_obj__70;
_Bool _condtional_value_X311;
_Bool omit_semicolon_33;
_Bool _condtional_value_X312;
_Bool _condtional_value_X313;
_Bool _condtional_value_X314;
char* p_34;
char* head_35;
void* __right_value109 = (void*)0;
char* source;
void* __right_value110 = (void*)0;
struct sNode* node_36;
_Bool _condtional_value_X315;
struct sBlock* __result_obj__71;
struct sBlock* __result_obj__72;
node_32 = (void*)0;
    result=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 116, "struct sBlock*"))));
    sline_top=info->sline_top;
    info->sline_top=info->sline;
    block_level=info->block_level;
    if(({    (_condtional_value_X147=(!no_block_level));    _condtional_value_X147;    })) {
        info->block_level++;
    }
    if(({    (_condtional_value_X148=(*info->p==123));    _condtional_value_X148;    })) {
        p_saved=((void*)0);
        sline_saved=0;
        sname_saved=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while(({        (_condtional_value_X149=((_Bool)1));        _condtional_value_X149;        })) {
            if(({            (_condtional_value_X150=(p_saved));            _condtional_value_X150;            })) {
                if(({                (_condtional_value_X151=(*info->p==0));                _condtional_value_X151;                })) {
                    info->p=p_saved;
                    info->sline=sline_saved;
                    __dec_obj32=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    p_saved=((void*)0);
                    sline_saved=0;
                    __dec_obj33=sname_saved,
                    sname_saved=((void*)0);
                    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    __dec_obj34=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(({            (_condtional_value_X162=(*info->p==125));            _condtional_value_X162;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(({            (_condtional_value_X163=(*info->p==59));            _condtional_value_X163;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p=info->p;
            sline=info->sline;
            sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(({            (_condtional_value_X164=(*info->p==123));            _condtional_value_X164;            })) {
                info->sline_top=sline;
            }
            if(({            (_condtional_value_X165=(strncmp(info->p,"include ",strlen("include "))==0));            _condtional_value_X165;            })) {
                ((char*)(__right_value57=parse_word(info)));
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                module_name=(char*)come_increment_ref_count(parse_word(info));
                params=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 172, "struct list$1char$ph*"))));
                if(({                (_condtional_value_X166=(*info->p==60));                _condtional_value_X166;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(({                    (_condtional_value_X167=((_Bool)1));                    _condtional_value_X167;                    })) {
                        word=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params,(char*)come_increment_ref_count(word));
                        if(({                        (_condtional_value_X168=(*info->p==44));                        _condtional_value_X168;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(({                        (_condtional_value_X169=(*info->p==0));                        _condtional_value_X169;                        })) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(({                        (_condtional_value_X170=(*info->p==62));                        _condtional_value_X170;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                if(({                (_condtional_value_X171=(*info->p==59));                _condtional_value_X171;                })) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved=info->p;
                sline_saved=info->sline;
                __dec_obj35=sname_saved,
                sname_saved=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj36=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name));
                __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->sline=0;
                if(({                (_condtional_value_X186=(((struct sClassModule*)(__right_value66=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value65=__builtin_string(module_name))))))==((void*)0)));                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                _condtional_value_X186;                })) {
                    err_msg(info,"module not found");
                    __result_obj__33 = (void*)come_increment_ref_count(((void*)0));
                    (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__33;
                }
                module=((struct sClassModule*)(__right_value69=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value68=__builtin_string(module_name))))));
                (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X188=(list$1char$ph_length(module->mParams)!=list$1char$ph_length(params)));                _condtional_value_X188;                })) {
                    err_msg(info,"invalid parametor number");
                    __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
                    (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__34;
                }
                __dec_obj38=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 226, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                i=0;
                for(                ({                (_condtional_value_X205=(o2_saved=(struct list$1char$ph*)come_increment_ref_count((module->mParams)),it=list$1char$ph_begin((o2_saved))));                _condtional_value_X205;                });                ({                (_condtional_value_X206=(!list$1char$ph_end((o2_saved))));                _condtional_value_X206;                });                ({                (_condtional_value_X209=(it=list$1char$ph_next((o2_saved))));                _condtional_value_X209;                })                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value89=list$1char$ph_operator_load_element(params,i))))));
                    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    i++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                info->p=module->mText;
                info->sline=module->mSLine;
                __dec_obj42=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module->mSName));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            node=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj43=info->sname,
            info->sname=(char*)come_increment_ref_count(node->sname(node->_protocol_obj));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=node->sline(node->_protocol_obj);
            if(({            (_condtional_value_X273=(node==((void*)0)));            _condtional_value_X273;            })) {
                err_msg(info,"Invalid expression");
                __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__63;
            }
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node));
            parse_sharp_v5(info);
            if(({            (_condtional_value_X276=(node->terminated(node->_protocol_obj)));            _condtional_value_X276;            })) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon=(_Bool)1;
            if(({            (_condtional_value_X277=(node->terminated(node->_protocol_obj)));            _condtional_value_X277;            })) {
                omit_semicolon=(_Bool)0;
            }
            while(({            (_condtional_value_X278=(*info->p==59));            _condtional_value_X278;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(({            (_condtional_value_X279=(*info->p==125));            _condtional_value_X279;            })) {
                result->mOmitSemicolon=omit_semicolon;
                if(({                (_condtional_value_X280=(omit_semicolon&&in_function));                _condtional_value_X280;                })) {
                    list$1sNode$ph_delete(result->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p;
                    info->sline=sline;
                    __dec_obj47=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
                    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    head=info->p;
                    value=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail=info->p;
                    __dec_obj48=value,
                    value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
                    (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    char buf[tail-head+1];
                    memset(&buf, 0, sizeof(char)                    *(tail-head+1)                    );
                    memcpy(buf,head,tail-head);
                    buf[tail-head]=0;
                    expected_next_character(125,info);
                    node_31=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(__builtin_string(buf)),info));
                    list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_31));
                    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                }
            }
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        if(({        (_condtional_value_X303=(p_saved));        _condtional_value_X303;        })) {
            if(({            (_condtional_value_X304=(info->p==0));            _condtional_value_X304;            })) {
                info->p=p_saved;
                info->sline=sline_saved;
                __dec_obj49=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                p_saved=((void*)0);
                sline_saved=0;
            }
        }
        (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(({        (_condtional_value_X305=(*info->p==59));        _condtional_value_X305;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 329, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value104=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 329, "struct sSemicolonNode*")),info))));
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
            __dec_obj51=node_32,
            node_32=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value104, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_32));
        }
        else {
            __dec_obj52=node_32,
            node_32=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            parse_sharp_v5(info);
            if(({            (_condtional_value_X310=(node_32==((void*)0)));            _condtional_value_X310;            })) {
                err_msg(info,"Invalid expression");
                __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
                ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__70;
            }
            parse_sharp_v5(info);
            if(({            (_condtional_value_X311=(node_32->terminated(node_32->_protocol_obj)));            _condtional_value_X311;            })) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_33=(_Bool)1;
            if(({            (_condtional_value_X312=(node_32->terminated(node_32->_protocol_obj)));            _condtional_value_X312;            })) {
                omit_semicolon_33=(_Bool)0;
            }
            while(({            (_condtional_value_X313=(*info->p==59));            _condtional_value_X313;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_33=(_Bool)0;
            }
            parse_sharp_v5(info);
            result->mOmitSemicolon=omit_semicolon_33;
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_32));
        }
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X314=(return_self_at_last));    _condtional_value_X314;    })) {
        p_34=info->p;
        head_35=info->head;
        source=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source;
        info->head=source;
        node_36=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(({        (_condtional_value_X315=(node_36==((void*)0)));        _condtional_value_X315;        })) {
            err_msg(info,"Invalid expression");
            __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
            (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__71;
        }
        list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_36));
        info->p=p_34;
        info->head=head_35;
        (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->block_level=block_level;
    __result_obj__72 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
int i_8;
_Bool _condtional_value_X157;
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
_Bool _condtional_value_X160;
_Bool _condtional_value_X161;
    for(    ({    (_condtional_value_X152=(i=0));    _condtional_value_X152;    });    ({    (_condtional_value_X153=(i<self->size));    _condtional_value_X153;    });    ({    (_condtional_value_X154=(i++));    _condtional_value_X154;    })    ){
        if(({        (_condtional_value_X155=(self->item_existance[i]));        _condtional_value_X155;        })) {
            if(({            (_condtional_value_X156=(1));            _condtional_value_X156;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X157=(i_8=0));    _condtional_value_X157;    });    ({    (_condtional_value_X158=(i_8<self->size));    _condtional_value_X158;    });    ({    (_condtional_value_X159=(i_8++));    _condtional_value_X159;    })    ){
        if(({        (_condtional_value_X160=(self->item_existance[i_8]));        _condtional_value_X160;        })) {
            if(({            (_condtional_value_X161=(1));            _condtional_value_X161;            })) {
                (self->keys[i_8] = come_decrement_ref_count(self->keys[i_8], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X172;
_Bool _condtional_value_X173;
_Bool _condtional_value_X174;
struct sClassModule* __result_obj__25;
_Bool _condtional_value_X179;
_Bool _condtional_value_X180;
struct sClassModule* __result_obj__26;
struct sClassModule* __result_obj__27;
struct sClassModule* __result_obj__28;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClassModule*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X172=((_Bool)1));    _condtional_value_X172;    })) {
        if(({        (_condtional_value_X173=(self->item_existance[it]));        _condtional_value_X173;        })) {
            if(({            (_condtional_value_X174=(string_equals(self->keys[it],key)));            _condtional_value_X174;            })) {
                __result_obj__25 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it++;
            if(({            (_condtional_value_X179=(it>=self->size));            _condtional_value_X179;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X180=(it==hash));            _condtional_value_X180;            })) {
                __result_obj__26 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void sClassModule_finalize(struct sClassModule* self){
_Bool _condtional_value_X175;
_Bool _condtional_value_X176;
_Bool _condtional_value_X177;
_Bool _condtional_value_X178;
    if(({    (_condtional_value_X175=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X175;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X176=(self!=((void*)0)&&self->mText!=((void*)0)));    _condtional_value_X176;    })) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X177=(self!=((void*)0)&&self->mParams!=((void*)0)));    _condtional_value_X177;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X178=(self!=((void*)0)&&self->mSName!=((void*)0)));    _condtional_value_X178;    })) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X181;
_Bool _condtional_value_X182;
_Bool _condtional_value_X183;
struct sClassModule* __result_obj__29;
_Bool _condtional_value_X184;
_Bool _condtional_value_X185;
struct sClassModule* __result_obj__30;
struct sClassModule* __result_obj__31;
struct sClassModule* __result_obj__32;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClassModule*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X181=((_Bool)1));    _condtional_value_X181;    })) {
        if(({        (_condtional_value_X182=(self->item_existance[it]));        _condtional_value_X182;        })) {
            if(({            (_condtional_value_X183=(string_equals(self->keys[it],key)));            _condtional_value_X183;            })) {
                __result_obj__29 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__29;
            }
            it++;
            if(({            (_condtional_value_X184=(it>=self->size));            _condtional_value_X184;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X185=(it==hash));            _condtional_value_X185;            })) {
                __result_obj__30 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static int list$1char$ph_length(struct list$1char$ph* self){
_Bool _condtional_value_X187;
    if(({    (_condtional_value_X187=(self==((void*)0)));    _condtional_value_X187;    })) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
int i;
_Bool _condtional_value_X189;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1char$ph* __dec_obj37;
struct map$2char$phchar$ph* __result_obj__36;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value71=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value72=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value73=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X189=(i=0));    _condtional_value_X189;    });    ({    (_condtional_value_X190=(i<128));    _condtional_value_X190;    });    ({    (_condtional_value_X191=(i++));    _condtional_value_X191;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj37=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1char$p* it;
_Bool _condtional_value_X192;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X192=(it!=((void*)0)));    _condtional_value_X192;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X193;
_Bool _condtional_value_X194;
_Bool _condtional_value_X195;
_Bool _condtional_value_X196;
_Bool _condtional_value_X197;
int i_9;
_Bool _condtional_value_X198;
_Bool _condtional_value_X199;
_Bool _condtional_value_X200;
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
    for(    ({    (_condtional_value_X193=(i=0));    _condtional_value_X193;    });    ({    (_condtional_value_X194=(i<self->size));    _condtional_value_X194;    });    ({    (_condtional_value_X195=(i++));    _condtional_value_X195;    })    ){
        if(({        (_condtional_value_X196=(self->item_existance[i]));        _condtional_value_X196;        })) {
            if(({            (_condtional_value_X197=(1));            _condtional_value_X197;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X198=(i_9=0));    _condtional_value_X198;    });    ({    (_condtional_value_X199=(i_9<self->size));    _condtional_value_X199;    });    ({    (_condtional_value_X200=(i_9++));    _condtional_value_X200;    })    ){
        if(({        (_condtional_value_X201=(self->item_existance[i_9]));        _condtional_value_X201;        })) {
            if(({            (_condtional_value_X202=(1));            _condtional_value_X202;            })) {
                (self->keys[i_9] = come_decrement_ref_count(self->keys[i_9], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X203;
char* result;
char* __result_obj__37;
_Bool _condtional_value_X204;
char* __result_obj__38;
char* result_10;
char* __result_obj__39;
result = (void*)0;
result_10 = (void*)0;
    if(({    (_condtional_value_X203=(self==((void*)0)));    _condtional_value_X203;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__37 = result;
        return __result_obj__37;
    }
    self->it=self->head;
    if(({    (_condtional_value_X204=(self->it));    _condtional_value_X204;    })) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_10,0,sizeof(char*));
    __result_obj__39 = result_10;
    return __result_obj__39;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X207;
char* result;
char* __result_obj__40;
_Bool _condtional_value_X208;
char* __result_obj__41;
char* result_11;
char* __result_obj__42;
result = (void*)0;
result_11 = (void*)0;
    if(({    (_condtional_value_X207=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X207;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__40 = result;
        return __result_obj__40;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X208=(self->it));    _condtional_value_X208;    })) {
        __result_obj__41 = self->it->item;
        return __result_obj__41;
    }
    memset(&result_11,0,sizeof(char*));
    __result_obj__42 = result_11;
    return __result_obj__42;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
_Bool _condtional_value_X210;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X227;
_Bool _condtional_value_X228;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
_Bool _condtional_value_X258;
_Bool _condtional_value_X259;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X260;
_Bool _condtional_value_X261;
_Bool _condtional_value_X262;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
struct map$2char$phchar$ph* __result_obj__58;
    if(({    (_condtional_value_X210=(self->len*10>=self->size));    _condtional_value_X210;    })) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X227=((_Bool)1));    _condtional_value_X227;    })) {
        if(({        (_condtional_value_X228=(self->item_existance[it]));        _condtional_value_X228;        })) {
            if(({            (_condtional_value_X229=(string_equals(self->keys[it],key)));            _condtional_value_X229;            })) {
                if(({                (_condtional_value_X230=(1));                _condtional_value_X230;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X255=(1));                _condtional_value_X255;                })) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X256=(it>=self->size));            _condtional_value_X256;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X257=(it==hash));            _condtional_value_X257;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X258=(1));            _condtional_value_X258;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X259=(1));            _condtional_value_X259;            })) {
                self->items[it]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X260=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X260;    });    ({    (_condtional_value_X261=(!list$1char$ph_end(self->key_list)));    _condtional_value_X261;    });    ({    (_condtional_value_X262=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X262;    })    ){
        if(({        (_condtional_value_X263=(string_equals(it2,key)));        _condtional_value_X263;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X264=(!same_key_exist));    _condtional_value_X264;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__58 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size;
void* __right_value78 = (void*)0;
char** keys;
void* __right_value79 = (void*)0;
char** items;
void* __right_value80 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
_Bool _condtional_value_X217;
char* default_value;
void* __right_value81 = (void*)0;
char* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X223;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
_Bool _condtional_value_X226;
char* default_value_14;
void* __right_value82 = (void*)0;
default_value = (void*)0;
default_value_14 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value78=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(char**)come_increment_ref_count(((char**)(__right_value79=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "char**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value80=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X213=(it=map$2char$phchar$ph_begin(self)));    _condtional_value_X213;    });    ({    (_condtional_value_X214=(!map$2char$phchar$ph_end(self)));    _condtional_value_X214;    });    ({    (_condtional_value_X217=(it=map$2char$phchar$ph_next(self)));    _condtional_value_X217;    })    ){
        memset(&default_value,0,sizeof(char*));
        it2=((char*)(__right_value81=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X223=((_Bool)1));        _condtional_value_X223;        })) {
            if(({            (_condtional_value_X224=(item_existance[n]));            _condtional_value_X224;            })) {
                n++;
                if(({                (_condtional_value_X225=(n>=size));                _condtional_value_X225;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X226=(n==hash));                _condtional_value_X226;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((char*)(__right_value82=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_14))));
                (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len++;
                (default_value_14 = come_decrement_ref_count(default_value_14, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_14 = come_decrement_ref_count(default_value_14, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X211;
char* result;
char* __result_obj__43;
_Bool _condtional_value_X212;
char* __result_obj__44;
char* result_12;
char* __result_obj__45;
result = (void*)0;
result_12 = (void*)0;
    if(({    (_condtional_value_X211=(self==((void*)0)));    _condtional_value_X211;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__43 = result;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X212=(self->key_list->it));    _condtional_value_X212;    })) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__45 = result_12;
    return __result_obj__45;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X215;
char* result;
char* __result_obj__46;
_Bool _condtional_value_X216;
char* __result_obj__47;
char* result_13;
char* __result_obj__48;
result = (void*)0;
result_13 = (void*)0;
    if(({    (_condtional_value_X215=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X215;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__46 = result;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X216=(self->key_list->it));    _condtional_value_X216;    })) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_13,0,sizeof(char*));
    __result_obj__48 = result_13;
    return __result_obj__48;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X218;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
char* __result_obj__49;
_Bool _condtional_value_X221;
_Bool _condtional_value_X222;
char* __result_obj__50;
char* __result_obj__51;
char* __result_obj__52;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X218=((_Bool)1));    _condtional_value_X218;    })) {
        if(({        (_condtional_value_X219=(self->item_existance[it]));        _condtional_value_X219;        })) {
            if(({            (_condtional_value_X220=(string_equals(self->keys[it],key)));            _condtional_value_X220;            })) {
                __result_obj__49 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__49;
            }
            it++;
            if(({            (_condtional_value_X221=(it>=self->size));            _condtional_value_X221;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X222=(it==hash));            _condtional_value_X222;            })) {
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
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X231;
_Bool _condtional_value_X232;
struct list$1char$ph* __result_obj__56;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X231=(it!=((void*)0)));    _condtional_value_X231;    })) {
        if(({        (_condtional_value_X232=(string_equals(it->item,item)));        _condtional_value_X232;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__56 = self;
    return __result_obj__56;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X233;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
int tmp;
_Bool _condtional_value_X236;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
struct list$1char$ph* __result_obj__53;
_Bool _condtional_value_X239;
_Bool _condtional_value_X241;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X242;
_Bool _condtional_value_X243;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X244;
_Bool _condtional_value_X245;
struct list_item$1char$ph* it_15;
int i_16;
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
_Bool _condtional_value_X248;
struct list_item$1char$ph* prev_it_17;
struct list_item$1char$ph* it_18;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_19;
_Bool _condtional_value_X249;
_Bool _condtional_value_X250;
_Bool _condtional_value_X251;
_Bool _condtional_value_X252;
struct list_item$1char$ph* prev_it_20;
_Bool _condtional_value_X253;
_Bool _condtional_value_X254;
struct list$1char$ph* __result_obj__55;
    if(({    (_condtional_value_X233=(head<0));    _condtional_value_X233;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X234=(tail<0));    _condtional_value_X234;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X235=(head>tail));    _condtional_value_X235;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X236=(head<0));    _condtional_value_X236;    })) {
        head=0;
    }
    if(({    (_condtional_value_X237=(tail>self->len));    _condtional_value_X237;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X238=(head==tail));    _condtional_value_X238;    })) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    if(({    (_condtional_value_X239=(head==0&&tail==self->len));    _condtional_value_X239;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X241=(head==0));    _condtional_value_X241;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X242=(it!=((void*)0)));        _condtional_value_X242;        })) {
            if(({            (_condtional_value_X243=(i<tail));            _condtional_value_X243;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X244=(i==tail));            _condtional_value_X244;            })) {
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
    else if(({    (_condtional_value_X245=(tail==self->len));    _condtional_value_X245;    })) {
        it_15=self->head;
        i_16=0;
        while(({        (_condtional_value_X246=(it_15!=((void*)0)));        _condtional_value_X246;        })) {
            if(({            (_condtional_value_X247=(i_16==head));            _condtional_value_X247;            })) {
                self->tail=it_15->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X248=(i_16>=head));            _condtional_value_X248;            })) {
                prev_it_17=it_15;
                it_15=it_15->next;
                i_16++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_15=it_15->next;
                i_16++;
            }
        }
    }
    else {
        it_18=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_19=0;
        while(({        (_condtional_value_X249=(it_18!=((void*)0)));        _condtional_value_X249;        })) {
            if(({            (_condtional_value_X250=(i_19==head));            _condtional_value_X250;            })) {
                head_prev_it=it_18->prev;
            }
            if(({            (_condtional_value_X251=(i_19==tail));            _condtional_value_X251;            })) {
                tail_it=it_18;
            }
            if(({            (_condtional_value_X252=(i_19>=head&&i_19<tail));            _condtional_value_X252;            })) {
                prev_it_20=it_18;
                it_18=it_18->next;
                i_19++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_18=it_18->next;
                i_19++;
            }
        }
        if(({        (_condtional_value_X253=(head_prev_it!=((void*)0)));        _condtional_value_X253;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X254=(tail_it!=((void*)0)));        _condtional_value_X254;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X240;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__54;
    it=self->head;
    while(({    (_condtional_value_X240=(it!=((void*)0)));    _condtional_value_X240;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X265;
void* __right_value83 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj39;
_Bool _condtional_value_X266;
void* __right_value84 = (void*)0;
struct list_item$1char$ph* litem_21;
char* __dec_obj40;
void* __right_value85 = (void*)0;
struct list_item$1char$ph* litem_22;
char* __dec_obj41;
struct list$1char$ph* __result_obj__57;
    if(({    (_condtional_value_X265=(self->len==0));    _condtional_value_X265;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value83=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj39=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X266=(self->len==1));    _condtional_value_X266;    })) {
        litem_21=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value84=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj40=litem_21->item,
        litem_21->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value85=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj41=litem_22->item,
        litem_22->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__57 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X267;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X268;
_Bool _condtional_value_X269;
char* __result_obj__59;
char* default_value;
char* __result_obj__60;
default_value = (void*)0;
    if(({    (_condtional_value_X267=(position<0));    _condtional_value_X267;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X268=(it!=((void*)0)));    _condtional_value_X268;    })) {
        if(({        (_condtional_value_X269=(position==i));        _condtional_value_X269;        })) {
            __result_obj__59 = (char*)come_increment_ref_count(it->item);
            (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__59;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__60 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X270;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
char* __result_obj__61;
char* default_value;
char* __result_obj__62;
default_value = (void*)0;
    if(({    (_condtional_value_X270=(position<0));    _condtional_value_X270;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X271=(it!=((void*)0)));    _condtional_value_X271;    })) {
        if(({        (_condtional_value_X272=(position==i));        _condtional_value_X272;        })) {
            __result_obj__61 = (char*)come_increment_ref_count(it->item);
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__61;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__62 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__62;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X274;
void* __right_value94 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj44;
_Bool _condtional_value_X275;
void* __right_value95 = (void*)0;
struct list_item$1sNode$ph* litem_23;
struct sNode* __dec_obj45;
void* __right_value96 = (void*)0;
struct list_item$1sNode$ph* litem_24;
struct sNode* __dec_obj46;
struct list$1sNode$ph* __result_obj__64;
    if(({    (_condtional_value_X274=(self->len==0));    _condtional_value_X274;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value94=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X275=(self->len==1));    _condtional_value_X275;    })) {
        litem_23=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value95=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1sNode$ph*"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        __dec_obj45=litem_23->item,
        litem_23->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value96=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1sNode$ph*"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        __dec_obj46=litem_24->item,
        litem_24->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result_obj__64 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
_Bool _condtional_value_X281;
_Bool _condtional_value_X282;
_Bool _condtional_value_X283;
int tmp;
_Bool _condtional_value_X284;
_Bool _condtional_value_X285;
_Bool _condtional_value_X286;
struct list$1sNode$ph* __result_obj__65;
_Bool _condtional_value_X287;
_Bool _condtional_value_X289;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
struct list_item$1sNode$ph* prev_it;
_Bool _condtional_value_X292;
_Bool _condtional_value_X293;
struct list_item$1sNode$ph* it_25;
int i_26;
_Bool _condtional_value_X294;
_Bool _condtional_value_X295;
_Bool _condtional_value_X296;
struct list_item$1sNode$ph* prev_it_27;
struct list_item$1sNode$ph* it_28;
struct list_item$1sNode$ph* head_prev_it;
struct list_item$1sNode$ph* tail_it;
int i_29;
_Bool _condtional_value_X297;
_Bool _condtional_value_X298;
_Bool _condtional_value_X299;
_Bool _condtional_value_X300;
struct list_item$1sNode$ph* prev_it_30;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
struct list$1sNode$ph* __result_obj__67;
    if(({    (_condtional_value_X281=(head<0));    _condtional_value_X281;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X282=(tail<0));    _condtional_value_X282;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X283=(head>tail));    _condtional_value_X283;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X284=(head<0));    _condtional_value_X284;    })) {
        head=0;
    }
    if(({    (_condtional_value_X285=(tail>self->len));    _condtional_value_X285;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X286=(head==tail));    _condtional_value_X286;    })) {
        __result_obj__65 = self;
        return __result_obj__65;
    }
    if(({    (_condtional_value_X287=(head==0&&tail==self->len));    _condtional_value_X287;    })) {
        list$1sNode$ph_reset(self);
    }
    else if(({    (_condtional_value_X289=(head==0));    _condtional_value_X289;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X290=(it!=((void*)0)));        _condtional_value_X290;        })) {
            if(({            (_condtional_value_X291=(i<tail));            _condtional_value_X291;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X292=(i==tail));            _condtional_value_X292;            })) {
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
    else if(({    (_condtional_value_X293=(tail==self->len));    _condtional_value_X293;    })) {
        it_25=self->head;
        i_26=0;
        while(({        (_condtional_value_X294=(it_25!=((void*)0)));        _condtional_value_X294;        })) {
            if(({            (_condtional_value_X295=(i_26==head));            _condtional_value_X295;            })) {
                self->tail=it_25->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X296=(i_26>=head));            _condtional_value_X296;            })) {
                prev_it_27=it_25;
                it_25=it_25->next;
                i_26++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_25=it_25->next;
                i_26++;
            }
        }
    }
    else {
        it_28=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_29=0;
        while(({        (_condtional_value_X297=(it_28!=((void*)0)));        _condtional_value_X297;        })) {
            if(({            (_condtional_value_X298=(i_29==head));            _condtional_value_X298;            })) {
                head_prev_it=it_28->prev;
            }
            if(({            (_condtional_value_X299=(i_29==tail));            _condtional_value_X299;            })) {
                tail_it=it_28;
            }
            if(({            (_condtional_value_X300=(i_29>=head&&i_29<tail));            _condtional_value_X300;            })) {
                prev_it_30=it_28;
                it_28=it_28->next;
                i_29++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_28=it_28->next;
                i_29++;
            }
        }
        if(({        (_condtional_value_X301=(head_prev_it!=((void*)0)));        _condtional_value_X301;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X302=(tail_it!=((void*)0)));        _condtional_value_X302;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__67 = self;
    return __result_obj__67;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X288;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__66;
    it=self->head;
    while(({    (_condtional_value_X288=(it!=((void*)0)));    _condtional_value_X288;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
_Bool _condtional_value_X306;
struct sSemicolonNode* __result_obj__68;
void* __right_value105 = (void*)0;
struct sSemicolonNode* result;
_Bool _condtional_value_X307;
_Bool _condtional_value_X308;
void* __right_value106 = (void*)0;
char* __dec_obj50;
_Bool _condtional_value_X309;
struct sSemicolonNode* __result_obj__69;
    if(({    (_condtional_value_X306=(self==(void*)0));    _condtional_value_X306;    })) {
        __result_obj__68 = (void*)0;
        return __result_obj__68;
    }
    result=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(({    (_condtional_value_X307=(self!=((void*)0)));    _condtional_value_X307;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X308=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X308;    })) {
        __dec_obj50=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X309=(self!=((void*)0)));    _condtional_value_X309;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__69 = result;
    come_call_finalizer(sSemicolonNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool _condtional_value_X316;
_Bool inhibits_output_code;
struct sVarTable* old_table;
_Bool _condtional_value_X317;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sVarTable* __dec_obj53;
struct sVarTable* current_loop_vtable;
_Bool _condtional_value_X318;
_Bool _condtional_value_X319;
int i;
struct list$1char$ph* o2_saved;
char* name;
_Bool _condtional_value_X320;
_Bool _condtional_value_X321;
_Bool _condtional_value_X322;
void* __right_value113 = (void*)0;
struct sType* type;
void* __right_value114 = (void*)0;
int block_level;
_Bool _condtional_value_X329;
_Bool _condtional_value_X331;
int i_37;
struct list$1sNode$ph* o2_saved_38;
struct sNode* node;
_Bool _condtional_value_X334;
_Bool _condtional_value_X335;
_Bool _condtional_value_X338;
struct list$1sRightValueObject$ph* right_value_objects;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
int stack_num_before;
int sline;
void* __right_value117 = (void*)0;
char* sname;
void* __right_value118 = (void*)0;
char* __dec_obj57;
_Bool interrupts;
_Bool _condtional_value_X348;
_Bool Value;
_Bool _condtional_value_X349;
_Bool _condtional_value_X350;
void* __right_value119 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X351;
void* __right_value125 = (void*)0;
struct CVALUE* come_value2;
void* __right_value126 = (void*)0;
char* __dec_obj62;
void* __right_value127 = (void*)0;
struct CVALUE* come_value2_41;
struct sVar* var_;
_Bool _condtional_value_X359;
void* __right_value128 = (void*)0;
struct CVALUE* come_value3;
_Bool _condtional_value_X360;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct sType* __dec_obj63;
_Bool _condtional_value_X361;
void* __right_value131 = (void*)0;
char* c_value;
void* __right_value132 = (void*)0;
char* __dec_obj64;
void* __right_value133 = (void*)0;
char* __dec_obj65;
void* __right_value134 = (void*)0;
char* __dec_obj66;
_Bool Value_42;
_Bool _condtional_value_X362;
void* __right_value135 = (void*)0;
char* __dec_obj67;
_Bool _condtional_value_X363;
_Bool _condtional_value_X364;
struct list$1sRightValueObject$ph* __dec_obj68;
_Bool _condtional_value_X366;
_Bool _condtional_value_X367;
struct list$1sVar$ph* o2_saved_43;
struct sVar* it;
_Bool _condtional_value_X370;
_Bool _condtional_value_X371;
_Bool _condtional_value_X374;
void* __right_value136 = (void*)0;
struct list$1sVar$ph* __dec_obj69;
_Bool _condtional_value_X376;
memset(&i, 0, sizeof(int));
memset(&i_37, 0, sizeof(int));
    if(({    (_condtional_value_X316=(info->output_header_file));    _condtional_value_X316;    })) {
        return 0;
    }
    inhibits_output_code=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table=info->lv_table;
    if(({    (_condtional_value_X317=(!no_var_table));    _condtional_value_X317;    })) {
        __dec_obj53=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 403, "struct sVarTable*")),(_Bool)0,old_table));
        come_call_finalizer(sVarTable_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable=info->current_loop_vtable;
    if(({    (_condtional_value_X318=(loop_block));    _condtional_value_X318;    })) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(({    (_condtional_value_X319=(param_types&&param_names));    _condtional_value_X319;    })) {
        for(        ({        (_condtional_value_X320=(o2_saved=(param_names),name=list$1char$ph_begin((o2_saved))));        _condtional_value_X320;        });        ({        (_condtional_value_X321=(!list$1char$ph_end((o2_saved))));        _condtional_value_X321;        });        ({        (_condtional_value_X322=(name=list$1char$ph_next((o2_saved))));        _condtional_value_X322;        })        ){
            type=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i));
            type->mAllocaValue=(_Bool)0;
            add_variable_to_table(name,(struct sType*)come_increment_ref_count(sType_clone(type)),info,(_Bool)1,(_Bool)0);
            i++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    block_level=info->block_level;
    if(({    (_condtional_value_X329=(!no_var_table));    _condtional_value_X329;    })) {
        info->block_level++;
    }
    if(({    (_condtional_value_X331=(list$1sNode$ph_length(block->mNodes)==0));    _condtional_value_X331;    })) {
    }
    else {
        for(        ({        (_condtional_value_X334=(o2_saved_38=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node=list$1sNode$ph_begin((o2_saved_38))));        _condtional_value_X334;        });        ({        (_condtional_value_X335=(!list$1sNode$ph_end((o2_saved_38))));        _condtional_value_X335;        });        ({        (_condtional_value_X338=(node=list$1sNode$ph_next((o2_saved_38))));        _condtional_value_X338;        })        ){
            right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj54=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 433, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj55=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj56=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            stack_num_before=list$1CVALUE$ph_length(info->stack);
            sline=info->sline;
            sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node->sline(node->_protocol_obj);
            __dec_obj57=info->sname,
            info->sname=(char*)come_increment_ref_count(node->sname(node->_protocol_obj));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            interrupts=(_Bool)0;
            if(({            (_condtional_value_X348=(i_37==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon));            _condtional_value_X348;            })) {
                Value=node_compile(node,info);
                if(({                (_condtional_value_X349=(!Value));                _condtional_value_X349;                })) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(({                (_condtional_value_X350=(list$1CVALUE$ph_length(info->stack)==stack_num_before+1));                _condtional_value_X350;                })) {
                    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(({                    (_condtional_value_X351=(string_operator_equals(come_value->type->mClass->mName,"void")&&come_value->type->mPointerNum==0));                    _condtional_value_X351;                    })) {
                        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
                        __dec_obj62=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2->c_value));
                        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else {
                        come_value2_41=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value));
                        var_=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(({                        (_condtional_value_X359=(var_));                        _condtional_value_X359;                        })) {
                            come_value3=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 477, "struct CVALUE*"));
                            if(({                            (_condtional_value_X360=(var_->mType->mClass=="void"&&var_->mType->mPointerNum==1));                            _condtional_value_X360;                            })) {
                                check_assign_type("invalid if result value",var_->mType,((struct sType*)(__right_value129=sType_clone(come_value->type))),come_value3,(_Bool)0,(_Bool)1,(_Bool)1,info);
                                come_call_finalizer(sType_finalize, __right_value129, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                            __dec_obj63=var_->mType,
                            var_->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
                            come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            if(({                            (_condtional_value_X361=(come_value->type->mHeap));                            _condtional_value_X361;                            })) {
                                c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
                                __dec_obj64=come_value2_41->c_value,
                                come_value2_41->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var_->mCValueName,c_value));
                                __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            }
                            else {
                                __dec_obj65=come_value2_41->c_value,
                                come_value2_41->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var_->mCValueName,come_value->c_value));
                                __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            }
                            come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_41));
                        __dec_obj66=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_41->c_value));
                        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            else {
                Value_42=node_compile(node,info);
                if(({                (_condtional_value_X362=(!Value_42));                _condtional_value_X362;                })) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline;
            __dec_obj67=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(({            (_condtional_value_X363=(comma));            _condtional_value_X363;            })) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before);
            free_right_value_objects(info,(_Bool)0);
            if(({            (_condtional_value_X364=(info->right_value_objects));            _condtional_value_X364;            })) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj68=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            i_37++;
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X366=(!no_var_table&&!info->inhibits_output_code));    _condtional_value_X366;    })) {
        free_objects(info->lv_table,((void*)0),info);
        if(({        (_condtional_value_X367=(info->match_it_var&&block_level==0));        _condtional_value_X367;        })) {
            for(            ({            (_condtional_value_X370=(o2_saved_43=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it=list$1sVar$ph_begin((o2_saved_43))));            _condtional_value_X370;            });            ({            (_condtional_value_X371=(!list$1sVar$ph_end((o2_saved_43))));            _condtional_value_X371;            });            ({            (_condtional_value_X374=(it=list$1sVar$ph_next((o2_saved_43))));            _condtional_value_X374;            })            ){
                free_object((struct sType*)come_increment_ref_count(sType_clone(it->mType)),it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj69=info->match_it_var,
            info->match_it_var=((void*)0);
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
    }
    info->lv_table=old_table;
    info->block_level=block_level;
    if(({    (_condtional_value_X376=(string_operator_equals(info->come_fun->mName,"main")));    _condtional_value_X376;    })) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable;
    info->inhibits_output_code=inhibits_output_code;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X323;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X324;
_Bool _condtional_value_X325;
struct sType* __result_obj__73;
struct sType* default_value;
struct sType* __result_obj__74;
default_value = (void*)0;
    if(({    (_condtional_value_X323=(position<0));    _condtional_value_X323;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X324=(it!=((void*)0)));    _condtional_value_X324;    })) {
        if(({        (_condtional_value_X325=(position==i));        _condtional_value_X325;        })) {
            __result_obj__73 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__73;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__74 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X326;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X327;
_Bool _condtional_value_X328;
struct sType* __result_obj__75;
struct sType* default_value;
struct sType* __result_obj__76;
default_value = (void*)0;
    if(({    (_condtional_value_X326=(position<0));    _condtional_value_X326;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X327=(it!=((void*)0)));    _condtional_value_X327;    })) {
        if(({        (_condtional_value_X328=(position==i));        _condtional_value_X328;        })) {
            __result_obj__75 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__75;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__76 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _condtional_value_X330;
    if(({    (_condtional_value_X330=(self==((void*)0)));    _condtional_value_X330;    })) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X332;
struct sNode* result;
struct sNode* __result_obj__77;
_Bool _condtional_value_X333;
struct sNode* __result_obj__78;
struct sNode* result_39;
struct sNode* __result_obj__79;
result = (void*)0;
result_39 = (void*)0;
    if(({    (_condtional_value_X332=(self==((void*)0)));    _condtional_value_X332;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__77 = result;
        return __result_obj__77;
    }
    self->it=self->head;
    if(({    (_condtional_value_X333=(self->it));    _condtional_value_X333;    })) {
        __result_obj__78 = self->it->item;
        return __result_obj__78;
    }
    memset(&result_39,0,sizeof(struct sNode*));
    __result_obj__79 = result_39;
    return __result_obj__79;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X336;
struct sNode* result;
struct sNode* __result_obj__80;
_Bool _condtional_value_X337;
struct sNode* __result_obj__81;
struct sNode* result_40;
struct sNode* __result_obj__82;
result = (void*)0;
result_40 = (void*)0;
    if(({    (_condtional_value_X336=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X336;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__80 = result;
        return __result_obj__80;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X337=(self->it));    _condtional_value_X337;    })) {
        __result_obj__81 = self->it->item;
        return __result_obj__81;
    }
    memset(&result_40,0,sizeof(struct sNode*));
    __result_obj__82 = result_40;
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
struct list_item$1sRightValueObject$ph* it;
_Bool _condtional_value_X339;
struct list_item$1sRightValueObject$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X339=(it!=((void*)0)));    _condtional_value_X339;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
_Bool _condtional_value_X340;
    if(({    (_condtional_value_X340=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X340;    })) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
_Bool _condtional_value_X341;
_Bool _condtional_value_X342;
_Bool _condtional_value_X343;
_Bool _condtional_value_X344;
_Bool _condtional_value_X345;
    if(({    (_condtional_value_X341=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X341;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X342=(self!=((void*)0)&&self->mVarName!=((void*)0)));    _condtional_value_X342;    })) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X343=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X343;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X344=(self!=((void*)0)&&self->mObjType!=((void*)0)));    _condtional_value_X344;    })) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X345=(self!=((void*)0)&&self->mObjValue!=((void*)0)));    _condtional_value_X345;    })) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
_Bool _condtional_value_X346;
struct list_item$1sRightValueObject$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X346=(it!=((void*)0)));    _condtional_value_X346;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X347;
    if(({    (_condtional_value_X347=(self==((void*)0)));    _condtional_value_X347;    })) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
_Bool _condtional_value_X352;
struct CVALUE* __result_obj__84;
void* __right_value120 = (void*)0;
struct CVALUE* result;
_Bool _condtional_value_X353;
void* __right_value121 = (void*)0;
char* __dec_obj58;
_Bool _condtional_value_X354;
void* __right_value122 = (void*)0;
struct sType* __dec_obj59;
_Bool _condtional_value_X355;
_Bool _condtional_value_X356;
_Bool _condtional_value_X357;
void* __right_value123 = (void*)0;
char* __dec_obj60;
_Bool _condtional_value_X358;
void* __right_value124 = (void*)0;
char* __dec_obj61;
struct CVALUE* __result_obj__85;
    if(({    (_condtional_value_X352=(self==(void*)0));    _condtional_value_X352;    })) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    result=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(({    (_condtional_value_X353=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X353;    })) {
        __dec_obj58=result->c_value,
        result->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X354=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X354;    })) {
        __dec_obj59=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X355=(self!=((void*)0)));    _condtional_value_X355;    })) {
        result->var=self->var;
    }
    if(({    (_condtional_value_X356=(self!=((void*)0)));    _condtional_value_X356;    })) {
        result->right_value_objects=self->right_value_objects;
    }
    if(({    (_condtional_value_X357=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X357;    })) {
        __dec_obj60=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X358=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X358;    })) {
        __dec_obj61=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it;
_Bool _condtional_value_X365;
struct list_item$1sRightValueObject$ph* prev_it;
struct list$1sRightValueObject$ph* __result_obj__86;
    it=self->head;
    while(({    (_condtional_value_X365=(it!=((void*)0)));    _condtional_value_X365;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
_Bool _condtional_value_X368;
struct sVar* result;
struct sVar* __result_obj__87;
_Bool _condtional_value_X369;
struct sVar* __result_obj__88;
struct sVar* result_44;
struct sVar* __result_obj__89;
result = (void*)0;
result_44 = (void*)0;
    if(({    (_condtional_value_X368=(self==((void*)0)));    _condtional_value_X368;    })) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__87 = result;
        return __result_obj__87;
    }
    self->it=self->head;
    if(({    (_condtional_value_X369=(self->it));    _condtional_value_X369;    })) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_44,0,sizeof(struct sVar*));
    __result_obj__89 = result_44;
    return __result_obj__89;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
_Bool _condtional_value_X372;
struct sVar* result;
struct sVar* __result_obj__90;
_Bool _condtional_value_X373;
struct sVar* __result_obj__91;
struct sVar* result_45;
struct sVar* __result_obj__92;
result = (void*)0;
result_45 = (void*)0;
    if(({    (_condtional_value_X372=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X372;    })) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__90 = result;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X373=(self->it));    _condtional_value_X373;    })) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_45,0,sizeof(struct sVar*));
    __result_obj__92 = result_45;
    return __result_obj__92;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X375;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X375=(it!=((void*)0)));    _condtional_value_X375;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
_Bool _condtional_value_X377;
_Bool _condtional_value_X378;
    if(({    (_condtional_value_X377=(list$1CVALUE$ph_length(info->stack)>top));    _condtional_value_X377;    })) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(({    (_condtional_value_X378=(list$1CVALUE$ph_length(info->stack)<top));    _condtional_value_X378;    })) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info, _Bool return_self_at_last){
char* head;
_Bool _condtional_value_X379;
_Bool dquort;
_Bool squort;
int sline;
int nest;
_Bool _condtional_value_X380;
_Bool _condtional_value_X381;
_Bool _condtional_value_X382;
_Bool _condtional_value_X383;
_Bool _condtional_value_X384;
_Bool _condtional_value_X385;
_Bool _condtional_value_X386;
_Bool _condtional_value_X387;
_Bool _condtional_value_X388;
_Bool _condtional_value_X389;
_Bool _condtional_value_X390;
_Bool _condtional_value_X391;
_Bool _condtional_value_X392;
_Bool _condtional_value_X393;
_Bool _condtional_value_X394;
_Bool _condtional_value_X395;
_Bool _condtional_value_X396;
_Bool _condtional_value_X397;
_Bool _condtional_value_X398;
_Bool _condtional_value_X399;
_Bool _condtional_value_X400;
_Bool _condtional_value_X401;
_Bool _condtional_value_X402;
_Bool _condtional_value_X403;
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
_Bool _condtional_value_X406;
char* tail;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X407;
void* __right_value139 = (void*)0;
char* __result_obj__93;
    head=info->p;
    if(({    (_condtional_value_X379=(*info->p==123));    _condtional_value_X379;    })) {
        info->p++;
        dquort=(_Bool)0;
        squort=(_Bool)0;
        sline=0;
        nest=0;
        while(({        (_condtional_value_X380=(1));        _condtional_value_X380;        })) {
            if(({            (_condtional_value_X381=(dquort));            _condtional_value_X381;            })) {
                if(({                (_condtional_value_X382=(*info->p==92));                _condtional_value_X382;                })) {
                    info->p++;
                    if(({                    (_condtional_value_X383=(*info->p==0));                    _condtional_value_X383;                    })) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(({                    (_condtional_value_X384=(*info->p==10));                    _condtional_value_X384;                    })) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(({                (_condtional_value_X385=(*info->p==34));                _condtional_value_X385;                })) {
                    info->p++;
                    dquort=!dquort;
                }
                else if(({                (_condtional_value_X386=(*info->p==10));                _condtional_value_X386;                })) {
                    info->p++;
                    info->sline++;
                    if(({                    (_condtional_value_X387=(*info->p==0));                    _condtional_value_X387;                    })) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(({                    (_condtional_value_X388=(*info->p==0));                    _condtional_value_X388;                    })) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(({            (_condtional_value_X389=(squort));            _condtional_value_X389;            })) {
                if(({                (_condtional_value_X390=(*info->p==92));                _condtional_value_X390;                })) {
                    info->p++;
                    if(({                    (_condtional_value_X391=(*info->p==0));                    _condtional_value_X391;                    })) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(({                    (_condtional_value_X392=(*info->p==10));                    _condtional_value_X392;                    })) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(({                (_condtional_value_X393=(*info->p==39));                _condtional_value_X393;                })) {
                    info->p++;
                    squort=!squort;
                }
                else if(({                (_condtional_value_X394=(*info->p==10));                _condtional_value_X394;                })) {
                    info->p++;
                    info->sline++;
                    if(({                    (_condtional_value_X395=(*info->p==0));                    _condtional_value_X395;                    })) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(({                    (_condtional_value_X396=(*info->p==0));                    _condtional_value_X396;                    })) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(({            (_condtional_value_X397=(*info->p==39));            _condtional_value_X397;            })) {
                sline=info->sline;
                info->p++;
                squort=!squort;
            }
            else if(({            (_condtional_value_X398=(*info->p==34));            _condtional_value_X398;            })) {
                sline=info->sline;
                info->p++;
                dquort=!dquort;
            }
            else if(({            (_condtional_value_X399=(*info->p==35));            _condtional_value_X399;            })) {
                parse_sharp_v5(info);
            }
            else if(({            (_condtional_value_X400=(*info->p==47&&*(info->p+1)==42));            _condtional_value_X400;            })) {
                parse_sharp_v5(info);
            }
            else if(({            (_condtional_value_X401=(*info->p==47&&*(info->p+1)==47));            _condtional_value_X401;            })) {
                parse_sharp_v5(info);
            }
            else if(({            (_condtional_value_X402=(*info->p==123));            _condtional_value_X402;            })) {
                info->p++;
                nest++;
            }
            else if(({            (_condtional_value_X403=(*info->p==125));            _condtional_value_X403;            })) {
                info->p++;
                if(({                (_condtional_value_X404=(nest==0));                _condtional_value_X404;                })) {
                    break;
                }
                nest--;
            }
            else if(({            (_condtional_value_X405=(*info->p==0));            _condtional_value_X405;            })) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(({            (_condtional_value_X406=(*info->p==10));            _condtional_value_X406;            })) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
        exit(1);
    }
    tail=info->p;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 704, "struct buffer*"))));
    buffer_append(buf,head,tail-head-1);
    if(({    (_condtional_value_X407=(return_self_at_last));    _condtional_value_X407;    })) {
        buffer_append_str(buf,"return self; }");
    }
    else {
        buffer_append_str(buf,"}");
    }
    skip_spaces_and_lf(info);
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value139=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct buffer* asm_fun_name;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* result;
_Bool _condtional_value_X408;
_Bool _condtional_value_X409;
char* head;
_Bool _condtional_value_X410;
int brace_num;
_Bool _condtional_value_X411;
_Bool _condtional_value_X412;
_Bool _condtional_value_X413;
_Bool _condtional_value_X414;
char* tail;
_Bool _condtional_value_X415;
char* head_46;
_Bool _condtional_value_X416;
int brace_num_47;
_Bool _condtional_value_X417;
_Bool _condtional_value_X418;
_Bool _condtional_value_X419;
_Bool _condtional_value_X420;
char* tail_48;
_Bool _condtional_value_X421;
char* head_49;
char* tail_50;
_Bool _condtional_value_X422;
char* head_51;
char* tail_52;
_Bool _condtional_value_X423;
_Bool _condtional_value_X424;
int len;
_Bool _condtional_value_X425;
_Bool in_dquort;
int brace_num_53;
_Bool _condtional_value_X426;
_Bool _condtional_value_X427;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
_Bool _condtional_value_X430;
_Bool _condtional_value_X431;
_Bool _condtional_value_X432;
char* head_54;
char* tail_55;
_Bool _condtional_value_X433;
char* head_56;
char* tail_57;
_Bool _condtional_value_X434;
char* head_58;
char* tail_59;
_Bool _condtional_value_X435;
char* head_60;
_Bool _condtional_value_X436;
int nest;
_Bool _condtional_value_X437;
_Bool _condtional_value_X438;
_Bool _condtional_value_X439;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
char* tail_61;
_Bool _condtional_value_X442;
char* head_62;
_Bool _condtional_value_X443;
int nest_63;
_Bool _condtional_value_X444;
_Bool _condtional_value_X445;
_Bool _condtional_value_X446;
_Bool _condtional_value_X447;
_Bool _condtional_value_X448;
char* tail_64;
_Bool _condtional_value_X449;
char* head_65;
_Bool _condtional_value_X450;
int nest_66;
_Bool _condtional_value_X451;
_Bool _condtional_value_X452;
_Bool _condtional_value_X453;
_Bool _condtional_value_X454;
_Bool _condtional_value_X455;
char* tail_67;
_Bool _condtional_value_X456;
char* head_68;
_Bool _condtional_value_X457;
int nest_69;
_Bool _condtional_value_X458;
_Bool _condtional_value_X459;
_Bool _condtional_value_X460;
_Bool _condtional_value_X461;
_Bool _condtional_value_X462;
char* tail_70;
_Bool _condtional_value_X463;
char* head_71;
_Bool _condtional_value_X464;
int nest_72;
_Bool _condtional_value_X465;
_Bool _condtional_value_X466;
_Bool _condtional_value_X467;
_Bool _condtional_value_X468;
_Bool _condtional_value_X469;
char* tail_73;
_Bool _condtional_value_X470;
char* head_74;
char* tail_75;
_Bool _condtional_value_X471;
char* head_76;
char* tail_77;
_Bool _condtional_value_X472;
char* head_78;
char* tail_79;
_Bool _condtional_value_X473;
char* head_80;
char* tail_81;
_Bool _condtional_value_X474;
char* head_82;
char* tail_83;
_Bool _condtional_value_X475;
char* head_84;
_Bool _condtional_value_X476;
int brace_num_85;
_Bool _condtional_value_X477;
_Bool _condtional_value_X478;
_Bool _condtional_value_X479;
_Bool _condtional_value_X480;
char* tail_86;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__95;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 722, "struct buffer*"))));
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 723, "struct buffer*"))));
    while(({    (_condtional_value_X408=((_Bool)1));    _condtional_value_X408;    })) {
        if(({        (_condtional_value_X409=(parsecmp("__attribute__",info)));        _condtional_value_X409;        })) {
            head=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X410=(*info->p==40));            _condtional_value_X410;            })) {
                brace_num=0;
                while(({                (_condtional_value_X411=(*info->p));                _condtional_value_X411;                })) {
                    if(({                    (_condtional_value_X412=(*info->p==40));                    _condtional_value_X412;                    })) {
                        info->p++;
                        brace_num++;
                    }
                    else if(({                    (_condtional_value_X413=(*info->p==41));                    _condtional_value_X413;                    })) {
                        info->p++;
                        brace_num--;
                        if(({                        (_condtional_value_X414=(brace_num==0));                        _condtional_value_X414;                        })) {
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
            buffer_append(result,head,tail-head);
        }
        else if(({        (_condtional_value_X415=(parsecmp("__declspec",info)));        _condtional_value_X415;        })) {
            head_46=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X416=(*info->p==40));            _condtional_value_X416;            })) {
                brace_num_47=0;
                while(({                (_condtional_value_X417=(*info->p));                _condtional_value_X417;                })) {
                    if(({                    (_condtional_value_X418=(*info->p==40));                    _condtional_value_X418;                    })) {
                        info->p++;
                        brace_num_47++;
                    }
                    else if(({                    (_condtional_value_X419=(*info->p==41));                    _condtional_value_X419;                    })) {
                        info->p++;
                        brace_num_47--;
                        if(({                        (_condtional_value_X420=(brace_num_47==0));                        _condtional_value_X420;                        })) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_48=info->p;
            buffer_append(result,head_46,tail_48-head_46);
        }
        else if(({        (_condtional_value_X421=(parsecmp("_Noreturn",info)));        _condtional_value_X421;        })) {
            head_49=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_50=info->p;
            buffer_append(result,head_49,tail_50-head_49);
        }
        else if(({        (_condtional_value_X422=(parsecmp("__noreturn",info)));        _condtional_value_X422;        })) {
            head_51=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_52=info->p;
            buffer_append(result,head_51,tail_52-head_51);
        }
        else if(({        (_condtional_value_X423=(parsecmp("__asm__",info)));        _condtional_value_X423;        })) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X424=(memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0));            _condtional_value_X424;            })) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(({            (_condtional_value_X425=(*info->p==40));            _condtional_value_X425;            })) {
                in_dquort=(_Bool)0;
                brace_num_53=0;
                while(({                (_condtional_value_X426=(*info->p));                _condtional_value_X426;                })) {
                    if(({                    (_condtional_value_X427=(*info->p==34));                    _condtional_value_X427;                    })) {
                        info->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(({                    (_condtional_value_X428=(in_dquort));                    _condtional_value_X428;                    })) {
                        buffer_append_char(asm_fun_name,*info->p);
                        info->p++;
                    }
                    else if(({                    (_condtional_value_X429=(*info->p==40));                    _condtional_value_X429;                    })) {
                        info->p++;
                        brace_num_53++;
                    }
                    else if(({                    (_condtional_value_X430=(*info->p==41));                    _condtional_value_X430;                    })) {
                        info->p++;
                        brace_num_53--;
                        if(({                        (_condtional_value_X431=(brace_num_53==0));                        _condtional_value_X431;                        })) {
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
        else if(({        (_condtional_value_X432=(parsecmp("__attribute_pure__",info)));        _condtional_value_X432;        })) {
            head_54=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_55=info->p;
            buffer_append(result,head_54,tail_55-head_54);
        }
        else if(({        (_condtional_value_X433=(parsecmp("__malloc_like",info)));        _condtional_value_X433;        })) {
            head_56=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_57=info->p;
            buffer_append(result,head_56,tail_57-head_56);
        }
        else if(({        (_condtional_value_X434=(parsecmp("__result_use_check",info)));        _condtional_value_X434;        })) {
            head_58=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_59=info->p;
            buffer_append(result,head_58,tail_59-head_58);
        }
        else if(({        (_condtional_value_X435=(parsecmp("__alloc_size2",info)));        _condtional_value_X435;        })) {
            head_60=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X436=(*info->p==40));            _condtional_value_X436;            })) {
                nest=0;
                while(({                (_condtional_value_X437=(1));                _condtional_value_X437;                })) {
                    if(({                    (_condtional_value_X438=(*info->p==40));                    _condtional_value_X438;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(({                    (_condtional_value_X439=(*info->p==41));                    _condtional_value_X439;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(({                        (_condtional_value_X440=(nest==0));                        _condtional_value_X440;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X441=(*info->p==0));                    _condtional_value_X441;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_61=info->p;
            buffer_append(result,head_60,tail_61-head_60);
        }
        else if(({        (_condtional_value_X442=(parsecmp("__alloc_size",info)));        _condtional_value_X442;        })) {
            head_62=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X443=(*info->p==40));            _condtional_value_X443;            })) {
                nest_63=0;
                while(({                (_condtional_value_X444=(1));                _condtional_value_X444;                })) {
                    if(({                    (_condtional_value_X445=(*info->p==40));                    _condtional_value_X445;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_63++;
                    }
                    else if(({                    (_condtional_value_X446=(*info->p==41));                    _condtional_value_X446;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_63--;
                        if(({                        (_condtional_value_X447=(nest_63==0));                        _condtional_value_X447;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X448=(*info->p==0));                    _condtional_value_X448;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_64=info->p;
            buffer_append(result,head_62,tail_64-head_62);
        }
        else if(({        (_condtional_value_X449=(parsecmp("__nonnull",info)));        _condtional_value_X449;        })) {
            head_65=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X450=(*info->p==40));            _condtional_value_X450;            })) {
                nest_66=0;
                while(({                (_condtional_value_X451=(1));                _condtional_value_X451;                })) {
                    if(({                    (_condtional_value_X452=(*info->p==40));                    _condtional_value_X452;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_66++;
                    }
                    else if(({                    (_condtional_value_X453=(*info->p==41));                    _condtional_value_X453;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_66--;
                        if(({                        (_condtional_value_X454=(nest_66==0));                        _condtional_value_X454;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X455=(*info->p==0));                    _condtional_value_X455;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_67=info->p;
            buffer_append(result,head_65,tail_67-head_65);
        }
        else if(({        (_condtional_value_X456=(parsecmp("_Nonnull",info)));        _condtional_value_X456;        })) {
            head_68=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X457=(*info->p==40));            _condtional_value_X457;            })) {
                nest_69=0;
                while(({                (_condtional_value_X458=(1));                _condtional_value_X458;                })) {
                    if(({                    (_condtional_value_X459=(*info->p==40));                    _condtional_value_X459;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_69++;
                    }
                    else if(({                    (_condtional_value_X460=(*info->p==41));                    _condtional_value_X460;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_69--;
                        if(({                        (_condtional_value_X461=(nest_69==0));                        _condtional_value_X461;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X462=(*info->p==0));                    _condtional_value_X462;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_70=info->p;
            buffer_append(result,head_68,tail_70-head_68);
        }
        else if(({        (_condtional_value_X463=(parsecmp("__alloc_align",info)));        _condtional_value_X463;        })) {
            head_71=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X464=(*info->p==40));            _condtional_value_X464;            })) {
                nest_72=0;
                while(({                (_condtional_value_X465=(1));                _condtional_value_X465;                })) {
                    if(({                    (_condtional_value_X466=(*info->p==40));                    _condtional_value_X466;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_72++;
                    }
                    else if(({                    (_condtional_value_X467=(*info->p==41));                    _condtional_value_X467;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_72--;
                        if(({                        (_condtional_value_X468=(nest_72==0));                        _condtional_value_X468;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X469=(*info->p==0));                    _condtional_value_X469;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_73=info->p;
            buffer_append(result,head_71,tail_73-head_71);
        }
        else if(({        (_condtional_value_X470=(parsecmp("__attribute_malloc__",info)));        _condtional_value_X470;        })) {
            head_74=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_75=info->p;
            buffer_append(result,head_74,tail_75-head_74);
        }
        else if(({        (_condtional_value_X471=(parsecmp("__attr_dealloc_fclose",info)));        _condtional_value_X471;        })) {
            head_76=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_77=info->p;
            buffer_append(result,head_76,tail_77-head_76);
        }
        else if(({        (_condtional_value_X472=(parsecmp("__wur",info)));        _condtional_value_X472;        })) {
            head_78=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_79=info->p;
            buffer_append(result,head_78,tail_79-head_78);
        }
        else if(({        (_condtional_value_X473=(parsecmp("__pure2",info)));        _condtional_value_X473;        })) {
            head_80=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_81=info->p;
            buffer_append(result,head_80,tail_81-head_80);
        }
        else if(({        (_condtional_value_X474=(parsecmp("__pure",info)));        _condtional_value_X474;        })) {
            head_82=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_83=info->p;
            buffer_append(result,head_82,tail_83-head_82);
        }
        else if(({        (_condtional_value_X475=(parsecmp("__asm",info)));        _condtional_value_X475;        })) {
            head_84=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X476=(*info->p==40));            _condtional_value_X476;            })) {
                brace_num_85=0;
                while(({                (_condtional_value_X477=(*info->p));                _condtional_value_X477;                })) {
                    if(({                    (_condtional_value_X478=(*info->p==40));                    _condtional_value_X478;                    })) {
                        info->p++;
                        brace_num_85++;
                    }
                    else if(({                    (_condtional_value_X479=(*info->p==41));                    _condtional_value_X479;                    })) {
                        info->p++;
                        brace_num_85--;
                        if(({                        (_condtional_value_X480=(brace_num_85==0));                        _condtional_value_X480;                        })) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_86=info->p;
            buffer_append(result,head_84,tail_86-head_84);
        }
        else {
            break;
        }
    }
    __result_obj__95 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value147=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1137, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(buffer_to_string(result))))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj70;
char* __dec_obj71;
struct tuple2$2char$phchar$ph* __result_obj__94;
    __dec_obj70=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj71=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__94 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
_Bool _condtional_value_X481;
_Bool _condtional_value_X482;
    if(({    (_condtional_value_X481=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X481;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X482=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X482;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct buffer* asm_fun_name;
void* __right_value150 = (void*)0;
char* attribute;
_Bool _condtional_value_X483;
_Bool _condtional_value_X484;
_Bool _condtional_value_X485;
_Bool _condtional_value_X486;
_Bool _condtional_value_X487;
_Bool _condtional_value_X488;
int nest;
_Bool _condtional_value_X489;
_Bool _condtional_value_X490;
_Bool _condtional_value_X491;
_Bool _condtional_value_X492;
_Bool _condtional_value_X493;
_Bool _condtional_value_X494;
_Bool _condtional_value_X495;
int nest_87;
_Bool _condtional_value_X496;
_Bool _condtional_value_X497;
_Bool _condtional_value_X498;
_Bool _condtional_value_X499;
_Bool _condtional_value_X500;
_Bool _condtional_value_X501;
_Bool _condtional_value_X502;
int nest_88;
_Bool _condtional_value_X503;
_Bool _condtional_value_X504;
_Bool _condtional_value_X505;
_Bool _condtional_value_X506;
_Bool _condtional_value_X507;
_Bool _condtional_value_X508;
_Bool _condtional_value_X509;
int nest_89;
_Bool _condtional_value_X510;
_Bool _condtional_value_X511;
_Bool _condtional_value_X512;
_Bool _condtional_value_X513;
_Bool _condtional_value_X514;
_Bool _condtional_value_X515;
_Bool _condtional_value_X516;
int nest_90;
_Bool _condtional_value_X517;
_Bool _condtional_value_X518;
_Bool _condtional_value_X519;
_Bool _condtional_value_X520;
_Bool _condtional_value_X521;
_Bool _condtional_value_X522;
_Bool _condtional_value_X523;
_Bool _condtional_value_X524;
_Bool _condtional_value_X525;
_Bool _condtional_value_X526;
_Bool _condtional_value_X527;
_Bool _condtional_value_X528;
void* __right_value151 = (void*)0;
char* __dec_obj72;
_Bool _condtional_value_X529;
_Bool _condtional_value_X530;
int len;
_Bool _condtional_value_X531;
_Bool in_dquort;
int brace_num;
_Bool _condtional_value_X532;
_Bool _condtional_value_X533;
_Bool _condtional_value_X534;
_Bool _condtional_value_X535;
_Bool _condtional_value_X536;
_Bool _condtional_value_X537;
_Bool _condtional_value_X538;
_Bool _condtional_value_X539;
int brace_num_91;
_Bool _condtional_value_X540;
_Bool _condtional_value_X541;
_Bool _condtional_value_X542;
_Bool _condtional_value_X543;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__96;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1142, "struct buffer*"))));
    attribute=(char*)come_increment_ref_count(xsprintf(""));
    while(({    (_condtional_value_X483=((_Bool)1));    _condtional_value_X483;    })) {
        if(({        (_condtional_value_X484=(parsecmp("__attribute_pure__",info)));        _condtional_value_X484;        })) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X485=(parsecmp("__malloc_like",info)));        _condtional_value_X485;        })) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X486=(parsecmp("__result_use_check",info)));        _condtional_value_X486;        })) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X487=(parsecmp("__alloc_size2",info)));        _condtional_value_X487;        })) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X488=(*info->p==40));            _condtional_value_X488;            })) {
                nest=0;
                while(({                (_condtional_value_X489=(1));                _condtional_value_X489;                })) {
                    if(({                    (_condtional_value_X490=(*info->p==40));                    _condtional_value_X490;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(({                    (_condtional_value_X491=(*info->p==41));                    _condtional_value_X491;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(({                        (_condtional_value_X492=(nest==0));                        _condtional_value_X492;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X493=(*info->p==0));                    _condtional_value_X493;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_condtional_value_X494=(parsecmp("__alloc_size",info)));        _condtional_value_X494;        })) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X495=(*info->p==40));            _condtional_value_X495;            })) {
                nest_87=0;
                while(({                (_condtional_value_X496=(1));                _condtional_value_X496;                })) {
                    if(({                    (_condtional_value_X497=(*info->p==40));                    _condtional_value_X497;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_87++;
                    }
                    else if(({                    (_condtional_value_X498=(*info->p==41));                    _condtional_value_X498;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_87--;
                        if(({                        (_condtional_value_X499=(nest_87==0));                        _condtional_value_X499;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X500=(*info->p==0));                    _condtional_value_X500;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_condtional_value_X501=(parsecmp("__nonnull",info)));        _condtional_value_X501;        })) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X502=(*info->p==40));            _condtional_value_X502;            })) {
                nest_88=0;
                while(({                (_condtional_value_X503=(1));                _condtional_value_X503;                })) {
                    if(({                    (_condtional_value_X504=(*info->p==40));                    _condtional_value_X504;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_88++;
                    }
                    else if(({                    (_condtional_value_X505=(*info->p==41));                    _condtional_value_X505;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_88--;
                        if(({                        (_condtional_value_X506=(nest_88==0));                        _condtional_value_X506;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X507=(*info->p==0));                    _condtional_value_X507;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_condtional_value_X508=(parsecmp("_Nonnull",info)));        _condtional_value_X508;        })) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X509=(*info->p==40));            _condtional_value_X509;            })) {
                nest_89=0;
                while(({                (_condtional_value_X510=(1));                _condtional_value_X510;                })) {
                    if(({                    (_condtional_value_X511=(*info->p==40));                    _condtional_value_X511;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_89++;
                    }
                    else if(({                    (_condtional_value_X512=(*info->p==41));                    _condtional_value_X512;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_89--;
                        if(({                        (_condtional_value_X513=(nest_89==0));                        _condtional_value_X513;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X514=(*info->p==0));                    _condtional_value_X514;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_condtional_value_X515=(parsecmp("__alloc_align",info)));        _condtional_value_X515;        })) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X516=(*info->p==40));            _condtional_value_X516;            })) {
                nest_90=0;
                while(({                (_condtional_value_X517=(1));                _condtional_value_X517;                })) {
                    if(({                    (_condtional_value_X518=(*info->p==40));                    _condtional_value_X518;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_90++;
                    }
                    else if(({                    (_condtional_value_X519=(*info->p==41));                    _condtional_value_X519;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_90--;
                        if(({                        (_condtional_value_X520=(nest_90==0));                        _condtional_value_X520;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X521=(*info->p==0));                    _condtional_value_X521;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_condtional_value_X522=(parsecmp("__attribute_malloc__",info)));        _condtional_value_X522;        })) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X523=(parsecmp("__attr_dealloc_fclose",info)));        _condtional_value_X523;        })) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X524=(parsecmp("__wur",info)));        _condtional_value_X524;        })) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X525=(parsecmp("__pure2",info)));        _condtional_value_X525;        })) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X526=(parsecmp("__pure",info)));        _condtional_value_X526;        })) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X527=(parsecmp("__noreturn",info)));        _condtional_value_X527;        })) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X528=(parsecmp("__attribute__",info)));        _condtional_value_X528;        })) {
            __dec_obj72=attribute,
            attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(({        (_condtional_value_X529=(parsecmp("__asm__",info)));        _condtional_value_X529;        })) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X530=(memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0));            _condtional_value_X530;            })) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(({            (_condtional_value_X531=(*info->p==40));            _condtional_value_X531;            })) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(({                (_condtional_value_X532=(*info->p));                _condtional_value_X532;                })) {
                    if(({                    (_condtional_value_X533=(*info->p==34));                    _condtional_value_X533;                    })) {
                        info->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(({                    (_condtional_value_X534=(in_dquort));                    _condtional_value_X534;                    })) {
                        buffer_append_char(asm_fun_name,*info->p);
                        info->p++;
                    }
                    else if(({                    (_condtional_value_X535=(*info->p==40));                    _condtional_value_X535;                    })) {
                        info->p++;
                        brace_num++;
                    }
                    else if(({                    (_condtional_value_X536=(*info->p==41));                    _condtional_value_X536;                    })) {
                        info->p++;
                        brace_num--;
                        if(({                        (_condtional_value_X537=(brace_num==0));                        _condtional_value_X537;                        })) {
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
        else if(({        (_condtional_value_X538=(parsecmp("__asm",info)));        _condtional_value_X538;        })) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X539=(*info->p==40));            _condtional_value_X539;            })) {
                brace_num_91=0;
                while(({                (_condtional_value_X540=(*info->p));                _condtional_value_X540;                })) {
                    if(({                    (_condtional_value_X541=(*info->p==40));                    _condtional_value_X541;                    })) {
                        info->p++;
                        brace_num_91++;
                    }
                    else if(({                    (_condtional_value_X542=(*info->p==41));                    _condtional_value_X542;                    })) {
                        info->p++;
                        brace_num_91--;
                        if(({                        (_condtional_value_X543=(brace_num_91==0));                        _condtional_value_X543;                        })) {
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
    __result_obj__96 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value154=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1411, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(attribute)))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value154, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
_Bool _condtional_value_X544;
void* __right_value155 = (void*)0;
char* __dec_obj73;
char* head;
int head_sline;
void* __right_value156 = (void*)0;
char* buf;
_Bool _condtional_value_X545;
void* __right_value157 = (void*)0;
struct sNode* node;
_Bool _condtional_value_X546;
_Bool _condtional_value_X547;
_Bool Value;
_Bool _condtional_value_X548;
_Bool _condtional_value_X549;
    while(({    (_condtional_value_X544=(*info->p));    _condtional_value_X544;    })) {
        __dec_obj73=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1417, "char*"));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        head=info->p;
        head_sline=info->sline;
        buf=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(({        (_condtional_value_X545=(block&&*info->p==125));        _condtional_value_X545;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        node=(struct sNode*)come_increment_ref_count(top_level_v99(buf,head,head_sline,info));
        parse_sharp_v5(info);
        while(({        (_condtional_value_X546=(*info->p==59));        _condtional_value_X546;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(({        (_condtional_value_X547=(node!=((void*)0)));        _condtional_value_X547;        })) {
            Value=node_compile(node,info);
            if(({            (_condtional_value_X548=(!Value));            _condtional_value_X548;            })) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(({        (_condtional_value_X549=(block&&*info->p==125));        _condtional_value_X549;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value158 = (void*)0;
char* name;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct sType* result_type;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sFun* fun;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* name_95;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sType* result_type_96;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct list$1sType$ph* param_types_97;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct list$1char$ph* param_names_98;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct list$1char$ph* param_default_parametors_99;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sFun* fun_100;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
char* name_101;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sType* result_type_102;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sType* __list_values1__[3];
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1sType$ph* param_types_105;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
char* __list_values2__[3];
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1char$ph* param_names_106;
char* __list_values3__[3];
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1char$ph* param_default_parametors_107;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sFun* fun_108;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
char* name_109;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* result_type_110;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* __list_values4__[3];
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct list$1sType$ph* param_types_111;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* __list_values5__[3];
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1char$ph* param_names_112;
char* __list_values6__[3];
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1char$ph* param_default_parametors_113;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sFun* fun_114;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* name_115;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* result_type_116;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __list_values7__[3];
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1sType$ph* param_types_117;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
char* __list_values8__[3];
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1char$ph* param_names_118;
char* __list_values9__[3];
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1char$ph* param_default_parametors_119;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sFun* fun_120;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* name_121;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* result_type_122;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __list_values10__[3];
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sType$ph* param_types_123;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __list_values11__[3];
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* param_names_124;
char* __list_values12__[3];
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1char$ph* param_default_parametors_125;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sFun* fun_126;
void* __right_value303 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1467, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1468, "struct list$1sType$ph*"))));
        param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1469, "struct list$1char$ph*"))));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1470, "struct list$1char$ph*"))));
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1471, "struct sFun*")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name)),(struct sFun*)come_increment_ref_count(fun));
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_95=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_96=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1480, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_97=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1481, "struct list$1sType$ph*"))));
        param_names_98=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1482, "struct list$1char$ph*"))));
        param_default_parametors_99=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1483, "struct list$1char$ph*"))));
        fun_100=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1484, "struct sFun*")),(char*)come_increment_ref_count(name_95),(struct sType*)come_increment_ref_count(result_type_96),(struct list$1sType$ph*)come_increment_ref_count(param_types_97),(struct list$1char$ph*)come_increment_ref_count(param_names_98),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_99),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_95)),(struct sFun*)come_increment_ref_count(fun_100));
        (name_95 = come_decrement_ref_count(name_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_101=(char*)come_increment_ref_count(__builtin_string("strtol"));
        result_type_102=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1493, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        param_types_105=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=((struct sType*)(__right_value199=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1__[1]=((struct sType*)(__right_value202=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values1__[2]=((struct sType*)(__right_value205=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1494, "struct list$1sType$ph")),3,__list_values1__)));
        come_call_finalizer(sType_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value202, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_106=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char*)(__right_value211=xsprintf("arg1"))),
__list_values2__[1]=((char*)(__right_value212=xsprintf("arg2"))),
__list_values2__[2]=((char*)(__right_value213=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1495, "struct list$1char$ph")),3,__list_values2__)));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_107=(struct list$1char$ph*)come_increment_ref_count((__list_values3__[0]=(char*)((void*)0),
__list_values3__[1]=(char*)((void*)0),
__list_values3__[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1496, "struct list$1char$ph")),3,__list_values3__)));
        fun_108=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1497, "struct sFun*")),(char*)come_increment_ref_count(name_101),(struct sType*)come_increment_ref_count(result_type_102),(struct list$1sType$ph*)come_increment_ref_count(param_types_105),(struct list$1char$ph*)come_increment_ref_count(param_names_106),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_107),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_101)),(struct sFun*)come_increment_ref_count(fun_108));
        (name_101 = come_decrement_ref_count(name_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_109=(char*)come_increment_ref_count(__builtin_string("strtoul"));
        result_type_110=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1506, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_110->mUnsigned=(_Bool)1;
        param_types_111=(struct list$1sType$ph*)come_increment_ref_count((__list_values4__[0]=((struct sType*)(__right_value229=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values4__[1]=((struct sType*)(__right_value232=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values4__[2]=((struct sType*)(__right_value235=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1508, "struct list$1sType$ph")),3,__list_values4__)));
        come_call_finalizer(sType_finalize, __right_value229, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value232, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value235, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_112=(struct list$1char$ph*)come_increment_ref_count((__list_values5__[0]=((char*)(__right_value238=xsprintf("arg1"))),
__list_values5__[1]=((char*)(__right_value239=xsprintf("arg2"))),
__list_values5__[2]=((char*)(__right_value240=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1509, "struct list$1char$ph")),3,__list_values5__)));
        (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_113=(struct list$1char$ph*)come_increment_ref_count((__list_values6__[0]=(char*)((void*)0),
__list_values6__[1]=(char*)((void*)0),
__list_values6__[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1510, "struct list$1char$ph")),3,__list_values6__)));
        fun_114=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1511, "struct sFun*")),(char*)come_increment_ref_count(name_109),(struct sType*)come_increment_ref_count(result_type_110),(struct list$1sType$ph*)come_increment_ref_count(param_types_111),(struct list$1char$ph*)come_increment_ref_count(param_names_112),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_113),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_109)),(struct sFun*)come_increment_ref_count(fun_114));
        (name_109 = come_decrement_ref_count(name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_115=(char*)come_increment_ref_count(__builtin_string("strtoull"));
        result_type_116=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1520, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_116->mUnsigned=(_Bool)1;
        result_type_116->mLong=(_Bool)1;
        param_types_117=(struct list$1sType$ph*)come_increment_ref_count((__list_values7__[0]=((struct sType*)(__right_value256=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values7__[1]=((struct sType*)(__right_value259=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values7__[2]=((struct sType*)(__right_value262=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph")),3,__list_values7__)));
        come_call_finalizer(sType_finalize, __right_value256, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value259, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value262, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_118=(struct list$1char$ph*)come_increment_ref_count((__list_values8__[0]=((char*)(__right_value265=xsprintf("arg1"))),
__list_values8__[1]=((char*)(__right_value266=xsprintf("arg2"))),
__list_values8__[2]=((char*)(__right_value267=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph")),3,__list_values8__)));
        (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_119=(struct list$1char$ph*)come_increment_ref_count((__list_values9__[0]=(char*)((void*)0),
__list_values9__[1]=(char*)((void*)0),
__list_values9__[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph")),3,__list_values9__)));
        fun_120=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1526, "struct sFun*")),(char*)come_increment_ref_count(name_115),(struct sType*)come_increment_ref_count(result_type_116),(struct list$1sType$ph*)come_increment_ref_count(param_types_117),(struct list$1char$ph*)come_increment_ref_count(param_names_118),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_119),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_115)),(struct sFun*)come_increment_ref_count(fun_120));
        (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_121=(char*)come_increment_ref_count(__builtin_string("strtoll"));
        result_type_122=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_122->mLong=(_Bool)1;
        param_types_123=(struct list$1sType$ph*)come_increment_ref_count((__list_values10__[0]=((struct sType*)(__right_value283=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values10__[1]=((struct sType*)(__right_value286=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values10__[2]=((struct sType*)(__right_value289=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1537, "struct list$1sType$ph")),3,__list_values10__)));
        come_call_finalizer(sType_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value286, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_124=(struct list$1char$ph*)come_increment_ref_count((__list_values11__[0]=((char*)(__right_value292=xsprintf("arg1"))),
__list_values11__[1]=((char*)(__right_value293=xsprintf("arg2"))),
__list_values11__[2]=((char*)(__right_value294=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1538, "struct list$1char$ph")),3,__list_values11__)));
        (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_125=(struct list$1char$ph*)come_increment_ref_count((__list_values12__[0]=(char*)((void*)0),
__list_values12__[1]=(char*)((void*)0),
__list_values12__[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1539, "struct list$1char$ph")),3,__list_values12__)));
        fun_126=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1540, "struct sFun*")),(char*)come_increment_ref_count(name_121),(struct sType*)come_increment_ref_count(result_type_122),(struct list$1sType$ph*)come_increment_ref_count(param_types_123),(struct list$1char$ph*)come_increment_ref_count(param_names_124),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_125),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_121)),(struct sFun*)come_increment_ref_count(fun_126));
        (name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
_Bool _condtional_value_X550;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X567;
_Bool _condtional_value_X568;
_Bool _condtional_value_X569;
_Bool _condtional_value_X570;
_Bool _condtional_value_X571;
_Bool _condtional_value_X572;
_Bool _condtional_value_X573;
_Bool _condtional_value_X574;
_Bool _condtional_value_X575;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X576;
_Bool _condtional_value_X577;
_Bool _condtional_value_X578;
_Bool _condtional_value_X579;
_Bool _condtional_value_X580;
struct map$2char$phsFun$ph* __result_obj__107;
    if(({    (_condtional_value_X550=(self->len*10>=self->size));    _condtional_value_X550;    })) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X567=((_Bool)1));    _condtional_value_X567;    })) {
        if(({        (_condtional_value_X568=(self->item_existance[it]));        _condtional_value_X568;        })) {
            if(({            (_condtional_value_X569=(string_equals(self->keys[it],key)));            _condtional_value_X569;            })) {
                if(({                (_condtional_value_X570=(1));                _condtional_value_X570;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X571=(1));                _condtional_value_X571;                })) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X572=(it>=self->size));            _condtional_value_X572;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X573=(it==hash));            _condtional_value_X573;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X574=(1));            _condtional_value_X574;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X575=(1));            _condtional_value_X575;            })) {
                self->items[it]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X576=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X576;    });    ({    (_condtional_value_X577=(!list$1char$ph_end(self->key_list)));    _condtional_value_X577;    });    ({    (_condtional_value_X578=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X578;    })    ){
        if(({        (_condtional_value_X579=(string_equals(it2,key)));        _condtional_value_X579;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X580=(!same_key_exist));    _condtional_value_X580;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__107 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__107;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size;
void* __right_value172 = (void*)0;
char** keys;
void* __right_value173 = (void*)0;
struct sFun** items;
void* __right_value174 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X553;
_Bool _condtional_value_X554;
_Bool _condtional_value_X557;
struct sFun* default_value;
void* __right_value175 = (void*)0;
struct sFun* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X563;
_Bool _condtional_value_X564;
_Bool _condtional_value_X565;
_Bool _condtional_value_X566;
struct sFun* default_value_94;
void* __right_value176 = (void*)0;
default_value = (void*)0;
default_value_94 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value172=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value173=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sFun**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value174=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X553=(it=map$2char$phsFun$ph_begin(self)));    _condtional_value_X553;    });    ({    (_condtional_value_X554=(!map$2char$phsFun$ph_end(self)));    _condtional_value_X554;    });    ({    (_condtional_value_X557=(it=map$2char$phsFun$ph_next(self)));    _condtional_value_X557;    })    ){
        memset(&default_value,0,sizeof(struct sFun*));
        it2=((struct sFun*)(__right_value175=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value))));
        come_call_finalizer(sFun_finalize, __right_value175, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X563=((_Bool)1));        _condtional_value_X563;        })) {
            if(({            (_condtional_value_X564=(item_existance[n]));            _condtional_value_X564;            })) {
                n++;
                if(({                (_condtional_value_X565=(n>=size));                _condtional_value_X565;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X566=(n==hash));                _condtional_value_X566;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sFun*)(__right_value176=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value_94))));
                come_call_finalizer(sFun_finalize, __right_value176, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sFun_finalize, default_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
_Bool _condtional_value_X551;
char* result;
char* __result_obj__97;
_Bool _condtional_value_X552;
char* __result_obj__98;
char* result_92;
char* __result_obj__99;
result = (void*)0;
result_92 = (void*)0;
    if(({    (_condtional_value_X551=(self==((void*)0)));    _condtional_value_X551;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__97 = result;
        return __result_obj__97;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X552=(self->key_list->it));    _condtional_value_X552;    })) {
        __result_obj__98 = self->key_list->it->item;
        return __result_obj__98;
    }
    memset(&result_92,0,sizeof(char*));
    __result_obj__99 = result_92;
    return __result_obj__99;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
_Bool _condtional_value_X555;
char* result;
char* __result_obj__100;
_Bool _condtional_value_X556;
char* __result_obj__101;
char* result_93;
char* __result_obj__102;
result = (void*)0;
result_93 = (void*)0;
    if(({    (_condtional_value_X555=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X555;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__100 = result;
        return __result_obj__100;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X556=(self->key_list->it));    _condtional_value_X556;    })) {
        __result_obj__101 = self->key_list->it->item;
        return __result_obj__101;
    }
    memset(&result_93,0,sizeof(char*));
    __result_obj__102 = result_93;
    return __result_obj__102;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X558;
_Bool _condtional_value_X559;
_Bool _condtional_value_X560;
struct sFun* __result_obj__103;
_Bool _condtional_value_X561;
_Bool _condtional_value_X562;
struct sFun* __result_obj__104;
struct sFun* __result_obj__105;
struct sFun* __result_obj__106;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X558=((_Bool)1));    _condtional_value_X558;    })) {
        if(({        (_condtional_value_X559=(self->item_existance[it]));        _condtional_value_X559;        })) {
            if(({            (_condtional_value_X560=(string_equals(self->keys[it],key)));            _condtional_value_X560;            })) {
                __result_obj__103 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__103;
            }
            it++;
            if(({            (_condtional_value_X561=(it>=self->size));            _condtional_value_X561;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X562=(it==hash));            _condtional_value_X562;            })) {
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
int i;
_Bool _condtional_value_X581;
_Bool _condtional_value_X582;
_Bool _condtional_value_X583;
struct list$1sType$ph* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X581=(i=0));    _condtional_value_X581;    });    ({    (_condtional_value_X582=(i<num_value));    _condtional_value_X582;    });    ({    (_condtional_value_X583=(i++));    _condtional_value_X583;    })    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i]));
    }
    __result_obj__109 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X584;
void* __right_value206 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj74;
_Bool _condtional_value_X585;
void* __right_value207 = (void*)0;
struct list_item$1sType$ph* litem_103;
struct sType* __dec_obj75;
void* __right_value208 = (void*)0;
struct list_item$1sType$ph* litem_104;
struct sType* __dec_obj76;
struct list$1sType$ph* __result_obj__108;
    if(({    (_condtional_value_X584=(self->len==0));    _condtional_value_X584;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value206=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj74=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X585=(self->len==1));    _condtional_value_X585;    })) {
        litem_103=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value207=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1sType$ph*"))));
        litem_103->prev=self->head;
        litem_103->next=((void*)0);
        __dec_obj75=litem_103->item,
        litem_103->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_103;
        self->head->next=litem_103;
    }
    else {
        litem_104=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value208=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1sType$ph*"))));
        litem_104->prev=self->tail;
        litem_104->next=((void*)0);
        __dec_obj76=litem_104->item,
        litem_104->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_104;
        self->tail=litem_104;
    }
    self->len++;
    __result_obj__108 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i;
_Bool _condtional_value_X586;
_Bool _condtional_value_X587;
_Bool _condtional_value_X588;
struct list$1char$ph* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X586=(i=0));    _condtional_value_X586;    });    ({    (_condtional_value_X587=(i<num_value));    _condtional_value_X587;    });    ({    (_condtional_value_X588=(i++));    _condtional_value_X588;    })    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i]));
    }
    __result_obj__110 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head;
_Bool is_type_name_flag;
int sline;
_Bool define_struct_nobody;
char* p;
int sline_127;
_Bool _condtional_value_X589;
_Bool _condtional_value_X590;
void* __right_value304 = (void*)0;
char* word;
_Bool _condtional_value_X591;
_Bool uniq_class;
_Bool _condtional_value_X592;
char* p_128;
void* __right_value305 = (void*)0;
_Bool _condtional_value_X593;
void* __right_value306 = (void*)0;
char* buf2;
_Bool _condtional_value_X594;
_Bool define_function_pointer_result_function;
_Bool define_variable_between_brace;
_Bool _condtional_value_X595;
char* p_129;
_Bool _condtional_value_X596;
void* __right_value307 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type=0;
char* fun_name=0;
_Bool err=0;
_Bool _condtional_value_X599;
_Bool _condtional_value_X600;
_Bool _condtional_value_X601;
void* __right_value308 = (void*)0;
char* word_130;
_Bool _condtional_value_X602;
_Bool _condtional_value_X603;
_Bool define_function_flag;
_Bool _condtional_value_X604;
char* p_131;
_Bool _condtional_value_X605;
void* __right_value309 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_132=0;
char* fun_name_133=0;
_Bool err_134=0;
_Bool _condtional_value_X606;
char* word_135;
_Bool _condtional_value_X607;
void* __right_value310 = (void*)0;
char* __dec_obj77;
_Bool _condtional_value_X608;
void* __right_value311 = (void*)0;
char* __dec_obj78;
char* __dec_obj79;
_Bool _condtional_value_X609;
_Bool _condtional_value_X610;
_Bool _condtional_value_X611;
_Bool _condtional_value_X612;
_Bool _condtional_value_X613;
_Bool _condtional_value_X614;
_Bool _condtional_value_X615;
void* __right_value312 = (void*)0;
char* __dec_obj80;
_Bool _condtional_value_X616;
_Bool _condtional_value_X617;
_Bool define_variable;
_Bool _condtional_value_X618;
char* p_136;
_Bool _condtional_value_X619;
_Bool _condtional_value_X620;
void* __right_value313 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_137=0;
char* fun_name_138=0;
_Bool err_139=0;
_Bool _condtional_value_X621;
_Bool _condtional_value_X622;
_Bool _condtional_value_X623;
void* __right_value314 = (void*)0;
char* word_140;
_Bool _condtional_value_X624;
_Bool _condtional_value_X625;
_Bool _condtional_value_X626;
void* __right_value315 = (void*)0;
char* word_141;
_Bool _condtional_value_X627;
_Bool _condtional_value_X628;
_Bool _condtional_value_X629;
_Bool _condtional_value_X630;
_Bool _condtional_value_X631;
_Bool _condtional_value_X632;
_Bool _condtional_value_X633;
_Bool _condtional_value_X634;
char* p_142;
_Bool _condtional_value_X635;
void* __right_value316 = (void*)0;
_Bool _condtional_value_X636;
void* __right_value317 = (void*)0;
_Bool _condtional_value_X637;
void* __right_value318 = (void*)0;
char* word_143;
_Bool _condtional_value_X638;
void* __right_value319 = (void*)0;
char* __dec_obj81;
_Bool _condtional_value_X639;
_Bool _condtional_value_X640;
_Bool _condtional_value_X641;
_Bool _condtional_value_X642;
_Bool _condtional_value_X643;
_Bool _condtional_value_X644;
_Bool _condtional_value_X645;
void* __right_value320 = (void*)0;
char* buf2_144;
void* __right_value321 = (void*)0;
struct sNode* __result_obj__111;
_Bool _condtional_value_X646;
void* __right_value322 = (void*)0;
char* word_145;
_Bool _condtional_value_X647;
_Bool _condtional_value_X648;
_Bool _condtional_value_X649;
_Bool _condtional_value_X650;
_Bool _condtional_value_X651;
void* __right_value323 = (void*)0;
char* word_146;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__112;
_Bool _condtional_value_X652;
_Bool _condtional_value_X653;
_Bool _condtional_value_X654;
void* __right_value326 = (void*)0;
struct sNode* __result_obj__113;
_Bool _condtional_value_X655;
char* header_head;
void* __right_value327 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_147=0;
char* fun_name_148=0;
_Bool err_149=0;
_Bool _condtional_value_X656;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1char$ph* param_names;
_Bool _condtional_value_X657;
_Bool _condtional_value_X658;
void* __right_value332 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type=0;
char* param_name=0;
_Bool err_150=0;
_Bool _condtional_value_X659;
void* __right_value333 = (void*)0;
_Bool _condtional_value_X660;
void* __right_value334 = (void*)0;
_Bool _condtional_value_X661;
_Bool _condtional_value_X662;
_Bool _condtional_value_X663;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1sType$ph* param_types2;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1char$ph* param_names2;
_Bool _condtional_value_X664;
_Bool _condtional_value_X665;
void* __right_value339 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_151=0;
char* param_name_152=0;
_Bool err_153=0;
_Bool _condtional_value_X666;
void* __right_value340 = (void*)0;
_Bool _condtional_value_X667;
void* __right_value341 = (void*)0;
_Bool _condtional_value_X668;
_Bool _condtional_value_X669;
char* header_tail;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* result_type2;
struct sType* __dec_obj82;
void* __right_value345 = (void*)0;
struct list$1sType$ph* __dec_obj83;
void* __right_value346 = (void*)0;
struct list$1char$ph* __dec_obj84;
_Bool var_args;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sFun* fun;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value415 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__142;
_Bool _condtional_value_X786;
void* __right_value416 = (void*)0;
struct sNode* node_161;
struct sNode* __result_obj__143;
_Bool _condtional_value_X787;
void* __right_value417 = (void*)0;
struct sNode* node_162;
struct sNode* __result_obj__144;
_Bool _condtional_value_X788;
void* __right_value418 = (void*)0;
struct sNode* node_163;
char* source_tail;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* header;
struct sNode* __result_obj__145;
void* __right_value421 = (void*)0;
char* buf2_164;
void* __right_value422 = (void*)0;
struct sNode* __result_obj__146;
    info->in_top_level=(_Bool)1;
    source_head=info->p;
    is_type_name_flag=is_type_name(buf,info);
    sline=info->sline;
    define_struct_nobody=(_Bool)0;
    {
        p=info->p;
        sline_127=info->sline;
        if(({        (_condtional_value_X589=(charp_operator_equals(buf,"struct")));        _condtional_value_X589;        })) {
            if(({            (_condtional_value_X590=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X590;            })) {
                word=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_condtional_value_X591=(*info->p==59));                _condtional_value_X591;                })) {
                    define_struct_nobody=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_127;
    }
    uniq_class=(_Bool)0;
    if(({    (_condtional_value_X592=(charp_operator_equals(buf,"uniq")));    _condtional_value_X592;    })) {
        p_128=info->p;
        info->p=head;
        (void)((char*)(__right_value305=parse_word(info)));
        (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X593=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X593;        })) {
            buf2=(char*)come_increment_ref_count(parse_word(info));
            if(({            (_condtional_value_X594=(string_operator_equals(buf2,"class")));            _condtional_value_X594;            })) {
                uniq_class=(_Bool)1;
            }
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_128;
        info->sline=sline;
    }
    define_function_pointer_result_function=(_Bool)0;
    define_variable_between_brace=(_Bool)0;
    if(({    (_condtional_value_X595=(is_type_name_flag&&!uniq_class));    _condtional_value_X595;    })) {
        p_129=info->p;
        info->p=head;
        if(({        (_condtional_value_X596=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X596;        })) {
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value307=backtrace_parse_type((_Bool)0,info)));
            result_type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X599=(*info->p==40));            _condtional_value_X599;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X600=(*info->p!=42));                _condtional_value_X600;                })) {
                    define_function_pointer_result_function=(_Bool)1;
                    if(({                    (_condtional_value_X601=(xisalpha(*info->p)||*info->p==95));                    _condtional_value_X601;                    })) {
                        word_130=(char*)come_increment_ref_count(parse_word(info));
                        if(({                        (_condtional_value_X602=(!is_type_name(word_130,info)&&*info->p==41));                        _condtional_value_X602;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(({                            (_condtional_value_X603=(*info->p==40));                            _condtional_value_X603;                            })) {
                            }
                            else {
                                define_variable_between_brace=(_Bool)1;
                            }
                        }
                        (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=head;
        info->sline=sline;
    }
    define_function_flag=(_Bool)0;
    if(({    (_condtional_value_X604=(is_type_name_flag&&!define_function_pointer_result_function&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class));    _condtional_value_X604;    })) {
        p_131=info->p;
        info->p=head;
        if(({        (_condtional_value_X605=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X605;        })) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value309=backtrace_parse_type((_Bool)0,info)));
            result_type_132=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_133=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_134=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value309, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_133 = come_decrement_ref_count(fun_name_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X606=(!info->define_struct));        _condtional_value_X606;        })) {
            info->define_struct=(_Bool)0;
            word_135=((void*)0);
            if(({            (_condtional_value_X607=(xisalnum(*info->p)||*info->p==95));            _condtional_value_X607;            })) {
                __dec_obj77=word_135,
                word_135=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(({                (_condtional_value_X608=(string_operator_equals(word_135,"extern")));                _condtional_value_X608;                })) {
                    __dec_obj78=word_135,
                    word_135=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj79=word_135,
                word_135=((void*)0);
                __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(({            (_condtional_value_X609=(word_135));            _condtional_value_X609;            })) {
                if(({                (_condtional_value_X610=(is_type_name(word_135,info)));                _condtional_value_X610;                })) {
                    while(({                    (_condtional_value_X611=(*info->p==42));                    _condtional_value_X611;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(({                    (_condtional_value_X612=(*info->p==91&&*(info->p+1)==93));                    _condtional_value_X612;                    })) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(({                    (_condtional_value_X613=(*info->p==58));                    _condtional_value_X613;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(({                    (_condtional_value_X614=(*info->p==58));                    _condtional_value_X614;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(({                    (_condtional_value_X615=(xisalnum(*info->p)||*info->p==95));                    _condtional_value_X615;                    })) {
                        __dec_obj80=word_135,
                        word_135=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    }
                }
                if(({                (_condtional_value_X616=(strlen(word_135)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))));                _condtional_value_X616;                })) {
                    if(({                    (_condtional_value_X617=(is_type_name_flag));                    _condtional_value_X617;                    })) {
                        define_function_flag=(_Bool)1;
                    }
                }
            }
            (word_135 = come_decrement_ref_count(word_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_131;
        info->sline=sline;
    }
    define_variable=(_Bool)1;
    if(({    (_condtional_value_X618=(is_type_name_flag&&!define_function_pointer_result_function&&!uniq_class));    _condtional_value_X618;    })) {
        p_136=info->p;
        info->p=head;
        if(({        (_condtional_value_X619=(!is_type_name_flag));        _condtional_value_X619;        })) {
            define_variable=(_Bool)0;
        }
        if(({        (_condtional_value_X620=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X620;        })) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value313=backtrace_parse_type((_Bool)0,info)));
            result_type_137=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_138=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_139=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value313, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X621=(*info->p==40));            _condtional_value_X621;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X622=(*info->p==42));                _condtional_value_X622;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_condtional_value_X623=(xisalpha(*info->p)||*info->p==95));                    _condtional_value_X623;                    })) {
                        word_140=(char*)come_increment_ref_count(parse_word(info));
                        if(({                        (_condtional_value_X624=(*info->p==41));                        _condtional_value_X624;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(({                            (_condtional_value_X625=(*info->p==40));                            _condtional_value_X625;                            })) {
                                define_variable=(_Bool)1;
                            }
                        }
                        (word_140 = come_decrement_ref_count(word_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                else if(({                (_condtional_value_X626=(xisalpha(*info->p)||*info->p==95));                _condtional_value_X626;                })) {
                    word_141=(char*)come_increment_ref_count(parse_word(info));
                    if(({                    (_condtional_value_X627=(*info->p==41));                    _condtional_value_X627;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(({                        (_condtional_value_X628=(!is_type_name(word_141,info)&&*info->p!=40));                        _condtional_value_X628;                        })) {
                            define_variable=(_Bool)1;
                        }
                    }
                    (word_141 = come_decrement_ref_count(word_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_138 = come_decrement_ref_count(fun_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X629=(info->define_struct));        _condtional_value_X629;        })) {
            info->define_struct=(_Bool)0;
            define_variable=(_Bool)0;
        }
        else if(({        (_condtional_value_X630=(define_variable));        _condtional_value_X630;        })) {
        }
        else {
            if(({            (_condtional_value_X631=(!(xisalpha(*info->p)||*info->p==95)));            _condtional_value_X631;            })) {
                define_variable=(_Bool)0;
            }
            while(({            (_condtional_value_X632=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X632;            })) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X633=(*info->p==40||*info->p==58));            _condtional_value_X633;            })) {
                define_variable=(_Bool)0;
            }
        }
        info->p=p_136;
        info->sline=sline;
    }
    else {
        define_variable=(_Bool)0;
    }
    if(({    (_condtional_value_X634=(!define_function_pointer_result_function));    _condtional_value_X634;    })) {
        p_142=info->p;
        info->p=head;
        if(({        (_condtional_value_X635=(charp_operator_equals(buf,"struct")));        _condtional_value_X635;        })) {
            ((char*)(__right_value316=parse_struct_attribute(info)));
            (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(({            (_condtional_value_X636=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X636;            })) {
                ((char*)(__right_value317=parse_word(info)));
                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(({                (_condtional_value_X637=(xisalpha(*info->p)||*info->p==95));                _condtional_value_X637;                })) {
                    word_143=(char*)come_increment_ref_count(parse_word(info));
                    if(({                    (_condtional_value_X638=(xisalpha(*info->p)||*info->p==95));                    _condtional_value_X638;                    })) {
                        __dec_obj81=word_143,
                        word_143=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(({                        (_condtional_value_X639=(string_operator_equals(word_143,"extends")));                        _condtional_value_X639;                        })) {
                            define_variable=(_Bool)0;
                        }
                    }
                    (word_143 = come_decrement_ref_count(word_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        if(({        (_condtional_value_X640=(info->define_struct));        _condtional_value_X640;        })) {
            info->define_struct=(_Bool)0;
            define_variable=(_Bool)0;
        }
        else if(({        (_condtional_value_X641=(define_variable));        _condtional_value_X641;        })) {
        }
        else {
            if(({            (_condtional_value_X642=(!(xisalpha(*info->p)||*info->p==95)));            _condtional_value_X642;            })) {
                define_variable=(_Bool)0;
            }
            while(({            (_condtional_value_X643=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X643;            })) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X644=(*info->p==40||*info->p==58));            _condtional_value_X644;            })) {
                define_variable=(_Bool)0;
            }
        }
        info->p=p_142;
        info->sline=sline;
    }
    if(({    (_condtional_value_X645=(uniq_class));    _condtional_value_X645;    })) {
        info->p=head;
        info->sline=sline;
        buf2_144=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value321=top_level_v98(buf2_144,head,head_sline,info))));
        (buf2_144 = come_decrement_ref_count(buf2_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value321) ? __right_value321 = come_decrement_ref_count(__right_value321, ((struct sNode*)__right_value321)->finalize, ((struct sNode*)__right_value321)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__111;
        (buf2_144 = come_decrement_ref_count(buf2_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X646=(charp_operator_equals(buf,"template")));    _condtional_value_X646;    })) {
        word_145=(char*)come_increment_ref_count(parse_word(info));
        if(({        (_condtional_value_X647=(*info->p==60));        _condtional_value_X647;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(({            (_condtional_value_X648=((_Bool)1));            _condtional_value_X648;            })) {
                if(({                (_condtional_value_X649=(*info->p==62));                _condtional_value_X649;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(({                (_condtional_value_X650=(*info->p==44));                _condtional_value_X650;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(({                (_condtional_value_X651=(*info->p==0));                _condtional_value_X651;                })) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_146=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_146, "05function.c", 1862, "char*")));
                    (word_146 = come_decrement_ref_count(word_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            node=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__112 = (struct sNode*)come_increment_ref_count(node);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (word_145 = come_decrement_ref_count(word_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__112;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (word_145 = come_decrement_ref_count(word_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X652=(charp_operator_equals(buf,"enum")&&*info->p==123));    _condtional_value_X652;    })) {
    }
    else if(({    (_condtional_value_X653=(define_struct_nobody));    _condtional_value_X653;    })) {
    }
    else if(({    (_condtional_value_X654=(define_variable_between_brace));    _condtional_value_X654;    })) {
        info->p=head;
        info->sline=sline;
        __result_obj__113 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value326=parse_global_variable(info))));
        ((__right_value326) ? __right_value326 = come_decrement_ref_count(__right_value326, ((struct sNode*)__right_value326)->finalize, ((struct sNode*)__right_value326)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__113) ? __result_obj__113 = come_decrement_ref_count(__result_obj__113, ((struct sNode*)__result_obj__113)->finalize, ((struct sNode*)__result_obj__113)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__113;
    }
    else if(({    (_condtional_value_X655=(define_function_pointer_result_function));    _condtional_value_X655;    })) {
        header_head=info->p;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value327=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_147=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_148=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_149=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value327, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X656=(*info->p==40));        _condtional_value_X656;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1891, "struct list$1sType$ph*"))));
            param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1892, "struct list$1char$ph*"))));
            if(({            (_condtional_value_X657=(*info->p==41));            _condtional_value_X657;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(({                (_condtional_value_X658=((_Bool)1));                _condtional_value_X658;                })) {
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value332=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_150=multiple_assign_var5->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value332, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(({                    (_condtional_value_X659=(!err_150));                    _condtional_value_X659;                    })) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(param_type));
                    static int num_function_pointer_result_var_name_a=0;
                    list$1char$ph_push_back(param_names,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a)));
                    if(({                    (_condtional_value_X660=(xisalpha(*info->p)||*info->p==95));                    _condtional_value_X660;                    })) {
                        (void)((char*)(__right_value334=parse_word(info)));
                        (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(({                    (_condtional_value_X661=(*info->p==44));                    _condtional_value_X661;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(({                    (_condtional_value_X662=(*info->p==41));                    _condtional_value_X662;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(({            (_condtional_value_X663=(*info->p==40));            _condtional_value_X663;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1938, "struct list$1sType$ph*"))));
                param_names2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1939, "struct list$1char$ph*"))));
                if(({                (_condtional_value_X664=(*info->p==41));                _condtional_value_X664;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(({                    (_condtional_value_X665=((_Bool)1));                    _condtional_value_X665;                    })) {
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value339=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_151=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_152=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_153=multiple_assign_var6->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value339, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(({                        (_condtional_value_X666=(!err_153));                        _condtional_value_X666;                        })) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2,(struct sType*)come_increment_ref_count(param_type_151));
                        static int num_function_pointer_result_var_name_b=0;
                        list$1char$ph_push_back(param_names2,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b)));
                        if(({                        (_condtional_value_X667=(xisalpha(*info->p)||*info->p==95));                        _condtional_value_X667;                        })) {
                            (void)((char*)(__right_value341=parse_word(info)));
                            (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        }
                        if(({                        (_condtional_value_X668=(*info->p==44));                        _condtional_value_X668;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(({                        (_condtional_value_X669=(*info->p==41));                        _condtional_value_X669;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            (param_name_152 = come_decrement_ref_count(param_name_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_152 = come_decrement_ref_count(param_name_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                header_tail=info->p;
                result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1981, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj82=result_type2->mResultType,
                result_type2->mResultType=(struct sType*)come_increment_ref_count(result_type_147);
                come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj83=result_type2->mParamTypes,
                result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2));
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj84=result_type2->mParamNames,
                result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2));
                come_call_finalizer(list$1char$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                result_type2->mVarArgs=(_Bool)0;
                result_type2->mStatic=(_Bool)0;
                var_args=(_Bool)0;
                param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1991, "struct list$1char$ph*"))));
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1993, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_148)),(struct sType*)come_increment_ref_count(result_type2),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_148)),(struct sFun*)come_increment_ref_count(fun));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2005, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value356=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2005, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
                result=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer(sFunNode_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__142 = (struct sNode*)come_increment_ref_count(result);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_148 = come_decrement_ref_count(fun_name_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__142;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(sType_finalize, result_type_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_148 = come_decrement_ref_count(fun_name_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X786=(charp_operator_equals(buf,"__attribute__")));    _condtional_value_X786;    })) {
        info->p=head;
        info->sline=sline;
        node_161=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__143 = (struct sNode*)come_increment_ref_count(node_161);
        ((node_161) ? node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__143;
        ((node_161) ? node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X787=(define_function_flag));    _condtional_value_X787;    })) {
        info->p=head;
        info->sline=sline;
        node_162=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__144 = (struct sNode*)come_increment_ref_count(node_162);
        ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__144;
        ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X788=(define_variable));    _condtional_value_X788;    })) {
        info->p=head;
        info->sline=sline;
        node_163=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail=info->p;
        header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2039, "struct buffer*"))));
        buffer_append(header,source_head,source_tail-source_head);
        __result_obj__145 = (struct sNode*)come_increment_ref_count(node_163);
        ((node_163) ? node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__145;
        ((node_163) ? node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->p=head;
    info->sline=sline;
    buf2_164=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__146 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value422=top_level_v98(buf2_164,head,head_sline,info))));
    (buf2_164 = come_decrement_ref_count(buf2_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__right_value422) ? __right_value422 = come_decrement_ref_count(__right_value422, ((struct sNode*)__right_value422)->finalize, ((struct sNode*)__right_value422)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__146) ? __result_obj__146 = come_decrement_ref_count(__result_obj__146, ((struct sNode*)__result_obj__146)->finalize, ((struct sNode*)__result_obj__146)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__146;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X597;
_Bool _condtional_value_X598;
    if(({    (_condtional_value_X597=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X597;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X598=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X598;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
_Bool _condtional_value_X670;
struct sFunNode* __result_obj__114;
void* __right_value357 = (void*)0;
struct sFunNode* result;
_Bool _condtional_value_X671;
_Bool _condtional_value_X672;
void* __right_value358 = (void*)0;
char* __dec_obj85;
_Bool _condtional_value_X673;
_Bool _condtional_value_X674;
void* __right_value414 = (void*)0;
struct sFun* __dec_obj114;
struct sFunNode* __result_obj__141;
    if(({    (_condtional_value_X670=(self==(void*)0));    _condtional_value_X670;    })) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(({    (_condtional_value_X671=(self!=((void*)0)));    _condtional_value_X671;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X672=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X672;    })) {
        __dec_obj85=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X673=(self!=((void*)0)));    _condtional_value_X673;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X674=(self!=((void*)0)&&self->mFun!=((void*)0)));    _condtional_value_X674;    })) {
        __dec_obj114=result->mFun,
        result->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer(sFun_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__141 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

static struct sFun* sFun_clone(struct sFun* self){
_Bool _condtional_value_X675;
struct sFun* __result_obj__115;
void* __right_value359 = (void*)0;
struct sFun* result;
_Bool _condtional_value_X676;
void* __right_value360 = (void*)0;
char* __dec_obj86;
_Bool _condtional_value_X677;
void* __right_value361 = (void*)0;
struct sType* __dec_obj87;
_Bool _condtional_value_X678;
void* __right_value362 = (void*)0;
struct list$1sType$ph* __dec_obj88;
_Bool _condtional_value_X679;
void* __right_value363 = (void*)0;
struct list$1char$ph* __dec_obj89;
_Bool _condtional_value_X680;
void* __right_value364 = (void*)0;
struct list$1char$ph* __dec_obj90;
_Bool _condtional_value_X681;
void* __right_value365 = (void*)0;
struct sType* __dec_obj91;
_Bool _condtional_value_X682;
void* __right_value378 = (void*)0;
struct list$1sVar$ph* __dec_obj99;
_Bool _condtional_value_X697;
void* __right_value405 = (void*)0;
struct sBlock* __dec_obj105;
_Bool _condtional_value_X767;
void* __right_value406 = (void*)0;
char* __dec_obj106;
_Bool _condtional_value_X768;
void* __right_value407 = (void*)0;
char* __dec_obj107;
_Bool _condtional_value_X769;
_Bool _condtional_value_X770;
void* __right_value408 = (void*)0;
struct buffer* __dec_obj108;
_Bool _condtional_value_X771;
void* __right_value409 = (void*)0;
struct buffer* __dec_obj109;
_Bool _condtional_value_X772;
void* __right_value410 = (void*)0;
struct buffer* __dec_obj110;
_Bool _condtional_value_X773;
void* __right_value411 = (void*)0;
struct buffer* __dec_obj111;
_Bool _condtional_value_X774;
_Bool _condtional_value_X775;
_Bool _condtional_value_X776;
_Bool _condtional_value_X777;
_Bool _condtional_value_X778;
_Bool _condtional_value_X779;
_Bool _condtional_value_X780;
_Bool _condtional_value_X781;
_Bool _condtional_value_X782;
void* __right_value412 = (void*)0;
char* __dec_obj112;
_Bool _condtional_value_X783;
void* __right_value413 = (void*)0;
char* __dec_obj113;
_Bool _condtional_value_X784;
_Bool _condtional_value_X785;
struct sFun* __result_obj__140;
    if(({    (_condtional_value_X675=(self==(void*)0));    _condtional_value_X675;    })) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__115;
    }
    result=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(({    (_condtional_value_X676=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X676;    })) {
        __dec_obj86=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X677=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X677;    })) {
        __dec_obj87=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X678=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X678;    })) {
        __dec_obj88=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X679=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X679;    })) {
        __dec_obj89=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X680=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X680;    })) {
        __dec_obj90=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X681=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X681;    })) {
        __dec_obj91=result->mLambdaType,
        result->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X682=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X682;    })) {
        __dec_obj99=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar));
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X697=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X697;    })) {
        __dec_obj105=result->mBlock,
        result->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X767=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X767;    })) {
        __dec_obj106=result->mTextBlock,
        result->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 12, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X768=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X768;    })) {
        __dec_obj107=result->mTextBlockSName,
        result->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 13, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X769=(self!=((void*)0)));    _condtional_value_X769;    })) {
        result->mTextBlockSline=self->mTextBlockSline;
    }
    if(({    (_condtional_value_X770=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X770;    })) {
        __dec_obj108=result->mSource,
        result->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer(buffer_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X771=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X771;    })) {
        __dec_obj109=result->mSourceHead,
        result->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer(buffer_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X772=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X772;    })) {
        __dec_obj110=result->mSourceHead2,
        result->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer(buffer_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X773=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X773;    })) {
        __dec_obj111=result->mSourceDefer,
        result->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer(buffer_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X774=(self!=((void*)0)));    _condtional_value_X774;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X775=(self!=((void*)0)));    _condtional_value_X775;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X776=(self!=((void*)0)));    _condtional_value_X776;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X777=(self!=((void*)0)));    _condtional_value_X777;    })) {
        result->mGenerate=self->mGenerate;
    }
    if(({    (_condtional_value_X778=(self!=((void*)0)));    _condtional_value_X778;    })) {
        result->mExternal=self->mExternal;
    }
    if(({    (_condtional_value_X779=(self!=((void*)0)));    _condtional_value_X779;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X780=(self!=((void*)0)));    _condtional_value_X780;    })) {
        result->mNoResultType=self->mNoResultType;
    }
    if(({    (_condtional_value_X781=(self!=((void*)0)));    _condtional_value_X781;    })) {
        result->mConstFun=self->mConstFun;
    }
    if(({    (_condtional_value_X782=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X782;    })) {
        __dec_obj112=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 27, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X783=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X783;    })) {
        __dec_obj113=result->mFunAttribute,
        result->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 28, "char*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X784=(self!=((void*)0)));    _condtional_value_X784;    })) {
        result->mGenericsFun=self->mGenericsFun;
    }
    if(({    (_condtional_value_X785=(self!=((void*)0)));    _condtional_value_X785;    })) {
        result->mImmutable=self->mImmutable;
    }
    __result_obj__140 = (struct sFun*)come_increment_ref_count(result);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self){
_Bool _condtional_value_X683;
struct list$1sVar$ph* __result_obj__116;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1sVar$ph* result;
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X684;
_Bool _condtional_value_X685;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1sVar$ph* __result_obj__121;
    if(({    (_condtional_value_X683=(self==((void*)0)));    _condtional_value_X683;    })) {
        __result_obj__116 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__116;
    }
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sVar$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X684=(it!=((void*)0)));    _condtional_value_X684;    })) {
        if(({        (_condtional_value_X685=(1));        _condtional_value_X685;        })) {
            list$1sVar$ph_add(result,(struct sVar*)come_increment_ref_count(sVar_clone(it->item)));
        }
        else {
            list$1sVar$ph_add(result,(struct sVar*)come_increment_ref_count(sVar_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__121 = (struct list$1sVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__117 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
_Bool _condtional_value_X686;
void* __right_value368 = (void*)0;
struct list_item$1sVar$ph* litem;
struct sVar* __dec_obj92;
_Bool _condtional_value_X687;
void* __right_value369 = (void*)0;
struct list_item$1sVar$ph* litem_154;
struct sVar* __dec_obj93;
void* __right_value370 = (void*)0;
struct list_item$1sVar$ph* litem_155;
struct sVar* __dec_obj94;
struct list$1sVar$ph* __result_obj__118;
    if(({    (_condtional_value_X686=(self->len==0));    _condtional_value_X686;    })) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value368=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sVar$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj92=litem->item,
        litem->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X687=(self->len==1));    _condtional_value_X687;    })) {
        litem_154=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value369=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sVar$ph*"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        __dec_obj93=litem_154->item,
        litem_154->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value370=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sVar$ph*"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        __dec_obj94=litem_155->item,
        litem_155->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result_obj__118 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct sVar* sVar_clone(struct sVar* self){
_Bool _condtional_value_X688;
struct sVar* __result_obj__119;
void* __right_value371 = (void*)0;
struct sVar* result;
_Bool _condtional_value_X689;
void* __right_value372 = (void*)0;
char* __dec_obj95;
_Bool _condtional_value_X690;
void* __right_value373 = (void*)0;
char* __dec_obj96;
_Bool _condtional_value_X691;
void* __right_value374 = (void*)0;
struct sType* __dec_obj97;
_Bool _condtional_value_X692;
_Bool _condtional_value_X693;
_Bool _condtional_value_X694;
_Bool _condtional_value_X695;
_Bool _condtional_value_X696;
void* __right_value375 = (void*)0;
char* __dec_obj98;
struct sVar* __result_obj__120;
    if(({    (_condtional_value_X688=(self==(void*)0));    _condtional_value_X688;    })) {
        __result_obj__119 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__119;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(({    (_condtional_value_X689=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X689;    })) {
        __dec_obj95=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X690=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X690;    })) {
        __dec_obj96=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X691=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X691;    })) {
        __dec_obj97=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X692=(self!=((void*)0)));    _condtional_value_X692;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_condtional_value_X693=(self!=((void*)0)));    _condtional_value_X693;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X694=(self!=((void*)0)));    _condtional_value_X694;    })) {
        result->mNoFree=self->mNoFree;
    }
    if(({    (_condtional_value_X695=(self!=((void*)0)));    _condtional_value_X695;    })) {
        result->mComma=self->mComma;
    }
    if(({    (_condtional_value_X696=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X696;    })) {
        __dec_obj98=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__120 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
_Bool _condtional_value_X698;
struct sBlock* __result_obj__122;
void* __right_value379 = (void*)0;
struct sBlock* result;
_Bool _condtional_value_X699;
void* __right_value380 = (void*)0;
struct list$1sNode$ph* __dec_obj100;
_Bool _condtional_value_X700;
void* __right_value404 = (void*)0;
struct sVarTable* __dec_obj104;
_Bool _condtional_value_X766;
struct sBlock* __result_obj__139;
    if(({    (_condtional_value_X698=(self==(void*)0));    _condtional_value_X698;    })) {
        __result_obj__122 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__122;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(({    (_condtional_value_X699=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X699;    })) {
        __dec_obj100=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X700=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X700;    })) {
        __dec_obj104=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X766=(self!=((void*)0)));    _condtional_value_X766;    })) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__139 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
_Bool _condtional_value_X701;
struct sVarTable* __result_obj__123;
void* __right_value381 = (void*)0;
struct sVarTable* result;
_Bool _condtional_value_X702;
void* __right_value403 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj103;
_Bool _condtional_value_X764;
_Bool _condtional_value_X765;
struct sVarTable* __result_obj__138;
    if(({    (_condtional_value_X701=(self==(void*)0));    _condtional_value_X701;    })) {
        __result_obj__123 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__123;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(({    (_condtional_value_X702=(self!=((void*)0)&&self->mVars!=((void*)0)));    _condtional_value_X702;    })) {
        __dec_obj103=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X764=(self!=((void*)0)));    _condtional_value_X764;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_condtional_value_X765=(self!=((void*)0)));    _condtional_value_X765;    })) {
        result->mParent=self->mParent;
    }
    __result_obj__138 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X703;
struct map$2char$phsVar$ph* __result_obj__124;
void* __right_value382 = (void*)0;
void* __right_value388 = (void*)0;
struct map$2char$phsVar$ph* result;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1char$ph* __dec_obj102;
char* it;
_Bool _condtional_value_X719;
_Bool _condtional_value_X720;
_Bool _condtional_value_X723;
struct sVar* default_value;
void* __right_value391 = (void*)0;
struct sVar* it2;
_Bool _condtional_value_X729;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
_Bool _condtional_value_X752;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
_Bool _condtional_value_X753;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__137;
default_value = (void*)0;
    if(({    (_condtional_value_X703=(self==((void*)0)));    _condtional_value_X703;    })) {
        __result_obj__124 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__124;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 2003, "struct map$2char$phsVar$ph*"))));
    __dec_obj102=result->key_list,
    result->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2005, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    ({    (_condtional_value_X719=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X719;    });    ({    (_condtional_value_X720=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X720;    });    ({    (_condtional_value_X723=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X723;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(({        (_condtional_value_X729=(1&&1));        _condtional_value_X729;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 2014, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_condtional_value_X752=(1));        _condtional_value_X752;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 2017, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_condtional_value_X753=(1));        _condtional_value_X753;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__137 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X704;
_Bool _condtional_value_X705;
_Bool _condtional_value_X706;
_Bool _condtional_value_X707;
_Bool _condtional_value_X708;
int i_156;
_Bool _condtional_value_X709;
_Bool _condtional_value_X710;
_Bool _condtional_value_X711;
_Bool _condtional_value_X712;
_Bool _condtional_value_X713;
    for(    ({    (_condtional_value_X704=(i=0));    _condtional_value_X704;    });    ({    (_condtional_value_X705=(i<self->size));    _condtional_value_X705;    });    ({    (_condtional_value_X706=(i++));    _condtional_value_X706;    })    ){
        if(({        (_condtional_value_X707=(self->item_existance[i]));        _condtional_value_X707;        })) {
            if(({            (_condtional_value_X708=(1));            _condtional_value_X708;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X709=(i_156=0));    _condtional_value_X709;    });    ({    (_condtional_value_X710=(i_156<self->size));    _condtional_value_X710;    });    ({    (_condtional_value_X711=(i_156++));    _condtional_value_X711;    })    ){
        if(({        (_condtional_value_X712=(self->item_existance[i_156]));        _condtional_value_X712;        })) {
            if(({            (_condtional_value_X713=(1));            _condtional_value_X713;            })) {
                (self->keys[i_156] = come_decrement_ref_count(self->keys[i_156], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
int i;
_Bool _condtional_value_X714;
_Bool _condtional_value_X715;
_Bool _condtional_value_X716;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1char$ph* __dec_obj101;
struct map$2char$phsVar$ph* __result_obj__125;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value383=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1932, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value384=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1933, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value385=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1934, "_Bool*"))));
    for(    ({    (_condtional_value_X714=(i=0));    _condtional_value_X714;    });    ({    (_condtional_value_X715=(i<128));    _condtional_value_X715;    });    ({    (_condtional_value_X716=(i++));    _condtional_value_X716;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj101=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__125 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X717;
char* result;
char* __result_obj__126;
_Bool _condtional_value_X718;
char* __result_obj__127;
char* result_157;
char* __result_obj__128;
result = (void*)0;
result_157 = (void*)0;
    if(({    (_condtional_value_X717=(self==((void*)0)));    _condtional_value_X717;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__126 = result;
        return __result_obj__126;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X718=(self->key_list->it));    _condtional_value_X718;    })) {
        __result_obj__127 = self->key_list->it->item;
        return __result_obj__127;
    }
    memset(&result_157,0,sizeof(char*));
    __result_obj__128 = result_157;
    return __result_obj__128;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X721;
char* result;
char* __result_obj__129;
_Bool _condtional_value_X722;
char* __result_obj__130;
char* result_158;
char* __result_obj__131;
result = (void*)0;
result_158 = (void*)0;
    if(({    (_condtional_value_X721=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X721;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__129 = result;
        return __result_obj__129;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X722=(self->key_list->it));    _condtional_value_X722;    })) {
        __result_obj__130 = self->key_list->it->item;
        return __result_obj__130;
    }
    memset(&result_158,0,sizeof(char*));
    __result_obj__131 = result_158;
    return __result_obj__131;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X724;
_Bool _condtional_value_X725;
_Bool _condtional_value_X726;
struct sVar* __result_obj__132;
_Bool _condtional_value_X727;
_Bool _condtional_value_X728;
struct sVar* __result_obj__133;
struct sVar* __result_obj__134;
struct sVar* __result_obj__135;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X724=((_Bool)1));    _condtional_value_X724;    })) {
        if(({        (_condtional_value_X725=(self->item_existance[it]));        _condtional_value_X725;        })) {
            if(({            (_condtional_value_X726=(string_equals(self->keys[it],key)));            _condtional_value_X726;            })) {
                __result_obj__132 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__132;
            }
            it++;
            if(({            (_condtional_value_X727=(it>=self->size));            _condtional_value_X727;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X728=(it==hash));            _condtional_value_X728;            })) {
                __result_obj__133 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__133;
            }
        }
        else {
            __result_obj__134 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__134;
        }
    }
    __result_obj__135 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
_Bool _condtional_value_X730;
unsigned int hash;
int it;
_Bool _condtional_value_X738;
_Bool _condtional_value_X739;
_Bool _condtional_value_X740;
_Bool _condtional_value_X741;
_Bool _condtional_value_X742;
_Bool _condtional_value_X743;
_Bool _condtional_value_X744;
_Bool _condtional_value_X745;
_Bool _condtional_value_X746;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X747;
_Bool _condtional_value_X748;
_Bool _condtional_value_X749;
_Bool _condtional_value_X750;
_Bool _condtional_value_X751;
struct map$2char$phsVar$ph* __result_obj__136;
    if(({    (_condtional_value_X730=(self->len*2>=self->size));    _condtional_value_X730;    })) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X738=((_Bool)1));    _condtional_value_X738;    })) {
        if(({        (_condtional_value_X739=(self->item_existance[it]));        _condtional_value_X739;        })) {
            if(({            (_condtional_value_X740=(string_equals(self->keys[it],key)));            _condtional_value_X740;            })) {
                if(({                (_condtional_value_X741=(1));                _condtional_value_X741;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X742=(1));                _condtional_value_X742;                })) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X743=(it>=self->size));            _condtional_value_X743;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X744=(it==hash));            _condtional_value_X744;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X745=(1));            _condtional_value_X745;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X746=(1));            _condtional_value_X746;            })) {
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
    for(    ({    (_condtional_value_X747=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X747;    });    ({    (_condtional_value_X748=(!list$1char$ph_end(self->key_list)));    _condtional_value_X748;    });    ({    (_condtional_value_X749=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X749;    })    ){
        if(({        (_condtional_value_X750=(string_equals(it2,key)));        _condtional_value_X750;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X751=(!same_key_exist));    _condtional_value_X751;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__136 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value392 = (void*)0;
char** keys;
void* __right_value393 = (void*)0;
struct sVar** items;
void* __right_value394 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X731;
_Bool _condtional_value_X732;
_Bool _condtional_value_X733;
struct sVar* default_value;
void* __right_value395 = (void*)0;
struct sVar* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X734;
_Bool _condtional_value_X735;
_Bool _condtional_value_X736;
_Bool _condtional_value_X737;
struct sVar* default_value_159;
void* __right_value396 = (void*)0;
default_value = (void*)0;
default_value_159 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value392=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value393=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sVar**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value394=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X731=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X731;    });    ({    (_condtional_value_X732=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X732;    });    ({    (_condtional_value_X733=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X733;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=((struct sVar*)(__right_value395=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value395, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X734=((_Bool)1));        _condtional_value_X734;        })) {
            if(({            (_condtional_value_X735=(item_existance[n]));            _condtional_value_X735;            })) {
                n++;
                if(({                (_condtional_value_X736=(n>=size));                _condtional_value_X736;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X737=(n==hash));                _condtional_value_X737;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sVar*)(__right_value396=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_159))));
                come_call_finalizer(sVar_finalize, __right_value396, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X754;
_Bool _condtional_value_X755;
_Bool _condtional_value_X756;
_Bool _condtional_value_X757;
_Bool _condtional_value_X758;
int i_160;
_Bool _condtional_value_X759;
_Bool _condtional_value_X760;
_Bool _condtional_value_X761;
_Bool _condtional_value_X762;
_Bool _condtional_value_X763;
    for(    ({    (_condtional_value_X754=(i=0));    _condtional_value_X754;    });    ({    (_condtional_value_X755=(i<self->size));    _condtional_value_X755;    });    ({    (_condtional_value_X756=(i++));    _condtional_value_X756;    })    ){
        if(({        (_condtional_value_X757=(self->item_existance[i]));        _condtional_value_X757;        })) {
            if(({            (_condtional_value_X758=(1));            _condtional_value_X758;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X759=(i_160=0));    _condtional_value_X759;    });    ({    (_condtional_value_X760=(i_160<self->size));    _condtional_value_X760;    });    ({    (_condtional_value_X761=(i_160++));    _condtional_value_X761;    })    ){
        if(({        (_condtional_value_X762=(self->item_existance[i_160]));        _condtional_value_X762;        })) {
            if(({            (_condtional_value_X763=(1));            _condtional_value_X763;            })) {
                (self->keys[i_160] = come_decrement_ref_count(self->keys[i_160], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun;
int caller_line;
char* caller_sname;
char* last_code;
char* __dec_obj115;
char* last_code2;
char* __dec_obj116;
void* __right_value423 = (void*)0;
char* sname_top;
int sline_top;
_Bool _condtional_value_X789;
struct sType* __dec_obj117;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sFun* funX;
_Bool _condtional_value_X800;
void* __right_value427 = (void*)0;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__156;
void* __right_value430 = (void*)0;
struct sType* result_type;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X804;
_Bool _condtional_value_X805;
_Bool _condtional_value_X808;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sType* param_type;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value437 = (void*)0;
struct list$1char$ph* param_default_parametors;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source;
void* __right_value438 = (void*)0;
struct buffer* __dec_obj122;
struct sType* generics_type_saved;
_Bool _condtional_value_X809;
struct sType* __dec_obj123;
void* __right_value439 = (void*)0;
struct sType* __dec_obj124;
struct list$1char$ph* method_generics_type_names;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1char$ph* __dec_obj125;
struct list$1char$ph* o2_saved_167;
char* it_168;
_Bool _condtional_value_X810;
_Bool _condtional_value_X811;
_Bool _condtional_value_X812;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1char$ph* __dec_obj126;
char* __dec_obj127;
void* __right_value444 = (void*)0;
struct sBlock* block;
struct buffer* __dec_obj128;
char* __dec_obj129;
_Bool const_fun;
_Bool var_args;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sFun* fun;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value452 = (void*)0;
struct sNode* node;
_Bool in_generics_fun;
_Bool Value;
_Bool _condtional_value_X813;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__163;
struct sType* __dec_obj130;
struct list$1char$ph* __dec_obj131;
void* __right_value456 = (void*)0;
char* __dec_obj132;
char* __dec_obj133;
char* __dec_obj134;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__164;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj115=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj116=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    if(({    (_condtional_value_X789=(generics_type->mNoSolvedGenericsType));    _condtional_value_X789;    })) {
        __dec_obj117=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    funX=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value425=__builtin_string(fun_name)))));
    (__right_value424 = come_decrement_ref_count(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value425 = come_decrement_ref_count(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    if(({    (_condtional_value_X800=(funX));    _condtional_value_X800;    })) {
        __dec_obj118=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top;
        __dec_obj119=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code);
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj120=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun;
        info->caller_line=caller_line;
        info->caller_sname=caller_sname;
        __result_obj__156 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value429=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2085, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value429, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__156;
    }
    result_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(generics_fun->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2090, "struct list$1sType$ph*"))));
    for(    ({    (_condtional_value_X804=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it=list$1sType$ph_begin((o2_saved))));    _condtional_value_X804;    });    ({    (_condtional_value_X805=(!list$1sType$ph_end((o2_saved))));    _condtional_value_X805;    });    ({    (_condtional_value_X808=(it=list$1sType$ph_next((o2_saved))));    _condtional_value_X808;    })    ){
        param_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it)),(struct sType*)come_increment_ref_count(generics_type),info));
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj122=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved=(struct sType*)come_increment_ref_count(info->generics_type);
    if(({    (_condtional_value_X809=(generics_type->mNoSolvedGenericsType));    _condtional_value_X809;    })) {
        __dec_obj123=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj124=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj125=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2118, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    ({    (_condtional_value_X810=(o2_saved_167=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_168=list$1char$ph_begin((o2_saved_167))));    _condtional_value_X810;    });    ({    (_condtional_value_X811=(!list$1char$ph_end((o2_saved_167))));    _condtional_value_X811;    });    ({    (_condtional_value_X812=(it_168=list$1char$ph_next((o2_saved_167))));    _condtional_value_X812;    })    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_168, "05function.c", 2120, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj126=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj127=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj128=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj128,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj129=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    const_fun=generics_fun->mConstFun;
    var_args=generics_fun->mVarArgs;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2144, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
    fun->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2153, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value451=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2153, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
    node=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunNode_finalize, __right_value451, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    in_generics_fun=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value=node_compile(node,info);
    if(({    (_condtional_value_X813=(!Value));    _condtional_value_X813;    })) {
        __result_obj__163 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value455=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2158, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value455, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__163;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun;
    __dec_obj130=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved);
    come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj131=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj132=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top;
    __dec_obj133=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj134=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    __result_obj__164 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value459=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2177, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value459, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__164;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X790;
_Bool _condtional_value_X791;
_Bool _condtional_value_X792;
struct sFun* __result_obj__147;
_Bool _condtional_value_X793;
_Bool _condtional_value_X794;
struct sFun* __result_obj__148;
struct sFun* __result_obj__149;
struct sFun* __result_obj__150;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X790=((_Bool)1));    _condtional_value_X790;    })) {
        if(({        (_condtional_value_X791=(self->item_existance[it]));        _condtional_value_X791;        })) {
            if(({            (_condtional_value_X792=(string_equals(self->keys[it],key)));            _condtional_value_X792;            })) {
                __result_obj__147 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__147;
            }
            it++;
            if(({            (_condtional_value_X793=(it>=self->size));            _condtional_value_X793;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X794=(it==hash));            _condtional_value_X794;            })) {
                __result_obj__148 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__148;
            }
        }
        else {
            __result_obj__149 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__149;
        }
    }
    __result_obj__150 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X795;
_Bool _condtional_value_X796;
_Bool _condtional_value_X797;
struct sFun* __result_obj__151;
_Bool _condtional_value_X798;
_Bool _condtional_value_X799;
struct sFun* __result_obj__152;
struct sFun* __result_obj__153;
struct sFun* __result_obj__154;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X795=((_Bool)1));    _condtional_value_X795;    })) {
        if(({        (_condtional_value_X796=(self->item_existance[it]));        _condtional_value_X796;        })) {
            if(({            (_condtional_value_X797=(string_equals(self->keys[it],key)));            _condtional_value_X797;            })) {
                __result_obj__151 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__151;
            }
            it++;
            if(({            (_condtional_value_X798=(it>=self->size));            _condtional_value_X798;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X799=(it==hash));            _condtional_value_X799;            })) {
                __result_obj__152 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__152;
            }
        }
        else {
            __result_obj__153 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__153;
        }
    }
    __result_obj__154 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__154;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj121;
struct tuple2$2char$phbool$* __result_obj__155;
    __dec_obj121=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__155 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__155;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
_Bool _condtional_value_X801;
    if(({    (_condtional_value_X801=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X801;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
_Bool _condtional_value_X802;
struct sType* result;
struct sType* __result_obj__157;
_Bool _condtional_value_X803;
struct sType* __result_obj__158;
struct sType* result_165;
struct sType* __result_obj__159;
result = (void*)0;
result_165 = (void*)0;
    if(({    (_condtional_value_X802=(self==((void*)0)));    _condtional_value_X802;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__157 = result;
        return __result_obj__157;
    }
    self->it=self->head;
    if(({    (_condtional_value_X803=(self->it));    _condtional_value_X803;    })) {
        __result_obj__158 = self->it->item;
        return __result_obj__158;
    }
    memset(&result_165,0,sizeof(struct sType*));
    __result_obj__159 = result_165;
    return __result_obj__159;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
_Bool _condtional_value_X806;
struct sType* result;
struct sType* __result_obj__160;
_Bool _condtional_value_X807;
struct sType* __result_obj__161;
struct sType* result_166;
struct sType* __result_obj__162;
result = (void*)0;
result_166 = (void*)0;
    if(({    (_condtional_value_X806=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X806;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__160 = result;
        return __result_obj__160;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X807=(self->it));    _condtional_value_X807;    })) {
        __result_obj__161 = self->it->item;
        return __result_obj__161;
    }
    memset(&result_166,0,sizeof(struct sType*));
    __result_obj__162 = result_166;
    return __result_obj__162;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun;
int caller_line;
char* caller_sname;
char* last_code;
char* __dec_obj135;
char* last_code2;
char* __dec_obj136;
void* __right_value460 = (void*)0;
char* sname_top;
int sline_top;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sFun* funX;
_Bool _condtional_value_X814;
void* __right_value464 = (void*)0;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
_Bool __result_obj__165;
void* __right_value465 = (void*)0;
struct sType* result_type;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X815;
_Bool _condtional_value_X816;
_Bool _condtional_value_X817;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* param_type;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value472 = (void*)0;
struct list$1char$ph* param_default_parametors;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source;
void* __right_value473 = (void*)0;
struct buffer* __dec_obj140;
struct list$1char$ph* method_generics_type_names;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1char$ph* __dec_obj141;
struct list$1char$ph* o2_saved_169;
char* it_170;
_Bool _condtional_value_X818;
_Bool _condtional_value_X819;
_Bool _condtional_value_X820;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct list$1char$ph* __dec_obj142;
char* __dec_obj143;
void* __right_value478 = (void*)0;
struct sBlock* block;
struct buffer* __dec_obj144;
char* __dec_obj145;
_Bool var_args;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sFun* fun;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value487 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X821;
_Bool __result_obj__166;
struct list$1char$ph* __dec_obj146;
void* __right_value488 = (void*)0;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
_Bool __result_obj__167;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj135=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj136=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    funX=((struct sFun*)(__right_value463=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value462=__builtin_string(fun_name))))));
    (__right_value461 = come_decrement_ref_count(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value462 = come_decrement_ref_count(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value463, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X814=(funX));    _condtional_value_X814;    })) {
        __dec_obj137=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top;
        __dec_obj138=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj139=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun;
        info->caller_line=caller_line;
        info->caller_sname=caller_sname;
        __result_obj__165 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    result_type=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2213, "struct list$1sType$ph*"))));
    for(    ({    (_condtional_value_X815=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it=list$1sType$ph_begin((o2_saved))));    _condtional_value_X815;    });    ({    (_condtional_value_X816=(!list$1sType$ph_end((o2_saved))));    _condtional_value_X816;    });    ({    (_condtional_value_X817=(it=list$1sType$ph_next((o2_saved))));    _condtional_value_X817;    })    ){
        param_type=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value468=sType_clone(it))),info));
        come_call_finalizer(sType_finalize, __right_value468, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj140=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj141=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2235, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    ({    (_condtional_value_X818=(o2_saved_169=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_170=list$1char$ph_begin((o2_saved_169))));    _condtional_value_X818;    });    ({    (_condtional_value_X819=(!list$1char$ph_end((o2_saved_169))));    _condtional_value_X819;    });    ({    (_condtional_value_X820=(it_170=list$1char$ph_next((o2_saved_169))));    _condtional_value_X820;    })    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_170, "05function.c", 2237, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj142=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj142,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj143=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj144=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj145=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    var_args=generics_fun->mVarArgs;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2259, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types)),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2267, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value486=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2267, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
    node=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunNode_finalize, __right_value486, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value=node_compile(node,info);
    if(({    (_condtional_value_X821=(!Value));    _condtional_value_X821;    })) {
        __result_obj__166 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
    }
    else {
    }
    __dec_obj146=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj146,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj147=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top;
    __dec_obj148=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj149=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    __result_obj__167 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__167;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head;
char* source_head;
void* __right_value489 = (void*)0;
char* attribute;
struct sType* result_type;
char* var_name;
_Bool constructor_;
_Bool _condtional_value_X822;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj150;
void* __right_value492 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* result_type2=0;
char* var_name2=0;
_Bool err=0;
struct sType* __dec_obj151;
char* __dec_obj152;
_Bool _condtional_value_X823;
_Bool method_definition;
char* p;
int sline;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct buffer* buf2;
_Bool _condtional_value_X824;
_Bool _condtional_value_X825;
_Bool _condtional_value_X826;
_Bool _condtional_value_X827;
_Bool _condtional_value_X828;
char* fun_name;
char* base_fun_name;
struct sType* obj_type2;
_Bool _condtional_value_X829;
void* __right_value495 = (void*)0;
char* __dec_obj153;
void* __right_value496 = (void*)0;
char* __dec_obj154;
void* __right_value497 = (void*)0;
struct sType* __dec_obj155;
_Bool _condtional_value_X830;
void* __right_value498 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* obj_type=0;
char* name=0;
_Bool err_171=0;
_Bool _condtional_value_X831;
void* __right_value499 = (void*)0;
char* __dec_obj156;
void* __right_value500 = (void*)0;
char* __dec_obj157;
void* __right_value501 = (void*)0;
struct sType* __dec_obj158;
_Bool _condtional_value_X832;
void* __right_value502 = (void*)0;
char* __dec_obj159;
void* __right_value503 = (void*)0;
char* __dec_obj160;
void* __right_value504 = (void*)0;
struct sType* __dec_obj161;
_Bool _condtional_value_X833;
void* __right_value505 = (void*)0;
char* __dec_obj162;
void* __right_value506 = (void*)0;
char* __dec_obj163;
void* __right_value507 = (void*)0;
struct sType* __dec_obj164;
void* __right_value508 = (void*)0;
char* __dec_obj165;
void* __right_value509 = (void*)0;
char* __dec_obj166;
_Bool _condtional_value_X834;
void* __right_value510 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var9 = (void*)0;
struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
char* header_tail;
_Bool _condtional_value_X838;
_Bool _condtional_value_X839;
_Bool _condtional_value_X840;
_Bool _condtional_value_X842;
void* __right_value511 = (void*)0;
_Bool const_fun;
int version;
_Bool _condtional_value_X843;
int n;
_Bool _condtional_value_X844;
void* __right_value512 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_fun=0;
char* fun_attribute=0;
_Bool _condtional_value_X845;
void* __right_value513 = (void*)0;
char* __dec_obj167;
_Bool in_top_level;
_Bool _condtional_value_X846;
void* __right_value514 = (void*)0;
struct sBlock* block;
void* __right_value515 = (void*)0;
char* fun_name_172;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sFun* fun;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sFun* fun2;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value529 = (void*)0;
struct sNode* __result_obj__170;
_Bool _condtional_value_X852;
void* __right_value530 = (void*)0;
char* none_generics_name;
void* __right_value531 = (void*)0;
char* generics_sname;
int generics_sline;
void* __right_value532 = (void*)0;
char* block_173;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sGenericsFun* fun_174;
void* __right_value539 = (void*)0;
char* fun_name3;
void* __right_value545 = (void*)0;
struct sNode* __result_obj__182;
_Bool _condtional_value_X894;
void* __right_value546 = (void*)0;
char* generics_sname_178;
int generics_sline_179;
void* __right_value547 = (void*)0;
char* block_180;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sGenericsFun* fun_181;
_Bool _condtional_value_X895;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* __result_obj__183;
_Bool _condtional_value_X896;
char* source_tail;
_Bool _condtional_value_X897;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
char* new_fun_name;
void* __right_value558 = (void*)0;
char* __dec_obj169;
_Bool static_fun;
_Bool _condtional_value_X898;
_Bool inline_fun;
_Bool _condtional_value_X899;
_Bool uniq_fun;
_Bool _condtional_value_X900;
_Bool _condtional_value_X901;
_Bool _condtional_value_X902;
_Bool _condtional_value_X903;
void* __right_value559 = (void*)0;
char* generics_sname_182;
int generics_sline_183;
void* __right_value560 = (void*)0;
char* block_184;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sFun* fun_185;
_Bool _condtional_value_X904;
_Bool _condtional_value_X905;
void* __right_value564 = (void*)0;
char* header;
void* __right_value565 = (void*)0;
char* id;
_Bool _condtional_value_X906;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value572 = (void*)0;
struct sNode* __result_obj__184;
void* __right_value573 = (void*)0;
struct sBlock* block_186;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sFun* fun_187;
_Bool _condtional_value_X907;
_Bool _condtional_value_X908;
void* __right_value578 = (void*)0;
char* header_188;
void* __right_value579 = (void*)0;
char* id_189;
_Bool _condtional_value_X909;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value584 = (void*)0;
struct sNode* __result_obj__185;
_Bool _condtional_value_X910;
_Bool _condtional_value_X911;
void* __right_value585 = (void*)0;
char* new_fun_name_190;
void* __right_value586 = (void*)0;
char* __dec_obj170;
_Bool _condtional_value_X912;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sFun* fun_191;
void* __right_value590 = (void*)0;
_Bool _condtional_value_X913;
_Bool _condtional_value_X914;
void* __right_value591 = (void*)0;
char* header_192;
void* __right_value592 = (void*)0;
char* id_193;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value595 = (void*)0;
struct sNode* __result_obj__186;
void* __right_value596 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun_194=0;
char* fun_attribute2=0;
_Bool _condtional_value_X915;
void* __right_value597 = (void*)0;
char* __dec_obj171;
void* __right_value598 = (void*)0;
char* __dec_obj172;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sFun* fun_195;
void* __right_value602 = (void*)0;
_Bool _condtional_value_X916;
_Bool _condtional_value_X917;
void* __right_value603 = (void*)0;
char* header_196;
void* __right_value604 = (void*)0;
char* id_197;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value607 = (void*)0;
struct sNode* __result_obj__187;
struct sNode* __result_obj__188;
fun_name = (void*)0;
    header_head=info->p;
    source_head=info->p;
    attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type=((void*)0);
    var_name=((void*)0);
    constructor_=(_Bool)0;
    if(({    (_condtional_value_X822=(info->in_class&&memcmp(info->p,"new(",4)==0));    _condtional_value_X822;    })) {
        ((char*)(__right_value490=parse_word(info)));
        (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        __dec_obj150=result_type,
        result_type=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type->mHeap=(_Bool)1;
        constructor_=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value492=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value492, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj151=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj152=var_name,
        var_name=(char*)come_increment_ref_count(var_name2);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(({        (_condtional_value_X823=(!err));        _condtional_value_X823;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    method_definition=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        buf2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2327, "struct buffer*"))));
        while(({        (_condtional_value_X824=(xisalnum(*info->p)||*info->p==95));        _condtional_value_X824;        })) {
            buffer_append_char(buf2,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(({        (_condtional_value_X825=(*info->p==42));        _condtional_value_X825;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(({        (_condtional_value_X826=(*info->p==91&&*(info->p+1)==93));        _condtional_value_X826;        })) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(({        (_condtional_value_X827=(*info->p==37));        _condtional_value_X827;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(({        (_condtional_value_X828=(buffer_length(buf2)>0&&*info->p==58&&*(info->p+1)==58));        _condtional_value_X828;        })) {
            method_definition=(_Bool)1;
        }
        info->p=p;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    base_fun_name=((void*)0);
    obj_type2=((void*)0);
    if(({    (_condtional_value_X829=(constructor_));    _condtional_value_X829;    })) {
        __dec_obj153=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj154=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj155=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X830=(method_definition));    _condtional_value_X830;    })) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value498=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_171=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value498, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X831=(!err_171));        _condtional_value_X831;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj156=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj157=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj158=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(obj_type));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X832=(info->impl_type));    _condtional_value_X832;    })) {
        __dec_obj159=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj160=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj161=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X833=(info->class_type));    _condtional_value_X833;    })) {
        __dec_obj162=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj163=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj164=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj165=fun_name,
        fun_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj166=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X834=(info->in_class&&charp_operator_equals(base_fun_name,"initialize")));    _condtional_value_X834;    })) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value510=parse_params(info,constructor_)));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args=multiple_assign_var9->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value510, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    header_tail=info->p;
    if(({    (_condtional_value_X838=(info->in_class&&charp_operator_equals(base_fun_name,"initialize")));    _condtional_value_X838;    })) {
        info->in_class=(_Bool)1;
    }
    if(({    (_condtional_value_X839=(result_type->mImmutable));    _condtional_value_X839;    })) {
        if(({        (_condtional_value_X840=(method_definition||info->impl_type||info->class_type));        _condtional_value_X840;        })) {
            if(({            (_condtional_value_X842=(list$1sType$ph_length(param_types)>0));            _condtional_value_X842;            })) {
                ((struct sType*)(__right_value511=list$1sType$ph_operator_load_element(param_types,0)))->mImmutable=(_Bool)1;
                come_call_finalizer(sType_finalize, __right_value511, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    const_fun=(_Bool)0;
    version=0;
    if(({    (_condtional_value_X843=(parsecmp("version",info)));    _condtional_value_X843;    })) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n=0;
        while(({        (_condtional_value_X844=(xisdigit(*info->p)));        _condtional_value_X844;        })) {
            n=n*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version=n;
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value512=parse_function_attribute(info)));
    asm_fun=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    fun_attribute=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value512, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X845=(string_operator_not_equals(asm_fun,"")));    _condtional_value_X845;    })) {
        __dec_obj167=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    in_top_level=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(({    (_condtional_value_X846=(charp_operator_equals(base_fun_name,"lambda")));    _condtional_value_X846;    })) {
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num=0;
        lambda_num++;
        fun_name_172=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num));
        result_type->mInline=(_Bool)0;
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2456, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_172)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value522=__builtin_string(fun_name_172)))));
        (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_172)),(struct sFun*)come_increment_ref_count(fun));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2466, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value526=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2466, "struct sLambdaNode*")),fun,info))));
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
        __result_obj__170 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value529=_inf_value5)));
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_172 = come_decrement_ref_count(fun_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sLambdaNode_finalize, __right_value526, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value529) ? __right_value529 = come_decrement_ref_count(__right_value529, ((struct sNode*)__right_value529)->finalize, ((struct sNode*)__right_value529)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__170) ? __result_obj__170 = come_decrement_ref_count(__result_obj__170, ((struct sNode*)__result_obj__170)->finalize, ((struct sNode*)__result_obj__170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__170;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_172 = come_decrement_ref_count(fun_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X852=(info->impl_type&&list$1char$ph_length(info->generics_type_names)>0));    _condtional_value_X852;    })) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline=info->sline;
        block_173=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_174=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2476, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value534=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value535=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args,(char*)come_increment_ref_count(block_173),info,(char*)come_increment_ref_count(__builtin_string(generics_sname)),generics_sline,const_fun));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value534, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value535, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,base_fun_name));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3)),(struct sGenericsFun*)come_increment_ref_count(fun_174));
        __result_obj__182 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_173 = come_decrement_ref_count(block_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__182;
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_173 = come_decrement_ref_count(block_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X894=(list$1char$ph_length(info->method_generics_type_names)>0));    _condtional_value_X894;    })) {
        generics_sname_178=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_179=info->sline;
        block_180=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_181=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2490, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value549=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value550=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args,(char*)come_increment_ref_count(block_180),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_178)),generics_sline_179,const_fun));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value549, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value550, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X895=(method_definition));        _condtional_value_X895;        })) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sGenericsFun*)come_increment_ref_count(fun_181));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name)),(struct sGenericsFun*)come_increment_ref_count(fun_181));
        }
        __result_obj__183 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_178 = come_decrement_ref_count(generics_sname_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_180 = come_decrement_ref_count(block_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__183;
        (generics_sname_178 = come_decrement_ref_count(generics_sname_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_180 = come_decrement_ref_count(block_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(({    (_condtional_value_X896=(*info->p==123));    _condtional_value_X896;    })) {
        source_tail=info->p-1;
        if(({        (_condtional_value_X897=(version>0));        _condtional_value_X897;        })) {
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value556=__builtin_string(fun_name))),version));
            (__right_value556 = come_decrement_ref_count(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj169=fun_name,
            fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        static_fun=(_Bool)0;
        if(({        (_condtional_value_X898=(result_type->mStatic));        _condtional_value_X898;        })) {
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            static_fun=(_Bool)1;
        }
        inline_fun=(_Bool)0;
        if(({        (_condtional_value_X899=(result_type->mInline));        _condtional_value_X899;        })) {
            result_type->mInline=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            inline_fun=(_Bool)1;
        }
        uniq_fun=(_Bool)0;
        if(({        (_condtional_value_X900=(result_type->mUniq));        _condtional_value_X900;        })) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
            uniq_fun=(_Bool)1;
        }
        if(({        (_condtional_value_X901=(result_type->mUniq));        _condtional_value_X901;        })) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
        }
        if(({        (_condtional_value_X902=(info->defining_class&&info->defining_class->mUniq));        _condtional_value_X902;        })) {
            uniq_fun=(_Bool)1;
        }
        if(({        (_condtional_value_X903=(uniq_fun));        _condtional_value_X903;        })) {
            generics_sname_182=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_183=info->sline;
            block_184=(char*)come_increment_ref_count(skip_block(info,constructor_));
            fun_185=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2545, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,((void*)0),static_fun,info,inline_fun,uniq_fun,(_Bool)0,(char*)come_increment_ref_count(attribute),(char*)come_increment_ref_count(fun_attribute),const_fun,(char*)come_increment_ref_count(block_184),(char*)come_increment_ref_count(generics_sname_182),generics_sline_183,(_Bool)0));
            if(({            (_condtional_value_X904=(info->output_header_file));            _condtional_value_X904;            })) {
                if(({                (_condtional_value_X905=(!result_type->mStatic&&!info->no_output_come_code));                _condtional_value_X905;                })) {
                    header=(char*)come_increment_ref_count(make_come_header_function(fun_185,(char*)come_increment_ref_count(base_fun_name),(struct sType*)come_increment_ref_count(obj_type2),version,info));
                    id=(char*)come_increment_ref_count(__builtin_string(fun_name));
                    add_come_code_at_come_header(info,id,"%s",header);
                    (header = come_decrement_ref_count(header, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(({            (_condtional_value_X906=(info->in_class));            _condtional_value_X906;            })) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_185));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_185));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_185));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_185));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2573, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value571=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2573, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_185),info))));
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
            __result_obj__184 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value572=_inf_value6)));
            (generics_sname_182 = come_decrement_ref_count(generics_sname_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_184 = come_decrement_ref_count(block_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value571, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value572) ? __right_value572 = come_decrement_ref_count(__right_value572, ((struct sNode*)__right_value572)->finalize, ((struct sNode*)__right_value572)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__184;
            (generics_sname_182 = come_decrement_ref_count(generics_sname_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_184 = come_decrement_ref_count(block_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            block_186=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor_,(_Bool)1));
            fun_187=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2578, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_186)),static_fun,info,inline_fun,uniq_fun,(_Bool)0,(char*)come_increment_ref_count(attribute),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            if(({            (_condtional_value_X907=(info->output_header_file));            _condtional_value_X907;            })) {
                if(({                (_condtional_value_X908=(!result_type->mStatic&&!info->no_output_come_code));                _condtional_value_X908;                })) {
                    header_188=(char*)come_increment_ref_count(make_come_header_function(fun_187,(char*)come_increment_ref_count(base_fun_name),(struct sType*)come_increment_ref_count(obj_type2),version,info));
                    id_189=(char*)come_increment_ref_count(__builtin_string(fun_name));
                    add_come_code_at_come_header(info,id_189,"%s",header_188);
                    (header_188 = come_decrement_ref_count(header_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_189 = come_decrement_ref_count(id_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(({            (_condtional_value_X909=(info->in_class));            _condtional_value_X909;            })) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_187));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_187));
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2604, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2604, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_187),info))));
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
            __result_obj__185 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value584=_inf_value7)));
            come_call_finalizer(sBlock_finalize, block_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value583, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value584) ? __right_value584 = come_decrement_ref_count(__right_value584, ((struct sNode*)__right_value584)->finalize, ((struct sNode*)__right_value584)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__185;
            come_call_finalizer(sBlock_finalize, block_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else if(({    (_condtional_value_X910=(xisalpha(*info->p)||*info->p==95||*info->p==59));    _condtional_value_X910;    })) {
        if(({        (_condtional_value_X911=(version>0));        _condtional_value_X911;        })) {
            new_fun_name_190=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name,version));
            __dec_obj170=fun_name,
            fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_190));
            __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_190 = come_decrement_ref_count(new_fun_name_190, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X912=(*info->p==59));        _condtional_value_X912;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            fun_191=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2621, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_191));
            if(({            (_condtional_value_X913=(info->output_header_file));            _condtional_value_X913;            })) {
                if(({                (_condtional_value_X914=(!result_type->mStatic&&!info->no_output_come_code));                _condtional_value_X914;                })) {
                    header_192=(char*)come_increment_ref_count(make_come_header_function(fun_191,(char*)come_increment_ref_count(base_fun_name),(struct sType*)come_increment_ref_count(obj_type2),version,info));
                    id_193=(char*)come_increment_ref_count(__builtin_string(fun_name));
                    add_come_code_at_come_header(info,id_193,"%s",header_192);
                    (header_192 = come_decrement_ref_count(header_192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_193 = come_decrement_ref_count(id_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2641, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value594=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2641, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_191),info))));
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
            __result_obj__186 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value595=_inf_value8)));
            come_call_finalizer(sFun_finalize, fun_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value594, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value595) ? __right_value595 = come_decrement_ref_count(__right_value595, ((struct sNode*)__right_value595)->finalize, ((struct sNode*)__right_value595)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__186;
            come_call_finalizer(sFun_finalize, fun_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value596=parse_function_attribute(info)));
            asm_fun_194=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            fun_attribute2=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value596, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X915=(string_operator_not_equals(asm_fun_194,"")));            _condtional_value_X915;            })) {
                __dec_obj171=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun_194));
                __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            __dec_obj172=fun_attribute,
            fun_attribute=(char*)come_increment_ref_count(string_operator_add(fun_attribute,fun_attribute2));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            fun_195=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2656, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_195));
            if(({            (_condtional_value_X916=(info->output_header_file));            _condtional_value_X916;            })) {
                if(({                (_condtional_value_X917=(!result_type->mStatic&&!info->no_output_come_code));                _condtional_value_X917;                })) {
                    header_196=(char*)come_increment_ref_count(make_come_header_function(fun_195,(char*)come_increment_ref_count(base_fun_name),(struct sType*)come_increment_ref_count(obj_type2),version,info));
                    id_197=(char*)come_increment_ref_count(__builtin_string(fun_name));
                    add_come_code_at_come_header(info,id_197,"%s",header_196);
                    (header_196 = come_decrement_ref_count(header_196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_197 = come_decrement_ref_count(id_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2677, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value606=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2677, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_195),info))));
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
            __result_obj__187 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value607=_inf_value9)));
            (asm_fun_194 = come_decrement_ref_count(asm_fun_194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value606, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value607) ? __right_value607 = come_decrement_ref_count(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__187) ? __result_obj__187 = come_decrement_ref_count(__result_obj__187, ((struct sNode*)__result_obj__187)->finalize, ((struct sNode*)__result_obj__187)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__187;
            (asm_fun_194 = come_decrement_ref_count(asm_fun_194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level;
    __result_obj__188 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__188) ? __result_obj__188 = come_decrement_ref_count(__result_obj__188, ((struct sNode*)__result_obj__188)->finalize, ((struct sNode*)__result_obj__188)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__188;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
_Bool _condtional_value_X835;
_Bool _condtional_value_X836;
_Bool _condtional_value_X837;
    if(({    (_condtional_value_X835=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X835;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X836=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X836;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X837=(self!=((void*)0)&&self->v3!=((void*)0)));    _condtional_value_X837;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _condtional_value_X841;
    if(({    (_condtional_value_X841=(self==((void*)0)));    _condtional_value_X841;    })) {
        return 0;
    }
    return self->len;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
_Bool _condtional_value_X847;
struct sLambdaNode* __result_obj__168;
void* __right_value527 = (void*)0;
struct sLambdaNode* result;
_Bool _condtional_value_X848;
_Bool _condtional_value_X849;
void* __right_value528 = (void*)0;
char* __dec_obj168;
_Bool _condtional_value_X850;
_Bool _condtional_value_X851;
struct sLambdaNode* __result_obj__169;
    if(({    (_condtional_value_X847=(self==(void*)0));    _condtional_value_X847;    })) {
        __result_obj__168 = (void*)0;
        return __result_obj__168;
    }
    result=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(({    (_condtional_value_X848=(self!=((void*)0)));    _condtional_value_X848;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X849=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X849;    })) {
        __dec_obj168=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X850=(self!=((void*)0)));    _condtional_value_X850;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X851=(self!=((void*)0)));    _condtional_value_X851;    })) {
        result->mFun=self->mFun;
    }
    __result_obj__169 = result;
    come_call_finalizer(sLambdaNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
_Bool _condtional_value_X853;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X880;
_Bool _condtional_value_X881;
_Bool _condtional_value_X882;
_Bool _condtional_value_X883;
_Bool _condtional_value_X884;
_Bool _condtional_value_X885;
_Bool _condtional_value_X886;
_Bool _condtional_value_X887;
_Bool _condtional_value_X888;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X889;
_Bool _condtional_value_X890;
_Bool _condtional_value_X891;
_Bool _condtional_value_X892;
_Bool _condtional_value_X893;
struct map$2char$phsGenericsFun$ph* __result_obj__181;
    if(({    (_condtional_value_X853=(self->len*10>=self->size));    _condtional_value_X853;    })) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X880=((_Bool)1));    _condtional_value_X880;    })) {
        if(({        (_condtional_value_X881=(self->item_existance[it]));        _condtional_value_X881;        })) {
            if(({            (_condtional_value_X882=(string_equals(self->keys[it],key)));            _condtional_value_X882;            })) {
                if(({                (_condtional_value_X883=(1));                _condtional_value_X883;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X884=(1));                _condtional_value_X884;                })) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X885=(it>=self->size));            _condtional_value_X885;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X886=(it==hash));            _condtional_value_X886;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X887=(1));            _condtional_value_X887;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X888=(1));            _condtional_value_X888;            })) {
                self->items[it]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X889=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X889;    });    ({    (_condtional_value_X890=(!list$1char$ph_end(self->key_list)));    _condtional_value_X890;    });    ({    (_condtional_value_X891=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X891;    })    ){
        if(({        (_condtional_value_X892=(string_equals(it2,key)));        _condtional_value_X892;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X893=(!same_key_exist));    _condtional_value_X893;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__181 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__181;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size;
void* __right_value540 = (void*)0;
char** keys;
void* __right_value541 = (void*)0;
struct sGenericsFun** items;
void* __right_value542 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X856;
_Bool _condtional_value_X857;
_Bool _condtional_value_X860;
struct sGenericsFun* default_value;
void* __right_value543 = (void*)0;
struct sGenericsFun* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X876;
_Bool _condtional_value_X877;
_Bool _condtional_value_X878;
_Bool _condtional_value_X879;
struct sGenericsFun* default_value_177;
void* __right_value544 = (void*)0;
default_value = (void*)0;
default_value_177 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value540=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value541=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sGenericsFun**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value542=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X856=(it=map$2char$phsGenericsFun$ph_begin(self)));    _condtional_value_X856;    });    ({    (_condtional_value_X857=(!map$2char$phsGenericsFun$ph_end(self)));    _condtional_value_X857;    });    ({    (_condtional_value_X860=(it=map$2char$phsGenericsFun$ph_next(self)));    _condtional_value_X860;    })    ){
        memset(&default_value,0,sizeof(struct sGenericsFun*));
        it2=((struct sGenericsFun*)(__right_value543=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun*)come_increment_ref_count(default_value))));
        come_call_finalizer(sGenericsFun_finalize, __right_value543, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X876=((_Bool)1));        _condtional_value_X876;        })) {
            if(({            (_condtional_value_X877=(item_existance[n]));            _condtional_value_X877;            })) {
                n++;
                if(({                (_condtional_value_X878=(n>=size));                _condtional_value_X878;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X879=(n==hash));                _condtional_value_X879;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sGenericsFun*)(__right_value544=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun*)come_increment_ref_count(default_value_177))));
                come_call_finalizer(sGenericsFun_finalize, __right_value544, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sGenericsFun_finalize, default_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
_Bool _condtional_value_X854;
char* result;
char* __result_obj__171;
_Bool _condtional_value_X855;
char* __result_obj__172;
char* result_175;
char* __result_obj__173;
result = (void*)0;
result_175 = (void*)0;
    if(({    (_condtional_value_X854=(self==((void*)0)));    _condtional_value_X854;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__171 = result;
        return __result_obj__171;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X855=(self->key_list->it));    _condtional_value_X855;    })) {
        __result_obj__172 = self->key_list->it->item;
        return __result_obj__172;
    }
    memset(&result_175,0,sizeof(char*));
    __result_obj__173 = result_175;
    return __result_obj__173;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
_Bool _condtional_value_X858;
char* result;
char* __result_obj__174;
_Bool _condtional_value_X859;
char* __result_obj__175;
char* result_176;
char* __result_obj__176;
result = (void*)0;
result_176 = (void*)0;
    if(({    (_condtional_value_X858=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X858;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__174 = result;
        return __result_obj__174;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X859=(self->key_list->it));    _condtional_value_X859;    })) {
        __result_obj__175 = self->key_list->it->item;
        return __result_obj__175;
    }
    memset(&result_176,0,sizeof(char*));
    __result_obj__176 = result_176;
    return __result_obj__176;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X861;
_Bool _condtional_value_X862;
_Bool _condtional_value_X863;
struct sGenericsFun* __result_obj__177;
_Bool _condtional_value_X874;
_Bool _condtional_value_X875;
struct sGenericsFun* __result_obj__178;
struct sGenericsFun* __result_obj__179;
struct sGenericsFun* __result_obj__180;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X861=((_Bool)1));    _condtional_value_X861;    })) {
        if(({        (_condtional_value_X862=(self->item_existance[it]));        _condtional_value_X862;        })) {
            if(({            (_condtional_value_X863=(string_equals(self->keys[it],key)));            _condtional_value_X863;            })) {
                __result_obj__177 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__177;
            }
            it++;
            if(({            (_condtional_value_X874=(it>=self->size));            _condtional_value_X874;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X875=(it==hash));            _condtional_value_X875;            })) {
                __result_obj__178 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__178;
            }
        }
        else {
            __result_obj__179 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__179;
        }
    }
    __result_obj__180 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__180;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
_Bool _condtional_value_X864;
_Bool _condtional_value_X865;
_Bool _condtional_value_X866;
_Bool _condtional_value_X867;
_Bool _condtional_value_X868;
_Bool _condtional_value_X869;
_Bool _condtional_value_X870;
_Bool _condtional_value_X871;
_Bool _condtional_value_X872;
_Bool _condtional_value_X873;
    if(({    (_condtional_value_X864=(self!=((void*)0)&&self->mImplType!=((void*)0)));    _condtional_value_X864;    })) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X865=(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)));    _condtional_value_X865;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X866=(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)));    _condtional_value_X866;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X867=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X867;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X868=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X868;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X869=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X869;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X870=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X870;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X871=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X871;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X872=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X872;    })) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X873=(self!=((void*)0)&&self->mGenericsSName!=((void*)0)));    _condtional_value_X873;    })) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj173;
char* last_code2;
char* __dec_obj174;
struct sClass* current_stack_frame_struct;
char* real_fun_name;
struct sFun* finalizer;
void* __right_value608 = (void*)0;
struct sType* type_before;
void* __right_value609 = (void*)0;
struct sType* type2;
void* __right_value610 = (void*)0;
char* fun_name2;
_Bool _condtional_value_X918;
struct sType* __dec_obj175;
_Bool _condtional_value_X919;
void* __right_value611 = (void*)0;
_Bool _condtional_value_X920;
void* __right_value612 = (void*)0;
char* none_generics_name;
void* __right_value613 = (void*)0;
char* generics_fun_name;
void* __right_value614 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X931;
void* __right_value615 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X932;
void* __right_value616 = (void*)0;
char* __dec_obj176;
int i;
_Bool _condtional_value_X933;
_Bool _condtional_value_X934;
_Bool _condtional_value_X935;
void* __right_value617 = (void*)0;
char* new_fun_name;
void* __right_value618 = (void*)0;
_Bool _condtional_value_X936;
void* __right_value619 = (void*)0;
char* __dec_obj177;
_Bool _condtional_value_X937;
void* __right_value620 = (void*)0;
char* __dec_obj178;
_Bool _condtional_value_X938;
struct sType* __dec_obj179;
void* __right_value621 = (void*)0;
char* __dec_obj180;
void* __right_value622 = (void*)0;
char* user_real_fun_name;
void* __right_value623 = (void*)0;
struct sFun* user_finalizer;
void* __right_value624 = (void*)0;
struct sType* type2_198;
struct sType* __dec_obj181;
struct sClass* klass;
_Bool _condtional_value_X939;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct buffer* source;
void* __right_value627 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X960;
_Bool _condtional_value_X961;
_Bool _condtional_value_X964;
struct tuple2$2char$phsType$ph* multiple_assign_var13 = (void*)0;
char* name_201=0;
struct sType* field_type=0;
_Bool _condtional_value_X965;
_Bool _condtional_value_X966;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj182;
void* __right_value628 = (void*)0;
char* __dec_obj183;
void* __right_value629 = (void*)0;
struct sBlock* block;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sType* result_type;
void* __right_value633 = (void*)0;
char* name_203;
void* __right_value634 = (void*)0;
struct sType* self_type;
_Bool _condtional_value_X967;
_Bool _condtional_value_X968;
struct sType* __list_values13__[1];
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value637 = (void*)0;
char* __list_values14__[1];
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X969;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sFun* fun;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value652 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X970;
struct buffer* __dec_obj184;
char* __dec_obj185;
char* __dec_obj186;
char* __dec_obj187;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__212;
memset(&i, 0, sizeof(int));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj173=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj174=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name=((void*)0);
    finalizer=((void*)0);
    type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(({    (_condtional_value_X918=(type->mNoSolvedGenericsType));    _condtional_value_X918;    })) {
        __dec_obj175=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X919=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X919;    })) {
        finalizer=((struct sFun*)(__right_value611=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        come_call_finalizer(sFun_finalize, __right_value611, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X920=(finalizer==((void*)0)));        _condtional_value_X920;        })) {
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            generics_fun=((struct sGenericsFun*)(__right_value614=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            come_call_finalizer(sGenericsFun_finalize, __right_value614, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X931=(generics_fun));            _condtional_value_X931;            })) {
                multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value615=create_generics_fun((char*)come_increment_ref_count(fun_name2),generics_fun,(struct sType*)come_increment_ref_count(type),info)));
                name=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                err=multiple_assign_var12->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value615, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X932=(!err));                _condtional_value_X932;                })) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer=((struct sFun*)(__right_value616=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value616, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __dec_obj176=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        for(        ({        (_condtional_value_X933=(i=128-1));        _condtional_value_X933;        });        ({        (_condtional_value_X934=(i>=1));        _condtional_value_X934;        });        ({        (_condtional_value_X935=(i--));        _condtional_value_X935;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            finalizer=((struct sFun*)(__right_value618=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value618, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X936=(finalizer));            _condtional_value_X936;            })) {
                __dec_obj177=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X937=(finalizer==((void*)0)));        _condtional_value_X937;        })) {
            finalizer=((struct sFun*)(__right_value620=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value620, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj178=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X938=(finalizer==((void*)0)));    _condtional_value_X938;    })) {
        __dec_obj179=type,
        type=(struct sType*)come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj180=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        user_real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer=((struct sFun*)(__right_value623=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value623, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type2_198=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        __dec_obj181=type,
        type=(struct sType*)come_increment_ref_count(type2_198);
        come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        klass=type->mClass;
        if(({        (_condtional_value_X939=(type->mPointerNum>0&&klass->mStruct||type->mAllocaValue));        _condtional_value_X939;        })) {
            source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2775, "struct buffer*"))));
            buffer_append_char(source,123);
            klass=((struct sClass*)(__right_value627=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value627, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X960=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));            _condtional_value_X960;            });            ({            (_condtional_value_X961=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));            _condtional_value_X961;            });            ({            (_condtional_value_X964=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));            _condtional_value_X964;            })            ){
                multiple_assign_var13=it;
                name_201=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(({                (_condtional_value_X965=(field_type->mHeap));                _condtional_value_X965;                })) {
                    char source2[1024];
                    memset(&source2, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_201,name_201,name_201,name_201);
                    buffer_append_str(source,source2);
                }
                else if(({                (_condtional_value_X966=(field_type->mChannel));                _condtional_value_X966;                })) {
                    char source2_202[1024];
                    memset(&source2_202, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_202,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_201,name_201);
                    buffer_append_str(source,source2_202);
                    snprintf(source2_202,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_201,name_201);
                    buffer_append_str(source,source2_202);
                }
                (name_201 = come_decrement_ref_count(name_201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            buffer_append_char(source,125);
            p=info->p;
            sline=info->sline;
            sname=(char*)come_increment_ref_count(info->sname);
            head=info->head;
            source3=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj182=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source);
            come_call_finalizer(buffer_finalize, __dec_obj182,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=source->buf;
            info->head=source->buf;
            __dec_obj183=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
            __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=0;
            block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2826, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_203=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2827, "char*"));
            self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type->mHeap=(_Bool)0;
            if(({            (_condtional_value_X967=(self_type->mPointerNum==0));            _condtional_value_X967;            })) {
                self_type->mPointerNum=1;
            }
            if(({            (_condtional_value_X968=(self_type->mPointerNum>1));            _condtional_value_X968;            })) {
                self_type->mPointerNum=1;
            }
            param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values13__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2836, "struct list$1sType$ph")),1,__list_values13__)));
            param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values14__[0]=((char*)(__right_value637=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2837, "struct list$1char$ph")),1,__list_values14__)));
            (__right_value637 = come_decrement_ref_count(__right_value637, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2838, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors,((void*)0));
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value643=__builtin_string(name_203)))));
            (__right_value642 = come_decrement_ref_count(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value643 = come_decrement_ref_count(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(({            (_condtional_value_X969=(fun2==((void*)0)||fun2->mExternal));            _condtional_value_X969;            })) {
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2847, "struct sFun*")),(char*)come_increment_ref_count(name_203),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun->mGenericsFun=(_Bool)1;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_203)),(struct sFun*)come_increment_ref_count(fun));
                finalizer=fun;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2858, "struct sNode");
                _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value651=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2858, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sFunNode_finalize, __right_value651, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                Value=node_compile(node,info);
                if(({                (_condtional_value_X970=(!Value));                _condtional_value_X970;                })) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                finalizer=fun2;
            }
            __dec_obj184=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3);
            come_call_finalizer(buffer_finalize, __dec_obj184,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=p;
            info->head=head;
            info->sline=sline;
            __dec_obj185=info->sname,
            info->sname=(char*)come_increment_ref_count(sname);
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_203 = come_decrement_ref_count(name_203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj186=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj187=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__212 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value654=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2882, "struct tuple2$2sFun$pchar$ph")),finalizer,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value654, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__212;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X921;
_Bool _condtional_value_X922;
_Bool _condtional_value_X923;
struct sGenericsFun* __result_obj__189;
_Bool _condtional_value_X924;
_Bool _condtional_value_X925;
struct sGenericsFun* __result_obj__190;
struct sGenericsFun* __result_obj__191;
struct sGenericsFun* __result_obj__192;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X921=((_Bool)1));    _condtional_value_X921;    })) {
        if(({        (_condtional_value_X922=(self->item_existance[it]));        _condtional_value_X922;        })) {
            if(({            (_condtional_value_X923=(string_equals(self->keys[it],key)));            _condtional_value_X923;            })) {
                __result_obj__189 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__189;
            }
            it++;
            if(({            (_condtional_value_X924=(it>=self->size));            _condtional_value_X924;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X925=(it==hash));            _condtional_value_X925;            })) {
                __result_obj__190 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__192;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X926;
_Bool _condtional_value_X927;
_Bool _condtional_value_X928;
struct sGenericsFun* __result_obj__193;
_Bool _condtional_value_X929;
_Bool _condtional_value_X930;
struct sGenericsFun* __result_obj__194;
struct sGenericsFun* __result_obj__195;
struct sGenericsFun* __result_obj__196;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X926=((_Bool)1));    _condtional_value_X926;    })) {
        if(({        (_condtional_value_X927=(self->item_existance[it]));        _condtional_value_X927;        })) {
            if(({            (_condtional_value_X928=(string_equals(self->keys[it],key)));            _condtional_value_X928;            })) {
                __result_obj__193 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__193;
            }
            it++;
            if(({            (_condtional_value_X929=(it>=self->size));            _condtional_value_X929;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X930=(it==hash));            _condtional_value_X930;            })) {
                __result_obj__194 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__194;
            }
        }
        else {
            __result_obj__195 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__195;
        }
    }
    __result_obj__196 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X940;
_Bool _condtional_value_X941;
_Bool _condtional_value_X942;
struct sClass* __result_obj__197;
_Bool _condtional_value_X951;
_Bool _condtional_value_X952;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
struct sClass* __result_obj__200;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X940=((_Bool)1));    _condtional_value_X940;    })) {
        if(({        (_condtional_value_X941=(self->item_existance[it]));        _condtional_value_X941;        })) {
            if(({            (_condtional_value_X942=(string_equals(self->keys[it],key)));            _condtional_value_X942;            })) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__197;
            }
            it++;
            if(({            (_condtional_value_X951=(it>=self->size));            _condtional_value_X951;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X952=(it==hash));            _condtional_value_X952;            })) {
                __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__198;
            }
        }
        else {
            __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__199;
        }
    }
    __result_obj__200 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__200;
}

static void sClass_finalize(struct sClass* self){
_Bool _condtional_value_X943;
_Bool _condtional_value_X944;
_Bool _condtional_value_X949;
_Bool _condtional_value_X950;
    if(({    (_condtional_value_X943=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X943;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X944=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X944;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X949=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X949;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X950=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X950;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X945;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X945=(it!=((void*)0)));    _condtional_value_X945;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X946;
    if(({    (_condtional_value_X946=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X946;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X947;
_Bool _condtional_value_X948;
    if(({    (_condtional_value_X947=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X947;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X948=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X948;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X953;
_Bool _condtional_value_X954;
_Bool _condtional_value_X955;
struct sClass* __result_obj__201;
_Bool _condtional_value_X956;
_Bool _condtional_value_X957;
struct sClass* __result_obj__202;
struct sClass* __result_obj__203;
struct sClass* __result_obj__204;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X953=((_Bool)1));    _condtional_value_X953;    })) {
        if(({        (_condtional_value_X954=(self->item_existance[it]));        _condtional_value_X954;        })) {
            if(({            (_condtional_value_X955=(string_equals(self->keys[it],key)));            _condtional_value_X955;            })) {
                __result_obj__201 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__201;
            }
            it++;
            if(({            (_condtional_value_X956=(it>=self->size));            _condtional_value_X956;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X957=(it==hash));            _condtional_value_X957;            })) {
                __result_obj__202 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__202;
            }
        }
        else {
            __result_obj__203 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__203;
        }
    }
    __result_obj__204 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__204;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X958;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__205;
_Bool _condtional_value_X959;
struct tuple2$2char$phsType$ph* __result_obj__206;
struct tuple2$2char$phsType$ph* result_199;
struct tuple2$2char$phsType$ph* __result_obj__207;
result = (void*)0;
result_199 = (void*)0;
    if(({    (_condtional_value_X958=(self==((void*)0)));    _condtional_value_X958;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__205 = result;
        return __result_obj__205;
    }
    self->it=self->head;
    if(({    (_condtional_value_X959=(self->it));    _condtional_value_X959;    })) {
        __result_obj__206 = self->it->item;
        return __result_obj__206;
    }
    memset(&result_199,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__207 = result_199;
    return __result_obj__207;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X962;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__208;
_Bool _condtional_value_X963;
struct tuple2$2char$phsType$ph* __result_obj__209;
struct tuple2$2char$phsType$ph* result_200;
struct tuple2$2char$phsType$ph* __result_obj__210;
result = (void*)0;
result_200 = (void*)0;
    if(({    (_condtional_value_X962=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X962;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__208 = result;
        return __result_obj__208;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X963=(self->it));    _condtional_value_X963;    })) {
        __result_obj__209 = self->it->item;
        return __result_obj__209;
    }
    memset(&result_200,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__210 = result_200;
    return __result_obj__210;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj188;
struct tuple2$2sFun$pchar$ph* __result_obj__211;
    self->v1=v1;
    __dec_obj188=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__211 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
_Bool _condtional_value_X971;
    if(({    (_condtional_value_X971=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X971;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj189;
char* last_code2;
char* __dec_obj190;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value655 = (void*)0;
char* real_fun_name;
void* __right_value656 = (void*)0;
struct sType* type2;
struct sType* __dec_obj191;
struct sClass* klass;
_Bool _condtional_value_X972;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct buffer* source;
_Bool _condtional_value_X973;
void* __right_value659 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X974;
_Bool _condtional_value_X975;
_Bool _condtional_value_X976;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_204=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj192;
void* __right_value660 = (void*)0;
char* __dec_obj193;
void* __right_value661 = (void*)0;
struct sBlock* block;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* result_type;
void* __right_value665 = (void*)0;
char* name_206;
void* __right_value666 = (void*)0;
struct sType* left_type;
void* __right_value667 = (void*)0;
struct sType* right_type;
struct sType* __list_values15__[2];
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
char* __list_values16__[2];
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X977;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sFun* fun;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value686 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X978;
struct buffer* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__213;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj189=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj190=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj191=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X972=(type->mPointerNum>0&&!klass->mNumber));    _condtional_value_X972;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2906, "struct buffer*"))));
        buffer_append_char(source,123);
        if(({        (_condtional_value_X973=(klass->mProtocol));        _condtional_value_X973;        })) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return left.%s.equals(right.%s);\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            klass=((struct sClass*)(__right_value659=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value659, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X974=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));            _condtional_value_X974;            });            ({            (_condtional_value_X975=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));            _condtional_value_X975;            });            ({            (_condtional_value_X976=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));            _condtional_value_X976;            })            ){
                multiple_assign_var14=it;
                name_204=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_205[1024];
                memset(&source2_205, 0, sizeof(char)                *(1024)                );
                snprintf(source2_205,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_204,name_204,name_204);
                buffer_append_str(source,source2_205);
                (name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source,"return true;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj192=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj192,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj193=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2946, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_206=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 2947, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values15__[0]=left_type,
__list_values15__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2952, "struct list$1sType$ph")),2,__list_values15__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values16__[0]=((char*)(__right_value670=__builtin_string("left"))),
__list_values16__[1]=((char*)(__right_value671=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2953, "struct list$1char$ph")),2,__list_values16__)));
        (__right_value670 = come_decrement_ref_count(__right_value670, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value671 = come_decrement_ref_count(__right_value671, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2954, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value677=__builtin_string(name_206)))));
        (__right_value676 = come_decrement_ref_count(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value677 = come_decrement_ref_count(__right_value677, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X977=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X977;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2964, "struct sFun*")),(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_206)),(struct sFun*)come_increment_ref_count(fun));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2973, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value685=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2973, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer(sFunNode_finalize, __right_value685, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X978=(!Value));            _condtional_value_X978;            })) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj194=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj194,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj195=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_206 = come_decrement_ref_count(name_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj196=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj197=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__213 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value688=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2998, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value688, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__213;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj198;
char* last_code2;
char* __dec_obj199;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value689 = (void*)0;
char* real_fun_name;
void* __right_value690 = (void*)0;
struct sType* type2;
struct sType* __dec_obj200;
struct sClass* klass;
_Bool _condtional_value_X979;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct buffer* source;
_Bool _condtional_value_X980;
int i;
void* __right_value693 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X981;
_Bool _condtional_value_X982;
_Bool _condtional_value_X983;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_208=0;
struct sType* field_type=0;
_Bool _condtional_value_X985;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj201;
void* __right_value694 = (void*)0;
char* __dec_obj202;
void* __right_value695 = (void*)0;
struct sBlock* block;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sType* result_type;
void* __right_value699 = (void*)0;
char* name_212;
void* __right_value700 = (void*)0;
struct sType* left_type;
void* __right_value701 = (void*)0;
struct sType* right_type;
struct sType* __list_values17__[2];
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
char* __list_values18__[2];
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X986;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sFun* fun;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value720 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X987;
struct buffer* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__214;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj198=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj199=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj200=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X979=(type->mPointerNum>0&&!klass->mNumber));    _condtional_value_X979;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3021, "struct buffer*"))));
        buffer_append_char(source,123);
        if(({        (_condtional_value_X980=(klass->mProtocol));        _condtional_value_X980;        })) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return left.%s !== right.%s;\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_207[1024];
            memset(&source2_207, 0, sizeof(char)            *(1024)            );
            snprintf(source2_207,1024,"return !(");
            buffer_append_str(source,source2_207);
            snprintf(source2_207,1024,"( ");
            buffer_append_str(source,source2_207);
            i=0;
            klass=((struct sClass*)(__right_value693=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value693, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X981=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));            _condtional_value_X981;            });            ({            (_condtional_value_X982=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));            _condtional_value_X982;            });            ({            (_condtional_value_X983=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));            _condtional_value_X983;            })            ){
                multiple_assign_var15=it;
                name_208=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_209[1024];
                memset(&source2_209, 0, sizeof(char)                *(1024)                );
                snprintf(source2_209,1024,"(left.%s === right.%s)",name_208,name_208,name_208);
                buffer_append_str(source,source2_209);
                if(({                (_condtional_value_X985=(i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1));                _condtional_value_X985;                })) {
                    char source2_210[1024];
                    memset(&source2_210, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_210,1024,"));");
                    buffer_append_str(source,source2_210);
                }
                else {
                    char source2_211[1024];
                    memset(&source2_211, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_211,1024," && ");
                    buffer_append_str(source,source2_211);
                }
                i++;
                (name_208 = come_decrement_ref_count(name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj201=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj201,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj202=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3081, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_212=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3082, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values17__[0]=left_type,
__list_values17__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3087, "struct list$1sType$ph")),2,__list_values17__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values18__[0]=((char*)(__right_value704=__builtin_string("left"))),
__list_values18__[1]=((char*)(__right_value705=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3088, "struct list$1char$ph")),2,__list_values18__)));
        (__right_value704 = come_decrement_ref_count(__right_value704, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value705 = come_decrement_ref_count(__right_value705, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3089, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value711=__builtin_string(name_212)))));
        (__right_value710 = come_decrement_ref_count(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value711 = come_decrement_ref_count(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X986=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X986;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3099, "struct sFun*")),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_212)),(struct sFun*)come_increment_ref_count(fun));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3108, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value719=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3108, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer(sFunNode_finalize, __right_value719, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X987=(!Value));            _condtional_value_X987;            })) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj203=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj204=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj205=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj206=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__214 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value722=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3133, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value722, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__214;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X984;
    if(({    (_condtional_value_X984=(self==((void*)0)));    _condtional_value_X984;    })) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj207;
char* last_code2;
char* __dec_obj208;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value723 = (void*)0;
char* real_fun_name;
void* __right_value724 = (void*)0;
struct sType* type2;
struct sType* __dec_obj209;
struct sClass* klass;
_Bool _condtional_value_X988;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct buffer* source;
_Bool _condtional_value_X989;
int i;
void* __right_value727 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X990;
_Bool _condtional_value_X991;
_Bool _condtional_value_X992;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_214=0;
struct sType* field_type=0;
_Bool _condtional_value_X993;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj210;
void* __right_value728 = (void*)0;
char* __dec_obj211;
void* __right_value729 = (void*)0;
struct sBlock* block;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sType* result_type;
void* __right_value733 = (void*)0;
char* name_218;
void* __right_value734 = (void*)0;
struct sType* left_type;
void* __right_value735 = (void*)0;
struct sType* right_type;
struct sType* __list_values19__[2];
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
char* __list_values20__[2];
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X994;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sFun* fun;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value754 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X995;
struct buffer* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__215;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj207=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj208=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj209=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj209,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X988=(type->mPointerNum>0&&!klass->mNumber));    _condtional_value_X988;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3156, "struct buffer*"))));
        buffer_append_char(source,123);
        if(({        (_condtional_value_X989=(klass->mProtocol));        _condtional_value_X989;        })) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return !left.%s.equals(right.%s);\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_213[1024];
            memset(&source2_213, 0, sizeof(char)            *(1024)            );
            snprintf(source2_213,1024,"return !(");
            buffer_append_str(source,source2_213);
            i=0;
            klass=((struct sClass*)(__right_value727=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value727, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X990=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));            _condtional_value_X990;            });            ({            (_condtional_value_X991=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));            _condtional_value_X991;            });            ({            (_condtional_value_X992=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));            _condtional_value_X992;            })            ){
                multiple_assign_var16=it;
                name_214=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_215[1024];
                memset(&source2_215, 0, sizeof(char)                *(1024)                );
                snprintf(source2_215,1024,"left.%s.equals(right.%s)",name_214,name_214);
                buffer_append_str(source,source2_215);
                if(({                (_condtional_value_X993=(i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1));                _condtional_value_X993;                })) {
                    char source2_216[1024];
                    memset(&source2_216, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_216,1024,");");
                    buffer_append_str(source,source2_216);
                }
                else {
                    char source2_217[1024];
                    memset(&source2_217, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_217,1024," && ");
                    buffer_append_str(source,source2_217);
                }
                i++;
                (name_214 = come_decrement_ref_count(name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj210=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj210,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj211=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3213, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_218=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3214, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values19__[0]=left_type,
__list_values19__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3219, "struct list$1sType$ph")),2,__list_values19__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values20__[0]=((char*)(__right_value738=__builtin_string("left"))),
__list_values20__[1]=((char*)(__right_value739=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3220, "struct list$1char$ph")),2,__list_values20__)));
        (__right_value738 = come_decrement_ref_count(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value739 = come_decrement_ref_count(__right_value739, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3221, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value745=__builtin_string(name_218)))));
        (__right_value744 = come_decrement_ref_count(__right_value744, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value745 = come_decrement_ref_count(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X994=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X994;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3231, "struct sFun*")),(char*)come_increment_ref_count(name_218),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_218)),(struct sFun*)come_increment_ref_count(fun));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3240, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value753=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3240, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sFunNode_finalize, __right_value753, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X995=(!Value));            _condtional_value_X995;            })) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj212=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj212,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj213=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_218 = come_decrement_ref_count(name_218, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj214=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj215=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__215 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value756=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3265, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value756, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__215;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj216;
char* last_code2;
char* __dec_obj217;
struct sClass* current_stack_frame_struct;
struct sFun* equaler;
void* __right_value757 = (void*)0;
char* real_fun_name;
void* __right_value758 = (void*)0;
struct sType* type2;
struct sType* __dec_obj218;
struct sClass* klass;
_Bool _condtional_value_X996;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct buffer* source;
_Bool _condtional_value_X997;
void* __right_value761 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X998;
_Bool _condtional_value_X999;
_Bool _condtional_value_X1000;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_220=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source3;
struct buffer* __dec_obj219;
void* __right_value762 = (void*)0;
char* __dec_obj220;
void* __right_value763 = (void*)0;
struct sBlock* block;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sType* result_type;
void* __right_value767 = (void*)0;
char* name_222;
void* __right_value768 = (void*)0;
struct sType* left_type;
void* __right_value769 = (void*)0;
struct sType* right_type;
struct sType* __list_values21__[2];
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
char* __list_values22__[2];
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X1001;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value788 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X1002;
struct buffer* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__216;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj216=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj217=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj218=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj218,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X996=(type->mPointerNum>0&&!klass->mNumber));    _condtional_value_X996;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3288, "struct buffer*"))));
        buffer_append_char(source,123);
        if(({        (_condtional_value_X997=(klass->mProtocol));        _condtional_value_X997;        })) {
            char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"return left.%s === right.%s;\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_219[1024];
            memset(&source2_219, 0, sizeof(char)            *(1024)            );
            klass=((struct sClass*)(__right_value761=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value761, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X998=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));            _condtional_value_X998;            });            ({            (_condtional_value_X999=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));            _condtional_value_X999;            });            ({            (_condtional_value_X1000=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));            _condtional_value_X1000;            })            ){
                multiple_assign_var17=it;
                name_220=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_221[1024];
                memset(&source2_221, 0, sizeof(char)                *(1024)                );
                snprintf(source2_221,1024,"if(left.%s !== right.%s) { return false; }\n",name_220,name_220,name_220);
                buffer_append_str(source,source2_221);
                (name_220 = come_decrement_ref_count(name_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source,"return true;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj219=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj219,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj220=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3330, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_222=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3331, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values21__[0]=left_type,
__list_values21__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3336, "struct list$1sType$ph")),2,__list_values21__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values22__[0]=((char*)(__right_value772=__builtin_string("left"))),
__list_values22__[1]=((char*)(__right_value773=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3337, "struct list$1char$ph")),2,__list_values22__)));
        (__right_value772 = come_decrement_ref_count(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value773 = come_decrement_ref_count(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3338, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value779=__builtin_string(name_222)))));
        (__right_value778 = come_decrement_ref_count(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value779 = come_decrement_ref_count(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X1001=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X1001;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3348, "struct sFun*")),(char*)come_increment_ref_count(name_222),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_222)),(struct sFun*)come_increment_ref_count(fun));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3357, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value787=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3357, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer(sFunNode_finalize, __right_value787, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X1002=(!Value));            _condtional_value_X1002;            })) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj221=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj221,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj222=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_222 = come_decrement_ref_count(name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj223=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj224=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__216 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value790=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3382, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value790, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__216;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
_Bool _condtional_value_X1003;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__217;
char* last_code;
char* __dec_obj225;
char* last_code2;
char* __dec_obj226;
struct sClass* current_stack_frame_struct;
struct sFun* cloner;
void* __right_value793 = (void*)0;
char* real_fun_name;
void* __right_value794 = (void*)0;
struct sType* type2;
struct sType* __dec_obj227;
struct sClass* klass;
char* fun_name2;
_Bool _condtional_value_X1004;
void* __right_value795 = (void*)0;
char* none_generics_name;
void* __right_value796 = (void*)0;
struct sType* obj_type;
void* __right_value797 = (void*)0;
char* __dec_obj228;
void* __right_value798 = (void*)0;
char* fun_name3;
void* __right_value799 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X1005;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var18 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X1006;
_Bool _condtional_value_X1007;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__218;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
char* __dec_obj229;
void* __right_value806 = (void*)0;
char* __dec_obj230;
int i;
_Bool _condtional_value_X1008;
_Bool _condtional_value_X1009;
_Bool _condtional_value_X1010;
void* __right_value807 = (void*)0;
char* new_fun_name;
void* __right_value808 = (void*)0;
_Bool _condtional_value_X1011;
void* __right_value809 = (void*)0;
char* __dec_obj231;
_Bool _condtional_value_X1012;
void* __right_value810 = (void*)0;
char* __dec_obj232;
_Bool _condtional_value_X1013;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct buffer* source;
void* __right_value813 = (void*)0;
_Bool _condtional_value_X1014;
void* __right_value814 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X1015;
_Bool _condtional_value_X1016;
_Bool _condtional_value_X1017;
struct tuple2$2char$phsType$ph* multiple_assign_var19 = (void*)0;
char* name_224=0;
struct sType* field_type=0;
_Bool _condtional_value_X1018;
_Bool _condtional_value_X1019;
void* __right_value815 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_227;
struct tuple2$2char$phsType$ph* it_228;
_Bool _condtional_value_X1020;
_Bool _condtional_value_X1021;
_Bool _condtional_value_X1022;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_229=0;
struct sType* field_type_230=0;
_Bool _condtional_value_X1023;
_Bool _condtional_value_X1024;
void* __right_value816 = (void*)0;
char* user_real_fun_name;
void* __right_value817 = (void*)0;
struct sFun* user_cloner;
char* p;
int sline;
char* sname;
struct buffer* source3;
char* head;
struct buffer* __dec_obj233;
void* __right_value818 = (void*)0;
char* __dec_obj234;
void* __right_value819 = (void*)0;
struct sBlock* block;
void* __right_value820 = (void*)0;
struct sType* result_type;
void* __right_value821 = (void*)0;
char* name_234;
void* __right_value822 = (void*)0;
struct sType* self_type;
struct sType* __list_values23__[1];
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value825 = (void*)0;
char* __list_values24__[1];
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X1025;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sFun* fun;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value840 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X1026;
char* __dec_obj235;
struct buffer* __dec_obj236;
char* __dec_obj237;
char* __dec_obj238;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__219;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(({    (_condtional_value_X1003=(string_operator_equals(type->mClass->mName,"void")));    _condtional_value_X1003;    })) {
        __result_obj__217 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value792=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3388, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value792, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__217;
    }
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj225=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj226=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj227=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj227,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X1004=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X1004;    })) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj228=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value799=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value799, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X1005=(generics_fun));        _condtional_value_X1005;        })) {
            multiple_assign_var18=((struct tuple2$2char$phbool$*)(__right_value801=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            err=multiple_assign_var18->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value801, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1006=(!err));            _condtional_value_X1006;            })) {
                if(({                (_condtional_value_X1007=(string_operator_equals(type->mClass->mName,"void")));                _condtional_value_X1007;                })) {
                    __result_obj__218 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value803=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3426, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value803, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__218;
                }
            }
            cloner=((struct sFun*)(__right_value804=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            come_call_finalizer(sFun_finalize, __right_value804, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value805=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value805, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj229=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj230=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        ({        (_condtional_value_X1008=(i=128-1));        _condtional_value_X1008;        });        ({        (_condtional_value_X1009=(i>=1));        _condtional_value_X1009;        });        ({        (_condtional_value_X1010=(i--));        _condtional_value_X1010;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value808=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value808, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1011=(cloner));            _condtional_value_X1011;            })) {
                __dec_obj231=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X1012=(cloner==((void*)0)));        _condtional_value_X1012;        })) {
            cloner=((struct sFun*)(__right_value810=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value810, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj232=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X1013=(cloner==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0));    _condtional_value_X1013;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3461, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source,"var result = new %s;\n",((char*)(__right_value813=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value813 = come_decrement_ref_count(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X1014=(klass->mProtocol));        _condtional_value_X1014;        })) {
            char* name_223="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source,source2);
            klass=((struct sClass*)(__right_value814=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value814, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X1015=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));            _condtional_value_X1015;            });            ({            (_condtional_value_X1016=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));            _condtional_value_X1016;            });            ({            (_condtional_value_X1017=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));            _condtional_value_X1017;            })            ){
                multiple_assign_var19=it;
                name_224=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(({                (_condtional_value_X1018=(string_operator_equals(name_224,"_protocol_obj")));                _condtional_value_X1018;                })) {
                }
                else if(({                (_condtional_value_X1019=(list$1sNode$ph_length(field_type->mArrayNum)>0));                _condtional_value_X1019;                })) {
                    char source2_225[1024];
                    memset(&source2_225, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_225,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_224,name_224,name_224);
                    buffer_append_str(source,source2_225);
                }
                else {
                    char source2_226[1024];
                    memset(&source2_226, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_226,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_224,name_224);
                    buffer_append_str(source,source2_226);
                }
                (name_224 = come_decrement_ref_count(name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            klass=((struct sClass*)(__right_value815=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            come_call_finalizer(sClass_finalize, __right_value815, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            ({            (_condtional_value_X1020=(o2_saved_227=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_228=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_227))));            _condtional_value_X1020;            });            ({            (_condtional_value_X1021=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved_227))));            _condtional_value_X1021;            });            ({            (_condtional_value_X1022=(it_228=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_227))));            _condtional_value_X1022;            })            ){
                multiple_assign_var20=it_228;
                name_229=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type_230=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(({                (_condtional_value_X1023=(field_type_230->mHeap));                _condtional_value_X1023;                })) {
                    char source2_231[1024];
                    memset(&source2_231, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_231,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_229,name_229,name_229);
                    buffer_append_str(source,source2_231);
                }
                else if(({                (_condtional_value_X1024=(list$1sNode$ph_length(field_type_230->mArrayNum)>0));                _condtional_value_X1024;                })) {
                    char source2_232[1024];
                    memset(&source2_232, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_232,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_229,name_229,name_229);
                    buffer_append_str(source,source2_232);
                }
                else {
                    char source2_233[1024];
                    memset(&source2_233, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_233,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_229,name_229);
                    buffer_append_str(source,source2_233);
                }
                (name_229 = come_decrement_ref_count(name_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        user_real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner=((struct sFun*)(__right_value817=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value817, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source,"return result;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj233=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj233,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj234=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_234=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3551, "char*"));
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values23__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3554, "struct list$1sType$ph")),1,__list_values23__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values24__[0]=((char*)(__right_value825=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3555, "struct list$1char$ph")),1,__list_values24__)));
        (__right_value825 = come_decrement_ref_count(__right_value825, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3556, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value831=__builtin_string(name_234)))));
        (__right_value830 = come_decrement_ref_count(__right_value830, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X1025=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X1025;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3566, "struct sFun*")),(char*)come_increment_ref_count(name_234),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_234)),(struct sFun*)come_increment_ref_count(fun));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3575, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value839=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3575, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sFunNode_finalize, __right_value839, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X1026=(!Value));            _condtional_value_X1026;            })) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            cloner=fun2;
        }
        __dec_obj235=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline;
        __dec_obj236=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj236,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_234 = come_decrement_ref_count(name_234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj237=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj238=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__219 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value842=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3602, "struct tuple2$2sFun$pchar$ph")),cloner,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value842, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__219;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj248;
char* last_code2;
char* __dec_obj249;
struct sClass* current_stack_frame_struct;
struct sFun* to_string_fun;
void* __right_value875 = (void*)0;
char* real_fun_name;
void* __right_value876 = (void*)0;
struct sType* type_before;
void* __right_value877 = (void*)0;
struct sType* type2;
struct sType* __dec_obj250;
struct sClass* klass;
_Bool _condtional_value_X1034;
struct sType* __dec_obj251;
_Bool _condtional_value_X1035;
void* __right_value878 = (void*)0;
_Bool _condtional_value_X1036;
void* __right_value879 = (void*)0;
char* none_generics_name;
void* __right_value880 = (void*)0;
char* generics_fun_name;
void* __right_value881 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X1037;
void* __right_value882 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var22 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X1038;
void* __right_value883 = (void*)0;
int i;
_Bool _condtional_value_X1039;
_Bool _condtional_value_X1040;
_Bool _condtional_value_X1041;
void* __right_value884 = (void*)0;
char* new_fun_name;
void* __right_value885 = (void*)0;
_Bool _condtional_value_X1042;
void* __right_value886 = (void*)0;
char* __dec_obj252;
_Bool _condtional_value_X1043;
void* __right_value887 = (void*)0;
_Bool _condtional_value_X1044;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct buffer* source;
int i_237;
void* __right_value890 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X1045;
_Bool _condtional_value_X1046;
_Bool _condtional_value_X1047;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* name_238=0;
struct sType* field_type=0;
_Bool _condtional_value_X1048;
_Bool _condtional_value_X1049;
char* p;
int sline;
char* sname;
struct buffer* source3;
char* head;
struct buffer* __dec_obj253;
void* __right_value891 = (void*)0;
char* __dec_obj254;
void* __right_value892 = (void*)0;
struct sBlock* block;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct sType* result_type;
void* __right_value896 = (void*)0;
char* name_241;
void* __right_value897 = (void*)0;
struct sType* self_type;
void* __right_value898 = (void*)0;
struct sType* __dec_obj255;
struct sType* __list_values27__[1];
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value901 = (void*)0;
char* __list_values28__[1];
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X1050;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct sFun* fun;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value916 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X1051;
char* __dec_obj256;
struct buffer* __dec_obj257;
char* __dec_obj258;
char* __dec_obj259;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__221;
memset(&i, 0, sizeof(int));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj248=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj249=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj250=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj250,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X1034=(type->mNoSolvedGenericsType));    _condtional_value_X1034;    })) {
        __dec_obj251=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj251,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X1035=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X1035;    })) {
        to_string_fun=((struct sFun*)(__right_value878=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value878, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X1036=(to_string_fun==((void*)0)));        _condtional_value_X1036;        })) {
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            generics_fun=((struct sGenericsFun*)(__right_value881=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            come_call_finalizer(sGenericsFun_finalize, __right_value881, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1037=(generics_fun));            _condtional_value_X1037;            })) {
                multiple_assign_var22=((struct tuple2$2char$phbool$*)(__right_value882=create_generics_fun((char*)come_increment_ref_count(real_fun_name),generics_fun,(struct sType*)come_increment_ref_count(type),info)));
                name=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                err=multiple_assign_var22->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value882, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X1038=(!err));                _condtional_value_X1038;                })) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun=((struct sFun*)(__right_value883=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value883, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        ({        (_condtional_value_X1039=(i=128-1));        _condtional_value_X1039;        });        ({        (_condtional_value_X1040=(i>=1));        _condtional_value_X1040;        });        ({        (_condtional_value_X1041=(i--));        _condtional_value_X1041;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i));
            to_string_fun=((struct sFun*)(__right_value885=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value885, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1042=(to_string_fun));            _condtional_value_X1042;            })) {
                __dec_obj252=real_fun_name,
                real_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X1043=(to_string_fun==((void*)0)));        _condtional_value_X1043;        })) {
            to_string_fun=((struct sFun*)(__right_value887=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value887, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(({    (_condtional_value_X1044=(to_string_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber));    _condtional_value_X1044;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3806, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"var result = new buffer();\n");
        buffer_append_format(source,"result.append_str(\"%s {\");\n",klass->mName);
        i_237=0;
        klass=((struct sClass*)(__right_value890=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        come_call_finalizer(sClass_finalize, __right_value890, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        ({        (_condtional_value_X1045=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));        _condtional_value_X1045;        });        ({        (_condtional_value_X1046=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));        _condtional_value_X1046;        });        ({        (_condtional_value_X1047=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));        _condtional_value_X1047;        })        ){
            multiple_assign_var23=it;
            name_238=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            if(({            (_condtional_value_X1048=(string_operator_equals(field_type->mClass->mName,"lambda")));            _condtional_value_X1048;            })) {
                char source2[1024];
                memset(&source2, 0, sizeof(char)                *(1024)                );
                snprintf(source2,1024,"result.append_str(\"%s:\");\n",name_238);
                buffer_append_str(source,source2);
                snprintf(source2,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source,source2);
            }
            else if(({            (_condtional_value_X1049=(i_237==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1));            _condtional_value_X1049;            })) {
                char source2_239[1024];
                memset(&source2_239, 0, sizeof(char)                *(1024)                );
                snprintf(source2_239,1024,"result.append_str(\"%s:\");\n",name_238);
                buffer_append_str(source,source2_239);
                snprintf(source2_239,1024,"result.append_str(self.%s.to_string());\n",name_238);
                buffer_append_str(source,source2_239);
            }
            else {
                char source2_240[1024];
                memset(&source2_240, 0, sizeof(char)                *(1024)                );
                snprintf(source2_240,1024,"result.append_str(\"%s:\");\n",name_238);
                buffer_append_str(source,source2_240);
                snprintf(source2_240,1024,"result.append_str(self.%s.to_string());\n",name_238);
                buffer_append_str(source,source2_240);
                snprintf(source2_240,1024,"result.append_str(\",\");\n");
                buffer_append_str(source,source2_240);
            }
            i_237++;
            (name_238 = come_decrement_ref_count(name_238, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(source,"result.append_str(\"}\");\n");
        buffer_append_format(source,"return result.to_string();\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj253=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj253,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj254=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3875, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type->mHeap=(_Bool)1;
        name_241=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 3877, "char*"));
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj255=self_type,
        self_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj255,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values27__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3882, "struct list$1sType$ph")),1,__list_values27__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values28__[0]=((char*)(__right_value901=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3883, "struct list$1char$ph")),1,__list_values28__)));
        (__right_value901 = come_decrement_ref_count(__right_value901, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3884, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value907=__builtin_string(name_241)))));
        (__right_value906 = come_decrement_ref_count(__right_value906, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value907 = come_decrement_ref_count(__right_value907, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X1050=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X1050;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3893, "struct sFun*")),(char*)come_increment_ref_count(name_241),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_241)),(struct sFun*)come_increment_ref_count(fun));
            to_string_fun=fun;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3904, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value915=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3904, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer(sFunNode_finalize, __right_value915, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X1051=(!Value));            _condtional_value_X1051;            })) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            to_string_fun=fun2;
        }
        __dec_obj256=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline;
        __dec_obj257=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj257,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_241 = come_decrement_ref_count(name_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj258=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj259=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__221 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value918=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3929, "struct tuple2$2sFun$pchar$ph")),to_string_fun,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value918, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__221;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code;
char* __dec_obj260;
char* last_code2;
char* __dec_obj261;
struct sClass* current_stack_frame_struct;
struct sFun* get_hash_key_fun;
void* __right_value919 = (void*)0;
char* real_fun_name;
void* __right_value920 = (void*)0;
struct sType* type2;
struct sType* __dec_obj262;
struct sClass* klass;
_Bool _condtional_value_X1052;
void* __right_value921 = (void*)0;
_Bool _condtional_value_X1053;
void* __right_value922 = (void*)0;
char* none_generics_name;
void* __right_value923 = (void*)0;
char* generics_fun_name;
void* __right_value924 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X1054;
void* __right_value925 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var24 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X1055;
void* __right_value926 = (void*)0;
int i;
_Bool _condtional_value_X1056;
_Bool _condtional_value_X1057;
_Bool _condtional_value_X1058;
void* __right_value927 = (void*)0;
char* new_fun_name;
void* __right_value928 = (void*)0;
_Bool _condtional_value_X1059;
void* __right_value929 = (void*)0;
char* __dec_obj263;
_Bool _condtional_value_X1060;
void* __right_value930 = (void*)0;
_Bool _condtional_value_X1061;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct buffer* source;
int i_242;
void* __right_value933 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X1062;
_Bool _condtional_value_X1063;
_Bool _condtional_value_X1064;
struct tuple2$2char$phsType$ph* multiple_assign_var25 = (void*)0;
char* name_243=0;
struct sType* field_type=0;
char* p;
int sline;
char* sname;
struct buffer* source3;
char* head;
struct buffer* __dec_obj264;
void* __right_value934 = (void*)0;
char* __dec_obj265;
void* __right_value935 = (void*)0;
struct sBlock* block;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct sType* result_type;
void* __right_value939 = (void*)0;
char* name_244;
void* __right_value940 = (void*)0;
struct sType* self_type;
struct sType* __list_values29__[1];
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct list$1sType$ph* param_types;
void* __right_value943 = (void*)0;
char* __list_values30__[1];
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct list$1char$ph* param_default_parametors;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sFun* fun2;
_Bool _condtional_value_X1065;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sFun* fun;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sNode* _inf_value18;
struct sFunNode* _inf_obj_value18;
void* __right_value958 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X1066;
char* __dec_obj266;
struct buffer* __dec_obj267;
char* __dec_obj268;
char* __dec_obj269;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__222;
memset(&i, 0, sizeof(int));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj260=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj261=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj262=type,
    type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj262,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass=type->mClass;
    if(({    (_condtional_value_X1052=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X1052;    })) {
        get_hash_key_fun=((struct sFun*)(__right_value921=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        come_call_finalizer(sFun_finalize, __right_value921, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X1053=(get_hash_key_fun==((void*)0)));        _condtional_value_X1053;        })) {
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            generics_fun=((struct sGenericsFun*)(__right_value924=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            come_call_finalizer(sGenericsFun_finalize, __right_value924, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1054=(generics_fun));            _condtional_value_X1054;            })) {
                multiple_assign_var24=((struct tuple2$2char$phbool$*)(__right_value925=create_generics_fun((char*)come_increment_ref_count(real_fun_name),generics_fun,(struct sType*)come_increment_ref_count(type),info)));
                name=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                err=multiple_assign_var24->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value925, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(({                (_condtional_value_X1055=(!err));                _condtional_value_X1055;                })) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun=((struct sFun*)(__right_value926=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value926, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        ({        (_condtional_value_X1056=(i=128-1));        _condtional_value_X1056;        });        ({        (_condtional_value_X1057=(i>=1));        _condtional_value_X1057;        });        ({        (_condtional_value_X1058=(i--));        _condtional_value_X1058;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i));
            get_hash_key_fun=((struct sFun*)(__right_value928=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value928, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1059=(get_hash_key_fun));            _condtional_value_X1059;            })) {
                __dec_obj263=real_fun_name,
                real_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X1060=(get_hash_key_fun==((void*)0)));        _condtional_value_X1060;        })) {
            get_hash_key_fun=((struct sFun*)(__right_value930=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value930, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(({    (_condtional_value_X1061=(get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol));    _condtional_value_X1061;    })) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3997, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"unsigned int result = 0;\n");
        i_242=0;
        klass=((struct sClass*)(__right_value933=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        come_call_finalizer(sClass_finalize, __right_value933, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        ({        (_condtional_value_X1062=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved))));        _condtional_value_X1062;        });        ({        (_condtional_value_X1063=(!list$1tuple2$2char$phsType$ph$ph_end((o2_saved))));        _condtional_value_X1063;        });        ({        (_condtional_value_X1064=(it=list$1tuple2$2char$phsType$ph$ph_next((o2_saved))));        _condtional_value_X1064;        })        ){
            multiple_assign_var25=it;
            name_243=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var25->v2);
            char source2[1024];
            memset(&source2, 0, sizeof(char)            *(1024)            );
            snprintf(source2,1024,"result += ((int)self.%s).get_hash_key();\n",name_243);
            buffer_append_str(source,source2);
            i_242++;
            (name_243 = come_decrement_ref_count(name_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source,"return result;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj264=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj264,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj265=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 4034, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type->mUnsigned=(_Bool)1;
        name_244=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "05function.c", 4036, "char*"));
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values29__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4039, "struct list$1sType$ph")),1,__list_values29__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values30__[0]=((char*)(__right_value943=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4040, "struct list$1char$ph")),1,__list_values30__)));
        (__right_value943 = come_decrement_ref_count(__right_value943, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4041, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value949=__builtin_string(name_244)))));
        (__right_value948 = come_decrement_ref_count(__right_value948, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value949 = come_decrement_ref_count(__right_value949, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X1065=(fun2==((void*)0)||fun2->mExternal));        _condtional_value_X1065;        })) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4050, "struct sFun*")),(char*)come_increment_ref_count(name_244),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_244)),(struct sFun*)come_increment_ref_count(fun));
            get_hash_key_fun=fun;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4061, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value957=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4061, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
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
            node=(struct sNode*)come_increment_ref_count(_inf_value18);
            come_call_finalizer(sFunNode_finalize, __right_value957, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X1066=(!Value));            _condtional_value_X1066;            })) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            get_hash_key_fun=fun2;
        }
        __dec_obj266=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline;
        __dec_obj267=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj267,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_244 = come_decrement_ref_count(name_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj268=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj269=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__222 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value960=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4086, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun,(char*)come_increment_ref_count(real_fun_name)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value960, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__222;
}

struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info){
struct sFun* caller_fun;
int caller_line;
char* caller_sname;
char* last_code;
char* __dec_obj270;
char* last_code2;
char* __dec_obj271;
void* __right_value961 = (void*)0;
char* sname_top;
int sline_top;
struct sType* result_type;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X1067;
_Bool _condtional_value_X1068;
_Bool _condtional_value_X1069;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct list$1char$ph* param_names;
void* __right_value966 = (void*)0;
struct list$1char$ph* param_default_parametors;
char* p;
int sline;
char* sname;
char* head;
struct buffer* source;
void* __right_value967 = (void*)0;
struct buffer* __dec_obj272;
char* __dec_obj273;
void* __right_value968 = (void*)0;
struct sBlock* block;
struct buffer* __dec_obj274;
char* __dec_obj275;
_Bool const_fun;
_Bool var_args;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sFun* fun2;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* _inf_value19;
struct sFunNode* _inf_obj_value19;
void* __right_value975 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X1070;
struct sFun* __result_obj__223;
void* __right_value976 = (void*)0;
char* __dec_obj276;
char* __dec_obj277;
char* __dec_obj278;
struct sFun* __result_obj__224;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj270=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj271=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    result_type=(struct sType*)come_increment_ref_count(fun->mResultType);
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4108, "struct list$1sType$ph*"))));
    for(    ({    (_condtional_value_X1067=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it=list$1sType$ph_begin((o2_saved))));    _condtional_value_X1067;    });    ({    (_condtional_value_X1068=(!list$1sType$ph_end((o2_saved))));    _condtional_value_X1068;    });    ({    (_condtional_value_X1069=(it=list$1sType$ph_next((o2_saved))));    _condtional_value_X1069;    })    ){
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj272=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    come_call_finalizer(buffer_finalize, __dec_obj272,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj273=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj274=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj274,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj275=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    const_fun=fun->mConstFun;
    var_args=fun->mVarArgs;
    fun2=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4144, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4149, "struct sNode");
    _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value974=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4149, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2),info))));
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
    node=(struct sNode*)come_increment_ref_count(_inf_value19);
    come_call_finalizer(sFunNode_finalize, __right_value974, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value=node_compile(node,info);
    if(({    (_condtional_value_X1070=(!Value));    _condtional_value_X1070;    })) {
        __result_obj__223 = (void*)come_increment_ref_count(((void*)0));
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__223;
    }
    else {
    }
    __dec_obj276=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top;
    __dec_obj277=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj278=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj278 = come_decrement_ref_count(__dec_obj278, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    __result_obj__224 = (struct sFun*)come_increment_ref_count(fun2);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__224;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
_Bool _condtional_value_X1071;
struct sType* __dec_obj279;
char* result;
struct list$1CVALUE$ph* stack_saved;
struct list$1sRightValueObject$ph* right_value_objects;
struct sClass* klass;
char* class_name;
void* __right_value977 = (void*)0;
struct sType* type2;
struct sFun* cloner;
char* fun_name2;
_Bool _condtional_value_X1072;
void* __right_value978 = (void*)0;
char* none_generics_name;
void* __right_value979 = (void*)0;
struct sType* obj_type;
void* __right_value980 = (void*)0;
char* __dec_obj280;
void* __right_value981 = (void*)0;
char* fun_name3;
void* __right_value982 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X1073;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var26 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X1074;
_Bool __result_obj__225;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
char* __dec_obj281;
int i;
_Bool _condtional_value_X1077;
_Bool _condtional_value_X1078;
_Bool _condtional_value_X1079;
void* __right_value988 = (void*)0;
char* new_fun_name;
void* __right_value989 = (void*)0;
_Bool _condtional_value_X1080;
void* __right_value990 = (void*)0;
char* __dec_obj282;
_Bool _condtional_value_X1081;
void* __right_value991 = (void*)0;
_Bool _condtional_value_X1082;
void* __right_value992 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var27 = (void*)0;
struct sFun* fun=0;
char* new_fun_name_245=0;
char* __dec_obj283;
struct list$1sRightValueObject$ph* __dec_obj284;
struct list$1CVALUE$ph* __dec_obj285;
_Bool __result_obj__226;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(({    (_condtional_value_X1071=(type->mNoSolvedGenericsType));    _condtional_value_X1071;    })) {
        __dec_obj279=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj279,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    class_name=klass->mName;
    char* fun_name="equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(({    (_condtional_value_X1072=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X1072;    })) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj280=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj280 = come_decrement_ref_count(__dec_obj280, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value982=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value982, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X1073=(generics_fun));        _condtional_value_X1073;        })) {
            multiple_assign_var26=((struct tuple2$2char$phbool$*)(__right_value984=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            err=multiple_assign_var26->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value984, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1074=(!err));            _condtional_value_X1074;            })) {
                __result_obj__225 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__225;
            }
            else {
                cloner=((struct sFun*)(__right_value985=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                come_call_finalizer(sFun_finalize, __right_value985, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value986=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value986, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj281=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj281 = come_decrement_ref_count(__dec_obj281, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        ({        (_condtional_value_X1077=(i=128-1));        _condtional_value_X1077;        });        ({        (_condtional_value_X1078=(i>=1));        _condtional_value_X1078;        });        ({        (_condtional_value_X1079=(i--));        _condtional_value_X1079;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value989=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value989, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1080=(cloner));            _condtional_value_X1080;            })) {
                __dec_obj282=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X1081=(cloner==((void*)0)));        _condtional_value_X1081;        })) {
            cloner=((struct sFun*)(__right_value991=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value991, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(({    (_condtional_value_X1082=(cloner==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber));    _condtional_value_X1082;    })) {
        multiple_assign_var27=((struct tuple2$2sFun$pchar$ph*)(__right_value992=create_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name,info)));
        fun=multiple_assign_var27->v1;
        new_fun_name_245=(char*)come_increment_ref_count(multiple_assign_var27->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value992, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj283=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_245);
        __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner=fun;
        (new_fun_name_245 = come_decrement_ref_count(new_fun_name_245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj284=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj284,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj285=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj285,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__226 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__226;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X1075;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X1075=(it!=((void*)0)));    _condtional_value_X1075;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
_Bool _condtional_value_X1076;
    if(({    (_condtional_value_X1076=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X1076;    })) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X1083;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X1083=(it!=((void*)0)));    _condtional_value_X1083;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
_Bool _condtional_value_X1084;
struct sType* __dec_obj286;
char* result;
struct list$1CVALUE$ph* stack_saved;
struct list$1sRightValueObject$ph* right_value_objects;
struct sClass* klass;
char* class_name;
void* __right_value993 = (void*)0;
struct sType* type2;
struct sFun* cloner;
char* fun_name2;
_Bool _condtional_value_X1085;
void* __right_value994 = (void*)0;
char* none_generics_name;
void* __right_value995 = (void*)0;
struct sType* obj_type;
void* __right_value996 = (void*)0;
char* __dec_obj287;
void* __right_value997 = (void*)0;
char* fun_name3;
void* __right_value998 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X1086;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var28 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X1087;
_Bool __result_obj__227;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
char* __dec_obj288;
int i;
_Bool _condtional_value_X1088;
_Bool _condtional_value_X1089;
_Bool _condtional_value_X1090;
void* __right_value1004 = (void*)0;
char* new_fun_name;
void* __right_value1005 = (void*)0;
_Bool _condtional_value_X1091;
void* __right_value1006 = (void*)0;
char* __dec_obj289;
_Bool _condtional_value_X1092;
void* __right_value1007 = (void*)0;
_Bool _condtional_value_X1093;
void* __right_value1008 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var29 = (void*)0;
struct sFun* fun=0;
char* new_fun_name_246=0;
char* __dec_obj290;
struct list$1sRightValueObject$ph* __dec_obj291;
struct list$1CVALUE$ph* __dec_obj292;
_Bool __result_obj__228;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(({    (_condtional_value_X1084=(type->mNoSolvedGenericsType));    _condtional_value_X1084;    })) {
        __dec_obj286=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj286,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    class_name=klass->mName;
    char* fun_name="operator_equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(({    (_condtional_value_X1085=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X1085;    })) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj287=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj287 = come_decrement_ref_count(__dec_obj287, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value998=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value998, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X1086=(generics_fun));        _condtional_value_X1086;        })) {
            multiple_assign_var28=((struct tuple2$2char$phbool$*)(__right_value1000=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var28->v1);
            err=multiple_assign_var28->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1000, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1087=(!err));            _condtional_value_X1087;            })) {
                __result_obj__227 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__227;
            }
            cloner=((struct sFun*)(__right_value1001=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            come_call_finalizer(sFun_finalize, __right_value1001, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value1002=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value1002, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj288=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj288 = come_decrement_ref_count(__dec_obj288, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        ({        (_condtional_value_X1088=(i=128-1));        _condtional_value_X1088;        });        ({        (_condtional_value_X1089=(i>=1));        _condtional_value_X1089;        });        ({        (_condtional_value_X1090=(i--));        _condtional_value_X1090;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value1005=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value1005, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1091=(cloner));            _condtional_value_X1091;            })) {
                __dec_obj289=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj289 = come_decrement_ref_count(__dec_obj289, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X1092=(cloner==((void*)0)));        _condtional_value_X1092;        })) {
            cloner=((struct sFun*)(__right_value1007=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value1007, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(({    (_condtional_value_X1093=(cloner==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber));    _condtional_value_X1093;    })) {
        multiple_assign_var29=((struct tuple2$2sFun$pchar$ph*)(__right_value1008=create_operator_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name,info)));
        fun=multiple_assign_var29->v1;
        new_fun_name_246=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1008, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj290=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_246);
        __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner=fun;
        (new_fun_name_246 = come_decrement_ref_count(new_fun_name_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj291=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj291,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj292=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj292,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__228 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__228;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
_Bool _condtional_value_X1094;
struct sType* __dec_obj293;
char* result;
struct list$1CVALUE$ph* stack_saved;
struct list$1sRightValueObject$ph* right_value_objects;
struct sClass* klass;
char* class_name;
void* __right_value1009 = (void*)0;
struct sType* type2;
struct sFun* cloner;
char* fun_name2;
_Bool _condtional_value_X1095;
void* __right_value1010 = (void*)0;
char* none_generics_name;
void* __right_value1011 = (void*)0;
struct sType* obj_type;
void* __right_value1012 = (void*)0;
char* __dec_obj294;
void* __right_value1013 = (void*)0;
char* fun_name3;
void* __right_value1014 = (void*)0;
struct sGenericsFun* generics_fun;
_Bool _condtional_value_X1096;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var30 = (void*)0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X1097;
_Bool __result_obj__229;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
char* __dec_obj295;
int i;
_Bool _condtional_value_X1098;
_Bool _condtional_value_X1099;
_Bool _condtional_value_X1100;
void* __right_value1020 = (void*)0;
char* new_fun_name;
void* __right_value1021 = (void*)0;
_Bool _condtional_value_X1101;
void* __right_value1022 = (void*)0;
char* __dec_obj296;
_Bool _condtional_value_X1102;
void* __right_value1023 = (void*)0;
_Bool _condtional_value_X1103;
void* __right_value1024 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var31 = (void*)0;
struct sFun* fun=0;
char* new_fun_name_247=0;
char* __dec_obj297;
struct list$1sRightValueObject$ph* __dec_obj298;
struct list$1CVALUE$ph* __dec_obj299;
_Bool __result_obj__230;
fun_name2 = (void*)0;
memset(&i, 0, sizeof(int));
    if(({    (_condtional_value_X1094=(type->mNoSolvedGenericsType));    _condtional_value_X1094;    })) {
        __dec_obj293=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj293,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    class_name=klass->mName;
    char* fun_name="operator_not_equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(({    (_condtional_value_X1095=(list$1sType$ph_length(type->mGenericsTypes)>0));    _condtional_value_X1095;    })) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj294=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj294 = come_decrement_ref_count(__dec_obj294, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value1014=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1014, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X1096=(generics_fun));        _condtional_value_X1096;        })) {
            multiple_assign_var30=((struct tuple2$2char$phbool$*)(__right_value1016=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(obj_type),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var30->v1);
            err=multiple_assign_var30->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1016, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1097=(!err));            _condtional_value_X1097;            })) {
                __result_obj__229 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__229;
            }
            cloner=((struct sFun*)(__right_value1017=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            come_call_finalizer(sFun_finalize, __right_value1017, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value1018=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value1018, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj295=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj295 = come_decrement_ref_count(__dec_obj295, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        ({        (_condtional_value_X1098=(i=128-1));        _condtional_value_X1098;        });        ({        (_condtional_value_X1099=(i>=1));        _condtional_value_X1099;        });        ({        (_condtional_value_X1100=(i--));        _condtional_value_X1100;        })        ){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value1021=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            come_call_finalizer(sFun_finalize, __right_value1021, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X1101=(cloner));            _condtional_value_X1101;            })) {
                __dec_obj296=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj296 = come_decrement_ref_count(__dec_obj296, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X1102=(cloner==((void*)0)));        _condtional_value_X1102;        })) {
            cloner=((struct sFun*)(__right_value1023=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            come_call_finalizer(sFun_finalize, __right_value1023, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(({    (_condtional_value_X1103=(cloner==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber));    _condtional_value_X1103;    })) {
        multiple_assign_var31=((struct tuple2$2sFun$pchar$ph*)(__right_value1024=create_operator_not_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name,info)));
        fun=multiple_assign_var31->v1;
        new_fun_name_247=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1024, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj297=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_247);
        __dec_obj297 = come_decrement_ref_count(__dec_obj297, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner=fun;
        (new_fun_name_247 = come_decrement_ref_count(new_fun_name_247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj298=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj298,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj299=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj299,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__230 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__230;
}

