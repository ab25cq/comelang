/// previous struct definition ///
struct __sFILEX;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long  long _mbstateL;
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

typedef long  long __darwin_blkcnt_t;

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

typedef long  long __darwin_off_t;

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

typedef long  long fpos_t;

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
    long  long (*_seek)(void*,long  long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long  long _offset;
};

typedef struct __sFILE FILE;

extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdinp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdoutp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stderrp;
typedef long  long off_t;

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

extern void* gComeFunResultObject;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
};

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ14
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ14 u;
};

typedef struct regex_t regex_t;

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1voidph* mFields;
    char* mParentClassName;
    char* mAttribute;
    _Bool mDynamic;
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
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1voidph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    _Bool mAnyClass;
    struct sType* mAnyOriginalType;
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
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNodeph* mArrayNum;
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
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
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
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2voidphvoidph* mHeader;
    struct map$2voidphvoidph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
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
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2voidphvoidph* module_params;
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
    struct list$1voidph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2voidphvoidph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2intcharph
{
    int v1;
    char* v2;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2boolcharph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

int gRightValueNum=0;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long  long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long  long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

 char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66);
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...);
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
__attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use snprintf(3) instead.")))

 int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);
struct __sFILE* tmpfile();
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);
__attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use vsnprintf(3) instead.")))

 int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99);
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);
int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
void flockfile(struct __sFILE* anonymous_var_nameX108);
int ftrylockfile(struct __sFILE* anonymous_var_nameX109);
void funlockfile(struct __sFILE* anonymous_var_nameX110);
int getc_unlocked(struct __sFILE* anonymous_var_nameX111);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);
int putchar_unlocked(int anonymous_var_nameX114);
int getw(struct __sFILE* anonymous_var_nameX115);
int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long  long __offset, int __whence);
long  long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);
int vscanf(const char* __format, va_list anonymous_var_nameX119);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long  long (*anonymous_lambda_var_nameZ3)(void*,long  long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);
int wait(int* anonymous_var_nameX189);
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_free(void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX206);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214);
void exit(int anonymous_var_nameX215);
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219);
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231);
int rand();
void srand(unsigned int anonymous_var_nameX232);
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
 int system(const char* anonymous_var_nameX239);
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245);
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]);
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX271[3]);
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX274);
long random();
int rand_r(unsigned int* anonymous_var_nameX275);
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX279);
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);
int cgetclose();
int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);
int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);
int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);
int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);
int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);
int cgetset(const char* anonymous_var_nameX304);
int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);
int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp);
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
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
 int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
 int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366);
int ffsll(long  long anonymous_var_nameX367);
int fls(int anonymous_var_nameX368);
int flsl(long anonymous_var_nameX369);
int flsll(long  long anonymous_var_nameX370);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX371, const char* anonymous_var_nameX372);
int* __error();
int isalnum(int anonymous_var_nameX387);
int isalpha(int anonymous_var_nameX388);
int isblank(int anonymous_var_nameX389);
int iscntrl(int anonymous_var_nameX390);
int isdigit(int anonymous_var_nameX391);
int isgraph(int anonymous_var_nameX392);
int islower(int anonymous_var_nameX393);
int isprint(int anonymous_var_nameX394);
int ispunct(int anonymous_var_nameX395);
int isspace(int anonymous_var_nameX396);
int isupper(int anonymous_var_nameX397);
int isxdigit(int anonymous_var_nameX398);
int tolower(int anonymous_var_nameX399);
int toupper(int anonymous_var_nameX400);
int isascii(int anonymous_var_nameX401);
int toascii(int anonymous_var_nameX402);
int _tolower(int anonymous_var_nameX403);
int _toupper(int anonymous_var_nameX404);
int digittoint(int anonymous_var_nameX405);
int ishexnumber(int anonymous_var_nameX406);
int isideogram(int anonymous_var_nameX407);
int isnumber(int anonymous_var_nameX408);
int isphonogram(int anonymous_var_nameX409);
int isrune(int anonymous_var_nameX410);
int isspecial(int anonymous_var_nameX411);
char* asctime(const struct tm* anonymous_var_nameX412);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX413);
double difftime(long anonymous_var_nameX414, long anonymous_var_nameX415);
struct tm* getdate(const char* anonymous_var_nameX416);
struct tm* gmtime(const long* anonymous_var_nameX417);
struct tm* localtime(const long* anonymous_var_nameX418);
long mktime(struct tm* anonymous_var_nameX419);
unsigned long  int strftime(char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421, const char* anonymous_var_nameX422, const struct tm* anonymous_var_nameX423);
char* strptime(const char* anonymous_var_nameX424, const char* anonymous_var_nameX425, struct tm* anonymous_var_nameX426);
long time(long* anonymous_var_nameX427);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX428, char* anonymous_var_nameX429);
char* ctime_r(const long* anonymous_var_nameX430, char* anonymous_var_nameX431);
struct tm* gmtime_r(const long* anonymous_var_nameX432, struct tm* anonymous_var_nameX433);
struct tm* localtime_r(const long* anonymous_var_nameX434, struct tm* anonymous_var_nameX435);
long posix2time(long anonymous_var_nameX436);
void tzsetwall();
long time2posix(long anonymous_var_nameX437);
long timelocal(struct tm* anonymous_var_nameX438);
long timegm(struct tm* anonymous_var_nameX439);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
 int clock_getres(enum anonymous_typeY12 __clock_id, struct timespec* __res);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
 int clock_gettime(enum anonymous_typeY12 __clock_id, struct timespec* __tp);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
 unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY12 __clock_id);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
 int clock_settime(enum anonymous_typeY12 __clock_id, const struct timespec* __tp);
__attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)))
 int timespec_get(struct timespec* ts, int base);
int iswalnum(int anonymous_var_nameX440);
int iswalpha(int anonymous_var_nameX441);
int iswcntrl(int anonymous_var_nameX442);
int iswctype(int anonymous_var_nameX443, unsigned int anonymous_var_nameX444);
int iswdigit(int anonymous_var_nameX445);
int iswgraph(int anonymous_var_nameX446);
int iswlower(int anonymous_var_nameX447);
int iswprint(int anonymous_var_nameX448);
int iswpunct(int anonymous_var_nameX449);
int iswspace(int anonymous_var_nameX450);
int iswupper(int anonymous_var_nameX451);
int iswxdigit(int anonymous_var_nameX452);
int towlower(int anonymous_var_nameX453);
int towupper(int anonymous_var_nameX454);
unsigned int wctype(const char* anonymous_var_nameX455);
int btowc(int anonymous_var_nameX456);
int fgetwc(struct __sFILE* anonymous_var_nameX457);
int* fgetws(int* anonymous_var_nameX458, int anonymous_var_nameX459, struct __sFILE* anonymous_var_nameX460);
int fputwc(int anonymous_var_nameX461, struct __sFILE* anonymous_var_nameX462);
int fputws(const int* anonymous_var_nameX463, struct __sFILE* anonymous_var_nameX464);
int fwide(struct __sFILE* anonymous_var_nameX465, int anonymous_var_nameX466);
int fwprintf(struct __sFILE* anonymous_var_nameX467, const int* anonymous_var_nameX468, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX469, const int* anonymous_var_nameX470, ...);
int getwc(struct __sFILE* anonymous_var_nameX471);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX472, unsigned long  int anonymous_var_nameX473, union anonymous_typeZ1* anonymous_var_nameX474);
unsigned long  int mbrtowc(int* anonymous_var_nameX475, const char* anonymous_var_nameX476, unsigned long  int anonymous_var_nameX477, union anonymous_typeZ1* anonymous_var_nameX478);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX479);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX480, const char** anonymous_var_nameX481, unsigned long  int anonymous_var_nameX482, union anonymous_typeZ1* anonymous_var_nameX483);
int putwc(int anonymous_var_nameX484, struct __sFILE* anonymous_var_nameX485);
int putwchar(int anonymous_var_nameX486);
int swprintf(int* anonymous_var_nameX487, unsigned long  int anonymous_var_nameX488, const int* anonymous_var_nameX489, ...);
int swscanf(const int* anonymous_var_nameX490, const int* anonymous_var_nameX491, ...);
int ungetwc(int anonymous_var_nameX492, struct __sFILE* anonymous_var_nameX493);
int vfwprintf(struct __sFILE* anonymous_var_nameX494, const int* anonymous_var_nameX495, __darwin_va_list anonymous_var_nameX496);
int vswprintf(int* anonymous_var_nameX497, unsigned long  int anonymous_var_nameX498, const int* anonymous_var_nameX499, __darwin_va_list anonymous_var_nameX500);
int vwprintf(const int* anonymous_var_nameX501, __darwin_va_list anonymous_var_nameX502);
unsigned long  int wcrtomb(char* anonymous_var_nameX503, int anonymous_var_nameX504, union anonymous_typeZ1* anonymous_var_nameX505);
int* wcscat(int* anonymous_var_nameX506, const int* anonymous_var_nameX507);
int* wcschr(const int* anonymous_var_nameX508, int anonymous_var_nameX509);
int wcscmp(const int* anonymous_var_nameX510, const int* anonymous_var_nameX511);
int wcscoll(const int* anonymous_var_nameX512, const int* anonymous_var_nameX513);
int* wcscpy(int* anonymous_var_nameX514, const int* anonymous_var_nameX515);
unsigned long  int wcscspn(const int* anonymous_var_nameX516, const int* anonymous_var_nameX517);
unsigned long  int wcsftime(int* anonymous_var_nameX518, unsigned long  int anonymous_var_nameX519, const int* anonymous_var_nameX520, const struct tm* anonymous_var_nameX521);
unsigned long  int wcslen(const int* anonymous_var_nameX522);
int* wcsncat(int* anonymous_var_nameX523, const int* anonymous_var_nameX524, unsigned long  int anonymous_var_nameX525);
int wcsncmp(const int* anonymous_var_nameX526, const int* anonymous_var_nameX527, unsigned long  int anonymous_var_nameX528);
int* wcsncpy(int* anonymous_var_nameX529, const int* anonymous_var_nameX530, unsigned long  int anonymous_var_nameX531);
int* wcspbrk(const int* anonymous_var_nameX532, const int* anonymous_var_nameX533);
int* wcsrchr(const int* anonymous_var_nameX534, int anonymous_var_nameX535);
unsigned long  int wcsrtombs(char* anonymous_var_nameX536, const int** anonymous_var_nameX537, unsigned long  int anonymous_var_nameX538, union anonymous_typeZ1* anonymous_var_nameX539);
unsigned long  int wcsspn(const int* anonymous_var_nameX540, const int* anonymous_var_nameX541);
int* wcsstr(const int* anonymous_var_nameX542, const int* anonymous_var_nameX543);
unsigned long  int wcsxfrm(int* anonymous_var_nameX544, const int* anonymous_var_nameX545, unsigned long  int anonymous_var_nameX546);
int wctob(int anonymous_var_nameX547);
double wcstod(const int* anonymous_var_nameX548, int** anonymous_var_nameX549);
int* wcstok(int* anonymous_var_nameX550, const int* anonymous_var_nameX551, int** anonymous_var_nameX552);
long wcstol(const int* anonymous_var_nameX553, int** anonymous_var_nameX554, int anonymous_var_nameX555);
unsigned long  int wcstoul(const int* anonymous_var_nameX556, int** anonymous_var_nameX557, int anonymous_var_nameX558);
int* wmemchr(const int* anonymous_var_nameX559, int anonymous_var_nameX560, unsigned long  int anonymous_var_nameX561);
int wmemcmp(const int* anonymous_var_nameX562, const int* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
int* wmemcpy(int* anonymous_var_nameX565, const int* anonymous_var_nameX566, unsigned long  int anonymous_var_nameX567);
int* wmemmove(int* anonymous_var_nameX568, const int* anonymous_var_nameX569, unsigned long  int anonymous_var_nameX570);
int* wmemset(int* anonymous_var_nameX571, int anonymous_var_nameX572, unsigned long  int anonymous_var_nameX573);
int wprintf(const int* anonymous_var_nameX574, ...);
int wscanf(const int* anonymous_var_nameX575, ...);
int wcswidth(const int* anonymous_var_nameX576, unsigned long  int anonymous_var_nameX577);
int wcwidth(int anonymous_var_nameX578);
int vfwscanf(struct __sFILE* anonymous_var_nameX579, const int* anonymous_var_nameX580, __darwin_va_list anonymous_var_nameX581);
int vswscanf(const int* anonymous_var_nameX582, const int* anonymous_var_nameX583, __darwin_va_list anonymous_var_nameX584);
int vwscanf(const int* anonymous_var_nameX585, __darwin_va_list anonymous_var_nameX586);
float wcstof(const int* anonymous_var_nameX587, int** anonymous_var_nameX588);
long  double wcstold(const int* anonymous_var_nameX589, int** anonymous_var_nameX590);
long long wcstoll(const int* anonymous_var_nameX591, int** anonymous_var_nameX592, int anonymous_var_nameX593);
unsigned long  long wcstoull(const int* anonymous_var_nameX594, int** anonymous_var_nameX595, int anonymous_var_nameX596);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX597, const char** anonymous_var_nameX598, unsigned long  int anonymous_var_nameX599, unsigned long  int anonymous_var_nameX600, union anonymous_typeZ1* anonymous_var_nameX601);
int* wcpcpy(int* anonymous_var_nameX602, const int* anonymous_var_nameX603);
int* wcpncpy(int* anonymous_var_nameX604, const int* anonymous_var_nameX605, unsigned long  int anonymous_var_nameX606);
int* wcsdup(const int* anonymous_var_nameX607);
int wcscasecmp(const int* anonymous_var_nameX608, const int* anonymous_var_nameX609);
int wcsncasecmp(const int* anonymous_var_nameX610, const int* anonymous_var_nameX611, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX612, unsigned long  int anonymous_var_nameX613);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX614, const int** anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, unsigned long  int anonymous_var_nameX617, union anonymous_typeZ1* anonymous_var_nameX618);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX619, unsigned long  int* anonymous_var_nameX620);
unsigned long  int wcslcat(int* anonymous_var_nameX621, const int* anonymous_var_nameX622, unsigned long  int anonymous_var_nameX623);
unsigned long  int wcslcpy(int* anonymous_var_nameX624, const int* anonymous_var_nameX625, unsigned long  int anonymous_var_nameX626);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static unsigned int buffer_get_hash_key(struct buffer* self);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_call_cloner(void* fun, void* mem);
unsigned int come_call_get_hash_key(void* fun, void* mem);
unsigned int come_call_equals(void* fun, void* mem, void* mem2);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
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
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
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
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
struct tuple2$2intcharph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void free_objects_of_match_lv_tables(struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile_v5(struct sInfo* info);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static int list$1voidphp_length(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self);
static unsigned int sRightValueObject_get_hash_key(struct sRightValueObject* self);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1voidph* list$1voidphp_delete(struct list$1voidph* self, int head, int tail);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
// uniq global variable
// inline function

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            (self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result173__;
}

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_317;
struct list$1voidph* o2_saved_318;
struct sRightValueObject* it2_321;
char* __dec_obj32;
void* __right_value252 = (void*)0;
char* __dec_obj33;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_317=right_value->right_value_objects;
        for(        o2_saved_318=(struct list$1voidph*)come_increment_ref_count((info->right_value_objects)),it2_321=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_318)));        !list$1voidphp_end((o2_saved_318));        it2_321=((struct sRightValueObject*)list$1voidphp_next((o2_saved_318)))        ){
            if(            it_317->mID==it2_321->mID) {
                it2_321->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer3(o2_saved_318,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj32=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj33=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_319;
void* __result230__;
void* __result231__;
void* result_320;
void* __result232__;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_319,0,sizeof(void*));
        __result230__ = gComeFunResultObject = __result_obj__ = result_319;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    self->it=self->head;
    if(    self->it) {
        __result231__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    memset(&result_320,0,sizeof(void*));
    __result232__ = gComeFunResultObject = __result_obj__ = result_320;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_322;
void* __result233__;
void* __result234__;
void* result_323;
void* __result235__;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_322,0,sizeof(void*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_322;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_323,0,sizeof(void*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_323;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_324;
struct list_item$1voidph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            come_call_finalizer3(__dec_obj31,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct sType* result_326;
struct sType* __result251__;
struct sType* __result252__;
struct sClass* klass_360;
void* __right_value289 = (void*)0;
struct sType* result_type_361;
struct sType* __dec_obj74;
struct list$1voidph* o2_saved_364;
struct sType* it_365;
void* __right_value290 = (void*)0;
struct sType* new_param_type_366;
int generics_number_370;
void* __right_value294 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_371=0;
char* Err_372=0;
struct list$1sNodeph* array_num_373;
_Bool immutable__374;
int pointer_num_375;
_Bool heap_376;
_Bool exception__377;
_Bool guard__378;
_Bool no_heap_379;
_Bool no_calling_destructor_380;
_Bool null_value_381;
_Bool generate__382;
_Bool vtable_383;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sType* __dec_obj79;
struct list$1sNodeph* __dec_obj80;
int generics_number_387;
void* __right_value297 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_388=0;
char* Err_389=0;
void* __right_value298 = (void*)0;
struct sClass* klass2_390;
int generics_number2_391;
struct list$1sNodeph* array_num_392;
_Bool immutable__393;
int pointer_num_394;
_Bool heap_395;
_Bool guard__396;
_Bool no_heap_397;
_Bool no_calling_destructor_398;
_Bool null_value_399;
_Bool record__400;
_Bool multiple_types_401;
_Bool exception__402;
_Bool generate__403;
_Bool vtable_404;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sType* __dec_obj81;
struct list$1sNodeph* __dec_obj82;
struct list$1voidph* o2_saved_405;
struct sType* it_406;
void* __right_value301 = (void*)0;
struct sType* type_407;
void* __right_value302 = (void*)0;
char* new_name_408;
struct sType* __result257__;
    result_326=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type==((void*)0)) {
        __result251__ = gComeFunResultObject = __result_obj__ = result_326;
        come_call_finalizer3(result_326,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    if(    list$1voidphp_length(generics_type->mGenericsTypes)==0) {
        __result252__ = gComeFunResultObject = __result_obj__ = result_326;
        come_call_finalizer3(result_326,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    klass_360=type->mClass;
    if(    string_operator_equals(klass_360->mName,"lambda")) {
        result_type_361=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType,generics_type,info));
        __dec_obj74=result_326->mResultType;
        result_326->mResultType=(struct sType*)come_increment_ref_count(result_type_361);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1voidphp_reset(result_326->mParamTypes);
        for(        o2_saved_364=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_365=((struct sType*)list$1voidphp_begin((o2_saved_364)));        !list$1voidphp_end((o2_saved_364));        it_365=((struct sType*)list$1voidphp_next((o2_saved_364)))        ){
            new_param_type_366=(struct sType*)come_increment_ref_count(solve_generics(it_365,generics_type,info));
            list$1voidphp_push_back(result_326->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_366));
            come_call_finalizer3(new_param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_364,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_360->mMethodGenerics&&info->method_generics_types&&list$1voidphp_length(info->method_generics_types)>0) {
        generics_number_370=klass_360->mMethodGenericsNum;
        if(        generics_number_370>=list$1voidphp_length(info->method_generics_types)) {
            multiple_assign_var1=((struct tuple2$2intcharph*)(__right_value294=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_370,list$1voidphp_length(info->method_generics_types))));
            come_exception_var_c1_371=multiple_assign_var1->v1;
            Err_372=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_372)?(puts(Err_372),exit(0)):(0));
            come_call_finalizer3(__right_value294,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_372 = come_decrement_ref_count2(Err_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        array_num_373=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__374=type->mImmutable;
        pointer_num_375=type->mPointerNum;
        heap_376=type->mHeap;
        exception__377=type->mException;
        guard__378=type->mGuardValue;
        no_heap_379=type->mNoHeap;
        no_calling_destructor_380=type->mNoCallingDestructor;
        null_value_381=type->mNullValue;
        generate__382=type->mGenerate;
        vtable_383=type->mCreateVTable;
        __dec_obj79=result_326;
        result_326=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value295=list$1voidphp_operator_load_element(info->method_generics_types,generics_number_370))))));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value295,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        generate__382) {
            result_326->mGenerate=generate__382;
        }
        if(        vtable_383) {
            result_326->mCreateVTable=vtable_383;
        }
        if(        heap_376) {
            result_326->mHeap=heap_376;
        }
        if(        guard__378) {
            result_326->mGuardValue=guard__378;
        }
        if(        no_heap_379) {
            result_326->mNoHeap=(_Bool)1;
            result_326->mHeap=(_Bool)0;
        }
        if(        exception__377) {
            result_326->mException=(_Bool)1;
        }
        if(        no_calling_destructor_380) {
            result_326->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__374) {
            result_326->mImmutable=immutable__374;
        }
        if(        list$1sNodephp_length(array_num_373)>0) {
            __dec_obj80=result_326->mArrayNum;
            result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_373);
            come_call_finalizer3(__dec_obj80,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_381) {
            result_326->mNullValue=null_value_381;
        }
        if(        pointer_num_375>0) {
            result_326->mPointerNum+=pointer_num_375;
        }
        come_call_finalizer3(array_num_373,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_360->mGenerics) {
        generics_number_387=klass_360->mGenericsNum;
        if(        generics_number_387>=list$1voidphp_length(generics_type->mGenericsTypes)) {
            multiple_assign_var2=((struct tuple2$2intcharph*)(__right_value297=err_msg(info,"invalid generics parametor number")));
            come_exception_var_c2_388=multiple_assign_var2->v1;
            Err_389=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            ((Err_389)?(puts(Err_389),exit(0)):(0));
            come_call_finalizer3(__right_value297,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_389 = come_decrement_ref_count2(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        klass2_390=((struct sType*)((void*)(__right_value298=list$1voidphp_operator_load_element(generics_type->mGenericsTypes,generics_number_387))))->mClass;
        come_call_finalizer3(__right_value298,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        generics_number2_391=klass2_390->mGenericsNum;
        if(        generics_number_387!=generics_number2_391) {
            array_num_392=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__393=type->mImmutable;
            pointer_num_394=type->mPointerNum;
            heap_395=type->mHeap;
            guard__396=type->mGuardValue;
            no_heap_397=type->mNoHeap;
            no_calling_destructor_398=type->mNoCallingDestructor;
            null_value_399=type->mNullValue;
            record__400=type->mRecord;
            multiple_types_401=type->mMultipleTypes;
            exception__402=type->mException;
            generate__403=type->mGenerate;
            vtable_404=type->mCreateVTable;
            __dec_obj81=result_326;
            result_326=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value299=list$1voidphp_operator_load_element(generics_type->mGenericsTypes,generics_number_387))))));
            come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value299,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            vtable_404) {
                result_326->mCreateVTable=vtable_404;
            }
            if(            generate__403) {
                result_326->mGenerate=generate__403;
            }
            if(            heap_395) {
                result_326->mHeap=heap_395;
            }
            if(            exception__402) {
                result_326->mException=exception__402;
            }
            if(            guard__396) {
                result_326->mGuardValue=guard__396;
            }
            if(            record__400) {
                result_326->mRecord=record__400;
            }
            if(            no_heap_397) {
                result_326->mNoHeap=(_Bool)1;
                result_326->mHeap=(_Bool)0;
            }
            if(            multiple_types_401) {
                result_326->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_398) {
                result_326->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__393) {
                result_326->mImmutable=immutable__393;
            }
            if(            list$1sNodephp_length(array_num_392)>0) {
                __dec_obj82=result_326->mArrayNum;
                result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_392);
                come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            if(            null_value_399) {
                result_326->mNullValue=null_value_399;
            }
            if(            pointer_num_394>0) {
                result_326->mPointerNum+=pointer_num_394;
            }
            come_call_finalizer3(array_num_392,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1voidphp_reset(result_326->mGenericsTypes);
        for(        o2_saved_405=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_406=((struct sType*)list$1voidphp_begin((o2_saved_405)));        !list$1voidphp_end((o2_saved_405));        it_406=((struct sType*)list$1voidphp_next((o2_saved_405)))        ){
            type_407=(struct sType*)come_increment_ref_count(solve_generics(it_406,generics_type,info));
            list$1voidphp_push_back(result_326->mGenericsTypes,(struct sType*)come_increment_ref_count(type_407));
            come_call_finalizer3(type_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_405,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_generics_struct(result_326,generics_type,info)) {
            new_name_408=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_408);
            exit(1);
            (new_name_408 = come_decrement_ref_count2(new_name_408, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer3(result_326,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result236__;
void* __right_value253 = (void*)0;
struct sType* result_342;
void* __right_value254 = (void*)0;
struct sType* __dec_obj50;
void* __right_value255 = (void*)0;
struct sType* __dec_obj51;
void* __right_value262 = (void*)0;
struct list$1voidph* __dec_obj55;
void* __right_value263 = (void*)0;
struct sType* __dec_obj56;
void* __right_value264 = (void*)0;
struct sType* __dec_obj57;
void* __right_value266 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value267 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value268 = (void*)0;
char* __dec_obj60;
void* __right_value269 = (void*)0;
char* __dec_obj61;
void* __right_value270 = (void*)0;
char* __dec_obj62;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __dec_obj66;
void* __right_value278 = (void*)0;
char* __dec_obj67;
void* __right_value279 = (void*)0;
struct list$1voidph* __dec_obj68;
void* __right_value286 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value287 = (void*)0;
struct sType* __dec_obj73;
struct sType* __result250__;
    if(    self==(void*)0) {
        __result236__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_342=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_342->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj50=result_342->mOriginalLoadVarType;
        result_342->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj51=result_342->mChannelType;
        result_342->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj55=result_342->mGenericsTypes;
        result_342->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj55,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_342->mNoSolvedGenericsType;
        result_342->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_342->mAnyOriginalType;
        result_342->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj58=result_342->mSizeNum;
        result_342->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_342->mAlignas;
        result_342->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj60=result_342->mTupleName;
        result_342->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj61=result_342->mAttribute;
        result_342->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_342->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_342->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_342->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_342->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_342->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_342->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_342->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_342->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_342->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_342->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_342->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_342->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_342->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_342->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_342->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_342->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_342->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_342->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_342->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_342->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_342->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_342->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_342->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_342->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_342->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_342->mAsmName;
        result_342->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_342->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_342->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_342->mArrayNum;
        result_342->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_342->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj67=result_342->mOriginalTypeName;
        result_342->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_342->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_342->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_342->mParamTypes;
        result_342->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_342->mParamNames;
        result_342->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_342->mResultType;
        result_342->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mVarArgs=self->mVarArgs;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct list$1voidph* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sNode* __dec_obj39;
struct sNode* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
char* __dec_obj43;
struct list$1sNodeph* __dec_obj44;
char* __dec_obj46;
struct list$1voidph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct sType* __dec_obj49;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj35=self->mChannelType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj36=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj36,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj39=self->mSizeNum;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj40=self->mAlignas;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj41=self->mTupleName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj42=self->mAttribute;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj43=self->mAsmName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj46=self->mOriginalTypeName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_327;
struct list_item$1voidph* prev_it_328;
    it_327=self->head;
    while(it_327!=((void*)0)) {
        prev_it_328=it_327;
        it_327=it_327->next;
        come_call_finalizer3(prev_it_328,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_329;
struct list_item$1sNodeph* prev_it_330;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        prev_it_330=it_329;
        it_329=it_329->next;
        come_call_finalizer3(prev_it_330,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* prev_it_332;
    it_331=self->head;
    while(it_331!=((void*)0)) {
        prev_it_332=it_331;
        it_331=it_331->next;
        come_call_finalizer3(prev_it_332,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_333;
struct list_item$1charph* prev_it_334;
    it_333=self->head;
    while(it_333!=((void*)0)) {
        prev_it_334=it_333;
        it_333=it_333->next;
        come_call_finalizer3(prev_it_334,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_335;
    result_335=0;
    result_335+=int_get_hash_key(((int)self->mClass));
    result_335+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_335+=int_get_hash_key(((int)self->mChannelType));
    result_335+=int_get_hash_key(((int)self->mGenericsTypes));
    result_335+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_335+=int_get_hash_key(((int)self->mAnyClass));
    result_335+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_335+=int_get_hash_key(((int)self->mSizeNum));
    result_335+=int_get_hash_key(((int)self->mAlignas));
    result_335+=int_get_hash_key(((int)self->mTupleName));
    result_335+=int_get_hash_key(((int)self->mAttribute));
    result_335+=int_get_hash_key(((int)self->mAllocaValue));
    result_335+=int_get_hash_key(((int)self->mUnsigned));
    result_335+=int_get_hash_key(((int)self->mShort));
    result_335+=int_get_hash_key(((int)self->mLong));
    result_335+=int_get_hash_key(((int)self->mLongLong));
    result_335+=int_get_hash_key(((int)self->mConstant));
    result_335+=int_get_hash_key(((int)self->mAtomic));
    result_335+=int_get_hash_key(((int)self->mRegister));
    result_335+=int_get_hash_key(((int)self->mVolatile));
    result_335+=int_get_hash_key(((int)self->mStatic));
    result_335+=int_get_hash_key(((int)self->mUniq));
    result_335+=int_get_hash_key(((int)self->mRecord));
    result_335+=int_get_hash_key(((int)self->mExtern));
    result_335+=int_get_hash_key(((int)self->mRestrict));
    result_335+=int_get_hash_key(((int)self->mImmutable));
    result_335+=int_get_hash_key(((int)self->mHeap));
    result_335+=int_get_hash_key(((int)self->mChannel));
    result_335+=int_get_hash_key(((int)self->mNoHeap));
    result_335+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_335+=int_get_hash_key(((int)self->mException));
    result_335+=int_get_hash_key(((int)self->mGenerate));
    result_335+=int_get_hash_key(((int)self->mCreateVTable));
    result_335+=int_get_hash_key(((int)self->mDynamic));
    result_335+=int_get_hash_key(((int)self->mInline));
    result_335+=int_get_hash_key(((int)self->mNullValue));
    result_335+=int_get_hash_key(((int)self->mGuardValue));
    result_335+=int_get_hash_key(((int)self->mAsmName));
    result_335+=int_get_hash_key(((int)self->mTypedef));
    result_335+=int_get_hash_key(((int)self->mMultipleTypes));
    result_335+=int_get_hash_key(((int)self->mOriginIsArray));
    result_335+=int_get_hash_key(((int)self->mArrayNum));
    result_335+=int_get_hash_key(((int)self->mPointerNum));
    result_335+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_335+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_335+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_335+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_335+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_335+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_335+=int_get_hash_key(((int)self->mArrayPointerType));
    result_335+=int_get_hash_key(((int)self->mLambdaArray));
    result_335+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_335+=int_get_hash_key(((int)self->mParamTypes));
    result_335+=int_get_hash_key(((int)self->mParamNames));
    result_335+=int_get_hash_key(((int)self->mResultType));
    result_335+=int_get_hash_key(((int)self->mVarArgs));
    return result_335;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_336;
struct list_item$1voidph* it2_337;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_336=left->head;
    it2_337=right->head;
    while(it_336!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_336->item, it2_337->item)) {
            return (_Bool)0;
        }
        it_336=it_336->next;
        it2_337=it2_337->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_338;
struct list_item$1sNodeph* it2_339;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_338=left->head;
    it2_339=right->head;
    while(it_338!=((void*)0)) {
        if(        !sNode_equals(it_338->item,it2_339->item)) {
            return (_Bool)0;
        }
        it_338=it_338->next;
        it2_339=it2_339->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_340;
struct list_item$1charph* it2_341;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_340=left->head;
    it2_341=right->head;
    while(it_340!=((void*)0)) {
        if(        !string_equals(it_340->item,it2_341->item)) {
            return (_Bool)0;
        }
        it_340=it_340->next;
        it2_341=it2_341->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result237__;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1voidph* result_344;
struct list_item$1voidph* it_345;
void* __right_value261 = (void*)0;
struct list$1voidph* __result240__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_344=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_345=self->head;
    while(it_345!=((void*)0)) {
        list$1voidphp_add(result_344,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_345->item)));
        it_345=it_345->next;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_344;
    come_call_finalizer3(result_344,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_343;
    result_343=0;
    result_343+=int_get_hash_key(((int)self->head));
    result_343+=int_get_hash_key(((int)self->tail));
    result_343+=int_get_hash_key(((int)self->len));
    result_343+=int_get_hash_key(((int)self->it));
    return result_343;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result238__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
struct list_item$1voidph* litem_346;
void* __dec_obj52;
void* __right_value259 = (void*)0;
struct list_item$1voidph* litem_347;
void* __dec_obj53;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_348;
void* __dec_obj54;
struct list$1voidph* __result239__;
    if(    self->len==0) {
        litem_346=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value258=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=((void*)0);
        litem_346->next=((void*)0);
        __dec_obj52=litem_346->item;
        litem_346->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_346;
        self->head=litem_346;
    }
    else if(    self->len==1) {
        litem_347=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value259=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->head;
        litem_347->next=((void*)0);
        __dec_obj53=litem_347->item;
        litem_347->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_347;
        self->head->next=litem_347;
    }
    else {
        litem_348=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_348->prev=self->tail;
        litem_348->next=((void*)0);
        __dec_obj54=litem_348->item;
        litem_348->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_348;
        self->tail=litem_348;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result241__;
void* __right_value265 = (void*)0;
struct sNode* result_349;
struct sNode* __result242__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_349=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_349->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_349->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_349->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_349->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_349->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_349->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_349->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_349->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_349->kind=self->kind;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_349;
    ((result_349) ? result_349 = come_decrement_ref_count2(result_349, ((struct sNode*)result_349)->finalize, ((struct sNode*)result_349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result243__;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sNodeph* result_350;
struct list_item$1sNodeph* it_351;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __result246__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_350=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_351=self->head;
    while(it_351!=((void*)0)) {
        list$1sNodephp_add(result_350,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_351->item)));
        it_351=it_351->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_350;
    come_call_finalizer3(result_350,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result244__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_352;
struct sNode* __dec_obj63;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_353;
struct sNode* __dec_obj64;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_354;
struct sNode* __dec_obj65;
struct list$1sNodeph* __result245__;
    if(    self->len==0) {
        litem_352=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=((void*)0);
        litem_352->next=((void*)0);
        __dec_obj63=litem_352->item;
        litem_352->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_352;
        self->head=litem_352;
    }
    else if(    self->len==1) {
        litem_353=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=self->head;
        litem_353->next=((void*)0);
        __dec_obj64=litem_353->item;
        litem_353->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_353;
        self->head->next=litem_353;
    }
    else {
        litem_354=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->tail;
        litem_354->next=((void*)0);
        __dec_obj65=litem_354->item;
        litem_354->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_354;
        self->tail=litem_354;
    }
    self->len++;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result247__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* result_355;
struct list_item$1charph* it_356;
void* __right_value285 = (void*)0;
struct list$1charph* __result249__;
    if(    self==((void*)0)) {
        __result247__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_355=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_356=self->head;
    while(it_356!=((void*)0)) {
        list$1charphp_add(result_355,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_356->item)));
        it_356=it_356->next;
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_355;
    come_call_finalizer3(result_355,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_357;
char* __dec_obj69;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_358;
char* __dec_obj70;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_359;
char* __dec_obj71;
struct list$1charph* __result248__;
    if(    self->len==0) {
        litem_357=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=((void*)0);
        litem_357->next=((void*)0);
        __dec_obj69=litem_357->item;
        litem_357->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_357;
        self->head=litem_357;
    }
    else if(    self->len==1) {
        litem_358=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->head;
        litem_358->next=((void*)0);
        __dec_obj70=litem_358->item;
        litem_358->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_358;
        self->head->next=litem_358;
    }
    else {
        litem_359=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->tail;
        litem_359->next=((void*)0);
        __dec_obj71=litem_359->item;
        litem_359->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_359;
        self->tail=litem_359;
    }
    self->len++;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_362;
struct list_item$1voidph* prev_it_363;
struct list$1voidph* __result253__;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        come_call_finalizer3(prev_it_363,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_367;
void* __dec_obj75;
void* __right_value292 = (void*)0;
struct list_item$1voidph* litem_368;
void* __dec_obj76;
void* __right_value293 = (void*)0;
struct list_item$1voidph* litem_369;
void* __dec_obj77;
struct list$1voidph* __result254__;
    if(    self->len==0) {
        litem_367=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=((void*)0);
        litem_367->next=((void*)0);
        __dec_obj75=litem_367->item;
        litem_367->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_367;
        self->head=litem_367;
    }
    else if(    self->len==1) {
        litem_368=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value292=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->head;
        litem_368->next=((void*)0);
        __dec_obj76=litem_368->item;
        litem_368->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_368;
        self->head->next=litem_368;
    }
    else {
        litem_369=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value293=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->tail;
        litem_369->next=((void*)0);
        __dec_obj77=litem_369->item;
        litem_369->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_369;
        self->tail=litem_369;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj78;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj78=self->v2;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_384;
int i_385;
void* __result255__;
void* default_value_386;
void* __result256__;
default_value_386 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_384=self->head;
    i_385=0;
    while(it_384!=((void*)0)) {
        if(        position==i_385) {
            __result255__ = gComeFunResultObject = __result_obj__ = it_384->item;
            gComeFunResultObject = (void*)0;
            return __result255__;
        }
        it_384=it_384->next;
        i_385++;
    }
    memset(&default_value_386,0,sizeof(void*));
    __result256__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_386);
    come_call_finalizer3(default_value_386,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct sType* result_409;
struct sClass* klass_410;
int generics_number_411;
void* __right_value304 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_412=0;
char* Err_413=0;
struct list$1sNodeph* array_num_414;
_Bool immutable__415;
int pointer_num_416;
_Bool heap_417;
_Bool guard__418;
_Bool no_heap_419;
_Bool no_calling_destructor_420;
_Bool null_value_421;
_Bool exception__422;
_Bool generate__423;
_Bool vtable_424;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj83;
struct list$1sNodeph* __dec_obj84;
int i_425;
struct list$1voidph* o2_saved_426;
struct sType* it_427;
void* __right_value307 = (void*)0;
struct list$1voidph* o2_saved_433;
struct sType* it_434;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj86;
struct sType* __result260__;
    result_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    klass_410=type->mClass;
    if(    klass_410->mMethodGenerics&&info->method_generics_types&&list$1voidphp_length(info->method_generics_types)>0) {
        generics_number_411=klass_410->mMethodGenericsNum;
        if(        generics_number_411>=list$1voidphp_length(info->method_generics_types)) {
            multiple_assign_var3=((struct tuple2$2intcharph*)(__right_value304=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_411,list$1voidphp_length(info->method_generics_types))));
            come_exception_var_c3_412=multiple_assign_var3->v1;
            Err_413=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_413)?(puts(Err_413),exit(0)):(0));
            come_call_finalizer3(__right_value304,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_413 = come_decrement_ref_count2(Err_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        array_num_414=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__415=type->mImmutable;
        pointer_num_416=type->mPointerNum;
        heap_417=type->mHeap;
        guard__418=type->mGuardValue;
        no_heap_419=type->mNoHeap;
        no_calling_destructor_420=type->mNoCallingDestructor;
        null_value_421=type->mNullValue;
        exception__422=type->mException;
        generate__423=type->mGenerate;
        vtable_424=type->mCreateVTable;
        __dec_obj83=result_409;
        result_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value305=list$1voidphp_operator_load_element(info->method_generics_types,generics_number_411))))));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value305,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        vtable_424) {
            result_409->mCreateVTable=vtable_424;
        }
        if(        generate__423) {
            result_409->mGenerate=generate__423;
        }
        if(        heap_417) {
            result_409->mHeap=heap_417||result_409->mHeap;
        }
        if(        exception__422) {
            result_409->mException=exception__422;
        }
        if(        guard__418) {
            result_409->mGuardValue=guard__418||result_409->mGuardValue;
        }
        if(        no_heap_419) {
            result_409->mNoHeap=(_Bool)1;
            result_409->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_420) {
            result_409->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__415) {
            result_409->mImmutable=immutable__415;
        }
        if(        list$1sNodephp_length(array_num_414)>0) {
            __dec_obj84=result_409->mArrayNum;
            result_409->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_414);
            come_call_finalizer3(__dec_obj84,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_421) {
            result_409->mNullValue=null_value_421;
        }
        if(        pointer_num_416>0) {
            result_409->mPointerNum+=pointer_num_416;
        }
        come_call_finalizer3(array_num_414,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_425=0;
    for(    o2_saved_426=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_427=((struct sType*)list$1voidphp_begin((o2_saved_426)));    !list$1voidphp_end((o2_saved_426));    it_427=((struct sType*)list$1voidphp_next((o2_saved_426)))    ){
        list$1voidphp_operator_store_element(result_409->mGenericsTypes,i_425,(struct sType*)come_increment_ref_count(solve_method_generics(it_427,info)));
        i_425++;
    }
    come_call_finalizer3(o2_saved_426,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    i_425=0;
    for(    o2_saved_433=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_434=((struct sType*)list$1voidphp_begin((o2_saved_433)));    !list$1voidphp_end((o2_saved_433));    it_434=((struct sType*)list$1voidphp_next((o2_saved_433)))    ){
        list$1voidphp_operator_store_element(result_409->mParamTypes,i_425,(struct sType*)come_increment_ref_count(solve_method_generics(it_434,info)));
        i_425++;
    }
    come_call_finalizer3(o2_saved_433,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mResultType) {
        __dec_obj86=result_409->mResultType;
        result_409->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_409;
    come_call_finalizer3(result_409,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_428;
int i_429;
void* default_value_430;
struct list$1voidph* __result258__;
struct list_item$1voidph* it_431;
int i_432;
void* __dec_obj85;
struct list$1voidph* __result259__;
default_value_430 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_428=self->len;
        for(        i_429=0;        i_429<position-len_428;        i_429++        ){
            memset(&default_value_430,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_430));
            come_call_finalizer3(default_value_430,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result258__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    it_431=self->head;
    i_432=0;
    while(it_431!=((void*)0)) {
        if(        position==i_432) {
            __dec_obj85=it_431->item;
            it_431->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj85,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_431=it_431->next;
        i_432++;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __result261__;
void* __right_value311 = (void*)0;
char* __result262__;
void* __right_value316 = (void*)0;
struct sRightValueObject* new_value_437;
struct sType* __dec_obj93;
void* __right_value317 = (void*)0;
char* __dec_obj94;
char* __dec_obj95;
void* __right_value318 = (void*)0;
char* buf_438;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* __result265__;
    if(    gComeGC||gComeC) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value310=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    if(    info->no_output_come_code) {
        __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value311=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    new_value_437=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 303, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    __dec_obj93=new_value_437->mType;
    new_value_437->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    new_value_437->mFreed=(_Bool)0;
    new_value_437->mID=gRightValueNum;
    __dec_obj94=new_value_437->mVarName;
    new_value_437->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=new_value_437->mFunName;
    new_value_437->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_437->mBlockLevel=info->block_level;
    list$1voidphp_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_437));
    buf_438=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_438);
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=xsprintf("((%s)(%s=%s))",((char*)(__right_value319=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_437->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_437,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    (buf_438 = come_decrement_ref_count2(buf_438, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj87;
char* __dec_obj88;
char* __dec_obj89;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj87=self->mType;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj88=self->mVarName;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj89=self->mFunName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* __result263__;
void* __right_value312 = (void*)0;
struct sRightValueObject* result_436;
void* __right_value313 = (void*)0;
struct sType* __dec_obj90;
void* __right_value314 = (void*)0;
char* __dec_obj91;
void* __right_value315 = (void*)0;
char* __dec_obj92;
struct sRightValueObject* __result264__;
    if(    self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_436=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "sRightValueObject_clone", 3, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj90=result_436->mType;
        result_436->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        __dec_obj91=result_436->mVarName;
        result_436->mVarName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mVarName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj92=result_436->mFunName;
        result_436->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_436->mFreed=self->mFreed;
    }
    if(    self!=((void*)0)) {
        result_436->mID=self->mID;
    }
    if(    self!=((void*)0)) {
        result_436->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_436->mStored=self->mStored;
    }
    if(    self!=((void*)0)) {
        result_436->mDecrementRefCount=self->mDecrementRefCount;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_436;
    come_call_finalizer3(result_436,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static unsigned int sRightValueObject_get_hash_key(struct sRightValueObject* self){
unsigned int result_435;
    result_435=0;
    result_435+=int_get_hash_key(((int)self->mType));
    result_435+=int_get_hash_key(((int)self->mVarName));
    result_435+=int_get_hash_key(((int)self->mFunName));
    result_435+=int_get_hash_key(((int)self->mFreed));
    result_435+=int_get_hash_key(((int)self->mID));
    result_435+=int_get_hash_key(((int)self->mBlockLevel));
    result_435+=int_get_hash_key(((int)self->mStored));
    result_435+=int_get_hash_key(((int)self->mDecrementRefCount));
    return result_435;
}

static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right){
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mVarName,right->mVarName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFreed,right->mFreed)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStored,right->mStored)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDecrementRefCount,right->mDecrementRefCount)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value321 = (void*)0;
struct sRightValueObject* new_value_439;
struct sType* __dec_obj96;
void* __right_value322 = (void*)0;
char* __dec_obj97;
char* __dec_obj98;
void* __right_value323 = (void*)0;
char* buf_440;
void* __right_value324 = (void*)0;
char* __dec_obj99;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __dec_obj100;
    if(    gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_439=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 327, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    __dec_obj96=new_value_439->mType;
    new_value_439->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    new_value_439->mFreed=(_Bool)0;
    new_value_439->mID=gRightValueNum;
    __dec_obj97=new_value_439->mVarName;
    new_value_439->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj98=new_value_439->mFunName;
    new_value_439->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_439->mBlockLevel=info->block_level;
    new_value_439->mDecrementRefCount=decrement_ref_count;
    list$1voidphp_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_439));
    buf_440=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_440);
    __dec_obj99=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, come_value->c_value));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value325=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_439->mVarName,come_value->c_value));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value->right_value_objects=new_value_439;
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_439,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    (buf_440 = come_decrement_ref_count2(buf_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_441;
struct list$1voidph* o2_saved_442;
struct sRightValueObject* it_443;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_441=0;
    for(    o2_saved_442=(struct list$1voidph*)come_increment_ref_count((info->right_value_objects)),it_443=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_442)));    !list$1voidphp_end((o2_saved_442));    it_443=((struct sRightValueObject*)list$1voidphp_next((o2_saved_442)))    ){
        if(        it_443->mID==right_value_num) {
            break;
        }
        i_441++;
    }
    come_call_finalizer3(o2_saved_442,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1voidphp_delete(info->right_value_objects,i_441,i_441+1);
}

static struct list$1voidph* list$1voidphp_delete(struct list$1voidph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_444;
struct list$1voidph* __result266__;
struct list_item$1voidph* it_445;
int i_446;
struct list_item$1voidph* prev_it_447;
struct list_item$1voidph* it_448;
int i_449;
struct list_item$1voidph* prev_it_450;
struct list_item$1voidph* it_451;
struct list_item$1voidph* head_prev_it_452;
struct list_item$1voidph* tail_it_453;
int i_454;
struct list_item$1voidph* prev_it_455;
struct list$1voidph* __result267__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_444=tail;
        tail=head;
        head=tmp_444;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result266__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidphp_reset(self);
    }
    else if(    head==0) {
        it_445=self->head;
        i_446=0;
        while(it_445!=((void*)0)) {
            if(            i_446<tail) {
                prev_it_447=it_445;
                it_445=it_445->next;
                i_446++;
                come_call_finalizer3(prev_it_447,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_446==tail) {
                self->head=it_445;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_445=it_445->next;
                i_446++;
            }
        }
    }
    else if(    tail==self->len) {
        it_448=self->head;
        i_449=0;
        while(it_448!=((void*)0)) {
            if(            i_449==head) {
                self->tail=it_448->prev;
                self->tail->next=((void*)0);
            }
            if(            i_449>=head) {
                prev_it_450=it_448;
                it_448=it_448->next;
                i_449++;
                come_call_finalizer3(prev_it_450,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_448=it_448->next;
                i_449++;
            }
        }
    }
    else {
        it_451=self->head;
        head_prev_it_452=((void*)0);
        tail_it_453=((void*)0);
        i_454=0;
        while(it_451!=((void*)0)) {
            if(            i_454==head) {
                head_prev_it_452=it_451->prev;
            }
            if(            i_454==tail) {
                tail_it_453=it_451;
            }
            if(            i_454>=head&&i_454<tail) {
                prev_it_455=it_451;
                it_451=it_451->next;
                i_454++;
                come_call_finalizer3(prev_it_455,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_451=it_451->next;
                i_454++;
            }
        }
        if(        head_prev_it_452!=((void*)0)) {
            head_prev_it_452->next=tail_it_453;
        }
        if(        tail_it_453!=((void*)0)) {
            tail_it_453->prev=head_prev_it_452;
        }
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
char* __result268__;
void* __right_value328 = (void*)0;
char* __result269__;
struct sClass* klass_456;
void* __right_value329 = (void*)0;
char* type_name_457;
void* __right_value330 = (void*)0;
char* __result270__;
    if(    gComeGC||gComeC) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value327=__builtin_string(obj)));
        (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    if(    info->no_output_come_code) {
        __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string(obj)));
        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    klass_456=type->mClass;
    type_name_457=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value330=xsprintf("(%s)come_increment_ref_count(%s)",type_name_457,obj)));
    (type_name_457 = come_decrement_ref_count2(type_name_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result270__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_458;
struct list$1voidph* right_value_objects_459;
struct sClass* klass_460;
void* __right_value331 = (void*)0;
char* name_462;
void* __right_value332 = (void*)0;
_Bool no_decrement_463;
void* __right_value333 = (void*)0;
char* c_value_464;
struct sClass* klass_465;
char* class_name_466;
char* fun_name_467;
void* __right_value334 = (void*)0;
struct sType* type2_468;
void* __right_value335 = (void*)0;
char* fun_name2_469;
struct sFun* finalizer_470;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* none_generics_name_474;
void* __right_value338 = (void*)0;
char* generics_fun_name_475;
void* __right_value339 = (void*)0;
struct sGenericsFun* generics_fun_476;
void* __right_value340 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var4 = (void*)0;
char* name_477=0;
_Bool err_478=0;
void* __right_value341 = (void*)0;
int i_479;
void* __right_value342 = (void*)0;
char* new_fun_name_480;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* __dec_obj102;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_481=0;
char* new_fun_name_482=0;
char* __dec_obj104;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* type_name_483;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* type_name_484;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* str_485;
void* __right_value383 = (void*)0;
char* str_486;
struct list$1voidph* __dec_obj105;
struct list$1CVALUEph* __dec_obj106;
memset(&i_479, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_458=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_459=info->right_value_objects;
    klass_460=type->mClass;
    static int dec_num_461=0;
    name_462=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_461));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value332=make_define_var(type,name_462,(_Bool)0,info))));
    (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    info->comma_instead_of_semicolon) {
        add_come_code(info,"%s=%s,\n",name_462,obj);
    }
    else {
        add_come_code(info,"%s=%s;\n",name_462,obj);
    }
    obj=name_462;
    no_decrement_463=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_464=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_465=type->mClass;
        class_name_466=klass_465->mName;
        fun_name_467="finalize";
        type2_468=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_468->mHeap=(_Bool)0;
        fun_name2_469=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_467,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType) {
            type=type->mNoSolvedGenericsType;
        }
        finalizer_470=((void*)0);
        if(        list$1voidphp_length(type->mGenericsTypes)>0) {
            finalizer_470=((struct sFun*)((void*)(__right_value336=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_469))));
            come_call_finalizer3(__right_value336,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_470==((void*)0)) {
                none_generics_name_474=(char*)come_increment_ref_count(get_none_generics_name(type2_468->mClass->mName));
                generics_fun_name_475=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_474,fun_name_467));
                generics_fun_476=((struct sGenericsFun*)((void*)(__right_value339=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_475))));
                come_call_finalizer3(__right_value339,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                generics_fun_476) {
                    multiple_assign_var4=((struct tuple2$2charphbool*)(__right_value340=create_generics_fun((char*)come_increment_ref_count(fun_name2_469),generics_fun_476,type,info)));
                    name_477=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    err_478=multiple_assign_var4->v2;
                    come_call_finalizer3(__right_value340,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_478) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_470=((struct sFun*)((void*)(__right_value341=map$2voidphvoidphp_operator_load_element(info->funcs,name_477))));
                    come_call_finalizer3(__right_value341,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    (name_477 = come_decrement_ref_count2(name_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_474 = come_decrement_ref_count2(none_generics_name_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_475 = come_decrement_ref_count2(generics_fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_479=128-1;            i_479>=1;            i_479--            ){
                new_fun_name_480=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_469,i_479));
                finalizer_470=((struct sFun*)((void*)(__right_value343=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_480))));
                come_call_finalizer3(__right_value343,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                finalizer_470) {
                    __dec_obj102=fun_name2_469;
                    fun_name2_469=(char*)come_increment_ref_count(__builtin_string(new_fun_name_480));
                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_480 = come_decrement_ref_count2(new_fun_name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_480 = come_decrement_ref_count2(new_fun_name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_470==((void*)0)) {
                finalizer_470=((struct sFun*)((void*)(__right_value345=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_469))));
                come_call_finalizer3(__right_value345,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        if(        finalizer_470==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodephp_length(type->mArrayNum)==0) {
            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value346=create_finalizer_automatically(type,fun_name_467,info)));
            fun_481=multiple_assign_var5->v1;
            new_fun_name_482=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer3(__right_value346,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj104=fun_name2_469;
            fun_name2_469=(char*)come_increment_ref_count(new_fun_name_482);
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_470=fun_481;
            (new_fun_name_482 = come_decrement_ref_count2(new_fun_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_470!=((void*)0)||(finalizer_470==((void*)0)&&string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==1)) {
            if(            string_operator_equals(type->mClass->mName,"void")) {
                if(                c_value_464) {
                    add_come_last_code2(info,((char*)(__right_value352=xsprintf("come_call_finalizer3(\%s,(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0)",((char*)(__right_value347=string_to_string(c_value_464))),((char*)(__right_value348=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value349=int_to_string(((no_decrement_463)?(1):(0))))),((char*)(__right_value350=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value351=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else if(            klass_465->mProtocol&&type->mPointerNum==1) {
                type_name_483=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_464) {
                    add_come_last_code2(info,((char*)(__right_value366=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s/*alloca value*/, \%s/* no decrement }/, \%s/*no_free*/, \%s/* force_delete */, (void*)0)",((char*)(__right_value354=string_to_string(fun_name2_469))),((char*)(__right_value355=string_to_string(c_value_464))),((char*)(__right_value356=string_to_string(c_value_464))),((char*)(__right_value357=string_to_string(type_name_483))),((char*)(__right_value358=string_to_string(c_value_464))),((char*)(__right_value359=string_to_string(c_value_464))),((char*)(__right_value360=string_to_string(type_name_483))),((char*)(__right_value361=string_to_string(c_value_464))),((char*)(__right_value362=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value363=int_to_string(((no_decrement_463)?(1):(0))))),((char*)(__right_value364=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value365=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_483 = come_decrement_ref_count2(type_name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_464) {
                    add_come_last_code2(info,((char*)(__right_value373=xsprintf("come_call_finalizer3(\%s,\%s, \%s/* alloca value */, \%s/* no decrement */, \%s/* no_free */, \%s/* force_delete_ */, (void*)0)",((char*)(__right_value367=string_to_string(c_value_464))),((char*)(__right_value368=string_to_string(fun_name2_469))),((char*)(__right_value369=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value370=int_to_string(((no_decrement_463)?(1):(0))))),((char*)(__right_value371=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value372=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_465->mProtocol&&type->mPointerNum==1) {
                type_name_484=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_485=(char*)come_increment_ref_count(xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0,0,0, (void*)0); }",((char*)(__right_value375=string_to_string(name_462))),((char*)(__right_value376=string_to_string(name_462))),((char*)(__right_value377=string_to_string(name_462))),((char*)(__right_value378=string_to_string(type_name_484))),((char*)(__right_value379=string_to_string(name_462))),((char*)(__right_value380=string_to_string(type_name_484))),((char*)(__right_value381=string_to_string(name_462)))));
                (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_485);
                (type_name_484 = come_decrement_ref_count2(type_name_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (str_485 = come_decrement_ref_count2(str_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                str_486=(char*)come_increment_ref_count(xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0)",name_462,name_462));
                add_come_last_code2(info,str_486);
                (str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (c_value_464 = come_decrement_ref_count2(c_value_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_468,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name2_469 = come_decrement_ref_count2(fun_name2_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj105=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_459);
    come_call_finalizer3(__dec_obj105,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj106=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_458);
    come_call_finalizer3(__dec_obj106,list$1CVALUEph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(stack_saved_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (name_462 = come_decrement_ref_count2(name_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_471;
unsigned int hash_472;
unsigned int it_473;
void* __result271__;
void* __result272__;
void* __result273__;
void* __result274__;
default_value_471 = (void*)0;
    memset(&default_value_471,0,sizeof(void*));
    hash_472=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_473=hash_472;
    while((_Bool)1) {
        if(        self->item_existance[it_473]) {
            if(            come_call_equals((void*)0, self->keys[it_473], ((char*)key))) {
                __result271__ = gComeFunResultObject = __result_obj__ = self->items[it_473];
                come_call_finalizer3(default_value_471,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
            it_473++;
            if(            it_473>=self->size) {
                it_473=0;
            }
            else if(            it_473==hash_472) {
                __result272__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_471);
                come_call_finalizer3(default_value_471,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result272__;
            }
        }
        else {
            __result273__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_471);
            come_call_finalizer3(default_value_471,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result273__;
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_471);
    come_call_finalizer3(default_value_471,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj101;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj101=self->v1;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj103;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj103=self->v2;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_487;
struct list_item$1CVALUEph* prev_it_488;
    it_487=self->head;
    while(it_487!=((void*)0)) {
        prev_it_488=it_487;
        it_487=it_487->next;
        come_call_finalizer3(prev_it_488,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj107;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj107=self->item;
            come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj108;
struct sType* __dec_obj109;
char* __dec_obj110;
char* __dec_obj111;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj108=self->c_value;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj109=self->type;
            come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj110=self->c_value_without_right_value_objects;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj111=self->c_value_without_cast_object_value;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_489;
struct list_item$1CVALUEph* prev_it_490;
    it_489=self->head;
    while(it_489!=((void*)0)) {
        prev_it_490=it_489;
        it_489=it_489->next;
        come_call_finalizer3(prev_it_490,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_491;
struct list$1voidph* right_value_objects_492;
struct sType* type_before_493;
void* __right_value384 = (void*)0;
char* c_value_494;
struct sClass* klass_495;
char* class_name_496;
char* fun_name_497;
void* __right_value385 = (void*)0;
struct sType* type2_498;
void* __right_value386 = (void*)0;
char* fun_name2_499;
struct sFun* finalizer_500;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* none_generics_name_501;
void* __right_value389 = (void*)0;
char* generics_fun_name_502;
void* __right_value390 = (void*)0;
struct sGenericsFun* generics_fun_503;
void* __right_value391 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var6 = (void*)0;
char* name_504=0;
_Bool err_505=0;
void* __right_value392 = (void*)0;
int i_506;
void* __right_value393 = (void*)0;
char* new_fun_name_507;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* __dec_obj112;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_508=0;
char* new_fun_name_509=0;
char* __dec_obj113;
void* __right_value398 = (void*)0;
char* type_name_510;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct list$1voidph* o2_saved_511;
struct tuple2$2charphsTypeph* it_512;
struct tuple2$2charphsTypeph* multiple_assign_var8 = (void*)0;
char* name_513=0;
struct sType* field_type_514=0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
char* obj_515;
void* __right_value425 = (void*)0;
struct list$1voidph* o2_saved_516;
struct tuple2$2charphsTypeph* it_517;
struct tuple2$2charphsTypeph* multiple_assign_var9 = (void*)0;
char* name_518=0;
struct sType* field_type_519=0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
char* obj_520;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
char* type_name_521;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* type_name_522;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1voidph* __dec_obj114;
struct list$1CVALUEph* __dec_obj115;
memset(&i_506, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_491=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_492=info->right_value_objects;
    type_before_493=type;
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1voidphp_length(type->mGenericsTypes)>0) {
        c_value_494=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_495=type->mClass;
        class_name_496=klass_495->mName;
        fun_name_497="finalize";
        type2_498=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_498->mHeap=(_Bool)0;
        fun_name2_499=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_497,info,(_Bool)1));
        finalizer_500=((void*)0);
        if(        list$1voidphp_length(type->mGenericsTypes)>0) {
            finalizer_500=((struct sFun*)((void*)(__right_value387=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_499))));
            come_call_finalizer3(__right_value387,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_500==((void*)0)) {
                none_generics_name_501=(char*)come_increment_ref_count(get_none_generics_name(type2_498->mClass->mName));
                generics_fun_name_502=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_501,fun_name_497));
                generics_fun_503=((struct sGenericsFun*)((void*)(__right_value390=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_502))));
                come_call_finalizer3(__right_value390,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                generics_fun_503) {
                    multiple_assign_var6=((struct tuple2$2charphbool*)(__right_value391=create_generics_fun((char*)come_increment_ref_count(fun_name2_499),generics_fun_503,type,info)));
                    name_504=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    err_505=multiple_assign_var6->v2;
                    come_call_finalizer3(__right_value391,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_505) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_500=((struct sFun*)((void*)(__right_value392=map$2voidphvoidphp_operator_load_element(info->funcs,name_504))));
                    come_call_finalizer3(__right_value392,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    (name_504 = come_decrement_ref_count2(name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_501 = come_decrement_ref_count2(none_generics_name_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_502 = come_decrement_ref_count2(generics_fun_name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_506=128-1;            i_506>=1;            i_506--            ){
                new_fun_name_507=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_499,i_506));
                finalizer_500=((struct sFun*)((void*)(__right_value394=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_507))));
                come_call_finalizer3(__right_value394,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                finalizer_500) {
                    __dec_obj112=fun_name2_499;
                    fun_name2_499=(char*)come_increment_ref_count(__builtin_string(new_fun_name_507));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_507 = come_decrement_ref_count2(new_fun_name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_507 = come_decrement_ref_count2(new_fun_name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_500==((void*)0)) {
                finalizer_500=((struct sFun*)((void*)(__right_value396=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_499))));
                come_call_finalizer3(__right_value396,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        if(        finalizer_500==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodephp_length(type->mArrayNum)==0) {
            multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value397=create_finalizer_automatically(type,fun_name_497,info)));
            fun_508=multiple_assign_var7->v1;
            new_fun_name_509=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(__right_value397,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj113=fun_name2_499;
            fun_name2_499=(char*)come_increment_ref_count(new_fun_name_509);
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_500=fun_508;
            (new_fun_name_509 = come_decrement_ref_count2(new_fun_name_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_500!=((void*)0)) {
            if(            klass_495->mProtocol&&type->mPointerNum==1) {
                type_name_510=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_494) {
                    add_come_code(info,((char*)(__right_value413=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s, \%s, \%s, \%s, \%s)\%s",((char*)(__right_value399=string_to_string(fun_name2_499))),((char*)(__right_value400=string_to_string(c_value_494))),((char*)(__right_value401=string_to_string(c_value_494))),((char*)(__right_value402=string_to_string(type_name_510))),((char*)(__right_value403=string_to_string(c_value_494))),((char*)(__right_value404=string_to_string(c_value_494))),((char*)(__right_value405=string_to_string(type_name_510))),((char*)(__right_value406=string_to_string(c_value_494))),((char*)(__right_value407=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value408=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value409=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value410=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value411=charp_to_string(((((!no_decrement||info->come_fun->mNoResultType))?("(void*)0"):("__result_obj__")))))),((char*)(__right_value412=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_494) {
                    add_come_code(info,((char*)(__right_value422=xsprintf("come_call_finalizer3(\%s,\%s, \%s, \%s, \%s, \%s, \%s)\%s",((char*)(__right_value414=string_to_string(c_value_494))),((char*)(__right_value415=string_to_string(fun_name2_499))),((char*)(__right_value416=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value417=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value418=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value419=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value420=charp_to_string(((((!no_decrement||info->come_fun->mNoResultType))?("(void*)0"):("__result_obj__")))))),((char*)(__right_value421=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_495->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_511=(struct list$1voidph*)come_increment_ref_count((klass_495->mFields)),it_512=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_511)));                !list$1voidphp_end((o2_saved_511));                it_512=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_511)))                ){
                    multiple_assign_var8=it_512;
                    name_513=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                    field_type_514=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
                    if(                    field_type_514->mHeap&&field_type_514->mPointerNum>0) {
                        obj_515=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value423=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_494,name_513));
                        (__right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value425=come_call_cloner(sType_clone, field_type_514))),obj_515,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
                        (obj_515 = come_decrement_ref_count2(obj_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_513 = come_decrement_ref_count2(name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_511,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            klass_495->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_516=(struct list$1voidph*)come_increment_ref_count((klass_495->mFields)),it_517=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_516)));                !list$1voidphp_end((o2_saved_516));                it_517=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_516)))                ){
                    multiple_assign_var9=it_517;
                    name_518=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    field_type_519=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
                    if(                    field_type_519->mHeap&&field_type_519->mPointerNum>0) {
                        obj_520=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value426=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_494,name_518));
                        (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value428=come_call_cloner(sType_clone, field_type_519))),obj_520,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
                        (obj_520 = come_decrement_ref_count2(obj_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_518 = come_decrement_ref_count2(name_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_516,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                type->mAnyClass) {
                    if(                    klass_495->mProtocol&&type->mPointerNum==1) {
                        type_name_521=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        c_value_494) {
                            add_come_code(info,((char*)(__right_value443=xsprintf("come_call_finalizer2((void*)0, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free */, \%s/* force_delete_*/, \%s)\%s",((char*)(__right_value430=string_to_string(c_value_494))),((char*)(__right_value431=string_to_string(c_value_494))),((char*)(__right_value432=string_to_string(type_name_521))),((char*)(__right_value433=string_to_string(c_value_494))),((char*)(__right_value434=string_to_string(c_value_494))),((char*)(__right_value435=string_to_string(type_name_521))),((char*)(__right_value436=string_to_string(c_value_494))),((char*)(__right_value437=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value438=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value439=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value440=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value441=charp_to_string(((((!no_decrement||info->come_fun->mNoResultType))?("(void*)0"):("__result_obj__")))))),((char*)(__right_value442=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                            (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (type_name_521 = come_decrement_ref_count2(type_name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        if(                        c_value_494) {
                            add_come_code(info,((char*)(__right_value451=xsprintf("come_call_finalizer3(\%s,(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_ */, \%s)\%s",((char*)(__right_value444=string_to_string(c_value_494))),((char*)(__right_value445=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value446=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value447=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value448=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value449=charp_to_string(((((!no_decrement||info->come_fun->mNoResultType))?("(void*)0"):("__result_obj__")))))),((char*)(__right_value450=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                            (__right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
                else if(                klass_495->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_494) {
                        type_name_522=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        add_come_code(info,((char*)(__right_value465=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s/* no_decrement */, \%s/*no_free*/,\%s/*force_delete*/, \%s):0)\%s",((char*)(__right_value453=string_to_string(c_value_494))),((char*)(__right_value454=string_to_string(c_value_494))),((char*)(__right_value455=string_to_string(c_value_494))),((char*)(__right_value456=string_to_string(type_name_522))),((char*)(__right_value457=string_to_string(c_value_494))),((char*)(__right_value458=string_to_string(type_name_522))),((char*)(__right_value459=string_to_string(c_value_494))),((char*)(__right_value460=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value461=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value462=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value463=charp_to_string(((((!no_decrement||info->come_fun->mNoResultType))?("(void*)0"):("__result_obj__")))))),((char*)(__right_value464=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (type_name_522 = come_decrement_ref_count2(type_name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    if(                    c_value_494) {
                        add_come_code(info,((char*)(__right_value473=xsprintf("(\%s = come_decrement_ref_count2(\%s, (void*)0, (void*)0, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, \%s))\%s",((char*)(__right_value466=string_to_string(c_value_494))),((char*)(__right_value467=string_to_string(c_value_494))),((char*)(__right_value468=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value469=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value470=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value471=charp_to_string(((((!no_decrement||info->come_fun->mNoResultType))?("(void*)0"):("__result_obj__")))))),((char*)(__right_value472=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
        }
        (c_value_494 = come_decrement_ref_count2(c_value_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_498,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name2_499 = come_decrement_ref_count2(fun_name2_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj114=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_492);
    come_call_finalizer3(__dec_obj114,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj115=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_491);
    come_call_finalizer3(__dec_obj115,list$1CVALUEph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(stack_saved_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_523;
void* __right_value474 = (void*)0;
struct sType* type2_524;
char* result_525;
struct sType* result_type_526;
struct list$1CVALUEph* stack_saved_527;
struct list$1voidph* right_value_objects_528;
void* __right_value475 = (void*)0;
char* c_value_529;
struct sClass* klass_530;
char* class_name_531;
char* fun_name_532;
struct sFun* cloner_533;
char* fun_name2_534;
void* __right_value476 = (void*)0;
char* none_generics_name_535;
void* __right_value477 = (void*)0;
struct sType* obj_type_536;
void* __right_value478 = (void*)0;
char* __dec_obj116;
void* __right_value479 = (void*)0;
char* fun_name3_537;
void* __right_value480 = (void*)0;
struct sGenericsFun* generics_fun_538;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var10 = (void*)0;
char* name_541=0;
_Bool err_542=0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct tuple2$2sTypephcharph* __result282__;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
char* __dec_obj125;
int i_545;
void* __right_value494 = (void*)0;
char* new_fun_name_546;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* __dec_obj126;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun_547=0;
char* new_fun_name_548=0;
char* __dec_obj127;
void* __right_value499 = (void*)0;
char* __dec_obj128;
struct sType* __dec_obj129;
void* __right_value500 = (void*)0;
struct sType* __dec_obj130;
void* __right_value501 = (void*)0;
char* __dec_obj131;
void* __right_value502 = (void*)0;
char* __dec_obj132;
void* __right_value503 = (void*)0;
struct sType* __dec_obj133;
void* __right_value504 = (void*)0;
char* type_name_549;
void* __right_value505 = (void*)0;
char* __dec_obj134;
void* __right_value506 = (void*)0;
char* __dec_obj135;
struct list$1voidph* __dec_obj136;
struct list$1CVALUEph* __dec_obj137;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple2$2sTypephcharph* __result283__;
fun_name2_534 = (void*)0;
memset(&i_545, 0, sizeof(int));
    in_clone_object_523=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_525=((void*)0);
    result_type_526=((void*)0);
    stack_saved_527=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_528=info->right_value_objects;
    c_value_529=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_530=type->mClass;
    class_name_531=klass_530->mName;
    fun_name_532="clone";
    cloner_533=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_535=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_536=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj116=fun_name2_534;
        fun_name2_534=(char*)come_increment_ref_count(create_method_name(obj_type_536,(_Bool)0,fun_name_532,info,(_Bool)1));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_537=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_535,fun_name_532));
        generics_fun_538=((struct sGenericsFun*)((void*)(__right_value480=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_537,((void*)0)))));
        come_call_finalizer3(__right_value480,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        generics_fun_538) {
            multiple_assign_var10=((struct tuple2$2charphbool*)(__right_value482=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_534)),generics_fun_538,obj_type_536,info)));
            name_541=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            err_542=multiple_assign_var10->v2;
            come_call_finalizer3(__right_value482,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_542) {
                __result282__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value490=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 706, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 706, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                (name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_535 = come_decrement_ref_count2(none_generics_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_537 = come_decrement_ref_count2(fun_name3_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                (result_525 = come_decrement_ref_count2(result_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_527,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                (c_value_529 = come_decrement_ref_count2(c_value_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_534 = come_decrement_ref_count2(fun_name2_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value490,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result282__;
            }
            cloner_533=((struct sFun*)((void*)(__right_value491=map$2voidphvoidphp_operator_load_element(info->funcs,name_541))));
            come_call_finalizer3(__right_value491,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            (name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_533=((struct sFun*)((void*)(__right_value492=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_534))));
            come_call_finalizer3(__right_value492,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        (none_generics_name_535 = come_decrement_ref_count2(none_generics_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_537 = come_decrement_ref_count2(fun_name3_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj125=fun_name2_534;
        fun_name2_534=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_532,info,(_Bool)1));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_545=128-1;        i_545>=1;        i_545--        ){
            new_fun_name_546=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_534,i_545));
            cloner_533=((struct sFun*)((void*)(__right_value495=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_546))));
            come_call_finalizer3(__right_value495,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            cloner_533) {
                __dec_obj126=fun_name2_534;
                fun_name2_534=(char*)come_increment_ref_count(__builtin_string(new_fun_name_546));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_546 = come_decrement_ref_count2(new_fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_546 = come_decrement_ref_count2(new_fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_533==((void*)0)) {
            cloner_533=((struct sFun*)((void*)(__right_value497=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_534))));
            come_call_finalizer3(__right_value497,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
    }
    if(    cloner_533==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value498=create_cloner_automatically(type,fun_name_532,info)));
        fun_547=multiple_assign_var11->v1;
        new_fun_name_548=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(__right_value498,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj127=fun_name2_534;
        fun_name2_534=(char*)come_increment_ref_count(new_fun_name_548);
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_533=fun_547;
        (new_fun_name_548 = come_decrement_ref_count2(new_fun_name_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    type->mAnyOriginalType) {
        __dec_obj128=result_525;
        result_525=(char*)come_increment_ref_count(xsprintf("come_call_cloner((void*)0, %s)",c_value_529));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    cloner_533!=((void*)0)) {
        __dec_obj129=result_type_526;
        result_type_526=(struct sType*)come_increment_ref_count(cloner_533->mResultType);
        come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj130=result_type_526;
        result_type_526=(struct sType*)come_increment_ref_count(solve_generics(result_type_526,type,info));
        come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj131=result_525;
        result_525=(char*)come_increment_ref_count(xsprintf("come_call_cloner(%s, %s)",fun_name2_534,c_value_529));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj132=result_525;
            result_525=(char*)come_increment_ref_count(append_stackframe(result_525,result_type_526,info));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj133=result_type_526;
        result_type_526=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type2_524->mHeap=(_Bool)1;
        type_name_549=(char*)come_increment_ref_count(make_type_name_string(type2_524,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj134=result_525;
        result_525=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_549,c_value_529,info->sname,info->sline,type_name_549));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj135=result_525;
            result_525=(char*)come_increment_ref_count(append_stackframe(result_525,result_type_526,info));
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (type_name_549 = come_decrement_ref_count2(type_name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj136=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_528);
    come_call_finalizer3(__dec_obj136,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj137=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_527);
    come_call_finalizer3(__dec_obj137,list$1CVALUEph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->in_clone_object=in_clone_object_523;
    __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value508=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 771, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(result_type_526),(char*)come_increment_ref_count(result_525))));
    come_call_finalizer3(type2_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    (result_525 = come_decrement_ref_count2(result_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_527,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (c_value_529 = come_decrement_ref_count2(c_value_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_534 = come_decrement_ref_count2(fun_name2_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value508,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_539;
unsigned int it_540;
void* __result275__;
void* __result276__;
void* __result277__;
void* __result278__;
    hash_539=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_540=hash_539;
    while((_Bool)1) {
        if(        self->item_existance[it_540]) {
            if(            come_call_equals((void*)0, self->keys[it_540], key)) {
                __result275__ = gComeFunResultObject = __result_obj__ = self->items[it_540];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
            it_540++;
            if(            it_540>=self->size) {
                it_540=0;
            }
            else if(            it_540==hash_539) {
                __result276__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result276__;
            }
        }
        else {
            __result277__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj117;
char* __dec_obj118;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj117=self->v1;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj118=self->v2;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result279__;
void* __right_value486 = (void*)0;
struct tuple2$2sTypephcharph* result_543;
void* __right_value487 = (void*)0;
struct sType* __dec_obj119;
void* __right_value488 = (void*)0;
char* __dec_obj120;
struct tuple2$2sTypephcharph* __result280__;
    if(    self==(void*)0) {
        __result279__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_543=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj119=result_543->v1;
        result_543->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj120=result_543->v2;
        result_543->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_543;
    come_call_finalizer3(result_543,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_544;
    result_544=0;
    result_544+=int_get_hash_key(((int)self->v1));
    result_544+=int_get_hash_key(((int)self->v2));
    return result_544;
}

static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj121;
char* __dec_obj122;
struct tuple2$2sTypephcharph* __result281__;
    __dec_obj121=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj122=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj123;
char* __dec_obj124;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj123=self->v1;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj124=self->v2;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_550;
struct list$1CVALUEph* stack_saved_551;
struct list$1voidph* right_value_objects_552;
struct sClass* klass_553;
char* class_name_554;
char* fun_name_555;
void* __right_value509 = (void*)0;
struct sType* type2_556;
struct sFun* cloner_557;
char* fun_name2_558;
void* __right_value510 = (void*)0;
char* none_generics_name_559;
void* __right_value511 = (void*)0;
struct sType* obj_type_560;
void* __right_value512 = (void*)0;
char* __dec_obj138;
void* __right_value513 = (void*)0;
char* fun_name3_561;
void* __right_value514 = (void*)0;
struct sGenericsFun* generics_fun_562;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var12 = (void*)0;
char* name_563=0;
_Bool err_564=0;
_Bool __result284__;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __dec_obj139;
int i_565;
void* __right_value520 = (void*)0;
char* new_fun_name_566;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
char* __dec_obj140;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var13 = (void*)0;
struct sFun* fun_567=0;
char* new_fun_name_568=0;
char* __dec_obj141;
struct list$1voidph* __dec_obj142;
struct list$1CVALUEph* __dec_obj143;
_Bool __result285__;
fun_name2_558 = (void*)0;
memset(&i_565, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_550=((void*)0);
    stack_saved_551=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_552=info->right_value_objects;
    klass_553=type->mClass;
    class_name_554=klass_553->mName;
    fun_name_555="equals";
    type2_556=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_556->mHeap=(_Bool)0;
    cloner_557=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_559=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_560=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj138=fun_name2_558;
        fun_name2_558=(char*)come_increment_ref_count(create_method_name(obj_type_560,(_Bool)0,fun_name_555,info,(_Bool)1));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_561=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_559,fun_name_555));
        generics_fun_562=((struct sGenericsFun*)((void*)(__right_value514=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_561,((void*)0)))));
        come_call_finalizer3(__right_value514,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_562) {
            multiple_assign_var12=((struct tuple2$2charphbool*)(__right_value516=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_558)),generics_fun_562,obj_type_560,info)));
            name_563=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            err_564=multiple_assign_var12->v2;
            come_call_finalizer3(__right_value516,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_564) {
                __result284__ = (_Bool)0;
                (name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_559 = come_decrement_ref_count2(none_generics_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_561 = come_decrement_ref_count2(fun_name3_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_550 = come_decrement_ref_count2(result_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(stack_saved_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name2_558 = come_decrement_ref_count2(fun_name2_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result284__;
            }
            else {
                cloner_557=((struct sFun*)((void*)(__right_value517=map$2voidphvoidphp_operator_load_element(info->funcs,name_563))));
                come_call_finalizer3(__right_value517,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            (name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_557=((struct sFun*)((void*)(__right_value518=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_558))));
            come_call_finalizer3(__right_value518,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_559 = come_decrement_ref_count2(none_generics_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_561 = come_decrement_ref_count2(fun_name3_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj139=fun_name2_558;
        fun_name2_558=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_555,info,(_Bool)1));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_565=128-1;        i_565>=1;        i_565--        ){
            new_fun_name_566=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_558,i_565));
            cloner_557=((struct sFun*)((void*)(__right_value521=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_566))));
            come_call_finalizer3(__right_value521,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_557) {
                __dec_obj140=fun_name2_558;
                fun_name2_558=(char*)come_increment_ref_count(__builtin_string(new_fun_name_566));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_557==((void*)0)) {
            cloner_557=((struct sFun*)((void*)(__right_value523=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_558))));
            come_call_finalizer3(__right_value523,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_557==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var13=((struct tuple2$2sFunpcharph*)(__right_value524=create_equals_automatically(type,fun_name_555,info)));
        fun_567=multiple_assign_var13->v1;
        new_fun_name_568=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        come_call_finalizer3(__right_value524,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj141=fun_name2_558;
        fun_name2_558=(char*)come_increment_ref_count(new_fun_name_568);
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_557=fun_567;
        (new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj142=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_552);
    come_call_finalizer3(__dec_obj142,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj143=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_551);
    come_call_finalizer3(__dec_obj143,list$1CVALUEph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result285__ = (_Bool)1;
    (result_550 = come_decrement_ref_count2(result_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(stack_saved_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_558 = come_decrement_ref_count2(fun_name2_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result285__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_569;
struct list$1CVALUEph* stack_saved_570;
struct list$1voidph* right_value_objects_571;
struct sClass* klass_572;
char* class_name_573;
char* fun_name_574;
void* __right_value525 = (void*)0;
struct sType* type2_575;
struct sFun* cloner_576;
char* fun_name2_577;
void* __right_value526 = (void*)0;
char* none_generics_name_578;
void* __right_value527 = (void*)0;
struct sType* obj_type_579;
void* __right_value528 = (void*)0;
char* __dec_obj144;
void* __right_value529 = (void*)0;
char* fun_name3_580;
void* __right_value530 = (void*)0;
struct sGenericsFun* generics_fun_581;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var14 = (void*)0;
char* name_582=0;
_Bool err_583=0;
_Bool __result286__;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* __dec_obj145;
int i_584;
void* __right_value536 = (void*)0;
char* new_fun_name_585;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
char* __dec_obj146;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var15 = (void*)0;
struct sFun* fun_586=0;
char* new_fun_name_587=0;
char* __dec_obj147;
struct list$1voidph* __dec_obj148;
struct list$1CVALUEph* __dec_obj149;
_Bool __result287__;
fun_name2_577 = (void*)0;
memset(&i_584, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_569=((void*)0);
    stack_saved_570=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_571=info->right_value_objects;
    klass_572=type->mClass;
    class_name_573=klass_572->mName;
    fun_name_574="operator_equals";
    type2_575=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_575->mHeap=(_Bool)0;
    cloner_576=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_578=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_579=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj144=fun_name2_577;
        fun_name2_577=(char*)come_increment_ref_count(create_method_name(obj_type_579,(_Bool)0,fun_name_574,info,(_Bool)1));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_580=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_578,fun_name_574));
        generics_fun_581=((struct sGenericsFun*)((void*)(__right_value530=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_580,((void*)0)))));
        come_call_finalizer3(__right_value530,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_581) {
            multiple_assign_var14=((struct tuple2$2charphbool*)(__right_value532=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_577)),generics_fun_581,obj_type_579,info)));
            name_582=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            err_583=multiple_assign_var14->v2;
            come_call_finalizer3(__right_value532,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_583) {
                __result286__ = (_Bool)0;
                (name_582 = come_decrement_ref_count2(name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_578 = come_decrement_ref_count2(none_generics_name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_580 = come_decrement_ref_count2(fun_name3_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_569 = come_decrement_ref_count2(result_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(stack_saved_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name2_577 = come_decrement_ref_count2(fun_name2_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result286__;
            }
            cloner_576=((struct sFun*)((void*)(__right_value533=map$2voidphvoidphp_operator_load_element(info->funcs,name_582))));
            come_call_finalizer3(__right_value533,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_582 = come_decrement_ref_count2(name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_576=((struct sFun*)((void*)(__right_value534=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_577))));
            come_call_finalizer3(__right_value534,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_578 = come_decrement_ref_count2(none_generics_name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_580 = come_decrement_ref_count2(fun_name3_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj145=fun_name2_577;
        fun_name2_577=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_574,info,(_Bool)1));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_584=128-1;        i_584>=1;        i_584--        ){
            new_fun_name_585=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_577,i_584));
            cloner_576=((struct sFun*)((void*)(__right_value537=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_585))));
            come_call_finalizer3(__right_value537,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_576) {
                __dec_obj146=fun_name2_577;
                fun_name2_577=(char*)come_increment_ref_count(__builtin_string(new_fun_name_585));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_585 = come_decrement_ref_count2(new_fun_name_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_585 = come_decrement_ref_count2(new_fun_name_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_576==((void*)0)) {
            cloner_576=((struct sFun*)((void*)(__right_value539=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_577))));
            come_call_finalizer3(__right_value539,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_576==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var15=((struct tuple2$2sFunpcharph*)(__right_value540=create_operator_equals_automatically(type,fun_name_574,info)));
        fun_586=multiple_assign_var15->v1;
        new_fun_name_587=(char*)come_increment_ref_count(multiple_assign_var15->v2);
        come_call_finalizer3(__right_value540,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj147=fun_name2_577;
        fun_name2_577=(char*)come_increment_ref_count(new_fun_name_587);
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_576=fun_586;
        (new_fun_name_587 = come_decrement_ref_count2(new_fun_name_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj148=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_571);
    come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj149=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_570);
    come_call_finalizer3(__dec_obj149,list$1CVALUEph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result287__ = (_Bool)1;
    (result_569 = come_decrement_ref_count2(result_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(stack_saved_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_575,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_577 = come_decrement_ref_count2(fun_name2_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result287__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_588;
struct list$1CVALUEph* stack_saved_589;
struct list$1voidph* right_value_objects_590;
struct sClass* klass_591;
char* class_name_592;
char* fun_name_593;
void* __right_value541 = (void*)0;
struct sType* type2_594;
struct sFun* cloner_595;
char* fun_name2_596;
void* __right_value542 = (void*)0;
char* none_generics_name_597;
void* __right_value543 = (void*)0;
struct sType* obj_type_598;
void* __right_value544 = (void*)0;
char* __dec_obj150;
void* __right_value545 = (void*)0;
char* fun_name3_599;
void* __right_value546 = (void*)0;
struct sGenericsFun* generics_fun_600;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var16 = (void*)0;
char* name_601=0;
_Bool err_602=0;
_Bool __result288__;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
char* __dec_obj151;
int i_603;
void* __right_value552 = (void*)0;
char* new_fun_name_604;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* __dec_obj152;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var17 = (void*)0;
struct sFun* fun_605=0;
char* new_fun_name_606=0;
char* __dec_obj153;
struct list$1voidph* __dec_obj154;
struct list$1CVALUEph* __dec_obj155;
_Bool __result289__;
fun_name2_596 = (void*)0;
memset(&i_603, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_588=((void*)0);
    stack_saved_589=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_590=info->right_value_objects;
    klass_591=type->mClass;
    class_name_592=klass_591->mName;
    fun_name_593="operator_not_equals";
    type2_594=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_594->mHeap=(_Bool)0;
    cloner_595=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_597=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_598=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj150=fun_name2_596;
        fun_name2_596=(char*)come_increment_ref_count(create_method_name(obj_type_598,(_Bool)0,fun_name_593,info,(_Bool)1));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_599=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_597,fun_name_593));
        generics_fun_600=((struct sGenericsFun*)((void*)(__right_value546=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_599,((void*)0)))));
        come_call_finalizer3(__right_value546,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_600) {
            multiple_assign_var16=((struct tuple2$2charphbool*)(__right_value548=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_596)),generics_fun_600,obj_type_598,info)));
            name_601=(char*)come_increment_ref_count(multiple_assign_var16->v1);
            err_602=multiple_assign_var16->v2;
            come_call_finalizer3(__right_value548,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_602) {
                __result288__ = (_Bool)0;
                (name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_597 = come_decrement_ref_count2(none_generics_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_599 = come_decrement_ref_count2(fun_name3_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_588 = come_decrement_ref_count2(result_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(stack_saved_589,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_594,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name2_596 = come_decrement_ref_count2(fun_name2_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result288__;
            }
            cloner_595=((struct sFun*)((void*)(__right_value549=map$2voidphvoidphp_operator_load_element(info->funcs,name_601))));
            come_call_finalizer3(__right_value549,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_595=((struct sFun*)((void*)(__right_value550=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_596))));
            come_call_finalizer3(__right_value550,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_597 = come_decrement_ref_count2(none_generics_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_599 = come_decrement_ref_count2(fun_name3_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj151=fun_name2_596;
        fun_name2_596=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_593,info,(_Bool)1));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_603=128-1;        i_603>=1;        i_603--        ){
            new_fun_name_604=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_596,i_603));
            cloner_595=((struct sFun*)((void*)(__right_value553=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_604))));
            come_call_finalizer3(__right_value553,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_595) {
                __dec_obj152=fun_name2_596;
                fun_name2_596=(char*)come_increment_ref_count(__builtin_string(new_fun_name_604));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_604 = come_decrement_ref_count2(new_fun_name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_604 = come_decrement_ref_count2(new_fun_name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_595==((void*)0)) {
            cloner_595=((struct sFun*)((void*)(__right_value555=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_596))));
            come_call_finalizer3(__right_value555,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_595==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var17=((struct tuple2$2sFunpcharph*)(__right_value556=create_operator_not_equals_automatically(type,fun_name_593,info)));
        fun_605=multiple_assign_var17->v1;
        new_fun_name_606=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        come_call_finalizer3(__right_value556,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj153=fun_name2_596;
        fun_name2_596=(char*)come_increment_ref_count(new_fun_name_606);
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_595=fun_605;
        (new_fun_name_606 = come_decrement_ref_count2(new_fun_name_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj154=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_590);
    come_call_finalizer3(__dec_obj154,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj155=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_589);
    come_call_finalizer3(__dec_obj155,list$1CVALUEph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result289__ = (_Bool)1;
    (result_588 = come_decrement_ref_count2(result_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(stack_saved_589,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_594,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_596 = come_decrement_ref_count2(fun_name2_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result289__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_607;
struct list$1voidph* right_value_objects_608;
int n_609;
struct list$1voidph* o2_saved_610;
struct sRightValueObject* it_611;
struct sType* type_612;
void* __right_value557 = (void*)0;
struct sType* type2_613;
void* __right_value558 = (void*)0;
struct sType* __dec_obj156;
void* __right_value559 = (void*)0;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_607=(_Bool)0;
    right_value_objects_608=info->right_value_objects;
    n_609=0;
    for(    o2_saved_610=(right_value_objects_608),it_611=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_610)));    !list$1voidphp_end((o2_saved_610));    it_611=((struct sRightValueObject*)list$1voidphp_next((o2_saved_610)))    ){
        if(        it_611&&!it_611->mFreed) {
            if(            string_operator_equals(it_611->mFunName,info->come_fun->mName)&&it_611->mBlockLevel==info->block_level&&!it_611->mStored) {
                type_612=(struct sType*)come_increment_ref_count(it_611->mType);
                type2_613=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_612));
                if(                info->generics_type) {
                    __dec_obj156=type_612;
                    type_612=(struct sType*)come_increment_ref_count(solve_generics(type2_613,info->generics_type,info));
                    come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                free_object(((struct sType*)(__right_value559=come_call_cloner(sType_clone, type_612))),it_611->mVarName,!it_611->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value559,sType_finalize, 0, 1, 0, 0, (void*)0);
                it_611->mFreed=(_Bool)1;
                free_right_value_607=(_Bool)1;
                come_call_finalizer3(type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_613,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_609++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_614;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sVar* var__615;
struct sVar* __result290__;
struct sVar* __result291__;
    it_614=table;
    while(it_614) {
        var__615=((struct sVar*)((void*)(__right_value561=map$2voidphvoidphp_operator_load_element(it_614->mVars,((char*)(__right_value560=__builtin_string(name)))))));
        (__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        come_call_finalizer3(__right_value561,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        var__615) {
            __result290__ = gComeFunResultObject = __result_obj__ = var__615;
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
        it_614=it_614->mParent;
    }
    __result291__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2voidphvoidph* o2_saved_616;
char* it_619;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sVar* p_622;
struct sType* type_623;
struct sClass* klass_624;
void* __right_value564 = (void*)0;
struct sType* type2_625;
void* __right_value565 = (void*)0;
struct sType* type2_626;
void* __right_value566 = (void*)0;
char* c_value_627;
void* __right_value567 = (void*)0;
struct sType* type2_628;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_616=(struct map$2voidphvoidph*)come_increment_ref_count((table->mVars)),it_619=((char*)map$2voidphvoidphp_begin((o2_saved_616)));    !map$2voidphvoidphp_end((o2_saved_616));    it_619=((char*)map$2voidphvoidphp_next((o2_saved_616)))    ){
        p_622=((struct sVar*)((void*)(__right_value563=map$2voidphvoidphp_operator_load_element(table->mVars,((char*)(__right_value562=__builtin_string(it_619)))))));
        (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value563,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type_623=p_622->mType;
        klass_624=type_623->mClass;
        if(        type_623->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_622->mCValueName,p_622->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_622->mCValueName,p_622->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_622->mCValueName!=((void*)0)&&string_operator_equals(p_622->mCValueName,ret_value->mCValueName)&&type_623->mHeap) {
            type2_625=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_623));
            free_object(type2_625,p_622->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
            come_call_finalizer3(type2_625,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        type_623->mHeap&&p_622->mCValueName) {
            type2_626=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_623));
            free_object(type2_626,p_622->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer3(type2_626,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        klass_624->mStruct&&p_622->mCValueName&&type_623->mAllocaValue&&!type_623->mNoCallingDestructor) {
            c_value_627=(char*)come_increment_ref_count(xsprintf("(&%s)",p_622->mCValueName));
            type2_628=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_623));
            type2_628->mPointerNum++;
            free_object(type2_628,c_value_627,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            (c_value_627 = come_decrement_ref_count2(c_value_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type2_628,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_616,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_617;
void* __result292__;
void* __result293__;
void* result_618;
void* __result294__;
result_617 = (void*)0;
result_618 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_617,0,sizeof(void*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_617;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_618,0,sizeof(void*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_618;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_620;
void* __result295__;
void* __result296__;
void* result_621;
void* __result297__;
result_620 = (void*)0;
result_621 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_620,0,sizeof(void*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_620;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_621,0,sizeof(void*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_621;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_629;
int i_630;
    for(    i_629=0;    i_629<self->size;    i_629++    ){
        if(        self->item_existance[i_629]) {
            if(            1) {
                come_call_finalizer3(self->items[i_629],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_630=0;    i_630<self->size;    i_630++    ){
        if(        self->item_existance[i_630]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_630],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_631;
struct list_item$1voidp* prev_it_632;
    it_631=self->head;
    while(it_631!=((void*)0)) {
        prev_it_632=it_631;
        it_631=it_631->next;
        come_call_finalizer3(prev_it_632,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_633;
    if(    gComeGC||gComeC) {
        return;
    }
    it_633=info->lv_table;
    if(    it_633==info->come_fun->mBlock->mVarTable) {
        free_objects(it_633,ret_value,info);
    }
    else {
        while(it_633!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_633,ret_value,info);
            it_633=it_633->mParent;
        }
        free_objects(it_633,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_634;
struct sVarTable* current_loop_vtable_635;
struct sVarTable* it_636;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_634=((void*)0);
    current_loop_vtable_635=info->current_loop_vtable;
    if(    current_loop_vtable_635!=((void*)0)) {
        it_636=info->lv_table;
        while(it_636!=current_loop_vtable_635) {
            free_objects(it_636,ret_value_634,info);
            it_636=it_636->mParent;
        }
        free_objects(it_636,ret_value_634,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __result298__;
void* __right_value573 = (void*)0;
char* var_name_638;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
char* __result299__;
void* __right_value582 = (void*)0;
char* __result300__;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value572=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value568=string_to_string(info->sname))),((char*)(__right_value569=int_to_string(info->sline))),((char*)(__right_value570=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value571=charp_to_string(c_value))))));
            (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            gComeFunResultObject = (void*)0;
            return __result298__;
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_637=0;
        ++n_637;
        var_name_638=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_637));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value574=make_define_var(type,var_name_638,(_Bool)0,info))));
        (__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value581=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value575=string_to_string(info->sname))),((char*)(__right_value576=int_to_string(info->sline))),((char*)(__right_value577=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value578=string_to_string(var_name_638))),((char*)(__right_value579=charp_to_string(c_value))),((char*)(__right_value580=string_to_string(var_name_638))))));
        (var_name_638 = come_decrement_ref_count2(var_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result299__;
        (var_name_638 = come_decrement_ref_count2(var_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value582=__builtin_string(c_value)));
    (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2voidphvoidph* o2_saved_639;
char* it_640;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sVar* p_641;
struct sType* type_642;
struct sClass* klass_643;
_Bool __result301__;
_Bool __result302__;
_Bool __result303__;
_Bool __result304__;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_639=(struct map$2voidphvoidph*)come_increment_ref_count((table->mVars)),it_640=((char*)map$2voidphvoidphp_begin((o2_saved_639)));    !map$2voidphvoidphp_end((o2_saved_639));    it_640=((char*)map$2voidphvoidphp_next((o2_saved_639)))    ){
        p_641=((struct sVar*)((void*)(__right_value584=map$2voidphvoidphp_operator_load_element(table->mVars,((char*)(__right_value583=__builtin_string(it_640)))))));
        (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value584,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type_642=p_641->mType;
        klass_643=type_642->mClass;
        if(        type_642->mChannel) {
            __result301__ = (_Bool)1;
            come_call_finalizer3(o2_saved_639,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result301__;
        }
        else if(        ret_value!=((void*)0)&&p_641->mCValueName!=((void*)0)&&string_operator_equals(p_641->mCValueName,ret_value->mCValueName)&&type_642->mHeap) {
            __result302__ = (_Bool)1;
            come_call_finalizer3(o2_saved_639,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result302__;
        }
        else if(        type_642->mHeap&&p_641->mCValueName) {
            __result303__ = (_Bool)1;
            come_call_finalizer3(o2_saved_639,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result303__;
        }
        else if(        klass_643->mStruct&&p_641->mCValueName&&type_642->mAllocaValue&&!type_642->mNoCallingDestructor) {
            __result304__ = (_Bool)1;
            come_call_finalizer3(o2_saved_639,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result304__;
        }
    }
    come_call_finalizer3(o2_saved_639,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_644;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_644=info->lv_table;
    if(    it_644==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_644,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_644!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_644,ret_value,info)) {
                return (_Bool)1;
            }
            it_644=it_644->mParent;
        }
        if(        existance_free_objects(it_644,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1voidph* right_value_objects_645;
struct list$1voidph* o2_saved_646;
struct sRightValueObject* it_647;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_645=info->right_value_objects;
    for(    o2_saved_646=(right_value_objects_645),it_647=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_646)));    !list$1voidphp_end((o2_saved_646));    it_647=((struct sRightValueObject*)list$1voidphp_next((o2_saved_646)))    ){
        if(        it_647&&!it_647->mFreed) {
            if(            string_operator_equals(it_647->mFunName,info->come_fun->mName)&&it_647->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

