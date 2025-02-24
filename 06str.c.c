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
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    struct sType* mChannelType;
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mAllocaValue;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
    char* mAttribute;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
    int mBlockLevel;
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
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mCloner;
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
    int mID;
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

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
int err_msg(struct sInfo* info, char* msg, ...);
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
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result230__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("sStrNode")));
    (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result231__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value257 = (void*)0;
char* __dec_obj35;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* __dec_obj77;
_Bool __result248__;
    come_value_317=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj35=come_value_317->c_value;
    come_value_317->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj77=come_value_317->type;
    come_value_317->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_317->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_317));
    add_come_last_code(info,"%s",come_value_317->c_value);
    __result248__ = (_Bool)1;
    come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result248__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj33;
char* __dec_obj34;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj34=self->value;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
struct list$1voidph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1voidph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj39=self->mChannelType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj47=self->mSizeNum;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_318;
struct list_item$1voidph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_320;
struct list_item$1voidph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_324;
struct list_item$1sNodeph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_326;
struct list_item$1charph* prev_it_327;
    it_326=self->head;
    while(it_326!=((void*)0)) {
        prev_it_327=it_326;
        it_326=it_326->next;
        come_call_finalizer3(prev_it_327,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result232__;
void* __right_value258 = (void*)0;
struct sType* result_335;
void* __right_value259 = (void*)0;
struct sType* __dec_obj53;
void* __right_value260 = (void*)0;
struct sType* __dec_obj54;
void* __right_value261 = (void*)0;
struct sType* __dec_obj55;
void* __right_value262 = (void*)0;
struct sType* __dec_obj56;
void* __right_value269 = (void*)0;
struct list$1voidph* __dec_obj60;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value278 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value285 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value286 = (void*)0;
struct sType* __dec_obj70;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value289 = (void*)0;
char* __dec_obj73;
void* __right_value290 = (void*)0;
char* __dec_obj74;
void* __right_value291 = (void*)0;
char* __dec_obj75;
void* __right_value292 = (void*)0;
char* __dec_obj76;
struct sType* __result246__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_335=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_335->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_335->mNoSolvedGenericsType;
        result_335->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_335->mOriginalLoadVarType;
        result_335->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_335->mAnyOriginalType;
        result_335->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj56=result_335->mChannelType;
        result_335->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_335->mGenericsTypes;
        result_335->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_335->mArrayNum;
        result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_335->mParamTypes;
        result_335->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_335->mParamNames;
        result_335->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_335->mResultType;
        result_335->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_335->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_335->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_335->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_335->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_335->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_335->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_335->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_335->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_335->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_335->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_335->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_335->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_335->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_335->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_335->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_335->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_335->mException=self->mException;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj71=result_335->mSizeNum;
        result_335->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_335->mAlignas;
        result_335->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_335->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj73=result_335->mOriginalTypeName;
        result_335->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_335->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_335->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj74=result_335->mAsmName;
        result_335->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_335->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj75=result_335->mTupleName;
        result_335->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj76=result_335->mAttribute;
        result_335->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_335->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_335->mDynamic=self->mDynamic;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->mClass));
    result_328+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_328+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_328+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_328+=int_get_hash_key(((int)self->mChannelType));
    result_328+=int_get_hash_key(((int)self->mAnyClass));
    result_328+=int_get_hash_key(((int)self->mGenericsTypes));
    result_328+=int_get_hash_key(((int)self->mArrayNum));
    result_328+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_328+=int_get_hash_key(((int)self->mParamTypes));
    result_328+=int_get_hash_key(((int)self->mParamNames));
    result_328+=int_get_hash_key(((int)self->mResultType));
    result_328+=int_get_hash_key(((int)self->mVarArgs));
    result_328+=int_get_hash_key(((int)self->mUnsigned));
    result_328+=int_get_hash_key(((int)self->mShort));
    result_328+=int_get_hash_key(((int)self->mLong));
    result_328+=int_get_hash_key(((int)self->mLongLong));
    result_328+=int_get_hash_key(((int)self->mConstant));
    result_328+=int_get_hash_key(((int)self->mAtomic));
    result_328+=int_get_hash_key(((int)self->mRegister));
    result_328+=int_get_hash_key(((int)self->mVolatile));
    result_328+=int_get_hash_key(((int)self->mStatic));
    result_328+=int_get_hash_key(((int)self->mUniq));
    result_328+=int_get_hash_key(((int)self->mRecord));
    result_328+=int_get_hash_key(((int)self->mExtern));
    result_328+=int_get_hash_key(((int)self->mRestrict));
    result_328+=int_get_hash_key(((int)self->mImmutable));
    result_328+=int_get_hash_key(((int)self->mHeap));
    result_328+=int_get_hash_key(((int)self->mChannel));
    result_328+=int_get_hash_key(((int)self->mNoHeap));
    result_328+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_328+=int_get_hash_key(((int)self->mException));
    result_328+=int_get_hash_key(((int)self->mSizeNum));
    result_328+=int_get_hash_key(((int)self->mAlignas));
    result_328+=int_get_hash_key(((int)self->mPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_328+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_328+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mAllocaValue));
    result_328+=int_get_hash_key(((int)self->mInline));
    result_328+=int_get_hash_key(((int)self->mNullValue));
    result_328+=int_get_hash_key(((int)self->mGuardValue));
    result_328+=int_get_hash_key(((int)self->mAsmName));
    result_328+=int_get_hash_key(((int)self->mArrayPointerType));
    result_328+=int_get_hash_key(((int)self->mLambdaArray));
    result_328+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_328+=int_get_hash_key(((int)self->mTypedef));
    result_328+=int_get_hash_key(((int)self->mMultipleTypes));
    result_328+=int_get_hash_key(((int)self->mOriginIsArray));
    result_328+=int_get_hash_key(((int)self->mTupleName));
    result_328+=int_get_hash_key(((int)self->mAttribute));
    result_328+=int_get_hash_key(((int)self->mGenerate));
    result_328+=int_get_hash_key(((int)self->mCreateVTable));
    result_328+=int_get_hash_key(((int)self->mDynamic));
    return result_328;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
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
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
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
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
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
struct list_item$1voidph* it_329;
struct list_item$1voidph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(it_329!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_329->item, it2_330->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !sNode_equals(it_331->item,it2_332->item)) {
            return (_Bool)0;
        }
        it_331=it_331->next;
        it2_332=it2_332->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_333;
struct list_item$1charph* it2_334;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_333=left->head;
    it2_334=right->head;
    while(it_333!=((void*)0)) {
        if(        !string_equals(it_333->item,it2_334->item)) {
            return (_Bool)0;
        }
        it_333=it_333->next;
        it2_334=it2_334->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result233__;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1voidph* result_337;
struct list_item$1voidph* it_338;
void* __right_value268 = (void*)0;
struct list$1voidph* __result236__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_337=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_338=self->head;
    while(it_338!=((void*)0)) {
        list$1voidphp_add(result_337,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_338->item)));
        it_338=it_338->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(result_337,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_336;
    result_336=0;
    result_336+=int_get_hash_key(((int)self->head));
    result_336+=int_get_hash_key(((int)self->tail));
    result_336+=int_get_hash_key(((int)self->len));
    result_336+=int_get_hash_key(((int)self->it));
    return result_336;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj57;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj58;
void* __right_value267 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj59;
struct list$1voidph* __result235__;
    if(    self->len==0) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        __dec_obj57=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        __dec_obj58=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value267=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        __dec_obj59=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_341;
        self->tail=litem_341;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sNodeph* result_342;
struct list_item$1sNodeph* it_343;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __result242__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_342=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_343=self->head;
    while(it_343!=((void*)0)) {
        list$1sNodephp_add(result_342,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_343->item)));
        it_343=it_343->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj61;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj62;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result239__;
    if(    self->len==0) {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj61=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj62=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj63=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result240__;
void* __right_value275 = (void*)0;
struct sNode* result_347;
struct sNode* __result241__;
    if(    self==(void*)0) {
        __result240__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_347=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_347->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_347->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_347->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_347->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_347->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_347->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_347->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_347->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_347->kind=self->kind;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_347;
    ((result_347) ? result_347 = come_decrement_ref_count2(result_347, ((struct sNode*)result_347)->finalize, ((struct sNode*)result_347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result243__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* result_348;
struct list_item$1charph* it_349;
void* __right_value284 = (void*)0;
struct list$1charph* __result245__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_348=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1charphp_add(result_348,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj66;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj67;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj68;
struct list$1charph* __result244__;
    if(    self->len==0) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj66=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj67=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj68=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_353;
struct CVALUE* __dec_obj78;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_354;
struct CVALUE* __dec_obj83;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj84;
struct list$1CVALUEph* __result247__;
    if(    self->len==0) {
        litem_353=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj78=litem_353->item;
        litem_353->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj83=litem_354->item;
        litem_354->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj84=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj79;
struct sType* __dec_obj80;
char* __dec_obj81;
char* __dec_obj82;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj79=self->c_value;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj80=self->type;
            come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj81=self->c_value_without_right_value_objects;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj82=self->c_value_without_cast_object_value;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct buffer* __dec_obj85;
struct sBufferNode* __result249__;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj85,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=__builtin_string("sBufferNode")));
    (__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_356;
unsigned long  int size_357;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_358;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* buf_359;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* type2_360;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* any_type_361;
void* __right_value308 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var1 = (void*)0;
char* finalizer_name_362=0;
char* cloner_name_363=0;
char* get_hash_key_name_364=0;
char* equaler_name_365=0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* type2_366;
void* __right_value312 = (void*)0;
char* __dec_obj92;
void* __right_value313 = (void*)0;
struct sType* __dec_obj93;
_Bool __result251__;
    value_356=(struct buffer*)come_increment_ref_count(self->value);
    size_357=self->size;
    come_value_358=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_359=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    type2_360=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    type2_360->mPointerNum++;
    any_type_361=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    any_type_361->mPointerNum=1;
    any_type_361->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4charphcharphcharphcharph*)(__right_value308=create_vtable((struct sType*)come_increment_ref_count(any_type_361),info)));
    finalizer_name_362=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_363=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_364=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_365=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    come_call_finalizer3(__right_value308,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_359,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_362,cloner_name_363,get_hash_key_name_364,equaler_name_365,((char*)(__right_value309=buffer_to_string(value_356))),size_357);
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_360,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_366=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer*",(_Bool)0,info));
    type2_366->mHeap=(_Bool)1;
    __dec_obj92=come_value_358->c_value;
    come_value_358->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_359));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value_358->type;
    come_value_358->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_366));
    come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_358->var=((void*)0);
    append_object_to_right_values2(come_value_358,(struct sType*)come_increment_ref_count(type2_366),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_358));
    add_come_last_code(info,"%s",come_value_358->c_value);
    __result251__ = (_Bool)1;
    come_call_finalizer3(value_356,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_359,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_362 = come_decrement_ref_count2(finalizer_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_363 = come_decrement_ref_count2(cloner_name_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_364 = come_decrement_ref_count2(get_hash_key_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_365 = come_decrement_ref_count2(equaler_name_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_366,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result251__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj86;
struct buffer* __dec_obj87;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj86=self->sname;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj87=self->value;
            come_call_finalizer3(__dec_obj87,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self){
char* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
char* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj88=self->v1;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj90=self->v3;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj91=self->v4;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj94;
void* __right_value316 = (void*)0;
struct list$1sNodeph* __dec_obj95;
struct sSStringNode* __result252__;
    ((struct sNodeBase*)(__right_value314=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value314,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj95,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
char* __result253__;
    __result253__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value317=__builtin_string("sSStringNode")));
    (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result253__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_367;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct buffer* buf_368;
struct list$1sNodeph* o2_saved_369;
struct sNode* it_372;
void* __right_value322 = (void*)0;
struct sNode* obj_375;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_376;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* node_384;
_Bool Value_385;
_Bool __result265__;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* type2_387;
void* __right_value339 = (void*)0;
char* __dec_obj111;
void* __right_value340 = (void*)0;
struct sType* __dec_obj112;
_Bool __result266__;
    come_value_367=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_368=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_368,"xsprintf(\"");
    buffer_append_str(buf_368,self->value);
    buffer_append_str(buf_368,"\"");
    if(    list$1sNodephp_length(self->exps)>0) {
        for(        o2_saved_369=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_372=list$1sNodephp_begin((o2_saved_369));        !list$1sNodephp_end((o2_saved_369));        it_372=list$1sNodephp_next((o2_saved_369))        ){
            obj_375=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_372));
            params_376=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 115, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_376,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 116, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_372)))));
            node_384=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_375),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_376),((void*)0),0,((void*)0),info));
            Value_385=node_compile(node_384,info);
            if(            !Value_385) {
                __result265__ = (_Bool)0;
                ((obj_375) ? obj_375 = come_decrement_ref_count2(obj_375, ((struct sNode*)obj_375)->finalize, ((struct sNode*)obj_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(params_376,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((node_384) ? node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(o2_saved_369,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result265__;
            }
            else {
            }
            come_value_386=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_368,",");
            buffer_append_str(buf_368,come_value_386->c_value);
            ((obj_375) ? obj_375 = come_decrement_ref_count2(obj_375, ((struct sNode*)obj_375)->finalize, ((struct sNode*)obj_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(params_376,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            ((node_384) ? node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_369,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_368,")");
    type2_387=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 134, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    type2_387->mHeap=(_Bool)1;
    __dec_obj111=come_value_367->c_value;
    come_value_367->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_368));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=come_value_367->type;
    come_value_367->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_387));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_367->var=((void*)0);
    append_object_to_right_values2(come_value_367,(struct sType*)come_increment_ref_count(type2_387),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_367));
    add_come_last_code(info,"%s",come_value_367->c_value);
    __result266__ = (_Bool)1;
    come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj96;
char* __dec_obj97;
struct list$1sNodeph* __dec_obj98;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj96=self->sname;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj97=self->value;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj98=self->exps;
            come_call_finalizer3(__dec_obj98,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_370;
struct sNode* __result254__;
struct sNode* __result255__;
struct sNode* result_371;
struct sNode* __result256__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_370,0,sizeof(struct sNode*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->head;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_371,0,sizeof(struct sNode*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_373;
struct sNode* __result257__;
struct sNode* __result258__;
struct sNode* result_374;
struct sNode* __result259__;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_373,0,sizeof(struct sNode*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_373;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_374,0,sizeof(struct sNode*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_374;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result260__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_377;
struct list_item$1tuple2$2charphsNodephph* prev_it_378;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        prev_it_378=it_377;
        it_377=it_377->next;
        come_call_finalizer3(prev_it_378,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj99;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj99=self->item;
            come_call_finalizer3(__dec_obj99,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj100;
struct sNode* __dec_obj101;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj100=self->v1;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj101=self->v2;
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_379;
struct tuple2$2charphsNodeph* __dec_obj102;
void* __right_value326 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_380;
struct tuple2$2charphsNodeph* __dec_obj103;
void* __right_value327 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_381;
struct tuple2$2charphsNodeph* __dec_obj104;
struct list$1tuple2$2charphsNodephph* __result261__;
    if(    self->len==0) {
        litem_379=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value325=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj102=litem_379->item;
        litem_379->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value326=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj103=litem_380->item;
        litem_380->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value327=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj104=litem_381->item;
        litem_381->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj105;
struct sNode* __dec_obj106;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj105=self->v1;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj106=self->v2;
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result262__;
void* __right_value330 = (void*)0;
struct tuple2$2charphsNodeph* result_382;
void* __right_value331 = (void*)0;
char* __dec_obj107;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj108;
struct tuple2$2charphsNodeph* __result263__;
    if(    self==(void*)0) {
        __result262__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_382=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj107=result_382->v1;
        result_382->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj108=result_382->v2;
        result_382->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_382;
    come_call_finalizer3(result_382,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_383;
    result_383=0;
    result_383+=int_get_hash_key(((int)self->v1));
    result_383+=int_get_hash_key(((int)self->v2));
    return result_383;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj109;
struct sNode* __dec_obj110;
struct tuple2$2charphsNodeph* __result264__;
    __dec_obj109=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct sCharNode* __result267__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sCharNode")));
    (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value345 = (void*)0;
char* __dec_obj114;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj115;
_Bool __result269__;
    come_value_388=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 167, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj114=come_value_388->c_value;
    come_value_388->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=come_value_388->type;
    come_value_388->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 170, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_388->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_388));
    add_come_last_code(info,"%s",come_value_388->c_value);
    __result269__ = (_Bool)1;
    come_call_finalizer3(come_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj113;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj113=self->sname;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sWCharNode* __result270__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sWCharNode")));
    (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value352 = (void*)0;
char* __dec_obj117;
void* __right_value353 = (void*)0;
char* __dec_obj118;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj119;
_Bool __result272__;
    come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 198, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj117=come_value_389->c_value;
        come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj118=come_value_389->c_value;
        come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj119=come_value_389->type;
    come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_389->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
    add_come_last_code(info,"%s",come_value_389->c_value);
    __result272__ = (_Bool)1;
    come_call_finalizer3(come_value_389,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj116;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj116=self->sname;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
int* __dec_obj120;
struct sWStringNode* __result273__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->value;
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sWStringNode")));
    (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value360 = (void*)0;
char* __dec_obj123;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj124;
_Bool __result275__;
    come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 233, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj123=come_value_390->c_value;
    come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value_390->type;
    come_value_390->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 236, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_390->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_390));
    add_come_last_code(info,"%s",come_value_390->c_value);
    __result275__ = (_Bool)1;
    come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj121;
int* __dec_obj122;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj121=self->sname;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj122=self->value;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* __dec_obj125;
struct sRegexNode* __result276__;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value363,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    (str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sRegexNode")));
    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value371 = (void*)0;
struct sNode* obj_node_391;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_393;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
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
struct sNode* node_394;
_Bool Value_395;
_Bool __result280__;
_Bool __result281__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value367=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 265, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_391=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value367,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_393=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 267, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 269, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_391))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 270, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 271, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 272, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 273, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 274, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 275, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 276, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 277, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_394=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_391),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_393),((void*)0),info->sline,((void*)0),info));
    Value_395=node_compile(node_394,info);
    if(    !Value_395) {
        __result280__ = (_Bool)0;
        ((obj_node_391) ? obj_node_391 = come_decrement_ref_count2(obj_node_391, ((struct sNode*)obj_node_391)->finalize, ((struct sNode*)obj_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_393,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_394) ? node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result280__;
    }
    else {
    }
    __result281__ = (_Bool)1;
    ((obj_node_391) ? obj_node_391 = come_decrement_ref_count2(obj_node_391, ((struct sNode*)obj_node_391)->finalize, ((struct sNode*)obj_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(params_393,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_394) ? node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result281__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj126;
char* __dec_obj127;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj126=self->sname;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj127=self->str;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result278__;
void* __right_value368 = (void*)0;
struct sStrNode* result_392;
void* __right_value369 = (void*)0;
char* __dec_obj128;
void* __right_value370 = (void*)0;
char* __dec_obj129;
struct sStrNode* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_392=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_392->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj128=result_392->sname;
        result_392->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj129=result_392->value;
        result_392->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_392;
    come_call_finalizer3(result_392,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
struct list$1sNodeph* __dec_obj130;
struct sListNode* __result282__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj130=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sListNode")));
    (__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_396;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1CVALUEph* params_397;
struct sType* list_element_type_400;
int n_401;
struct list$1sNodeph* o2_saved_402;
struct sNode* it_403;
void* __right_value414 = (void*)0;
_Bool _if_conditional1;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* value_node_404;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_405;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* exp_406;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj134;
_Bool Value_407;
_Bool __result285__;
_Bool Value_408;
_Bool __result286__;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_409;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj135;
void* __right_value432 = (void*)0;
struct sType* type_values_410;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* var_name_415;
void* __right_value438 = (void*)0;
struct sVar* var__416;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* source_417;
int i_418;
struct list$1CVALUEph* o2_saved_419;
struct CVALUE* it_422;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* c_value_425;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* list_type_429;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* obj_type_433;
char* fun_name_434;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var2 = (void*)0;
char* name_435=0;
struct sGenericsFun* generics_fun_436=0;
char* generics_fun_name_437;
void* __right_value455 = (void*)0;
struct sFun* fun_438;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
char* __dec_obj143;
void* __right_value458 = (void*)0;
_Bool __result301__;
void* __right_value459 = (void*)0;
struct sType* result_type_441;
struct sType* type_442;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct CVALUE* obj_value_443;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct buffer* num_string_444;
void* __right_value464 = (void*)0;
struct sType* type2_445;
void* __right_value465 = (void*)0;
char* type_name_446;
struct sType* any_type_447;
void* __right_value466 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var3 = (void*)0;
char* finalizer_name_448=0;
char* cloner_name_449=0;
char* get_hash_key_name_450=0;
char* equaler_name_451=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __dec_obj144;
void* __right_value469 = (void*)0;
struct sType* type3_452;
void* __right_value470 = (void*)0;
struct sType* __dec_obj145;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1CVALUEph* come_params_453;
void* __right_value473 = (void*)0;
_Bool _if_conditional2;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value2_457;
void* __right_value477 = (void*)0;
char* __dec_obj146;
struct sType* __dec_obj147;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value3_458;
void* __right_value480 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
int j_459;
struct list$1CVALUEph* o2_saved_460;
struct CVALUE* it_461;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct CVALUE* come_value4_462;
void* __right_value483 = (void*)0;
char* __dec_obj150;
void* __right_value484 = (void*)0;
struct sType* __dec_obj151;
_Bool __result304__;
    list_elements_396=self->list_elements;
    params_397=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 309, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_400=((void*)0);
    n_401=0;
    for(    o2_saved_402=(list_elements_396),it_403=list$1sNodephp_begin((o2_saved_402));    !list$1sNodephp_end((o2_saved_402));    it_403=list$1sNodephp_next((o2_saved_402))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value414=it_403->kind(it_403->_protocol_obj))),"sWildCard"))),        (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            value_node_404=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value415=xsprintf("Value"))),info));
            (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_405=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 317, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_405,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 318, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_404))));
            list$1tuple2$2charphsNodephphp_add(params_405,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 319, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_401,info)))));
            exp_406=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value426=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_404),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_405),((void*)0),0,((void*)0),info));
            (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj134=exp_406;
            exp_406=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_406,info));
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
            Value_407=node_compile(exp_406,info);
            if(            !Value_407) {
                __result285__ = (_Bool)0;
                ((value_node_404) ? value_node_404 = come_decrement_ref_count2(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(params_405,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((exp_406) ? exp_406 = come_decrement_ref_count2(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result285__;
            }
            else {
            }
            ((value_node_404) ? value_node_404 = come_decrement_ref_count2(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(params_405,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            ((exp_406) ? exp_406 = come_decrement_ref_count2(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            Value_408=node_compile(it_403,info);
            if(            !Value_408) {
                __result286__ = (_Bool)0;
                come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result286__;
            }
            else {
            }
        }
        come_value_409=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_400) {
            check_assign_type(((char*)(__right_value430=xsprintf("invalid list element type"))),list_element_type_400,come_value_409->type,come_value_409,(_Bool)0,(_Bool)1,(_Bool)0,info);
            (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUEphp_push_back(params_397,(struct CVALUE*)come_increment_ref_count(come_value_409));
        __dec_obj135=list_element_type_400;
        list_element_type_400=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_409->type));
        come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_401++;
        come_call_finalizer3(come_value_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_410=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_400));
    list$1sNodephp_push_back(type_values_410->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(params_397),info)));
    type_values_410->mHeap=(_Bool)0;
    static int list_value_num_414=0;
    var_name_415=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_414));
    add_variable_to_table(var_name_415,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_410)),info,(_Bool)0);
    var__416=get_variable_from_table(info->lv_table,var_name_415);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value439=make_define_var(type_values_410,var__416->mCValueName,(_Bool)0,info))));
    (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 360, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_417,"(");
    i_418=0;
    for(    o2_saved_419=(struct list$1CVALUEph*)come_increment_ref_count((params_397)),it_422=list$1CVALUEphp_begin((o2_saved_419));    !list$1CVALUEphp_end((o2_saved_419));    it_422=list$1CVALUEphp_next((o2_saved_419))    ){
        if(        list_element_type_400->mHeap) {
            c_value_425=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)(__right_value442=list$1CVALUEphp_operator_load_element(params_397,i_418)))->type,((struct CVALUE*)(__right_value443=list$1CVALUEphp_operator_load_element(params_397,i_418)))->c_value,info));
            come_call_finalizer3(__right_value442,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value443,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_417,"%s[%d]=%s,\n",var__416->mCValueName,i_418,c_value_425);
            (c_value_425 = come_decrement_ref_count2(c_value_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(source_417,"%s[%d]=%s,\n",var__416->mCValueName,i_418,((struct CVALUE*)(__right_value445=list$1CVALUEphp_operator_load_element(params_397,i_418)))->c_value);
            come_call_finalizer3(__right_value445,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_418++;
    }
    come_call_finalizer3(o2_saved_419,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_429=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 380, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"list",(_Bool)0,info));
    list$1voidphp_push_back(list_type_429->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value451=come_call_cloner(sType_clone, list_element_type_400))))));
    come_call_finalizer3(__right_value451,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_433=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_429));
    fun_name_434="initialize_with_values";
    multiple_assign_var2=((struct tuple2$2charphsGenericsFunp*)(__right_value454=make_generics_function(obj_type_433,(char*)come_increment_ref_count(__builtin_string(fun_name_434)),info,(_Bool)1)));
    name_435=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    generics_fun_436=multiple_assign_var2->v2;
    come_call_finalizer3(__right_value454,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_437=(char*)come_increment_ref_count(name_435);
    fun_438=((struct sFun*)((void*)(__right_value455=map$2voidphvoidphp_at(info->funcs,generics_fun_name_437,((void*)0)))));
    come_call_finalizer3(__right_value455,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_438==((void*)0)) {
        __dec_obj143=generics_fun_name_437;
        generics_fun_name_437=(char*)come_increment_ref_count(create_method_name(obj_type_433,(_Bool)0,((char*)(__right_value456=__builtin_string(fun_name_434))),info,(_Bool)1));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_438=((struct sFun*)((void*)(__right_value458=map$2voidphvoidphp_at(info->funcs,generics_fun_name_437,((void*)0)))));
        come_call_finalizer3(__right_value458,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_438==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_437,info->come_fun->mName);
            __result301__ = (_Bool)1;
            come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_410,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_415 = come_decrement_ref_count2(var_name_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_435 = come_decrement_ref_count2(name_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_437 = come_decrement_ref_count2(generics_fun_name_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result301__;
        }
    }
    result_type_441=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_438->mResultType));
    result_type_441->mStatic=(_Bool)0;
    type_442=list_type_429;
    obj_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 407, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 409, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_444,"1");
    type2_445=(struct sType*)come_increment_ref_count(solve_generics(type_442,type_442,info));
    type_name_446=(char*)come_increment_ref_count(make_type_name_string(type2_445,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_447=(struct sType*)come_increment_ref_count(type2_445);
    any_type_447->mPointerNum=1;
    any_type_447->mHeap=(_Bool)1;
    multiple_assign_var3=((struct tuple4$4charphcharphcharphcharph*)(__right_value466=create_vtable((struct sType*)come_increment_ref_count(any_type_447),info)));
    finalizer_name_448=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    cloner_name_449=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    get_hash_key_name_450=(char*)come_increment_ref_count(multiple_assign_var3->v3);
    equaler_name_451=(char*)come_increment_ref_count(multiple_assign_var3->v4);
    come_call_finalizer3(__right_value466,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj144=obj_value_443->c_value;
    obj_value_443->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_446,type_name_446,((char*)(__right_value467=buffer_to_string(num_string_444))),info->sname,info->sline,type_name_446,finalizer_name_448,cloner_name_449,get_hash_key_name_450,equaler_name_451));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_452=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_445));
    type3_452->mPointerNum++;
    type3_452->mHeap=(_Bool)1;
    type2_445->mHeap=(_Bool)1;
    __dec_obj145=obj_value_443->type;
    obj_value_443->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_445));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_443->type->mPointerNum++;
    obj_value_443->var=((void*)0);
    append_object_to_right_values2(obj_value_443,(struct sType*)come_increment_ref_count(type3_452),info,(_Bool)0);
    come_params_453=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 435, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional2=(((struct sType*)((void*)(__right_value473=list$1voidphp_operator_load_element(fun_438->mParamTypes,0))))->mHeap&&obj_value_443->type->mHeap)),    come_call_finalizer3(__right_value473,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional2) {
        std_move(((struct sType*)((void*)(__right_value474=list$1voidphp_operator_load_element(fun_438->mParamTypes,0)))),obj_value_443->type,obj_value_443,info,(_Bool)1);
        come_call_finalizer3(__right_value474,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_453,(struct CVALUE*)come_increment_ref_count(obj_value_443));
    come_value2_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 442, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj146=come_value2_457->c_value;
    come_value2_457->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(params_397)));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value2_457->type;
    come_value2_457->type=((void*)0);
    come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_457->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_453,(struct CVALUE*)come_increment_ref_count(come_value2_457));
    come_value3_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 450, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj148=come_value3_458->c_value;
    come_value3_458->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__416->mCValueName));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value3_458->type;
    come_value3_458->type=((void*)0);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_458->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_453,(struct CVALUE*)come_increment_ref_count(come_value3_458));
    buffer_append_str(source_417,generics_fun_name_437);
    buffer_append_str(source_417,"(");
    j_459=0;
    for(    o2_saved_460=(struct list$1CVALUEph*)come_increment_ref_count((come_params_453)),it_461=list$1CVALUEphp_begin((o2_saved_460));    !list$1CVALUEphp_end((o2_saved_460));    it_461=list$1CVALUEphp_next((o2_saved_460))    ){
        buffer_append_str(source_417,it_461->c_value);
        if(        j_459!=list$1CVALUEphp_length(come_params_453)-1) {
            buffer_append_str(source_417,",");
        }
        j_459++;
    }
    come_call_finalizer3(o2_saved_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_417,")");
    buffer_append_str(source_417,")");
    come_value4_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 476, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj150=come_value4_462->c_value;
    come_value4_462->c_value=(char*)come_increment_ref_count(buffer_to_string(source_417));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value4_462->type;
    come_value4_462->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_441));
    come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_462->type->mStatic=(_Bool)0;
    come_value4_462->var=((void*)0);
    if(    result_type_441->mHeap) {
        append_object_to_right_values2(come_value4_462,(struct sType*)come_increment_ref_count(result_type_441),info,(_Bool)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_462));
    add_come_last_code(info,"%s",come_value4_462->c_value);
    __result304__ = (_Bool)1;
    come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_410,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_415 = come_decrement_ref_count2(var_name_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_435 = come_decrement_ref_count2(name_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_437 = come_decrement_ref_count2(generics_fun_name_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_441,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_446 = come_decrement_ref_count2(type_name_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_448 = come_decrement_ref_count2(finalizer_name_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_449 = come_decrement_ref_count2(cloner_name_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_450 = come_decrement_ref_count2(get_hash_key_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_451 = come_decrement_ref_count2(equaler_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_452,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_453,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_457,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj131;
struct list$1sNodeph* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj131=self->sname;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj132=self->list_elements;
            come_call_finalizer3(__dec_obj132,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result284__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_398;
struct list_item$1CVALUEph* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer3(prev_it_399,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj133;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj133=self->item;
            come_call_finalizer3(__dec_obj133,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct list_item$1sNodeph* litem_411;
struct sNode* __dec_obj136;
void* __right_value434 = (void*)0;
struct list_item$1sNodeph* litem_412;
struct sNode* __dec_obj137;
void* __right_value435 = (void*)0;
struct list_item$1sNodeph* litem_413;
struct sNode* __dec_obj138;
struct list$1sNodeph* __result287__;
    if(    self->len==0) {
        litem_411=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value433=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_411->prev=((void*)0);
        litem_411->next=((void*)0);
        __dec_obj136=litem_411->item;
        litem_411->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_411;
        self->head=litem_411;
    }
    else if(    self->len==1) {
        litem_412=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value434=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_412->prev=self->head;
        litem_412->next=((void*)0);
        __dec_obj137=litem_412->item;
        litem_412->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_412;
        self->head->next=litem_412;
    }
    else {
        litem_413=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value435=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=self->tail;
        litem_413->next=((void*)0);
        __dec_obj138=litem_413->item;
        litem_413->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_413;
        self->tail=litem_413;
    }
    self->len++;
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_420;
struct CVALUE* __result288__;
struct CVALUE* __result289__;
struct CVALUE* result_421;
struct CVALUE* __result290__;
result_420 = (void*)0;
result_421 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_420,0,sizeof(struct CVALUE*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_420;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->head;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_421,0,sizeof(struct CVALUE*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_421;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_423;
struct CVALUE* __result291__;
struct CVALUE* __result292__;
struct CVALUE* result_424;
struct CVALUE* __result293__;
result_423 = (void*)0;
result_424 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_423,0,sizeof(struct CVALUE*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_423;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_424,0,sizeof(struct CVALUE*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_424;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_426;
int i_427;
struct CVALUE* __result294__;
struct CVALUE* default_value_428;
struct CVALUE* __result295__;
default_value_428 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_426=self->head;
    i_427=0;
    while(it_426!=((void*)0)) {
        if(        position==i_427) {
            __result294__ = gComeFunResultObject = __result_obj__ = it_426->item;
            gComeFunResultObject = (void*)0;
            return __result294__;
        }
        it_426=it_426->next;
        i_427++;
    }
    memset(&default_value_428,0,sizeof(struct CVALUE*));
    __result295__ = gComeFunResultObject = __result_obj__ = default_value_428;
    come_call_finalizer3(default_value_428,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
struct list_item$1voidph* litem_430;
void* __dec_obj139;
void* __right_value449 = (void*)0;
struct list_item$1voidph* litem_431;
void* __dec_obj140;
void* __right_value450 = (void*)0;
struct list_item$1voidph* litem_432;
void* __dec_obj141;
struct list$1voidph* __result296__;
    if(    self->len==0) {
        litem_430=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value448=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        __dec_obj139=litem_430->item;
        litem_430->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj139,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value449=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        __dec_obj140=litem_431->item;
        litem_431->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj140,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value450=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        __dec_obj141=litem_432->item;
        litem_432->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj141,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj142;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj142=self->v1;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_439;
unsigned int it_440;
void* __result297__;
void* __result298__;
void* __result299__;
void* __result300__;
    hash_439=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_440=hash_439;
    while((_Bool)1) {
        if(        self->item_existance[it_440]) {
            if(            come_call_equals((void*)0, self->keys[it_440], key)) {
                __result297__ = gComeFunResultObject = __result_obj__ = self->items[it_440];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
            it_440++;
            if(            it_440>=self->size) {
                it_440=0;
            }
            else if(            it_440==hash_439) {
                __result298__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
        }
        else {
            __result299__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
    }
    __result300__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_454;
int i_455;
void* __result302__;
void* default_value_456;
void* __result303__;
default_value_456 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_454=self->head;
    i_455=0;
    while(it_454!=((void*)0)) {
        if(        position==i_455) {
            __result302__ = gComeFunResultObject = __result_obj__ = it_454->item;
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
        it_454=it_454->next;
        i_455++;
    }
    memset(&default_value_456,0,sizeof(void*));
    __result303__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_456);
    come_call_finalizer3(default_value_456,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value485 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj152;
struct sTupleNode* __result305__;
    ((struct sNodeBase*)(__right_value485=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value485,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj152,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value486 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value486=__builtin_string("sTupleNode")));
    (__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_465;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1voidph* tuple_types_466;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1CVALUEph* tuple_values_467;
int n_468;
struct list$1tuple2$2charphsNodephph* o2_saved_469;
struct tuple2$2charphsNodeph* it_472;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* name_475=0;
struct sNode* node_476=0;
void* __right_value491 = (void*)0;
_Bool _if_conditional3;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* value_node_477;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* exp_478;
_Bool Value_479;
_Bool __result313__;
_Bool Value_480;
_Bool __result314__;
void* __right_value496 = (void*)0;
struct CVALUE* come_value_481;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* type_483;
char* __dec_obj159;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* type_484;
struct list$1voidph* o2_saved_485;
struct sType* it_488;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* obj_value_491;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct buffer* num_string_492;
void* __right_value512 = (void*)0;
struct sType* type2_493;
void* __right_value513 = (void*)0;
char* type_name_494;
struct sType* any_type_495;
void* __right_value514 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var5 = (void*)0;
char* finalizer_name_496=0;
char* cloner_name_497=0;
char* get_hash_key_name_498=0;
char* equaler_name_499=0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* __dec_obj160;
void* __right_value517 = (void*)0;
struct sType* type3_500;
void* __right_value518 = (void*)0;
struct sType* __dec_obj161;
void* __right_value519 = (void*)0;
struct sType* obj_type_501;
char* fun_name_502;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var6 = (void*)0;
char* name_503=0;
struct sGenericsFun* generics_fun_504=0;
char* generics_fun_name_505;
void* __right_value522 = (void*)0;
struct sFun* fun_506;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj162;
void* __right_value525 = (void*)0;
_Bool __result323__;
void* __right_value526 = (void*)0;
struct sType* result_type_507;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1CVALUEph* come_params_508;
void* __right_value529 = (void*)0;
_Bool _if_conditional4;
void* __right_value530 = (void*)0;
int i_509;
struct list$1CVALUEph* o2_saved_510;
struct CVALUE* it_511;
void* __right_value531 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
_Bool _if_conditional5;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct buffer* buf_513;
int j_514;
struct list$1CVALUEph* o2_saved_515;
struct CVALUE* it_516;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value2_517;
void* __right_value539 = (void*)0;
char* __dec_obj163;
void* __right_value540 = (void*)0;
struct sType* __dec_obj164;
_Bool __result324__;
    tuple_elements_465=self->tuple_elements;
    tuple_types_466=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 513, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_467=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 514, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_468=0;
    for(    o2_saved_469=(tuple_elements_465),it_472=list$1tuple2$2charphsNodephphp_begin((o2_saved_469));    !list$1tuple2$2charphsNodephphp_end((o2_saved_469));    it_472=list$1tuple2$2charphsNodephphp_next((o2_saved_469))    ){
        multiple_assign_var4=it_472;
        name_475=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        node_476=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value491=node_476->kind(node_476->_protocol_obj))),"sWildCard"))),        (__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional3) {
            value_node_477=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value492=xsprintf("Value"))),info));
            (__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_478=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_477),(char*)come_increment_ref_count(xsprintf("v%d",n_468+1)),info));
            Value_479=node_compile(exp_478,info);
            if(            !Value_479) {
                __result313__ = (_Bool)0;
                ((value_node_477) ? value_node_477 = come_decrement_ref_count2(value_node_477, ((struct sNode*)value_node_477)->finalize, ((struct sNode*)value_node_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((exp_478) ? exp_478 = come_decrement_ref_count2(exp_478, ((struct sNode*)exp_478)->finalize, ((struct sNode*)exp_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (name_475 = come_decrement_ref_count2(name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_476) ? node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(tuple_types_466,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result313__;
            }
            else {
            }
            ((value_node_477) ? value_node_477 = come_decrement_ref_count2(value_node_477, ((struct sNode*)value_node_477)->finalize, ((struct sNode*)value_node_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp_478) ? exp_478 = come_decrement_ref_count2(exp_478, ((struct sNode*)exp_478)->finalize, ((struct sNode*)exp_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            Value_480=node_compile(node_476,info);
            if(            !Value_480) {
                __result314__ = (_Bool)0;
                (name_475 = come_decrement_ref_count2(name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_476) ? node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(tuple_types_466,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result314__;
            }
            else {
            }
        }
        come_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_467,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_481)));
        type_483=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_481->type));
        __dec_obj159=type_483->mTupleName;
        type_483->mTupleName=(char*)come_increment_ref_count(name_475);
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1voidphp_push_back(tuple_types_466,(struct sType*)come_increment_ref_count(type_483));
        n_468++;
        (name_475 = come_decrement_ref_count2(name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_476) ? node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_484=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 544, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value505=xsprintf("tuple%d",list$1voidphp_length(tuple_types_466)))),(_Bool)0,info));
    (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_485=(struct list$1voidph*)come_increment_ref_count((tuple_types_466)),it_488=((struct sType*)list$1voidphp_begin((o2_saved_485)));    !list$1voidphp_end((o2_saved_485));    it_488=((struct sType*)list$1voidphp_next((o2_saved_485)))    ){
        list$1voidphp_push_back(type_484->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value507=come_call_cloner(sType_clone, it_488))))));
        come_call_finalizer3(__right_value507,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_485,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_491=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 550, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_492=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 552, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_492,"1");
    type2_493=(struct sType*)come_increment_ref_count(solve_generics(type_484,type_484,info));
    type_name_494=(char*)come_increment_ref_count(make_type_name_string(type2_493,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_495=(struct sType*)come_increment_ref_count(type2_493);
    any_type_495->mPointerNum=1;
    any_type_495->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4charphcharphcharphcharph*)(__right_value514=create_vtable((struct sType*)come_increment_ref_count(any_type_495),info)));
    finalizer_name_496=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_497=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_498=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_499=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    come_call_finalizer3(__right_value514,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj160=obj_value_491->c_value;
    obj_value_491->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_494,type_name_494,((char*)(__right_value515=buffer_to_string(num_string_492))),info->sname,info->sline,type_name_494,finalizer_name_496,cloner_name_497,get_hash_key_name_498,equaler_name_499));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_500=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_493));
    type3_500->mPointerNum++;
    type3_500->mHeap=(_Bool)1;
    type2_493->mHeap=(_Bool)1;
    __dec_obj161=obj_value_491->type;
    obj_value_491->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_493));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_491->type->mPointerNum++;
    obj_value_491->var=((void*)0);
    append_object_to_right_values2(obj_value_491,(struct sType*)come_increment_ref_count(type3_500),info,(_Bool)0);
    obj_type_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_493));
    fun_name_502="initialize";
    multiple_assign_var6=((struct tuple2$2charphsGenericsFunp*)(__right_value521=make_generics_function(obj_type_501,(char*)come_increment_ref_count(__builtin_string(fun_name_502)),info,(_Bool)1)));
    name_503=(char*)come_increment_ref_count(multiple_assign_var6->v1);
    generics_fun_504=multiple_assign_var6->v2;
    come_call_finalizer3(__right_value521,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_505=(char*)come_increment_ref_count(name_503);
    fun_506=((struct sFun*)((void*)(__right_value522=map$2voidphvoidphp_at(info->funcs,generics_fun_name_505,((void*)0)))));
    come_call_finalizer3(__right_value522,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_506==((void*)0)) {
        __dec_obj162=generics_fun_name_505;
        generics_fun_name_505=(char*)come_increment_ref_count(create_method_name(obj_type_501,(_Bool)0,((char*)(__right_value523=__builtin_string(fun_name_502))),info,(_Bool)1));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_506=((struct sFun*)((void*)(__right_value525=map$2voidphvoidphp_at(info->funcs,generics_fun_name_505,((void*)0)))));
        come_call_finalizer3(__right_value525,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_506==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_505,info->come_fun->mName);
            __result323__ = (_Bool)1;
            come_call_finalizer3(tuple_types_466,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(any_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_496 = come_decrement_ref_count2(finalizer_name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_497 = come_decrement_ref_count2(cloner_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_498 = come_decrement_ref_count2(get_hash_key_name_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_499 = come_decrement_ref_count2(equaler_name_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type3_500,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_505 = come_decrement_ref_count2(generics_fun_name_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result323__;
        }
    }
    result_type_507=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_506->mResultType));
    result_type_507->mStatic=(_Bool)0;
    come_params_508=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 600, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)((void*)(__right_value529=list$1voidphp_operator_load_element(fun_506->mParamTypes,0))))->mHeap&&obj_value_491->type->mHeap)),    come_call_finalizer3(__right_value529,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)((void*)(__right_value530=list$1voidphp_operator_load_element(fun_506->mParamTypes,0)))),obj_value_491->type,obj_value_491,info,(_Bool)1);
        come_call_finalizer3(__right_value530,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_508,(struct CVALUE*)come_increment_ref_count(obj_value_491));
    i_509=1;
    for(    o2_saved_510=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_467)),it_511=list$1CVALUEphp_begin((o2_saved_510));    !list$1CVALUEphp_end((o2_saved_510));    it_511=list$1CVALUEphp_next((o2_saved_510))    ){
        come_value_512=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_511));
        if(        (_if_conditional5=(((struct sType*)((void*)(__right_value532=list$1voidphp_operator_load_element(fun_506->mParamTypes,i_509))))&&((struct sType*)((void*)(__right_value533=list$1voidphp_operator_load_element(fun_506->mParamTypes,i_509))))->mHeap&&come_value_512->type->mHeap)),        come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value533,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional5) {
            std_move(((struct sType*)((void*)(__right_value534=list$1voidphp_operator_load_element(fun_506->mParamTypes,i_509)))),come_value_512->type,come_value_512,info,(_Bool)1);
            come_call_finalizer3(__right_value534,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_508,(struct CVALUE*)come_increment_ref_count(come_value_512));
        i_509++;
        come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 619, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_513,generics_fun_name_505);
    buffer_append_str(buf_513,"(");
    j_514=0;
    for(    o2_saved_515=(struct list$1CVALUEph*)come_increment_ref_count((come_params_508)),it_516=list$1CVALUEphp_begin((o2_saved_515));    !list$1CVALUEphp_end((o2_saved_515));    it_516=list$1CVALUEphp_next((o2_saved_515))    ){
        buffer_append_str(buf_513,it_516->c_value);
        if(        j_514!=list$1CVALUEphp_length(come_params_508)-1) {
            buffer_append_str(buf_513,",");
        }
        j_514++;
    }
    come_call_finalizer3(o2_saved_515,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_513,")");
    come_value2_517=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 636, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj163=come_value2_517->c_value;
    come_value2_517->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_513));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=come_value2_517->type;
    come_value2_517->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_507));
    come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_517->type->mStatic=(_Bool)0;
    come_value2_517->var=((void*)0);
    if(    result_type_507->mHeap) {
        append_object_to_right_values2(come_value2_517,(struct sType*)come_increment_ref_count(result_type_507),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_517->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_517));
    __result324__ = (_Bool)1;
    come_call_finalizer3(tuple_types_466,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_496 = come_decrement_ref_count2(finalizer_name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_497 = come_decrement_ref_count2(cloner_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_498 = come_decrement_ref_count2(get_hash_key_name_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_499 = come_decrement_ref_count2(equaler_name_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_500,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_505 = come_decrement_ref_count2(generics_fun_name_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_513,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result324__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_463;
struct list_item$1tuple2$2charphsNodephph* prev_it_464;
    it_463=self->head;
    while(it_463!=((void*)0)) {
        prev_it_464=it_463;
        it_463=it_463->next;
        come_call_finalizer3(prev_it_464,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj153;
struct list$1tuple2$2charphsNodephph* __dec_obj154;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj154=self->tuple_elements;
            come_call_finalizer3(__dec_obj154,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_470;
struct tuple2$2charphsNodeph* __result307__;
struct tuple2$2charphsNodeph* __result308__;
struct tuple2$2charphsNodeph* result_471;
struct tuple2$2charphsNodeph* __result309__;
result_470 = (void*)0;
result_471 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_470,0,sizeof(struct tuple2$2charphsNodeph*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_470;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->it=self->head;
    if(    self->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_471,0,sizeof(struct tuple2$2charphsNodeph*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_471;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_473;
struct tuple2$2charphsNodeph* __result310__;
struct tuple2$2charphsNodeph* __result311__;
struct tuple2$2charphsNodeph* result_474;
struct tuple2$2charphsNodeph* __result312__;
result_473 = (void*)0;
result_474 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_473,0,sizeof(struct tuple2$2charphsNodeph*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_473;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_474,0,sizeof(struct tuple2$2charphsNodeph*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_474;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result315__;
void* __right_value497 = (void*)0;
struct CVALUE* result_482;
void* __right_value498 = (void*)0;
char* __dec_obj155;
void* __right_value499 = (void*)0;
struct sType* __dec_obj156;
void* __right_value500 = (void*)0;
char* __dec_obj157;
void* __right_value501 = (void*)0;
char* __dec_obj158;
struct CVALUE* __result316__;
    if(    self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_482=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj155=result_482->c_value;
        result_482->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj156=result_482->type;
        result_482->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_482->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_482->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj157=result_482->c_value_without_right_value_objects;
        result_482->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj158=result_482->c_value_without_cast_object_value;
        result_482->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_482;
    come_call_finalizer3(result_482,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_486;
void* __result317__;
void* __result318__;
void* result_487;
void* __result319__;
result_486 = (void*)0;
result_487 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_486,0,sizeof(void*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_486;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->it=self->head;
    if(    self->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_487,0,sizeof(void*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_487;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_489;
void* __result320__;
void* __result321__;
void* result_490;
void* __result322__;
result_489 = (void*)0;
result_490 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_489,0,sizeof(void*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_489;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_490,0,sizeof(void*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_490;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list$1sNodeph* __dec_obj165;
struct sSomeNode* __result325__;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value541,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj165=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj165,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value542 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value542=__builtin_string("sSomeNode")));
    (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_518;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1voidph* tuple_types_519;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1CVALUEph* tuple_values_520;
struct list$1sNodeph* o2_saved_521;
struct sNode* it_522;
_Bool Value_523;
_Bool __result327__;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_524;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* type_525;
struct list$1voidph* o2_saved_526;
struct sType* it_527;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* obj_value_528;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct buffer* num_string_529;
void* __right_value558 = (void*)0;
struct sType* type2_530;
void* __right_value559 = (void*)0;
char* type_name_531;
void* __right_value560 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var7 = (void*)0;
char* finalizer_name_532=0;
char* cloner_name_533=0;
char* get_hash_key_name_534=0;
char* equaler_name_535=0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* __dec_obj168;
void* __right_value563 = (void*)0;
struct sType* type3_536;
void* __right_value564 = (void*)0;
struct sType* __dec_obj169;
void* __right_value565 = (void*)0;
struct sType* obj_type_537;
char* fun_name_538;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_539=0;
struct sGenericsFun* generics_fun_540=0;
char* generics_fun_name_541;
void* __right_value568 = (void*)0;
struct sFun* fun_542;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
char* __dec_obj170;
void* __right_value571 = (void*)0;
_Bool __result328__;
void* __right_value572 = (void*)0;
struct sType* result_type_543;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1CVALUEph* come_params_544;
void* __right_value575 = (void*)0;
_Bool _if_conditional6;
void* __right_value576 = (void*)0;
int i_545;
struct list$1CVALUEph* o2_saved_546;
struct CVALUE* it_547;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_548;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
_Bool _if_conditional7;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct buffer* buf_549;
int j_550;
struct list$1CVALUEph* o2_saved_551;
struct CVALUE* it_552;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value2_553;
void* __right_value585 = (void*)0;
char* __dec_obj171;
void* __right_value586 = (void*)0;
struct sType* __dec_obj172;
_Bool __result329__;
    tuple_elements_518=self->tuple_elements;
    tuple_types_519=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 673, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_520=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 674, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_521=(tuple_elements_518),it_522=list$1sNodephp_begin((o2_saved_521));    !list$1sNodephp_end((o2_saved_521));    it_522=list$1sNodephp_next((o2_saved_521))    ){
        Value_523=node_compile(it_522,info);
        if(        !Value_523) {
            __result327__ = (_Bool)0;
            come_call_finalizer3(tuple_types_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result327__;
        }
        else {
        }
        come_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_520,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_524)));
        list$1voidphp_push_back(tuple_types_519,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_524->type)));
        come_call_finalizer3(come_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_525=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 688, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value551=xsprintf("tuple%d",list$1voidphp_length(tuple_types_519)))),(_Bool)0,info));
    (__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_526=(struct list$1voidph*)come_increment_ref_count((tuple_types_519)),it_527=((struct sType*)list$1voidphp_begin((o2_saved_526)));    !list$1voidphp_end((o2_saved_526));    it_527=((struct sType*)list$1voidphp_next((o2_saved_526)))    ){
        list$1voidphp_push_back(type_525->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value553=come_call_cloner(sType_clone, it_527))))));
        come_call_finalizer3(__right_value553,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_526,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 694, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 696, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_529,"1");
    type2_530=(struct sType*)come_increment_ref_count(solve_generics(type_525,type_525,info));
    type_name_531=(char*)come_increment_ref_count(make_type_name_string(type2_530,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var7=((struct tuple4$4charphcharphcharphcharph*)(__right_value560=create_vtable((struct sType*)come_increment_ref_count(type2_530),info)));
    finalizer_name_532=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_533=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_534=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_535=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    come_call_finalizer3(__right_value560,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj168=obj_value_528->c_value;
    obj_value_528->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_531,type_name_531,((char*)(__right_value561=buffer_to_string(num_string_529))),info->sname,info->sline,type_name_531));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_536=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_530));
    type3_536->mPointerNum++;
    type3_536->mHeap=(_Bool)1;
    type2_530->mHeap=(_Bool)1;
    __dec_obj169=obj_value_528->type;
    obj_value_528->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_530));
    come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_528->type->mPointerNum++;
    obj_value_528->var=((void*)0);
    append_object_to_right_values2(obj_value_528,(struct sType*)come_increment_ref_count(type3_536),info,(_Bool)0);
    obj_type_537=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_530));
    fun_name_538="initialize";
    multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value567=make_generics_function(obj_type_537,(char*)come_increment_ref_count(__builtin_string(fun_name_538)),info,(_Bool)1)));
    name_539=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_540=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value567,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_541=(char*)come_increment_ref_count(name_539);
    fun_542=((struct sFun*)((void*)(__right_value568=map$2voidphvoidphp_at(info->funcs,generics_fun_name_541,((void*)0)))));
    come_call_finalizer3(__right_value568,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_542==((void*)0)) {
        __dec_obj170=generics_fun_name_541;
        generics_fun_name_541=(char*)come_increment_ref_count(create_method_name(obj_type_537,(_Bool)0,((char*)(__right_value569=__builtin_string(fun_name_538))),info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_542=((struct sFun*)((void*)(__right_value571=map$2voidphvoidphp_at(info->funcs,generics_fun_name_541,((void*)0)))));
        come_call_finalizer3(__right_value571,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_542==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_541,info->come_fun->mName);
            __result328__ = (_Bool)1;
            come_call_finalizer3(tuple_types_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_530,sType_finalize, 0, 0, 0, 0, (void*)0);
            (type_name_531 = come_decrement_ref_count2(type_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (finalizer_name_532 = come_decrement_ref_count2(finalizer_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_533 = come_decrement_ref_count2(cloner_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_534 = come_decrement_ref_count2(get_hash_key_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_535 = come_decrement_ref_count2(equaler_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type3_536,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_541 = come_decrement_ref_count2(generics_fun_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result328__;
        }
    }
    result_type_543=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_542->mResultType));
    result_type_543->mStatic=(_Bool)0;
    come_params_544=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 740, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional6=(((struct sType*)((void*)(__right_value575=list$1voidphp_operator_load_element(fun_542->mParamTypes,0))))->mHeap&&obj_value_528->type->mHeap)),    come_call_finalizer3(__right_value575,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional6) {
        std_move(((struct sType*)((void*)(__right_value576=list$1voidphp_operator_load_element(fun_542->mParamTypes,0)))),obj_value_528->type,obj_value_528,info,(_Bool)1);
        come_call_finalizer3(__right_value576,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_544,(struct CVALUE*)come_increment_ref_count(obj_value_528));
    i_545=1;
    for(    o2_saved_546=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_520)),it_547=list$1CVALUEphp_begin((o2_saved_546));    !list$1CVALUEphp_end((o2_saved_546));    it_547=list$1CVALUEphp_next((o2_saved_546))    ){
        come_value_548=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_547));
        if(        (_if_conditional7=(((struct sType*)((void*)(__right_value578=list$1voidphp_operator_load_element(fun_542->mParamTypes,i_545))))&&((struct sType*)((void*)(__right_value579=list$1voidphp_operator_load_element(fun_542->mParamTypes,i_545))))->mHeap&&come_value_548->type->mHeap)),        come_call_finalizer3(__right_value578,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional7) {
            std_move(((struct sType*)((void*)(__right_value580=list$1voidphp_operator_load_element(fun_542->mParamTypes,i_545)))),come_value_548->type,come_value_548,info,(_Bool)1);
            come_call_finalizer3(__right_value580,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_544,(struct CVALUE*)come_increment_ref_count(come_value_548));
        i_545++;
        come_call_finalizer3(come_value_548,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_549=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 759, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_549,generics_fun_name_541);
    buffer_append_str(buf_549,"(");
    j_550=0;
    for(    o2_saved_551=(struct list$1CVALUEph*)come_increment_ref_count((come_params_544)),it_552=list$1CVALUEphp_begin((o2_saved_551));    !list$1CVALUEphp_end((o2_saved_551));    it_552=list$1CVALUEphp_next((o2_saved_551))    ){
        buffer_append_str(buf_549,it_552->c_value);
        if(        j_550!=list$1CVALUEphp_length(come_params_544)-1) {
            buffer_append_str(buf_549,",");
        }
        j_550++;
    }
    come_call_finalizer3(o2_saved_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_549,")");
    come_value2_553=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 776, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj171=come_value2_553->c_value;
    come_value2_553->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_549));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=come_value2_553->type;
    come_value2_553->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_543));
    come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_553->type->mStatic=(_Bool)0;
    come_value2_553->var=((void*)0);
    if(    result_type_543->mHeap) {
        append_object_to_right_values2(come_value2_553,(struct sType*)come_increment_ref_count(result_type_543),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_553->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_553));
    __result329__ = (_Bool)1;
    come_call_finalizer3(tuple_types_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_530,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_531 = come_decrement_ref_count2(type_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_532 = come_decrement_ref_count2(finalizer_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_533 = come_decrement_ref_count2(cloner_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_534 = come_decrement_ref_count2(get_hash_key_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_535 = come_decrement_ref_count2(equaler_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_536,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_541 = come_decrement_ref_count2(generics_fun_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_544,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_549,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result329__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj166;
struct list$1sNodeph* __dec_obj167;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj166=self->sname;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj167=self->tuple_elements;
            come_call_finalizer3(__dec_obj167,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value587 = (void*)0;
struct sNullReturnValue* __result330__;
    ((struct sNodeBase*)(__right_value587=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value587,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
char* __result331__;
    __result331__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value588=__builtin_string("sNullReturnValue")));
    (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result331__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct buffer* buf_555;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
char* var_name_557;
void* __right_value595 = (void*)0;
struct sType* result_type_558;
void* __right_value596 = (void*)0;
struct sType* result_type2_559;
struct sType* left_type_560;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct CVALUE* come_value2_561;
char* __dec_obj174;
struct sType* __dec_obj175;
    if(    info->come_fun) {
        come_value_554=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 811, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_555=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 813, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_556=0;
        num_556++;
        var_name_557=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value593=int_to_string(num_556)))));
        (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_558=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_559=(struct sType*)come_increment_ref_count(solve_generics(result_type_558,info->generics_type,info));
        left_type_560=(struct sType*)come_increment_ref_count(result_type2_559);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value597=make_define_var(left_type_560,var_name_557,(_Bool)0,info))));
        (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_557,((char*)(__right_value598=make_type_name_string(left_type_560,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_561=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 829, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj174=come_value2_561->c_value;
        come_value2_561->c_value=(char*)come_increment_ref_count(var_name_557);
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj175=come_value2_561->type;
        come_value2_561->type=(struct sType*)come_increment_ref_count(result_type2_559);
        come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_561->type->mStatic=(_Bool)0;
        come_value2_561->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_561));
        come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_557 = come_decrement_ref_count2(var_name_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_559,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj173;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj173=self->sname;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value605 = (void*)0;
struct sNode* __result334__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 846, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value602=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 846, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value605=_inf_value2));
    come_call_finalizer3(__right_value602,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value605) ? __right_value605 = come_decrement_ref_count2(__right_value605, ((struct sNode*)__right_value605)->finalize, ((struct sNode*)__right_value605)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result332__;
void* __right_value603 = (void*)0;
struct sNullReturnValue* result_562;
void* __right_value604 = (void*)0;
char* __dec_obj176;
struct sNullReturnValue* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_562=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_562->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result_562->sname;
        result_562->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_562->sline_real=self->sline_real;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_562;
    come_call_finalizer3(result_562,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value606 = (void*)0;
struct sNullReturnValueOfException* __result335__;
    ((struct sNodeBase*)(__right_value606=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value606,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value607 = (void*)0;
char* __result336__;
    __result336__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value607=__builtin_string("sNullReturnValue")));
    (__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result336__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct buffer* buf_564;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
char* var_name_566;
void* __right_value614 = (void*)0;
struct sType* result_type_567;
void* __right_value615 = (void*)0;
struct sType* result_type2_568;
struct sType* __dec_obj178;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sType* left_type_569;
_Bool __result337__;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct CVALUE* come_value2_570;
char* __dec_obj179;
struct sType* __dec_obj180;
    if(    info->come_fun) {
        come_value_563=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 864, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_564=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 866, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_565=0;
        num_565++;
        var_name_566=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value612=int_to_string(num_565)))));
        (__right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_567=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_568=(struct sType*)come_increment_ref_count(solve_generics(result_type_567,info->generics_type,info));
        if(        result_type2_568->mNoSolvedGenericsType) {
            __dec_obj178=result_type2_568;
            result_type2_568=(struct sType*)come_increment_ref_count(result_type2_568->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value616=list$1voidphp_operator_load_element(result_type2_568->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value616,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        left_type_569==((void*)0)||string_operator_not_equals(result_type2_568->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result337__ = (_Bool)0;
            come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_564,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_566 = come_decrement_ref_count2(var_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result337__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value618=make_define_var(left_type_569,var_name_566,(_Bool)0,info))));
        (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_566,((char*)(__right_value619=make_type_name_string(left_type_569,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_570=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 891, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj179=come_value2_570->c_value;
        come_value2_570->c_value=(char*)come_increment_ref_count(var_name_566);
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj180=come_value2_570->type;
        come_value2_570->type=(struct sType*)come_increment_ref_count(left_type_569);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_570->type->mStatic=(_Bool)0;
        come_value2_570->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_570));
        come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_564,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_566 = come_decrement_ref_count2(var_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj177;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj177=self->sname;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value626 = (void*)0;
struct sNode* __result340__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 908, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value623=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 908, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value626=_inf_value3));
    come_call_finalizer3(__right_value623,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value626) ? __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result338__;
void* __right_value624 = (void*)0;
struct sNullReturnValueOfException* result_571;
void* __right_value625 = (void*)0;
char* __dec_obj181;
struct sNullReturnValueOfException* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_571=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_571->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_571->sname;
        result_571->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_571->sline_real=self->sline_real;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_571;
    come_call_finalizer3(result_571,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value627 = (void*)0;
struct sType* __dec_obj182;
struct sNullValue* __result341__;
    ((struct sNodeBase*)(__right_value627=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value627,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj182=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value628 = (void*)0;
char* __result342__;
    __result342__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value628=__builtin_string("sNullValue")));
    (__right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result342__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_572;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* buf_573;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
char* var_name_575;
struct sType* left_type_576;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct CVALUE* come_value2_577;
char* __dec_obj185;
struct sType* __dec_obj186;
_Bool __result343__;
    come_value_572=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 927, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_573=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 929, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    static int num_574=0;
    num_574++;
    var_name_575=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value633=int_to_string(num_574)))));
    (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_576=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value635=make_define_var(left_type_576,var_name_575,(_Bool)0,info))));
    (__right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_575,((char*)(__right_value636=make_type_name_string(left_type_576,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_577=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 941, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj185=come_value2_577->c_value;
    come_value2_577->c_value=(char*)come_increment_ref_count(var_name_575);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj186=come_value2_577->type;
    come_value2_577->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_577->type->mStatic=(_Bool)0;
    come_value2_577->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_577));
    __result343__ = (_Bool)1;
    come_call_finalizer3(come_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_573,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_575 = come_decrement_ref_count2(var_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result343__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj183;
struct sType* __dec_obj184;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj183=self->sname;
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj184=self->type;
            come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value644 = (void*)0;
struct sNode* __result346__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 957, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value640=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 957, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result346__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value640,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value644) ? __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result344__;
void* __right_value641 = (void*)0;
struct sNullValue* result_578;
void* __right_value642 = (void*)0;
char* __dec_obj187;
void* __right_value643 = (void*)0;
struct sType* __dec_obj188;
struct sNullValue* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_578=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result_578->sname;
        result_578->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj188=result_578->type;
        result_578->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_578;
    come_call_finalizer3(result_578,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value645 = (void*)0;
struct list$1sNodeph* __dec_obj189;
struct sNoneNode* __result347__;
    ((struct sNodeBase*)(__right_value645=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value645,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj189=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj189,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
char* __result348__;
    __result348__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value646=__builtin_string("sNoneNode")));
    (__right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result348__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_579;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1voidph* tuple_types_580;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1CVALUEph* tuple_values_581;
int i_582;
struct list$1sNodeph* o2_saved_583;
struct sNode* it_584;
_Bool Value_585;
_Bool __result349__;
void* __right_value651 = (void*)0;
struct CVALUE* come_value_586;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* string_type_587;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* type_588;
struct list$1voidph* o2_saved_589;
struct sType* it_590;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* obj_value_591;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct buffer* num_string_592;
void* __right_value665 = (void*)0;
struct sType* type2_593;
void* __right_value666 = (void*)0;
char* type_name_594;
void* __right_value667 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var9 = (void*)0;
char* finalizer_name_595=0;
char* cloner_name_596=0;
char* get_hash_key_name_597=0;
char* equaler_name_598=0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
char* __dec_obj192;
void* __right_value670 = (void*)0;
struct sType* type3_599;
void* __right_value671 = (void*)0;
struct sType* __dec_obj193;
void* __right_value672 = (void*)0;
struct sType* obj_type_600;
char* fun_name_601;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var10 = (void*)0;
char* name_602=0;
struct sGenericsFun* generics_fun_603=0;
char* generics_fun_name_604;
void* __right_value675 = (void*)0;
struct sFun* fun_605;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* __dec_obj194;
void* __right_value678 = (void*)0;
_Bool __result350__;
void* __right_value679 = (void*)0;
struct sType* result_type_606;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1CVALUEph* come_params_607;
void* __right_value682 = (void*)0;
_Bool _if_conditional8;
void* __right_value683 = (void*)0;
struct list$1CVALUEph* o2_saved_608;
struct CVALUE* it_609;
void* __right_value684 = (void*)0;
struct CVALUE* come_value_610;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
_Bool _if_conditional9;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct buffer* buf_611;
int j_612;
struct list$1CVALUEph* o2_saved_613;
struct CVALUE* it_614;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct CVALUE* come_value2_615;
void* __right_value692 = (void*)0;
char* __dec_obj195;
void* __right_value693 = (void*)0;
struct sType* __dec_obj196;
_Bool __result351__;
    tuple_elements_579=self->tuple_elements;
    tuple_types_580=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 977, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_581=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 978, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_582=0;
    for(    o2_saved_583=(tuple_elements_579),it_584=list$1sNodephp_begin((o2_saved_583));    !list$1sNodephp_end((o2_saved_583));    it_584=list$1sNodephp_next((o2_saved_583))    ){
        Value_585=node_compile(it_584,info);
        if(        !Value_585) {
            __result349__ = (_Bool)0;
            come_call_finalizer3(tuple_types_580,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result349__;
        }
        else {
        }
        come_value_586=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_581,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_586)));
        list$1voidphp_push_back(tuple_types_580,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_586->type)));
        if(        i_582==1) {
            string_type_587=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 993, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
            string_type_587->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value656=xsprintf("invalid none type"))),string_type_587,come_value_586->type,come_value_586,(_Bool)0,(_Bool)1,(_Bool)0,info);
            (__right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(string_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_582++;
        come_call_finalizer3(come_value_586,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_588=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1001, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value658=xsprintf("tuple%d",list$1voidphp_length(tuple_types_580)))),(_Bool)0,info));
    (__right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_589=(struct list$1voidph*)come_increment_ref_count((tuple_types_580)),it_590=((struct sType*)list$1voidphp_begin((o2_saved_589)));    !list$1voidphp_end((o2_saved_589));    it_590=((struct sType*)list$1voidphp_next((o2_saved_589)))    ){
        list$1voidphp_push_back(type_588->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value660=come_call_cloner(sType_clone, it_590))))));
        come_call_finalizer3(__right_value660,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_589,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_591=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1007, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_592=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1009, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_592,"1");
    type2_593=(struct sType*)come_increment_ref_count(solve_generics(type_588,type_588,info));
    type_name_594=(char*)come_increment_ref_count(make_type_name_string(type2_593,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var9=((struct tuple4$4charphcharphcharphcharph*)(__right_value667=create_vtable((struct sType*)come_increment_ref_count(type2_593),info)));
    finalizer_name_595=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    cloner_name_596=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    get_hash_key_name_597=(char*)come_increment_ref_count(multiple_assign_var9->v3);
    equaler_name_598=(char*)come_increment_ref_count(multiple_assign_var9->v4);
    come_call_finalizer3(__right_value667,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj192=obj_value_591->c_value;
    obj_value_591->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_594,type_name_594,((char*)(__right_value668=buffer_to_string(num_string_592))),info->sname,info->sline,type_name_594));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_599=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_593));
    type3_599->mPointerNum++;
    type3_599->mHeap=(_Bool)1;
    type2_593->mHeap=(_Bool)1;
    __dec_obj193=obj_value_591->type;
    obj_value_591->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_593));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_591->type->mPointerNum++;
    obj_value_591->var=((void*)0);
    append_object_to_right_values2(obj_value_591,(struct sType*)come_increment_ref_count(type3_599),info,(_Bool)0);
    obj_type_600=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_593));
    fun_name_601="initialize";
    multiple_assign_var10=((struct tuple2$2charphsGenericsFunp*)(__right_value674=make_generics_function(obj_type_600,(char*)come_increment_ref_count(__builtin_string(fun_name_601)),info,(_Bool)1)));
    name_602=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    generics_fun_603=multiple_assign_var10->v2;
    come_call_finalizer3(__right_value674,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_604=(char*)come_increment_ref_count(name_602);
    fun_605=((struct sFun*)((void*)(__right_value675=map$2voidphvoidphp_at(info->funcs,generics_fun_name_604,((void*)0)))));
    come_call_finalizer3(__right_value675,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_605==((void*)0)) {
        __dec_obj194=generics_fun_name_604;
        generics_fun_name_604=(char*)come_increment_ref_count(create_method_name(obj_type_600,(_Bool)0,((char*)(__right_value676=__builtin_string(fun_name_601))),info,(_Bool)1));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_605=((struct sFun*)((void*)(__right_value678=map$2voidphvoidphp_at(info->funcs,generics_fun_name_604,((void*)0)))));
        come_call_finalizer3(__right_value678,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_605==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_604,info->come_fun->mName);
            __result350__ = (_Bool)1;
            come_call_finalizer3(tuple_types_580,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_591,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_592,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_593,sType_finalize, 0, 0, 0, 0, (void*)0);
            (type_name_594 = come_decrement_ref_count2(type_name_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (finalizer_name_595 = come_decrement_ref_count2(finalizer_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_596 = come_decrement_ref_count2(cloner_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_597 = come_decrement_ref_count2(get_hash_key_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_598 = come_decrement_ref_count2(equaler_name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type3_599,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_604 = come_decrement_ref_count2(generics_fun_name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result350__;
        }
    }
    result_type_606=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_605->mResultType));
    result_type_606->mStatic=(_Bool)0;
    come_params_607=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1053, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional8=(((struct sType*)((void*)(__right_value682=list$1voidphp_operator_load_element(fun_605->mParamTypes,0))))->mHeap&&obj_value_591->type->mHeap)),    come_call_finalizer3(__right_value682,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional8) {
        std_move(((struct sType*)((void*)(__right_value683=list$1voidphp_operator_load_element(fun_605->mParamTypes,0)))),obj_value_591->type,obj_value_591,info,(_Bool)1);
        come_call_finalizer3(__right_value683,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_607,(struct CVALUE*)come_increment_ref_count(obj_value_591));
    i_582=1;
    for(    o2_saved_608=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_581)),it_609=list$1CVALUEphp_begin((o2_saved_608));    !list$1CVALUEphp_end((o2_saved_608));    it_609=list$1CVALUEphp_next((o2_saved_608))    ){
        come_value_610=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_609));
        if(        (_if_conditional9=(((struct sType*)((void*)(__right_value685=list$1voidphp_operator_load_element(fun_605->mParamTypes,i_582))))&&((struct sType*)((void*)(__right_value686=list$1voidphp_operator_load_element(fun_605->mParamTypes,i_582))))->mHeap&&come_value_610->type->mHeap)),        come_call_finalizer3(__right_value685,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value686,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional9) {
            std_move(((struct sType*)((void*)(__right_value687=list$1voidphp_operator_load_element(fun_605->mParamTypes,i_582)))),come_value_610->type,come_value_610,info,(_Bool)1);
            come_call_finalizer3(__right_value687,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_607,(struct CVALUE*)come_increment_ref_count(come_value_610));
        i_582++;
        come_call_finalizer3(come_value_610,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_608,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_611=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1072, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_611,generics_fun_name_604);
    buffer_append_str(buf_611,"(");
    j_612=0;
    for(    o2_saved_613=(struct list$1CVALUEph*)come_increment_ref_count((come_params_607)),it_614=list$1CVALUEphp_begin((o2_saved_613));    !list$1CVALUEphp_end((o2_saved_613));    it_614=list$1CVALUEphp_next((o2_saved_613))    ){
        buffer_append_str(buf_611,it_614->c_value);
        if(        j_612!=list$1CVALUEphp_length(come_params_607)-1) {
            buffer_append_str(buf_611,",");
        }
        j_612++;
    }
    come_call_finalizer3(o2_saved_613,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_611,")");
    come_value2_615=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1089, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj195=come_value2_615->c_value;
    come_value2_615->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_611));
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=come_value2_615->type;
    come_value2_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_606));
    come_call_finalizer3(__dec_obj196,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_615->type->mStatic=(_Bool)0;
    come_value2_615->var=((void*)0);
    if(    result_type_606->mHeap) {
        append_object_to_right_values2(come_value2_615,(struct sType*)come_increment_ref_count(result_type_606),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_615->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_615));
    __result351__ = (_Bool)1;
    come_call_finalizer3(tuple_types_580,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_591,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_592,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_593,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_594 = come_decrement_ref_count2(type_name_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_595 = come_decrement_ref_count2(finalizer_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_596 = come_decrement_ref_count2(cloner_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_597 = come_decrement_ref_count2(get_hash_key_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_598 = come_decrement_ref_count2(equaler_name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_599,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_604 = come_decrement_ref_count2(generics_fun_name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_607,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result351__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj190;
struct list$1sNodeph* __dec_obj191;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj191=self->tuple_elements;
            come_call_finalizer3(__dec_obj191,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value694 = (void*)0;
struct list$1sNodeph* __dec_obj197;
struct list$1sNodeph* __dec_obj198;
struct sMapNode* __result352__;
    ((struct sNodeBase*)(__right_value694=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value694,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj197=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj197,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj198=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj198,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value695 = (void*)0;
char* __result353__;
    __result353__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value695=__builtin_string("sMapNode")));
    (__right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result353__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_616;
struct list$1sNodeph* map_elements_617;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1CVALUEph* key_params_618;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1CVALUEph* element_params_619;
struct sType* map_key_type_620;
struct sType* map_element_type_621;
int i_622;
void* __right_value700 = (void*)0;
struct sNode* key_elements_623;
void* __right_value701 = (void*)0;
struct sNode* elements_627;
void* __right_value702 = (void*)0;
_Bool _if_conditional10;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* value_node_628;
struct sNode* exp_629;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_630;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_631;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj204;
_Bool Value_632;
_Bool __result356__;
void* __right_value724 = (void*)0;
struct CVALUE* come_value_633;
void* __right_value725 = (void*)0;
struct sType* __dec_obj205;
_Bool Value_634;
_Bool __result357__;
void* __right_value726 = (void*)0;
struct CVALUE* come_value_635;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* __dec_obj206;
void* __right_value729 = (void*)0;
_Bool _if_conditional11;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* value_node_636;
struct sNode* exp2_637;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_638;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_639;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj208;
void* __right_value750 = (void*)0;
struct sNode* __dec_obj209;
_Bool Value_640;
_Bool __result358__;
void* __right_value751 = (void*)0;
struct CVALUE* come_value2_641;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sType* __dec_obj210;
_Bool Value_642;
_Bool __result359__;
void* __right_value754 = (void*)0;
struct CVALUE* come_value2_643;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sType* __dec_obj211;
void* __right_value757 = (void*)0;
struct sType* key_type_values_645;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
char* var_name_646;
void* __right_value760 = (void*)0;
struct sVar* var__647;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sType* element_type_values_648;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
char* var_name2_649;
void* __right_value765 = (void*)0;
struct sVar* var2__650;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* source_651;
int i_652;
void* __right_value769 = (void*)0;
struct CVALUE* key_param_653;
void* __right_value770 = (void*)0;
struct CVALUE* element_param_654;
void* __right_value771 = (void*)0;
char* c_value_655;
void* __right_value772 = (void*)0;
char* c_value_656;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* map_type_657;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sType* obj_type_658;
char* fun_name_659;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var11 = (void*)0;
char* name_660=0;
struct sGenericsFun* generics_fun_661=0;
char* generics_fun_name_662;
void* __right_value780 = (void*)0;
struct sFun* fun_663;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
char* __dec_obj212;
void* __right_value783 = (void*)0;
_Bool __result360__;
void* __right_value784 = (void*)0;
struct sType* result_type_664;
struct sType* type_665;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct CVALUE* obj_value_666;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct buffer* num_string_667;
void* __right_value789 = (void*)0;
struct sType* type2_668;
void* __right_value790 = (void*)0;
char* type_name_669;
struct sType* any_type_670;
void* __right_value791 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var12 = (void*)0;
char* finalizer_name_671=0;
char* cloner_name_672=0;
char* get_hash_key_name_673=0;
char* equaler_name_674=0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
char* __dec_obj213;
void* __right_value794 = (void*)0;
struct sType* type3_675;
void* __right_value795 = (void*)0;
struct sType* __dec_obj214;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct list$1CVALUEph* come_params_676;
void* __right_value798 = (void*)0;
_Bool _if_conditional12;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct CVALUE* come_value2_677;
void* __right_value802 = (void*)0;
char* __dec_obj215;
struct sType* __dec_obj216;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct CVALUE* come_value3_678;
void* __right_value805 = (void*)0;
char* __dec_obj217;
struct sType* __dec_obj218;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct CVALUE* come_value4_679;
void* __right_value808 = (void*)0;
char* __dec_obj219;
struct sType* __dec_obj220;
int j_680;
struct list$1CVALUEph* o2_saved_681;
struct CVALUE* it_682;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct CVALUE* come_value5_683;
void* __right_value811 = (void*)0;
char* __dec_obj221;
void* __right_value812 = (void*)0;
struct sType* __dec_obj222;
_Bool __result361__;
exp_629 = (void*)0;
exp2_637 = (void*)0;
    map_key_elements_616=self->map_key_elements;
    map_elements_617=self->map_elements;
    key_params_618=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1129, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_619=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1130, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_620=((void*)0);
    map_element_type_621=((void*)0);
    for(    i_622=0;    i_622<list$1sNodephp_length(map_key_elements_616);    i_622++    ){
        key_elements_623=((struct sNode*)(__right_value700=list$1sNodephp_operator_load_element(map_key_elements_616,i_622)));
        ((__right_value700) ? __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        elements_627=((struct sNode*)(__right_value701=list$1sNodephp_operator_load_element(map_elements_617,i_622)));
        ((__right_value701) ? __right_value701 = come_decrement_ref_count2(__right_value701, ((struct sNode*)__right_value701)->finalize, ((struct sNode*)__right_value701)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        if(        (_if_conditional10=(string_operator_equals(((char*)(__right_value702=key_elements_623->kind(key_elements_623->_protocol_obj))),"sWildCard"))),        (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional10) {
            value_node_628=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value703=xsprintf("Value"))),info));
            (__right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_630=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1143, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_630,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1144, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_628))));
                __dec_obj202=exp_629;
                exp_629=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value710=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_628),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_630),((void*)0),0,((void*)0),info));
                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_630,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_631=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1149, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_631,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1150, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_629))));
                list$1tuple2$2charphsNodephphp_add(params_631,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1151, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_622,info)))));
                __dec_obj203=exp_629;
                exp_629=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value721=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_629),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_631),((void*)0),0,((void*)0),info));
                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj204=exp_629;
                exp_629=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_629,info));
                if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_631,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_632=node_compile(exp_629,info);
            if(            !Value_632) {
                __result356__ = (_Bool)0;
                ((value_node_628) ? value_node_628 = come_decrement_ref_count2(value_node_628, ((struct sNode*)value_node_628)->finalize, ((struct sNode*)value_node_628)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((exp_629) ? exp_629 = come_decrement_ref_count2(exp_629, ((struct sNode*)exp_629)->finalize, ((struct sNode*)exp_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(key_params_618,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_619,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result356__;
            }
            else {
            }
            come_value_633=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(key_params_618,(struct CVALUE*)come_increment_ref_count(come_value_633));
            __dec_obj205=map_key_type_620;
            map_key_type_620=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_633->type));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_628) ? value_node_628 = come_decrement_ref_count2(value_node_628, ((struct sNode*)value_node_628)->finalize, ((struct sNode*)value_node_628)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp_629) ? exp_629 = come_decrement_ref_count2(exp_629, ((struct sNode*)exp_629)->finalize, ((struct sNode*)exp_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_634=node_compile(key_elements_623,info);
            if(            !Value_634) {
                __result357__ = (_Bool)0;
                come_call_finalizer3(key_params_618,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_619,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result357__;
            }
            else {
            }
            come_value_635=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_620) {
                check_assign_type(((char*)(__right_value727=xsprintf("invalid map key type"))),map_key_type_620,come_value_635->type,come_value_635,(_Bool)0,(_Bool)1,(_Bool)0,info);
                (__right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUEphp_push_back(key_params_618,(struct CVALUE*)come_increment_ref_count(come_value_635));
            __dec_obj206=map_key_type_620;
            map_key_type_620=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_635->type));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional11=(string_operator_equals(((char*)(__right_value729=elements_627->kind(elements_627->_protocol_obj))),"sWildCard"))),        (__right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional11) {
            value_node_636=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value730=xsprintf("Value"))),info));
            (__right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_638=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1187, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_638,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1188, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_636))));
                __dec_obj207=exp2_637;
                exp2_637=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value737=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_636),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_638),((void*)0),0,((void*)0),info));
                if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_638,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_639=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1193, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1194, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_637))));
                list$1tuple2$2charphsNodephphp_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1195, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_622,info)))));
                __dec_obj208=exp2_637;
                exp2_637=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value748=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_637),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_639),((void*)0),0,((void*)0),info));
                if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj209=exp2_637;
                exp2_637=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_637,info));
                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_639,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_640=node_compile(exp2_637,info);
            if(            !Value_640) {
                __result358__ = (_Bool)0;
                ((value_node_636) ? value_node_636 = come_decrement_ref_count2(value_node_636, ((struct sNode*)value_node_636)->finalize, ((struct sNode*)value_node_636)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((exp2_637) ? exp2_637 = come_decrement_ref_count2(exp2_637, ((struct sNode*)exp2_637)->finalize, ((struct sNode*)exp2_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(key_params_618,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_619,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result358__;
            }
            else {
            }
            come_value2_641=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_621) {
                check_assign_type(((char*)(__right_value752=xsprintf("invalid map element type"))),map_element_type_621,come_value2_641->type,come_value2_641,(_Bool)0,(_Bool)1,(_Bool)0,info);
                (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUEphp_push_back(element_params_619,(struct CVALUE*)come_increment_ref_count(come_value2_641));
            __dec_obj210=map_element_type_621;
            map_element_type_621=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_641->type));
            come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_636) ? value_node_636 = come_decrement_ref_count2(value_node_636, ((struct sNode*)value_node_636)->finalize, ((struct sNode*)value_node_636)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp2_637) ? exp2_637 = come_decrement_ref_count2(exp2_637, ((struct sNode*)exp2_637)->finalize, ((struct sNode*)exp2_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value2_641,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_642=node_compile(elements_627,info);
            if(            !Value_642) {
                __result359__ = (_Bool)0;
                come_call_finalizer3(key_params_618,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_619,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result359__;
            }
            else {
            }
            come_value2_643=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_621) {
                check_assign_type(((char*)(__right_value755=xsprintf("invalid map element type"))),map_element_type_621,come_value2_643->type,come_value2_643,(_Bool)0,(_Bool)1,(_Bool)0,info);
                (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUEphp_push_back(element_params_619,(struct CVALUE*)come_increment_ref_count(come_value2_643));
            __dec_obj211=map_element_type_621;
            map_element_type_621=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_643->type));
            come_call_finalizer3(__dec_obj211,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value2_643,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_644=0;
    key_type_values_645=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_620));
    list$1sNodephp_push_back(key_type_values_645->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(key_params_618),info)));
    key_type_values_645->mHeap=(_Bool)0;
    var_name_646=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_644));
    add_variable_to_table(var_name_646,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_645)),info,(_Bool)0);
    var__647=get_variable_from_table(info->lv_table,var_name_646);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value761=make_define_var(key_type_values_645,var__647->mCValueName,(_Bool)0,info))));
    (__right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_648=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_621));
    list$1sNodephp_push_back(element_type_values_648->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(element_params_619),info)));
    element_type_values_648->mHeap=(_Bool)0;
    var_name2_649=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_644));
    add_variable_to_table(var_name2_649,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_648)),info,(_Bool)0);
    var2__650=get_variable_from_table(info->lv_table,var_name2_649);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value766=make_define_var(element_type_values_648,var2__650->mCValueName,(_Bool)0,info))));
    (__right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1256, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_651,"(");
    for(    i_652=0;    i_652<list$1CVALUEphp_length(key_params_618);    i_652++    ){
        key_param_653=((struct CVALUE*)(__right_value769=list$1CVALUEphp_operator_load_element(key_params_618,i_652)));
        come_call_finalizer3(__right_value769,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_654=((struct CVALUE*)(__right_value770=list$1CVALUEphp_operator_load_element(element_params_619,i_652)));
        come_call_finalizer3(__right_value770,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_620->mHeap) {
            c_value_655=(char*)come_increment_ref_count(increment_ref_count_object(key_param_653->type,key_param_653->c_value,info));
            buffer_append_format(source_651,"%s[%d]=%s,\n",var__647->mCValueName,i_652,c_value_655);
            (c_value_655 = come_decrement_ref_count2(c_value_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(source_651,"%s[%d]=%s,\n",var__647->mCValueName,i_652,key_param_653->c_value);
        }
        if(        map_element_type_621->mHeap) {
            c_value_656=(char*)come_increment_ref_count(increment_ref_count_object(element_param_654->type,element_param_654->c_value,info));
            buffer_append_format(source_651,"%s[%d]=%s,\n",var2__650->mCValueName,i_652,c_value_656);
            (c_value_656 = come_decrement_ref_count2(c_value_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(source_651,"%s[%d]=%s,\n",var2__650->mCValueName,i_652,element_param_654->c_value);
        }
    }
    map_type_657=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1281, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"map",(_Bool)0,info));
    list$1voidphp_push_back(map_type_657->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value775=come_call_cloner(sType_clone, map_key_type_620))))));
    come_call_finalizer3(__right_value775,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1voidphp_push_back(map_type_657->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value776=come_call_cloner(sType_clone, map_element_type_621))))));
    come_call_finalizer3(__right_value776,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_658=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_657));
    fun_name_659="initialize_with_values";
    multiple_assign_var11=((struct tuple2$2charphsGenericsFunp*)(__right_value779=make_generics_function(obj_type_658,(char*)come_increment_ref_count(__builtin_string(fun_name_659)),info,(_Bool)1)));
    name_660=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_661=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value779,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_662=(char*)come_increment_ref_count(name_660);
    fun_663=((struct sFun*)((void*)(__right_value780=map$2voidphvoidphp_at(info->funcs,generics_fun_name_662,((void*)0)))));
    come_call_finalizer3(__right_value780,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_663==((void*)0)) {
        __dec_obj212=generics_fun_name_662;
        generics_fun_name_662=(char*)come_increment_ref_count(create_method_name(obj_type_658,(_Bool)0,((char*)(__right_value781=__builtin_string(fun_name_659))),info,(_Bool)1));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_663=((struct sFun*)((void*)(__right_value783=map$2voidphvoidphp_at(info->funcs,generics_fun_name_662,((void*)0)))));
        come_call_finalizer3(__right_value783,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_663==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_662,info->come_fun->mName);
            __result360__ = (_Bool)1;
            come_call_finalizer3(key_params_618,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_619,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_645,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_646 = come_decrement_ref_count2(var_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(element_type_values_648,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name2_649 = come_decrement_ref_count2(var_name2_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_660 = come_decrement_ref_count2(name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_662 = come_decrement_ref_count2(generics_fun_name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result360__;
        }
    }
    result_type_664=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_663->mResultType));
    result_type_664->mStatic=(_Bool)0;
    type_665=map_type_657;
    obj_value_666=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1309, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_667=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1311, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_667,"1");
    type2_668=(struct sType*)come_increment_ref_count(solve_generics(type_665,type_665,info));
    type_name_669=(char*)come_increment_ref_count(make_type_name_string(type2_668,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_670=(struct sType*)come_increment_ref_count(type2_668);
    any_type_670->mPointerNum=1;
    any_type_670->mHeap=(_Bool)1;
    multiple_assign_var12=((struct tuple4$4charphcharphcharphcharph*)(__right_value791=create_vtable((struct sType*)come_increment_ref_count(any_type_670),info)));
    finalizer_name_671=(char*)come_increment_ref_count(multiple_assign_var12->v1);
    cloner_name_672=(char*)come_increment_ref_count(multiple_assign_var12->v2);
    get_hash_key_name_673=(char*)come_increment_ref_count(multiple_assign_var12->v3);
    equaler_name_674=(char*)come_increment_ref_count(multiple_assign_var12->v4);
    come_call_finalizer3(__right_value791,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj213=obj_value_666->c_value;
    obj_value_666->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_669,type_name_669,((char*)(__right_value792=buffer_to_string(num_string_667))),info->sname,info->sline,type_name_669,finalizer_name_671,cloner_name_672,get_hash_key_name_673,equaler_name_674));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_675=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_668));
    type3_675->mPointerNum++;
    type3_675->mHeap=(_Bool)1;
    type2_668->mHeap=(_Bool)1;
    __dec_obj214=obj_value_666->type;
    obj_value_666->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_668));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_666->type->mPointerNum++;
    obj_value_666->var=((void*)0);
    append_object_to_right_values2(obj_value_666,(struct sType*)come_increment_ref_count(type3_675),info,(_Bool)0);
    come_params_676=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1337, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional12=(((struct sType*)((void*)(__right_value798=list$1voidphp_operator_load_element(fun_663->mParamTypes,0))))->mHeap&&obj_value_666->type->mHeap)),    come_call_finalizer3(__right_value798,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional12) {
        std_move(((struct sType*)((void*)(__right_value799=list$1voidphp_operator_load_element(fun_663->mParamTypes,0)))),obj_value_666->type,obj_value_666,info,(_Bool)1);
        come_call_finalizer3(__right_value799,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_676,(struct CVALUE*)come_increment_ref_count(obj_value_666));
    come_value2_677=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1344, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj215=come_value2_677->c_value;
    come_value2_677->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(key_params_618)));
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj216=come_value2_677->type;
    come_value2_677->type=((void*)0);
    come_call_finalizer3(__dec_obj216,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_677->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_676,(struct CVALUE*)come_increment_ref_count(come_value2_677));
    come_value3_678=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1352, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj217=come_value3_678->c_value;
    come_value3_678->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__647->mCValueName));
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj218=come_value3_678->type;
    come_value3_678->type=((void*)0);
    come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_678->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_676,(struct CVALUE*)come_increment_ref_count(come_value3_678));
    come_value4_679=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1360, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj219=come_value4_679->c_value;
    come_value4_679->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__650->mCValueName));
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=come_value4_679->type;
    come_value4_679->type=((void*)0);
    come_call_finalizer3(__dec_obj220,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_679->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_676,(struct CVALUE*)come_increment_ref_count(come_value4_679));
    buffer_append_str(source_651,generics_fun_name_662);
    buffer_append_str(source_651,"(");
    j_680=0;
    for(    o2_saved_681=(struct list$1CVALUEph*)come_increment_ref_count((come_params_676)),it_682=list$1CVALUEphp_begin((o2_saved_681));    !list$1CVALUEphp_end((o2_saved_681));    it_682=list$1CVALUEphp_next((o2_saved_681))    ){
        buffer_append_str(source_651,it_682->c_value);
        if(        j_680!=list$1CVALUEphp_length(come_params_676)-1) {
            buffer_append_str(source_651,",");
        }
        j_680++;
    }
    come_call_finalizer3(o2_saved_681,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_651,")");
    buffer_append_str(source_651,")");
    come_value5_683=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1386, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj221=come_value5_683->c_value;
    come_value5_683->c_value=(char*)come_increment_ref_count(buffer_to_string(source_651));
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj222=come_value5_683->type;
    come_value5_683->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_664));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_683->type->mStatic=(_Bool)0;
    come_value5_683->var=((void*)0);
    if(    result_type_664->mHeap) {
        append_object_to_right_values2(come_value5_683,(struct sType*)come_increment_ref_count(result_type_664),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_683->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_683));
    __result361__ = (_Bool)1;
    come_call_finalizer3(key_params_618,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_619,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_645,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_646 = come_decrement_ref_count2(var_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(element_type_values_648,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name2_649 = come_decrement_ref_count2(var_name2_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_660 = come_decrement_ref_count2(name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_662 = come_decrement_ref_count2(generics_fun_name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_666,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_667,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_668,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_669 = come_decrement_ref_count2(type_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_671 = come_decrement_ref_count2(finalizer_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_672 = come_decrement_ref_count2(cloner_name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_673 = come_decrement_ref_count2(get_hash_key_name_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_674 = come_decrement_ref_count2(equaler_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_675,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_676,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_677,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_683,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result361__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj199;
struct list$1sNodeph* __dec_obj200;
struct list$1sNodeph* __dec_obj201;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj200=self->map_key_elements;
            come_call_finalizer3(__dec_obj200,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj201=self->map_elements;
            come_call_finalizer3(__dec_obj201,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_624;
int i_625;
struct sNode* __result354__;
struct sNode* default_value_626;
struct sNode* __result355__;
default_value_626 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_624=self->head;
    i_625=0;
    while(it_624!=((void*)0)) {
        if(        position==i_625) {
            __result354__ = gComeFunResultObject = __result_obj__ = it_624->item;
            gComeFunResultObject = (void*)0;
            return __result354__;
        }
        it_624=it_624->next;
        i_625++;
    }
    memset(&default_value_626,0,sizeof(struct sNode*));
    __result355__ = gComeFunResultObject = __result_obj__ = default_value_626;
    ((default_value_626) ? default_value_626 = come_decrement_ref_count2(default_value_626, ((struct sNode*)default_value_626)->finalize, ((struct sNode*)default_value_626)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_684;
int sline_685;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1sNodeph* exps_686;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct buffer* value_687;
char* head_of_last_line_688;
int len_689;
void* __right_value817 = (void*)0;
struct sNode* exp_690;
int sline2_691;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value825 = (void*)0;
struct sNode* __result364__;
int sline_real_693;
int sline_694;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct buffer* value_695;
char* p_696;
int sline_697;
int sline2_698;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value831 = (void*)0;
struct sNode* __result365__;
int sline_real_699;
int sline_700;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* value_701;
unsigned long  int size_702;
char* p_703;
int sline_704;
int len_705;
int sline2_706;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value839 = (void*)0;
struct sNode* __result368__;
int sline_real_708;
int sline_709;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct buffer* buf_710;
_Bool global_711;
_Bool ignore_case_712;
_Bool catch_exception_713;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value845 = (void*)0;
struct sNode* obj_714;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_715;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct buffer* method_block_716;
int method_block_sline_717;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct list$1voidph* method_generics_types_718;
void* __right_value887 = (void*)0;
struct sNode* node_719;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* __dec_obj228;
struct sNode* __result369__;
int sline_real_720;
int sline_721;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct buffer* value_722;
char* p_723;
int sline_724;
int len_725;
int sline2_726;
_Bool global_727;
_Bool ignore_case_728;
_Bool catch_exception_729;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value895 = (void*)0;
struct sNode* obj_730;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_731;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct buffer* method_block_732;
int method_block_sline_733;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct list$1voidph* method_generics_types_734;
void* __right_value937 = (void*)0;
struct sNode* node_735;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* __dec_obj229;
struct sNode* __result370__;
int sline_real_736;
int c_737;
int n_738;
int n_739;
unsigned long long int n_742;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value944 = (void*)0;
struct sNode* __result373__;
int sline_real_744;
int c_745;
_Bool quote_746;
int n_747;
int n_748;
unsigned long long int n_751;
unsigned char p2_752;
int size_753;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value949 = (void*)0;
struct sNode* __result376__;
int sline_real_756;
int sline_757;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct buffer* value_758;
char* p_759;
int sline_760;
int sline2_761;
int len_762;
void* __right_value952 = (void*)0;
int* wstr_763;
char* str_764;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value958 = (void*)0;
struct sNode* __result379__;
int sline_real_766;
int sline_767;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1sNodeph* exps_768;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* value_769;
char* p_770;
int sline_771;
int len_772;
void* __right_value963 = (void*)0;
struct sNode* exp_773;
int sline2_774;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value967 = (void*)0;
struct sNode* __result380__;
int sline_real_775;
char* p_776;
_Bool no_comma_777;
void* __right_value968 = (void*)0;
struct sNode* node_778;
char* p2_779;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct buffer* first_element_source_780;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct list$1sNodeph* list_elements_781;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct list$1sNodeph* map_keys_782;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct list$1sNodeph* map_elements_783;
_Bool no_comma_784;
void* __right_value977 = (void*)0;
struct sNode* node2_785;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value984 = (void*)0;
struct sNode* __result383__;
_Bool no_comma_787;
void* __right_value985 = (void*)0;
struct sNode* node2_788;
void* __right_value986 = (void*)0;
struct sNode* node3_789;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value989 = (void*)0;
struct sNode* __result384__;
_Bool no_comma_790;
void* __right_value990 = (void*)0;
struct sNode* node2_791;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value996 = (void*)0;
struct sNode* __result387__;
void* __right_value997 = (void*)0;
struct sNode* node_793;
struct sNode* __result388__;
struct sNode* __result389__;
memset(&c_737, 0, sizeof(int));
memset(&c_745, 0, sizeof(int));
memset(&quote_746, 0, sizeof(_Bool));
memset(&size_753, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_684=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_685=info->sline;
        exps_686=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1416, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_687=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1417, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        head_of_last_line_688=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_688) {
                    buffer_trim(value_687,info->p-head_of_last_line_688);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_687,37);
                buffer_append_char(value_687,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_687,92);
                buffer_append_char(value_687,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_687,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_689=0;
                    while(xisdigit(*info->p)&&len_689<3) {
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        len_689++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_687,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_690=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_686,(struct sNode*)come_increment_ref_count(exp_690));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_687,"%s");
                    ((exp_690) ? exp_690 = come_decrement_ref_count2(exp_690, ((struct sNode*)exp_690)->finalize, ((struct sNode*)exp_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_691=info->sline;
                info->sline=sline_685;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_687,92);
                    buffer_append_char(value_687,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_688=info->p;
                }
                else {
                    buffer_append_char(value_687,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_684;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value820=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1556, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_687)),(struct list$1sNodeph*)come_increment_ref_count(exps_686),sline_685,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result364__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value825=_inf_value5));
        come_call_finalizer3(exps_686,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_687,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value820,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value825) ? __right_value825 = come_decrement_ref_count2(__right_value825, ((struct sNode*)__right_value825)->finalize, ((struct sNode*)__right_value825)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result364__;
        come_call_finalizer3(exps_686,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_687,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_693=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_694=info->sline;
        value_695=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1566, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_696=info->p;
                sline_697=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_696;
                    info->sline=sline_697;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_695,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_695,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_695,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_698=info->sline;
                info->sline=sline_694;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_698;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_695,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_693;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1619, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value830=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1619, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_695)),sline_694,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result365__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value831=_inf_value6));
        come_call_finalizer3(value_695,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value830,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value831) ? __right_value831 = come_decrement_ref_count2(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result365__;
        come_call_finalizer3(value_695,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_699=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_700=info->sline;
        value_701=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1629, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        size_702=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_701,*info->p);
                info->p++;
                p_703=info->p;
                sline_704=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_703;
                    info->sline=sline_704;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_701,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_705=0;
                    while(xisdigit(*info->p)&&len_705<3) {
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        len_705++;
                    }
                    size_702++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_701,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                    }
                    size_702++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 110:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 116:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 114:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 118:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 102:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 97:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 98:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        case 92:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                        default:
                        buffer_append_char(value_701,*info->p);
                        info->p++;
                        size_702++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_706=info->sline;
                info->sline=sline_700;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_701,*info->p);
                info->p++;
                size_702++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_699;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1756, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value835=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1756, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_701),size_702,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result368__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value7));
        come_call_finalizer3(value_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value835,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value839) ? __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result368__;
        come_call_finalizer3(value_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_708=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_709=info->sline;
        buf_710=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1765, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_710,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_710,*info->p);
                info->p++;
            }
        }
        global_711=(_Bool)0;
        ignore_case_712=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_711=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_712=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_713=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_713=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1809, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value844=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1809, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_710)),sline_709,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_714=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value844,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_715=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1811, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1813, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_714))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1814, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_712)?(((struct sNode*)(__right_value852=create_int_node(1,info)))):(((struct sNode*)(__right_value853=create_int_node(0,info)))))))));
        ((__right_value852) ? __right_value852 = come_decrement_ref_count2(__right_value852, ((struct sNode*)__right_value852)->finalize, ((struct sNode*)__right_value852)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value853) ? __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1815, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1816, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_711)?(((struct sNode*)(__right_value861=create_int_node(1,info)))):(((struct sNode*)(__right_value862=create_int_node(0,info)))))))));
        ((__right_value861) ? __right_value861 = come_decrement_ref_count2(__right_value861, ((struct sNode*)__right_value861)->finalize, ((struct sNode*)__right_value861)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value862) ? __right_value862 = come_decrement_ref_count2(__right_value862, ((struct sNode*)__right_value862)->finalize, ((struct sNode*)__right_value862)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1817, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1818, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1819, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1820, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_715,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1821, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_716=((void*)0);
        method_block_sline_717=info->sline;
        method_generics_types_718=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1827, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_719=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_714),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_715),method_block_716,method_block_sline_717,method_generics_types_718,info));
        if(        !catch_exception_713) {
            __dec_obj228=node_719;
            node_719=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_719)),info));
            if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_708;
        __result369__ = gComeFunResultObject = __result_obj__ = node_719;
        come_call_finalizer3(buf_710,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_714) ? obj_714 = come_decrement_ref_count2(obj_714, ((struct sNode*)obj_714)->finalize, ((struct sNode*)obj_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_715,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_718,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_719) ? node_719 = come_decrement_ref_count2(node_719, ((struct sNode*)node_719)->finalize, ((struct sNode*)node_719)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(buf_710,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_714) ? obj_714 = come_decrement_ref_count2(obj_714, ((struct sNode*)obj_714)->finalize, ((struct sNode*)obj_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_715,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_718,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_719) ? node_719 = come_decrement_ref_count2(node_719, ((struct sNode*)node_719)->finalize, ((struct sNode*)node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_720=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_721=info->sline;
        value_722=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1845, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_723=info->p;
                sline_724=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_723;
                    info->sline=sline_724;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_722,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_725=0;
                    while(xisdigit(*info->p)&&len_725<3) {
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        len_725++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_722,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_722,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_726=info->sline;
                info->sline=sline_721;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_722,*info->p);
                info->p++;
            }
        }
        global_727=(_Bool)0;
        ignore_case_728=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_727=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_728=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_729=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_729=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1976, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value894=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1976, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_722)),sline_721,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_730=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value894,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_731=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1978, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1980, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_730))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1981, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_728)?(((struct sNode*)(__right_value902=create_int_node(1,info)))):(((struct sNode*)(__right_value903=create_int_node(0,info)))))))));
        ((__right_value902) ? __right_value902 = come_decrement_ref_count2(__right_value902, ((struct sNode*)__right_value902)->finalize, ((struct sNode*)__right_value902)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value903) ? __right_value903 = come_decrement_ref_count2(__right_value903, ((struct sNode*)__right_value903)->finalize, ((struct sNode*)__right_value903)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1982, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1983, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_727)?(((struct sNode*)(__right_value911=create_int_node(1,info)))):(((struct sNode*)(__right_value912=create_int_node(0,info)))))))));
        ((__right_value911) ? __right_value911 = come_decrement_ref_count2(__right_value911, ((struct sNode*)__right_value911)->finalize, ((struct sNode*)__right_value911)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value912) ? __right_value912 = come_decrement_ref_count2(__right_value912, ((struct sNode*)__right_value912)->finalize, ((struct sNode*)__right_value912)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1984, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1985, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1986, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1987, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1988, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_732=((void*)0);
        method_block_sline_733=info->sline;
        method_generics_types_734=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1994, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_735=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_730),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_731),method_block_732,method_block_sline_733,method_generics_types_734,info));
        if(        !catch_exception_729) {
            __dec_obj229=node_735;
            node_735=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_735)),info));
            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_720;
        __result370__ = gComeFunResultObject = __result_obj__ = node_735;
        come_call_finalizer3(value_722,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_730) ? obj_730 = come_decrement_ref_count2(obj_730, ((struct sNode*)obj_730)->finalize, ((struct sNode*)obj_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_731,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_734,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_735) ? node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result370__;
        come_call_finalizer3(value_722,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_730) ? obj_730 = come_decrement_ref_count2(obj_730, ((struct sNode*)obj_730)->finalize, ((struct sNode*)obj_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_731,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_734,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_735) ? node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    *info->p==39) {
        sline_real_736=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_738=0;
                while(xisdigit(*info->p)) {
                    n_738=n_738*8+*info->p-48;
                    info->p++;
                }
                c_737=n_738;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_737=10;
                    info->p++;
                    break;
                    case 116:
                    c_737=9;
                    info->p++;
                    break;
                    case 114:
                    c_737=13;
                    info->p++;
                    break;
                    case 97:
                    c_737=7;
                    info->p++;
                    break;
                    case 102:
                    c_737=12;
                    info->p++;
                    break;
                    case 118:
                    c_737=11;
                    info->p++;
                    break;
                    case 98:
                    c_737=8;
                    info->p++;
                    break;
                    case 92:
                    c_737=92;
                    info->p++;
                    break;
                    case 48:
                    c_737=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_739=0;
                        while(xisdigit(*info->p)) {
                            n_739=n_739*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_737=n_739;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_740[128];
                        memset(&buf_740, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_740,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_741[2];
                            memset(&buf2_741, 0, sizeof(char)                            *(2)                            );
                            buf2_741[0]=*info->p;
                            buf2_741[1]=0;
                            info->p++;
                            strncat(buf_740,buf2_741,128);
                        }
                        n_742=strtoll(buf_740,((void*)0),0);
                        c_737=n_742;
                    }
                    break;
                    default:
                    c_737=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_737=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_736;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2123, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value941=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2123, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_737,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value944=_inf_value10));
            come_call_finalizer3(__right_value941,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value944) ? __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result373__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_744=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_746=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_747=0;
                while(xisdigit(*info->p)) {
                    n_747=n_747*8+*info->p-48;
                    info->p++;
                }
                c_745=n_747;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_745=10;
                    info->p++;
                    break;
                    case 116:
                    c_745=9;
                    info->p++;
                    break;
                    case 114:
                    c_745=13;
                    info->p++;
                    break;
                    case 97:
                    c_745=7;
                    info->p++;
                    break;
                    case 92:
                    c_745=92;
                    info->p++;
                    break;
                    case 48:
                    c_745=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_748=0;
                        while(xisdigit(*info->p)) {
                            n_748=n_748*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_745=n_748;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_749[128];
                        memset(&buf_749, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_749,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_750[2];
                            memset(&buf2_750, 0, sizeof(char)                            *(2)                            );
                            buf2_750[0]=*info->p;
                            buf2_750[1]=0;
                            info->p++;
                            strncat(buf_749,buf2_750,128);
                        }
                        n_751=strtoll(buf_749,((void*)0),0);
                        c_745=n_751;
                    }
                    break;
                    default:
                    c_745=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_746=(_Bool)0;
            p2_752=*(unsigned char*)info->p;
            if(            p2_752>127) {
                char str_754[6+1];
                memset(&str_754, 0, sizeof(char)                *(6+1)                );
                size_753=((p2_752&128)>>7)+((p2_752&64)>>6)+((p2_752&32)>>5)+((p2_752&16)>>4);
                if(                size_753>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_754,info->p,size_753);
                    str_754[size_753]=0;
                    if(                    mbtowc(&c_745,str_754,size_753)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_753;
                    }
                }
            }
            else {
                c_745=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_744;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value946=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2265, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_745,quote_746,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value949=_inf_value11));
            come_call_finalizer3(__right_value946,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value949) ? __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result376__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_756=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_757=info->sline;
        value_758=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2276, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_759=info->p;
                sline_760=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_759;
                    info->sline=sline_760;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_758,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_758,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_758,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_761=info->sline;
                info->sline=sline_757;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_758,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_762=value_758->len;
        wstr_763=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_762+1)), "06str.c", 2327, "int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_764=value_758->buf;
        if(        mbstowcs(wstr_763,str_764,len_762+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_763[len_762]=0;
        info->sline_real=sline_real_756;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2339, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value954=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2339, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(int*)come_increment_ref_count(wstr_763),sline_757,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value958=_inf_value12));
        come_call_finalizer3(value_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_763 = come_decrement_ref_count2(wstr_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value954,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value958) ? __right_value958 = come_decrement_ref_count2(__right_value958, ((struct sNode*)__right_value958)->finalize, ((struct sNode*)__right_value958)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result379__;
        come_call_finalizer3(value_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_763 = come_decrement_ref_count2(wstr_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_766=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_767=info->sline;
        exps_768=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2349, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_769=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2350, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_770=info->p;
                sline_771=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_770;
                    info->sline=sline_771;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_769,37);
                buffer_append_char(value_769,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_769,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_772=0;
                    while(xisdigit(*info->p)&&len_772<3) {
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        len_772++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_769,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_773=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_768,(struct sNode*)come_increment_ref_count(exp_773));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_769,"%s");
                    ((exp_773) ? exp_773 = come_decrement_ref_count2(exp_773, ((struct sNode*)exp_773)->finalize, ((struct sNode*)exp_773)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_769,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_774=info->sline;
                info->sline=sline_767;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_769,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_766;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2498, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value966=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2498, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_769)),(struct list$1sNodeph*)come_increment_ref_count(exps_768),sline_767,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value967=_inf_value13));
        come_call_finalizer3(exps_768,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_769,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value966,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value967) ? __right_value967 = come_decrement_ref_count2(__right_value967, ((struct sNode*)__right_value967)->finalize, ((struct sNode*)__right_value967)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result380__;
        come_call_finalizer3(exps_768,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_769,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_775=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_776=info->p;
        no_comma_777=info->no_comma;
        info->no_comma=(_Bool)1;
        node_778=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_777;
        p2_779=info->p;
        first_element_source_780=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2517, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(first_element_source_780,p_776,p2_779-p_776);
        buffer_append_char(first_element_source_780,0);
        list_elements_781=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2522, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_782=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2524, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_783=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2525, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_782,(struct sNode*)come_increment_ref_count(node_778));
            no_comma_784=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_785=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_784;
            list$1sNodephp_push_back(map_elements_783,(struct sNode*)come_increment_ref_count(node2_785));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2548, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value979=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2548, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_782),(struct list$1sNodeph*)come_increment_ref_count(map_elements_783),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value984=_inf_value14));
                ((node2_785) ? node2_785 = come_decrement_ref_count2(node2_785, ((struct sNode*)node2_785)->finalize, ((struct sNode*)node2_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_778) ? node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(first_element_source_780,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_781,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value979,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((__right_value984) ? __right_value984 = come_decrement_ref_count2(__right_value984, ((struct sNode*)__right_value984)->finalize, ((struct sNode*)__right_value984)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result383__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_787=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_788=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_787;
                    list$1sNodephp_push_back(map_keys_782,(struct sNode*)come_increment_ref_count(node2_788));
                    expected_next_character(58,info);
                    no_comma_787=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_789=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_787;
                    list$1sNodephp_push_back(map_elements_783,(struct sNode*)come_increment_ref_count(node3_789));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_788) ? node2_788 = come_decrement_ref_count2(node2_788, ((struct sNode*)node2_788)->finalize, ((struct sNode*)node2_788)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        ((node3_789) ? node3_789 = come_decrement_ref_count2(node3_789, ((struct sNode*)node3_789)->finalize, ((struct sNode*)node3_789)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    ((node2_788) ? node2_788 = come_decrement_ref_count2(node2_788, ((struct sNode*)node2_788)->finalize, ((struct sNode*)node2_788)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((node3_789) ? node3_789 = come_decrement_ref_count2(node3_789, ((struct sNode*)node3_789)->finalize, ((struct sNode*)node3_789)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2593, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value988=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2593, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_782),(struct list$1sNodeph*)come_increment_ref_count(map_elements_783),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value989=_inf_value15));
                ((node2_785) ? node2_785 = come_decrement_ref_count2(node2_785, ((struct sNode*)node2_785)->finalize, ((struct sNode*)node2_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_778) ? node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(first_element_source_780,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_781,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value988,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((__right_value989) ? __right_value989 = come_decrement_ref_count2(__right_value989, ((struct sNode*)__right_value989)->finalize, ((struct sNode*)__right_value989)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
            ((node2_785) ? node2_785 = come_decrement_ref_count2(node2_785, ((struct sNode*)node2_785)->finalize, ((struct sNode*)node2_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_781,(struct sNode*)come_increment_ref_count(node_778));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_781,(struct sNode*)come_increment_ref_count(node_778));
            while((_Bool)1) {
                no_comma_790=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_791=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_790;
                list$1sNodephp_push_back(list_elements_781,(struct sNode*)come_increment_ref_count(node2_791));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_791) ? node2_791 = come_decrement_ref_count2(node2_791, ((struct sNode*)node2_791)->finalize, ((struct sNode*)node2_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                ((node2_791) ? node2_791 = come_decrement_ref_count2(node2_791, ((struct sNode*)node2_791)->finalize, ((struct sNode*)node2_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodephp_length(list_elements_781)>0) {
            info->sline_real=sline_real_775;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2645, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value992=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2645, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_781),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value996=_inf_value16));
            ((node_778) ? node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(first_element_source_780,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_781,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value992,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value996) ? __right_value996 = come_decrement_ref_count2(__right_value996, ((struct sNode*)__right_value996)->finalize, ((struct sNode*)__right_value996)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result387__;
        }
        else {
        }
        ((node_778) ? node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(first_element_source_780,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_781,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_793=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result388__ = gComeFunResultObject = __result_obj__ = node_793;
        ((node_793) ? node_793 = come_decrement_ref_count2(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result388__;
        ((node_793) ? node_793 = come_decrement_ref_count2(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    __result389__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result362__;
void* __right_value821 = (void*)0;
struct sSStringNode* result_692;
void* __right_value822 = (void*)0;
char* __dec_obj223;
void* __right_value823 = (void*)0;
char* __dec_obj224;
void* __right_value824 = (void*)0;
struct list$1sNodeph* __dec_obj225;
struct sSStringNode* __result363__;
    if(    self==(void*)0) {
        __result362__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    result_692=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_692->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj223=result_692->sname;
        result_692->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj224=result_692->value;
        result_692->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj225=result_692->exps;
        result_692->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj225,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result363__ = gComeFunResultObject = __result_obj__ = result_692;
    come_call_finalizer3(result_692,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result366__;
void* __right_value836 = (void*)0;
struct sBufferNode* result_707;
void* __right_value837 = (void*)0;
char* __dec_obj226;
void* __right_value838 = (void*)0;
struct buffer* __dec_obj227;
struct sBufferNode* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_707=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_707->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj226=result_707->sname;
        result_707->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_707->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj227=result_707->value;
        result_707->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj227,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_707->size=self->size;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_707;
    come_call_finalizer3(result_707,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result371__;
void* __right_value942 = (void*)0;
struct sCharNode* result_743;
void* __right_value943 = (void*)0;
char* __dec_obj230;
struct sCharNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_743=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_743->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_743->sname;
        result_743->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_743->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_743->value=self->value;
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_743;
    come_call_finalizer3(result_743,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result374__;
void* __right_value947 = (void*)0;
struct sWCharNode* result_755;
void* __right_value948 = (void*)0;
char* __dec_obj231;
struct sWCharNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_755=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_755->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_755->sname;
        result_755->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_755->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_755->quote=self->quote;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_755;
    come_call_finalizer3(result_755,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result377__;
void* __right_value955 = (void*)0;
struct sWStringNode* result_765;
void* __right_value956 = (void*)0;
char* __dec_obj232;
void* __right_value957 = (void*)0;
int* __dec_obj233;
struct sWStringNode* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_765=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_765->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_765->sname;
        result_765->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_765->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj233=result_765->value;
        result_765->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_765;
    come_call_finalizer3(result_765,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result381__;
void* __right_value980 = (void*)0;
struct sMapNode* result_786;
void* __right_value981 = (void*)0;
char* __dec_obj234;
void* __right_value982 = (void*)0;
struct list$1sNodeph* __dec_obj235;
void* __right_value983 = (void*)0;
struct list$1sNodeph* __dec_obj236;
struct sMapNode* __result382__;
    if(    self==(void*)0) {
        __result381__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    result_786=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_786->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_786->sname;
        result_786->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_786->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj235=result_786->map_key_elements;
        result_786->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj235,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj236=result_786->map_elements;
        result_786->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj236,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result382__ = gComeFunResultObject = __result_obj__ = result_786;
    come_call_finalizer3(result_786,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result385__;
void* __right_value993 = (void*)0;
struct sListNode* result_792;
void* __right_value994 = (void*)0;
char* __dec_obj237;
void* __right_value995 = (void*)0;
struct list$1sNodeph* __dec_obj238;
struct sListNode* __result386__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_792=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_792->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_792->sname;
        result_792->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_792->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj238=result_792->list_elements;
        result_792->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj238,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result386__ = gComeFunResultObject = __result_obj__ = result_792;
    come_call_finalizer3(result_792,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_794;
char* p_795;
char* name_796;
void* __right_value1000 = (void*)0;
char* __dec_obj239;
_Bool no_comma_797;
void* __right_value1001 = (void*)0;
struct sNode* node_798;
void* __right_value1002 = (void*)0;
struct sNode* __dec_obj240;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1017 = (void*)0;
struct sNode* __result395__;
name_796 = (void*)0;
    tuple_elements_794=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2660, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_795=info->p;
        if(        named_tuple) {
            __dec_obj239=name_796;
            name_796=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_797=info->no_comma;
        info->no_comma=(_Bool)1;
        node_798=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj240=node_798;
        node_798=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_798),info));
        if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_797;
        list$1tuple2$2charphsNodephphp_push_back(tuple_elements_794,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2679, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_796)),(struct sNode*)come_increment_ref_count(node_798))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_796 = come_decrement_ref_count2(name_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_798) ? node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        (name_796 = come_decrement_ref_count2(name_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_798) ? node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2696, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1010=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2696, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_794),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1017=_inf_value17));
    come_call_finalizer3(tuple_elements_794,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1010,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1017) ? __right_value1017 = come_decrement_ref_count2(__right_value1017, ((struct sNode*)__right_value1017)->finalize, ((struct sNode*)__right_value1017)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1003 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_799;
struct tuple2$2charphsNodeph* __dec_obj241;
void* __right_value1004 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_800;
struct tuple2$2charphsNodeph* __dec_obj242;
void* __right_value1005 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_801;
struct tuple2$2charphsNodeph* __dec_obj243;
struct list$1tuple2$2charphsNodephph* __result390__;
    if(    self->len==0) {
        litem_799=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1003=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_799->prev=((void*)0);
        litem_799->next=((void*)0);
        __dec_obj241=litem_799->item;
        litem_799->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj241,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_799;
        self->head=litem_799;
    }
    else if(    self->len==1) {
        litem_800=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1004=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_800->prev=self->head;
        litem_800->next=((void*)0);
        __dec_obj242=litem_800->item;
        litem_800->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj242,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_800;
        self->head->next=litem_800;
    }
    else {
        litem_801=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1005=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_801->prev=self->tail;
        litem_801->next=((void*)0);
        __dec_obj243=litem_801->item;
        litem_801->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj243,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_801;
        self->tail=litem_801;
    }
    self->len++;
    __result390__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result391__;
void* __right_value1011 = (void*)0;
struct sTupleNode* result_802;
void* __right_value1012 = (void*)0;
char* __dec_obj244;
void* __right_value1016 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj245;
struct sTupleNode* __result394__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_802=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_802->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_802->sname;
        result_802->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_802->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj245=result_802->tuple_elements;
        result_802->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj245,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result394__ = gComeFunResultObject = __result_obj__ = result_802;
    come_call_finalizer3(result_802,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result392__;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_803;
struct list_item$1tuple2$2charphsNodephph* it_804;
void* __right_value1015 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result393__;
    if(    self==((void*)0)) {
        __result392__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_803=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_804=self->head;
    while(it_804!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_803,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_804->item)));
        it_804=it_804->next;
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_803;
    come_call_finalizer3(result_803,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
struct list$1sNodeph* tuple_elements_805;
struct sNode* node_806;
void* __right_value1020 = (void*)0;
struct sNode* node2_807;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1026 = (void*)0;
struct sNode* __result398__;
    tuple_elements_805=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2701, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_806=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodephp_push_back(tuple_elements_805,(struct sNode*)come_increment_ref_count(node_806));
    node2_807=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_805,(struct sNode*)come_increment_ref_count(node2_807));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2711, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1022=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2711, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_805),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1026=_inf_value18));
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(tuple_elements_805,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_806) ? node_806 = come_decrement_ref_count2(node_806, ((struct sNode*)node_806)->finalize, ((struct sNode*)node_806)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node2_807) ? node2_807 = come_decrement_ref_count2(node2_807, ((struct sNode*)node2_807)->finalize, ((struct sNode*)node2_807)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value1022,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1026) ? __right_value1026 = come_decrement_ref_count2(__right_value1026, ((struct sNode*)__right_value1026)->finalize, ((struct sNode*)__right_value1026)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result396__;
void* __right_value1023 = (void*)0;
struct sSomeNode* result_808;
void* __right_value1024 = (void*)0;
char* __dec_obj246;
void* __right_value1025 = (void*)0;
struct list$1sNodeph* __dec_obj247;
struct sSomeNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_808=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_808->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj246=result_808->sname;
        result_808->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_808->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj247=result_808->tuple_elements;
        result_808->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj247,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_808;
    come_call_finalizer3(result_808,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct list$1sNodeph* tuple_elements_809;
void* __right_value1029 = (void*)0;
struct sNode* node_810;
void* __right_value1030 = (void*)0;
struct sNode* __dec_obj248;
void* __right_value1031 = (void*)0;
struct sNode* node2_811;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1034 = (void*)0;
struct sNode* __result399__;
    tuple_elements_809=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2716, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_810=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj248=node_810;
    node_810=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_810),info));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodephp_push_back(tuple_elements_809,(struct sNode*)come_increment_ref_count(node_810));
    node2_811=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_809,(struct sNode*)come_increment_ref_count(node2_811));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2729, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1033=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2729, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_809),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1034=_inf_value19));
    come_call_finalizer3(tuple_elements_809,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_810) ? node_810 = come_decrement_ref_count2(node_810, ((struct sNode*)node_810)->finalize, ((struct sNode*)node_810)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node2_811) ? node2_811 = come_decrement_ref_count2(node2_811, ((struct sNode*)node2_811)->finalize, ((struct sNode*)node2_811)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value1033,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1034) ? __right_value1034 = come_decrement_ref_count2(__right_value1034, ((struct sNode*)__right_value1034)->finalize, ((struct sNode*)__right_value1034)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct list$1sNodeph* tuple_elements_812;
void* __right_value1037 = (void*)0;
struct sNode* node_813;
void* __right_value1038 = (void*)0;
struct sNode* __dec_obj249;
void* __right_value1039 = (void*)0;
struct sNode* node2_814;
struct sNode* node3_815;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1045 = (void*)0;
struct sNode* __result402__;
    tuple_elements_812=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2734, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_813=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj249=node_813;
    node_813=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_813),info));
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_814=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodephp_push_back(tuple_elements_812,(struct sNode*)come_increment_ref_count(node2_814));
    node3_815=(struct sNode*)come_increment_ref_count(node_813);
    list$1sNodephp_push_back(tuple_elements_812,(struct sNode*)come_increment_ref_count(node3_815));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2749, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1041=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2749, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_812),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result402__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1045=_inf_value20));
    come_call_finalizer3(tuple_elements_812,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_813) ? node_813 = come_decrement_ref_count2(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node2_814) ? node2_814 = come_decrement_ref_count2(node2_814, ((struct sNode*)node2_814)->finalize, ((struct sNode*)node2_814)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node3_815) ? node3_815 = come_decrement_ref_count2(node3_815, ((struct sNode*)node3_815)->finalize, ((struct sNode*)node3_815)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value1041,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1045) ? __right_value1045 = come_decrement_ref_count2(__right_value1045, ((struct sNode*)__right_value1045)->finalize, ((struct sNode*)__right_value1045)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result400__;
void* __right_value1042 = (void*)0;
struct sNoneNode* result_816;
void* __right_value1043 = (void*)0;
char* __dec_obj250;
void* __right_value1044 = (void*)0;
struct list$1sNodeph* __dec_obj251;
struct sNoneNode* __result401__;
    if(    self==(void*)0) {
        __result400__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    result_816=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_816->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_816->sname;
        result_816->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_816->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj251=result_816->tuple_elements;
        result_816->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj251,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result401__ = gComeFunResultObject = __result_obj__ = result_816;
    come_call_finalizer3(result_816,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

