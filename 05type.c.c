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

struct tuple4$4list$1voidphplist$1charphplist$1charphpbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2boolvoidp
{
    _Bool v1;
    void* v2;
};

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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
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
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static _Bool tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* left, struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* right);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static _Bool tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* left, struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* right);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static struct tuple2$2boolcharph* tuple2$2boolcharph_initialize(struct tuple2$2boolcharph* self, _Bool v1, char* v2);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static int list$1voidphp_length(struct list$1voidph* self);
static struct tuple2$2boolvoidp* tuple2$2boolvoidp_initialize(struct tuple2$2boolvoidp* self, _Bool v1, void* v2);
static void tuple2$2boolvoidpp_finalize(struct tuple2$2boolvoidp* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self);
static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self);
static _Bool tuple3$3sTypephcharphbool_equals(struct tuple3$3sTypephcharphbool* left, struct tuple3$3sTypephcharphbool* right);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charphp_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value252 = (void*)0;
struct sClass* klass_317;
void* __right_value253 = (void*)0;
struct sType* type_321;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sClass* generics_class_322;
void* __right_value256 = (void*)0;
_Bool generics_type_name_323;
void* __right_value257 = (void*)0;
_Bool mgenerics_type_name_329;
    klass_317=((struct sClass*)((void*)(__right_value252=map$2voidphvoidphp_operator_load_element(info->classes,buf))));
    come_call_finalizer3(__right_value252,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    type_321=((struct sType*)((void*)(__right_value253=map$2voidphvoidphp_operator_load_element(info->types,buf))));
    come_call_finalizer3(__right_value253,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_class_322=((struct sClass*)((void*)(__right_value255=map$2voidphvoidphp_operator_load_element(info->generics_classes,((char*)(__right_value254=__builtin_string(buf)))))));
    (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value255,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_type_name_323=list$1charphp_contained(info->generics_type_names,((char*)(__right_value256=__builtin_string(buf))));
    (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_329=list$1charphp_contained(info->method_generics_type_names,((char*)(__right_value257=__builtin_string(buf))));
    (__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC) {
        return (type_321&&type_321->mTypedef)||(klass_317&&klass_317->mNumber)||(klass_317&&klass_317->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_322||generics_type_name_323||mgenerics_type_name_329||klass_317||type_321||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_318;
unsigned int hash_319;
unsigned int it_320;
void* __result230__;
void* __result231__;
void* __result232__;
void* __result233__;
default_value_318 = (void*)0;
    memset(&default_value_318,0,sizeof(void*));
    hash_319=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_320=hash_319;
    while((_Bool)1) {
        if(        self->item_existance[it_320]) {
            if(            come_call_equals((void*)0, self->keys[it_320], ((char*)key))) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_320];
                come_call_finalizer3(default_value_318,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_320++;
            if(            it_320>=self->size) {
                it_320=0;
            }
            else if(            it_320==hash_319) {
                __result231__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_318);
                come_call_finalizer3(default_value_318,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_318);
            come_call_finalizer3(default_value_318,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_318);
    come_call_finalizer3(default_value_318,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_326;
    for(    it_326=list$1charphp_begin(self);    !list$1charphp_end(self);    it_326=list$1charphp_next(self)    ){
        if(        string_equals(it_326,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_324;
char* __result234__;
char* __result235__;
char* result_325;
char* __result236__;
result_324 = (void*)0;
result_325 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_324,0,sizeof(char*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_324;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->head;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_325,0,sizeof(char*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_325;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_327;
char* __result237__;
char* __result238__;
char* result_328;
char* __result239__;
result_327 = (void*)0;
result_328 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_327,0,sizeof(char*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_327;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_328,0,sizeof(char*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_328;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

void skip_paren(struct sInfo* info){
int nest_330;
void* __right_value258 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_331=0;
char* Err_332=0;
    nest_330=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_330++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_330--;
            if(            nest_330==0) {
                break;
            }
        }
        else if(        *info->p==0) {
            multiple_assign_var1=((struct tuple2$2intcharph*)(__right_value258=err_msg(info,"invalid the source end. require )")));
            come_exception_var_c1_331=multiple_assign_var1->v1;
            Err_332=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_332)?(puts(Err_332),exit(0)):(0));
            come_call_finalizer3(__right_value258,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
            (Err_332 = come_decrement_ref_count2(Err_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
            (Err_332 = come_decrement_ref_count2(Err_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
        }
    }
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj31=self->v2;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_333;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_333=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_333==59||c_333==32||c_333==9||c_333==10||c_333==10||c_333==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct buffer* buf_334;
void* __right_value261 = (void*)0;
_Bool _if_conditional1;
void* __right_value262 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_335=0;
char* Err_336=0;
void* __right_value263 = (void*)0;
char* __result240__;
void* __right_value264 = (void*)0;
char* result_337;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
_Bool _if_conditional2;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
char* __result241__;
char* __result242__;
    buf_334=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 96, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_334,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value261=buffer_to_string(buf_334))))==0)),    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
    _if_conditional1) {
        multiple_assign_var2=((struct tuple2$2intcharph*)(__right_value262=err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line)));
        come_exception_var_c2_335=multiple_assign_var2->v1;
        Err_336=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        ((Err_336)?(puts(Err_336),exit(0)):(0));
        come_call_finalizer3(__right_value262,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value263=__builtin_string("")));
        (Err_336 = come_decrement_ref_count2(Err_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(buf_334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result240__;
        (Err_336 = come_decrement_ref_count2(Err_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_337=(char*)come_increment_ref_count(buffer_to_string(buf_334));
    if(    (_if_conditional2=(info->module_params&&((char*)((void*)(__right_value266=map$2voidphvoidphp_operator_load_element(info->module_params,((char*)(__right_value265=__builtin_string(result_337))))))))),    (__right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
    come_call_finalizer3(__right_value266,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional2) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value269=__builtin_string(((char*)((void*)(__right_value268=map$2voidphvoidphp_operator_load_element(info->module_params,((char*)(__right_value267=__builtin_string(result_337))))))))));
        come_call_finalizer3(buf_334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (result_337 = come_decrement_ref_count2(result_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        come_call_finalizer3(__right_value268,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        (__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(buf_334,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (result_337 = come_decrement_ref_count2(result_337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result242__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_338;
int sline_339;
char* buf_340;
void* __right_value270 = (void*)0;
char* __dec_obj32;
void* __right_value271 = (void*)0;
char* __dec_obj33;
char* __result243__;
buf_340 = (void*)0;
    p_338=info->p;
    sline_339=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj32=buf_340;
        buf_340=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj33=buf_340;
        buf_340=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_338;
    info->sline=sline_339;
    __result243__ = gComeFunResultObject = __result_obj__ = buf_340;
    (buf_340 = come_decrement_ref_count2(buf_340, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result243__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
}

void skip_spaces_and_lf2(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_341;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct buffer* fname_342;
void* __right_value274 = (void*)0;
char* __dec_obj34;
int nest_343;
    while(1) {
        if(        *info->p==35) {
            skip_spaces_and_lf2(info);
            info->p++;
            skip_spaces_and_lf2(info);
            if(            strmemcmp(info->p,"pragma")) {
                while(*info->p) {
                    if(                    *info->p==10) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            else if(            xisdigit(*info->p)) {
                line_341=0;
                fname_342=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 195, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                while(xisdigit(*info->p)) {
                    line_341=line_341*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_342,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_341;
                __dec_obj34=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_342));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_342,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            skip_spaces_and_lf2(info);
        }
        else if(        *info->p==47&&*(info->p+1)==42) {
            nest_343=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_343++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_343--;
                    if(                    nest_343==0) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        *info->p==47&&*(info->p+1)==47) {
            info->p+=2;
            while(1) {
                if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    skip_spaces_and_lf2(info);
                    break;
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        strmemcmp(info->p,"__extension__")) {
            info->p+=strlen("__extension__");
            skip_spaces_and_lf2(info);
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1voidph* o2_saved_344;
struct sType* it_347;
_Bool __result250__;
    for(    o2_saved_344=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_347=((struct sType*)list$1voidphp_begin((o2_saved_344)));    !list$1voidphp_end((o2_saved_344));    it_347=((struct sType*)list$1voidphp_next((o2_saved_344)))    ){
        if(        is_contained_generics_class(it_347,info)) {
            __result250__ = (_Bool)1;
            come_call_finalizer3(o2_saved_344,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result250__;
        }
    }
    come_call_finalizer3(o2_saved_344,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_345;
void* __result244__;
void* __result245__;
void* result_346;
void* __result246__;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_345,0,sizeof(void*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_345;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->it=self->head;
    if(    self->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_346,0,sizeof(void*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_346;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_348;
void* __result247__;
void* __result248__;
void* result_349;
void* __result249__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_348,0,sizeof(void*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_349,0,sizeof(void*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_350;
struct list_item$1voidph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj35;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            come_call_finalizer3(__dec_obj35,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1voidph* param_types_354;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* param_names_355;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* param_default_parametors_356;
_Bool var_args_357;
void* __right_value285 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* type__361;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
_Bool void_param_387;
char* p_388;
int sline_389;
void* __right_value321 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* param_type_390=0;
char* param_name_391=0;
_Bool err_392=0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result271__;
void* __right_value325 = (void*)0;
struct sType* param_type2_395;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
char* p_399;
_Bool no_comma_400;
void* __right_value331 = (void*)0;
struct sNode* node_401;
char* p2_402;
void* __right_value332 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result276__;
    param_types_354=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 324, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    param_names_355=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 325, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_default_parametors_356=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 326, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    var_args_357=(_Bool)0;
    if(    in_constructor_) {
        list$1charphp_add(param_names_355,(char*)come_increment_ref_count(xsprintf("self")));
        type__361=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__361->mHeap=(_Bool)1;
        list$1voidphp_add(param_types_354,(struct sType*)come_increment_ref_count(type__361));
        list$1charphp_add(param_default_parametors_356,((void*)0));
        come_call_finalizer3(type__361,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charphp_add(param_names_355,(char*)come_increment_ref_count(xsprintf("self")));
        list$1voidphp_add(param_types_354,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1charphp_add(param_default_parametors_356,((void*)0));
    }
    expected_next_character(40,info);
    void_param_387=(_Bool)0;
    {
        p_388=info->p;
        sline_389=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_387=(_Bool)1;
            }
        }
        info->p=p_388;
        info->sline=sline_389;
    }
    if(    void_param_387) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value321=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_390=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            param_name_391=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_392=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value321,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_392) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result271__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)(__right_value324=tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool**)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "05type.c", 388, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key, tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals)),(struct list$1voidph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
                (param_name_391 = come_decrement_ref_count2(param_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_types_354,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value324,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
            param_type2_395=(struct sType*)come_increment_ref_count(solve_generics(param_type_390,info->generics_type,info));
            list$1voidphp_push_back(param_types_354,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_395)));
            list$1charphp_push_back(param_names_355,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_391)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_399=info->p;
                no_comma_400=info->no_comma;
                info->no_comma=(_Bool)1;
                node_401=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_400;
                p2_402=info->p;
                char buf_403[p2_402-p_399+1];
                memset(&buf_403, 0, sizeof(char)                *(p2_402-p_399+1)                );
                memcpy(buf_403,p_399,p2_402-p_399);
                buf_403[p2_402-p_399]=0;
                list$1charphp_push_back(param_default_parametors_356,(char*)come_increment_ref_count(__builtin_string(buf_403)));
                ((node_401) ? node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                list$1charphp_push_back(param_default_parametors_356,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_357=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_391 = come_decrement_ref_count2(param_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(param_type2_395,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
                (param_name_391 = come_decrement_ref_count2(param_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_type2_395,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
            (param_name_391 = come_decrement_ref_count2(param_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_type2_395,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result276__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value338=tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool**)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "05type.c", 446, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals)),(struct list$1voidph*)come_increment_ref_count(param_types_354),(struct list$1charph*)come_increment_ref_count(param_names_355),(struct list$1charph*)come_increment_ref_count(param_default_parametors_356),var_args_357)));
    come_call_finalizer3(param_types_354,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value338,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result251__;
void* __right_value275 = (void*)0;
struct list$1voidph* result_352;
struct list$1voidph* __result252__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_352=(struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "list$1voidph_clone", 3, "struct list$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_352->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_352->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_352->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_352->it=self->it;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_352;
    come_call_finalizer3(result_352,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void list$1voidph_finalize(struct list$1voidph* self){
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_353;
    result_353=0;
    result_353+=int_get_hash_key(((int)self->head));
    result_353+=int_get_hash_key(((int)self->tail));
    result_353+=int_get_hash_key(((int)self->len));
    result_353+=int_get_hash_key(((int)self->it));
    return result_353;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
    if(    !list_item$1voidph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result253__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_358;
char* __dec_obj36;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_359;
char* __dec_obj37;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_360;
char* __dec_obj38;
struct list$1charph* __result254__;
    if(    self->len==0) {
        litem_358=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=((void*)0);
        litem_358->next=((void*)0);
        __dec_obj36=litem_358->item;
        litem_358->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_358;
        self->head=litem_358;
    }
    else if(    self->len==1) {
        litem_359=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->head;
        litem_359->next=((void*)0);
        __dec_obj37=litem_359->item;
        litem_359->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_359;
        self->head->next=litem_359;
    }
    else {
        litem_360=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->tail;
        litem_360->next=((void*)0);
        __dec_obj38=litem_360->item;
        litem_360->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_360;
        self->tail=litem_360;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result255__;
void* __right_value286 = (void*)0;
struct sType* result_373;
void* __right_value287 = (void*)0;
struct sType* __dec_obj55;
void* __right_value288 = (void*)0;
struct sType* __dec_obj56;
void* __right_value295 = (void*)0;
struct list$1voidph* __dec_obj60;
void* __right_value296 = (void*)0;
struct sType* __dec_obj61;
void* __right_value297 = (void*)0;
struct sType* __dec_obj62;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj64;
void* __right_value301 = (void*)0;
char* __dec_obj65;
void* __right_value302 = (void*)0;
char* __dec_obj66;
void* __right_value303 = (void*)0;
char* __dec_obj67;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __dec_obj71;
void* __right_value311 = (void*)0;
char* __dec_obj72;
void* __right_value312 = (void*)0;
struct list$1voidph* __dec_obj73;
void* __right_value316 = (void*)0;
struct list$1charph* __dec_obj74;
void* __right_value317 = (void*)0;
struct sType* __dec_obj75;
struct sType* __result267__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_373=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_373->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_373->mOriginalLoadVarType;
        result_373->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj56=result_373->mChannelType;
        result_373->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_373->mGenericsTypes;
        result_373->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj61=result_373->mNoSolvedGenericsType;
        result_373->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_373->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj62=result_373->mAnyOriginalType;
        result_373->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj63=result_373->mSizeNum;
        result_373->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj64=result_373->mAlignas;
        result_373->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj65=result_373->mTupleName;
        result_373->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj66=result_373->mAttribute;
        result_373->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_373->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_373->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_373->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_373->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_373->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_373->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_373->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_373->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_373->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_373->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_373->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_373->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_373->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_373->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_373->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_373->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_373->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_373->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_373->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_373->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_373->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_373->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_373->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_373->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_373->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_373->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj67=result_373->mAsmName;
        result_373->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_373->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_373->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_373->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_373->mArrayNum;
        result_373->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_373->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_373->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_373->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_373->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_373->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj72=result_373->mOriginalTypeName;
        result_373->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_373->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_373->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_373->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_373->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj73=result_373->mParamTypes;
        result_373->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj73,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj74=result_373->mParamNames;
        result_373->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj75=result_373->mResultType;
        result_373->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_373->mVarArgs=self->mVarArgs;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_373;
    come_call_finalizer3(result_373,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj39;
struct sType* __dec_obj40;
struct list$1voidph* __dec_obj41;
struct sType* __dec_obj42;
struct sType* __dec_obj43;
struct sNode* __dec_obj44;
struct sNode* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
struct list$1sNodeph* __dec_obj49;
char* __dec_obj51;
struct list$1voidph* __dec_obj52;
struct list$1charph* __dec_obj53;
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj40=self->mChannelType;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj41=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj41,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj42=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj43=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj44=self->mSizeNum;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj45=self->mAlignas;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj46=self->mTupleName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj47=self->mAttribute;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj48=self->mAsmName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj49=self->mArrayNum;
            come_call_finalizer3(__dec_obj49,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj51=self->mOriginalTypeName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj52=self->mParamTypes;
            come_call_finalizer3(__dec_obj52,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj53=self->mParamNames;
            come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj54=self->mResultType;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_362;
struct list_item$1sNodeph* prev_it_363;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        come_call_finalizer3(prev_it_363,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj50;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj50=self->item;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_364;
struct list_item$1sNodeph* prev_it_365;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        come_call_finalizer3(prev_it_365,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_366;
struct list_item$1charph* prev_it_367;
    it_366=self->head;
    while(it_366!=((void*)0)) {
        prev_it_367=it_366;
        it_366=it_366->next;
        come_call_finalizer3(prev_it_367,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_368;
    result_368=0;
    result_368+=int_get_hash_key(((int)self->mClass));
    result_368+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_368+=int_get_hash_key(((int)self->mChannelType));
    result_368+=int_get_hash_key(((int)self->mGenericsTypes));
    result_368+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_368+=int_get_hash_key(((int)self->mAnyClass));
    result_368+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_368+=int_get_hash_key(((int)self->mSizeNum));
    result_368+=int_get_hash_key(((int)self->mAlignas));
    result_368+=int_get_hash_key(((int)self->mTupleName));
    result_368+=int_get_hash_key(((int)self->mAttribute));
    result_368+=int_get_hash_key(((int)self->mAllocaValue));
    result_368+=int_get_hash_key(((int)self->mUnsigned));
    result_368+=int_get_hash_key(((int)self->mShort));
    result_368+=int_get_hash_key(((int)self->mLong));
    result_368+=int_get_hash_key(((int)self->mLongLong));
    result_368+=int_get_hash_key(((int)self->mConstant));
    result_368+=int_get_hash_key(((int)self->mAtomic));
    result_368+=int_get_hash_key(((int)self->mRegister));
    result_368+=int_get_hash_key(((int)self->mVolatile));
    result_368+=int_get_hash_key(((int)self->mStatic));
    result_368+=int_get_hash_key(((int)self->mUniq));
    result_368+=int_get_hash_key(((int)self->mRecord));
    result_368+=int_get_hash_key(((int)self->mExtern));
    result_368+=int_get_hash_key(((int)self->mRestrict));
    result_368+=int_get_hash_key(((int)self->mImmutable));
    result_368+=int_get_hash_key(((int)self->mHeap));
    result_368+=int_get_hash_key(((int)self->mChannel));
    result_368+=int_get_hash_key(((int)self->mNoHeap));
    result_368+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_368+=int_get_hash_key(((int)self->mException));
    result_368+=int_get_hash_key(((int)self->mGenerate));
    result_368+=int_get_hash_key(((int)self->mCreateVTable));
    result_368+=int_get_hash_key(((int)self->mDynamic));
    result_368+=int_get_hash_key(((int)self->mInline));
    result_368+=int_get_hash_key(((int)self->mNullValue));
    result_368+=int_get_hash_key(((int)self->mGuardValue));
    result_368+=int_get_hash_key(((int)self->mAsmName));
    result_368+=int_get_hash_key(((int)self->mTypedef));
    result_368+=int_get_hash_key(((int)self->mMultipleTypes));
    result_368+=int_get_hash_key(((int)self->mOriginIsArray));
    result_368+=int_get_hash_key(((int)self->mArrayNum));
    result_368+=int_get_hash_key(((int)self->mPointerNum));
    result_368+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_368+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_368+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_368+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_368+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_368+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_368+=int_get_hash_key(((int)self->mArrayPointerType));
    result_368+=int_get_hash_key(((int)self->mLambdaArray));
    result_368+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_368+=int_get_hash_key(((int)self->mParamTypes));
    result_368+=int_get_hash_key(((int)self->mParamNames));
    result_368+=int_get_hash_key(((int)self->mResultType));
    result_368+=int_get_hash_key(((int)self->mVarArgs));
    return result_368;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_369;
struct list_item$1sNodeph* it2_370;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_369=left->head;
    it2_370=right->head;
    while(it_369!=((void*)0)) {
        if(        !sNode_equals(it_369->item,it2_370->item)) {
            return (_Bool)0;
        }
        it_369=it_369->next;
        it2_370=it2_370->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_371;
struct list_item$1charph* it2_372;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_371=left->head;
    it2_372=right->head;
    while(it_371!=((void*)0)) {
        if(        !string_equals(it_371->item,it2_372->item)) {
            return (_Bool)0;
        }
        it_371=it_371->next;
        it2_372=it2_372->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result256__;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1voidph* result_374;
struct list_item$1voidph* it_375;
void* __right_value294 = (void*)0;
struct list$1voidph* __result258__;
    if(    self==((void*)0)) {
        __result256__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_374=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_375=self->head;
    while(it_375!=((void*)0)) {
        list$1voidphp_add(result_374,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_375->item)));
        it_375=it_375->next;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_374;
    come_call_finalizer3(result_374,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_376;
void* __dec_obj57;
void* __right_value292 = (void*)0;
struct list_item$1voidph* litem_377;
void* __dec_obj58;
void* __right_value293 = (void*)0;
struct list_item$1voidph* litem_378;
void* __dec_obj59;
struct list$1voidph* __result257__;
    if(    self->len==0) {
        litem_376=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj57=litem_376->item;
        litem_376->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value292=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj58=litem_377->item;
        litem_377->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value293=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj59=litem_378->item;
        litem_378->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result259__;
void* __right_value298 = (void*)0;
struct sNode* result_379;
struct sNode* __result260__;
    if(    self==(void*)0) {
        __result259__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    result_379=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_379->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_379->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_379->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_379->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_379->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_379->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_379->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_379->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_379->kind=self->kind;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_379;
    ((result_379) ? result_379 = come_decrement_ref_count2(result_379, ((struct sNode*)result_379)->finalize, ((struct sNode*)result_379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result261__;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sNodeph* result_380;
struct list_item$1sNodeph* it_381;
void* __right_value309 = (void*)0;
struct list$1sNodeph* __result264__;
    if(    self==((void*)0)) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_380=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_381=self->head;
    while(it_381!=((void*)0)) {
        list$1sNodephp_add(result_380,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_381->item)));
        it_381=it_381->next;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_380;
    come_call_finalizer3(result_380,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result262__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
struct list_item$1sNodeph* litem_382;
struct sNode* __dec_obj68;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_383;
struct sNode* __dec_obj69;
void* __right_value308 = (void*)0;
struct list_item$1sNodeph* litem_384;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result263__;
    if(    self->len==0) {
        litem_382=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value306=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj68=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj69=litem_383->item;
        litem_383->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value308=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj70=litem_384->item;
        litem_384->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result265__;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* result_385;
struct list_item$1charph* it_386;
void* __right_value315 = (void*)0;
struct list$1charph* __result266__;
    if(    self==((void*)0)) {
        __result265__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_385=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_386=self->head;
    while(it_386!=((void*)0)) {
        list$1charphp_add(result_385,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_386->item)));
        it_386=it_386->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_385;
    come_call_finalizer3(result_385,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj76;
char* __dec_obj77;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj76=self->v1;
            come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj77=self->v2;
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result268__;
void* __right_value322 = (void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* result_393;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result269__;
    if(    self==(void*)0) {
        __result268__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_393=(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone", 3, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_393->v1=self->v1;
    }
    if(    self!=((void*)0)) {
        result_393->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_393->v3=self->v3;
    }
    if(    self!=((void*)0)) {
        result_393->v4=self->v4;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = result_393;
    come_call_finalizer3(result_393,tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
unsigned int result_394;
    result_394=0;
    result_394+=int_get_hash_key(((int)self->v1));
    result_394+=int_get_hash_key(((int)self->v2));
    result_394+=int_get_hash_key(((int)self->v3));
    result_394+=int_get_hash_key(((int)self->v4));
    return result_394;
}

static _Bool tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* left, struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* right){
    if(    !list$1voidphp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result270__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
struct list_item$1voidph* litem_396;
void* __dec_obj78;
void* __right_value327 = (void*)0;
struct list_item$1voidph* litem_397;
void* __dec_obj79;
void* __right_value328 = (void*)0;
struct list_item$1voidph* litem_398;
void* __dec_obj80;
struct list$1voidph* __result272__;
    if(    self->len==0) {
        litem_396=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value326=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=((void*)0);
        litem_396->next=((void*)0);
        __dec_obj78=litem_396->item;
        litem_396->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_396;
        self->head=litem_396;
    }
    else if(    self->len==1) {
        litem_397=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value327=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=self->head;
        litem_397->next=((void*)0);
        __dec_obj79=litem_397->item;
        litem_397->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_397;
        self->head->next=litem_397;
    }
    else {
        litem_398=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value328=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_398->prev=self->tail;
        litem_398->next=((void*)0);
        __dec_obj80=litem_398->item;
        litem_398->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_398;
        self->tail=litem_398;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj81;
struct list$1charph* __dec_obj82;
struct list$1charph* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj81=self->v1;
            come_call_finalizer3(__dec_obj81,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj82=self->v2;
            come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj83=self->v3;
            come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result273__;
void* __right_value333 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* result_404;
void* __right_value334 = (void*)0;
struct list$1voidph* __dec_obj84;
void* __right_value335 = (void*)0;
struct list$1charph* __dec_obj85;
void* __right_value336 = (void*)0;
struct list$1charph* __dec_obj86;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_404=(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone", 3, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_404->v1;
        result_404->v1=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->v1));
        come_call_finalizer3(__dec_obj84,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_404->v2;
        result_404->v2=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v2));
        come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj86=result_404->v3;
        result_404->v3=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v3));
        come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_404->v4=self->v4;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_404;
    come_call_finalizer3(result_404,tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
unsigned int result_405;
    result_405=0;
    result_405+=int_get_hash_key(((int)self->v1));
    result_405+=int_get_hash_key(((int)self->v2));
    result_405+=int_get_hash_key(((int)self->v3));
    result_405+=int_get_hash_key(((int)self->v4));
    return result_405;
}

static _Bool tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* left, struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* right){
    if(    !list$1voidphp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1voidph* __dec_obj87;
struct list$1charph* __dec_obj88;
struct list$1charph* __dec_obj89;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result275__;
    __dec_obj87=self->v1;
    self->v1=(struct list$1voidph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj87,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj88=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj89=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj90;
struct list$1charph* __dec_obj91;
struct list$1charph* __dec_obj92;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            come_call_finalizer3(__dec_obj90,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj92=self->v3;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
struct sType* left_type2_406;
void* __right_value340 = (void*)0;
struct sType* right_type2_407;
struct sType* left_no_solved_generics_type_408;
struct sType* right_no_solved_generics_type_409;
struct sClass* left_class_410;
struct sClass* right_class_411;
_Bool parent_class_412;
void* __right_value341 = (void*)0;
_Bool __null_value1;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple2$2boolcharph* __result278__;
_Bool __null_value2;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct tuple2$2boolcharph* __result279__;
_Bool __null_value3;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct tuple2$2boolcharph* __result280__;
_Bool __null_value4;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct tuple2$2boolcharph* __result281__;
_Bool __null_value5;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct tuple2$2boolcharph* __result282__;
void* __right_value357 = (void*)0;
char* left_type3_413;
void* __right_value358 = (void*)0;
char* __dec_obj95;
void* __right_value359 = (void*)0;
struct sType* __dec_obj96;
void* __right_value360 = (void*)0;
struct sType* __dec_obj97;
_Bool __null_value6;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct tuple2$2boolcharph* __result283__;
void* __right_value364 = (void*)0;
char* left_type3_414;
void* __right_value365 = (void*)0;
char* __dec_obj98;
void* __right_value366 = (void*)0;
struct sType* __dec_obj99;
void* __right_value367 = (void*)0;
struct sType* __dec_obj100;
_Bool __null_value7;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct tuple2$2boolcharph* __result284__;
_Bool __null_value8;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple2$2boolcharph* __result285__;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct tuple2$2boolcharph* __result287__;
int i_415;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_1_419=0;
char* Err_420=0;
_Bool _if_conditional3;
_Bool __null_value9;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct tuple2$2boolcharph* __result290__;
void* __right_value382 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_2_421=0;
char* Err_422=0;
_Bool _if_conditional4;
_Bool __null_value10;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct tuple2$2boolcharph* __result291__;
_Bool __null_value11;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2boolcharph* __result292__;
_Bool __null_value12;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2boolcharph* __result293__;
void* __right_value392 = (void*)0;
char* left_type3_423;
void* __right_value393 = (void*)0;
char* __dec_obj101;
void* __right_value394 = (void*)0;
struct sType* __dec_obj102;
void* __right_value395 = (void*)0;
struct sType* __dec_obj103;
_Bool __null_value13;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct tuple2$2boolcharph* __result294__;
void* __right_value399 = (void*)0;
char* left_type3_424;
void* __right_value400 = (void*)0;
char* __dec_obj104;
void* __right_value401 = (void*)0;
struct sType* __dec_obj105;
void* __right_value402 = (void*)0;
struct sType* __dec_obj106;
_Bool __null_value14;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct tuple2$2boolcharph* __result295__;
void* __right_value406 = (void*)0;
char* __dec_obj107;
void* __right_value407 = (void*)0;
struct sType* __dec_obj108;
void* __right_value408 = (void*)0;
struct sType* __dec_obj109;
_Bool __null_value15;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple2$2boolcharph* __result296__;
void* __right_value412 = (void*)0;
char* left_type3_425;
void* __right_value413 = (void*)0;
char* __dec_obj110;
void* __right_value414 = (void*)0;
struct sType* __dec_obj111;
void* __right_value415 = (void*)0;
struct sType* __dec_obj112;
_Bool __null_value16;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct tuple2$2boolcharph* __result297__;
void* __right_value419 = (void*)0;
char* left_type3_426;
void* __right_value420 = (void*)0;
char* __dec_obj113;
void* __right_value421 = (void*)0;
struct sType* __dec_obj114;
void* __right_value422 = (void*)0;
struct sType* __dec_obj115;
_Bool __null_value17;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct tuple2$2boolcharph* __result298__;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct tuple2$2boolcharph* __result299__;
_Bool __null_value18;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple2$2boolcharph* __result300__;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple2$2boolcharph* __result301__;
_Bool __null_value19;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct tuple2$2boolcharph* __result302__;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple2$2boolcharph* __result303__;
_Bool __null_value20;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2boolcharph* __result304__;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple2$2boolcharph* __result305__;
_Bool __null_value21;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct tuple2$2boolcharph* __result306__;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct tuple2$2boolcharph* __result307__;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct buffer* buf2_427;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj116;
void* __right_value456 = (void*)0;
struct sType* __dec_obj117;
void* __right_value457 = (void*)0;
struct sType* __dec_obj118;
_Bool __null_value22;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2boolcharph* __result308__;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct tuple2$2boolcharph* __result309__;
_Bool __null_value23;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple2$2boolcharph* __result310__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2boolcharph* __result311__;
_Bool __null_value24;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple2$2boolcharph* __result312__;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple2$2boolcharph* __result313__;
_Bool __null_value25;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2boolcharph* __result314__;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct tuple2$2boolcharph* __result315__;
_Bool __null_value26;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct tuple2$2boolcharph* __result316__;
void* __right_value481 = (void*)0;
char* tmp_428;
void* __right_value482 = (void*)0;
char* __dec_obj119;
void* __right_value483 = (void*)0;
struct sType* __dec_obj120;
void* __right_value484 = (void*)0;
struct sType* __dec_obj121;
_Bool __null_value27;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple2$2boolcharph* __result317__;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple2$2boolcharph* __result318__;
_Bool __null_value28;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct tuple2$2boolcharph* __result319__;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2boolcharph* __result320__;
void* __right_value495 = (void*)0;
char* tmp_429;
void* __right_value496 = (void*)0;
char* __dec_obj122;
void* __right_value497 = (void*)0;
struct sType* __dec_obj123;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple2$2boolcharph* __result321__;
_Bool __null_value29;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2boolcharph* __result322__;
int i_430;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var6 = (void*)0;
_Bool come_exception_var_3_431=0;
char* Err_432=0;
_Bool _if_conditional5;
_Bool __null_value30;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple2$2boolcharph* __result323__;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct tuple2$2boolcharph* __result324__;
memset(&__null_value1, 0, sizeof(_Bool));
memset(&__null_value2, 0, sizeof(_Bool));
memset(&__null_value3, 0, sizeof(_Bool));
memset(&__null_value4, 0, sizeof(_Bool));
memset(&__null_value5, 0, sizeof(_Bool));
memset(&__null_value6, 0, sizeof(_Bool));
memset(&__null_value7, 0, sizeof(_Bool));
memset(&__null_value8, 0, sizeof(_Bool));
memset(&__null_value9, 0, sizeof(_Bool));
memset(&__null_value10, 0, sizeof(_Bool));
memset(&__null_value11, 0, sizeof(_Bool));
memset(&__null_value12, 0, sizeof(_Bool));
memset(&__null_value13, 0, sizeof(_Bool));
memset(&__null_value14, 0, sizeof(_Bool));
memset(&__null_value15, 0, sizeof(_Bool));
memset(&__null_value16, 0, sizeof(_Bool));
memset(&__null_value17, 0, sizeof(_Bool));
memset(&__null_value18, 0, sizeof(_Bool));
memset(&__null_value19, 0, sizeof(_Bool));
memset(&__null_value20, 0, sizeof(_Bool));
memset(&__null_value21, 0, sizeof(_Bool));
memset(&__null_value22, 0, sizeof(_Bool));
memset(&__null_value23, 0, sizeof(_Bool));
memset(&__null_value24, 0, sizeof(_Bool));
memset(&__null_value25, 0, sizeof(_Bool));
memset(&__null_value26, 0, sizeof(_Bool));
memset(&__null_value27, 0, sizeof(_Bool));
memset(&__null_value28, 0, sizeof(_Bool));
memset(&__null_value29, 0, sizeof(_Bool));
memset(&__null_value30, 0, sizeof(_Bool));
    left_type2_406=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
    right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_408=((void*)0);
    if(    left_type2_406->mNoSolvedGenericsType) {
        left_no_solved_generics_type_408=left_type2_406->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_409=((void*)0);
    if(    right_type2_407->mNoSolvedGenericsType) {
        right_no_solved_generics_type_409=right_type2_407->mNoSolvedGenericsType;
    }
    left_class_410=left_type2_406->mClass;
    right_class_411=right_type2_407->mClass;
    parent_class_412=(_Bool)0;
    if(    string_operator_not_equals(left_class_410->mName,right_class_411->mName)) {
        while(left_class_410&&right_class_411) {
            if(            string_operator_equals(left_class_410->mName,right_class_411->mName)) {
                parent_class_412=(_Bool)1;
            }
            if(            right_class_411->mParentClassName) {
                right_class_411=((struct sClass*)((void*)(__right_value341=map$2voidphvoidphp_operator_load_element(info->classes,right_class_411->mParentClassName))));
                come_call_finalizer3(__right_value341,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            }
            else {
                right_class_411=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type2_406->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result278__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value344=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 490, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value1,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value344,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
        }
        else if(        right_type->mPointerNum>0&&left_type2_406->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result279__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value347=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 501, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value2,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value347,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
        }
        else if(        left_type2_406->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type2_406->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type2_406->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                    info->err_num++;
                    __result280__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value350=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 516, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value3,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value350,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result280__;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_408&&right_no_solved_generics_type_409) {
        if(        strlen(left_type2_406->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_406->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result281__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value353=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 535, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value4,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value353,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_406->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_406->mClass->mNumber&&left_type2_406->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes),left_no_solved_generics_type_408->mClass->mName,left_type2_406->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes),right_no_solved_generics_type_409->mClass->mName,right_type2_407->mClass->mName);
                    info->err_num++;
                    __result282__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value356=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 549, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value5,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value356,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result282__;
                }
            }
            else {
                left_type3_413=(char*)come_increment_ref_count(make_type_name_string(left_type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj95=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_413,come_value->c_value));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj96=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
                come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj97=right_type2_407;
                right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
                come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_413 = come_decrement_ref_count2(left_type3_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_406->mClass->mFloat&&left_type2_406->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes),left_no_solved_generics_type_408->mClass->mName,left_type2_406->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes),right_no_solved_generics_type_409->mClass->mName,right_type2_407->mClass->mName);
                    info->err_num++;
                    __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value363=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 570, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value6,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value363,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result283__;
                }
            }
            else {
                left_type3_414=(char*)come_increment_ref_count(make_type_name_string(left_type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj98=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_414,come_value->c_value));
                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj99=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
                come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj100=right_type2_407;
                right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
                come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_414 = come_decrement_ref_count2(left_type3_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)&&left_type2_406->mPointerNum==right_type2_407->mPointerNum) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"void")&&left_type2_406->mPointerNum>0&&string_operator_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)&&(left_type2_406->mPointerNum!=right_type2_407->mPointerNum||left_type2_406->mHeap!=right_type2_407->mHeap)) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)&&(left_type2_406->mPointerNum!=right_type2_407->mPointerNum||left_type2_406->mHeap!=right_type2_407->mHeap)) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_406->mClass->mName);
            printf("right type class_name %s\n",right_type2_407->mClass->mName);
            printf("left type pointernum %d\n",left_type2_406->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_406->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes),left_no_solved_generics_type_408->mClass->mName,left_type2_406->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes),right_no_solved_generics_type_409->mClass->mName,right_type2_407->mClass->mName);
            info->err_num++;
            __result284__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value370=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 599, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value7,(char*)come_increment_ref_count(xsprintf("ERR")))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value370,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
        else if(        list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_408->mClass->mName,"void")&&left_no_solved_generics_type_408->mPointerNum>0&&right_no_solved_generics_type_409->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_409->mClass->mName,"void")&&right_no_solved_generics_type_409->mPointerNum>0&&left_no_solved_generics_type_408->mPointerNum>0)) {
            }
            else {
                if(                list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes)!=list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes),left_no_solved_generics_type_408->mClass->mName,left_type2_406->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes),right_no_solved_generics_type_409->mClass->mName,right_type2_407->mClass->mName);
                        info->err_num++;
                        __result285__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value373=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 615, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value8,(char*)come_increment_ref_count(xsprintf("ERR")))));
                        come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value373,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result285__;
                    }
                    __result287__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value375=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 618, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value375,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result287__;
                }
                for(                i_415=0;                i_415<list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes);                i_415++                ){
                    multiple_assign_var4=((struct tuple2$2boolcharph*)(__right_value378=check_assign_type(msg,((struct sType*)((void*)(__right_value376=list$1voidphp_operator_load_element(left_no_solved_generics_type_408->mGenericsTypes,i_415)))),((struct sType*)((void*)(__right_value377=list$1voidphp_operator_load_element(right_no_solved_generics_type_409->mGenericsTypes,i_415)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_1_419=multiple_assign_var4->v1;
                    Err_420=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    (_if_conditional3=(Err_420)),                    come_call_finalizer3(__right_value376,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                    come_call_finalizer3(__right_value377,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                    come_call_finalizer3(__right_value378,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__),
                    _if_conditional3) {
                        __result290__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value381=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 623, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value9,(char*)come_increment_ref_count(xsprintf("ERR")))));
                        (Err_420 = come_decrement_ref_count2(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value381,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result290__;
                    }
                    else {
                    }
                    (Err_420 = come_decrement_ref_count2(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                multiple_assign_var5=((struct tuple2$2boolcharph*)(__right_value382=check_assign_type(msg,left_no_solved_generics_type_408,right_no_solved_generics_type_409,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_2_421=multiple_assign_var5->v1;
                Err_422=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional4=(Err_422)),                come_call_finalizer3(__right_value382,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional4) {
                    __result291__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value385=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 628, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value10,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    (Err_422 = come_decrement_ref_count2(Err_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value385,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result291__;
                }
                else {
                }
                (Err_422 = come_decrement_ref_count2(Err_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    strlen(left_type2_406->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_406->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result292__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value388=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 645, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value11,(char*)come_increment_ref_count(xsprintf("ERR")))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value388,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result292__;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_406->mClass->mNumber&&left_type2_406->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes),left_no_solved_generics_type_408->mClass->mName,left_type2_406->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes),right_no_solved_generics_type_409->mClass->mName,right_type2_407->mClass->mName);
                info->err_num++;
                __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value391=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 657, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value12,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value391,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
        }
        else {
            left_type3_423=(char*)come_increment_ref_count(make_type_name_string(left_type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj101=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_423,come_value->c_value));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj102=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj103=right_type2_407;
            right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_423 = come_decrement_ref_count2(left_type3_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_406->mClass->mFloat&&left_type2_406->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_408->mGenericsTypes),left_no_solved_generics_type_408->mClass->mName,left_type2_406->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_409->mGenericsTypes),right_no_solved_generics_type_409->mClass->mName,right_type2_407->mClass->mName);
                info->err_num++;
                __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value398=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 678, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value13,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value398,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result294__;
            }
        }
        else {
            left_type3_424=(char*)come_increment_ref_count(make_type_name_string(left_type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj104=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_424,come_value->c_value));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj105=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj106=right_type2_407;
            right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_424 = come_decrement_ref_count2(left_type3_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_406->mHeap&&!right_type2_407->mHeap&&left_type2_406->mPointerNum>0&&right_type2_407->mPointerNum>0&&string_operator_not_equals(right_type2_407->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_406->mMultipleTypes&&!right_type->mMultipleTypes) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum,left_type2_406->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum,right_type2_407->mHeap);
        info->err_num++;
        __result295__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value405=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 698, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value14,(char*)come_increment_ref_count(xsprintf("ERR")))));
        come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value405,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    else if(    parent_class_412&&left_type2_406->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj107=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_406->mClass->mName,come_value->c_value));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj108=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
        come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj109=right_type2_407;
        right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
        come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_406->mClass->mNumber&&left_type2_406->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result296__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value411=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 716, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value15,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value411,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
        }
        else {
            left_type3_425=(char*)come_increment_ref_count(make_type_name_string(left_type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj110=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_425,come_value->c_value));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj111=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj112=right_type2_407;
            right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_425 = come_decrement_ref_count2(left_type3_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_406->mClass->mFloat&&left_type2_406->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result297__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value418=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 737, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value16,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value418,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
        }
        else {
            left_type3_426=(char*)come_increment_ref_count(make_type_name_string(left_type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj113=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_426,come_value->c_value));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj114=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj115=right_type2_407;
            right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_426 = come_decrement_ref_count2(left_type3_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    check_no_pointer) {
        if(        left_type2_406->mPointerNum>0) {
            if(            right_type2_407->mPointerNum>0) {
                if(                string_operator_equals(left_type2_406->mClass->mName,"void")||string_operator_equals(right_type2_407->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type2_406->mClass->mName,"va_list")||string_operator_equals(right_type2_407->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                        info->err_num++;
                        __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value425=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 762, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value17,(char*)come_increment_ref_count(xsprintf("ERR")))));
                        come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value425,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result298__;
                    }
                    __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value427=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 764, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value427,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result299__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                    info->err_num++;
                    __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value430=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 775, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value18,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value430,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result300__;
                }
                __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value432=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 778, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value432,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
        }
        else if(        left_type2_406->mPointerNum==0&&right_type2_407->mPointerNum>0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result302__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value435=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 787, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value19,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value435,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result302__;
            }
            __result303__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value437=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 789, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value437,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
        else if(        left_type2_406->mPointerNum>0&&right_type2_407->mPointerNum==0&&string_operator_equals(right_type2_407->mClass->mName,"lambda")&&string_operator_equals(left_type2_406->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value440=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 799, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value20,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value440,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
            __result305__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value442=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 801, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value442,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
    }
    else if(    !left_type2_406->mNullValue&&right_type2_407->mNullValue) {
        if(        string_operator_equals(left_type2_406->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_407->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"va_list")||string_operator_equals(right_type2_407->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"void")&&right_type2_407->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value445=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 815, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value21,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value445,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result306__;
            }
            __result307__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value447=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 817, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value447,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result307__;
        }
        else {
            buf2_427=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 820, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(buf2_427,((char*)(__right_value454=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value450=string_to_string(come_value->c_value))),((char*)(__right_value451=string_to_string(info->sname))),((char*)(__right_value452=int_to_string(info->sline))),((char*)(__right_value453=int_to_string(gComeDebugStackFrameID++)))))));
            (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            __dec_obj116=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_427));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj117=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj118=right_type2_407;
            right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(buf2_427,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type2_406->mClass->mName,"char")&&left_type2_406->mPointerNum==1) {
        if(        string_operator_equals(right_type2_407->mClass->mName,"char")&&right_type2_407->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_407->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"va_list")||string_operator_equals(right_type2_407->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result308__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value460=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 844, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value22,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value460,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result308__;
            }
            __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value462=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 847, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value462,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result309__;
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"void")&&right_type2_407->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value465=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 857, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value23,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value465,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result310__;
            }
            __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value467=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 859, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value467,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result311__;
        }
        else if(        string_operator_not_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)&&!(left_type2_406->mPointerNum>0&&right_type2_407->mPointerNum==0)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value470=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 867, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value24,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value470,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
            __result313__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value472=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 869, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value472,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
    }
    else if(    string_operator_equals(left_type2_406->mClass->mName,"void")&&left_type2_406->mPointerNum==1) {
        if(        string_operator_equals(right_type2_407->mClass->mName,"void")&&right_type2_407->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_407->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"va_list")||string_operator_equals(right_type2_407->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"void")&&right_type2_407->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_407->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result314__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value475=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 889, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value25,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value475,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result314__;
            }
            __result315__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value477=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 891, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value477,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
        else if(        right_type2_407->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                    info->err_num++;
                    __result316__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value480=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 900, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value26,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value480,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result316__;
                }
            }
            else {
                tmp_428=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj119=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_428));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj120=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
                come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj121=right_type2_407;
                right_type2_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
                come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_428 = come_decrement_ref_count2(tmp_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_406->mPointerNum>0||(left_type2_406->mPointerNum==0&&left_type2_406->mClass->mStruct)) {
        if(        right_type2_407->mPointerNum>0||(right_type2_407->mPointerNum==0&&right_type2_407->mClass->mStruct)) {
            if(            string_operator_equals(left_type2_406->mClass->mName,"void")||string_operator_equals(right_type2_407->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_406->mClass->mName,"va_list")||string_operator_equals(right_type2_407->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type2_406->mClass->mName,right_type2_407->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                    info->err_num++;
                    __result317__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value487=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 925, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value27,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value487,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result317__;
                }
                __result318__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value489=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 927, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value489,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result318__;
            }
            else if(            int_operator_not_equals(left_type2_406->mPointerNum,right_type2_407->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
            }
            else if(            list$1sNodephp_length(right_type2_407->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum,list$1sNodephp_length(left_type2_406->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum,list$1sNodephp_length(right_type2_407->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"void")||string_operator_equals(right_type2_407->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"va_list")||string_operator_equals(right_type2_407->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_407->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_406->mClass->mName,"lambda")&&string_operator_equals(right_type2_407->mClass->mName,"lambda")) {
        }
        else if(        left_type2_406->mPointerNum>0&&right_type2_407->mPointerNum==0&&string_operator_equals(right_type2_407->mClass->mName,"lambda")&&string_operator_equals(left_type2_406->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result319__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value492=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 954, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value28,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value492,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result319__;
            }
            __result320__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value494=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 957, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0))));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value494,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result320__;
        }
        else if(        left_type2_406->mPointerNum>0&&!(string_operator_equals(right_type2_407->mClass->mName,"lambda")&&string_operator_equals(left_type2_406->mClass->mName,"lambda"))&&right_type2_407->mPointerNum==0) {
            tmp_429=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj122=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_429));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_406));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result321__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value499=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 963, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0))));
            (tmp_429 = come_decrement_ref_count2(tmp_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value499,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result321__;
            (tmp_429 = come_decrement_ref_count2(tmp_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1voidphp_length(left_type2_406->mGenericsTypes)>0) {
            if(            list$1voidphp_length(left_type2_406->mGenericsTypes)!=list$1voidphp_length(right_type2_407->mGenericsTypes)) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_406->mClass->mName,left_type2_406->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_407->mClass->mName,right_type2_407->mPointerNum);
                info->err_num++;
                __result322__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value502=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 973, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value29,(char*)come_increment_ref_count(xsprintf("ERR")))));
                come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value502,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result322__;
            }
            for(            i_430=0;            i_430<list$1voidphp_length(left_type2_406->mGenericsTypes);            i_430++            ){
                multiple_assign_var6=((struct tuple2$2boolcharph*)(__right_value505=check_assign_type(msg,((struct sType*)((void*)(__right_value503=list$1voidphp_operator_load_element(left_type2_406->mGenericsTypes,i_430)))),((struct sType*)((void*)(__right_value504=list$1voidphp_operator_load_element(right_type2_407->mGenericsTypes,i_430)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_3_431=multiple_assign_var6->v1;
                Err_432=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_432)),                come_call_finalizer3(__right_value503,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                come_call_finalizer3(__right_value504,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                come_call_finalizer3(__right_value505,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional5) {
                    __result323__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolcharph*)(__right_value508=tuple2$2boolcharph_initialize((struct tuple2$2boolcharph*)come_increment_ref_count((struct tuple2$2boolcharph*)come_calloc(1, sizeof(struct tuple2$2boolcharph)*(1), "05type.c", 977, "struct tuple2$2boolcharph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value30,(char*)come_increment_ref_count(xsprintf("ERR")))));
                    (Err_432 = come_decrement_ref_count2(Err_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value508,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result323__;
                }
                else {
                }
                (Err_432 = come_decrement_ref_count2(Err_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    __result324__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2boolvoidp*)(__right_value510=tuple2$2boolvoidp_initialize((struct tuple2$2boolvoidp*)come_increment_ref_count((struct tuple2$2boolvoidp*)come_calloc(1, sizeof(struct tuple2$2boolvoidp)*(1), "05type.c", 983, "struct tuple2$2boolvoidp", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0))));
    come_call_finalizer3(left_type2_406,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value510,tuple2$2boolvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct tuple2$2boolcharph* tuple2$2boolcharph_initialize(struct tuple2$2boolcharph* self, _Bool v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj93;
struct tuple2$2boolcharph* __result277__;
    self->v1=v1;
    __dec_obj93=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2boolcharphp_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj94=self->v2;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2boolvoidp* tuple2$2boolvoidp_initialize(struct tuple2$2boolvoidp* self, _Bool v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2boolvoidp* __result286__;
    self->v1=v1;
    self->v2=v2;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2boolvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void tuple2$2boolvoidpp_finalize(struct tuple2$2boolvoidp* self){
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_416;
int i_417;
void* __result288__;
void* default_value_418;
void* __result289__;
default_value_418 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_416=self->head;
    i_417=0;
    while(it_416!=((void*)0)) {
        if(        position==i_417) {
            __result288__ = gComeFunResultObject = __result_obj__ = it_416->item;
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
        it_416=it_416->next;
        i_417++;
    }
    memset(&default_value_418,0,sizeof(void*));
    __result289__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_418);
    come_call_finalizer3(default_value_418,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
struct sType* result_type_433;
char* var_name_434;
char* p_435;
int sline_436;
void* __right_value512 = (void*)0;
char* word_437;
_Bool between_brace_438;
char* p_439;
int sline_440;
void* __right_value513 = (void*)0;
char* word_441;
void* __right_value514 = (void*)0;
char* __dec_obj124;
void* __right_value515 = (void*)0;
char* __dec_obj125;
_Bool no_comma_443;
void* __right_value516 = (void*)0;
struct sNode* node_444;
struct sNode* __dec_obj126;
char* p_445;
int sline_446;
void* __right_value517 = (void*)0;
char* word_447;
void* __right_value518 = (void*)0;
struct sNode* node_448;
void* __right_value522 = (void*)0;
char* attribute_452;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj130;
char* __dec_obj131;
void* __right_value525 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct tuple2$2sTypephcharph* __result329__;
    result_type_433=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_433->mPointerNum=result_type_433->mTypedefOriginalPointerNum;
    }
    var_name_434=((void*)0);
    {
        p_435=info->p;
        sline_436=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_437=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_437,"const")||string_operator_equals(word_437,"__restrict")||string_operator_equals(word_437,"restrict")||string_operator_equals(word_437,"__user")||string_operator_equals(word_437,"volatile")||string_operator_equals(word_437,"_Nonnull")||string_operator_equals(word_437,"_Nullable")||string_operator_equals(word_437,"_Null_unspecified")||string_operator_equals(word_437,"__user")||string_operator_equals(word_437,"_Addr")) {
            }
            else {
                info->p=p_435;
                info->sline=sline_436;
            }
            (word_437 = come_decrement_ref_count2(word_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_435;
            info->sline=sline_436;
        }
    }
    between_brace_438=(_Bool)0;
    {
        p_439=info->p;
        sline_440=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_441=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_441,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_438=(_Bool)1;
                    }
                }
                (word_441 = come_decrement_ref_count2(word_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_439;
        info->sline=sline_440;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_433->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_438&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj124=var_name_434;
        var_name_434=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_442=0;
        num_anonymous_var_name_442++;
        __dec_obj125=var_name_434;
        var_name_434=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_442));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_438&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_443=info->no_comma;
        info->no_comma=(_Bool)1;
        node_444=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_443;
        __dec_obj126=result_type_433->mSizeNum;
        result_type_433->mSizeNum=(struct sNode*)come_increment_ref_count(node_444);
        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
        ((node_444) ? node_444 = come_decrement_ref_count2(node_444, ((struct sNode*)node_444)->finalize, ((struct sNode*)node_444)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_445=info->p;
            sline_446=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_447=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_447,"const")||string_operator_equals(word_447,"__restrict")||string_operator_equals(word_447,"restrict")||string_operator_equals(word_447,"__user")||string_operator_equals(word_447,"volatile")||string_operator_equals(word_447,"_Nonnull")||string_operator_equals(word_447,"_Nullable")||string_operator_equals(word_447,"_Null_unspecified")||string_operator_equals(word_447,"__user")||string_operator_equals(word_447,"_Addr")) {
                }
                else {
                    info->p=p_445;
                    info->sline=sline_446;
                }
                (word_447 = come_decrement_ref_count2(word_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_445;
                info->sline=sline_446;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_433->mArrayPointerType=(_Bool)1;
            result_type_433->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_448=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(result_type_433->mArrayNum,(struct sNode*)come_increment_ref_count(node_448));
        parse_sharp_v5(info);
        result_type_433->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_448) ? node_448 = come_decrement_ref_count2(node_448, ((struct sNode*)node_448)->finalize, ((struct sNode*)node_448)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    attribute_452=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_452,"")) {
        if(        result_type_433->mAttribute) {
            __dec_obj130=result_type_433->mAttribute;
            result_type_433->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_433->mAttribute,((char*)(__right_value523=charp_operator_add(" ",attribute_452)))));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        }
        else {
            __dec_obj131=result_type_433->mAttribute;
            result_type_433->mAttribute=(char*)come_increment_ref_count(attribute_452);
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value525=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value525,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result329__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value530=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1145, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(result_type_433),(char*)come_increment_ref_count(var_name_434))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_434 = come_decrement_ref_count2(var_name_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_452 = come_decrement_ref_count2(attribute_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value530,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value519 = (void*)0;
struct list_item$1sNodeph* litem_449;
struct sNode* __dec_obj127;
void* __right_value520 = (void*)0;
struct list_item$1sNodeph* litem_450;
struct sNode* __dec_obj128;
void* __right_value521 = (void*)0;
struct list_item$1sNodeph* litem_451;
struct sNode* __dec_obj129;
struct list$1sNodeph* __result325__;
    if(    self->len==0) {
        litem_449=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value519=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=((void*)0);
        litem_449->next=((void*)0);
        __dec_obj127=litem_449->item;
        litem_449->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_449;
        self->head=litem_449;
    }
    else if(    self->len==1) {
        litem_450=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value520=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_450->prev=self->head;
        litem_450->next=((void*)0);
        __dec_obj128=litem_450->item;
        litem_450->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_450;
        self->head->next=litem_450;
    }
    else {
        litem_451=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value521=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=self->tail;
        litem_451->next=((void*)0);
        __dec_obj129=litem_451->item;
        litem_451->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_451;
        self->tail=litem_451;
    }
    self->len++;
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj132;
char* __dec_obj133;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj132=self->v1;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj133=self->v2;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj134;
char* __dec_obj135;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj134=self->v1;
            come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj135=self->v2;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result326__;
void* __right_value526 = (void*)0;
struct tuple2$2sTypephcharph* result_453;
void* __right_value527 = (void*)0;
struct sType* __dec_obj136;
void* __right_value528 = (void*)0;
char* __dec_obj137;
struct tuple2$2sTypephcharph* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_453=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj136=result_453->v1;
        result_453->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj137=result_453->v2;
        result_453->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_453;
    come_call_finalizer3(result_453,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_454;
    result_454=0;
    result_454+=int_get_hash_key(((int)self->v1));
    result_454+=int_get_hash_key(((int)self->v2));
    return result_454;
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
struct sType* __dec_obj138;
char* __dec_obj139;
struct tuple2$2sTypephcharph* __result328__;
    __dec_obj138=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj139=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj140=self->v1;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj141=self->v2;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_455;
int sline_456;
void* __right_value531 = (void*)0;
char* word_457;
int nest_458;
    p_455=info->p;
    sline_456=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_457=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_457,"__attribute")||string_operator_equals(word_457,"__attribute__"))&&*info->p==40) {
            nest_458=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_458++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_458--;
                    if(                    nest_458==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_457,"const")||string_operator_equals(word_457,"__restrict")||string_operator_equals(word_457,"restrict")||string_operator_equals(word_457,"__user")||string_operator_equals(word_457,"volatile")||string_operator_equals(word_457,"_Nonnull")||string_operator_equals(word_457,"_Nullable")||string_operator_equals(word_457,"__nonnull")||string_operator_equals(word_457,"_Null_unspecified")||string_operator_equals(word_457,"__user")||string_operator_equals(word_457,"_Addr")||string_operator_equals(word_457,"__noreturn")||string_operator_equals(word_457,"_noreturn")||string_operator_equals(word_457,"_Noreturn")) {
        }
        else {
            info->p=p_455;
            info->sline=sline_456;
        }
        (word_457 = come_decrement_ref_count2(word_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_455;
        info->sline=sline_456;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_459;
void* __right_value532 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* type_460=0;
char* name_461=0;
_Bool err_462=0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct tuple3$3sTypephcharphbool* __result333__;
    no_output_err_459=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value532=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_460=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    name_461=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_462=multiple_assign_var7->v3;
    come_call_finalizer3(__right_value532,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_459;
    __result333__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value537=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1202, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type_460),(char*)come_increment_ref_count(name_461),err_462)));
    come_call_finalizer3(type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value537,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj142;
char* __dec_obj143;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj142=self->v1;
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj143=self->v2;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphbool* __result330__;
void* __right_value533 = (void*)0;
struct tuple3$3sTypephcharphbool* result_463;
void* __right_value534 = (void*)0;
struct sType* __dec_obj144;
void* __right_value535 = (void*)0;
char* __dec_obj145;
struct tuple3$3sTypephcharphbool* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_463=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "tuple3$3sTypephcharphbool_clone", 3, "struct tuple3$3sTypephcharphbool*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj144=result_463->v1;
        result_463->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj145=result_463->v2;
        result_463->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_463->v3=self->v3;
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_463;
    come_call_finalizer3(result_463,tuple3$3sTypephcharphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self){
unsigned int result_464;
    result_464=0;
    result_464+=int_get_hash_key(((int)self->v1));
    result_464+=int_get_hash_key(((int)self->v2));
    result_464+=int_get_hash_key(((int)self->v3));
    return result_464;
}

static _Bool tuple3$3sTypephcharphbool_equals(struct tuple3$3sTypephcharphbool* left, struct tuple3$3sTypephcharphbool* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj146;
char* __dec_obj147;
struct tuple3$3sTypephcharphbool* __result332__;
    __dec_obj146=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj147=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result332__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_465;
int head_sline_466;
void* __right_value538 = (void*)0;
char* type_name_467;
_Bool record__468;
_Bool exception__469;
_Bool constant_470;
_Bool static__471;
_Bool volatile__472;
_Bool register__473;
_Bool unsigned__474;
_Bool long__475;
_Bool long_long_476;
_Bool short__477;
_Bool restrict__478;
_Bool struct__479;
_Bool union__480;
_Bool enum__481;
_Bool no_heap_482;
_Bool extern__483;
_Bool inline__484;
_Bool uniq__485;
_Bool tuple__486;
_Bool generate__487;
struct sNode* alignas__488;
_Bool anonymous_type_489;
_Bool anonymous_name_490;
_Bool atomic__491;
_Bool object_interface_492;
void* __right_value539 = (void*)0;
char* __dec_obj148;
void* __right_value540 = (void*)0;
char* __dec_obj149;
void* __right_value541 = (void*)0;
char* __dec_obj150;
int brace_num_493;
void* __right_value542 = (void*)0;
char* __dec_obj151;
int brace_num_494;
void* __right_value543 = (void*)0;
char* __dec_obj152;
void* __right_value544 = (void*)0;
char* __dec_obj153;
void* __right_value545 = (void*)0;
char* __dec_obj154;
void* __right_value546 = (void*)0;
char* __dec_obj155;
void* __right_value547 = (void*)0;
char* __dec_obj156;
void* __right_value548 = (void*)0;
struct sNode* exp_495;
struct sNode* __dec_obj157;
void* __right_value549 = (void*)0;
char* __dec_obj158;
void* __right_value550 = (void*)0;
char* __dec_obj159;
void* __right_value551 = (void*)0;
char* __dec_obj160;
void* __right_value552 = (void*)0;
char* __dec_obj161;
void* __right_value553 = (void*)0;
char* __dec_obj162;
void* __right_value554 = (void*)0;
char* __dec_obj163;
void* __right_value555 = (void*)0;
char* __dec_obj164;
void* __right_value556 = (void*)0;
char* __dec_obj165;
void* __right_value557 = (void*)0;
char* __dec_obj166;
void* __right_value558 = (void*)0;
char* __dec_obj167;
char* p_496;
int sline_497;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
char* __dec_obj168;
void* __right_value561 = (void*)0;
char* __dec_obj169;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
char* __dec_obj170;
char* p_498;
int sline_499;
void* __right_value564 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var8 = (void*)0;
int come_exception_var_c3_500=0;
char* Err_501=0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct tuple3$3sTypephcharphbool* __result334__;
char* p_502;
int sline_503;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct tuple3$3sTypephcharphbool* __result335__;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sNode* node_504;
_Bool Value_505;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct tuple3$3sTypephcharphbool* __result336__;
char* p_506;
int sline_507;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* __dec_obj171;
void* __right_value578 = (void*)0;
char* __dec_obj172;
void* __right_value579 = (void*)0;
char* __dec_obj173;
char* p_508;
int sline_509;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct tuple3$3sTypephcharphbool* __result337__;
void* __right_value583 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_510=0;
char* name_511=0;
_Bool err_512=0;
char* p_513;
int sline_514;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct tuple3$3sTypephcharphbool* __result338__;
void* __right_value588 = (void*)0;
char* __dec_obj174;
void* __right_value589 = (void*)0;
char* __dec_obj175;
void* __right_value590 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_515=0;
char* name_516=0;
_Bool err_517=0;
char* p_518;
int sline_519;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct tuple3$3sTypephcharphbool* __result339__;
char* p_520;
int sline_521;
void* __right_value594 = (void*)0;
char* __dec_obj176;
void* __right_value595 = (void*)0;
char* __dec_obj177;
void* __right_value596 = (void*)0;
char* __dec_obj178;
void* __right_value597 = (void*)0;
char* __dec_obj179;
void* __right_value598 = (void*)0;
char* __dec_obj180;
void* __right_value599 = (void*)0;
char* __dec_obj181;
void* __right_value600 = (void*)0;
char* __dec_obj182;
char* p_522;
int sline_523;
void* __right_value601 = (void*)0;
char* __dec_obj183;
char* p_524;
int sline_525;
void* __right_value602 = (void*)0;
char* __dec_obj184;
void* __right_value603 = (void*)0;
char* __dec_obj185;
void* __right_value604 = (void*)0;
char* __dec_obj186;
char* p_526;
int sline_527;
void* __right_value605 = (void*)0;
char* __dec_obj187;
void* __right_value606 = (void*)0;
char* __dec_obj188;
void* __right_value607 = (void*)0;
char* __dec_obj189;
void* __right_value608 = (void*)0;
char* __dec_obj190;
void* __right_value609 = (void*)0;
char* __dec_obj191;
void* __right_value610 = (void*)0;
char* __dec_obj192;
void* __right_value611 = (void*)0;
char* __dec_obj193;
void* __right_value612 = (void*)0;
char* __dec_obj194;
void* __right_value613 = (void*)0;
char* __dec_obj195;
void* __right_value614 = (void*)0;
char* __dec_obj196;
void* __right_value615 = (void*)0;
char* __dec_obj197;
char* p_528;
int sline_529;
void* __right_value616 = (void*)0;
char* __dec_obj198;
void* __right_value617 = (void*)0;
char* __dec_obj199;
void* __right_value618 = (void*)0;
char* attribute_530;
int pointer_num_531;
_Bool heap_532;
_Bool refference_533;
_Bool no_refference_534;
_Bool channel_535;
_Bool any_class_536;
_Bool vtable_537;
char* tuple_name_538;
void* __right_value619 = (void*)0;
char* __dec_obj200;
_Bool lambda_flag_539;
char* pX_540;
int slineX_541;
void* __right_value620 = (void*)0;
struct sType* type_542;
char* var_name_543;
_Bool function_pointer_flag_544;
char* p_545;
int sline_546;
void* __right_value621 = (void*)0;
char* word_547;
_Bool var_name_between_brace_548;
char* p_549;
int sline_550;
void* __right_value622 = (void*)0;
char* word_551;
void* __right_value623 = (void*)0;
char* __dec_obj201;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* node_553;
_Bool Value_554;
void* __right_value626 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var11 = (void*)0;
int come_exception_var_c4_555=0;
char* Err_556=0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct tuple3$3sTypephcharphbool* __result340__;
int pointer_num_557;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sType* __dec_obj202;
void* __right_value631 = (void*)0;
char* __dec_obj203;
void* __right_value632 = (void*)0;
struct sNode* node_558;
_Bool Value_559;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct tuple3$3sTypephcharphbool* __result341__;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sType* __dec_obj204;
void* __right_value637 = (void*)0;
char* __dec_obj205;
void* __right_value638 = (void*)0;
struct sNode* node_560;
_Bool Value_561;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct tuple3$3sTypephcharphbool* __result342__;
int pointer_num_562;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* __dec_obj206;
void* __right_value643 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var12 = (void*)0;
int come_exception_var_c5_563=0;
char* Err_564=0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct tuple3$3sTypephcharphbool* __result343__;
void* __right_value646 = (void*)0;
char* attribute_565;
char* __dec_obj207;
void* __right_value647 = (void*)0;
char* __dec_obj208;
void* __right_value648 = (void*)0;
char* __dec_obj209;
void* __right_value649 = (void*)0;
char* __dec_obj210;
void* __right_value650 = (void*)0;
char* __dec_obj211;
_Bool no_comma_568;
void* __right_value651 = (void*)0;
struct sNode* node_569;
struct sNode* __dec_obj212;
void* __right_value652 = (void*)0;
char* attribute2_570;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
char* __dec_obj213;
char* __dec_obj214;
struct sType* result_type_571;
void* __right_value655 = (void*)0;
_Bool _if_conditional6;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* __dec_obj215;
void* __right_value658 = (void*)0;
int i_572;
void* __right_value659 = (void*)0;
_Bool _if_conditional7;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* __dec_obj216;
int i_576;
void* __right_value663 = (void*)0;
_Bool _if_conditional8;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sType* __dec_obj217;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* __dec_obj218;
struct sNode* __dec_obj219;
void* __right_value669 = (void*)0;
char* __dec_obj220;
void* __right_value670 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var13 = (void*)0;
struct list$1voidph* param_types_577=0;
struct list$1charph* param_names_578=0;
struct list$1charph* param_default_parametors_579=0;
_Bool var_args_580=0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sType* __dec_obj221;
struct sType* __dec_obj222;
struct list$1voidph* __dec_obj223;
struct list$1charph* __dec_obj224;
int function_pointer_num_581;
struct sType* result_type_582;
void* __right_value673 = (void*)0;
_Bool _if_conditional9;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* __dec_obj225;
void* __right_value676 = (void*)0;
int i_583;
void* __right_value677 = (void*)0;
_Bool _if_conditional10;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* __dec_obj226;
int i_584;
void* __right_value681 = (void*)0;
_Bool _if_conditional11;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sType* __dec_obj227;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sType* __dec_obj228;
struct sNode* __dec_obj229;
void* __right_value687 = (void*)0;
char* __dec_obj230;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct tuple3$3sTypephcharphbool* __result346__;
void* __right_value690 = (void*)0;
char* __dec_obj231;
_Bool function_pointer_array_586;
int function_pointer_array_num_587;
int n_588;
void* __right_value691 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var14 = (void*)0;
struct list$1voidph* param_types_589=0;
struct list$1charph* param_names_590=0;
struct list$1charph* param_default_parametors_591=0;
_Bool var_args_592=0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sType* __dec_obj232;
void* __right_value694 = (void*)0;
struct sType* __dec_obj233;
struct list$1voidph* __dec_obj234;
struct list$1charph* __dec_obj235;
void* __right_value695 = (void*)0;
struct sNode* exp_593;
_Bool Value_594;
void* __right_value696 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var15 = (void*)0;
int come_exception_var_c6_595=0;
char* Err_596=0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct tuple3$3sTypephcharphbool* __result347__;
void* __right_value699 = (void*)0;
struct CVALUE* come_value_597;
void* __right_value700 = (void*)0;
struct sType* __dec_obj236;
void* __right_value701 = (void*)0;
char* attribute_598;
char* __dec_obj237;
void* __right_value702 = (void*)0;
char* __dec_obj238;
void* __right_value703 = (void*)0;
char* __dec_obj239;
void* __right_value704 = (void*)0;
char* __dec_obj240;
void* __right_value705 = (void*)0;
char* __dec_obj241;
_Bool no_comma_601;
void* __right_value706 = (void*)0;
struct sNode* node_602;
struct sNode* __dec_obj242;
void* __right_value707 = (void*)0;
char* attribute2_603;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
char* __dec_obj243;
char* __dec_obj244;
void* __right_value710 = (void*)0;
_Bool _if_conditional12;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* __dec_obj249;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
char* __dec_obj250;
struct sNode* __dec_obj251;
char* __dec_obj252;
int i_604;
void* __right_value715 = (void*)0;
_Bool _if_conditional13;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sType* __dec_obj253;
struct sNode* __dec_obj254;
char* __dec_obj255;
int i_605;
void* __right_value719 = (void*)0;
_Bool _if_conditional14;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sType* __dec_obj256;
struct sNode* __dec_obj257;
char* __dec_obj258;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
_Bool _if_conditional15;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct tuple3$3sTypephcharphbool* __result348__;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* __dec_obj259;
void* __right_value729 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* generics_type_606=0;
char* var_name_607=0;
_Bool err_608=0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct tuple3$3sTypephcharphbool* __result349__;
void* __right_value732 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var17 = (void*)0;
int come_exception_var_c7_609=0;
char* Err_610=0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct tuple3$3sTypephcharphbool* __result350__;
void* __right_value735 = (void*)0;
struct sType* __dec_obj260;
void* __right_value736 = (void*)0;
char* new_name_611;
struct sNode* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
void* __right_value737 = (void*)0;
struct sClass* klass_612;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sClass* klass_659;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sType* __dec_obj272;
struct sNode* __dec_obj273;
char* __dec_obj274;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1voidph* types_660;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18 = (void*)0;
struct sType* type2_661=0;
char* name_662=0;
_Bool err_663=0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct tuple3$3sTypephcharphbool* __result375__;
void* __right_value764 = (void*)0;
int num_tuples_664;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sType* __dec_obj275;
struct list$1voidph* o2_saved_665;
struct sType* it_666;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sType* __dec_obj276;
void* __right_value770 = (void*)0;
char* new_name_667;
char* __dec_obj277;
void* __right_value771 = (void*)0;
char* attribute_668;
char* __dec_obj278;
void* __right_value772 = (void*)0;
char* __dec_obj279;
void* __right_value773 = (void*)0;
char* __dec_obj280;
void* __right_value774 = (void*)0;
char* __dec_obj281;
void* __right_value775 = (void*)0;
char* __dec_obj282;
_Bool no_comma_671;
void* __right_value776 = (void*)0;
struct sNode* node_672;
struct sNode* __dec_obj283;
void* __right_value777 = (void*)0;
char* attribute2_673;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
char* __dec_obj284;
char* __dec_obj285;
void* __right_value780 = (void*)0;
struct sNode* node_674;
void* __right_value781 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var19 = (void*)0;
char* asm_name_675=0;
char* attribute2_676=0;
char* __dec_obj286;
char* __dec_obj287;
void* __right_value782 = (void*)0;
struct sType* type_before_677;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sType* __dec_obj288;
void* __right_value785 = (void*)0;
struct sNode* __list_values1___678[1];
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct list$1sNodeph* __dec_obj289;
struct sType* __dec_obj290;
void* __right_value789 = (void*)0;
struct sType* type_before_682;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sType* __dec_obj291;
struct sType* __dec_obj292;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* type2_683;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sType* type3_689;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sType* type4_690;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct tuple3$3sTypephcharphbool* __result381__;
char* __dec_obj294;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct tuple3$3sTypephcharphbool* __result382__;
type_542 = (void*)0;
var_name_543 = (void*)0;
result_type_571 = (void*)0;
result_type_582 = (void*)0;
    head_465=info->p;
    head_sline_466=info->sline;
    info->define_struct=(_Bool)0;
    type_name_467=(char*)come_increment_ref_count(parse_word(info));
    record__468=(_Bool)0;
    exception__469=(_Bool)0;
    constant_470=(_Bool)0;
    static__471=(_Bool)0;
    volatile__472=(_Bool)0;
    register__473=(_Bool)0;
    unsigned__474=(_Bool)0;
    long__475=(_Bool)0;
    long_long_476=(_Bool)0;
    short__477=(_Bool)0;
    restrict__478=(_Bool)0;
    struct__479=(_Bool)0;
    union__480=(_Bool)0;
    enum__481=(_Bool)0;
    no_heap_482=(_Bool)0;
    extern__483=(_Bool)0;
    inline__484=(_Bool)0;
    uniq__485=(_Bool)0;
    tuple__486=(_Bool)0;
    generate__487=(_Bool)0;
    alignas__488=((void*)0);
    anonymous_type_489=(_Bool)0;
    anonymous_name_490=(_Bool)0;
    atomic__491=(_Bool)0;
    object_interface_492=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_467,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_492=(_Bool)1;
            __dec_obj148=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj149=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__491=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_467,"__extension__")) {
            __dec_obj150=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_493=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_493++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_493--;
                        if(                        brace_num_493==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj151=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"__declspec")) {
            if(            *info->p==40) {
                brace_num_494=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_494++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_494--;
                        if(                        brace_num_494==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj152=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"_Noreturn")) {
            __dec_obj153=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"__noreturn")) {
            __dec_obj154=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"_Nullable")) {
            __dec_obj155=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"_noreturn")) {
            __dec_obj156=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"_Alignas")) {
            expected_next_character(40,info);
            exp_495=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj157=alignas__488;
            alignas__488=(struct sNode*)come_increment_ref_count(exp_495);
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj158=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            ((exp_495) ? exp_495 = come_decrement_ref_count2(exp_495, ((struct sNode*)exp_495)->finalize, ((struct sNode*)exp_495)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        string_operator_equals(type_name_467,"const")) {
            constant_470=(_Bool)1;
            __dec_obj159=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"static")) {
            static__471=(_Bool)1;
            __dec_obj160=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"uniq")) {
            uniq__485=(_Bool)1;
            __dec_obj161=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"record")) {
            record__468=(_Bool)1;
            __dec_obj162=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"exception")) {
            exception__469=(_Bool)1;
            __dec_obj163=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"extern")) {
            extern__483=(_Bool)1;
            __dec_obj164=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"inline")||string_operator_equals(type_name_467,"__inline")||string_operator_equals(type_name_467,"__inline__")||string_operator_equals(type_name_467,"__always_inline")||string_operator_equals(type_name_467,"__forceinline")) {
            inline__484=(_Bool)1;
            __dec_obj165=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"volatile")) {
            volatile__472=(_Bool)1;
            __dec_obj166=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"generate")) {
            generate__487=(_Bool)1;
            __dec_obj167=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"struct")) {
            struct__479=(_Bool)1;
            if(            *info->p==123) {
                p_496=info->p;
                sline_497=info->sline;
                ((char*)(__right_value559=skip_block(info)));
                (__right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                *info->p==59) {
                    anonymous_name_490=(_Bool)1;
                    anonymous_type_489=(_Bool)1;
                    __dec_obj168=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_496;
                    info->sline=sline_497;
                    break;
                }
                else {
                    anonymous_type_489=(_Bool)1;
                    __dec_obj169=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_496;
                    info->sline=sline_497;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value562=parse_struct_attribute(info)));
                (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                __dec_obj170=type_name_467;
                type_name_467=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_498=info->p;
                    sline_499=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_498;
                                info->sline=sline_499;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var8=((struct tuple2$2intcharph*)(__right_value564=err_msg(info,"invalid struct definition")));
                            come_exception_var_c3_500=multiple_assign_var8->v1;
                            Err_501=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                            ((Err_501)?(puts(Err_501),exit(0)):(0));
                            come_call_finalizer3(__right_value564,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            __result334__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value566=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1437, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                            come_call_finalizer3(__right_value566,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result334__;
                            (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_502=info->p;
                    sline_503=info->sline;
                    ((char*)(__right_value567=skip_block(info)));
                    (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (void)((char*)(__right_value568=parse_struct_attribute(info)));
                    (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    if(                    *info->p==59) {
                        info->p=head_465;
                        info->sline=head_sline_466;
                        info->define_struct=(_Bool)1;
                        __result335__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value570=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1457, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(__right_value570,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result335__;
                    }
                    else {
                        info->p=p_502;
                        info->sline=sline_503;
                        node_504=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_467),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_505=node_compile(node_504,info);
                        if(                        !Value_505) {
                            __result336__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value574=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1469, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            ((node_504) ? node_504 = come_decrement_ref_count2(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                            (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                            come_call_finalizer3(__right_value574,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result336__;
                        }
                        else {
                        }
                        ((node_504) ? node_504 = come_decrement_ref_count2(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        break;
                        ((node_504) ? node_504 = come_decrement_ref_count2(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_467,"union")) {
            union__480=(_Bool)1;
            if(            *info->p==123) {
                p_506=info->p;
                sline_507=info->sline;
                ((char*)(__right_value575=skip_block(info)));
                (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value576=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value576,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_465;
                    info->sline=head_sline_466;
                    info->define_struct=(_Bool)0;
                    anonymous_type_489=(_Bool)1;
                    __dec_obj171=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_506;
                    info->sline=sline_507;
                    break;
                }
                else {
                    anonymous_type_489=(_Bool)1;
                    __dec_obj172=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_506;
                    info->sline=sline_507;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj173=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_508=info->p;
                sline_509=info->sline;
                ((char*)(__right_value580=skip_block(info)));
                (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                *info->p==59) {
                    info->p=head_465;
                    info->sline=head_sline_466;
                    info->define_struct=(_Bool)1;
                    __result337__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value582=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1526, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(__right_value582,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result337__;
                }
                else {
                    anonymous_type_489=(_Bool)1;
                    info->p=p_508;
                    info->sline=sline_509;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_467,"enum")) {
            enum__481=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value583=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_510=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_511=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_512=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value583,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_511 = come_decrement_ref_count2(name_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_513=info->p;
                sline_514=info->sline;
                ((char*)(__right_value584=skip_block(info)));
                (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value585=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value585,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_465;
                    info->sline=head_sline_466;
                    info->define_struct=(_Bool)1;
                    __result338__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value587=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1564, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(__right_value587,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result338__;
                }
                else {
                    anonymous_type_489=(_Bool)1;
                    __dec_obj174=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_513;
                    info->sline=sline_514;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj175=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value590=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_515=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                name_516=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                err_517=multiple_assign_var10->v3;
                come_call_finalizer3(__right_value590,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_518=info->p;
                sline_519=info->sline;
                ((char*)(__right_value591=skip_block(info)));
                (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                *info->p==59) {
                    info->p=head_465;
                    info->sline=head_sline_466;
                    info->define_struct=(_Bool)1;
                    __result339__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value593=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1600, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(__right_value593,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result339__;
                }
                else {
                    anonymous_type_489=(_Bool)1;
                    info->p=p_518;
                    info->sline=sline_519;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_467,"long")) {
            {
                p_520=info->p;
                sline_521=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_520;
                    info->sline=sline_521;
                    __dec_obj176=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj177=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_467,"unsigned")) {
                        __dec_obj178=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_467,"int")) {
                            long__475=(_Bool)1;
                            unsigned__474=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_467,"signed")) {
                        __dec_obj179=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_467,"int")) {
                            long__475=(_Bool)1;
                            unsigned__474=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_467,"long")) {
                        p_520=info->p;
                        sline_521=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_476=(_Bool)1;
                            __dec_obj180=type_name_467;
                            type_name_467=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__475=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_467,"int")) {
                            long_long_476=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_467,info)) {
                            __dec_obj181=type_name_467;
                            type_name_467=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_476=(_Bool)1;
                            info->p=p_520;
                            info->sline=sline_521;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_467,info)) {
                        if(                        long__475) {
                            long_long_476=(_Bool)1;
                            long__475=(_Bool)0;
                        }
                        else {
                            long__475=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_520;
                        info->sline=sline_521;
                        __dec_obj182=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_467,"unsigned")) {
            unsigned__474=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_522=info->p;
                sline_523=info->sline;
                __dec_obj183=type_name_467;
                type_name_467=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_467,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_524=info->p;
                        sline_525=info->sline;
                        __dec_obj184=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_467,info)) {
                            short__477=(_Bool)1;
                        }
                        else {
                            short__477=(_Bool)1;
                            __dec_obj185=type_name_467;
                            type_name_467=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_524;
                            info->sline=sline_525;
                        }
                    }
                    else {
                        short__477=(_Bool)1;
                        __dec_obj186=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_467,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_526=info->p;
                        sline_527=info->sline;
                        __dec_obj187=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_467,info)) {
                            long__475=(_Bool)1;
                        }
                        else {
                            long__475=(_Bool)1;
                            __dec_obj188=type_name_467;
                            type_name_467=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_526;
                            info->sline=sline_527;
                        }
                    }
                    else {
                        long__475=(_Bool)1;
                        __dec_obj189=type_name_467;
                        type_name_467=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_467,info)) {
                    __dec_obj190=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_522;
                    info->sline=sline_523;
                    break;
                }
            }
            else {
                __dec_obj191=type_name_467;
                type_name_467=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_467,"signed")||string_operator_equals(type_name_467,"__signed__")) {
            unsigned__474=(_Bool)0;
            __dec_obj192=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"register")) {
            register__473=(_Bool)1;
            __dec_obj193=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"restrict")) {
            restrict__478=(_Bool)1;
            __dec_obj194=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"_Addr")) {
            __dec_obj195=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"__restrict")) {
            restrict__478=(_Bool)1;
            __dec_obj196=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_467,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj197=type_name_467;
            type_name_467=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__486=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_467,"short")) {
            short__477=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_528=info->p;
                sline_529=info->sline;
                __dec_obj198=type_name_467;
                type_name_467=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_467,"int")) {
                    short__477=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_467,"short")) {
                    short__477=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_467,info)) {
                    info->p=p_528;
                    info->sline=sline_529;
                }
                else {
                    __dec_obj199=type_name_467;
                    type_name_467=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_528;
                    info->sline=sline_529;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_530=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_531=0;
    heap_532=(_Bool)0;
    refference_533=(_Bool)0;
    no_refference_534=(_Bool)0;
    channel_535=(_Bool)0;
    any_class_536=(_Bool)0;
    vtable_537=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_531++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_537=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_536=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_532=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_535=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_538=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__486) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj200=tuple_name_538;
        tuple_name_538=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__491) {
        expected_next_character(41,info);
    }
    lambda_flag_539=(_Bool)0;
    {
        pX_540=info->p;
        slineX_541=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value620=parse_word(info)));
            (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_539=(_Bool)1;
            }
        }
        info->p=pX_540;
        info->sline=slineX_541;
    }
    function_pointer_flag_544=(_Bool)0;
    {
        p_545=info->p;
        sline_546=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_544=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_547=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_544=(_Bool)1;
                    }
                }
                (word_547 = come_decrement_ref_count2(word_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_545;
        info->sline=sline_546;
    }
    var_name_between_brace_548=(_Bool)0;
    {
        p_549=info->p;
        sline_550=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_551=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_551,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_548=(_Bool)1;
                    }
                }
                (word_551 = come_decrement_ref_count2(word_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_549;
        info->sline=sline_550;
    }
    if(    anonymous_type_489&&*info->p==123) {
        static int anonymous_num_552=0;
        if(        struct__479) {
            if(            string_operator_equals(type_name_467,"")) {
                __dec_obj201=type_name_467;
                type_name_467=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_552));
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_553=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_467),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_554=node_compile(node_553,info);
            if(            !Value_554) {
                multiple_assign_var11=((struct tuple2$2intcharph*)(__right_value626=err_msg(info,"parse_struct is failed")));
                come_exception_var_c4_555=multiple_assign_var11->v1;
                Err_556=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                ((Err_556)?(puts(Err_556),exit(0)):(0));
                come_call_finalizer3(__right_value626,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __result340__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value628=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2014, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                (Err_556 = come_decrement_ref_count2(Err_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_553) ? node_553 = come_decrement_ref_count2(node_553, ((struct sNode*)node_553)->finalize, ((struct sNode*)node_553)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value628,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result340__;
                (Err_556 = come_decrement_ref_count2(Err_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            pointer_num_557=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_557++;
            }
            __dec_obj202=type_542;
            type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2027, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_542->mPointerNum=pointer_num_557;
            ((node_553) ? node_553 = come_decrement_ref_count2(node_553, ((struct sNode*)node_553)->finalize, ((struct sNode*)node_553)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        enum__481) {
            if(            string_operator_equals(type_name_467,"")) {
                __dec_obj203=type_name_467;
                type_name_467=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_552));
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_558=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_467),info));
            if(            !info->no_output_err) {
                Value_559=node_compile(node_558,info);
                if(                !Value_559) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result341__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value634=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2041, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    ((node_558) ? node_558 = come_decrement_ref_count2(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value634,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result341__;
                }
                else {
                }
            }
            __dec_obj204=type_542;
            type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2045, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj204,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_558) ? node_558 = come_decrement_ref_count2(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        union__480) {
            if(            string_operator_equals(type_name_467,"")) {
                __dec_obj205=type_name_467;
                type_name_467=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_552));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_560=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_467),info));
            Value_561=node_compile(node_560,info);
            if(            !Value_561) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result342__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value640=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2057, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                ((node_560) ? node_560 = come_decrement_ref_count2(node_560, ((struct sNode*)node_560)->finalize, ((struct sNode*)node_560)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value640,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result342__;
            }
            else {
            }
            pointer_num_562=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_562++;
            }
            __dec_obj206=type_542;
            type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2071, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_542->mPointerNum=pointer_num_562;
            ((node_560) ? node_560 = come_decrement_ref_count2(node_560, ((struct sNode*)node_560)->finalize, ((struct sNode*)node_560)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            multiple_assign_var12=((struct tuple2$2intcharph*)(__right_value643=err_msg(info,"unexpected { character")));
            come_exception_var_c5_563=multiple_assign_var12->v1;
            Err_564=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            ((Err_564)?(puts(Err_564),exit(0)):(0));
            come_call_finalizer3(__right_value643,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            __result343__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value645=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2077, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value645,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result343__;
            (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        attribute_565=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_565,"")) {
            __dec_obj207=type_542->mAttribute;
            type_542->mAttribute=(char*)come_increment_ref_count(attribute_565);
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_548&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj208=var_name_543;
                var_name_543=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_490) {
                static int num_anonymous_var_name_566=0;
                num_anonymous_var_name_566++;
                __dec_obj209=var_name_543;
                var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_566));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj210=var_name_543;
                var_name_543=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_567=0;
                num_anonymous_var_name_567++;
                __dec_obj211=var_name_543;
                var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_567));
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_548&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_568=info->no_comma;
                info->no_comma=(_Bool)1;
                node_569=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_568;
                __dec_obj212=type_542->mSizeNum;
                type_542->mSizeNum=(struct sNode*)come_increment_ref_count(node_569);
                if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_569) ? node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            attribute2_570=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_565,"")&&string_operator_not_equals(attribute2_570,"")) {
                __dec_obj213=type_542->mAttribute;
                type_542->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_565,((char*)(__right_value653=charp_operator_add(" ",attribute2_570)))));
                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value653 = come_decrement_ref_count2(__right_value653, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            }
            else if(            string_operator_not_equals(attribute2_570,"")) {
                __dec_obj214=type_542->mAttribute;
                type_542->mAttribute=(char*)come_increment_ref_count(attribute2_570);
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_570 = come_decrement_ref_count2(attribute2_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_565 = come_decrement_ref_count2(attribute_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_539) {
        if(        (_if_conditional6=(((struct sType*)((void*)(__right_value655=map$2voidphvoidphp_operator_load_element(info->types,type_name_467)))))),        come_call_finalizer3(__right_value655,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional6) {
            __dec_obj215=result_type_571;
            result_type_571=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value656=map$2voidphvoidphp_operator_load_element(info->types,type_name_467))))));
            come_call_finalizer3(__dec_obj215,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value656,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            result_type_571->mClass=((struct sClass*)((void*)(__right_value658=map$2voidphvoidphp_operator_load_element(info->classes,result_type_571->mClass->mName))));
            come_call_finalizer3(__right_value658,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_467)) {
            for(            i_572=0;            i_572<list$1charphp_length(info->generics_type_names);            i_572++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)(__right_value659=list$1charphp_operator_load_element(info->generics_type_names,i_572))),type_name_467))),                (__right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                _if_conditional7) {
                    __dec_obj216=result_type_571;
                    result_type_571=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2145, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value661=xsprintf("generics_type%d",i_572))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj216,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_467)) {
            for(            i_576=0;            i_576<list$1charphp_length(info->method_generics_type_names);            i_576++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value663=list$1charphp_operator_load_element(info->method_generics_type_names,i_576))),type_name_467))),                (__right_value663 = come_decrement_ref_count2(__right_value663, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                _if_conditional8) {
                    __dec_obj217=result_type_571;
                    result_type_571=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2152, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value665=xsprintf("mgenerics_type%d",i_576))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj217,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
            }
        }
        else {
            __dec_obj218=result_type_571;
            result_type_571=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2157, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_571->mAtomic=result_type_571->mAtomic||atomic__491;
        result_type_571->mConstant=result_type_571->mConstant||constant_470;
        __dec_obj219=result_type_571->mAlignas;
        result_type_571->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
        if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_571->mRegister=register__473;
        result_type_571->mUnsigned=result_type_571->mUnsigned||unsigned__474;
        result_type_571->mVolatile=volatile__472;
        result_type_571->mGenerate=generate__487;
        result_type_571->mRecord=result_type_571->mRecord||record__468;
        result_type_571->mUniq=result_type_571->mUniq||uniq__485;
        result_type_571->mStatic=(result_type_571->mStatic||static__471)&&!result_type_571->mUniq;
        result_type_571->mException=result_type_571->mException||exception__469;
        result_type_571->mExtern=result_type_571->mExtern||extern__483;
        result_type_571->mInline=result_type_571->mInline||inline__484;
        result_type_571->mRestrict=result_type_571->mRestrict||restrict__478;
        result_type_571->mLongLong=result_type_571->mLongLong||long_long_476;
        result_type_571->mLong=result_type_571->mLong||long__475;
        result_type_571->mShort=result_type_571->mShort||short__477;
        result_type_571->mPointerNum=pointer_num_531;
        result_type_571->mHeap=result_type_571->mHeap||heap_532;
        result_type_571->mChannel=result_type_571->mChannel||channel_535;
        result_type_571->mAnyClass=result_type_571->mAnyClass||any_class_536;
        result_type_571->mCreateVTable=result_type_571->mCreateVTable||vtable_537;
        __dec_obj220=var_name_543;
        var_name_543=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var13=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value670=parse_params(info,(_Bool)0)));
        param_types_577=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var13->v1);
        param_names_578=(struct list$1charph*)come_increment_ref_count(multiple_assign_var13->v2);
        param_default_parametors_579=(struct list$1charph*)come_increment_ref_count(multiple_assign_var13->v3);
        var_args_580=multiple_assign_var13->v4;
        come_call_finalizer3(__right_value670,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj221=type_542;
        type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2187, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj221,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj222=type_542->mResultType;
        type_542->mResultType=(struct sType*)come_increment_ref_count(result_type_571);
        come_call_finalizer3(__dec_obj222,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj223=type_542->mParamTypes;
        type_542->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_577);
        come_call_finalizer3(__dec_obj223,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj224=type_542->mParamNames;
        type_542->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_578);
        come_call_finalizer3(__dec_obj224,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_542->mVarArgs=var_args_580;
        type_542->mExtern=extern__483;
        come_call_finalizer3(result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_577,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_578,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_579,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_544) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_581=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_581++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional9=(((struct sType*)((void*)(__right_value673=map$2voidphvoidphp_operator_load_element(info->types,type_name_467)))))),        come_call_finalizer3(__right_value673,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional9) {
            __dec_obj225=result_type_582;
            result_type_582=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value674=map$2voidphvoidphp_operator_load_element(info->types,type_name_467))))));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value674,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            result_type_582->mClass=((struct sClass*)((void*)(__right_value676=map$2voidphvoidphp_operator_load_element(info->classes,result_type_582->mClass->mName))));
            come_call_finalizer3(__right_value676,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_467)) {
            for(            i_583=0;            i_583<list$1charphp_length(info->generics_type_names);            i_583++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)(__right_value677=list$1charphp_operator_load_element(info->generics_type_names,i_583))),type_name_467))),                (__right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                _if_conditional10) {
                    __dec_obj226=result_type_582;
                    result_type_582=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2220, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value679=xsprintf("generics_type%d",i_583))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj226,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value679 = come_decrement_ref_count2(__right_value679, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_467)) {
            for(            i_584=0;            i_584<list$1charphp_length(info->method_generics_type_names);            i_584++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value681=list$1charphp_operator_load_element(info->method_generics_type_names,i_584))),type_name_467))),                (__right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                _if_conditional11) {
                    __dec_obj227=result_type_582;
                    result_type_582=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2227, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value683=xsprintf("mgenerics_type%d",i_584))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj227,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
            }
        }
        else {
            __dec_obj228=result_type_582;
            result_type_582=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2232, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_582->mConstant=result_type_582->mConstant||constant_470;
        result_type_582->mAtomic=result_type_582->mAtomic||atomic__491;
        __dec_obj229=result_type_582->mAlignas;
        result_type_582->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
        if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_582->mRegister=register__473;
        result_type_582->mUnsigned=result_type_582->mUnsigned||unsigned__474;
        result_type_582->mVolatile=volatile__472;
        result_type_582->mGenerate=generate__487;
        result_type_582->mUniq=result_type_582->mUniq||uniq__485;
        result_type_582->mStatic=(result_type_582->mStatic||static__471)&&!result_type_582->mUniq;
        result_type_582->mRecord=result_type_582->mRecord||record__468;
        result_type_582->mException=result_type_582->mException||exception__469;
        result_type_582->mExtern=result_type_582->mExtern||extern__483;
        result_type_582->mInline=result_type_582->mInline||inline__484;
        result_type_582->mRestrict=result_type_582->mRestrict||restrict__478;
        result_type_582->mLongLong=result_type_582->mLongLong||long_long_476;
        result_type_582->mLong=result_type_582->mLong||long__475;
        result_type_582->mShort=result_type_582->mShort||short__477;
        result_type_582->mPointerNum+=pointer_num_531;
        result_type_582->mHeap=result_type_582->mHeap||heap_532;
        result_type_582->mChannel=result_type_582->mChannel||channel_535;
        result_type_582->mAnyClass=result_type_582->mAnyClass||any_class_536;
        result_type_582->mCreateVTable=result_type_582->mCreateVTable||vtable_537;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj230=var_name_543;
            var_name_543=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result346__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value689=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2261, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(result_type_582),(char*)come_increment_ref_count(var_name_543),(_Bool)0)));
                come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value689,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result346__;
            }
        }
        else {
            static int num_anonymous_var_name_585=0;
            num_anonymous_var_name_585++;
            __dec_obj231=var_name_543;
            var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_585));
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_586=(_Bool)0;
        function_pointer_array_num_587=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_588=0;
            while(xisdigit(*info->p)) {
                n_588=n_588*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_587=n_588;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_586=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var14=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value691=parse_params(info,(_Bool)0)));
        param_types_589=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var14->v1);
        param_names_590=(struct list$1charph*)come_increment_ref_count(multiple_assign_var14->v2);
        param_default_parametors_591=(struct list$1charph*)come_increment_ref_count(multiple_assign_var14->v3);
        var_args_592=multiple_assign_var14->v4;
        come_call_finalizer3(__right_value691,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj232=type_542;
        type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2293, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj233=type_542->mResultType;
        type_542->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_582));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj234=type_542->mParamTypes;
        type_542->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_589);
        come_call_finalizer3(__dec_obj234,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj235=type_542->mParamNames;
        type_542->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_590);
        come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_542->mVarArgs=var_args_592;
        type_542->mExtern=extern__483;
        if(        function_pointer_array_586) {
            type_542->mLambdaArray=(_Bool)1;
            type_542->mLambdaArrayNum=function_pointer_array_num_587;
        }
        type_542->mFunctionPointerNum=function_pointer_num_581;
        come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_589,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_591,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_467,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_593=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_594=node_compile(exp_593,info);
        if(        !Value_594) {
            multiple_assign_var15=((struct tuple2$2intcharph*)(__right_value696=err_msg(info,"invalid __typeof__ expression")));
            come_exception_var_c6_595=multiple_assign_var15->v1;
            Err_596=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            ((Err_596)?(puts(Err_596),exit(0)):(0));
            come_call_finalizer3(__right_value696,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            __result347__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value698=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2317, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            (Err_596 = come_decrement_ref_count2(Err_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_593) ? exp_593 = come_decrement_ref_count2(exp_593, ((struct sNode*)exp_593)->finalize, ((struct sNode*)exp_593)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value698,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result347__;
            (Err_596 = come_decrement_ref_count2(Err_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        come_value_597=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj236=type_542;
        type_542=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_597->type));
        come_call_finalizer3(__dec_obj236,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_598=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_598,"")) {
            __dec_obj237=type_542->mAttribute;
            type_542->mAttribute=(char*)come_increment_ref_count(attribute_598);
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_548&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj238=var_name_543;
                var_name_543=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_490) {
                static int num_anonymous_var_name_599=0;
                num_anonymous_var_name_599++;
                __dec_obj239=var_name_543;
                var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_599));
                __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj240=var_name_543;
                var_name_543=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_600=0;
                num_anonymous_var_name_600++;
                __dec_obj241=var_name_543;
                var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_600));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_548&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_601=info->no_comma;
                info->no_comma=(_Bool)1;
                node_602=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_601;
                __dec_obj242=type_542->mSizeNum;
                type_542->mSizeNum=(struct sNode*)come_increment_ref_count(node_602);
                if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_602) ? node_602 = come_decrement_ref_count2(node_602, ((struct sNode*)node_602)->finalize, ((struct sNode*)node_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            attribute2_603=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_598,"")&&string_operator_not_equals(attribute2_603,"")) {
                __dec_obj243=type_542->mAttribute;
                type_542->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_598,((char*)(__right_value708=charp_operator_add(" ",attribute2_603)))));
                __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value708 = come_decrement_ref_count2(__right_value708, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            }
            else if(            string_operator_not_equals(attribute2_603,"")) {
                __dec_obj244=type_542->mAttribute;
                type_542->mAttribute=(char*)come_increment_ref_count(attribute2_603);
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_603 = come_decrement_ref_count2(attribute2_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_593) ? exp_593 = come_decrement_ref_count2(exp_593, ((struct sNode*)exp_593)->finalize, ((struct sNode*)exp_593)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_598 = come_decrement_ref_count2(attribute_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_if_conditional12=(((struct sType*)((void*)(__right_value710=map$2voidphvoidphp_operator_load_element(info->types,type_name_467)))))),        come_call_finalizer3(__right_value710,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional12) {
            __dec_obj249=type_542;
            type_542=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value711=map$2voidphvoidphp_operator_load_element(info->types,type_name_467))))));
            come_call_finalizer3(__dec_obj249,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value711,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            type_542->mTypedefOriginalPointerNum=type_542->mPointerNum;
            type_542->mClass=((struct sClass*)((void*)(__right_value713=map$2voidphvoidphp_operator_load_element(info->classes,type_542->mClass->mName))));
            come_call_finalizer3(__right_value713,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            __dec_obj250=type_542->mOriginalTypeName;
            type_542->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_467));
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_542->mOriginalTypeNamePointerNum=pointer_num_531;
            type_542->mOriginalTypeNameHeap=heap_532;
            type_542->mConstant=type_542->mConstant||constant_470;
            type_542->mAtomic=type_542->mAtomic||atomic__491;
            __dec_obj251=type_542->mAlignas;
            type_542->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
            type_542->mRegister=register__473;
            type_542->mUnsigned=type_542->mUnsigned||unsigned__474;
            type_542->mVolatile=volatile__472;
            type_542->mGenerate=generate__487;
            type_542->mUniq=type_542->mUniq||uniq__485;
            type_542->mStatic=(type_542->mStatic||static__471)&&!type_542->mUniq;
            type_542->mRecord=type_542->mRecord||record__468;
            type_542->mException=type_542->mException||exception__469;
            type_542->mExtern=type_542->mExtern||extern__483;
            type_542->mInline=type_542->mInline||inline__484;
            type_542->mRestrict=type_542->mRestrict||restrict__478;
            type_542->mLongLong=type_542->mLongLong||long_long_476;
            type_542->mLong=type_542->mLong||long__475;
            type_542->mShort=type_542->mShort||short__477;
            type_542->mPointerNum+=pointer_num_531;
            type_542->mHeap=type_542->mHeap||heap_532;
            type_542->mChannel=type_542->mChannel||channel_535;
            type_542->mAnyClass=type_542->mAnyClass||any_class_536;
            type_542->mCreateVTable=type_542->mCreateVTable||vtable_537;
            __dec_obj252=type_542->mTupleName;
            type_542->mTupleName=(char*)come_increment_ref_count(tuple_name_538);
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_467)) {
            for(            i_604=0;            i_604<list$1charphp_length(info->generics_type_names);            i_604++            ){
                if(                (_if_conditional13=(string_operator_equals(((char*)(__right_value715=list$1charphp_operator_load_element(info->generics_type_names,i_604))),type_name_467))),                (__right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                _if_conditional13) {
                    __dec_obj253=type_542;
                    type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2417, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value717=xsprintf("generics_type%d",i_604))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj253,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
            }
            type_542->mConstant=type_542->mConstant||constant_470;
            type_542->mAtomic=type_542->mAtomic||atomic__491;
            __dec_obj254=type_542->mAlignas;
            type_542->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); };
            type_542->mRegister=register__473;
            type_542->mUnsigned=type_542->mUnsigned||unsigned__474;
            type_542->mVolatile=volatile__472;
            type_542->mGenerate=generate__487;
            type_542->mUniq=type_542->mUniq||uniq__485;
            type_542->mStatic=(type_542->mStatic||static__471)&&!type_542->mUniq;
            type_542->mRecord=type_542->mRecord||record__468;
            type_542->mException=type_542->mException||exception__469;
            type_542->mExtern=type_542->mExtern||extern__483;
            type_542->mInline=type_542->mInline||inline__484;
            type_542->mRestrict=type_542->mRestrict||restrict__478;
            type_542->mLongLong=type_542->mLongLong||long_long_476;
            type_542->mLong=type_542->mLong||long__475;
            type_542->mShort=type_542->mShort||short__477;
            type_542->mPointerNum+=pointer_num_531;
            type_542->mHeap=type_542->mHeap||heap_532;
            type_542->mChannel=type_542->mChannel||channel_535;
            type_542->mAnyClass=type_542->mAnyClass||any_class_536;
            type_542->mCreateVTable=type_542->mCreateVTable||vtable_537;
            __dec_obj255=type_542->mTupleName;
            type_542->mTupleName=(char*)come_increment_ref_count(tuple_name_538);
            __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_467)) {
            for(            i_605=0;            i_605<list$1charphp_length(info->method_generics_type_names);            i_605++            ){
                if(                (_if_conditional14=(string_operator_equals(((char*)(__right_value719=list$1charphp_operator_load_element(info->method_generics_type_names,i_605))),type_name_467))),                (__right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                _if_conditional14) {
                    __dec_obj256=type_542;
                    type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2448, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value721=xsprintf("mgenerics_type%d",i_605))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj256,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
            }
            type_542->mConstant=type_542->mConstant||constant_470;
            type_542->mAtomic=type_542->mAtomic||atomic__491;
            __dec_obj257=type_542->mAlignas;
            type_542->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
            if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
            type_542->mRegister=register__473;
            type_542->mUnsigned=type_542->mUnsigned||unsigned__474;
            type_542->mVolatile=volatile__472;
            type_542->mGenerate=generate__487;
            type_542->mUniq=type_542->mUniq||uniq__485;
            type_542->mStatic=(type_542->mStatic||static__471)&&!type_542->mUniq;
            type_542->mRecord=type_542->mRecord||record__468;
            type_542->mException=type_542->mException||exception__469;
            type_542->mExtern=type_542->mExtern||extern__483;
            type_542->mInline=type_542->mInline||inline__484;
            type_542->mRestrict=type_542->mRestrict||restrict__478;
            type_542->mLongLong=type_542->mLongLong||long_long_476;
            type_542->mLong=type_542->mLong||long__475;
            type_542->mShort=type_542->mShort||short__477;
            type_542->mPointerNum+=pointer_num_531;
            type_542->mHeap=type_542->mHeap||heap_532;
            type_542->mChannel=type_542->mChannel||channel_535;
            type_542->mAnyClass=type_542->mAnyClass||any_class_536;
            type_542->mCreateVTable=type_542->mCreateVTable||vtable_537;
            __dec_obj258=type_542->mTupleName;
            type_542->mTupleName=(char*)come_increment_ref_count(tuple_name_538);
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional15=(((struct sClass*)((void*)(__right_value724=map$2voidphvoidphp_operator_load_element(info->generics_classes,((char*)(__right_value723=__builtin_string(type_name_467)))))))==((void*)0))),            (__right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value724,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional15) {
                __result348__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value726=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2482, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value726,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result348__;
            }
            __dec_obj259=type_542;
            type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2485, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj259,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while((_Bool)1) {
                multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value729=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_606=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                var_name_607=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                err_608=multiple_assign_var16->v3;
                come_call_finalizer3(__right_value729,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_608) {
                    __result349__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value731=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2491, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value731,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result349__;
                }
                list$1voidphp_push_back(type_542->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_606));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var17=((struct tuple2$2intcharph*)(__right_value732=err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2))));
                    come_exception_var_c7_609=multiple_assign_var17->v1;
                    Err_610=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                    ((Err_610)?(puts(Err_610),exit(0)):(0));
                    come_call_finalizer3(__right_value732,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    __result350__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value734=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2508, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    (Err_610 = come_decrement_ref_count2(Err_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(generics_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value734,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result350__;
                    (Err_610 = come_decrement_ref_count2(Err_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                come_call_finalizer3(generics_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            is_contained_generics_class(type_542,info)) {
                __dec_obj260=type_542;
                type_542=(struct sType*)come_increment_ref_count(solve_generics(type_542,info->generics_type,info));
                come_call_finalizer3(__dec_obj260,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_542,type_542,info)) {
                    new_name_611=(char*)come_increment_ref_count(create_generics_name(type_542,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_611);
                    exit(7);
                    (new_name_611 = come_decrement_ref_count2(new_name_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_542->mConstant=type_542->mConstant||constant_470;
            type_542->mAtomic=type_542->mAtomic||atomic__491;
            __dec_obj261=type_542->mAlignas;
            type_542->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
            if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
            type_542->mRegister=register__473;
            type_542->mUnsigned=type_542->mUnsigned||unsigned__474;
            type_542->mVolatile=volatile__472;
            type_542->mGenerate=generate__487;
            type_542->mUniq=type_542->mUniq||uniq__485;
            type_542->mStatic=(type_542->mStatic||static__471)&&!type_542->mUniq;
            type_542->mRecord=type_542->mRecord||record__468;
            type_542->mException=type_542->mException||exception__469;
            type_542->mExtern=type_542->mExtern||extern__483;
            type_542->mInline=type_542->mInline||inline__484;
            type_542->mRestrict=type_542->mRestrict||restrict__478;
            type_542->mLongLong=type_542->mLongLong||long_long_476;
            type_542->mLong=type_542->mLong||long__475;
            type_542->mShort=type_542->mShort||short__477;
            type_542->mPointerNum+=pointer_num_531;
            type_542->mHeap=type_542->mHeap||heap_532;
            type_542->mChannel=type_542->mChannel||channel_535;
            type_542->mAnyClass=type_542->mAnyClass||any_class_536;
            type_542->mCreateVTable=type_542->mCreateVTable||vtable_537;
            __dec_obj262=type_542->mTupleName;
            type_542->mTupleName=(char*)come_increment_ref_count(tuple_name_538);
            __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj263=type_name_467;
            type_name_467=(char*)come_increment_ref_count(type_542->mClass->mName);
            __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__479) {
                klass_612=((struct sClass*)((void*)(__right_value737=map$2voidphvoidphp_operator_load_element(info->classes,type_name_467))));
                come_call_finalizer3(__right_value737,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                klass_612==((void*)0)&&*info->p!=60) {
                    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_467),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2555, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_467,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__480) {
                klass_659=((struct sClass*)((void*)(__right_value753=map$2voidphvoidphp_operator_load_element(info->classes,type_name_467))));
                come_call_finalizer3(__right_value753,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                klass_659==((void*)0)&&*info->p!=60) {
                    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_467),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2562, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_467,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj272=type_542;
            type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_467,(_Bool)0,info));
            come_call_finalizer3(__dec_obj272,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_542->mConstant=type_542->mConstant||constant_470;
            type_542->mAtomic=type_542->mAtomic||atomic__491;
            __dec_obj273=type_542->mAlignas;
            type_542->mAlignas=(struct sNode*)come_increment_ref_count(alignas__488);
            if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
            type_542->mRegister=register__473;
            type_542->mUnsigned=type_542->mUnsigned||unsigned__474;
            type_542->mVolatile=volatile__472;
            type_542->mGenerate=generate__487;
            type_542->mUniq=type_542->mUniq||uniq__485;
            type_542->mStatic=(type_542->mStatic||static__471)&&!type_542->mUniq;
            type_542->mRecord=type_542->mRecord||record__468;
            type_542->mException=type_542->mException||exception__469;
            type_542->mExtern=type_542->mExtern||extern__483;
            type_542->mInline=type_542->mInline||inline__484;
            type_542->mRestrict=type_542->mRestrict||restrict__478;
            type_542->mLongLong=type_542->mLongLong||long_long_476;
            type_542->mLong=type_542->mLong||long__475;
            type_542->mShort=type_542->mShort||short__477;
            type_542->mPointerNum+=pointer_num_531;
            type_542->mHeap=type_542->mHeap||heap_532;
            type_542->mChannel=type_542->mChannel||channel_535;
            type_542->mAnyClass=type_542->mAnyClass||any_class_536;
            type_542->mCreateVTable=type_542->mCreateVTable||vtable_537;
            __dec_obj274=type_542->mTupleName;
            type_542->mTupleName=(char*)come_increment_ref_count(tuple_name_538);
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_542->mPointerNum++;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_542->mHeap=(_Bool)1;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_542->mNoHeap=(_Bool)1;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_542->mGuardValue=(_Bool)1;
                }
                else {
                    type_542->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_542->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_542->mPointerNum++;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_542->mHeap=(_Bool)1;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_542->mCreateVTable=(_Bool)1;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_542->mAnyClass=(_Bool)1;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_542->mChannel=(_Bool)1;
                if(                type_542->mNoSolvedGenericsType) {
                    type_542->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_660=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 2709, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            list$1voidphp_push_back(types_660,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_542)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value761=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_661=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name_662=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                err_663=multiple_assign_var18->v3;
                come_call_finalizer3(__right_value761,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_663) {
                    __result375__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value763=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2720, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(types_660,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value763,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result375__;
                }
                list$1voidphp_push_back(types_660,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_661)));
                come_call_finalizer3(type2_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_664=list$1voidphp_length(types_660);
            __dec_obj275=type_542;
            type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2733, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value766=xsprintf("tuple%d",num_tuples_664))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj275,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            type_542->mPointerNum++;
            type_542->mHeap=(_Bool)1;
            for(            o2_saved_665=(struct list$1voidph*)come_increment_ref_count((types_660)),it_666=((struct sType*)list$1voidphp_begin((o2_saved_665)));            !list$1voidphp_end((o2_saved_665));            it_666=((struct sType*)list$1voidphp_next((o2_saved_665)))            ){
                list$1voidphp_push_back(type_542->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value768=come_call_cloner(sType_clone, it_666))))));
                come_call_finalizer3(__right_value768,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_665,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_542->mPointerNum++;
                    if(                    type_542->mNoSolvedGenericsType) {
                        type_542->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_542->mHeap=(_Bool)1;
                    if(                    type_542->mNoSolvedGenericsType) {
                        type_542->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_542->mCreateVTable=(_Bool)1;
                    if(                    type_542->mNoSolvedGenericsType) {
                        type_542->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_542->mAnyClass=(_Bool)1;
                    if(                    type_542->mNoSolvedGenericsType) {
                        type_542->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_542->mChannel=(_Bool)1;
                    if(                    type_542->mNoSolvedGenericsType) {
                        type_542->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_542,info)) {
                __dec_obj276=type_542;
                type_542=(struct sType*)come_increment_ref_count(solve_generics(type_542,info->generics_type,info));
                come_call_finalizer3(__dec_obj276,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_542,type_542,info)) {
                    new_name_667=(char*)come_increment_ref_count(create_generics_name(type_542,info));
                    printf("output generics is failed(%s)\n",new_name_667);
                    exit(9);
                    (new_name_667 = come_decrement_ref_count2(new_name_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_542->mMultipleTypes=(_Bool)1;
            __dec_obj277=type_name_467;
            type_name_467=(char*)come_increment_ref_count(type_542->mClass->mName);
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_660,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_668=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_668,"")) {
            __dec_obj278=type_542->mAttribute;
            type_542->mAttribute=(char*)come_increment_ref_count(attribute_668);
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_548&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj279=var_name_543;
                var_name_543=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_490) {
                static int num_anonymous_var_name_669=0;
                num_anonymous_var_name_669++;
                __dec_obj280=var_name_543;
                var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_669));
                __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj281=var_name_543;
                var_name_543=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_670=0;
                num_anonymous_var_name_670++;
                __dec_obj282=var_name_543;
                var_name_543=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_670));
                __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_548&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_671=info->no_comma;
                info->no_comma=(_Bool)1;
                node_672=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_671;
                __dec_obj283=type_542->mSizeNum;
                type_542->mSizeNum=(struct sNode*)come_increment_ref_count(node_672);
                if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_672) ? node_672 = come_decrement_ref_count2(node_672, ((struct sNode*)node_672)->finalize, ((struct sNode*)node_672)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            attribute2_673=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_668,"")&&string_operator_not_equals(attribute2_673,"")) {
                __dec_obj284=type_542->mAttribute;
                type_542->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_668,((char*)(__right_value778=charp_operator_add(" ",attribute2_673)))));
                __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            }
            else if(            string_operator_not_equals(attribute2_673,"")) {
                __dec_obj285=type_542->mAttribute;
                type_542->mAttribute=(char*)come_increment_ref_count(attribute2_673);
                __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_673 = come_decrement_ref_count2(attribute2_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_668 = come_decrement_ref_count2(attribute_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_542->mArrayPointerType=(_Bool)1;
            type_542->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_674=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(type_542->mArrayNum,(struct sNode*)come_increment_ref_count(node_674));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_674) ? node_674 = come_decrement_ref_count2(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    multiple_assign_var19=((struct tuple2$2charphcharph*)(__right_value781=parse_attribute(info,(_Bool)0)));
    asm_name_675=(char*)come_increment_ref_count(multiple_assign_var19->v1);
    attribute2_676=(char*)come_increment_ref_count(multiple_assign_var19->v2);
    come_call_finalizer3(__right_value781,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_676,"")) {
        __dec_obj286=type_542->mAttribute;
        type_542->mAttribute=(char*)come_increment_ref_count(attribute2_676);
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj287=type_542->mAsmName;
    type_542->mAsmName=(char*)come_increment_ref_count(asm_name_675);
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_542->mChannel) {
        type_before_677=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_542));
        __dec_obj288=type_542;
        type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2906, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj288,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj289=type_542->mArrayNum;
        type_542->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___678[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value785=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2907, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),1,__list_values1___678)));
        come_call_finalizer3(__dec_obj289,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value785) ? __right_value785 = come_decrement_ref_count2(__right_value785, ((struct sNode*)__right_value785)->finalize, ((struct sNode*)__right_value785)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        __dec_obj290=type_542->mChannelType;
        type_542->mChannelType=(struct sType*)come_increment_ref_count(type_before_677);
        come_call_finalizer3(__dec_obj290,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_542->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_677,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_542->mAnyClass&&!type_542->mClass->mProtocol) {
        type_before_682=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_542));
        type_before_682->mHeap=(_Bool)1;
        type_before_682->mPointerNum=1;
        __dec_obj291=type_542;
        type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2915, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj291,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_542->mHeap=(_Bool)1;
        type_542->mPointerNum=1;
        __dec_obj292=type_542->mAnyOriginalType;
        type_542->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_682);
        come_call_finalizer3(__dec_obj292,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_542->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_682,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_542->mException) {
        type2_683=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2922, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type2_683->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2923, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type0",(_Bool)0,info)));
        list$1voidphp_operator_store_element(type2_683->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2924, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type1",(_Bool)0,info)));
        type2_683->mPointerNum=1;
        type2_683->mHeap=(_Bool)1;
        type3_689=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2928, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type3_689->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_542));
        list$1voidphp_operator_store_element(type3_689->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2930, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)));
        ((struct sType*)((void*)(__right_value802=list$1voidphp_operator_load_element(type3_689->mGenericsTypes,1))))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value802,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        type4_690=(struct sType*)come_increment_ref_count(solve_generics(type2_683,type3_689,info));
        type4_690->mException=(_Bool)1;
        type4_690->mUniq=type_542->mUniq;
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value805=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2938, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type4_690),(char*)come_increment_ref_count(var_name_543),(_Bool)1)));
        come_call_finalizer3(type2_683,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_689,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_690,sType_finalize, 0, 0, 0, 0, (void*)0);
        (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_675 = come_decrement_ref_count2(asm_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_676 = come_decrement_ref_count2(attribute2_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value805,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result381__;
        come_call_finalizer3(type2_683,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_689,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_690,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_530,"")) {
        __dec_obj294=type_542->mAttribute;
        type_542->mAttribute=(char*)come_increment_ref_count(attribute_530);
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result382__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value807=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2945, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type_542),(char*)come_increment_ref_count(var_name_543),(_Bool)1)));
    (type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__488) ? alignas__488 = come_decrement_ref_count2(alignas__488, ((struct sNode*)alignas__488)->finalize, ((struct sNode*)alignas__488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (attribute_530 = come_decrement_ref_count2(attribute_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_538 = come_decrement_ref_count2(tuple_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_543 = come_decrement_ref_count2(var_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_675 = come_decrement_ref_count2(asm_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_676 = come_decrement_ref_count2(attribute2_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value807,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_573;
int i_574;
char* __result344__;
char* default_value_575;
char* __result345__;
default_value_575 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_573=self->head;
    i_574=0;
    while(it_573!=((void*)0)) {
        if(        position==i_574) {
            __result344__ = gComeFunResultObject = __result_obj__ = it_573->item;
            gComeFunResultObject = (void*)0;
            return __result344__;
        }
        it_573=it_573->next;
        i_574++;
    }
    memset(&default_value_575,0,sizeof(char*));
    __result345__ = gComeFunResultObject = __result_obj__ = default_value_575;
    (default_value_575 = come_decrement_ref_count2(default_value_575, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj245;
struct sType* __dec_obj246;
char* __dec_obj247;
char* __dec_obj248;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj245=self->c_value;
            __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj246=self->type;
            come_call_finalizer3(__dec_obj246,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj247=self->c_value_without_right_value_objects;
            __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj248=self->c_value_without_cast_object_value;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_630;
unsigned int it_631;
_Bool same_key_exist_648;
char* it2_651;
struct map$2voidphvoidph* __result372__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_630=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_631=hash_630;
    while((_Bool)1) {
        if(        self->item_existance[it_631]) {
            if(            come_call_equals((void*)0, self->keys[it_631], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_631]);
                    come_call_finalizer3(self->keys[it_631],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_631]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_631]);
                    self->keys[it_631]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_631],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_631]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_631]=item;
                }
                break;
            }
            it_631++;
            if(            it_631>=self->size) {
                it_631=0;
            }
            else if(            it_631==hash_630) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_631]=(_Bool)1;
            if(            1) {
                self->keys[it_631]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_631]=key;
            }
            if(            1) {
                self->items[it_631]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_631]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_648=(_Bool)0;
    for(    it2_651=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_651=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_651, key)) {
            same_key_exist_648=(_Bool)1;
        }
    }
    if(    !same_key_exist_648) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result372__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_613;
void* __right_value738 = (void*)0;
void** keys_614;
void* __right_value739 = (void*)0;
void** items_615;
void* __right_value740 = (void*)0;
_Bool* item_existance_616;
int len_617;
void* it_620;
void* default_value_623;
void* __right_value741 = (void*)0;
void* it2_624;
unsigned int hash_627;
int n_628;
void* default_value_629;
void* __right_value742 = (void*)0;
default_value_623 = (void*)0;
default_value_629 = (void*)0;
    size_613=self->size*10;
    keys_614=(void**)come_increment_ref_count(((void**)(__right_value738=(void**)come_calloc(1, sizeof(void*)*(1*(size_613)), "/usr/local/include/comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_615=(void**)come_increment_ref_count(((void**)(__right_value739=(void**)come_calloc(1, sizeof(void*)*(1*(size_613)), "/usr/local/include/comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_616=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value740=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_613)), "/usr/local/include/comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_617=0;
    for(    it_620=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_620=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_623,0,sizeof(void*));
        it2_624=((void*)(__right_value741=map$2voidphvoidphp_at(self,it_620,default_value_623)));
        come_call_finalizer3(__right_value741,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_627=come_call_get_hash_key((void*)0, ((void*)it_620))%size_613;
        n_628=hash_627;
        while((_Bool)1) {
            if(            item_existance_616[n_628]) {
                n_628++;
                if(                n_628>=size_613) {
                    n_628=0;
                }
                else if(                n_628==hash_627) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_616[n_628]=(_Bool)1;
                keys_614[n_628]=it_620;
                items_615[n_628]=((void*)(__right_value742=map$2voidphvoidphp_at(self,it_620,default_value_629)));
                come_call_finalizer3(__right_value742,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_617++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_614;
    self->items=items_615;
    self->item_existance=item_existance_616;
    self->size=size_613;
    self->len=len_617;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_618;
void* __result351__;
void* __result352__;
void* result_619;
void* __result353__;
result_618 = (void*)0;
result_619 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_618,0,sizeof(void*));
        __result351__ = gComeFunResultObject = __result_obj__ = result_618;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result352__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    memset(&result_619,0,sizeof(void*));
    __result353__ = gComeFunResultObject = __result_obj__ = result_619;
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_621;
void* __result354__;
void* __result355__;
void* result_622;
void* __result356__;
result_621 = (void*)0;
result_622 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_621,0,sizeof(void*));
        __result354__ = gComeFunResultObject = __result_obj__ = result_621;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result355__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    memset(&result_622,0,sizeof(void*));
    __result356__ = gComeFunResultObject = __result_obj__ = result_622;
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_625;
unsigned int it_626;
void* __result357__;
void* __result358__;
void* __result359__;
void* __result360__;
    hash_625=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_626=hash_625;
    while((_Bool)1) {
        if(        self->item_existance[it_626]) {
            if(            come_call_equals((void*)0, self->keys[it_626], key)) {
                __result357__ = gComeFunResultObject = __result_obj__ = self->items[it_626];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result357__;
            }
            it_626++;
            if(            it_626>=self->size) {
                it_626=0;
            }
            else if(            it_626==hash_625) {
                __result358__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result358__;
            }
        }
        else {
            __result359__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result359__;
        }
    }
    __result360__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_632;
struct list_item$1voidp* it_633;
struct list$1voidp* __result364__;
    it2_632=0;
    it_633=self->head;
    while(it_633!=((void*)0)) {
        if(        come_call_equals((void*)0, it_633->item, item)) {
            list$1voidpp_delete(self,it2_632,it2_632+1);
            break;
        }
        it2_632++;
        it_633=it_633->next;
    }
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_634;
struct list$1voidp* __result361__;
struct list_item$1voidp* it_637;
int i_638;
struct list_item$1voidp* prev_it_639;
struct list_item$1voidp* it_640;
int i_641;
struct list_item$1voidp* prev_it_642;
struct list_item$1voidp* it_643;
struct list_item$1voidp* head_prev_it_644;
struct list_item$1voidp* tail_it_645;
int i_646;
struct list_item$1voidp* prev_it_647;
struct list$1voidp* __result363__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_634=tail;
        tail=head;
        head=tmp_634;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result361__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_637=self->head;
        i_638=0;
        while(it_637!=((void*)0)) {
            if(            i_638<tail) {
                prev_it_639=it_637;
                it_637=it_637->next;
                i_638++;
                come_call_finalizer3(prev_it_639,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_638==tail) {
                self->head=it_637;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_637=it_637->next;
                i_638++;
            }
        }
    }
    else if(    tail==self->len) {
        it_640=self->head;
        i_641=0;
        while(it_640!=((void*)0)) {
            if(            i_641==head) {
                self->tail=it_640->prev;
                self->tail->next=((void*)0);
            }
            if(            i_641>=head) {
                prev_it_642=it_640;
                it_640=it_640->next;
                i_641++;
                come_call_finalizer3(prev_it_642,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_640=it_640->next;
                i_641++;
            }
        }
    }
    else {
        it_643=self->head;
        head_prev_it_644=((void*)0);
        tail_it_645=((void*)0);
        i_646=0;
        while(it_643!=((void*)0)) {
            if(            i_646==head) {
                head_prev_it_644=it_643->prev;
            }
            if(            i_646==tail) {
                tail_it_645=it_643;
            }
            if(            i_646>=head&&i_646<tail) {
                prev_it_647=it_643;
                it_643=it_643->next;
                i_646++;
                come_call_finalizer3(prev_it_647,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_643=it_643->next;
                i_646++;
            }
        }
        if(        head_prev_it_644!=((void*)0)) {
            head_prev_it_644->next=tail_it_645;
        }
        if(        tail_it_645!=((void*)0)) {
            tail_it_645->prev=head_prev_it_644;
        }
    }
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_635;
struct list_item$1voidp* prev_it_636;
struct list$1voidp* __result362__;
    it_635=self->head;
    while(it_635!=((void*)0)) {
        prev_it_636=it_635;
        it_635=it_635->next;
        come_call_finalizer3(prev_it_636,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_649;
void* __result365__;
void* __result366__;
void* result_650;
void* __result367__;
result_649 = (void*)0;
result_650 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_649,0,sizeof(void*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_649;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->it=self->head;
    if(    self->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_650,0,sizeof(void*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_650;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_652;
void* __result368__;
void* __result369__;
void* result_653;
void* __result370__;
result_652 = (void*)0;
result_653 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_652,0,sizeof(void*));
        __result368__ = gComeFunResultObject = __result_obj__ = result_652;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result369__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    memset(&result_653,0,sizeof(void*));
    __result370__ = gComeFunResultObject = __result_obj__ = result_653;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value743 = (void*)0;
struct list_item$1voidp* litem_654;
void* __right_value744 = (void*)0;
struct list_item$1voidp* litem_655;
void* __right_value745 = (void*)0;
struct list_item$1voidp* litem_656;
struct list$1voidp* __result371__;
    if(    self->len==0) {
        litem_654=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value743=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_654->prev=((void*)0);
        litem_654->next=((void*)0);
        litem_654->item=item;
        self->tail=litem_654;
        self->head=litem_654;
    }
    else if(    self->len==1) {
        litem_655=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value744=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_655->prev=self->head;
        litem_655->next=((void*)0);
        litem_655->item=item;
        self->tail=litem_655;
        self->head->next=litem_655;
    }
    else {
        litem_656=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value745=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_656->prev=self->tail;
        litem_656->next=((void*)0);
        litem_656->item=item;
        self->tail->next=litem_656;
        self->tail=litem_656;
    }
    self->len++;
    __result371__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj264;
struct list$1voidph* __dec_obj265;
char* __dec_obj266;
char* __dec_obj267;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj264=self->mName;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj265=self->mFields;
            come_call_finalizer3(__dec_obj265,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj266=self->mParentClassName;
            __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj267=self->mAttribute;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result373__;
void* __right_value746 = (void*)0;
struct sClass* result_658;
void* __right_value747 = (void*)0;
char* __dec_obj268;
void* __right_value748 = (void*)0;
struct list$1voidph* __dec_obj269;
void* __right_value749 = (void*)0;
char* __dec_obj270;
void* __right_value750 = (void*)0;
char* __dec_obj271;
struct sClass* __result374__;
    if(    self==(void*)0) {
        __result373__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_658=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_658->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_658->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_658->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_658->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_658->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_658->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_658->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_658->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj268=result_658->mName;
        result_658->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_658->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj269=result_658->mFields;
        result_658->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj269,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj270=result_658->mParentClassName;
        result_658->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj271=result_658->mAttribute;
        result_658->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->mDynamic=self->mDynamic;
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_658;
    come_call_finalizer3(result_658,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_657;
    result_657=0;
    result_657+=int_get_hash_key(((int)self->mStruct));
    result_657+=int_get_hash_key(((int)self->mFloat));
    result_657+=int_get_hash_key(((int)self->mUnion));
    result_657+=int_get_hash_key(((int)self->mGenerics));
    result_657+=int_get_hash_key(((int)self->mMethodGenerics));
    result_657+=int_get_hash_key(((int)self->mEnum));
    result_657+=int_get_hash_key(((int)self->mProtocol));
    result_657+=int_get_hash_key(((int)self->mNumber));
    result_657+=int_get_hash_key(((int)self->mName));
    result_657+=int_get_hash_key(((int)self->mGenericsNum));
    result_657+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_657+=int_get_hash_key(((int)self->mFields));
    result_657+=int_get_hash_key(((int)self->mParentClassName));
    result_657+=int_get_hash_key(((int)self->mAttribute));
    result_657+=int_get_hash_key(((int)self->mDynamic));
    return result_657;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_679;
struct list$1sNodeph* __result376__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_679=0;    i_679<num_value;    i_679++    ){
        list$1sNodephp_push_back(self,values[i_679]);
    }
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result377__;
void* __right_value786 = (void*)0;
struct list$1sNodeph* result_680;
struct list$1sNodeph* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_680=(struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "list$1sNodeph_clone", 3, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_680->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_680->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_680->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_680->it=self->it;
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_680;
    come_call_finalizer3(result_680,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self){
unsigned int result_681;
    result_681=0;
    result_681+=int_get_hash_key(((int)self->head));
    result_681+=int_get_hash_key(((int)self->tail));
    result_681+=int_get_hash_key(((int)self->len));
    result_681+=int_get_hash_key(((int)self->it));
    return result_681;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    if(    !list_item$1sNodeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_684;
int i_685;
void* default_value_686;
struct list$1voidph* __result379__;
struct list_item$1voidph* it_687;
int i_688;
void* __dec_obj293;
struct list$1voidph* __result380__;
default_value_686 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_684=self->len;
        for(        i_685=0;        i_685<position-len_684;        i_685++        ){
            memset(&default_value_686,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_686));
            come_call_finalizer3(default_value_686,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result379__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    it_687=self->head;
    i_688=0;
    while(it_687!=((void*)0)) {
        if(        position==i_688) {
            __dec_obj293=it_687->item;
            it_687->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj293,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_687=it_687->next;
        i_688++;
    }
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

