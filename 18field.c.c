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

extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdinp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdoutp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stderrp;
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
} __attribute__((aligned(_Alignof(unsigned int))));

struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(_Alignof(unsigned int))));

struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(_Alignof(unsigned int))));

struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(_Alignof(unsigned int))));

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

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6) __attribute__((availability(macosx,introduced=10.10)));
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int printf(const char* anonymous_var_nameX15, ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE* anonymous_var_nameX32);
int fclose(struct __sFILE* anonymous_var_nameX33);
int feof(struct __sFILE* anonymous_var_nameX34);
int ferror(struct __sFILE* anonymous_var_nameX35);
int fflush(struct __sFILE* anonymous_var_nameX36);
int fgetc(struct __sFILE* anonymous_var_nameX37);
int fgetpos(struct __sFILE* anonymous_var_nameX38, long long* anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int __size, struct __sFILE* anonymous_var_nameX41);
struct __sFILE* fopen(const char* __filename, const char* __mode) __asm("_" "fopen" );
int fprintf(struct __sFILE* anonymous_var_nameX42, const char* anonymous_var_nameX43, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
int fputs(const char* anonymous_var_nameX46, struct __sFILE* anonymous_var_nameX47) __asm("_" "fputs" );
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX48, const char* anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50) __asm("_" "freopen" );
int fscanf(struct __sFILE* anonymous_var_nameX51, const char* anonymous_var_nameX52, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE* anonymous_var_nameX53, long anonymous_var_nameX54, int anonymous_var_nameX55);
int fsetpos(struct __sFILE* anonymous_var_nameX56, const long long* anonymous_var_nameX57);
long ftell(struct __sFILE* anonymous_var_nameX58);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream) __asm("_" "fwrite" );
int getc(struct __sFILE* anonymous_var_nameX59);
int getchar();
char* gets(char* anonymous_var_nameX60);
void perror(const char* anonymous_var_nameX61) __attribute__((__cold__));
int putc(int anonymous_var_nameX62, struct __sFILE* anonymous_var_nameX63);
int putchar(int anonymous_var_nameX64);
int puts(const char* anonymous_var_nameX65);
int remove(const char* anonymous_var_nameX66);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX67);
int scanf(const char* anonymous_var_nameX68, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* anonymous_var_nameX69, char* anonymous_var_nameX70);
int setvbuf(struct __sFILE* anonymous_var_nameX71, char* anonymous_var_nameX72, int anonymous_var_nameX73, unsigned long  int __size);
int sprintf(char* anonymous_var_nameX74, const char* anonymous_var_nameX75, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX78);
int ungetc(int anonymous_var_nameX79, struct __sFILE* anonymous_var_nameX80);
int vfprintf(struct __sFILE* anonymous_var_nameX81, const char* anonymous_var_nameX82, va_list anonymous_var_nameX83) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* anonymous_var_nameX84, va_list anonymous_var_nameX85) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char* anonymous_var_nameX86, const char* anonymous_var_nameX87, va_list anonymous_var_nameX88) __attribute__((__format__ (__printf__, 2, 0))) ;
char* ctermid(char* anonymous_var_nameX89);
struct __sFILE* fdopen(int anonymous_var_nameX90, const char* anonymous_var_nameX91) __asm("_" "fdopen" );
int fileno(struct __sFILE* anonymous_var_nameX92);
int pclose(struct __sFILE* anonymous_var_nameX93) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
struct __sFILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
int __srget(struct __sFILE* anonymous_var_nameX96);
int __svfscanf(struct __sFILE* anonymous_var_nameX97, const char* anonymous_var_nameX98, va_list anonymous_var_nameX99) __attribute__((__format__ (__scanf__, 2, 0)));
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
char* tempnam(const char* __dir, const char* __prefix) __asm("_" "tempnam" );
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX112) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* __format, va_list anonymous_var_nameX113) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX114) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX115) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int anonymous_var_nameX116, const char* anonymous_var_nameX117, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int anonymous_var_nameX118, const char* anonymous_var_nameX119, va_list anonymous_var_nameX120) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int asprintf(char** anonymous_var_nameX121, const char* anonymous_var_nameX122, ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* anonymous_var_nameX123);
char* fgetln(struct __sFILE* anonymous_var_nameX124, unsigned long  int* __len);
const char* fmtcheck(const char* anonymous_var_nameX125, const char* anonymous_var_nameX126) __attribute__((format_arg(2)));
int fpurge(struct __sFILE* anonymous_var_nameX127);
void setbuffer(struct __sFILE* anonymous_var_nameX128, char* anonymous_var_nameX129, int __size);
int setlinebuf(struct __sFILE* anonymous_var_nameX130);
int vasprintf(char** anonymous_var_nameX131, const char* anonymous_var_nameX132, va_list anonymous_var_nameX133) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE* funopen(const void* anonymous_var_nameX134, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX163, unsigned int anonymous_var_nameX164);
int getiopolicy_np(int anonymous_var_nameX165, int anonymous_var_nameX166) __attribute__((availability(macosx,introduced=10.5)));
int getrlimit(int anonymous_var_nameX167, struct rlimit* anonymous_var_nameX168) __asm("_" "getrlimit" );
int getrusage(int anonymous_var_nameX169, struct rusage* anonymous_var_nameX170);
int setpriority(int anonymous_var_nameX171, unsigned int anonymous_var_nameX172, int anonymous_var_nameX173);
int setiopolicy_np(int anonymous_var_nameX174, int anonymous_var_nameX175, int anonymous_var_nameX176) __attribute__((availability(macosx,introduced=10.5)));
int setrlimit(int anonymous_var_nameX177, const struct rlimit* anonymous_var_nameX178) __asm("_" "setrlimit" );
int wait(int* anonymous_var_nameX179) __asm("_" "wait" );
int waitpid(int anonymous_var_nameX180, int* anonymous_var_nameX181, int anonymous_var_nameX182) __asm("_" "waitpid" );
int waitid(enum anonymous_typeY2 anonymous_var_nameX183, unsigned int anonymous_var_nameX184, struct __siginfo* anonymous_var_nameX185, int anonymous_var_nameX186) __asm("_" "waitid" );
int wait3(int* anonymous_var_nameX187, int anonymous_var_nameX188, struct rusage* anonymous_var_nameX189);
int wait4(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192, struct rusage* anonymous_var_nameX193);
void* alloca(unsigned long  int __size);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* calloc(unsigned long  int __count, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void free(void* anonymous_var_nameX194);
void* realloc(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void* reallocf(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* valloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size) __attribute__((availability(macosx,introduced=10.6)));
void abort() __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int anonymous_var_nameX195) __attribute__((__const__));
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX196);
int atoi(const char* anonymous_var_nameX197);
long atol(const char* anonymous_var_nameX198);
long long atoll(const char* anonymous_var_nameX199);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX202, int anonymous_var_nameX203) __attribute__((__const__));
void exit(int anonymous_var_nameX204) __attribute__((__noreturn__));
char* getenv(const char* anonymous_var_nameX205);
long labs(long anonymous_var_nameX206) __attribute__((__const__));
struct anonymous_typeX6 ldiv(long anonymous_var_nameX207, long anonymous_var_nameX208) __attribute__((__const__));
long long llabs(long  long anonymous_var_nameX209);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX210, long  long anonymous_var_nameX211);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX212, const char* anonymous_var_nameX213, unsigned long  int __n);
int mbtowc(int* anonymous_var_nameX214, const char* anonymous_var_nameX215, unsigned long  int __n);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX218) __attribute__((__noreturn__));
int rand() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
void srand(unsigned int anonymous_var_nameX219) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char* anonymous_var_nameX220, char** anonymous_var_nameX221) __asm("_" "strtod" );
float strtof(const char* anonymous_var_nameX222, char** anonymous_var_nameX223) __asm("_" "strtof" );
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX224, char** anonymous_var_nameX225);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX226) __asm("_" "system" );
unsigned long  int wcstombs(char* anonymous_var_nameX227, const int* anonymous_var_nameX228, unsigned long  int __n);
int wctomb(char* anonymous_var_nameX229, int anonymous_var_nameX230);
void _Exit(int anonymous_var_nameX231) __attribute__((__noreturn__));
long a64l(const char* anonymous_var_nameX232);
double drand48();
char* ecvt(double anonymous_var_nameX233, int anonymous_var_nameX234, int* anonymous_var_nameX235, int* anonymous_var_nameX236);
double erand48(unsigned short int anonymous_var_nameX237[3]);
char* fcvt(double anonymous_var_nameX238, int anonymous_var_nameX239, int* anonymous_var_nameX240, int* anonymous_var_nameX241);
char* gcvt(double anonymous_var_nameX242, int anonymous_var_nameX243, char* anonymous_var_nameX244);
int getsubopt(char** anonymous_var_nameX245, char** anonymous_var_nameX246, char** anonymous_var_nameX247);
int grantpt(int anonymous_var_nameX248);
char* initstate(unsigned int anonymous_var_nameX249, char* anonymous_var_nameX250, unsigned long  int __size);
long jrand48(unsigned short int anonymous_var_nameX251[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* l64a(long anonymous_var_nameX252);
void lcong48(unsigned short int anonymous_var_nameX253[7]);
long lrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* mktemp(char* anonymous_var_nameX254);
int mkstemp(char* anonymous_var_nameX255);
long mrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short int anonymous_var_nameX256[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int anonymous_var_nameX257);
char* ptsname(int anonymous_var_nameX258);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));
int putenv(char* anonymous_var_nameX259) __asm("_" "putenv" );
long random() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned int* anonymous_var_nameX260) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262) __asm("_" "realpath" "$DARWIN_EXTSN");
unsigned short int* seed48(unsigned short int anonymous_var_nameX263[3]);
int setenv(const char* __name, const char* __value, int __overwrite) __asm("_" "setenv" );
void setkey(const char* anonymous_var_nameX264) __asm("_" "setkey" );
char* setstate(const char* anonymous_var_nameX265);
void srand48(long anonymous_var_nameX266);
void srandom(unsigned int anonymous_var_nameX267);
int unlockpt(int anonymous_var_nameX268);
int unsetenv(const char* anonymous_var_nameX269) __asm("_" "unsetenv" );
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX270, int __datlen) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void* __buf, unsigned long  int __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound) __attribute__((availability(macosx,introduced=10.7)));
int atexit_b(void (*anonymous_lambda_var_nameZ8)()) __attribute__((availability(macosx,introduced=10.6)));
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
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
int daemon(int anonymous_var_nameX295, int anonymous_var_nameX296) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char* devname(int anonymous_var_nameX297, unsigned short int anonymous_var_nameX298);
char* devname_r(int anonymous_var_nameX299, unsigned short int anonymous_var_nameX300, char* buf, int len);
char* getbsize(int* anonymous_var_nameX301, long* anonymous_var_nameX302);
int getloadavg(double anonymous_var_nameX303[], int __nelem);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX304);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX317, int (*__compar)(void*,const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX323, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX327) __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp) __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));
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
char* strerror(int __errnum) __asm("_" "strerror" );
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
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)))
                                        ;
char* strndup(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int strnlen(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.9)));
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
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
int ffsl(long anonymous_var_nameX345) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long  long anonymous_var_nameX346) __attribute__((availability(macosx,introduced=10.9)));
int fls(int anonymous_var_nameX347) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long anonymous_var_nameX348) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long  long anonymous_var_nameX349) __attribute__((availability(macosx,introduced=10.9)));
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
unsigned long  int clock() __asm("_" "clock" );
char* ctime(const long* anonymous_var_nameX390);
double difftime(long anonymous_var_nameX391, long anonymous_var_nameX392);
struct tm* getdate(const char* anonymous_var_nameX393);
struct tm* gmtime(const long* anonymous_var_nameX394);
struct tm* localtime(const long* anonymous_var_nameX395);
long mktime(struct tm* anonymous_var_nameX396) __asm("_" "mktime" );
unsigned long  int strftime(char* anonymous_var_nameX397, unsigned long  int __maxsize, const char* anonymous_var_nameX398, const struct tm* anonymous_var_nameX399) __asm("_" "strftime" );
char* strptime(const char* anonymous_var_nameX400, const char* anonymous_var_nameX401, struct tm* anonymous_var_nameX402) __asm("_" "strptime" );
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
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp) __asm("_" "nanosleep" );
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
unsigned long  int wcsftime(int* anonymous_var_nameX488, unsigned long  int __maxlen, const int* anonymous_var_nameX489, const struct tm* anonymous_var_nameX490) __asm("_" "wcsftime" );
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
int* wcpcpy(int* anonymous_var_nameX560, const int* anonymous_var_nameX561) __attribute__((availability(macosx,introduced=10.7)))
                                  ;
int* wcpncpy(int* anonymous_var_nameX562, const int* anonymous_var_nameX563, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)))
                                  ;
int* wcsdup(const int* anonymous_var_nameX564) __attribute__((availability(macosx,introduced=10.7)));
int wcscasecmp(const int* anonymous_var_nameX565, const int* anonymous_var_nameX566) __attribute__((availability(macosx,introduced=10.7)));
int wcsncasecmp(const int* anonymous_var_nameX567, const int* anonymous_var_nameX568, unsigned long  int n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcsnlen(const int* anonymous_var_nameX569, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcsnrtombs(char* anonymous_var_nameX570, const int** anonymous_var_nameX571, unsigned long  int anonymous_var_nameX572, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX573);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int* fgetwln(struct __sFILE* anonymous_var_nameX574, unsigned long  int* __len) __attribute__((availability(macosx,introduced=10.7)));
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
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
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
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
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
// uniq global variable
// inline function

// body function
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value37 = (void*)0;
struct sType* generics_type_0;
struct sType* __dec_obj24;
struct sClass* klass_30;
char* class_name_31;
void* __right_value38 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1 = (void*)0;
char* fun_name2_32=0;
struct sFun* operator_fun_33=0;
struct sGenericsFun* generics_fun_34=0;
_Bool result_35;
struct sNode* obj_36;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_37;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct sNode* node_43;
_Bool Value_44;
_Bool __result_obj__20;
    generics_type_0=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_0->mNoSolvedGenericsType    ) {
        __dec_obj24=generics_type_0,
        generics_type_0=(struct sType*)come_increment_ref_count(generics_type_0->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value38=get_method(fun_name,(struct sType*)come_increment_ref_count(type),info)));
    fun_name2_32=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_33=multiple_assign_var1->v2;
    generics_fun_34=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    result_35=(_Bool)0;
    if(    operator_fun_33    ) {
        obj_36=(struct sNode*)come_increment_ref_count(left_node);
        params_37=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "18field.c", 20, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 22, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 23, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(middle_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 24, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
        node_43=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj_36),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_37),((void*)0),0,((void*)0),info,(_Bool)0));
        Value_44=node_compile(node_43,info);
        if(        Value_44        ) {
            result_35=(_Bool)1;
        }
        else {
        }
        ((obj_36) ? obj_36 = come_decrement_ref_count(obj_36, ((struct sNode*)obj_36)->finalize, ((struct sNode*)obj_36)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_43) ? node_43 = come_decrement_ref_count(node_43, ((struct sNode*)node_43)->finalize, ((struct sNode*)node_43)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__20 = result_35;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((middle_node) ? middle_node = come_decrement_ref_count(middle_node, ((struct sNode*)middle_node)->finalize, ((struct sNode*)middle_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, generics_type_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__20;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result_7;
void* __right_value1 = (void*)0;
struct sType* __dec_obj1;
void* __right_value2 = (void*)0;
struct sType* __dec_obj2;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value11 = (void*)0;
struct sType* __dec_obj7;
void* __right_value13 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value15 = (void*)0;
char* __dec_obj10;
void* __right_value16 = (void*)0;
char* __dec_obj11;
void* __right_value17 = (void*)0;
char* __dec_obj12;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value26 = (void*)0;
char* __dec_obj17;
void* __right_value27 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value35 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value36 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result_7=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_7->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_7->mOriginalLoadVarType,
        result_7->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_7->mChannelType,
        result_7->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_7->mGenericsTypes,
        result_7->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_7->mNoSolvedGenericsType,
        result_7->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_7->mSizeNum,
        result_7->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_7->mAlignas,
        result_7->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_7->mTupleName,
        result_7->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_7->mAttribute,
        result_7->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_7->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_7->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_7->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_7->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_7->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_7->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_7->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_7->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_7->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_7->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_7->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_7->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_7->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_7->mAsmName,
        result_7->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_7->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_7->mArrayNum,
        result_7->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_7->mOriginalTypeName,
        result_7->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_7->mParamTypes,
        result_7->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_7->mParamNames,
        result_7->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_7->mResultType,
        result_7->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_7->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_7);
    come_call_finalizer(sType_finalize, result_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_1;
struct list_item$1sType$ph* prev_it_2;
    it_1=self->head;
    while(    it_1!=((void*)0)    ) {
        prev_it_2=it_1;
        it_1=it_1->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_3;
struct list_item$1sNode$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)    ) {
        prev_it_4=it_3;
        it_3=it_3->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_5;
struct list_item$1char$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct list$1sType$ph* result_8;
struct list_item$1sType$ph* it_9;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_8=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1633, "struct list$1sType$ph*"))));
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_8,(struct sType*)come_increment_ref_count(sType_clone(it_9->item)));
        }
        else {
            list$1sType$ph_add(result_8,(struct sType*)come_increment_ref_count(sType_clone(it_9->item)));
        }
        it_9=it_9->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_8);
    come_call_finalizer(list$1sType$ph$p_finalize, result_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value5 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj3;
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj4;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value5=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1652, "struct list_item$1sType$ph*"))));
        litem_10->prev=((void*)0);
        litem_10->next=((void*)0);
        __dec_obj3=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_10;
        self->head=litem_10;
    }
    else if(    self->len==1    ) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1662, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj4=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1672, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj5=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_13;
struct list_item$1sType$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value12 = (void*)0;
struct sNode* result_15;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_15=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_15->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_15->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_15->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_15->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_15->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_15->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_15->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_15->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_15->kind=self->kind;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_15);
    ((result_15) ? result_15 = come_decrement_ref_count(result_15, ((struct sNode*)result_15)->finalize, ((struct sNode*)result_15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct list$1sNode$ph* result_16;
struct list_item$1sNode$ph* it_17;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_16=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1633, "struct list$1sNode$ph*"))));
    it_17=self->head;
    while(    it_17!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_16,(struct sNode*)come_increment_ref_count(sNode_clone(it_17->item)));
        }
        else {
            list$1sNode$ph_add(result_16,(struct sNode*)come_increment_ref_count(sNode_clone(it_17->item)));
        }
        it_17=it_17->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_16);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value20 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj13;
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj14;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value20=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1652, "struct list_item$1sNode$ph*"))));
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        __dec_obj13=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_18;
        self->head=litem_18;
    }
    else if(    self->len==1    ) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1662, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj14=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1672, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj15=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_21;
struct list_item$1sNode$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)    ) {
        prev_it_22=it_21;
        it_21=it_21->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct list$1char$ph* result_23;
struct list_item$1char$ph* it_24;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_23=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1633, "struct list$1char$ph*"))));
    it_24=self->head;
    while(    it_24!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "/usr/local/include/comelang.h", 1638, "char*")));
        }
        else {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "/usr/local/include/comelang.h", 1641, "char*")));
        }
        it_24=it_24->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_23);
    come_call_finalizer(list$1char$ph$p_finalize, result_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value30 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj19;
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj20;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj21;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value30=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1652, "struct list_item$1char$ph*"))));
        litem_25->prev=((void*)0);
        litem_25->next=((void*)0);
        __dec_obj19=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head=litem_25;
    }
    else if(    self->len==1    ) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1662, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj20=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1672, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj21=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_28;
struct list_item$1char$ph* prev_it_29;
    it_28=self->head;
    while(    it_28!=((void*)0)    ) {
        prev_it_29=it_28;
        it_28=it_28->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_38;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_39;
    it_38=self->head;
    while(    it_38!=((void*)0)    ) {
        prev_it_39=it_38;
        it_38=it_38->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value41 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_40;
struct tuple2$2char$phsNode$ph* __dec_obj25;
void* __right_value42 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_41;
struct tuple2$2char$phsNode$ph* __dec_obj26;
void* __right_value43 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_42;
struct tuple2$2char$phsNode$ph* __dec_obj27;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_40=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1652, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        __dec_obj25=litem_40->item,
        litem_40->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1    ) {
        litem_41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1662, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj26=litem_41->item,
        litem_41->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1672, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj27=litem_42->item,
        litem_42->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj28;
struct tuple2$2void$psNode$ph* __result_obj__19;
    self->v1=v1;
    __dec_obj28=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__19 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sNode* __dec_obj29;
void* __right_value53 = (void*)0;
struct sNode* __dec_obj30;
void* __right_value54 = (void*)0;
char* __dec_obj31;
struct sStoreFieldNode* __result_obj__21;
    ((struct sNodeBase*)(__right_value51=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj30=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj31=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__21 = (struct sStoreFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreFieldNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreFieldNode_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __right_value55 = (void*)0;
char* __result_obj__22;
    __result_obj__22 = (char*)come_increment_ref_count(((char*)(__right_value55=__builtin_string("sStoreFieldNode"))));
    (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__22 = come_decrement_ref_count(__result_obj__22, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__22;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_45;
struct sNode* right_46;
void* __right_value56 = (void*)0;
char* name_47;
_Bool Value_48;
_Bool __result_obj__23;
void* __right_value57 = (void*)0;
struct CVALUE* left_value_49;
struct sType* left_type2_50;
struct sType* __dec_obj32;
int i_51;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value60 = (void*)0;
char* __dec_obj33;
void* __right_value61 = (void*)0;
_Bool __result_obj__28;
_Bool Value_58;
_Bool __result_obj__29;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
_Bool new_channel_59;
void* __right_value64 = (void*)0;
struct CVALUE* right_value_60;
struct sType* right_type_61;
struct sType* left_type_62;
struct sType* left_type3_63;
void* __right_value65 = (void*)0;
struct sClass* klass_64;
struct sType* field_type_73;
int index_74;
char* child_field_name_75;
_Bool child_field_is_pointer_76;
void* __right_value66 = (void*)0;
_Bool __result_obj__38;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_77;
struct tuple2$2char$phsType$ph* field_80;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* field_name_83=0;
struct sType* field_type2_84=0;
void* __right_value67 = (void*)0;
struct sType* __dec_obj34;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_85;
struct tuple2$2char$phsType$ph* field_86;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* field_name_87=0;
struct sType* field_type2_88=0;
struct sClass* klass2_89;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_90;
struct tuple2$2char$phsType$ph* field2_91;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* field_name2_92=0;
struct sType* field_type3_93=0;
void* __right_value68 = (void*)0;
char* __dec_obj35;
void* __right_value69 = (void*)0;
struct sType* __dec_obj36;
void* __right_value70 = (void*)0;
struct sType* __dec_obj37;
void* __right_value71 = (void*)0;
_Bool __result_obj__45;
_Bool __result_obj__46;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
struct CVALUE* come_value_94;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
_Bool __result_obj__47;
char* c_value_95;
void* __right_value79 = (void*)0;
char* __dec_obj38;
void* __right_value80 = (void*)0;
char* __dec_obj39;
void* __right_value81 = (void*)0;
char* __dec_obj40;
void* __right_value82 = (void*)0;
char* __dec_obj41;
void* __right_value83 = (void*)0;
char* c_value_96;
void* __right_value84 = (void*)0;
char* __dec_obj42;
char* c_value_97;
void* __right_value85 = (void*)0;
char* __dec_obj43;
void* __right_value86 = (void*)0;
char* __dec_obj44;
void* __right_value87 = (void*)0;
char* __dec_obj45;
void* __right_value88 = (void*)0;
char* __dec_obj46;
void* __right_value89 = (void*)0;
char* c_value_98;
void* __right_value90 = (void*)0;
char* __dec_obj47;
void* __right_value91 = (void*)0;
_Bool __result_obj__48;
char* c_value_99;
void* __right_value92 = (void*)0;
char* __dec_obj48;
void* __right_value93 = (void*)0;
char* __dec_obj49;
void* __right_value94 = (void*)0;
char* __dec_obj50;
void* __right_value95 = (void*)0;
char* __dec_obj51;
void* __right_value96 = (void*)0;
char* c_value_100;
void* __right_value97 = (void*)0;
char* __dec_obj52;
char* c_value_101;
void* __right_value98 = (void*)0;
char* __dec_obj53;
void* __right_value99 = (void*)0;
char* __dec_obj54;
void* __right_value100 = (void*)0;
char* __dec_obj55;
void* __right_value101 = (void*)0;
char* __dec_obj56;
void* __right_value102 = (void*)0;
char* c_value_102;
void* __right_value103 = (void*)0;
char* __dec_obj57;
void* __right_value104 = (void*)0;
_Bool __result_obj__49;
void* __right_value105 = (void*)0;
char* __dec_obj58;
void* __right_value106 = (void*)0;
char* __dec_obj59;
void* __right_value107 = (void*)0;
struct sType* __dec_obj60;
_Bool __result_obj__51;
void* __right_value111 = (void*)0;
char* __dec_obj64;
void* __right_value112 = (void*)0;
char* __dec_obj65;
void* __right_value113 = (void*)0;
char* __dec_obj66;
void* __right_value114 = (void*)0;
char* __dec_obj67;
void* __right_value115 = (void*)0;
char* __dec_obj68;
void* __right_value116 = (void*)0;
char* __dec_obj69;
void* __right_value117 = (void*)0;
_Bool __result_obj__52;
void* __right_value118 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__53;
c_value_95 = (void*)0;
c_value_97 = (void*)0;
c_value_99 = (void*)0;
c_value_101 = (void*)0;
    left_45=self->mLeft;
    right_46=self->mRight;
    name_47=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_48=node_compile(left_45,info);
    if(    !Value_48    ) {
        __result_obj__23 = (_Bool)0;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__23;
    }
    else {
    }
    left_value_49=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_50=(struct sType*)come_increment_ref_count(left_value_49->type);
    if(    left_type2_50->mNoSolvedGenericsType    ) {
        __dec_obj32=left_type2_50,
        left_type2_50=(struct sType*)come_increment_ref_count(left_type2_50->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(left_type2_50->mClass->mName,"tuple1")||string_operator_equals(left_type2_50->mClass->mName,"tuple2")||string_operator_equals(left_type2_50->mClass->mName,"tuple3")||string_operator_equals(left_type2_50->mClass->mName,"tuple3")||string_operator_equals(left_type2_50->mClass->mName,"tuple4")||string_operator_equals(left_type2_50->mClass->mName,"tuple5")    ) {
        for(        i_51=0        ;        i_51<list$1sType$ph_length(left_type2_50->mGenericsTypes)        ;        i_51++        ){
            if(            (_condtional_value_X1=(string_operator_equals(name_47,((struct sType*)(__right_value59=list$1sType$ph_operator_load_element(left_type2_50->mGenericsTypes,i_51)))->mTupleName))),            come_call_finalizer(sType_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                __dec_obj33=name_47,
                name_47=(char*)come_increment_ref_count(xsprintf("v%d",i_51+1));
                __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
    }
    if(    left_type2_50->mImmutable    ) {
        ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"Immutable object can't change the fields")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__28 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__28;
    }
    Value_58=node_compile(right_46,info);
    if(    !Value_58    ) {
        __result_obj__29 = (_Bool)0;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__29;
    }
    else {
    }
    new_channel_59=string_operator_equals(((char*)(__right_value63=right_46->kind(right_46->_protocol_obj))),"sNewChannel");
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    right_value_60=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_61=right_value_60->type;
    left_type_62=(struct sType*)come_increment_ref_count(left_value_49->type);
    left_type3_63=(struct sType*)come_increment_ref_count(left_type_62);
    klass_64=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,left_type3_63->mClass->mName));
    field_type_73=((void*)0);
    index_74=0;
    child_field_name_75=((void*)0);
    child_field_is_pointer_76=(_Bool)0;
    if(    klass_64->mFields==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value66=err_msg(info,"%s fields are null",klass_64->mName)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__38 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__38;
    }
    for(    o2_saved_77=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_64->mFields)),field_80=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_77))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_77))    ;    field_80=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_77))    ){
        multiple_assign_var2=field_80;
        field_name_83=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type2_84=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        string_operator_equals(field_name_83,name_47)        ) {
            __dec_obj34=field_type_73,
            field_type_73=(struct sType*)come_increment_ref_count(sType_clone(field_type2_84));
            come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        index_74++;
        (field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    index_74==list$1tuple2$2char$phsType$ph$ph_length(klass_64->mFields)    ) {
        index_74=0;
        for(        o2_saved_85=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_64->mFields)),field_86=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_85))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_85))        ;        field_86=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_85))        ){
            multiple_assign_var3=field_86;
            field_name_87=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type2_88=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            klass2_89=field_type2_88->mClass;
            if(            klass2_89->mUnion            ) {
                for(                o2_saved_90=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_89->mFields)),field2_91=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_90))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_90))                ;                field2_91=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_90))                ){
                    multiple_assign_var4=field2_91;
                    field_name2_92=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    field_type3_93=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    string_operator_equals(field_name2_92,name_47)                    ) {
                        __dec_obj35=child_field_name_75,
                        child_field_name_75=(char*)come_increment_ref_count(__builtin_string(field_name_87));
                        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        field_type2_88->mPointerNum>0                        ) {
                            child_field_is_pointer_76=(_Bool)1;
                        }
                        __dec_obj36=field_type_73,
                        field_type_73=(struct sType*)come_increment_ref_count(sType_clone(field_type3_93));
                        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        (field_name2_92 = come_decrement_ref_count(field_name2_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, field_type3_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    (field_name2_92 = come_decrement_ref_count(field_name2_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type3_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                if(                child_field_name_75                ) {
                    (field_name_87 = come_decrement_ref_count(field_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_87,name_47)            ) {
                __dec_obj37=field_type_73,
                field_type_73=(struct sType*)come_increment_ref_count(sType_clone(field_type2_88));
                come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (field_name_87 = come_decrement_ref_count(field_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            index_74++;
            (field_name_87 = come_decrement_ref_count(field_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        index_74==list$1tuple2$2char$phsType$ph$ph_length(klass_64->mFields)||field_type_73==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value71=err_msg(info,"field not found(%s) in %s(1)",name_47,klass_64->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__45 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__45;
        }
    }
    if(    field_type_73==((void*)0)    ) {
        __result_obj__46 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__46;
    }
    come_value_94=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 165, "struct CVALUE*"))));
    right_type_61=((struct sType*)(__right_value74=sType_clone(right_value_60->type)));
    come_call_finalizer(sType_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    check_assign_type(((char*)(__right_value76=xsprintf("\%s is assigned to(1)",((char*)(__right_value75=string_to_string(name_47)))))),field_type_73,right_type_61,right_value_60,(_Bool)0,(_Bool)1,(_Bool)1,info);
    (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    right_type_61=((struct sType*)(__right_value77=sType_clone(right_value_60->type)));
    come_call_finalizer(sType_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    field_type_73->mHeap&&!right_value_60->type->mHeap    ) {
        if(        string_operator_equals(right_value_60->type->mClass->mName,"void")&&right_value_60->type->mPointerNum==1        ) {
        }
        else {
            if(            !gComeGC            ) {
                ((struct tuple2$2int$bool$*)(__right_value78=err_msg(info,"require right value as heap object(%s)(1)",name_47)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__47 = (_Bool)1;
                (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__47;
            }
        }
    }
    if(    field_type_73->mHeap&&right_type_61->mHeap&&field_type_73->mPointerNum>0&&right_type_61->mPointerNum>0    ) {
        if(        left_value_49->type->mPointerNum==1        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj38=c_value_95,
                    c_value_95=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj39=c_value_95,
                    c_value_95=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_95,info,(_Bool)0);
                std_move(field_type_73,right_type_61,right_value_60,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj40=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj41=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_95 = come_decrement_ref_count(c_value_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_96=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_96,info,(_Bool)0);
                std_move(field_type_73,right_type_61,right_value_60,info,(_Bool)0);
                __dec_obj42=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_96 = come_decrement_ref_count(c_value_96, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        left_value_49->type->mPointerNum==0        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj43=c_value_97,
                    c_value_97=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj44=c_value_97,
                    c_value_97=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_97,info,(_Bool)0);
                std_move(field_type_73,right_type_61,right_value_60,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj45=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj46=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_98=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_98,info,(_Bool)0);
                std_move(field_type_73,right_value_60->type,right_value_60,info,(_Bool)0);
                __dec_obj47=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value91=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_47,left_value_49->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__48 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__48;
        }
    }
    else if(    field_type_73->mHeap&&field_type_73->mPointerNum>0&&right_type_61->mPointerNum>0&&string_operator_equals(right_type_61->mClass->mName,"void")    ) {
        if(        left_value_49->type->mPointerNum==1        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj48=c_value_99,
                    c_value_99=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj49=c_value_99,
                    c_value_99=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_99,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj50=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj51=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_100=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_100,info,(_Bool)0);
                __dec_obj52=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        left_value_49->type->mPointerNum==0        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj53=c_value_101,
                    c_value_101=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj54=c_value_101,
                    c_value_101=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_101,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj55=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj56=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_101 = come_decrement_ref_count(c_value_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_102=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_102,info,(_Bool)0);
                __dec_obj57=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value104=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_47,left_value_49->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value104, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__49 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__49;
        }
    }
    else if(    field_type_73->mChannel&&new_channel_59    ) {
        if(        child_field_is_pointer_76        ) {
            __dec_obj58=come_value_94->c_value,
            come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_49->c_value,name_47,right_value_60->c_value));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj59=come_value_94->c_value,
            come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_49->c_value,name_47,right_value_60->c_value));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        __dec_obj60=come_value_94->type,
        come_value_94->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_60->type));
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_94->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        add_come_last_code(info,"%s",come_value_94->c_value);
        __result_obj__51 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__51;
    }
    else {
        if(        left_value_49->type->mPointerNum==1        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj64=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj65=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj66=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else if(        left_value_49->type->mPointerNum==0        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj67=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj68=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj69=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value117=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_47,left_value_49->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value117, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__52 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__52;
        }
    }
    __dec_obj70=come_value_94->type,
    come_value_94->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_73));
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_94->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    add_come_last_code(info,"%s",come_value_94->c_value);
    __result_obj__53 = (_Bool)1;
    (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_52;
int i_53;
struct sType* __result_obj__24;
struct sType* default_value_54;
struct sType* __result_obj__25;
default_value_54 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_52=self->head;
    i_53=0;
    while(    it_52!=((void*)0)    ) {
        if(        position==i_53        ) {
            __result_obj__24 = (struct sType*)come_increment_ref_count(it_52->item);
            come_call_finalizer(sType_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__24;
        }
        it_52=it_52->next;
        i_53++;
    }
    memset(&default_value_54,0,sizeof(struct sType*));
    __result_obj__25 = (struct sType*)come_increment_ref_count(default_value_54);
    come_call_finalizer(sType_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_55;
int i_56;
struct sType* __result_obj__26;
struct sType* default_value_57;
struct sType* __result_obj__27;
default_value_57 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_55=self->head;
    i_56=0;
    while(    it_55!=((void*)0)    ) {
        if(        position==i_56        ) {
            __result_obj__26 = (struct sType*)come_increment_ref_count(it_55->item);
            come_call_finalizer(sType_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__26;
        }
        it_55=it_55->next;
        i_56++;
    }
    memset(&default_value_57,0,sizeof(struct sType*));
    __result_obj__27 = (struct sType*)come_increment_ref_count(default_value_57);
    come_call_finalizer(sType_finalize, default_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
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

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_65;
unsigned int hash_66;
unsigned int it_67;
struct sClass* __result_obj__30;
struct sClass* __result_obj__31;
struct sClass* __result_obj__32;
struct sClass* __result_obj__33;
default_value_65 = (void*)0;
    memset(&default_value_65,0,sizeof(struct sClass*));
    hash_66=string_get_hash_key(((char*)key))%self->size;
    it_67=hash_66;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_67]        ) {
            if(            string_equals(self->keys[it_67],key)            ) {
                __result_obj__30 = (struct sClass*)come_increment_ref_count(self->items[it_67]);
                come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
            it_67++;
            if(            it_67>=self->size            ) {
                it_67=0;
            }
            else if(            it_67==hash_66            ) {
                __result_obj__31 = (struct sClass*)come_increment_ref_count(default_value_65);
                come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__31;
            }
        }
        else {
            __result_obj__32 = (struct sClass*)come_increment_ref_count(default_value_65);
            come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__32;
        }
    }
    __result_obj__33 = (struct sClass*)come_increment_ref_count(default_value_65);
    come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_68;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_69;
    it_68=self->head;
    while(    it_68!=((void*)0)    ) {
        prev_it_69=it_68;
        it_68=it_68->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct sClass* default_value_70;
unsigned int hash_71;
unsigned int it_72;
struct sClass* __result_obj__34;
struct sClass* __result_obj__35;
struct sClass* __result_obj__36;
struct sClass* __result_obj__37;
default_value_70 = (void*)0;
    memset(&default_value_70,0,sizeof(struct sClass*));
    hash_71=string_get_hash_key(((char*)key))%self->size;
    it_72=hash_71;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_72]        ) {
            if(            string_equals(self->keys[it_72],key)            ) {
                __result_obj__34 = (struct sClass*)come_increment_ref_count(self->items[it_72]);
                come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__34;
            }
            it_72++;
            if(            it_72>=self->size            ) {
                it_72=0;
            }
            else if(            it_72==hash_71            ) {
                __result_obj__35 = (struct sClass*)come_increment_ref_count(default_value_70);
                come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__35;
            }
        }
        else {
            __result_obj__36 = (struct sClass*)come_increment_ref_count(default_value_70);
            come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__36;
        }
    }
    __result_obj__37 = (struct sClass*)come_increment_ref_count(default_value_70);
    come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_78;
struct tuple2$2char$phsType$ph* __result_obj__39;
struct tuple2$2char$phsType$ph* __result_obj__40;
struct tuple2$2char$phsType$ph* result_79;
struct tuple2$2char$phsType$ph* __result_obj__41;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_78,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__39 = result_78;
        return __result_obj__39;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_79,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__41 = result_79;
    return __result_obj__41;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_81;
struct tuple2$2char$phsType$ph* __result_obj__42;
struct tuple2$2char$phsType$ph* __result_obj__43;
struct tuple2$2char$phsType$ph* result_82;
struct tuple2$2char$phsType$ph* __result_obj__44;
result_81 = (void*)0;
result_82 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_81,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__42 = result_81;
        return __result_obj__42;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_82,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__44 = result_82;
    return __result_obj__44;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value108 = (void*)0;
struct list_item$1CVALUE$ph* litem_103;
struct CVALUE* __dec_obj61;
void* __right_value109 = (void*)0;
struct list_item$1CVALUE$ph* litem_104;
struct CVALUE* __dec_obj62;
void* __right_value110 = (void*)0;
struct list_item$1CVALUE$ph* litem_105;
struct CVALUE* __dec_obj63;
struct list$1CVALUE$ph* __result_obj__50;
    if(    self->len==0    ) {
        litem_103=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value108=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1CVALUE$ph*"))));
        litem_103->prev=((void*)0);
        litem_103->next=((void*)0);
        __dec_obj61=litem_103->item,
        litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_103;
        self->head=litem_103;
    }
    else if(    self->len==1    ) {
        litem_104=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value109=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1CVALUE$ph*"))));
        litem_104->prev=self->head;
        litem_104->next=((void*)0);
        __dec_obj62=litem_104->item,
        litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_104;
        self->head->next=litem_104;
    }
    else {
        litem_105=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value110=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1CVALUE$ph*"))));
        litem_105->prev=self->tail;
        litem_105->next=((void*)0);
        __dec_obj63=litem_105->item,
        litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_105;
        self->tail=litem_105;
    }
    self->len++;
    __result_obj__50 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__50;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value121 = (void*)0;
char* __dec_obj72;
struct sLoadFieldNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj71=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj72=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__54 = (struct sLoadFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadFieldNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadFieldNode_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __right_value122 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string("sLoadFieldNode"))));
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_106;
void* __right_value123 = (void*)0;
char* name_107;
_Bool Value_108;
_Bool __result_obj__56;
void* __right_value124 = (void*)0;
struct CVALUE* left_value_109;
struct sType* left_type2_110;
struct sType* left_type3_111;
struct sType* __dec_obj73;
struct sType* __dec_obj74;
int i_112;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value127 = (void*)0;
char* __dec_obj75;
struct sType* left_type_113;
void* __right_value128 = (void*)0;
struct sType* left_type3_114;
struct sClass* klass_115;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sType* field_type_116;
int index_117;
_Bool child_field_is_pointer_118;
char* child_field_name_119;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
_Bool __result_obj__57;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_120;
struct tuple2$2char$phsType$ph* field_121;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_122=0;
struct sType* field_type2_123=0;
void* __right_value136 = (void*)0;
struct sType* __dec_obj76;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_124;
struct tuple2$2char$phsType$ph* field_125;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* field_name_126=0;
struct sType* field_type2_127=0;
struct sClass* klass2_128;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_129;
struct tuple2$2char$phsType$ph* field2_130;
struct tuple2$2char$phsType$ph* multiple_assign_var7 = (void*)0;
char* field_name2_131=0;
struct sType* field_type3_132=0;
void* __right_value137 = (void*)0;
char* __dec_obj77;
void* __right_value138 = (void*)0;
struct sType* __dec_obj78;
void* __right_value139 = (void*)0;
struct sType* __dec_obj79;
void* __right_value140 = (void*)0;
_Bool __result_obj__58;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct CVALUE* come_value_133;
void* __right_value143 = (void*)0;
char* __dec_obj80;
void* __right_value144 = (void*)0;
char* __dec_obj81;
void* __right_value145 = (void*)0;
char* __dec_obj82;
void* __right_value146 = (void*)0;
char* __dec_obj83;
void* __right_value147 = (void*)0;
char* __dec_obj84;
void* __right_value148 = (void*)0;
char* __dec_obj85;
void* __right_value149 = (void*)0;
struct sType* __dec_obj86;
void* __right_value150 = (void*)0;
struct sType* __dec_obj87;
void* __right_value151 = (void*)0;
_Bool __result_obj__59;
void* __right_value152 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__61;
left_type3_111 = (void*)0;
    left_106=self->mLeft;
    name_107=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_108=node_compile(left_106,info);
    if(    !Value_108    ) {
        __result_obj__56 = (_Bool)0;
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__56;
    }
    else {
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_110=(struct sType*)come_increment_ref_count(left_value_109->type);
    if(    left_type2_110->mNoSolvedGenericsType    ) {
        __dec_obj73=left_type3_111,
        left_type3_111=(struct sType*)come_increment_ref_count(left_type2_110->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj74=left_type3_111,
        left_type3_111=(struct sType*)come_increment_ref_count(left_type2_110);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(left_type3_111->mClass->mName,"tuple1")||string_operator_equals(left_type3_111->mClass->mName,"tuple2")||string_operator_equals(left_type3_111->mClass->mName,"tuple3")||string_operator_equals(left_type3_111->mClass->mName,"tuple3")||string_operator_equals(left_type3_111->mClass->mName,"tuple4")||string_operator_equals(left_type3_111->mClass->mName,"tuple5")    ) {
        for(        i_112=0        ;        i_112<list$1sType$ph_length(left_type3_111->mGenericsTypes)        ;        i_112++        ){
            if(            (_condtional_value_X2=(string_operator_equals(name_107,((struct sType*)(__right_value126=list$1sType$ph_operator_load_element(left_type3_111->mGenericsTypes,i_112)))->mTupleName))),            come_call_finalizer(sType_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value126, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X2            ) {
                __dec_obj75=name_107,
                name_107=(char*)come_increment_ref_count(xsprintf("v%d",i_112+1));
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
    }
    left_type_113=(struct sType*)come_increment_ref_count(left_value_109->type);
    come_call_finalizer(sType_finalize, left_type3_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    left_type3_114=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(left_type_113),(struct sType*)come_increment_ref_count(left_type_113),info));
    klass_115=left_type3_114->mClass;
    klass_115=((struct sClass*)(__right_value131=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value130=__builtin_string(klass_115->mName))))));
    (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    field_type_116=((void*)0);
    index_117=0;
    child_field_is_pointer_118=(_Bool)0;
    child_field_name_119=((void*)0);
    klass_115=((struct sClass*)(__right_value134=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value133=__builtin_string(klass_115->mName))))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass_115==((void*)0)||klass_115->mFields==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value135=err_msg(info,"invalid class %s",klass_115->mName)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__57 = (_Bool)1;
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__57;
    }
    for(    o2_saved_120=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_115->mFields)),field_121=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_120))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_120))    ;    field_121=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_120))    ){
        multiple_assign_var5=field_121;
        field_name_122=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        field_type2_123=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        string_operator_equals(field_name_122,name_107)        ) {
            __dec_obj76=field_type_116,
            field_type_116=(struct sType*)come_increment_ref_count(sType_clone(field_type2_123));
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (field_name_122 = come_decrement_ref_count(field_name_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        index_117++;
        (field_name_122 = come_decrement_ref_count(field_name_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type2_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    index_117==list$1tuple2$2char$phsType$ph$ph_length(klass_115->mFields)    ) {
        index_117=0;
        for(        o2_saved_124=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_115->mFields)),field_125=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_124))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_124))        ;        field_125=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_124))        ){
            multiple_assign_var6=field_125;
            field_name_126=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            field_type2_127=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
            klass2_128=field_type2_127->mClass;
            if(            klass2_128->mUnion            ) {
                for(                o2_saved_129=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_128->mFields)),field2_130=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_129))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_129))                ;                field2_130=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_129))                ){
                    multiple_assign_var7=field2_130;
                    field_name2_131=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                    field_type3_132=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                    if(                    string_operator_equals(field_name2_131,name_107)                    ) {
                        __dec_obj77=child_field_name_119,
                        child_field_name_119=(char*)come_increment_ref_count(__builtin_string(field_name_126));
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        field_type2_127->mPointerNum>0                        ) {
                            child_field_is_pointer_118=(_Bool)1;
                        }
                        __dec_obj78=field_type_116,
                        field_type_116=(struct sType*)come_increment_ref_count(sType_clone(field_type3_132));
                        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        (field_name2_131 = come_decrement_ref_count(field_name2_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, field_type3_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    (field_name2_131 = come_decrement_ref_count(field_name2_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type3_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                if(                child_field_name_119                ) {
                    (field_name_126 = come_decrement_ref_count(field_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type2_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_126,name_107)            ) {
                __dec_obj79=field_type_116,
                field_type_116=(struct sType*)come_increment_ref_count(sType_clone(field_type2_127));
                come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (field_name_126 = come_decrement_ref_count(field_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type2_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            index_117++;
            (field_name_126 = come_decrement_ref_count(field_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        index_117==list$1tuple2$2char$phsType$ph$ph_length(klass_115->mFields)        ) {
            ((struct tuple2$2int$bool$*)(__right_value140=err_msg(info,"field not found(%s) in %s(2)",name_107,klass_115->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__58 = (_Bool)1;
            (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__58;
        }
    }
    come_value_133=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 466, "struct CVALUE*"))));
    if(    left_value_109->type->mPointerNum>0    ) {
        if(        child_field_name_119        ) {
            if(            child_field_is_pointer_118            ) {
                __dec_obj80=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj81=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            __dec_obj82=come_value_133->c_value,
            come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_109->c_value,name_107));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        if(        child_field_name_119        ) {
            if(            child_field_is_pointer_118            ) {
                __dec_obj83=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj84=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            __dec_obj85=come_value_133->c_value,
            come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_109->c_value,name_107));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    __dec_obj86=come_value_133->type,
    come_value_133->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_116));
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj87=come_value_133->type,
    come_value_133->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_133->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_133->var=((void*)0);
    if(    field_type_116==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value151=err_msg(info,"no field(%s)",name_107)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__59 = (_Bool)1;
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__59;
    }
    if(    list$1sNode$ph_length(come_value_133->type->mArrayNum)==1    ) {
        __dec_obj88=come_value_133->type->mOriginalLoadVarType,
        come_value_133->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_133->type));
        come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sNode$ph_reset(come_value_133->type->mArrayNum);
        come_value_133->type->mPointerNum++;
        come_value_133->type->mOriginalTypeNamePointerNum=come_value_133->type->mPointerNum;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_133));
    __result_obj__61 = (_Bool)1;
    (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_134;
struct list_item$1sNode$ph* prev_it_135;
struct list$1sNode$ph* __result_obj__60;
    it_134=self->head;
    while(    it_134!=((void*)0)    ) {
        prev_it_135=it_134;
        it_134=it_134->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct sNode* _inf_value1;
struct sLoadFieldNode* _inf_obj_value1;
void* __right_value159 = (void*)0;
struct sNode* __result_obj__64;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 526, "struct sNode");
    _inf_obj_value1=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value154=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 526, "struct sLoadFieldNode*")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value1->clone=(void*)sLoadFieldNode_clone;
    _inf_value1->compile=(void*)sLoadFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sLoadFieldNode_kind;
    __result_obj__64 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value159=_inf_value1)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadFieldNode_finalize, __right_value154, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value159) ? __right_value159 = come_decrement_ref_count(__right_value159, ((struct sNode*)__right_value159)->finalize, ((struct sNode*)__right_value159)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
struct sLoadFieldNode* __result_obj__62;
void* __right_value155 = (void*)0;
struct sLoadFieldNode* result_136;
void* __right_value156 = (void*)0;
char* __dec_obj89;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value158 = (void*)0;
char* __dec_obj91;
struct sLoadFieldNode* __result_obj__63;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)0;
        return __result_obj__62;
    }
    result_136=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*"));
    if(    self!=((void*)0)    ) {
        result_136->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj89=result_136->sname,
        result_136->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadFieldNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_136->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj90=result_136->mLeft,
        result_136->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj91=result_136->mName,
        result_136->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sLoadFieldNode_clone", 8, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__63 = result_136;
    come_call_finalizer(sLoadFieldNode_finalize, result_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct sNode* __dec_obj92;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj93;
void* __right_value163 = (void*)0;
struct list$1sNode$ph* __dec_obj94;
struct sStoreArrayNode* __result_obj__65;
    ((struct sNodeBase*)(__right_value160=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj92=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj93=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj94=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __result_obj__65 = (struct sStoreArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStoreArrayNode_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __right_value164 = (void*)0;
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string("sStoreArrayNode"))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_137;
struct sNode* right_138;
struct list$1sNode$ph* array_num_nodes_139;
_Bool Value_140;
_Bool __result_obj__67;
void* __right_value165 = (void*)0;
struct CVALUE* left_value_141;
struct sType* left_type_142;
void* __right_value166 = (void*)0;
_Bool __result_obj__68;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct list$1CVALUE$ph* array_num_143;
struct list$1sNode$ph* o2_saved_146;
struct sNode* it_149;
_Bool Value_152;
_Bool __result_obj__76;
void* __right_value169 = (void*)0;
struct CVALUE* c_value_153;
char* fun_name_154;
void* __right_value170 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var8 = (void*)0;
char* fun_name2_155=0;
struct sFun* operator_fun_156=0;
struct sGenericsFun* generics_fun_157=0;
_Bool Value_158;
_Bool __result_obj__77;
void* __right_value171 = (void*)0;
struct CVALUE* right_value_159;
struct sType* right_type_160;
struct sClass* klass_161;
void* __right_value172 = (void*)0;
struct sType* type_162;
_Bool calling_fun_163;
void* __right_value173 = (void*)0;
struct sNode* middle_164;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct CVALUE* come_value_177;
int i_178;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct buffer* buf_191;
struct list$1CVALUE$ph* o2_saved_192;
struct CVALUE* it_195;
void* __right_value179 = (void*)0;
char* left_value_code_198;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
char* __dec_obj95;
void* __right_value182 = (void*)0;
char* __dec_obj96;
void* __right_value183 = (void*)0;
_Bool __result_obj__94;
void* __right_value184 = (void*)0;
char* __dec_obj97;
void* __right_value185 = (void*)0;
char* __dec_obj98;
void* __right_value186 = (void*)0;
_Bool __result_obj__95;
void* __right_value187 = (void*)0;
struct sType* result_type_199;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1sNode$ph* __dec_obj99;
struct sType* __dec_obj100;
void* __right_value190 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__96;
memset(&calling_fun_163, 0, sizeof(_Bool));
    left_137=(struct sNode*)come_increment_ref_count(self->mLeft);
    right_138=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_139=self->mArrayNum;
    Value_140=node_compile(left_137,info);
    if(    !Value_140    ) {
        __result_obj__67 = (_Bool)0;
        ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__67;
    }
    else {
    }
    left_value_141=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_142=(struct sType*)come_increment_ref_count(left_value_141->type);
    if(    left_type_142->mImmutable    ) {
        ((struct tuple2$2int$bool$*)(__right_value166=err_msg(info,"Immutable object can't change the elements")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value166, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__68 = (_Bool)1;
        ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__68;
    }
    array_num_143=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 565, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_146=(array_num_nodes_139),it_149=list$1sNode$ph_begin((o2_saved_146))    ;    !list$1sNode$ph_end((o2_saved_146))    ;    it_149=list$1sNode$ph_next((o2_saved_146))    ){
        Value_152=node_compile(it_149,info);
        if(        !Value_152        ) {
            __result_obj__76 = (_Bool)0;
            ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__76;
        }
        else {
        }
        c_value_153=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_143,(struct CVALUE*)come_increment_ref_count(c_value_153));
        come_call_finalizer(CVALUE_finalize, c_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    fun_name_154="operator_store_element";
    multiple_assign_var8=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value170=get_method(fun_name_154,(struct sType*)come_increment_ref_count(left_type_142),info)));
    fun_name2_155=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    operator_fun_156=multiple_assign_var8->v2;
    generics_fun_157=multiple_assign_var8->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value170, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_158=node_compile(right_138,info);
    if(    !Value_158    ) {
        __result_obj__77 = (_Bool)0;
        ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__77;
    }
    else {
    }
    right_value_159=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_160=right_value_159->type;
    klass_161=left_value_141->type->mClass;
    type_162=(struct sType*)come_increment_ref_count(sType_clone(left_value_141->type));
    if(    self->mQuote    ) {
        calling_fun_163=(_Bool)0;
    }
    else {
        middle_164=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_139,0));
        calling_fun_163=operator_overload_fun2((struct sType*)come_increment_ref_count(type_162),fun_name_154,(struct sNode*)come_increment_ref_count(left_137),(struct sNode*)come_increment_ref_count(middle_164),(struct sNode*)come_increment_ref_count(right_138),left_value_141,((struct CVALUE*)(__right_value174=list$1CVALUE$ph_operator_load_element(array_num_143,0))),right_value_159,info);
        come_call_finalizer(CVALUE_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((middle_164) ? middle_164 = come_decrement_ref_count(middle_164, ((struct sNode*)middle_164)->finalize, ((struct sNode*)middle_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    !calling_fun_163    ) {
        come_value_177=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 602, "struct CVALUE*"))));
        if(        list$1sNode$ph_length(left_type_142->mArrayNum)>0        ) {
            for(            i_178=0            ;            i_178<list$1CVALUE$ph_length(array_num_143)            ;            i_178++            ){
                list$1sNode$ph_delete(left_type_142->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_142->mPointerNum>0        ) {
            left_type_142->mPointerNum-=list$1CVALUE$ph_length(array_num_143);
            if(            left_type_142->mPointerNum<0            ) {
                left_type_142->mPointerNum=0;
            }
        }
        buf_191=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 617, "struct buffer*"))));
        buffer_append_str(buf_191,left_value_141->c_value);
        for(        o2_saved_192=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_143)),it_195=list$1CVALUE$ph_begin((o2_saved_192))        ;        !list$1CVALUE$ph_end((o2_saved_192))        ;        it_195=list$1CVALUE$ph_next((o2_saved_192))        ){
            buffer_append_format(buf_191,"[%s]",it_195->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_198=(char*)come_increment_ref_count(buffer_to_string(buf_191));
        check_assign_type(((char*)(__right_value180=xsprintf("array is assinged to(2)"))),left_type_142,right_type_160,right_value_159,(_Bool)0,(_Bool)1,(_Bool)1,info);
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        left_type_142->mHeap&&right_type_160->mHeap&&left_type_142->mPointerNum>0&&right_type_160->mPointerNum>0        ) {
            if(            left_value_141->type->mPointerNum>=1            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_142),left_value_code_198,info,(_Bool)0);
                std_move(left_type_142,right_type_160,right_value_159,info,(_Bool)0);
                __dec_obj95=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            left_value_141->type->mPointerNum==0            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_142),left_value_code_198,info,(_Bool)0);
                std_move(left_type_142,right_type_160,right_value_159,info,(_Bool)0);
                __dec_obj96=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value183=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_198,left_value_141->type->mPointerNum)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value183, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__94 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (left_value_code_198 = come_decrement_ref_count(left_value_code_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, right_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__94;
            }
        }
        else {
            if(            left_value_141->type->mPointerNum>=1            ) {
                __dec_obj97=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            left_value_141->type->mPointerNum==0            ) {
                __dec_obj98=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value186=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_198,left_value_141->type->mPointerNum)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value186, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__95 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (left_value_code_198 = come_decrement_ref_count(left_value_code_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, right_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__95;
            }
        }
        result_type_199=(struct sType*)come_increment_ref_count(sType_clone(left_type_142));
        __dec_obj99=result_type_199->mArrayNum,
        result_type_199->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 658, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj100=come_value_177->type,
        come_value_177->type=(struct sType*)come_increment_ref_count(result_type_199);
        come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_177->var=((void*)0);
        __dec_obj101=come_value_177->type,
        come_value_177->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_177->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
        add_come_last_code(info,"%s",come_value_177->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_198 = come_decrement_ref_count(left_value_code_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__96 = (_Bool)1;
    ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, right_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__96;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__69 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_144;
struct list_item$1CVALUE$ph* prev_it_145;
    it_144=self->head;
    while(    it_144!=((void*)0)    ) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_147;
struct sNode* __result_obj__70;
struct sNode* __result_obj__71;
struct sNode* result_148;
struct sNode* __result_obj__72;
result_147 = (void*)0;
result_148 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_147,0,sizeof(struct sNode*));
        __result_obj__70 = result_147;
        return __result_obj__70;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_148,0,sizeof(struct sNode*));
    __result_obj__72 = result_148;
    return __result_obj__72;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_150;
struct sNode* __result_obj__73;
struct sNode* __result_obj__74;
struct sNode* result_151;
struct sNode* __result_obj__75;
result_150 = (void*)0;
result_151 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_150,0,sizeof(struct sNode*));
        __result_obj__73 = result_150;
        return __result_obj__73;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_151,0,sizeof(struct sNode*));
    __result_obj__75 = result_151;
    return __result_obj__75;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_165;
int i_166;
struct sNode* __result_obj__78;
struct sNode* default_value_167;
struct sNode* __result_obj__79;
default_value_167 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_165=self->head;
    i_166=0;
    while(    it_165!=((void*)0)    ) {
        if(        position==i_166        ) {
            __result_obj__78 = (struct sNode*)come_increment_ref_count(it_165->item);
            ((__result_obj__78) ? __result_obj__78 = come_decrement_ref_count(__result_obj__78, ((struct sNode*)__result_obj__78)->finalize, ((struct sNode*)__result_obj__78)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__78;
        }
        it_165=it_165->next;
        i_166++;
    }
    memset(&default_value_167,0,sizeof(struct sNode*));
    __result_obj__79 = (struct sNode*)come_increment_ref_count(default_value_167);
    ((default_value_167) ? default_value_167 = come_decrement_ref_count(default_value_167, ((struct sNode*)default_value_167)->finalize, ((struct sNode*)default_value_167)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__79) ? __result_obj__79 = come_decrement_ref_count(__result_obj__79, ((struct sNode*)__result_obj__79)->finalize, ((struct sNode*)__result_obj__79)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__79;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_168;
int i_169;
struct sNode* __result_obj__80;
struct sNode* default_value_170;
struct sNode* __result_obj__81;
default_value_170 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_168=self->head;
    i_169=0;
    while(    it_168!=((void*)0)    ) {
        if(        position==i_169        ) {
            __result_obj__80 = (struct sNode*)come_increment_ref_count(it_168->item);
            ((__result_obj__80) ? __result_obj__80 = come_decrement_ref_count(__result_obj__80, ((struct sNode*)__result_obj__80)->finalize, ((struct sNode*)__result_obj__80)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__80;
        }
        it_168=it_168->next;
        i_169++;
    }
    memset(&default_value_170,0,sizeof(struct sNode*));
    __result_obj__81 = (struct sNode*)come_increment_ref_count(default_value_170);
    ((default_value_170) ? default_value_170 = come_decrement_ref_count(default_value_170, ((struct sNode*)default_value_170)->finalize, ((struct sNode*)default_value_170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__81) ? __result_obj__81 = come_decrement_ref_count(__result_obj__81, ((struct sNode*)__result_obj__81)->finalize, ((struct sNode*)__result_obj__81)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__81;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
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

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_174;
int i_175;
struct CVALUE* __result_obj__84;
struct CVALUE* default_value_176;
struct CVALUE* __result_obj__85;
default_value_176 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_174=self->head;
    i_175=0;
    while(    it_174!=((void*)0)    ) {
        if(        position==i_175        ) {
            __result_obj__84 = (struct CVALUE*)come_increment_ref_count(it_174->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__84;
        }
        it_174=it_174->next;
        i_175++;
    }
    memset(&default_value_176,0,sizeof(struct CVALUE*));
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(default_value_176);
    come_call_finalizer(CVALUE_finalize, default_value_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_179;
struct list$1sNode$ph* __result_obj__86;
struct list_item$1sNode$ph* it_180;
int i_181;
struct list_item$1sNode$ph* prev_it_182;
struct list_item$1sNode$ph* it_183;
int i_184;
struct list_item$1sNode$ph* prev_it_185;
struct list_item$1sNode$ph* it_186;
struct list_item$1sNode$ph* head_prev_it_187;
struct list_item$1sNode$ph* tail_it_188;
int i_189;
struct list_item$1sNode$ph* prev_it_190;
struct list$1sNode$ph* __result_obj__87;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_179=tail;
        tail=head;
        head=tmp_179;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it_180=self->head;
        i_181=0;
        while(        it_180!=((void*)0)        ) {
            if(            i_181<tail            ) {
                prev_it_182=it_180;
                it_180=it_180->next;
                i_181++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_181==tail            ) {
                self->head=it_180;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_180=it_180->next;
                i_181++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_183=self->head;
        i_184=0;
        while(        it_183!=((void*)0)        ) {
            if(            i_184==head            ) {
                self->tail=it_183->prev;
                self->tail->next=((void*)0);
            }
            if(            i_184>=head            ) {
                prev_it_185=it_183;
                it_183=it_183->next;
                i_184++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_183=it_183->next;
                i_184++;
            }
        }
    }
    else {
        it_186=self->head;
        head_prev_it_187=((void*)0);
        tail_it_188=((void*)0);
        i_189=0;
        while(        it_186!=((void*)0)        ) {
            if(            i_189==head            ) {
                head_prev_it_187=it_186->prev;
            }
            if(            i_189==tail            ) {
                tail_it_188=it_186;
            }
            if(            i_189>=head&&i_189<tail            ) {
                prev_it_190=it_186;
                it_186=it_186->next;
                i_189++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_186=it_186->next;
                i_189++;
            }
        }
        if(        head_prev_it_187!=((void*)0)        ) {
            head_prev_it_187->next=tail_it_188;
        }
        if(        tail_it_188!=((void*)0)        ) {
            tail_it_188->prev=head_prev_it_187;
        }
    }
    __result_obj__87 = self;
    return __result_obj__87;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_193;
struct CVALUE* __result_obj__88;
struct CVALUE* __result_obj__89;
struct CVALUE* result_194;
struct CVALUE* __result_obj__90;
result_193 = (void*)0;
result_194 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_193,0,sizeof(struct CVALUE*));
        __result_obj__88 = result_193;
        return __result_obj__88;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__89 = self->it->item;
        return __result_obj__89;
    }
    memset(&result_194,0,sizeof(struct CVALUE*));
    __result_obj__90 = result_194;
    return __result_obj__90;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_196;
struct CVALUE* __result_obj__91;
struct CVALUE* __result_obj__92;
struct CVALUE* result_197;
struct CVALUE* __result_obj__93;
result_196 = (void*)0;
result_197 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_196,0,sizeof(struct CVALUE*));
        __result_obj__91 = result_196;
        return __result_obj__91;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__92 = self->it->item;
        return __result_obj__92;
    }
    memset(&result_197,0,sizeof(struct CVALUE*));
    __result_obj__93 = result_197;
    return __result_obj__93;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1sNode$ph* __dec_obj102;
void* __right_value193 = (void*)0;
struct sNode* __dec_obj103;
struct sLoadArrayNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value191=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj102=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj103=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__97 = (struct sLoadArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sLoadArrayNode_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __right_value194 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string("sLoadArrayNode"))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__98;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_200;
struct list$1sNode$ph* array_num_nodes_201;
_Bool Value_202;
_Bool __result_obj__99;
void* __right_value195 = (void*)0;
struct CVALUE* left_value_203;
void* __right_value196 = (void*)0;
struct sType* left_type_204;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1CVALUE$ph* array_num_205;
struct list$1sNode$ph* o2_saved_206;
struct sNode* it_207;
_Bool Value_208;
_Bool __result_obj__100;
void* __right_value199 = (void*)0;
struct CVALUE* c_value_209;
void* __right_value200 = (void*)0;
struct sType* type_210;
char* fun_name_211;
_Bool calling_fun_212;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct CVALUE* come_value_213;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct buffer* buf_214;
struct list$1CVALUE$ph* o2_saved_215;
struct CVALUE* it_216;
void* __right_value207 = (void*)0;
char* left_value_code_217;
void* __right_value208 = (void*)0;
char* __dec_obj104;
void* __right_value209 = (void*)0;
struct sType* result_type_218;
struct sType* __dec_obj105;
int n_219;
void* __right_value210 = (void*)0;
struct sType* __dec_obj106;
void* __right_value211 = (void*)0;
struct sType* __dec_obj107;
int i_220;
void* __right_value212 = (void*)0;
struct sType* __dec_obj108;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sType* __dec_obj109;
_Bool __result_obj__101;
memset(&calling_fun_212, 0, sizeof(_Bool));
    left_200=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_201=self->mArrayNum;
    Value_202=node_compile(left_200,info);
    if(    !Value_202    ) {
        __result_obj__99 = (_Bool)0;
        ((left_200) ? left_200 = come_decrement_ref_count(left_200, ((struct sNode*)left_200)->finalize, ((struct sNode*)left_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__99;
    }
    else {
    }
    left_value_203=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_204=(struct sType*)come_increment_ref_count(sType_clone(left_value_203->type));
    array_num_205=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 704, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_206=(array_num_nodes_201),it_207=list$1sNode$ph_begin((o2_saved_206))    ;    !list$1sNode$ph_end((o2_saved_206))    ;    it_207=list$1sNode$ph_next((o2_saved_206))    ){
        Value_208=node_compile(it_207,info);
        if(        !Value_208        ) {
            __result_obj__100 = (_Bool)0;
            ((left_200) ? left_200 = come_decrement_ref_count(left_200, ((struct sNode*)left_200)->finalize, ((struct sNode*)left_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__100;
        }
        else {
        }
        c_value_209=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_205,(struct CVALUE*)come_increment_ref_count(c_value_209));
        come_call_finalizer(CVALUE_finalize, c_value_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_210=(struct sType*)come_increment_ref_count(sType_clone(left_value_203->type));
    fun_name_211="operator_load_element";
    if(    self->mQuote    ) {
        calling_fun_212=(_Bool)0;
    }
    else {
        calling_fun_212=operator_overload_fun(type_210,fun_name_211,(struct sNode*)come_increment_ref_count(left_200),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_201,0)),(struct CVALUE*)come_increment_ref_count(left_value_203),(struct CVALUE*)come_increment_ref_count(list$1CVALUE$ph_operator_load_element(array_num_205,0)),self->mBreakGuard,info);
    }
    if(    !calling_fun_212    ) {
        come_value_213=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 728, "struct CVALUE*"))));
        buf_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 730, "struct buffer*"))));
        buffer_append_str(buf_214,left_value_203->c_value);
        for(        o2_saved_215=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_205)),it_216=list$1CVALUE$ph_begin((o2_saved_215))        ;        !list$1CVALUE$ph_end((o2_saved_215))        ;        it_216=list$1CVALUE$ph_next((o2_saved_215))        ){
            buffer_append_format(buf_214,"[%s]",it_216->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_217=(char*)come_increment_ref_count(buffer_to_string(buf_214));
        __dec_obj104=come_value_213->c_value,
        come_value_213->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_217));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type_218=(struct sType*)come_increment_ref_count(sType_clone(left_type_204));
        if(        result_type_218->mOriginalLoadVarType        ) {
            __dec_obj105=result_type_218,
            result_type_218=(struct sType*)come_increment_ref_count(result_type_218->mOriginalLoadVarType);
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_218->mArrayNum)>0        ) {
            n_219=list$1sNode$ph_length(result_type_218->mArrayNum)-list$1CVALUE$ph_length(array_num_205);
            if(            n_219==0            ) {
                __dec_obj106=result_type_218,
                result_type_218=(struct sType*)come_increment_ref_count(sType_clone(left_type_204));
                come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                left_type_204->mOriginalLoadVarType                ) {
                    __dec_obj107=result_type_218,
                    result_type_218=(struct sType*)come_increment_ref_count(sType_clone(left_type_204->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_218->mArrayNum);
            }
            else if(            n_219>0            ) {
                for(                i_220=0                ;                i_220<n_219                ;                i_220++                ){
                    list$1sNode$ph_delete(result_type_218->mArrayNum,-1,-1);
                }
            }
            else if(            n_219<0            ) {
                list$1sNode$ph_reset(result_type_218->mArrayNum);
                result_type_218->mPointerNum+=n_219;
                if(                result_type_218->mPointerNum<0                ) {
                    result_type_218->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_218->mPointerNum>0            ) {
                result_type_218->mPointerNum-=list$1CVALUE$ph_length(array_num_205);
                if(                result_type_218->mPointerNum<0                ) {
                    result_type_218->mPointerNum=0;
                }
            }
        }
        __dec_obj108=come_value_213->type,
        come_value_213->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_218));
        come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_213->var=((void*)0);
        __dec_obj109=come_value_213->type,
        come_value_213->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(come_value_213->type)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
        add_come_last_code(info,"%s",come_value_213->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_217 = come_decrement_ref_count(left_value_code_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__101 = (_Bool)1;
    ((left_200) ? left_200 = come_decrement_ref_count(left_200, ((struct sNode*)left_200)->finalize, ((struct sNode*)left_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1sNode$ph* __dec_obj110;
void* __right_value217 = (void*)0;
struct sNode* __dec_obj111;
struct sLoadRangeArrayNode* __result_obj__102;
    ((struct sNodeBase*)(__right_value215=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj110=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__102 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadRangeArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sLoadRangeArrayNode_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __right_value218 = (void*)0;
char* __result_obj__103;
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value218=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_221;
struct list$1sNode$ph* array_num_nodes_222;
_Bool Value_223;
_Bool __result_obj__104;
void* __right_value219 = (void*)0;
struct CVALUE* left_value_224;
void* __right_value220 = (void*)0;
struct sType* left_type_225;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1CVALUE$ph* array_num_226;
struct list$1sNode$ph* o2_saved_227;
struct sNode* it_228;
_Bool Value_229;
_Bool __result_obj__105;
void* __right_value223 = (void*)0;
struct CVALUE* c_value_230;
void* __right_value224 = (void*)0;
struct sType* type_231;
char* fun_name_232;
_Bool calling_fun_233;
void* __right_value225 = (void*)0;
struct sNode* middle_234;
void* __right_value226 = (void*)0;
struct sNode* right_235;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value_236;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_237;
struct list$1CVALUE$ph* o2_saved_238;
struct CVALUE* it_239;
void* __right_value233 = (void*)0;
char* left_value_code_240;
void* __right_value234 = (void*)0;
char* __dec_obj112;
void* __right_value235 = (void*)0;
struct sType* result_type_241;
struct sType* __dec_obj113;
int n_242;
void* __right_value236 = (void*)0;
struct sType* __dec_obj114;
void* __right_value237 = (void*)0;
struct sType* __dec_obj115;
int i_243;
void* __right_value238 = (void*)0;
struct sType* __dec_obj116;
void* __right_value239 = (void*)0;
struct sType* __dec_obj117;
_Bool __result_obj__106;
memset(&calling_fun_233, 0, sizeof(_Bool));
    left_221=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_222=self->mArrayNum;
    Value_223=node_compile(left_221,info);
    if(    !Value_223    ) {
        __result_obj__104 = (_Bool)0;
        ((left_221) ? left_221 = come_decrement_ref_count(left_221, ((struct sNode*)left_221)->finalize, ((struct sNode*)left_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__104;
    }
    else {
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_225=(struct sType*)come_increment_ref_count(sType_clone(left_value_224->type));
    array_num_226=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 826, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_227=(array_num_nodes_222),it_228=list$1sNode$ph_begin((o2_saved_227))    ;    !list$1sNode$ph_end((o2_saved_227))    ;    it_228=list$1sNode$ph_next((o2_saved_227))    ){
        Value_229=node_compile(it_228,info);
        if(        !Value_229        ) {
            __result_obj__105 = (_Bool)0;
            ((left_221) ? left_221 = come_decrement_ref_count(left_221, ((struct sNode*)left_221)->finalize, ((struct sNode*)left_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__105;
        }
        else {
        }
        c_value_230=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_226,(struct CVALUE*)come_increment_ref_count(c_value_230));
        come_call_finalizer(CVALUE_finalize, c_value_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_231=(struct sType*)come_increment_ref_count(sType_clone(left_value_224->type));
    fun_name_232="operator_load_range_element";
    if(    self->mQuote    ) {
        calling_fun_233=(_Bool)0;
    }
    else {
        middle_234=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_222,0));
        right_235=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_222,1));
        calling_fun_233=operator_overload_fun2((struct sType*)come_increment_ref_count(type_231),fun_name_232,(struct sNode*)come_increment_ref_count(left_221),(struct sNode*)come_increment_ref_count(middle_234),(struct sNode*)come_increment_ref_count(right_235),left_value_224,((struct CVALUE*)(__right_value227=list$1CVALUE$ph_operator_load_element(array_num_226,0))),((struct CVALUE*)(__right_value228=list$1CVALUE$ph_operator_load_element(array_num_226,1))),info);
        come_call_finalizer(CVALUE_finalize, __right_value227, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, __right_value228, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((middle_234) ? middle_234 = come_decrement_ref_count(middle_234, ((struct sNode*)middle_234)->finalize, ((struct sNode*)middle_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_235) ? right_235 = come_decrement_ref_count(right_235, ((struct sNode*)right_235)->finalize, ((struct sNode*)right_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    !calling_fun_233    ) {
        come_value_236=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 852, "struct CVALUE*"))));
        buf_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 854, "struct buffer*"))));
        buffer_append_str(buf_237,left_value_224->c_value);
        for(        o2_saved_238=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_226)),it_239=list$1CVALUE$ph_begin((o2_saved_238))        ;        !list$1CVALUE$ph_end((o2_saved_238))        ;        it_239=list$1CVALUE$ph_next((o2_saved_238))        ){
            buffer_append_format(buf_237,"[%s]",it_239->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_240=(char*)come_increment_ref_count(buffer_to_string(buf_237));
        __dec_obj112=come_value_236->c_value,
        come_value_236->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_240));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type_241=(struct sType*)come_increment_ref_count(sType_clone(left_type_225));
        if(        result_type_241->mOriginalLoadVarType        ) {
            __dec_obj113=result_type_241,
            result_type_241=(struct sType*)come_increment_ref_count(result_type_241->mOriginalLoadVarType);
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_241->mArrayNum)>0        ) {
            n_242=list$1sNode$ph_length(result_type_241->mArrayNum)-list$1CVALUE$ph_length(array_num_226);
            if(            n_242==0            ) {
                __dec_obj114=result_type_241,
                result_type_241=(struct sType*)come_increment_ref_count(sType_clone(left_type_225));
                come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                left_type_225->mOriginalLoadVarType                ) {
                    __dec_obj115=result_type_241,
                    result_type_241=(struct sType*)come_increment_ref_count(sType_clone(left_type_225->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_241->mArrayNum);
            }
            else if(            n_242>0            ) {
                for(                i_243=0                ;                i_243<n_242                ;                i_243++                ){
                    list$1sNode$ph_delete(result_type_241->mArrayNum,-1,-1);
                }
            }
            else if(            n_242<0            ) {
                list$1sNode$ph_reset(result_type_241->mArrayNum);
                result_type_241->mPointerNum+=n_242;
                if(                result_type_241->mPointerNum<0                ) {
                    result_type_241->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_241->mPointerNum>0            ) {
                result_type_241->mPointerNum-=list$1CVALUE$ph_length(array_num_226);
                if(                result_type_241->mPointerNum<0                ) {
                    result_type_241->mPointerNum=0;
                }
            }
        }
        __dec_obj116=come_value_236->type,
        come_value_236->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_241));
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_236->var=((void*)0);
        __dec_obj117=come_value_236->type,
        come_value_236->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_236->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_236));
        add_come_last_code(info,"%s",come_value_236->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_240 = come_decrement_ref_count(left_value_code_240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__106 = (_Bool)1;
    ((left_221) ? left_221 = come_decrement_ref_count(left_221, ((struct sNode*)left_221)->finalize, ((struct sNode*)left_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__106;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value240 = (void*)0;
struct sNode* __result_obj__107;
    ((struct tuple2$2int$bool$*)(__right_value240=err_msg(info,"parse_method_call is failed")));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value240, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__107 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__107) ? __result_obj__107 = come_decrement_ref_count(__result_obj__107, ((struct sNode*)__result_obj__107)->finalize, ((struct sNode*)__result_obj__107)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__107;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sNode* _inf_value2;
struct sStoreFieldNode* _inf_obj_value2;
void* __right_value248 = (void*)0;
struct sNode* __result_obj__110;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 930, "struct sNode");
    _inf_obj_value2=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value242=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 930, "struct sStoreFieldNode*")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value2->clone=(void*)sStoreFieldNode_clone;
    _inf_value2->compile=(void*)sStoreFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sStoreFieldNode_kind;
    __result_obj__110 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value248=_inf_value2)));
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreFieldNode_finalize, __right_value242, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value248) ? __right_value248 = come_decrement_ref_count(__right_value248, ((struct sNode*)__right_value248)->finalize, ((struct sNode*)__right_value248)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__110) ? __result_obj__110 = come_decrement_ref_count(__result_obj__110, ((struct sNode*)__result_obj__110)->finalize, ((struct sNode*)__result_obj__110)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__110;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
struct sStoreFieldNode* __result_obj__108;
void* __right_value243 = (void*)0;
struct sStoreFieldNode* result_244;
void* __right_value244 = (void*)0;
char* __dec_obj118;
void* __right_value245 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value246 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value247 = (void*)0;
char* __dec_obj121;
struct sStoreFieldNode* __result_obj__109;
    if(    self==(void*)0    ) {
        __result_obj__108 = (void*)0;
        return __result_obj__108;
    }
    result_244=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*"));
    if(    self!=((void*)0)    ) {
        result_244->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj118=result_244->sname,
        result_244->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreFieldNode_clone", 5, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_244->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj119=result_244->mLeft,
        result_244->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj120=result_244->mRight,
        result_244->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj121=result_244->mName,
        result_244->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStoreFieldNode_clone", 9, "char*"));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__109 = result_244;
    come_call_finalizer(sStoreFieldNode_finalize, result_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
_Bool range_array_245;
char* p_246;
int sline_247;
_Bool no_comma_248;
_Bool no_output_err_249;
_Bool no_output_come_code_250;
void* __right_value249 = (void*)0;
struct sNode* exp_251;
_Bool quote_252;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1sNode$ph* array_num_253;
void* __right_value252 = (void*)0;
struct sNode* node2_254;
void* __right_value256 = (void*)0;
struct sNode* node3_258;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* _inf_value3;
struct sLoadRangeArrayNode* _inf_obj_value3;
void* __right_value263 = (void*)0;
struct sNode* __dec_obj128;
_Bool quote_260;
_Bool range_261;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNode$ph* array_num_262;
_Bool range_array2_263;
char* p_264;
int sline_265;
_Bool no_comma_266;
_Bool no_output_err_267;
_Bool no_output_come_code_268;
void* __right_value266 = (void*)0;
struct sNode* exp_269;
void* __right_value267 = (void*)0;
struct sNode* node2_270;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sNode* right_node_271;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sNode* _inf_value4;
struct sStoreArrayNode* _inf_obj_value4;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sNode* _inf_value5;
struct sLoadArrayNode* _inf_obj_value5;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value285 = (void*)0;
char* field_name_274;
_Bool parse_method_generics_type_275;
char* p_276;
int sline_277;
void* __right_value286 = (void*)0;
char* word_278;
void* __right_value287 = (void*)0;
struct sNode* right_node_279;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* _inf_value6;
struct sStoreFieldNode* _inf_obj_value6;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj143;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* __dec_obj144;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sNode* _inf_value7;
struct sLoadFieldNode* _inf_obj_value7;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value308 = (void*)0;
struct sNode* node2_280;
struct sNode* __dec_obj147;
struct sNode* __result_obj__118;
    while(    (_Bool)1    ) {
        range_array_245=(_Bool)0;
        {
            p_246=info->p;
            sline_247=info->sline;
            if(            *info->p==91            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_248=info->no_comma;
                no_output_err_249=info->no_output_err;
                no_output_come_code_250=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_251=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_248;
                info->no_output_err=no_output_err_249;
                info->no_output_come_code=no_output_come_code_250;
                if(                *info->p==46&&*(info->p+1)==46                ) {
                    range_array_245=(_Bool)1;
                }
                ((exp_251) ? exp_251 = come_decrement_ref_count(exp_251, ((struct sNode*)exp_251)->finalize, ((struct sNode*)exp_251)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            info->p=p_246;
            info->sline=sline_247;
        }
        if(        range_array_245&&(*info->p==92&&*(info->p+1)==91||*info->p==91)        ) {
            quote_252=*info->p==92;
            if(            quote_252            ) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_253=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 974, "struct list$1sNode$ph*"))));
            skip_pointer_attribute(info);
            node2_254=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_push_back(array_num_253,(struct sNode*)come_increment_ref_count(node2_254));
            if(            *info->p==46&&*(info->p+1)==46            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_258=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(array_num_253,(struct sNode*)come_increment_ref_count(node3_258));
                expected_next_character(93,info);
                ((node3_258) ? node3_258 = come_decrement_ref_count(node3_258, ((struct sNode*)node3_258)->finalize, ((struct sNode*)node3_258)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 995, "struct sNode");
            _inf_obj_value3=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value258=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 995, "struct sLoadRangeArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_253),quote_252,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value3->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value3->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj128=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLoadRangeArrayNode_finalize, __right_value258, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node2_254) ? node2_254 = come_decrement_ref_count(node2_254, ((struct sNode*)node2_254)->finalize, ((struct sNode*)node2_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !range_array_245&&(*info->p==92&&*(info->p+1)==91||*info->p==91)        ) {
            quote_260=*info->p==92;
            if(            quote_260            ) {
                info->p++;
            }
            range_261=(_Bool)0;
            array_num_262=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1004, "struct list$1sNode$ph*"))));
            while(            1            ) {
                range_array2_263=(_Bool)0;
                {
                    p_264=info->p;
                    sline_265=info->sline;
                    if(                    *info->p==91                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_266=info->no_comma;
                        no_output_err_267=info->no_output_err;
                        no_output_come_code_268=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_269=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_266;
                        info->no_output_err=no_output_err_267;
                        info->no_output_come_code=no_output_come_code_268;
                        if(                        *info->p==46&&*(info->p+1)==46                        ) {
                            range_array2_263=(_Bool)1;
                        }
                        ((exp_269) ? exp_269 = come_decrement_ref_count(exp_269, ((struct sNode*)exp_269)->finalize, ((struct sNode*)exp_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    info->p=p_264;
                    info->sline=sline_265;
                }
                if(                range_array2_263                ) {
                    break;
                }
                else if(                *info->p==91                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_270=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(array_num_262,(struct sNode*)come_increment_ref_count(node2_270));
                    if(                    *info->p==93                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value268=err_msg(info,"require ] character")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value268, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    ((node2_270) ? node2_270 = come_decrement_ref_count(node2_270, ((struct sNode*)node2_270)->finalize, ((struct sNode*)node2_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            if(            *info->p==63&&*(info->p+1)==63            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_271=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1077, "struct sNode");
                _inf_obj_value4=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value271=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1077, "struct sStoreArrayNode*")),node,(struct sNode*)come_increment_ref_count(right_node_271),(struct list$1sNode$ph*)come_increment_ref_count(array_num_262),quote_260,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value4->clone=(void*)sStoreArrayNode_clone;
                _inf_value4->compile=(void*)sStoreArrayNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sStoreArrayNode_kind;
                __dec_obj133=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value4);
                (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sStoreArrayNode_finalize, __right_value271, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((right_node_271) ? right_node_271 = come_decrement_ref_count(right_node_271, ((struct sNode*)right_node_271)->finalize, ((struct sNode*)right_node_271)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1080, "struct sNode");
                _inf_obj_value5=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value279=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1080, "struct sLoadArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_262),quote_260,(_Bool)0,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value5->clone=(void*)sLoadArrayNode_clone;
                _inf_value5->compile=(void*)sLoadArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sLoadArrayNode_kind;
                __dec_obj137=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sLoadArrayNode_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        *info->p==63&&*(info->p+1)==63        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)        ) {
            if(            *info->p==46            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_274=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_275=(_Bool)0;
            {
                p_276=info->p;
                sline_277=info->sline;
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_278=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_278,info)                        ) {
                            parse_method_generics_type_275=(_Bool)1;
                        }
                        (word_278 = come_decrement_ref_count(word_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                info->p=p_276;
                info->sline=sline_277;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_279=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1135, "struct sNode");
                _inf_obj_value6=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value289=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1135, "struct sStoreFieldNode*")),node,(struct sNode*)come_increment_ref_count(right_node_279),(char*)come_increment_ref_count(field_name_274),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value6->clone=(void*)sStoreFieldNode_clone;
                _inf_value6->compile=(void*)sStoreFieldNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sStoreFieldNode_kind;
                __dec_obj138=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sStoreFieldNode_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((right_node_279) ? right_node_279 = come_decrement_ref_count(right_node_279, ((struct sNode*)right_node_279)->finalize, ((struct sNode*)right_node_279)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            string_operator_equals(field_name_274,"expect")            ) {
                __dec_obj139=node,
                node=(struct sNode*)come_increment_ref_count(parse_expect_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||parse_method_generics_type_275)            ) {
                if(                string_operator_equals(field_name_274,"if")                ) {
                    __dec_obj140=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"elif")                ) {
                    __dec_obj141=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"case")                ) {
                    __dec_obj142=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"less")                ) {
                    __dec_obj143=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"rescue")                ) {
                    __dec_obj144=node,
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else {
                    __dec_obj145=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_274),info));
                    (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
            }
            else {
                _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1162, "struct sNode");
                _inf_obj_value7=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value306=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1162, "struct sLoadFieldNode*")),node,(char*)come_increment_ref_count(field_name_274),info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value7->clone=(void*)sLoadFieldNode_clone;
                _inf_value7->compile=(void*)sLoadFieldNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sLoadFieldNode_kind;
                __dec_obj146=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value7);
                (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sLoadFieldNode_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (field_name_274 = come_decrement_ref_count(field_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            node2_280=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_280==((void*)0)            ) {
                ((node2_280) ? node2_280 = come_decrement_ref_count(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            __dec_obj147=node,
            node=(struct sNode*)come_increment_ref_count(node2_280);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            ((node2_280) ? node2_280 = come_decrement_ref_count(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    __result_obj__118 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__118) ? __result_obj__118 = come_decrement_ref_count(__result_obj__118, ((struct sNode*)__result_obj__118)->finalize, ((struct sNode*)__result_obj__118)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__118;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value253 = (void*)0;
struct list_item$1sNode$ph* litem_255;
struct sNode* __dec_obj122;
void* __right_value254 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj123;
void* __right_value255 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj124;
struct list$1sNode$ph* __result_obj__111;
    if(    self->len==0    ) {
        litem_255=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value253=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1sNode$ph*"))));
        litem_255->prev=((void*)0);
        litem_255->next=((void*)0);
        __dec_obj122=litem_255->item,
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_255;
        self->head=litem_255;
    }
    else if(    self->len==1    ) {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value254=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1sNode$ph*"))));
        litem_256->prev=self->head;
        litem_256->next=((void*)0);
        __dec_obj123=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_256;
        self->head->next=litem_256;
    }
    else {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value255=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->tail;
        litem_257->next=((void*)0);
        __dec_obj124=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_257;
        self->tail=litem_257;
    }
    self->len++;
    __result_obj__111 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__111;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
struct sLoadRangeArrayNode* __result_obj__112;
void* __right_value259 = (void*)0;
struct sLoadRangeArrayNode* result_259;
void* __right_value260 = (void*)0;
char* __dec_obj125;
void* __right_value261 = (void*)0;
struct list$1sNode$ph* __dec_obj126;
void* __right_value262 = (void*)0;
struct sNode* __dec_obj127;
struct sLoadRangeArrayNode* __result_obj__113;
    if(    self==(void*)0    ) {
        __result_obj__112 = (void*)0;
        return __result_obj__112;
    }
    result_259=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_259->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj125=result_259->sname,
        result_259->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadRangeArrayNode_clone", 5, "char*"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_259->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj126=result_259->mArrayNum,
        result_259->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj127=result_259->mLeft,
        result_259->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_259->mQuote=self->mQuote;
    }
    __result_obj__113 = result_259;
    come_call_finalizer(sLoadRangeArrayNode_finalize, result_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
struct sStoreArrayNode* __result_obj__114;
void* __right_value272 = (void*)0;
struct sStoreArrayNode* result_272;
void* __right_value273 = (void*)0;
char* __dec_obj129;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value276 = (void*)0;
struct list$1sNode$ph* __dec_obj132;
struct sStoreArrayNode* __result_obj__115;
    if(    self==(void*)0    ) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_272=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj129=result_272->sname,
        result_272->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreArrayNode_clone", 5, "char*"));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj130=result_272->mLeft,
        result_272->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj131=result_272->mRight,
        result_272->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj132=result_272->mArrayNum,
        result_272->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_272->mQuote=self->mQuote;
    }
    __result_obj__115 = result_272;
    come_call_finalizer(sStoreArrayNode_finalize, result_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
struct sLoadArrayNode* __result_obj__116;
void* __right_value280 = (void*)0;
struct sLoadArrayNode* result_273;
void* __right_value281 = (void*)0;
char* __dec_obj134;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* __dec_obj135;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj136;
struct sLoadArrayNode* __result_obj__117;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)0;
        return __result_obj__116;
    }
    result_273=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_273->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj134=result_273->sname,
        result_273->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadArrayNode_clone", 5, "char*"));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_273->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj135=result_273->mArrayNum,
        result_273->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_273->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj136=result_273->mLeft,
        result_273->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_273->mQuote=self->mQuote;
    }
    __result_obj__117 = result_273;
    come_call_finalizer(sLoadArrayNode_finalize, result_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

