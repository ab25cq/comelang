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
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
    char* mAttribute;
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
    _Bool mAnyClass;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct sType* mChannelType;
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
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
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
    int mGenericsNumBefore;
    _Bool mGenerate;
    _Bool mCreateVTable;
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
    _Bool mFunctionParam;
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
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
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

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct buffer* mHeader;
};

struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2charphsVarph* mVars;
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

struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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

struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
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
    struct list$1voidph* param_types;
    struct list$1charph* param_names;
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
    struct map$2charphcharph* module_params;
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
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
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
unsigned int come_call_equals(void* fun, void* mem);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
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
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
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
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
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
static unsigned int sStrNode_get_hash_key(struct sStrNode* self);
static _Bool sStrNode_equals(struct sStrNode* left, struct sStrNode* right);
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
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
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
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
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
static unsigned int sNullReturnValue_get_hash_key(struct sNullReturnValue* self);
static _Bool sNullReturnValue_equals(struct sNullReturnValue* left, struct sNullReturnValue* right);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
static unsigned int sNullReturnValueOfException_get_hash_key(struct sNullReturnValueOfException* self);
static _Bool sNullReturnValueOfException_equals(struct sNullReturnValueOfException* left, struct sNullReturnValueOfException* right);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
static unsigned int sNullValue_get_hash_key(struct sNullValue* self);
static _Bool sNullValue_equals(struct sNullValue* left, struct sNullValue* right);
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
static unsigned int sSStringNode_get_hash_key(struct sSStringNode* self);
static _Bool sSStringNode_equals(struct sSStringNode* left, struct sSStringNode* right);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static unsigned int sBufferNode_get_hash_key(struct sBufferNode* self);
static _Bool sBufferNode_equals(struct sBufferNode* left, struct sBufferNode* right);
static _Bool buffer_equals(struct buffer* left, struct buffer* right);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static unsigned int sCharNode_get_hash_key(struct sCharNode* self);
static _Bool sCharNode_equals(struct sCharNode* left, struct sCharNode* right);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static unsigned int sWCharNode_get_hash_key(struct sWCharNode* self);
static _Bool sWCharNode_equals(struct sWCharNode* left, struct sWCharNode* right);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static unsigned int sWStringNode_get_hash_key(struct sWStringNode* self);
static _Bool sWStringNode_equals(struct sWStringNode* left, struct sWStringNode* right);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static unsigned int sMapNode_get_hash_key(struct sMapNode* self);
static _Bool sMapNode_equals(struct sMapNode* left, struct sMapNode* right);
static struct sListNode* sListNode_clone(struct sListNode* self);
static unsigned int sListNode_get_hash_key(struct sListNode* self);
static _Bool sListNode_equals(struct sListNode* left, struct sListNode* right);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static unsigned int sTupleNode_get_hash_key(struct sTupleNode* self);
static _Bool sTupleNode_equals(struct sTupleNode* left, struct sTupleNode* right);
static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right);
static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
static unsigned int sSomeNode_get_hash_key(struct sSomeNode* self);
static _Bool sSomeNode_equals(struct sSomeNode* left, struct sSomeNode* right);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
static unsigned int sNoneNode_get_hash_key(struct sNoneNode* self);
static _Bool sNoneNode_equals(struct sNoneNode* left, struct sNoneNode* right);
// uniq global variable
// inline function

// body function
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result80__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result83__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result85__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result87__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result90__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result95__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result97__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_166;
struct list$1char* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_166=0;    i_166<num_value;    i_166++    ){
        list$1charp_push_back(self,values[i_166]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_167;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_168;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_169;
struct list$1char* __result99__;
    if(    self->len==0) {
        litem_167=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_167->prev=((void*)0);
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head=litem_167;
    }
    else if(    self->len==1) {
        litem_168=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_168->prev=self->head;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail=litem_168;
        self->head->next=litem_168;
    }
    else {
        litem_169=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_169->prev=self->tail;
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail->next=litem_169;
        self->tail=litem_169;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_170;
struct list_item$1char* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer3(prev_it_171,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_172;
struct list$1charp* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0;    i_172<num_value;    i_172++    ){
        list$1charpp_push_back(self,values[i_172]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_173;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_174;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_175;
struct list$1charp* __result102__;
    if(    self->len==0) {
        litem_173=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1) {
        litem_174=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_176;
struct list_item$1charp* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer3(prev_it_177,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_178;
struct list$1short* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0;    i_178<num_value;    i_178++    ){
        list$1shortp_push_back(self,values[i_178]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_179;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_180;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_181;
struct list$1short* __result105__;
    if(    self->len==0) {
        litem_179=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1) {
        litem_180=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_182;
struct list_item$1short* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer3(prev_it_183,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_184;
struct list$1int* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0;    i_184<num_value;    i_184++    ){
        list$1intp_push_back(self,values[i_184]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_185;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_186;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_187;
struct list$1int* __result108__;
    if(    self->len==0) {
        litem_185=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1) {
        litem_186=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_188;
struct list_item$1int* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer3(prev_it_189,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_190;
struct list$1long* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0;    i_190<num_value;    i_190++    ){
        list$1longp_push_back(self,values[i_190]);
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_191;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_192;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_193;
struct list$1long* __result111__;
    if(    self->len==0) {
        litem_191=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1) {
        litem_192=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_194;
struct list_item$1long* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_196;
struct list$1float* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0;    i_196<num_value;    i_196++    ){
        list$1floatp_push_back(self,values[i_196]);
    }
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_197;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_198;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_199;
struct list$1float* __result114__;
    if(    self->len==0) {
        litem_197=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_200;
struct list_item$1float* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer3(prev_it_201,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_202;
struct list$1double* __result118__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1doublep_push_back(self,values[i_202]);
    }
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_203;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_204;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_205;
struct list$1double* __result117__;
    if(    self->len==0) {
        litem_203=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_206;
struct list_item$1double* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer3(prev_it_207,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result120__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_208;
    if(    0) {
        for(        i_208=0;        i_208<self->len;        i_208++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_209;
    if(    0) {
        for(        i_209=0;        i_209<self->len;        i_209++        ){
            self->items[i_209] = come_decrement_ref_count2(self->items[i_209], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result124__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_210;
    if(    0) {
        for(        i_210=0;        i_210<self->len;        i_210++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result126__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_211;
    if(    0) {
        for(        i_211=0;        i_211<self->len;        i_211++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result128__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_212;
    if(    0) {
        for(        i_212=0;        i_212<self->len;        i_212++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result130__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_213;
    if(    0) {
        for(        i_213=0;        i_213<self->len;        i_213++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result132__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 2197, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_214;
    if(    0) {
        for(        i_214=0;        i_214<self->len;        i_214++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result170__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result170__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_248;
struct list_item$1charph* prev_it_249;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        come_call_finalizer3(prev_it_249,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_253;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_254;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_255;
char* __dec_obj30;
struct list$1charph* __result172__;
    if(    self->len==0) {
        litem_253=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj28=litem_253->item;
        litem_253->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1) {
        litem_254=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj29=litem_254->item;
        litem_254->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj30=litem_255->item;
        litem_255->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result229__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sStrNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value255 = (void*)0;
char* __dec_obj35;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* __dec_obj81;
_Bool __result247__;
    come_value_308=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj35=come_value_308->c_value;
    come_value_308->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_308->type;
    come_value_308->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_308->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_308));
    add_come_last_code(info,"%s",come_value_308->c_value);
    __result247__ = (_Bool)1;
    come_call_finalizer3(come_value_308,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result247__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj34=self->value;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
struct list$1voidph* __dec_obj41;
struct list$1sNodeph* __dec_obj43;
struct list$1voidph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
struct sType* __dec_obj49;
struct sNode* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj39=self->mInterfaceName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj40=self->mGenericsName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj41=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj41,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj43=self->mArrayNum;
            come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj45=self->mParamTypes;
            come_call_finalizer3(__dec_obj45,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj46=self->mParamNames;
            come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj47=self->mResultType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj49=self->mChannelType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj50=self->mSizeNum;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj51=self->mOriginalTypeName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj52=self->mAsmName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj53=self->mTupleName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj54=self->mAttribute;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_309;
struct list_item$1voidph* prev_it_310;
    it_309=self->head;
    while(it_309!=((void*)0)) {
        prev_it_310=it_309;
        it_309=it_309->next;
        come_call_finalizer3(prev_it_310,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            come_call_finalizer3(__dec_obj42,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_311;
struct list_item$1voidph* prev_it_312;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_313;
struct list_item$1sNodeph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        come_call_finalizer3(prev_it_314,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_315;
struct list_item$1sNodeph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        come_call_finalizer3(prev_it_316,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_317;
struct list_item$1charph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result231__;
void* __right_value256 = (void*)0;
struct sType* result_326;
void* __right_value257 = (void*)0;
struct sType* __dec_obj55;
void* __right_value258 = (void*)0;
struct sType* __dec_obj56;
void* __right_value259 = (void*)0;
struct sType* __dec_obj57;
void* __right_value260 = (void*)0;
char* __dec_obj58;
void* __right_value261 = (void*)0;
char* __dec_obj59;
void* __right_value268 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj67;
void* __right_value277 = (void*)0;
struct list$1voidph* __dec_obj68;
void* __right_value284 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value285 = (void*)0;
struct sType* __dec_obj73;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value287 = (void*)0;
struct sType* __dec_obj75;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value289 = (void*)0;
char* __dec_obj77;
void* __right_value290 = (void*)0;
char* __dec_obj78;
void* __right_value291 = (void*)0;
char* __dec_obj79;
void* __right_value292 = (void*)0;
char* __dec_obj80;
struct sType* __result245__;
    if(    self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_326=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_326->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj55=result_326->mNoSolvedGenericsType;
        result_326->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj56=result_326->mOriginalLoadVarType;
        result_326->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_326->mAnyOriginalType;
        result_326->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj58=result_326->mInterfaceName;
        result_326->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj59=result_326->mGenericsName;
        result_326->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj63=result_326->mGenericsTypes;
        result_326->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj67=result_326->mArrayNum;
        result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj67,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_326->mParamTypes;
        result_326->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_326->mParamNames;
        result_326->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_326->mResultType;
        result_326->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj74=result_326->mAlignas;
        result_326->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj75=result_326->mChannelType;
        result_326->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_326->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_326->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_326->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_326->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_326->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_326->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_326->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_326->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_326->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_326->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_326->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_326->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_326->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_326->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_326->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_326->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_326->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj76=result_326->mSizeNum;
        result_326->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_326->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_326->mOriginalTypeName;
        result_326->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_326->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_326->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_326->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_326->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_326->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj78=result_326->mAsmName;
        result_326->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_326->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_326->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_326->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_326->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj79=result_326->mTupleName;
        result_326->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj80=result_326->mAttribute;
        result_326->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_326->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_326->mCreateVTable=self->mCreateVTable;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer3(result_326,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_319;
    result_319=0;
    result_319+=int_get_hash_key(((int)self->mClass));
    result_319+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_319+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_319+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_319+=int_get_hash_key(((int)self->mAnyClass));
    result_319+=int_get_hash_key(((int)self->mInterfaceName));
    result_319+=int_get_hash_key(((int)self->mGenericsName));
    result_319+=int_get_hash_key(((int)self->mGenericsTypes));
    result_319+=int_get_hash_key(((int)self->mArrayNum));
    result_319+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_319+=int_get_hash_key(((int)self->mParamTypes));
    result_319+=int_get_hash_key(((int)self->mParamNames));
    result_319+=int_get_hash_key(((int)self->mResultType));
    result_319+=int_get_hash_key(((int)self->mVarArgs));
    result_319+=int_get_hash_key(((int)self->mAlignas));
    result_319+=int_get_hash_key(((int)self->mChannelType));
    result_319+=int_get_hash_key(((int)self->mUnsigned));
    result_319+=int_get_hash_key(((int)self->mShort));
    result_319+=int_get_hash_key(((int)self->mLong));
    result_319+=int_get_hash_key(((int)self->mLongLong));
    result_319+=int_get_hash_key(((int)self->mConstant));
    result_319+=int_get_hash_key(((int)self->mAtomic));
    result_319+=int_get_hash_key(((int)self->mRegister));
    result_319+=int_get_hash_key(((int)self->mVolatile));
    result_319+=int_get_hash_key(((int)self->mStatic));
    result_319+=int_get_hash_key(((int)self->mUniq));
    result_319+=int_get_hash_key(((int)self->mRecord));
    result_319+=int_get_hash_key(((int)self->mExtern));
    result_319+=int_get_hash_key(((int)self->mRestrict));
    result_319+=int_get_hash_key(((int)self->mImmutable));
    result_319+=int_get_hash_key(((int)self->mHeap));
    result_319+=int_get_hash_key(((int)self->mChannel));
    result_319+=int_get_hash_key(((int)self->mNoHeap));
    result_319+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_319+=int_get_hash_key(((int)self->mException));
    result_319+=int_get_hash_key(((int)self->mPointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_319+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_319+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_319+=int_get_hash_key(((int)self->mSizeNum));
    result_319+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_319+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_319+=int_get_hash_key(((int)self->mFunctionParam));
    result_319+=int_get_hash_key(((int)self->mAllocaValue));
    result_319+=int_get_hash_key(((int)self->mGenericsStruct));
    result_319+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_319+=int_get_hash_key(((int)self->mInline));
    result_319+=int_get_hash_key(((int)self->mNullValue));
    result_319+=int_get_hash_key(((int)self->mGuardValue));
    result_319+=int_get_hash_key(((int)self->mAsmName));
    result_319+=int_get_hash_key(((int)self->mArrayPointerType));
    result_319+=int_get_hash_key(((int)self->mLambdaArray));
    result_319+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_319+=int_get_hash_key(((int)self->mTypedef));
    result_319+=int_get_hash_key(((int)self->mMultipleTypes));
    result_319+=int_get_hash_key(((int)self->mOriginIsArray));
    result_319+=int_get_hash_key(((int)self->mTupleName));
    result_319+=int_get_hash_key(((int)self->mAttribute));
    result_319+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_319+=int_get_hash_key(((int)self->mGenerate));
    result_319+=int_get_hash_key(((int)self->mCreateVTable));
    return result_319;
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
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
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
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
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
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
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
    if(    !int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
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
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_320;
struct list_item$1voidph* it2_321;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_320=left->head;
    it2_321=right->head;
    while(it_320!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_320->item)) {
            return (_Bool)0;
        }
        it_320=it_320->next;
        it2_321=it2_321->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* it2_323;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_322=left->head;
    it2_323=right->head;
    while(it_322!=((void*)0)) {
        if(        !sNode_equals(it_322->item,it2_323->item)) {
            return (_Bool)0;
        }
        it_322=it_322->next;
        it2_323=it2_323->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_324;
struct list_item$1charph* it2_325;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_324=left->head;
    it2_325=right->head;
    while(it_324!=((void*)0)) {
        if(        !string_equals(it_324->item,it2_325->item)) {
            return (_Bool)0;
        }
        it_324=it_324->next;
        it2_325=it2_325->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result232__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1voidph* result_328;
struct list_item$1voidph* it_329;
void* __right_value267 = (void*)0;
struct list$1voidph* __result235__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_328=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        list$1voidphp_add(result_328,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_329->item)));
        it_329=it_329->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_327;
    result_327=0;
    result_327+=int_get_hash_key(((int)self->head));
    result_327+=int_get_hash_key(((int)self->tail));
    result_327+=int_get_hash_key(((int)self->len));
    result_327+=int_get_hash_key(((int)self->it));
    return result_327;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj60;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj61;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_332;
void* __dec_obj62;
struct list$1voidph* __result234__;
    if(    self->len==0) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj60=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj61=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj62=litem_332->item;
        litem_332->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result236__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sNodeph* result_333;
struct list_item$1sNodeph* it_334;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result241__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_333=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_334=self->head;
    while(it_334!=((void*)0)) {
        list$1sNodephp_add(result_333,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_334->item)));
        it_334=it_334->next;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(result_333,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_335;
struct sNode* __dec_obj64;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj65;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_337;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result238__;
    if(    self->len==0) {
        litem_335=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_335->prev=((void*)0);
        litem_335->next=((void*)0);
        __dec_obj64=litem_335->item;
        litem_335->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_335;
        self->head=litem_335;
    }
    else if(    self->len==1) {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=self->head;
        litem_336->next=((void*)0);
        __dec_obj65=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_336;
        self->head->next=litem_336;
    }
    else {
        litem_337=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_337->prev=self->tail;
        litem_337->next=((void*)0);
        __dec_obj66=litem_337->item;
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_337;
        self->tail=litem_337;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result239__;
void* __right_value274 = (void*)0;
struct sNode* result_338;
struct sNode* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_338=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_338->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_338->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_338->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_338->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_338->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_338->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_338->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_338->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_338->kind=self->kind;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer2((void*)0, result_338, result_338 ? ((struct sNode*)result_338)->finalize:(void*)0, result_338 ? ((struct sNode*)result_338)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result242__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_339;
struct list_item$1charph* it_340;
void* __right_value283 = (void*)0;
struct list$1charph* __result244__;
    if(    self==((void*)0)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_339=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_340=self->head;
    while(it_340!=((void*)0)) {
        list$1charphp_add(result_339,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_340->item)));
        it_340=it_340->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_339;
    come_call_finalizer3(result_339,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_341;
char* __dec_obj69;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_342;
char* __dec_obj70;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_343;
char* __dec_obj71;
struct list$1charph* __result243__;
    if(    self->len==0) {
        litem_341=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj69=litem_341->item;
        litem_341->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj70=litem_342->item;
        litem_342->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj71=litem_343->item;
        litem_343->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_344;
struct CVALUE* __dec_obj82;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_345;
struct CVALUE* __dec_obj87;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_346;
struct CVALUE* __dec_obj88;
struct list$1CVALUEph* __result246__;
    if(    self->len==0) {
        litem_344=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj82=litem_344->item;
        litem_344->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj87=litem_345->item;
        litem_345->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj88=litem_346->item;
        litem_346->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj83;
struct sType* __dec_obj84;
char* __dec_obj85;
char* __dec_obj86;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj83=self->c_value;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj84=self->type;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_right_value_objects;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj86=self->c_value_without_cast_object_value;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct buffer* __dec_obj89;
struct sBufferNode* __result248__;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result249__;
    __result249__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=__builtin_string("sBufferNode")));
    __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_347;
unsigned long  int size_348;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* buf_350;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* type2_351;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* any_type_352;
void* __right_value308 = (void*)0;
char* finalizer_name_353;
void* __right_value309 = (void*)0;
char* cloner_name_354;
void* __right_value310 = (void*)0;
char* get_hash_key_name_355;
void* __right_value311 = (void*)0;
char* equaler_name_356;
void* __right_value312 = (void*)0;
_Bool _if_conditional1;
void* __right_value313 = (void*)0;
char* __dec_obj109;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool _if_conditional2;
void* __right_value316 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_360=0;
char* name_361=0;
char* __dec_obj111;
void* __right_value317 = (void*)0;
_Bool _if_conditional3;
void* __right_value318 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_362=0;
char* name_363=0;
char* __dec_obj112;
void* __right_value319 = (void*)0;
_Bool _if_conditional4;
void* __right_value320 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_364=0;
char* name_365=0;
char* __dec_obj113;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* type2_366;
void* __right_value324 = (void*)0;
char* __dec_obj114;
void* __right_value325 = (void*)0;
struct sType* __dec_obj115;
_Bool __result254__;
    value_347=(struct buffer*)come_increment_ref_count(self->value);
    size_348=self->size;
    come_value_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_351=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    type2_351->mPointerNum++;
    any_type_352=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    any_type_352->mPointerNum=1;
    any_type_352->mHeap=(_Bool)1;
    finalizer_name_353=(char*)come_increment_ref_count(create_method_name(any_type_352,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_354=(char*)come_increment_ref_count(create_method_name(any_type_352,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_355=(char*)come_increment_ref_count(create_method_name(any_type_352,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_356=(char*)come_increment_ref_count(create_method_name(any_type_352,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)(__right_value312=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_353)))==((void*)0))),    come_call_finalizer3(__right_value312,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        if(        string_operator_equals(finalizer_name_353,"string_finalize")||string_operator_equals(finalizer_name_353,"charp_finalize")) {
            __dec_obj109=finalizer_name_353;
            finalizer_name_353=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFunpcharph*)(__right_value314=create_finalizer_automatically(any_type_352,"finalize",info)));
            come_call_finalizer3(__right_value314,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    (_if_conditional2=(((struct sFun*)(__right_value315=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_354)))==((void*)0))),    come_call_finalizer3(__right_value315,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value316=create_cloner_automatically(any_type_352,"clone",info)));
        fun_360=multiple_assign_var1->v1;
        name_361=(char*)come_increment_ref_count(multiple_assign_var1->v2);
        come_call_finalizer3(__right_value316,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj111=cloner_name_354;
        cloner_name_354=(char*)come_increment_ref_count(name_361);
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_361 = come_decrement_ref_count2(name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional3=(((struct sFun*)(__right_value317=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_355)))==((void*)0))),    come_call_finalizer3(__right_value317,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value318=create_get_hash_key_automatically(any_type_352,"get_hash_key",info)));
        fun_362=multiple_assign_var2->v1;
        name_363=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        come_call_finalizer3(__right_value318,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj112=get_hash_key_name_355;
        get_hash_key_name_355=(char*)come_increment_ref_count(name_363);
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_363 = come_decrement_ref_count2(name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional4=(((struct sFun*)(__right_value319=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_356)))==((void*)0))),    come_call_finalizer3(__right_value319,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional4) {
        multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value320=create_equals_automatically(any_type_352,"equals",info)));
        fun_364=multiple_assign_var3->v1;
        name_365=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer3(__right_value320,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj113=equaler_name_356;
        equaler_name_356=(char*)come_increment_ref_count(name_365);
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_365 = come_decrement_ref_count2(name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_format(buf_350,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_353,cloner_name_354,get_hash_key_name_355,equaler_name_356,((char*)(__right_value321=buffer_to_string(value_347))),size_348);
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type2_351,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_366=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 93, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer*",(_Bool)0,info));
    type2_366->mHeap=(_Bool)1;
    __dec_obj114=come_value_349->c_value;
    come_value_349->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_350));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=come_value_349->type;
    come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_366));
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_349->var=((void*)0);
    append_object_to_right_values2(come_value_349,(struct sType*)come_increment_ref_count(type2_366),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_349));
    add_come_last_code(info,"%s",come_value_349->c_value);
    __result254__ = (_Bool)1;
    come_call_finalizer3(value_347,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_353 = come_decrement_ref_count2(finalizer_name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_354 = come_decrement_ref_count2(cloner_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_355 = come_decrement_ref_count2(get_hash_key_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_356 = come_decrement_ref_count2(equaler_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_366,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result254__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj90;
struct buffer* __dec_obj91;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj90=self->sname;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj91=self->value;
            come_call_finalizer3(__dec_obj91,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_357;
unsigned int hash_358;
unsigned int it_359;
struct sFun* __result250__;
struct sFun* __result251__;
struct sFun* __result252__;
struct sFun* __result253__;
default_value_357 = (void*)0;
    memset(&default_value_357,0,sizeof(struct sFun*));
    hash_358=string_get_hash_key(((char*)key))%self->size;
    it_359=hash_358;
    while((_Bool)1) {
        if(        self->item_existance[it_359]) {
            if(            string_equals(self->keys[it_359],key)) {
                __result250__ = gComeFunResultObject = __result_obj__ = self->items[it_359];
                come_call_finalizer3(default_value_357,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
            it_359++;
            if(            it_359>=self->size) {
                it_359=0;
            }
            else if(            it_359==hash_358) {
                __result251__ = gComeFunResultObject = __result_obj__ = default_value_357;
                come_call_finalizer3(default_value_357,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
        }
        else {
            __result252__ = gComeFunResultObject = __result_obj__ = default_value_357;
            come_call_finalizer3(default_value_357,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result252__;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = default_value_357;
    come_call_finalizer3(default_value_357,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj92;
struct sType* __dec_obj93;
struct list$1voidph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct sType* __dec_obj97;
struct sBlock* __dec_obj98;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj92=self->mName;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj93=self->mResultType;
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj94=self->mParamTypes;
            come_call_finalizer3(__dec_obj94,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj95=self->mParamNames;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj96=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj97=self->mLambdaType;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj98=self->mBlock;
            come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj101=self->mSource;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj103=self->mSourceHead2;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj104=self->mSourceDefer;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj105=self->mComeHeader;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj106=self->mDeclareSName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj107=self->mAttribute;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj108=self->mFunAttribute;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj99;
struct sVarTable* __dec_obj100;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj99=self->mNodes;
            come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj100=self->mVarTable;
            come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj110;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj110=self->v2;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* __dec_obj116;
void* __right_value328 = (void*)0;
struct list$1sNodeph* __dec_obj117;
struct sSStringNode* __result255__;
    ((struct sNodeBase*)(__right_value326=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value326,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj116=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj117,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
char* __result256__;
    __result256__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=__builtin_string("sSStringNode")));
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct CVALUE* come_value_367;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct buffer* buf_368;
struct list$1sNodeph* o2_saved_369;
struct sNode* it_372;
void* __right_value334 = (void*)0;
struct sNode* obj_375;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_376;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sNode* node_384;
_Bool Value_385;
_Bool __result268__;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* type2_387;
void* __right_value351 = (void*)0;
char* __dec_obj133;
void* __right_value352 = (void*)0;
struct sType* __dec_obj134;
_Bool __result269__;
    come_value_367=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 127, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_368=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 129, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_368,"xsprintf(\"");
    buffer_append_str(buf_368,self->value);
    buffer_append_str(buf_368,"\"");
    if(    list$1sNodephp_length(self->exps)>0) {
        for(        o2_saved_369=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_372=list$1sNodephp_begin((o2_saved_369));        !list$1sNodephp_end((o2_saved_369));        it_372=list$1sNodephp_next((o2_saved_369))        ){
            obj_375=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_372));
            params_376=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 139, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_376,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 140, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_372)))));
            node_384=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_375),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_376),((void*)0),0,((void*)0),info));
            Value_385=node_compile(node_384,info);
            if(            !Value_385) {
                __result268__ = (_Bool)0;
                if(obj_375) { obj_375 = come_decrement_ref_count2(obj_375, ((struct sNode*)obj_375)->finalize, ((struct sNode*)obj_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_376,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_369,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result268__;
            }
            else {
            }
            come_value_386=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_368,",");
            buffer_append_str(buf_368,come_value_386->c_value);
            if(obj_375) { obj_375 = come_decrement_ref_count2(obj_375, ((struct sNode*)obj_375)->finalize, ((struct sNode*)obj_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_376,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_369,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_368,")");
    type2_387=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 158, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    type2_387->mHeap=(_Bool)1;
    __dec_obj133=come_value_367->c_value;
    come_value_367->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_368));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj134=come_value_367->type;
    come_value_367->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_387));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_367->var=((void*)0);
    append_object_to_right_values2(come_value_367,(struct sType*)come_increment_ref_count(type2_387),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_367));
    add_come_last_code(info,"%s",come_value_367->c_value);
    __result269__ = (_Bool)1;
    come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj118;
char* __dec_obj119;
struct list$1sNodeph* __dec_obj120;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj118=self->sname;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj119=self->value;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj120=self->exps;
            come_call_finalizer3(__dec_obj120,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __result257__;
struct sNode* __result258__;
struct sNode* result_371;
struct sNode* __result259__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_370,0,sizeof(struct sNode*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->head;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_371,0,sizeof(struct sNode*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_373;
struct sNode* __result260__;
struct sNode* __result261__;
struct sNode* result_374;
struct sNode* __result262__;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_373,0,sizeof(struct sNode*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_373;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_374,0,sizeof(struct sNode*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_374;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result263__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
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
struct tuple2$2charphsNodeph* __dec_obj121;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj121=self->item;
            come_call_finalizer3(__dec_obj121,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj122;
struct sNode* __dec_obj123;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj122=self->v1;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj123=self->v2;
            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_379;
struct tuple2$2charphsNodeph* __dec_obj124;
void* __right_value338 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_380;
struct tuple2$2charphsNodeph* __dec_obj125;
void* __right_value339 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_381;
struct tuple2$2charphsNodeph* __dec_obj126;
struct list$1tuple2$2charphsNodephph* __result264__;
    if(    self->len==0) {
        litem_379=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value337=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj124=litem_379->item;
        litem_379->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value338=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj125=litem_380->item;
        litem_380->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value339=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj126=litem_381->item;
        litem_381->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj127;
struct sNode* __dec_obj128;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj128=self->v2;
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result265__;
void* __right_value342 = (void*)0;
struct tuple2$2charphsNodeph* result_383;
void* __right_value343 = (void*)0;
char* __dec_obj129;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj130;
struct tuple2$2charphsNodeph* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_383=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj129=result_383->v1;
        result_383->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj130=result_383->v2;
        result_383->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_383;
    come_call_finalizer3(result_383,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_382;
    result_382=0;
    result_382+=int_get_hash_key(((int)self->v1));
    result_382+=int_get_hash_key(((int)self->v2));
    return result_382;
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
char* __dec_obj131;
struct sNode* __dec_obj132;
struct tuple2$2charphsNodeph* __result267__;
    __dec_obj131=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj132=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result267__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
struct sCharNode* __result270__;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value353,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=__builtin_string("sCharNode")));
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value357 = (void*)0;
char* __dec_obj136;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __dec_obj137;
_Bool __result272__;
    come_value_388=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 191, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj136=come_value_388->c_value;
    come_value_388->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=come_value_388->type;
    come_value_388->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 194, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_388->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_388));
    add_come_last_code(info,"%s",come_value_388->c_value);
    __result272__ = (_Bool)1;
    come_call_finalizer3(come_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj135=self->sname;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
struct sWCharNode* __result273__;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value360,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value361=__builtin_string("sWCharNode")));
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value364 = (void*)0;
char* __dec_obj139;
void* __right_value365 = (void*)0;
char* __dec_obj140;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* __dec_obj141;
_Bool __result275__;
    come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 222, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj139=come_value_389->c_value;
        come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj140=come_value_389->c_value;
        come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj141=come_value_389->type;
    come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 230, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_389->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
    add_come_last_code(info,"%s",come_value_389->c_value);
    __result275__ = (_Bool)1;
    come_call_finalizer3(come_value_389,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj138;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj138=self->sname;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
int* __dec_obj142;
struct sWStringNode* __result276__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->value;
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value369=__builtin_string("sWStringNode")));
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value372 = (void*)0;
char* __dec_obj145;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* __dec_obj146;
_Bool __result278__;
    come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 257, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj145=come_value_390->c_value;
    come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj146=come_value_390->type;
    come_value_390->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 260, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_390->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_390));
    add_come_last_code(info,"%s",come_value_390->c_value);
    __result278__ = (_Bool)1;
    come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result278__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj143;
int* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj144=self->value;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
char* __dec_obj147;
struct sRegexNode* __result279__;
    ((struct sNodeBase*)(__right_value375=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value375,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj147=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value377=__builtin_string("sRegexNode")));
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value383 = (void*)0;
struct sNode* obj_node_391;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_394;
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
struct sNode* node_395;
_Bool Value_396;
_Bool __result283__;
_Bool __result284__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 289, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value379=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 289, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
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
    come_call_finalizer3(__right_value379,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_394=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 291, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 293, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_391))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 294, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 295, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 296, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 297, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 298, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 299, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 300, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_394,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 301, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_395=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_391),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_394),((void*)0),info->sline,((void*)0),info));
    Value_396=node_compile(node_395,info);
    if(    !Value_396) {
        __result283__ = (_Bool)0;
        if(obj_node_391) { obj_node_391 = come_decrement_ref_count2(obj_node_391, ((struct sNode*)obj_node_391)->finalize, ((struct sNode*)obj_node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_394,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_395) { node_395 = come_decrement_ref_count2(node_395, ((struct sNode*)node_395)->finalize, ((struct sNode*)node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result283__;
    }
    else {
    }
    __result284__ = (_Bool)1;
    if(obj_node_391) { obj_node_391 = come_decrement_ref_count2(obj_node_391, ((struct sNode*)obj_node_391)->finalize, ((struct sNode*)obj_node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params_394,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_395) { node_395 = come_decrement_ref_count2(node_395, ((struct sNode*)node_395)->finalize, ((struct sNode*)node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result284__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj148;
char* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj148=self->sname;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj149=self->str;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result281__;
void* __right_value380 = (void*)0;
struct sStrNode* result_393;
void* __right_value381 = (void*)0;
char* __dec_obj150;
void* __right_value382 = (void*)0;
char* __dec_obj151;
struct sStrNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_393=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode", sStrNode_finalize, sStrNode_clone, sStrNode_get_hash_key, sStrNode_equals));
    if(    self!=((void*)0)) {
        result_393->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result_393->sname;
        result_393->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_393->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj151=result_393->value;
        result_393->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_393;
    come_call_finalizer3(result_393,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static unsigned int sStrNode_get_hash_key(struct sStrNode* self){
unsigned int result_392;
    result_392=0;
    result_392+=int_get_hash_key(((int)self->sline));
    result_392+=int_get_hash_key(((int)self->sname));
    result_392+=int_get_hash_key(((int)self->sline_real));
    result_392+=int_get_hash_key(((int)self->value));
    return result_392;
}

static _Bool sStrNode_equals(struct sStrNode* left, struct sStrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
struct list$1sNodeph* __dec_obj152;
struct sListNode* __result285__;
    ((struct sNodeBase*)(__right_value422=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value422,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value423=__builtin_string("sListNode")));
    __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_397;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1CVALUEph* params_398;
struct sType* list_element_type_401;
int n_402;
struct list$1sNodeph* o2_saved_403;
struct sNode* it_404;
void* __right_value426 = (void*)0;
_Bool _if_conditional5;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sNode* value_node_405;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_406;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sNode* exp_407;
void* __right_value440 = (void*)0;
struct sNode* __dec_obj156;
_Bool Value_408;
_Bool __result288__;
_Bool Value_409;
_Bool __result289__;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_410;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* __dec_obj157;
void* __right_value444 = (void*)0;
struct sType* type_values_411;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* var_name_416;
void* __right_value450 = (void*)0;
struct sVar* var__417;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct buffer* source_418;
int i_419;
struct list$1CVALUEph* o2_saved_420;
struct CVALUE* it_423;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* c_value_426;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* list_type_430;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* obj_type_434;
char* fun_name_435;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var4 = (void*)0;
char* name_436=0;
struct sGenericsFun* generics_fun_437=0;
char* generics_fun_name_438;
void* __right_value467 = (void*)0;
struct sFun* fun_439;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* __dec_obj165;
void* __right_value470 = (void*)0;
_Bool __result304__;
void* __right_value471 = (void*)0;
struct sType* result_type_442;
struct sType* type_443;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* obj_value_444;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct buffer* num_string_445;
void* __right_value476 = (void*)0;
struct sType* type2_446;
void* __right_value477 = (void*)0;
char* type_name_447;
struct sType* any_type_448;
void* __right_value478 = (void*)0;
char* finalizer_name_449;
void* __right_value479 = (void*)0;
char* cloner_name_450;
void* __right_value480 = (void*)0;
char* get_hash_key_name_451;
void* __right_value481 = (void*)0;
char* equaler_name_452;
void* __right_value482 = (void*)0;
_Bool _if_conditional6;
void* __right_value483 = (void*)0;
char* __dec_obj166;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
_Bool _if_conditional7;
void* __right_value486 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_453=0;
char* name_454=0;
char* __dec_obj167;
void* __right_value487 = (void*)0;
_Bool _if_conditional8;
void* __right_value488 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun_455=0;
char* name_456=0;
char* __dec_obj168;
void* __right_value489 = (void*)0;
_Bool _if_conditional9;
void* __right_value490 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_457=0;
char* name_458=0;
char* __dec_obj169;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
char* __dec_obj170;
void* __right_value493 = (void*)0;
struct sType* type3_459;
void* __right_value494 = (void*)0;
struct sType* __dec_obj171;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1CVALUEph* come_params_460;
void* __right_value497 = (void*)0;
_Bool _if_conditional10;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* come_value2_464;
void* __right_value501 = (void*)0;
char* __dec_obj172;
struct sType* __dec_obj173;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct CVALUE* come_value3_465;
void* __right_value504 = (void*)0;
char* __dec_obj174;
struct sType* __dec_obj175;
int j_466;
struct list$1CVALUEph* o2_saved_467;
struct CVALUE* it_468;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct CVALUE* come_value4_469;
void* __right_value507 = (void*)0;
char* __dec_obj176;
void* __right_value508 = (void*)0;
struct sType* __dec_obj177;
_Bool __result307__;
    list_elements_397=self->list_elements;
    params_398=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 333, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_401=((void*)0);
    n_402=0;
    for(    o2_saved_403=(list_elements_397),it_404=list$1sNodephp_begin((o2_saved_403));    !list$1sNodephp_end((o2_saved_403));    it_404=list$1sNodephp_next((o2_saved_403))    ){
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value426=it_404->kind(it_404->_protocol_obj))),"sWildCard"))),        (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional5) {
            value_node_405=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value427=xsprintf("Value"))),info));
            __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_406=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 341, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_406,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 342, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_405))));
            list$1tuple2$2charphsNodephphp_add(params_406,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 343, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_402,info)))));
            exp_407=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value438=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_405),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_406),((void*)0),0,((void*)0),info));
            __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj156=exp_407;
            exp_407=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_407,info));
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
            Value_408=node_compile(exp_407,info);
            if(            !Value_408) {
                __result288__ = (_Bool)0;
                if(value_node_405) { value_node_405 = come_decrement_ref_count2(value_node_405, ((struct sNode*)value_node_405)->finalize, ((struct sNode*)value_node_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_406,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_407) { exp_407 = come_decrement_ref_count2(exp_407, ((struct sNode*)exp_407)->finalize, ((struct sNode*)exp_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_398,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_401,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result288__;
            }
            else {
            }
            if(value_node_405) { value_node_405 = come_decrement_ref_count2(value_node_405, ((struct sNode*)value_node_405)->finalize, ((struct sNode*)value_node_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_406,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_407) { exp_407 = come_decrement_ref_count2(exp_407, ((struct sNode*)exp_407)->finalize, ((struct sNode*)exp_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_409=node_compile(it_404,info);
            if(            !Value_409) {
                __result289__ = (_Bool)0;
                come_call_finalizer3(params_398,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_401,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result289__;
            }
            else {
            }
        }
        come_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_401) {
            check_assign_type(((char*)(__right_value442=xsprintf("invalid list element type"))),list_element_type_401,come_value_410->type,come_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(params_398,(struct CVALUE*)come_increment_ref_count(come_value_410));
        __dec_obj157=list_element_type_401;
        list_element_type_401=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_410->type));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_402++;
        come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_411=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_401));
    list$1sNodephp_push_back(type_values_411->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(params_398),info)));
    type_values_411->mHeap=(_Bool)0;
    static int list_value_num_415=0;
    var_name_416=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_415));
    add_variable_to_table(var_name_416,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_411)),info);
    var__417=get_variable_from_table(info->lv_table,var_name_416);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value451=make_define_var(type_values_411,var__417->mCValueName,(_Bool)0,info))));
    __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 384, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(source_418,"(");
    i_419=0;
    for(    o2_saved_420=(struct list$1CVALUEph*)come_increment_ref_count((params_398)),it_423=list$1CVALUEphp_begin((o2_saved_420));    !list$1CVALUEphp_end((o2_saved_420));    it_423=list$1CVALUEphp_next((o2_saved_420))    ){
        if(        list_element_type_401->mHeap) {
            c_value_426=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)(__right_value454=list$1CVALUEphp_operator_load_element(params_398,i_419)))->type,((struct CVALUE*)(__right_value455=list$1CVALUEphp_operator_load_element(params_398,i_419)))->c_value,info));
            come_call_finalizer3(__right_value454,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value455,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_418,"%s[%d]=%s,\n",var__417->mCValueName,i_419,c_value_426);
            c_value_426 = come_decrement_ref_count2(c_value_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_418,"%s[%d]=%s,\n",var__417->mCValueName,i_419,((struct CVALUE*)(__right_value457=list$1CVALUEphp_operator_load_element(params_398,i_419)))->c_value);
            come_call_finalizer3(__right_value457,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_419++;
    }
    come_call_finalizer3(o2_saved_420,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_430=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 404, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"list",(_Bool)0,info));
    list$1voidphp_push_back(list_type_430->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value463=come_call_cloner(sType_clone, list_element_type_401))))));
    come_call_finalizer3(__right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_434=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_430));
    fun_name_435="initialize_with_values";
    multiple_assign_var4=((struct tuple2$2charphsGenericsFunp*)(__right_value466=make_generics_function(obj_type_434,(char*)come_increment_ref_count(__builtin_string(fun_name_435)),info,(_Bool)1)));
    name_436=(char*)come_increment_ref_count(multiple_assign_var4->v1);
    generics_fun_437=multiple_assign_var4->v2;
    come_call_finalizer3(__right_value466,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_438=(char*)come_increment_ref_count(name_436);
    fun_439=((struct sFun*)(__right_value467=map$2charphsFunphp_at(info->funcs,generics_fun_name_438,((void*)0))));
    come_call_finalizer3(__right_value467,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_439==((void*)0)) {
        __dec_obj165=generics_fun_name_438;
        generics_fun_name_438=(char*)come_increment_ref_count(create_method_name(obj_type_434,(_Bool)0,((char*)(__right_value468=__builtin_string(fun_name_435))),info,(_Bool)1));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_439=((struct sFun*)(__right_value470=map$2charphsFunphp_at(info->funcs,generics_fun_name_438,((void*)0))));
        come_call_finalizer3(__right_value470,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_439==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_438,info->come_fun->mName);
            __result304__ = (_Bool)1;
            come_call_finalizer3(params_398,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_401,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_411,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_416 = come_decrement_ref_count2(var_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_438 = come_decrement_ref_count2(generics_fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result304__;
        }
    }
    result_type_442=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_439->mResultType));
    result_type_442->mStatic=(_Bool)0;
    type_443=list_type_430;
    obj_value_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 431, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_445=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 433, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_445,"1");
    type2_446=(struct sType*)come_increment_ref_count(solve_generics(type_443,type_443,info));
    type_name_447=(char*)come_increment_ref_count(make_type_name_string(type2_446,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_448=(struct sType*)come_increment_ref_count(type2_446);
    any_type_448->mPointerNum=1;
    any_type_448->mHeap=(_Bool)1;
    finalizer_name_449=(char*)come_increment_ref_count(create_method_name(any_type_448,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_450=(char*)come_increment_ref_count(create_method_name(any_type_448,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_451=(char*)come_increment_ref_count(create_method_name(any_type_448,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_452=(char*)come_increment_ref_count(create_method_name(any_type_448,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional6=(((struct sFun*)(__right_value482=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_449)))==((void*)0))),    come_call_finalizer3(__right_value482,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional6) {
        if(        string_operator_equals(finalizer_name_449,"string_finalize")||string_operator_equals(finalizer_name_449,"charp_finalize")) {
            __dec_obj166=finalizer_name_449;
            finalizer_name_449=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFunpcharph*)(__right_value484=create_finalizer_automatically(any_type_448,"finalize",info)));
            come_call_finalizer3(__right_value484,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    (_if_conditional7=(((struct sFun*)(__right_value485=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_450)))==((void*)0))),    come_call_finalizer3(__right_value485,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional7) {
        multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value486=create_cloner_automatically(any_type_448,"clone",info)));
        fun_453=multiple_assign_var5->v1;
        name_454=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        come_call_finalizer3(__right_value486,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj167=cloner_name_450;
        cloner_name_450=(char*)come_increment_ref_count(name_454);
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional8=(((struct sFun*)(__right_value487=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_451)))==((void*)0))),    come_call_finalizer3(__right_value487,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional8) {
        multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value488=create_get_hash_key_automatically(any_type_448,"get_hash_key",info)));
        fun_455=multiple_assign_var6->v1;
        name_456=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value488,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj168=get_hash_key_name_451;
        get_hash_key_name_451=(char*)come_increment_ref_count(name_456);
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_456 = come_decrement_ref_count2(name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional9=(((struct sFun*)(__right_value489=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_452)))==((void*)0))),    come_call_finalizer3(__right_value489,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional9) {
        multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value490=create_equals_automatically(any_type_448,"equals",info)));
        fun_457=multiple_assign_var7->v1;
        name_458=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer3(__right_value490,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj169=equaler_name_452;
        equaler_name_452=(char*)come_increment_ref_count(name_458);
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj170=obj_value_444->c_value;
    obj_value_444->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_447,type_name_447,((char*)(__right_value491=buffer_to_string(num_string_445))),info->sname,info->sline,type_name_447,finalizer_name_449,cloner_name_450,get_hash_key_name_451,equaler_name_452));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_459=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_446));
    type3_459->mPointerNum++;
    type3_459->mHeap=(_Bool)1;
    type2_446->mHeap=(_Bool)1;
    __dec_obj171=obj_value_444->type;
    obj_value_444->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_446));
    come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_444->type->mPointerNum++;
    obj_value_444->var=((void*)0);
    append_object_to_right_values2(obj_value_444,(struct sType*)come_increment_ref_count(type3_459),info,(_Bool)0);
    come_params_460=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 483, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional10=(((struct sType*)((void*)(__right_value497=list$1voidphp_operator_load_element(fun_439->mParamTypes,0))))->mHeap&&obj_value_444->type->mHeap)),    come_call_finalizer3(__right_value497,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)((void*)(__right_value498=list$1voidphp_operator_load_element(fun_439->mParamTypes,0)))),obj_value_444->type,obj_value_444,info,(_Bool)1);
        come_call_finalizer3(__right_value498,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_460,(struct CVALUE*)come_increment_ref_count(obj_value_444));
    come_value2_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 490, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj172=come_value2_464->c_value;
    come_value2_464->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(params_398)));
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=come_value2_464->type;
    come_value2_464->type=((void*)0);
    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_464->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_460,(struct CVALUE*)come_increment_ref_count(come_value2_464));
    come_value3_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 498, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj174=come_value3_465->c_value;
    come_value3_465->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__417->mCValueName));
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=come_value3_465->type;
    come_value3_465->type=((void*)0);
    come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_465->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_460,(struct CVALUE*)come_increment_ref_count(come_value3_465));
    buffer_append_str(source_418,generics_fun_name_438);
    buffer_append_str(source_418,"(");
    j_466=0;
    for(    o2_saved_467=(struct list$1CVALUEph*)come_increment_ref_count((come_params_460)),it_468=list$1CVALUEphp_begin((o2_saved_467));    !list$1CVALUEphp_end((o2_saved_467));    it_468=list$1CVALUEphp_next((o2_saved_467))    ){
        buffer_append_str(source_418,it_468->c_value);
        if(        j_466!=list$1CVALUEphp_length(come_params_460)-1) {
            buffer_append_str(source_418,",");
        }
        j_466++;
    }
    come_call_finalizer3(o2_saved_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_418,")");
    buffer_append_str(source_418,")");
    come_value4_469=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 524, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj176=come_value4_469->c_value;
    come_value4_469->c_value=(char*)come_increment_ref_count(buffer_to_string(source_418));
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=come_value4_469->type;
    come_value4_469->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_442));
    come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_469->type->mStatic=(_Bool)0;
    come_value4_469->var=((void*)0);
    if(    result_type_442->mHeap) {
        append_object_to_right_values2(come_value4_469,(struct sType*)come_increment_ref_count(result_type_442),info,(_Bool)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_469));
    add_come_last_code(info,"%s",come_value4_469->c_value);
    __result307__ = (_Bool)1;
    come_call_finalizer3(params_398,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_401,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_416 = come_decrement_ref_count2(var_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_438 = come_decrement_ref_count2(generics_fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_446,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_447 = come_decrement_ref_count2(type_name_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_449 = come_decrement_ref_count2(finalizer_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_450 = come_decrement_ref_count2(cloner_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_451 = come_decrement_ref_count2(get_hash_key_name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_452 = come_decrement_ref_count2(equaler_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result307__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj153;
struct list$1sNodeph* __dec_obj154;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj154=self->list_elements;
            come_call_finalizer3(__dec_obj154,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result287__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_399;
struct list_item$1CVALUEph* prev_it_400;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        prev_it_400=it_399;
        it_399=it_399->next;
        come_call_finalizer3(prev_it_400,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj155;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj155=self->item;
            come_call_finalizer3(__dec_obj155,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
struct list_item$1sNodeph* litem_412;
struct sNode* __dec_obj158;
void* __right_value446 = (void*)0;
struct list_item$1sNodeph* litem_413;
struct sNode* __dec_obj159;
void* __right_value447 = (void*)0;
struct list_item$1sNodeph* litem_414;
struct sNode* __dec_obj160;
struct list$1sNodeph* __result290__;
    if(    self->len==0) {
        litem_412=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value445=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_412->prev=((void*)0);
        litem_412->next=((void*)0);
        __dec_obj158=litem_412->item;
        litem_412->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_412;
        self->head=litem_412;
    }
    else if(    self->len==1) {
        litem_413=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value446=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=self->head;
        litem_413->next=((void*)0);
        __dec_obj159=litem_413->item;
        litem_413->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_413;
        self->head->next=litem_413;
    }
    else {
        litem_414=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value447=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->tail;
        litem_414->next=((void*)0);
        __dec_obj160=litem_414->item;
        litem_414->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_414;
        self->tail=litem_414;
    }
    self->len++;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_421;
struct CVALUE* __result291__;
struct CVALUE* __result292__;
struct CVALUE* result_422;
struct CVALUE* __result293__;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_421,0,sizeof(struct CVALUE*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_421;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->head;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_422,0,sizeof(struct CVALUE*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_422;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_424;
struct CVALUE* __result294__;
struct CVALUE* __result295__;
struct CVALUE* result_425;
struct CVALUE* __result296__;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_424,0,sizeof(struct CVALUE*));
        __result294__ = gComeFunResultObject = __result_obj__ = result_424;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result295__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    memset(&result_425,0,sizeof(struct CVALUE*));
    __result296__ = gComeFunResultObject = __result_obj__ = result_425;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_427;
int i_428;
struct CVALUE* __result297__;
struct CVALUE* default_value_429;
struct CVALUE* __result298__;
default_value_429 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_427=self->head;
    i_428=0;
    while(it_427!=((void*)0)) {
        if(        position==i_428) {
            __result297__ = gComeFunResultObject = __result_obj__ = it_427->item;
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
        it_427=it_427->next;
        i_428++;
    }
    memset(&default_value_429,0,sizeof(struct CVALUE*));
    __result298__ = gComeFunResultObject = __result_obj__ = default_value_429;
    come_call_finalizer3(default_value_429,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value460 = (void*)0;
struct list_item$1voidph* litem_431;
void* __dec_obj161;
void* __right_value461 = (void*)0;
struct list_item$1voidph* litem_432;
void* __dec_obj162;
void* __right_value462 = (void*)0;
struct list_item$1voidph* litem_433;
void* __dec_obj163;
struct list$1voidph* __result299__;
    if(    self->len==0) {
        litem_431=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value460=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=((void*)0);
        litem_431->next=((void*)0);
        __dec_obj161=litem_431->item;
        litem_431->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj161,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_431;
        self->head=litem_431;
    }
    else if(    self->len==1) {
        litem_432=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value461=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=self->head;
        litem_432->next=((void*)0);
        __dec_obj162=litem_432->item;
        litem_432->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj162,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_432;
        self->head->next=litem_432;
    }
    else {
        litem_433=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value462=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_433->prev=self->tail;
        litem_433->next=((void*)0);
        __dec_obj163=litem_433->item;
        litem_433->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj163,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_433;
        self->tail=litem_433;
    }
    self->len++;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj164;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj164=self->v1;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_440;
unsigned int it_441;
struct sFun* __result300__;
struct sFun* __result301__;
struct sFun* __result302__;
struct sFun* __result303__;
    hash_440=string_get_hash_key(((char*)key))%self->size;
    it_441=hash_440;
    while((_Bool)1) {
        if(        self->item_existance[it_441]) {
            if(            string_equals(self->keys[it_441],key)) {
                __result300__ = gComeFunResultObject = __result_obj__ = self->items[it_441];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result300__;
            }
            it_441++;
            if(            it_441>=self->size) {
                it_441=0;
            }
            else if(            it_441==hash_440) {
                __result301__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
        }
        else {
            __result302__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
    }
    __result303__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_461;
int i_462;
void* __result305__;
void* default_value_463;
void* __result306__;
default_value_463 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_461=self->head;
    i_462=0;
    while(it_461!=((void*)0)) {
        if(        position==i_462) {
            __result305__ = gComeFunResultObject = __result_obj__ = it_461->item;
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
        it_461=it_461->next;
        i_462++;
    }
    memset(&default_value_463,0,sizeof(void*));
    __result306__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_463);
    come_call_finalizer3(default_value_463, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj178;
struct sTupleNode* __result308__;
    ((struct sNodeBase*)(__right_value509=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value509,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj178,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value510 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value510=__builtin_string("sTupleNode")));
    __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_472;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1voidph* tuple_types_473;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1CVALUEph* tuple_values_474;
int n_475;
struct list$1tuple2$2charphsNodephph* o2_saved_476;
struct tuple2$2charphsNodeph* it_479;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* name_482=0;
struct sNode* node_483=0;
void* __right_value515 = (void*)0;
_Bool _if_conditional11;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sNode* value_node_484;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* exp_485;
_Bool Value_486;
_Bool __result316__;
_Bool Value_487;
_Bool __result317__;
void* __right_value520 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* type_491;
char* __dec_obj185;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* type_492;
struct list$1voidph* o2_saved_493;
struct sType* it_496;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct CVALUE* obj_value_499;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct buffer* num_string_500;
void* __right_value536 = (void*)0;
struct sType* type2_501;
void* __right_value537 = (void*)0;
char* type_name_502;
struct sType* any_type_503;
void* __right_value538 = (void*)0;
char* finalizer_name_504;
void* __right_value539 = (void*)0;
char* cloner_name_505;
void* __right_value540 = (void*)0;
char* get_hash_key_name_506;
void* __right_value541 = (void*)0;
char* equaler_name_507;
void* __right_value542 = (void*)0;
_Bool _if_conditional12;
void* __right_value543 = (void*)0;
char* __dec_obj186;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
_Bool _if_conditional13;
void* __right_value546 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9 = (void*)0;
struct sFun* fun_508=0;
char* name_509=0;
char* __dec_obj187;
void* __right_value547 = (void*)0;
_Bool _if_conditional14;
void* __right_value548 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun_510=0;
char* name_511=0;
char* __dec_obj188;
void* __right_value549 = (void*)0;
_Bool _if_conditional15;
void* __right_value550 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun_512=0;
char* name_513=0;
char* __dec_obj189;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
char* __dec_obj190;
void* __right_value553 = (void*)0;
struct sType* type3_514;
void* __right_value554 = (void*)0;
struct sType* __dec_obj191;
void* __right_value555 = (void*)0;
struct sType* obj_type_515;
char* fun_name_516;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var12 = (void*)0;
char* name_517=0;
struct sGenericsFun* generics_fun_518=0;
char* generics_fun_name_519;
void* __right_value558 = (void*)0;
struct sFun* fun_520;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
char* __dec_obj192;
void* __right_value561 = (void*)0;
_Bool __result326__;
void* __right_value562 = (void*)0;
struct sType* result_type_521;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1CVALUEph* come_params_522;
void* __right_value565 = (void*)0;
_Bool _if_conditional16;
void* __right_value566 = (void*)0;
int i_523;
struct list$1CVALUEph* o2_saved_524;
struct CVALUE* it_525;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
_Bool _if_conditional17;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* buf_527;
int j_528;
struct list$1CVALUEph* o2_saved_529;
struct CVALUE* it_530;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct CVALUE* come_value2_531;
void* __right_value575 = (void*)0;
char* __dec_obj193;
void* __right_value576 = (void*)0;
struct sType* __dec_obj194;
_Bool __result327__;
    tuple_elements_472=self->tuple_elements;
    tuple_types_473=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 561, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_474=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 562, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_475=0;
    for(    o2_saved_476=(tuple_elements_472),it_479=list$1tuple2$2charphsNodephphp_begin((o2_saved_476));    !list$1tuple2$2charphsNodephphp_end((o2_saved_476));    it_479=list$1tuple2$2charphsNodephphp_next((o2_saved_476))    ){
        multiple_assign_var8=it_479;
        name_482=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_483=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        if(        (_if_conditional11=(string_operator_equals(((char*)(__right_value515=node_483->kind(node_483->_protocol_obj))),"sWildCard"))),        (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional11) {
            value_node_484=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value516=xsprintf("Value"))),info));
            __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_485=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_484),(char*)come_increment_ref_count(xsprintf("v%d",n_475+1)),info));
            Value_486=node_compile(exp_485,info);
            if(            !Value_486) {
                __result316__ = (_Bool)0;
                if(value_node_484) { value_node_484 = come_decrement_ref_count2(value_node_484, ((struct sNode*)value_node_484)->finalize, ((struct sNode*)value_node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_485) { exp_485 = come_decrement_ref_count2(exp_485, ((struct sNode*)exp_485)->finalize, ((struct sNode*)exp_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
                name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_483) { node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_473,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_474,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result316__;
            }
            else {
            }
            if(value_node_484) { value_node_484 = come_decrement_ref_count2(value_node_484, ((struct sNode*)value_node_484)->finalize, ((struct sNode*)value_node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_485) { exp_485 = come_decrement_ref_count2(exp_485, ((struct sNode*)exp_485)->finalize, ((struct sNode*)exp_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_487=node_compile(node_483,info);
            if(            !Value_487) {
                __result317__ = (_Bool)0;
                name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_483) { node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_473,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_474,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result317__;
            }
            else {
            }
        }
        come_value_488=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_474,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_488)));
        type_491=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_488->type));
        __dec_obj185=type_491->mTupleName;
        type_491->mTupleName=(char*)come_increment_ref_count(name_482);
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1voidphp_push_back(tuple_types_473,(struct sType*)come_increment_ref_count(type_491));
        n_475++;
        name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_483) { node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_491,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_492=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value529=xsprintf("tuple%d",list$1voidphp_length(tuple_types_473)))),(_Bool)0,info));
    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_493=(struct list$1voidph*)come_increment_ref_count((tuple_types_473)),it_496=((struct sType*)list$1voidphp_begin((o2_saved_493)));    !list$1voidphp_end((o2_saved_493));    it_496=((struct sType*)list$1voidphp_next((o2_saved_493)))    ){
        list$1voidphp_push_back(type_492->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value531=come_call_cloner(sType_clone, it_496))))));
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_493,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 598, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_500=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 600, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_500,"1");
    type2_501=(struct sType*)come_increment_ref_count(solve_generics(type_492,type_492,info));
    type_name_502=(char*)come_increment_ref_count(make_type_name_string(type2_501,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_503=(struct sType*)come_increment_ref_count(type2_501);
    any_type_503->mPointerNum=1;
    any_type_503->mHeap=(_Bool)1;
    finalizer_name_504=(char*)come_increment_ref_count(create_method_name(any_type_503,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_505=(char*)come_increment_ref_count(create_method_name(any_type_503,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_506=(char*)come_increment_ref_count(create_method_name(any_type_503,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_507=(char*)come_increment_ref_count(create_method_name(any_type_503,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional12=(((struct sFun*)(__right_value542=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_504)))==((void*)0))),    come_call_finalizer3(__right_value542,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional12) {
        if(        string_operator_equals(finalizer_name_504,"string_finalize")||string_operator_equals(finalizer_name_504,"charp_finalize")) {
            __dec_obj186=finalizer_name_504;
            finalizer_name_504=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFunpcharph*)(__right_value544=create_finalizer_automatically(any_type_503,"finalize",info)));
            come_call_finalizer3(__right_value544,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    (_if_conditional13=(((struct sFun*)(__right_value545=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_505)))==((void*)0))),    come_call_finalizer3(__right_value545,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional13) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value546=create_cloner_automatically(any_type_503,"clone",info)));
        fun_508=multiple_assign_var9->v1;
        name_509=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer3(__right_value546,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj187=cloner_name_505;
        cloner_name_505=(char*)come_increment_ref_count(name_509);
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_509 = come_decrement_ref_count2(name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional14=(((struct sFun*)(__right_value547=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_506)))==((void*)0))),    come_call_finalizer3(__right_value547,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional14) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value548=create_get_hash_key_automatically(any_type_503,"get_hash_key",info)));
        fun_510=multiple_assign_var10->v1;
        name_511=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(__right_value548,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj188=get_hash_key_name_506;
        get_hash_key_name_506=(char*)come_increment_ref_count(name_511);
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_511 = come_decrement_ref_count2(name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional15=(((struct sFun*)(__right_value549=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_507)))==((void*)0))),    come_call_finalizer3(__right_value549,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional15) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value550=create_equals_automatically(any_type_503,"equals",info)));
        fun_512=multiple_assign_var11->v1;
        name_513=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(__right_value550,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj189=equaler_name_507;
        equaler_name_507=(char*)come_increment_ref_count(name_513);
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_513 = come_decrement_ref_count2(name_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj190=obj_value_499->c_value;
    obj_value_499->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_502,type_name_502,((char*)(__right_value551=buffer_to_string(num_string_500))),info->sname,info->sline,type_name_502,finalizer_name_504,cloner_name_505,get_hash_key_name_506,equaler_name_507));
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_514=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_501));
    type3_514->mPointerNum++;
    type3_514->mHeap=(_Bool)1;
    type2_501->mHeap=(_Bool)1;
    __dec_obj191=obj_value_499->type;
    obj_value_499->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_501));
    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_499->type->mPointerNum++;
    obj_value_499->var=((void*)0);
    append_object_to_right_values2(obj_value_499,(struct sType*)come_increment_ref_count(type3_514),info,(_Bool)0);
    obj_type_515=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_501));
    fun_name_516="initialize";
    multiple_assign_var12=((struct tuple2$2charphsGenericsFunp*)(__right_value557=make_generics_function(obj_type_515,(char*)come_increment_ref_count(__builtin_string(fun_name_516)),info,(_Bool)1)));
    name_517=(char*)come_increment_ref_count(multiple_assign_var12->v1);
    generics_fun_518=multiple_assign_var12->v2;
    come_call_finalizer3(__right_value557,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_519=(char*)come_increment_ref_count(name_517);
    fun_520=((struct sFun*)(__right_value558=map$2charphsFunphp_at(info->funcs,generics_fun_name_519,((void*)0))));
    come_call_finalizer3(__right_value558,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_520==((void*)0)) {
        __dec_obj192=generics_fun_name_519;
        generics_fun_name_519=(char*)come_increment_ref_count(create_method_name(obj_type_515,(_Bool)0,((char*)(__right_value559=__builtin_string(fun_name_516))),info,(_Bool)1));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_520=((struct sFun*)(__right_value561=map$2charphsFunphp_at(info->funcs,generics_fun_name_519,((void*)0))));
        come_call_finalizer3(__right_value561,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_520==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_519,info->come_fun->mName);
            __result326__ = (_Bool)1;
            come_call_finalizer3(tuple_types_473,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_474,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_502 = come_decrement_ref_count2(type_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_504 = come_decrement_ref_count2(finalizer_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_505 = come_decrement_ref_count2(cloner_name_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_506 = come_decrement_ref_count2(get_hash_key_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_507 = come_decrement_ref_count2(equaler_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_514,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_517 = come_decrement_ref_count2(name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_519 = come_decrement_ref_count2(generics_fun_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result326__;
        }
    }
    result_type_521=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_520->mResultType));
    result_type_521->mStatic=(_Bool)0;
    come_params_522=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 672, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional16=(((struct sType*)((void*)(__right_value565=list$1voidphp_operator_load_element(fun_520->mParamTypes,0))))->mHeap&&obj_value_499->type->mHeap)),    come_call_finalizer3(__right_value565,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional16) {
        std_move(((struct sType*)((void*)(__right_value566=list$1voidphp_operator_load_element(fun_520->mParamTypes,0)))),obj_value_499->type,obj_value_499,info,(_Bool)1);
        come_call_finalizer3(__right_value566,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_522,(struct CVALUE*)come_increment_ref_count(obj_value_499));
    i_523=1;
    for(    o2_saved_524=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_474)),it_525=list$1CVALUEphp_begin((o2_saved_524));    !list$1CVALUEphp_end((o2_saved_524));    it_525=list$1CVALUEphp_next((o2_saved_524))    ){
        come_value_526=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_525));
        if(        (_if_conditional17=(((struct sType*)((void*)(__right_value568=list$1voidphp_operator_load_element(fun_520->mParamTypes,i_523))))&&((struct sType*)((void*)(__right_value569=list$1voidphp_operator_load_element(fun_520->mParamTypes,i_523))))->mHeap&&come_value_526->type->mHeap)),        come_call_finalizer3(__right_value568,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value569,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional17) {
            std_move(((struct sType*)((void*)(__right_value570=list$1voidphp_operator_load_element(fun_520->mParamTypes,i_523)))),come_value_526->type,come_value_526,info,(_Bool)1);
            come_call_finalizer3(__right_value570,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_522,(struct CVALUE*)come_increment_ref_count(come_value_526));
        i_523++;
        come_call_finalizer3(come_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_524,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 691, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_527,generics_fun_name_519);
    buffer_append_str(buf_527,"(");
    j_528=0;
    for(    o2_saved_529=(struct list$1CVALUEph*)come_increment_ref_count((come_params_522)),it_530=list$1CVALUEphp_begin((o2_saved_529));    !list$1CVALUEphp_end((o2_saved_529));    it_530=list$1CVALUEphp_next((o2_saved_529))    ){
        buffer_append_str(buf_527,it_530->c_value);
        if(        j_528!=list$1CVALUEphp_length(come_params_522)-1) {
            buffer_append_str(buf_527,",");
        }
        j_528++;
    }
    come_call_finalizer3(o2_saved_529,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_527,")");
    come_value2_531=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 708, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj193=come_value2_531->c_value;
    come_value2_531->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_527));
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=come_value2_531->type;
    come_value2_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_521));
    come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_531->type->mStatic=(_Bool)0;
    come_value2_531->var=((void*)0);
    if(    result_type_521->mHeap) {
        append_object_to_right_values2(come_value2_531,(struct sType*)come_increment_ref_count(result_type_521),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_531->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_531));
    __result327__ = (_Bool)1;
    come_call_finalizer3(tuple_types_473,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_474,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_502 = come_decrement_ref_count2(type_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_504 = come_decrement_ref_count2(finalizer_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_505 = come_decrement_ref_count2(cloner_name_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_506 = come_decrement_ref_count2(get_hash_key_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_507 = come_decrement_ref_count2(equaler_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_514,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_517 = come_decrement_ref_count2(name_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_519 = come_decrement_ref_count2(generics_fun_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_522,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_527,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result327__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_470;
struct list_item$1tuple2$2charphsNodephph* prev_it_471;
    it_470=self->head;
    while(it_470!=((void*)0)) {
        prev_it_471=it_470;
        it_470=it_470->next;
        come_call_finalizer3(prev_it_471,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj179;
struct list$1tuple2$2charphsNodephph* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj180=self->tuple_elements;
            come_call_finalizer3(__dec_obj180,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_477;
struct tuple2$2charphsNodeph* __result310__;
struct tuple2$2charphsNodeph* __result311__;
struct tuple2$2charphsNodeph* result_478;
struct tuple2$2charphsNodeph* __result312__;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_477,0,sizeof(struct tuple2$2charphsNodeph*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_477;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->it=self->head;
    if(    self->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_478,0,sizeof(struct tuple2$2charphsNodeph*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_478;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_480;
struct tuple2$2charphsNodeph* __result313__;
struct tuple2$2charphsNodeph* __result314__;
struct tuple2$2charphsNodeph* result_481;
struct tuple2$2charphsNodeph* __result315__;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_480,0,sizeof(struct tuple2$2charphsNodeph*));
        __result313__ = gComeFunResultObject = __result_obj__ = result_480;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result314__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    memset(&result_481,0,sizeof(struct tuple2$2charphsNodeph*));
    __result315__ = gComeFunResultObject = __result_obj__ = result_481;
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result318__;
void* __right_value521 = (void*)0;
struct CVALUE* result_490;
void* __right_value522 = (void*)0;
char* __dec_obj181;
void* __right_value523 = (void*)0;
struct sType* __dec_obj182;
void* __right_value524 = (void*)0;
char* __dec_obj183;
void* __right_value525 = (void*)0;
char* __dec_obj184;
struct CVALUE* __result319__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_490=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key, CVALUE_equals));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj181=result_490->c_value;
        result_490->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj182=result_490->type;
        result_490->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_490->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_490->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj183=result_490->c_value_without_right_value_objects;
        result_490->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj184=result_490->c_value_without_cast_object_value;
        result_490->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_490;
    come_call_finalizer3(result_490,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_489;
    result_489=0;
    result_489+=int_get_hash_key(((int)self->c_value));
    result_489+=int_get_hash_key(((int)self->type));
    result_489+=int_get_hash_key(((int)self->var));
    result_489+=int_get_hash_key(((int)self->right_value_objects));
    result_489+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_489+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_489;
}

static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right){
    if(    !string_equals(left->c_value,right->c_value)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    if(    !sVar_equals(left->var,right->var)) {
        return (_Bool)0;
    }
    if(    !sRightValueObject_equals(left->right_value_objects,right->right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_right_value_objects,right->c_value_without_right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_cast_object_value,right->c_value_without_cast_object_value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVar_equals(struct sVar* left, struct sVar* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mCValueName,right->mCValueName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoFree,right->mNoFree)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_494;
void* __result320__;
void* __result321__;
void* result_495;
void* __result322__;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_494,0,sizeof(void*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_494;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->it=self->head;
    if(    self->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_495,0,sizeof(void*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_495;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_497;
void* __result323__;
void* __result324__;
void* result_498;
void* __result325__;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_497,0,sizeof(void*));
        __result323__ = gComeFunResultObject = __result_obj__ = result_497;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result324__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    memset(&result_498,0,sizeof(void*));
    __result325__ = gComeFunResultObject = __result_obj__ = result_498;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value577 = (void*)0;
struct list$1sNodeph* __dec_obj195;
struct sSomeNode* __result328__;
    ((struct sNodeBase*)(__right_value577=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value577,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj195=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj195,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value578=__builtin_string("sSomeNode")));
    __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_532;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1voidph* tuple_types_533;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1CVALUEph* tuple_values_534;
struct list$1sNodeph* o2_saved_535;
struct sNode* it_536;
_Bool Value_537;
_Bool __result330__;
void* __right_value583 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* type_539;
struct list$1voidph* o2_saved_540;
struct sType* it_541;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct CVALUE* obj_value_542;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct buffer* num_string_543;
void* __right_value594 = (void*)0;
struct sType* type2_544;
void* __right_value595 = (void*)0;
char* type_name_545;
void* __right_value596 = (void*)0;
char* finalizer_name_546;
void* __right_value597 = (void*)0;
char* cloner_name_547;
void* __right_value598 = (void*)0;
char* equaler_name_548;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
char* __dec_obj198;
void* __right_value601 = (void*)0;
struct sType* type3_549;
void* __right_value602 = (void*)0;
struct sType* __dec_obj199;
void* __right_value603 = (void*)0;
struct sType* obj_type_550;
char* fun_name_551;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var13 = (void*)0;
char* name_552=0;
struct sGenericsFun* generics_fun_553=0;
char* generics_fun_name_554;
void* __right_value606 = (void*)0;
struct sFun* fun_555;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
char* __dec_obj200;
void* __right_value609 = (void*)0;
_Bool __result331__;
void* __right_value610 = (void*)0;
struct sType* result_type_556;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1CVALUEph* come_params_557;
void* __right_value613 = (void*)0;
_Bool _if_conditional18;
void* __right_value614 = (void*)0;
int i_558;
struct list$1CVALUEph* o2_saved_559;
struct CVALUE* it_560;
void* __right_value615 = (void*)0;
struct CVALUE* come_value_561;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
_Bool _if_conditional19;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct buffer* buf_562;
int j_563;
struct list$1CVALUEph* o2_saved_564;
struct CVALUE* it_565;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct CVALUE* come_value2_566;
void* __right_value623 = (void*)0;
char* __dec_obj201;
void* __right_value624 = (void*)0;
struct sType* __dec_obj202;
_Bool __result332__;
    tuple_elements_532=self->tuple_elements;
    tuple_types_533=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 745, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_534=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 746, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_535=(tuple_elements_532),it_536=list$1sNodephp_begin((o2_saved_535));    !list$1sNodephp_end((o2_saved_535));    it_536=list$1sNodephp_next((o2_saved_535))    ){
        Value_537=node_compile(it_536,info);
        if(        !Value_537) {
            __result330__ = (_Bool)0;
            come_call_finalizer3(tuple_types_533,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_534,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        else {
        }
        come_value_538=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_534,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_538)));
        list$1voidphp_push_back(tuple_types_533,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_538->type)));
        come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_539=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 760, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value587=xsprintf("tuple%d",list$1voidphp_length(tuple_types_533)))),(_Bool)0,info));
    __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_540=(struct list$1voidph*)come_increment_ref_count((tuple_types_533)),it_541=((struct sType*)list$1voidphp_begin((o2_saved_540)));    !list$1voidphp_end((o2_saved_540));    it_541=((struct sType*)list$1voidphp_next((o2_saved_540)))    ){
        list$1voidphp_push_back(type_539->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value589=come_call_cloner(sType_clone, it_541))))));
        come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_542=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 766, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_543=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 768, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_543,"1");
    type2_544=(struct sType*)come_increment_ref_count(solve_generics(type_539,type_539,info));
    type_name_545=(char*)come_increment_ref_count(make_type_name_string(type2_544,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_546=(char*)come_increment_ref_count(create_method_name(type2_544,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_547=(char*)come_increment_ref_count(create_method_name(type2_544,(_Bool)0,"clone",info,(_Bool)1));
    equaler_name_548=(char*)come_increment_ref_count(create_method_name(type2_544,(_Bool)0,"equals",info,(_Bool)1));
    __dec_obj198=obj_value_542->c_value;
    obj_value_542->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_545,type_name_545,((char*)(__right_value599=buffer_to_string(num_string_543))),info->sname,info->sline,type_name_545));
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_549=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_544));
    type3_549->mPointerNum++;
    type3_549->mHeap=(_Bool)1;
    type2_544->mHeap=(_Bool)1;
    __dec_obj199=obj_value_542->type;
    obj_value_542->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_544));
    come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_542->type->mPointerNum++;
    obj_value_542->var=((void*)0);
    append_object_to_right_values2(obj_value_542,(struct sType*)come_increment_ref_count(type3_549),info,(_Bool)0);
    obj_type_550=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_544));
    fun_name_551="initialize";
    multiple_assign_var13=((struct tuple2$2charphsGenericsFunp*)(__right_value605=make_generics_function(obj_type_550,(char*)come_increment_ref_count(__builtin_string(fun_name_551)),info,(_Bool)1)));
    name_552=(char*)come_increment_ref_count(multiple_assign_var13->v1);
    generics_fun_553=multiple_assign_var13->v2;
    come_call_finalizer3(__right_value605,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_554=(char*)come_increment_ref_count(name_552);
    fun_555=((struct sFun*)(__right_value606=map$2charphsFunphp_at(info->funcs,generics_fun_name_554,((void*)0))));
    come_call_finalizer3(__right_value606,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_555==((void*)0)) {
        __dec_obj200=generics_fun_name_554;
        generics_fun_name_554=(char*)come_increment_ref_count(create_method_name(obj_type_550,(_Bool)0,((char*)(__right_value607=__builtin_string(fun_name_551))),info,(_Bool)1));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_555=((struct sFun*)(__right_value609=map$2charphsFunphp_at(info->funcs,generics_fun_name_554,((void*)0))));
        come_call_finalizer3(__right_value609,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_555==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_554,info->come_fun->mName);
            __result331__ = (_Bool)1;
            come_call_finalizer3(tuple_types_533,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_534,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_544,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_545 = come_decrement_ref_count2(type_name_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_546 = come_decrement_ref_count2(finalizer_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_547 = come_decrement_ref_count2(cloner_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_548 = come_decrement_ref_count2(equaler_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_549,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_552 = come_decrement_ref_count2(name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_554 = come_decrement_ref_count2(generics_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result331__;
        }
    }
    result_type_556=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_555->mResultType));
    result_type_556->mStatic=(_Bool)0;
    come_params_557=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 814, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional18=(((struct sType*)((void*)(__right_value613=list$1voidphp_operator_load_element(fun_555->mParamTypes,0))))->mHeap&&obj_value_542->type->mHeap)),    come_call_finalizer3(__right_value613,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional18) {
        std_move(((struct sType*)((void*)(__right_value614=list$1voidphp_operator_load_element(fun_555->mParamTypes,0)))),obj_value_542->type,obj_value_542,info,(_Bool)1);
        come_call_finalizer3(__right_value614,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_557,(struct CVALUE*)come_increment_ref_count(obj_value_542));
    i_558=1;
    for(    o2_saved_559=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_534)),it_560=list$1CVALUEphp_begin((o2_saved_559));    !list$1CVALUEphp_end((o2_saved_559));    it_560=list$1CVALUEphp_next((o2_saved_559))    ){
        come_value_561=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_560));
        if(        (_if_conditional19=(((struct sType*)((void*)(__right_value616=list$1voidphp_operator_load_element(fun_555->mParamTypes,i_558))))&&((struct sType*)((void*)(__right_value617=list$1voidphp_operator_load_element(fun_555->mParamTypes,i_558))))->mHeap&&come_value_561->type->mHeap)),        come_call_finalizer3(__right_value616,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value617,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
            std_move(((struct sType*)((void*)(__right_value618=list$1voidphp_operator_load_element(fun_555->mParamTypes,i_558)))),come_value_561->type,come_value_561,info,(_Bool)1);
            come_call_finalizer3(__right_value618,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_557,(struct CVALUE*)come_increment_ref_count(come_value_561));
        i_558++;
        come_call_finalizer3(come_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_562=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 833, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_562,generics_fun_name_554);
    buffer_append_str(buf_562,"(");
    j_563=0;
    for(    o2_saved_564=(struct list$1CVALUEph*)come_increment_ref_count((come_params_557)),it_565=list$1CVALUEphp_begin((o2_saved_564));    !list$1CVALUEphp_end((o2_saved_564));    it_565=list$1CVALUEphp_next((o2_saved_564))    ){
        buffer_append_str(buf_562,it_565->c_value);
        if(        j_563!=list$1CVALUEphp_length(come_params_557)-1) {
            buffer_append_str(buf_562,",");
        }
        j_563++;
    }
    come_call_finalizer3(o2_saved_564,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_562,")");
    come_value2_566=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 850, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj201=come_value2_566->c_value;
    come_value2_566->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_562));
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=come_value2_566->type;
    come_value2_566->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_556));
    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_566->type->mStatic=(_Bool)0;
    come_value2_566->var=((void*)0);
    if(    result_type_556->mHeap) {
        append_object_to_right_values2(come_value2_566,(struct sType*)come_increment_ref_count(result_type_556),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_566->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_566));
    __result332__ = (_Bool)1;
    come_call_finalizer3(tuple_types_533,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_534,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_544,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_545 = come_decrement_ref_count2(type_name_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_546 = come_decrement_ref_count2(finalizer_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_547 = come_decrement_ref_count2(cloner_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_548 = come_decrement_ref_count2(equaler_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_549,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_552 = come_decrement_ref_count2(name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_554 = come_decrement_ref_count2(generics_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_556,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_557,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_562,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_566,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result332__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj196;
struct list$1sNodeph* __dec_obj197;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj196=self->sname;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj197=self->tuple_elements;
            come_call_finalizer3(__dec_obj197,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value625 = (void*)0;
struct sNullReturnValue* __result333__;
    ((struct sNodeBase*)(__right_value625=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value625,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value626 = (void*)0;
char* __result334__;
    __result334__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value626=__builtin_string("sNullReturnValue")));
    __right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct CVALUE* come_value_567;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct buffer* buf_568;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* var_name_570;
void* __right_value633 = (void*)0;
struct sType* result_type_571;
void* __right_value634 = (void*)0;
struct sType* result_type2_572;
struct sType* left_type_573;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct CVALUE* come_value2_574;
char* __dec_obj204;
struct sType* __dec_obj205;
    if(    info->come_fun) {
        come_value_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 885, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 887, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        static int num_569=0;
        num_569++;
        var_name_570=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value631=int_to_string(num_569)))));
        __right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_571=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_572=(struct sType*)come_increment_ref_count(solve_generics(result_type_571,info->generics_type,info));
        left_type_573=(struct sType*)come_increment_ref_count(result_type2_572);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value635=make_define_var(left_type_573,var_name_570,(_Bool)0,info))));
        __right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_570,((char*)(__right_value636=make_type_name_string(left_type_573,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_574=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 903, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj204=come_value2_574->c_value;
        come_value2_574->c_value=(char*)come_increment_ref_count(var_name_570);
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj205=come_value2_574->type;
        come_value2_574->type=(struct sType*)come_increment_ref_count(result_type2_572);
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_574->type->mStatic=(_Bool)0;
        come_value2_574->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_574));
        come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_572,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_574,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj203;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj203=self->sname;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value643 = (void*)0;
struct sNode* __result337__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 920, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value640=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 920, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=_inf_value2));
    come_call_finalizer3(__right_value640,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value643) { __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result335__;
void* __right_value641 = (void*)0;
struct sNullReturnValue* result_576;
void* __right_value642 = (void*)0;
char* __dec_obj206;
struct sNullReturnValue* __result336__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_576=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue", sNullReturnValue_finalize, sNullReturnValue_clone, sNullReturnValue_get_hash_key, sNullReturnValue_equals));
    if(    self!=((void*)0)) {
        result_576->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj206=result_576->sname;
        result_576->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_576->sline_real=self->sline_real;
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_576;
    come_call_finalizer3(result_576,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static unsigned int sNullReturnValue_get_hash_key(struct sNullReturnValue* self){
unsigned int result_575;
    result_575=0;
    result_575+=int_get_hash_key(((int)self->sline));
    result_575+=int_get_hash_key(((int)self->sname));
    result_575+=int_get_hash_key(((int)self->sline_real));
    return result_575;
}

static _Bool sNullReturnValue_equals(struct sNullReturnValue* left, struct sNullReturnValue* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value644 = (void*)0;
struct sNullReturnValueOfException* __result338__;
    ((struct sNodeBase*)(__right_value644=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value644,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value645 = (void*)0;
char* __result339__;
    __result339__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value645=__builtin_string("sNullReturnValue")));
    __right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct CVALUE* come_value_577;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct buffer* buf_578;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
char* var_name_580;
void* __right_value652 = (void*)0;
struct sType* result_type_581;
void* __right_value653 = (void*)0;
struct sType* result_type2_582;
struct sType* __dec_obj208;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* left_type_583;
_Bool __result340__;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct CVALUE* come_value2_584;
char* __dec_obj209;
struct sType* __dec_obj210;
    if(    info->come_fun) {
        come_value_577=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 938, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_578=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 940, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        static int num_579=0;
        num_579++;
        var_name_580=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value650=int_to_string(num_579)))));
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_581=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_582=(struct sType*)come_increment_ref_count(solve_generics(result_type_581,info->generics_type,info));
        if(        result_type2_582->mNoSolvedGenericsType) {
            __dec_obj208=result_type2_582;
            result_type2_582=(struct sType*)come_increment_ref_count(result_type2_582->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_583=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value654=list$1voidphp_operator_load_element(result_type2_582->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value654,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        left_type_583==((void*)0)||string_operator_not_equals(result_type2_582->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result340__ = (_Bool)0;
            come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_578,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result340__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value656=make_define_var(left_type_583,var_name_580,(_Bool)0,info))));
        __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_580,((char*)(__right_value657=make_type_name_string(left_type_583,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_584=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 965, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj209=come_value2_584->c_value;
        come_value2_584->c_value=(char*)come_increment_ref_count(var_name_580);
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj210=come_value2_584->type;
        come_value2_584->type=(struct sType*)come_increment_ref_count(left_type_583);
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_584->type->mStatic=(_Bool)0;
        come_value2_584->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_584));
        come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_578,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj207;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj207=self->sname;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value664 = (void*)0;
struct sNode* __result343__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 982, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value661=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 982, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value664=_inf_value3));
    come_call_finalizer3(__right_value661,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value664) { __right_value664 = come_decrement_ref_count2(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result341__;
void* __right_value662 = (void*)0;
struct sNullReturnValueOfException* result_586;
void* __right_value663 = (void*)0;
char* __dec_obj211;
struct sNullReturnValueOfException* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_586=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException", sNullReturnValueOfException_finalize, sNullReturnValueOfException_clone, sNullReturnValueOfException_get_hash_key, sNullReturnValueOfException_equals));
    if(    self!=((void*)0)) {
        result_586->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_586->sname;
        result_586->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_586->sline_real=self->sline_real;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_586;
    come_call_finalizer3(result_586,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static unsigned int sNullReturnValueOfException_get_hash_key(struct sNullReturnValueOfException* self){
unsigned int result_585;
    result_585=0;
    result_585+=int_get_hash_key(((int)self->sline));
    result_585+=int_get_hash_key(((int)self->sname));
    result_585+=int_get_hash_key(((int)self->sline_real));
    return result_585;
}

static _Bool sNullReturnValueOfException_equals(struct sNullReturnValueOfException* left, struct sNullReturnValueOfException* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value665 = (void*)0;
struct sType* __dec_obj212;
struct sNullValue* __result344__;
    ((struct sNodeBase*)(__right_value665=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value665,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj212=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value666 = (void*)0;
char* __result345__;
    __result345__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value666=__builtin_string("sNullValue")));
    __right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct CVALUE* come_value_587;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct buffer* buf_588;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
char* var_name_590;
struct sType* left_type_591;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct CVALUE* come_value2_592;
char* __dec_obj215;
struct sType* __dec_obj216;
_Bool __result346__;
    come_value_587=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1001, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_588=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1003, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int num_589=0;
    num_589++;
    var_name_590=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value671=int_to_string(num_589)))));
    __right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_591=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value673=make_define_var(left_type_591,var_name_590,(_Bool)0,info))));
    __right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_590,((char*)(__right_value674=make_type_name_string(left_type_591,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_592=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1015, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj215=come_value2_592->c_value;
    come_value2_592->c_value=(char*)come_increment_ref_count(var_name_590);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj216=come_value2_592->type;
    come_value2_592->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_592->type->mStatic=(_Bool)0;
    come_value2_592->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_592));
    __result346__ = (_Bool)1;
    come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_588,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_590 = come_decrement_ref_count2(var_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result346__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj213;
struct sType* __dec_obj214;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj213=self->sname;
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj214=self->type;
            come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value682 = (void*)0;
struct sNode* __result349__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1031, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value678=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 1031, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result349__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value682=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value678,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value682) { __right_value682 = come_decrement_ref_count2(__right_value682, ((struct sNode*)__right_value682)->finalize, ((struct sNode*)__right_value682)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result347__;
void* __right_value679 = (void*)0;
struct sNullValue* result_594;
void* __right_value680 = (void*)0;
char* __dec_obj217;
void* __right_value681 = (void*)0;
struct sType* __dec_obj218;
struct sNullValue* __result348__;
    if(    self==(void*)0) {
        __result347__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    result_594=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue", sNullValue_finalize, sNullValue_clone, sNullValue_get_hash_key, sNullValue_equals));
    if(    self!=((void*)0)) {
        result_594->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_594->sname;
        result_594->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_594->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj218=result_594->type;
        result_594->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = result_594;
    come_call_finalizer3(result_594,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static unsigned int sNullValue_get_hash_key(struct sNullValue* self){
unsigned int result_593;
    result_593=0;
    result_593+=int_get_hash_key(((int)self->sline));
    result_593+=int_get_hash_key(((int)self->sname));
    result_593+=int_get_hash_key(((int)self->sline_real));
    result_593+=int_get_hash_key(((int)self->type));
    return result_593;
}

static _Bool sNullValue_equals(struct sNullValue* left, struct sNullValue* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value683 = (void*)0;
struct list$1sNodeph* __dec_obj219;
struct sNoneNode* __result350__;
    ((struct sNodeBase*)(__right_value683=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value683,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj219=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value684 = (void*)0;
char* __result351__;
    __result351__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value684=__builtin_string("sNoneNode")));
    __right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_595;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1voidph* tuple_types_596;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct list$1CVALUEph* tuple_values_597;
int i_598;
struct list$1sNodeph* o2_saved_599;
struct sNode* it_600;
_Bool Value_601;
_Bool __result352__;
void* __right_value689 = (void*)0;
struct CVALUE* come_value_602;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sType* string_type_603;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sType* type_604;
struct list$1voidph* o2_saved_605;
struct sType* it_606;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct CVALUE* obj_value_607;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct buffer* num_string_608;
void* __right_value703 = (void*)0;
struct sType* type2_609;
void* __right_value704 = (void*)0;
char* type_name_610;
void* __right_value705 = (void*)0;
char* finalizer_name_611;
void* __right_value706 = (void*)0;
char* cloner_name_612;
void* __right_value707 = (void*)0;
char* equaler_name_613;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
char* __dec_obj222;
void* __right_value710 = (void*)0;
struct sType* type3_614;
void* __right_value711 = (void*)0;
struct sType* __dec_obj223;
void* __right_value712 = (void*)0;
struct sType* obj_type_615;
char* fun_name_616;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var14 = (void*)0;
char* name_617=0;
struct sGenericsFun* generics_fun_618=0;
char* generics_fun_name_619;
void* __right_value715 = (void*)0;
struct sFun* fun_620;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* __dec_obj224;
void* __right_value718 = (void*)0;
_Bool __result353__;
void* __right_value719 = (void*)0;
struct sType* result_type_621;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1CVALUEph* come_params_622;
void* __right_value722 = (void*)0;
_Bool _if_conditional20;
void* __right_value723 = (void*)0;
struct list$1CVALUEph* o2_saved_623;
struct CVALUE* it_624;
void* __right_value724 = (void*)0;
struct CVALUE* come_value_625;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
_Bool _if_conditional21;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct buffer* buf_626;
int j_627;
struct list$1CVALUEph* o2_saved_628;
struct CVALUE* it_629;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct CVALUE* come_value2_630;
void* __right_value732 = (void*)0;
char* __dec_obj225;
void* __right_value733 = (void*)0;
struct sType* __dec_obj226;
_Bool __result354__;
    tuple_elements_595=self->tuple_elements;
    tuple_types_596=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1051, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_597=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1052, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_598=0;
    for(    o2_saved_599=(tuple_elements_595),it_600=list$1sNodephp_begin((o2_saved_599));    !list$1sNodephp_end((o2_saved_599));    it_600=list$1sNodephp_next((o2_saved_599))    ){
        Value_601=node_compile(it_600,info);
        if(        !Value_601) {
            __result352__ = (_Bool)0;
            come_call_finalizer3(tuple_types_596,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_597,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result352__;
        }
        else {
        }
        come_value_602=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_597,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_602)));
        list$1voidphp_push_back(tuple_types_596,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_602->type)));
        if(        i_598==1) {
            string_type_603=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1067, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
            string_type_603->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value694=xsprintf("invalid none type"))),string_type_603,come_value_602->type,come_value_602,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(string_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_598++;
        come_call_finalizer3(come_value_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_604=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1075, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value696=xsprintf("tuple%d",list$1voidphp_length(tuple_types_596)))),(_Bool)0,info));
    __right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_605=(struct list$1voidph*)come_increment_ref_count((tuple_types_596)),it_606=((struct sType*)list$1voidphp_begin((o2_saved_605)));    !list$1voidphp_end((o2_saved_605));    it_606=((struct sType*)list$1voidphp_next((o2_saved_605)))    ){
        list$1voidphp_push_back(type_604->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value698=come_call_cloner(sType_clone, it_606))))));
        come_call_finalizer3(__right_value698,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_605,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_607=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1081, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_608=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1083, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_608,"1");
    type2_609=(struct sType*)come_increment_ref_count(solve_generics(type_604,type_604,info));
    type_name_610=(char*)come_increment_ref_count(make_type_name_string(type2_609,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_611=(char*)come_increment_ref_count(create_method_name(type2_609,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_612=(char*)come_increment_ref_count(create_method_name(type2_609,(_Bool)0,"clone",info,(_Bool)1));
    equaler_name_613=(char*)come_increment_ref_count(create_method_name(type2_609,(_Bool)0,"equals",info,(_Bool)1));
    __dec_obj222=obj_value_607->c_value;
    obj_value_607->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_610,type_name_610,((char*)(__right_value708=buffer_to_string(num_string_608))),info->sname,info->sline,type_name_610));
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value708 = come_decrement_ref_count2(__right_value708, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_614=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_609));
    type3_614->mPointerNum++;
    type3_614->mHeap=(_Bool)1;
    type2_609->mHeap=(_Bool)1;
    __dec_obj223=obj_value_607->type;
    obj_value_607->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_609));
    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_607->type->mPointerNum++;
    obj_value_607->var=((void*)0);
    append_object_to_right_values2(obj_value_607,(struct sType*)come_increment_ref_count(type3_614),info,(_Bool)0);
    obj_type_615=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_609));
    fun_name_616="initialize";
    multiple_assign_var14=((struct tuple2$2charphsGenericsFunp*)(__right_value714=make_generics_function(obj_type_615,(char*)come_increment_ref_count(__builtin_string(fun_name_616)),info,(_Bool)1)));
    name_617=(char*)come_increment_ref_count(multiple_assign_var14->v1);
    generics_fun_618=multiple_assign_var14->v2;
    come_call_finalizer3(__right_value714,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_619=(char*)come_increment_ref_count(name_617);
    fun_620=((struct sFun*)(__right_value715=map$2charphsFunphp_at(info->funcs,generics_fun_name_619,((void*)0))));
    come_call_finalizer3(__right_value715,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_620==((void*)0)) {
        __dec_obj224=generics_fun_name_619;
        generics_fun_name_619=(char*)come_increment_ref_count(create_method_name(obj_type_615,(_Bool)0,((char*)(__right_value716=__builtin_string(fun_name_616))),info,(_Bool)1));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value716 = come_decrement_ref_count2(__right_value716, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_620=((struct sFun*)(__right_value718=map$2charphsFunphp_at(info->funcs,generics_fun_name_619,((void*)0))));
        come_call_finalizer3(__right_value718,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_620==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_619,info->come_fun->mName);
            __result353__ = (_Bool)1;
            come_call_finalizer3(tuple_types_596,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_597,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_609,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_610 = come_decrement_ref_count2(type_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_611 = come_decrement_ref_count2(finalizer_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_612 = come_decrement_ref_count2(cloner_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_613 = come_decrement_ref_count2(equaler_name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_614,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_617 = come_decrement_ref_count2(name_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_619 = come_decrement_ref_count2(generics_fun_name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result353__;
        }
    }
    result_type_621=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_620->mResultType));
    result_type_621->mStatic=(_Bool)0;
    come_params_622=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1129, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional20=(((struct sType*)((void*)(__right_value722=list$1voidphp_operator_load_element(fun_620->mParamTypes,0))))->mHeap&&obj_value_607->type->mHeap)),    come_call_finalizer3(__right_value722,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional20) {
        std_move(((struct sType*)((void*)(__right_value723=list$1voidphp_operator_load_element(fun_620->mParamTypes,0)))),obj_value_607->type,obj_value_607,info,(_Bool)1);
        come_call_finalizer3(__right_value723,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_622,(struct CVALUE*)come_increment_ref_count(obj_value_607));
    i_598=1;
    for(    o2_saved_623=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_597)),it_624=list$1CVALUEphp_begin((o2_saved_623));    !list$1CVALUEphp_end((o2_saved_623));    it_624=list$1CVALUEphp_next((o2_saved_623))    ){
        come_value_625=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_624));
        if(        (_if_conditional21=(((struct sType*)((void*)(__right_value725=list$1voidphp_operator_load_element(fun_620->mParamTypes,i_598))))&&((struct sType*)((void*)(__right_value726=list$1voidphp_operator_load_element(fun_620->mParamTypes,i_598))))->mHeap&&come_value_625->type->mHeap)),        come_call_finalizer3(__right_value725,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value726,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional21) {
            std_move(((struct sType*)((void*)(__right_value727=list$1voidphp_operator_load_element(fun_620->mParamTypes,i_598)))),come_value_625->type,come_value_625,info,(_Bool)1);
            come_call_finalizer3(__right_value727,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_622,(struct CVALUE*)come_increment_ref_count(come_value_625));
        i_598++;
        come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1148, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_626,generics_fun_name_619);
    buffer_append_str(buf_626,"(");
    j_627=0;
    for(    o2_saved_628=(struct list$1CVALUEph*)come_increment_ref_count((come_params_622)),it_629=list$1CVALUEphp_begin((o2_saved_628));    !list$1CVALUEphp_end((o2_saved_628));    it_629=list$1CVALUEphp_next((o2_saved_628))    ){
        buffer_append_str(buf_626,it_629->c_value);
        if(        j_627!=list$1CVALUEphp_length(come_params_622)-1) {
            buffer_append_str(buf_626,",");
        }
        j_627++;
    }
    come_call_finalizer3(o2_saved_628,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_626,")");
    come_value2_630=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1165, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj225=come_value2_630->c_value;
    come_value2_630->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_626));
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=come_value2_630->type;
    come_value2_630->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_621));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_630->type->mStatic=(_Bool)0;
    come_value2_630->var=((void*)0);
    if(    result_type_621->mHeap) {
        append_object_to_right_values2(come_value2_630,(struct sType*)come_increment_ref_count(result_type_621),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_630->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_630));
    __result354__ = (_Bool)1;
    come_call_finalizer3(tuple_types_596,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_597,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_609,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_610 = come_decrement_ref_count2(type_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_611 = come_decrement_ref_count2(finalizer_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_612 = come_decrement_ref_count2(cloner_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_613 = come_decrement_ref_count2(equaler_name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_614,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_617 = come_decrement_ref_count2(name_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_619 = come_decrement_ref_count2(generics_fun_name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_622,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result354__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj220;
struct list$1sNodeph* __dec_obj221;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj220=self->sname;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj221=self->tuple_elements;
            come_call_finalizer3(__dec_obj221,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value734 = (void*)0;
struct list$1sNodeph* __dec_obj227;
struct list$1sNodeph* __dec_obj228;
struct sMapNode* __result355__;
    ((struct sNodeBase*)(__right_value734=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value734,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj227=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj227,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj228=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj228,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value735 = (void*)0;
char* __result356__;
    __result356__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value735=__builtin_string("sMapNode")));
    __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_631;
struct list$1sNodeph* map_elements_632;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1CVALUEph* key_params_633;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct list$1CVALUEph* element_params_634;
struct sType* map_key_type_635;
struct sType* map_element_type_636;
int i_637;
void* __right_value740 = (void*)0;
struct sNode* key_elements_638;
void* __right_value741 = (void*)0;
struct sNode* elements_642;
void* __right_value742 = (void*)0;
_Bool _if_conditional22;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* value_node_643;
struct sNode* exp_644;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_645;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_646;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj233;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj234;
_Bool Value_647;
_Bool __result359__;
void* __right_value764 = (void*)0;
struct CVALUE* come_value_648;
void* __right_value765 = (void*)0;
struct sType* __dec_obj235;
_Bool Value_649;
_Bool __result360__;
void* __right_value766 = (void*)0;
struct CVALUE* come_value_650;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sType* __dec_obj236;
void* __right_value769 = (void*)0;
_Bool _if_conditional23;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct sNode* value_node_651;
struct sNode* exp2_652;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_653;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj237;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_654;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* __dec_obj238;
void* __right_value790 = (void*)0;
struct sNode* __dec_obj239;
_Bool Value_655;
_Bool __result361__;
void* __right_value791 = (void*)0;
struct CVALUE* come_value2_656;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* __dec_obj240;
_Bool Value_657;
_Bool __result362__;
void* __right_value794 = (void*)0;
struct CVALUE* come_value2_658;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sType* __dec_obj241;
void* __right_value797 = (void*)0;
struct sType* key_type_values_660;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
char* var_name_661;
void* __right_value800 = (void*)0;
struct sVar* var__662;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sType* element_type_values_663;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
char* var_name2_664;
void* __right_value805 = (void*)0;
struct sVar* var2__665;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct buffer* source_666;
int i_667;
void* __right_value809 = (void*)0;
struct CVALUE* key_param_668;
void* __right_value810 = (void*)0;
struct CVALUE* element_param_669;
void* __right_value811 = (void*)0;
char* c_value_670;
void* __right_value812 = (void*)0;
char* c_value_671;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct sType* map_type_672;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sType* obj_type_673;
char* fun_name_674;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var15 = (void*)0;
char* name_675=0;
struct sGenericsFun* generics_fun_676=0;
char* generics_fun_name_677;
void* __right_value820 = (void*)0;
struct sFun* fun_678;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
char* __dec_obj242;
void* __right_value823 = (void*)0;
_Bool __result363__;
void* __right_value824 = (void*)0;
struct sType* result_type_679;
struct sType* type_680;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct CVALUE* obj_value_681;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct buffer* num_string_682;
void* __right_value829 = (void*)0;
struct sType* type2_683;
void* __right_value830 = (void*)0;
char* type_name_684;
struct sType* any_type_685;
void* __right_value831 = (void*)0;
char* finalizer_name_686;
void* __right_value832 = (void*)0;
char* cloner_name_687;
void* __right_value833 = (void*)0;
char* get_hash_key_name_688;
void* __right_value834 = (void*)0;
char* equaler_name_689;
void* __right_value835 = (void*)0;
_Bool _if_conditional24;
void* __right_value836 = (void*)0;
char* __dec_obj243;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
_Bool _if_conditional25;
void* __right_value839 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var16 = (void*)0;
struct sFun* fun_690=0;
char* name_691=0;
char* __dec_obj244;
void* __right_value840 = (void*)0;
_Bool _if_conditional26;
void* __right_value841 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var17 = (void*)0;
struct sFun* fun_692=0;
char* name_693=0;
char* __dec_obj245;
void* __right_value842 = (void*)0;
_Bool _if_conditional27;
void* __right_value843 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var18 = (void*)0;
struct sFun* fun_694=0;
char* name_695=0;
char* __dec_obj246;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
char* __dec_obj247;
void* __right_value846 = (void*)0;
struct sType* type3_696;
void* __right_value847 = (void*)0;
struct sType* __dec_obj248;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1CVALUEph* come_params_697;
void* __right_value850 = (void*)0;
_Bool _if_conditional28;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct CVALUE* come_value2_698;
void* __right_value854 = (void*)0;
char* __dec_obj249;
struct sType* __dec_obj250;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct CVALUE* come_value3_699;
void* __right_value857 = (void*)0;
char* __dec_obj251;
struct sType* __dec_obj252;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct CVALUE* come_value4_700;
void* __right_value860 = (void*)0;
char* __dec_obj253;
struct sType* __dec_obj254;
int j_701;
struct list$1CVALUEph* o2_saved_702;
struct CVALUE* it_703;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct CVALUE* come_value5_704;
void* __right_value863 = (void*)0;
char* __dec_obj255;
void* __right_value864 = (void*)0;
struct sType* __dec_obj256;
_Bool __result364__;
exp_644 = (void*)0;
exp2_652 = (void*)0;
    map_key_elements_631=self->map_key_elements;
    map_elements_632=self->map_elements;
    key_params_633=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1205, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_634=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1206, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_635=((void*)0);
    map_element_type_636=((void*)0);
    for(    i_637=0;    i_637<list$1sNodephp_length(map_key_elements_631);    i_637++    ){
        key_elements_638=((struct sNode*)(__right_value740=list$1sNodephp_operator_load_element(map_key_elements_631,i_637)));
        if(__right_value740) { __right_value740 = come_decrement_ref_count2(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1, 0, 0, (void*)0); } 
        elements_642=((struct sNode*)(__right_value741=list$1sNodephp_operator_load_element(map_elements_632,i_637)));
        if(__right_value741) { __right_value741 = come_decrement_ref_count2(__right_value741, ((struct sNode*)__right_value741)->finalize, ((struct sNode*)__right_value741)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        (_if_conditional22=(string_operator_equals(((char*)(__right_value742=key_elements_638->kind(key_elements_638->_protocol_obj))),"sWildCard"))),        (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional22) {
            value_node_643=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value743=xsprintf("Value"))),info));
            __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_645=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1219, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_645,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1220, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_643))));
                __dec_obj232=exp_644;
                exp_644=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value750=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_643),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_645),((void*)0),0,((void*)0),info));
                if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_645,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_646=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1225, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1226, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_644))));
                list$1tuple2$2charphsNodephphp_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1227, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_637,info)))));
                __dec_obj233=exp_644;
                exp_644=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value761=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_644),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_646),((void*)0),0,((void*)0),info));
                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj234=exp_644;
                exp_644=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_644,info));
                if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_646,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_647=node_compile(exp_644,info);
            if(            !Value_647) {
                __result359__ = (_Bool)0;
                if(value_node_643) { value_node_643 = come_decrement_ref_count2(value_node_643, ((struct sNode*)value_node_643)->finalize, ((struct sNode*)value_node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_644) { exp_644 = come_decrement_ref_count2(exp_644, ((struct sNode*)exp_644)->finalize, ((struct sNode*)exp_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_634,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result359__;
            }
            else {
            }
            come_value_648=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(key_params_633,(struct CVALUE*)come_increment_ref_count(come_value_648));
            __dec_obj235=map_key_type_635;
            map_key_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_648->type));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_643) { value_node_643 = come_decrement_ref_count2(value_node_643, ((struct sNode*)value_node_643)->finalize, ((struct sNode*)value_node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_644) { exp_644 = come_decrement_ref_count2(exp_644, ((struct sNode*)exp_644)->finalize, ((struct sNode*)exp_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_648,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_649=node_compile(key_elements_638,info);
            if(            !Value_649) {
                __result360__ = (_Bool)0;
                come_call_finalizer3(key_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_634,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result360__;
            }
            else {
            }
            come_value_650=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_635) {
                check_assign_type(((char*)(__right_value767=xsprintf("invalid map key type"))),map_key_type_635,come_value_650->type,come_value_650,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(key_params_633,(struct CVALUE*)come_increment_ref_count(come_value_650));
            __dec_obj236=map_key_type_635;
            map_key_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_650->type));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional23=(string_operator_equals(((char*)(__right_value769=elements_642->kind(elements_642->_protocol_obj))),"sWildCard"))),        (__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional23) {
            value_node_651=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value770=xsprintf("Value"))),info));
            __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_653=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1263, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_653,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1264, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_651))));
                __dec_obj237=exp2_652;
                exp2_652=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value777=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_651),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_653),((void*)0),0,((void*)0),info));
                if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_653,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_654=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1269, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_654,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1270, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_652))));
                list$1tuple2$2charphsNodephphp_add(params_654,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1271, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_637,info)))));
                __dec_obj238=exp2_652;
                exp2_652=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value788=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_652),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_654),((void*)0),0,((void*)0),info));
                if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj239=exp2_652;
                exp2_652=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_652,info));
                if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_654,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_655=node_compile(exp2_652,info);
            if(            !Value_655) {
                __result361__ = (_Bool)0;
                if(value_node_651) { value_node_651 = come_decrement_ref_count2(value_node_651, ((struct sNode*)value_node_651)->finalize, ((struct sNode*)value_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_652) { exp2_652 = come_decrement_ref_count2(exp2_652, ((struct sNode*)exp2_652)->finalize, ((struct sNode*)exp2_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_634,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result361__;
            }
            else {
            }
            come_value2_656=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_636) {
                check_assign_type(((char*)(__right_value792=xsprintf("invalid map element type"))),map_element_type_636,come_value2_656->type,come_value2_656,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_634,(struct CVALUE*)come_increment_ref_count(come_value2_656));
            __dec_obj240=map_element_type_636;
            map_element_type_636=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_656->type));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_651) { value_node_651 = come_decrement_ref_count2(value_node_651, ((struct sNode*)value_node_651)->finalize, ((struct sNode*)value_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_652) { exp2_652 = come_decrement_ref_count2(exp2_652, ((struct sNode*)exp2_652)->finalize, ((struct sNode*)exp2_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_656,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_657=node_compile(elements_642,info);
            if(            !Value_657) {
                __result362__ = (_Bool)0;
                come_call_finalizer3(key_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_634,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result362__;
            }
            else {
            }
            come_value2_658=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_636) {
                check_assign_type(((char*)(__right_value795=xsprintf("invalid map element type"))),map_element_type_636,come_value2_658->type,come_value2_658,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_634,(struct CVALUE*)come_increment_ref_count(come_value2_658));
            __dec_obj241=map_element_type_636;
            map_element_type_636=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_658->type));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_659=0;
    key_type_values_660=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_635));
    list$1sNodephp_push_back(key_type_values_660->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(key_params_633),info)));
    key_type_values_660->mHeap=(_Bool)0;
    var_name_661=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_659));
    add_variable_to_table(var_name_661,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_660)),info);
    var__662=get_variable_from_table(info->lv_table,var_name_661);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value801=make_define_var(key_type_values_660,var__662->mCValueName,(_Bool)0,info))));
    __right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_663=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_636));
    list$1sNodephp_push_back(element_type_values_663->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(element_params_634),info)));
    element_type_values_663->mHeap=(_Bool)0;
    var_name2_664=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_659));
    add_variable_to_table(var_name2_664,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_663)),info);
    var2__665=get_variable_from_table(info->lv_table,var_name2_664);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value806=make_define_var(element_type_values_663,var2__665->mCValueName,(_Bool)0,info))));
    __right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_666=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1332, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(source_666,"(");
    for(    i_667=0;    i_667<list$1CVALUEphp_length(key_params_633);    i_667++    ){
        key_param_668=((struct CVALUE*)(__right_value809=list$1CVALUEphp_operator_load_element(key_params_633,i_667)));
        come_call_finalizer3(__right_value809,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_669=((struct CVALUE*)(__right_value810=list$1CVALUEphp_operator_load_element(element_params_634,i_667)));
        come_call_finalizer3(__right_value810,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_635->mHeap) {
            c_value_670=(char*)come_increment_ref_count(increment_ref_count_object(key_param_668->type,key_param_668->c_value,info));
            buffer_append_format(source_666,"%s[%d]=%s,\n",var__662->mCValueName,i_667,c_value_670);
            c_value_670 = come_decrement_ref_count2(c_value_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_666,"%s[%d]=%s,\n",var__662->mCValueName,i_667,key_param_668->c_value);
        }
        if(        map_element_type_636->mHeap) {
            c_value_671=(char*)come_increment_ref_count(increment_ref_count_object(element_param_669->type,element_param_669->c_value,info));
            buffer_append_format(source_666,"%s[%d]=%s,\n",var2__665->mCValueName,i_667,c_value_671);
            c_value_671 = come_decrement_ref_count2(c_value_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_666,"%s[%d]=%s,\n",var2__665->mCValueName,i_667,element_param_669->c_value);
        }
    }
    map_type_672=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1357, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"map",(_Bool)0,info));
    list$1voidphp_push_back(map_type_672->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value815=come_call_cloner(sType_clone, map_key_type_635))))));
    come_call_finalizer3(__right_value815,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1voidphp_push_back(map_type_672->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value816=come_call_cloner(sType_clone, map_element_type_636))))));
    come_call_finalizer3(__right_value816,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_673=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_672));
    fun_name_674="initialize_with_values";
    multiple_assign_var15=((struct tuple2$2charphsGenericsFunp*)(__right_value819=make_generics_function(obj_type_673,(char*)come_increment_ref_count(__builtin_string(fun_name_674)),info,(_Bool)1)));
    name_675=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    generics_fun_676=multiple_assign_var15->v2;
    come_call_finalizer3(__right_value819,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_677=(char*)come_increment_ref_count(name_675);
    fun_678=((struct sFun*)(__right_value820=map$2charphsFunphp_at(info->funcs,generics_fun_name_677,((void*)0))));
    come_call_finalizer3(__right_value820,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_678==((void*)0)) {
        __dec_obj242=generics_fun_name_677;
        generics_fun_name_677=(char*)come_increment_ref_count(create_method_name(obj_type_673,(_Bool)0,((char*)(__right_value821=__builtin_string(fun_name_674))),info,(_Bool)1));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value821 = come_decrement_ref_count2(__right_value821, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_678=((struct sFun*)(__right_value823=map$2charphsFunphp_at(info->funcs,generics_fun_name_677,((void*)0))));
        come_call_finalizer3(__right_value823,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_678==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_677,info->come_fun->mName);
            __result363__ = (_Bool)1;
            come_call_finalizer3(key_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_634,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_660,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_661 = come_decrement_ref_count2(var_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_663,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_664 = come_decrement_ref_count2(var_name2_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_673,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_677 = come_decrement_ref_count2(generics_fun_name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result363__;
        }
    }
    result_type_679=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_678->mResultType));
    result_type_679->mStatic=(_Bool)0;
    type_680=map_type_672;
    obj_value_681=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1385, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_682=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1387, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_682,"1");
    type2_683=(struct sType*)come_increment_ref_count(solve_generics(type_680,type_680,info));
    type_name_684=(char*)come_increment_ref_count(make_type_name_string(type2_683,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_685=(struct sType*)come_increment_ref_count(type2_683);
    any_type_685->mPointerNum=1;
    any_type_685->mHeap=(_Bool)1;
    finalizer_name_686=(char*)come_increment_ref_count(create_method_name(any_type_685,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_687=(char*)come_increment_ref_count(create_method_name(any_type_685,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_688=(char*)come_increment_ref_count(create_method_name(any_type_685,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_689=(char*)come_increment_ref_count(create_method_name(any_type_685,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional24=(((struct sFun*)(__right_value835=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_686)))==((void*)0))),    come_call_finalizer3(__right_value835,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional24) {
        if(        string_operator_equals(finalizer_name_686,"string_finalize")||string_operator_equals(finalizer_name_686,"charp_finalize")) {
            __dec_obj243=finalizer_name_686;
            finalizer_name_686=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFunpcharph*)(__right_value837=create_finalizer_automatically(any_type_685,"finalize",info)));
            come_call_finalizer3(__right_value837,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    (_if_conditional25=(((struct sFun*)(__right_value838=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_687)))==((void*)0))),    come_call_finalizer3(__right_value838,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional25) {
        multiple_assign_var16=((struct tuple2$2sFunpcharph*)(__right_value839=create_cloner_automatically(any_type_685,"clone",info)));
        fun_690=multiple_assign_var16->v1;
        name_691=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        come_call_finalizer3(__right_value839,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj244=cloner_name_687;
        cloner_name_687=(char*)come_increment_ref_count(name_691);
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_691 = come_decrement_ref_count2(name_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional26=(((struct sFun*)(__right_value840=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_688)))==((void*)0))),    come_call_finalizer3(__right_value840,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional26) {
        multiple_assign_var17=((struct tuple2$2sFunpcharph*)(__right_value841=create_get_hash_key_automatically(any_type_685,"get_hash_key",info)));
        fun_692=multiple_assign_var17->v1;
        name_693=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        come_call_finalizer3(__right_value841,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj245=get_hash_key_name_688;
        get_hash_key_name_688=(char*)come_increment_ref_count(name_693);
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional27=(((struct sFun*)(__right_value842=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_689)))==((void*)0))),    come_call_finalizer3(__right_value842,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional27) {
        multiple_assign_var18=((struct tuple2$2sFunpcharph*)(__right_value843=create_equals_automatically(any_type_685,"equals",info)));
        fun_694=multiple_assign_var18->v1;
        name_695=(char*)come_increment_ref_count(multiple_assign_var18->v2);
        come_call_finalizer3(__right_value843,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj246=equaler_name_689;
        equaler_name_689=(char*)come_increment_ref_count(name_695);
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_695 = come_decrement_ref_count2(name_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj247=obj_value_681->c_value;
    obj_value_681->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_684,type_name_684,((char*)(__right_value844=buffer_to_string(num_string_682))),info->sname,info->sline,type_name_684,finalizer_name_686,cloner_name_687,get_hash_key_name_688,equaler_name_689));
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value844 = come_decrement_ref_count2(__right_value844, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_696=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_683));
    type3_696->mPointerNum++;
    type3_696->mHeap=(_Bool)1;
    type2_683->mHeap=(_Bool)1;
    __dec_obj248=obj_value_681->type;
    obj_value_681->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_683));
    come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_681->type->mPointerNum++;
    obj_value_681->var=((void*)0);
    append_object_to_right_values2(obj_value_681,(struct sType*)come_increment_ref_count(type3_696),info,(_Bool)0);
    come_params_697=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1437, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional28=(((struct sType*)((void*)(__right_value850=list$1voidphp_operator_load_element(fun_678->mParamTypes,0))))->mHeap&&obj_value_681->type->mHeap)),    come_call_finalizer3(__right_value850,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional28) {
        std_move(((struct sType*)((void*)(__right_value851=list$1voidphp_operator_load_element(fun_678->mParamTypes,0)))),obj_value_681->type,obj_value_681,info,(_Bool)1);
        come_call_finalizer3(__right_value851,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_697,(struct CVALUE*)come_increment_ref_count(obj_value_681));
    come_value2_698=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1444, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj249=come_value2_698->c_value;
    come_value2_698->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(key_params_633)));
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj250=come_value2_698->type;
    come_value2_698->type=((void*)0);
    come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_698->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_697,(struct CVALUE*)come_increment_ref_count(come_value2_698));
    come_value3_699=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1452, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj251=come_value3_699->c_value;
    come_value3_699->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__662->mCValueName));
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj252=come_value3_699->type;
    come_value3_699->type=((void*)0);
    come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_699->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_697,(struct CVALUE*)come_increment_ref_count(come_value3_699));
    come_value4_700=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1460, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj253=come_value4_700->c_value;
    come_value4_700->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__665->mCValueName));
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj254=come_value4_700->type;
    come_value4_700->type=((void*)0);
    come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_700->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_697,(struct CVALUE*)come_increment_ref_count(come_value4_700));
    buffer_append_str(source_666,generics_fun_name_677);
    buffer_append_str(source_666,"(");
    j_701=0;
    for(    o2_saved_702=(struct list$1CVALUEph*)come_increment_ref_count((come_params_697)),it_703=list$1CVALUEphp_begin((o2_saved_702));    !list$1CVALUEphp_end((o2_saved_702));    it_703=list$1CVALUEphp_next((o2_saved_702))    ){
        buffer_append_str(source_666,it_703->c_value);
        if(        j_701!=list$1CVALUEphp_length(come_params_697)-1) {
            buffer_append_str(source_666,",");
        }
        j_701++;
    }
    come_call_finalizer3(o2_saved_702,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_666,")");
    buffer_append_str(source_666,")");
    come_value5_704=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1486, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj255=come_value5_704->c_value;
    come_value5_704->c_value=(char*)come_increment_ref_count(buffer_to_string(source_666));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=come_value5_704->type;
    come_value5_704->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_679));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_704->type->mStatic=(_Bool)0;
    come_value5_704->var=((void*)0);
    if(    result_type_679->mHeap) {
        append_object_to_right_values2(come_value5_704,(struct sType*)come_increment_ref_count(result_type_679),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_704->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_704));
    __result364__ = (_Bool)1;
    come_call_finalizer3(key_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_634,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_660,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_661 = come_decrement_ref_count2(var_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_663,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_664 = come_decrement_ref_count2(var_name2_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_673,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_677 = come_decrement_ref_count2(generics_fun_name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_679,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_682,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_683,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_684 = come_decrement_ref_count2(type_name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_686 = come_decrement_ref_count2(finalizer_name_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_687 = come_decrement_ref_count2(cloner_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_688 = come_decrement_ref_count2(get_hash_key_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_689 = come_decrement_ref_count2(equaler_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_696,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_697,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_704,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result364__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj229;
struct list$1sNodeph* __dec_obj230;
struct list$1sNodeph* __dec_obj231;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj229=self->sname;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj230=self->map_key_elements;
            come_call_finalizer3(__dec_obj230,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj231=self->map_elements;
            come_call_finalizer3(__dec_obj231,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_639;
int i_640;
struct sNode* __result357__;
struct sNode* default_value_641;
struct sNode* __result358__;
default_value_641 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_639=self->head;
    i_640=0;
    while(it_639!=((void*)0)) {
        if(        position==i_640) {
            __result357__ = gComeFunResultObject = __result_obj__ = it_639->item;
            gComeFunResultObject = (void*)0;
            return __result357__;
        }
        it_639=it_639->next;
        i_640++;
    }
    memset(&default_value_641,0,sizeof(struct sNode*));
    __result358__ = gComeFunResultObject = __result_obj__ = default_value_641;
    if(default_value_641) { default_value_641 = come_decrement_ref_count2(default_value_641, ((struct sNode*)default_value_641)->finalize, ((struct sNode*)default_value_641)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result358__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_705;
int sline_706;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct list$1sNodeph* exps_707;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct buffer* value_708;
char* head_of_last_line_709;
int len_710;
void* __right_value869 = (void*)0;
struct sNode* exp_711;
int sline2_712;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value877 = (void*)0;
struct sNode* __result367__;
int sline_real_715;
int sline_716;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct buffer* value_717;
char* p_718;
int sline_719;
int sline2_720;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value883 = (void*)0;
struct sNode* __result368__;
int sline_real_721;
int sline_722;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct buffer* value_723;
unsigned long  int size_724;
char* p_725;
int sline_726;
int len_727;
int sline2_728;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value891 = (void*)0;
struct sNode* __result371__;
int sline_real_731;
int sline_732;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct buffer* buf_733;
_Bool global_734;
_Bool ignore_case_735;
_Bool catch_exception_736;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value897 = (void*)0;
struct sNode* obj_737;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_738;
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
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct buffer* method_block_739;
int method_block_sline_740;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1voidph* method_generics_types_741;
void* __right_value939 = (void*)0;
struct sNode* node_742;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* __dec_obj262;
struct sNode* __result372__;
int sline_real_743;
int sline_744;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct buffer* value_745;
char* p_746;
int sline_747;
int len_748;
int sline2_749;
_Bool global_750;
_Bool ignore_case_751;
_Bool catch_exception_752;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value947 = (void*)0;
struct sNode* obj_753;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_754;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct buffer* method_block_755;
int method_block_sline_756;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct list$1voidph* method_generics_types_757;
void* __right_value989 = (void*)0;
struct sNode* node_758;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sNode* __dec_obj263;
struct sNode* __result373__;
int sline_real_759;
int c_760;
int n_761;
int n_762;
unsigned long long int n_765;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value996 = (void*)0;
struct sNode* __result376__;
int sline_real_768;
int c_769;
_Bool quote_770;
int n_771;
int n_772;
unsigned long long int n_775;
unsigned char p2_776;
int size_777;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value1001 = (void*)0;
struct sNode* __result379__;
int sline_real_781;
int sline_782;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct buffer* value_783;
char* p_784;
int sline_785;
int sline2_786;
int len_787;
void* __right_value1004 = (void*)0;
int* wstr_788;
char* str_789;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value1010 = (void*)0;
struct sNode* __result382__;
int sline_real_792;
int sline_793;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct list$1sNodeph* exps_794;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct buffer* value_795;
char* p_796;
int sline_797;
int len_798;
void* __right_value1015 = (void*)0;
struct sNode* exp_799;
int sline2_800;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value1019 = (void*)0;
struct sNode* __result383__;
int sline_real_801;
char* p_802;
_Bool no_comma_803;
void* __right_value1020 = (void*)0;
struct sNode* node_804;
char* p2_805;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct buffer* first_element_source_806;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct list$1sNodeph* list_elements_807;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct list$1sNodeph* map_keys_808;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct list$1sNodeph* map_elements_809;
_Bool no_comma_810;
void* __right_value1029 = (void*)0;
struct sNode* node2_811;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1036 = (void*)0;
struct sNode* __result386__;
_Bool no_comma_814;
void* __right_value1037 = (void*)0;
struct sNode* node2_815;
void* __right_value1038 = (void*)0;
struct sNode* node3_816;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1041 = (void*)0;
struct sNode* __result387__;
_Bool no_comma_817;
void* __right_value1042 = (void*)0;
struct sNode* node2_818;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1048 = (void*)0;
struct sNode* __result390__;
void* __right_value1049 = (void*)0;
struct sNode* node_821;
struct sNode* __result391__;
struct sNode* __result392__;
memset(&c_760, 0, sizeof(int));
memset(&c_769, 0, sizeof(int));
memset(&quote_770, 0, sizeof(_Bool));
memset(&size_777, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_705=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_706=info->sline;
        exps_707=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1516, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1517, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        head_of_last_line_709=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_709) {
                    buffer_trim(value_708,info->p-head_of_last_line_709);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_708,37);
                buffer_append_char(value_708,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_708,92);
                buffer_append_char(value_708,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_708,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_710=0;
                    while(xisdigit(*info->p)&&len_710<3) {
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        len_710++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_708,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_711=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_707,(struct sNode*)come_increment_ref_count(exp_711));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_708,"%s");
                    if(exp_711) { exp_711 = come_decrement_ref_count2(exp_711, ((struct sNode*)exp_711)->finalize, ((struct sNode*)exp_711)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_708,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_712=info->sline;
                info->sline=sline_706;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_708,92);
                    buffer_append_char(value_708,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_709=info->p;
                }
                else {
                    buffer_append_char(value_708,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_705;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1656, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value872=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1656, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_708)),(struct list$1sNodeph*)come_increment_ref_count(exps_707),sline_706,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value877=_inf_value5));
        come_call_finalizer3(exps_707,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value872,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value877) { __right_value877 = come_decrement_ref_count2(__right_value877, ((struct sNode*)__right_value877)->finalize, ((struct sNode*)__right_value877)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result367__;
        come_call_finalizer3(exps_707,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_715=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_716=info->sline;
        value_717=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1666, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_718=info->p;
                sline_719=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_718;
                    info->sline=sline_719;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_717,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_717,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_717,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_720=info->sline;
                info->sline=sline_716;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_720;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_717,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_715;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1719, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value882=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1719, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_717)),sline_716,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result368__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value883=_inf_value6));
        come_call_finalizer3(value_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value882,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value883) { __right_value883 = come_decrement_ref_count2(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result368__;
        come_call_finalizer3(value_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_721=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_722=info->sline;
        value_723=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1729, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        size_724=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_723,*info->p);
                info->p++;
                p_725=info->p;
                sline_726=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_725;
                    info->sline=sline_726;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_723,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_727=0;
                    while(xisdigit(*info->p)&&len_727<3) {
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        len_727++;
                    }
                    size_724++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_723,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                    }
                    size_724++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 110:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 116:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 114:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 118:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 102:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 97:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 98:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        case 92:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                        default:
                        buffer_append_char(value_723,*info->p);
                        info->p++;
                        size_724++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_728=info->sline;
                info->sline=sline_722;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_723,*info->p);
                info->p++;
                size_724++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_721;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1856, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value887=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1856, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_723),size_724,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result371__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value891=_inf_value7));
        come_call_finalizer3(value_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value887,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value891) { __right_value891 = come_decrement_ref_count2(__right_value891, ((struct sNode*)__right_value891)->finalize, ((struct sNode*)__right_value891)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result371__;
        come_call_finalizer3(value_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_731=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_732=info->sline;
        buf_733=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1865, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_733,*info->p);
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
                buffer_append_char(buf_733,*info->p);
                info->p++;
            }
        }
        global_734=(_Bool)0;
        ignore_case_735=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_734=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_735=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_736=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_736=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1909, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value896=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1909, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_733)),sline_732,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_737=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value896,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_738=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1911, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1913, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_737))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1914, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_735)?(((struct sNode*)(__right_value904=create_int_node(1,info)))):(((struct sNode*)(__right_value905=create_int_node(0,info)))))))));
        if(__right_value904) { __right_value904 = come_decrement_ref_count2(__right_value904, ((struct sNode*)__right_value904)->finalize, ((struct sNode*)__right_value904)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value905) { __right_value905 = come_decrement_ref_count2(__right_value905, ((struct sNode*)__right_value905)->finalize, ((struct sNode*)__right_value905)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1915, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1916, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_734)?(((struct sNode*)(__right_value913=create_int_node(1,info)))):(((struct sNode*)(__right_value914=create_int_node(0,info)))))))));
        if(__right_value913) { __right_value913 = come_decrement_ref_count2(__right_value913, ((struct sNode*)__right_value913)->finalize, ((struct sNode*)__right_value913)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value914) { __right_value914 = come_decrement_ref_count2(__right_value914, ((struct sNode*)__right_value914)->finalize, ((struct sNode*)__right_value914)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1917, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1918, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1919, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1920, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1921, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_739=((void*)0);
        method_block_sline_740=info->sline;
        method_generics_types_741=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1927, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_742=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_737),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_738),method_block_739,method_block_sline_740,method_generics_types_741,info));
        if(        !catch_exception_736) {
            __dec_obj262=node_742;
            node_742=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_742)),info));
            if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_731;
        __result372__ = gComeFunResultObject = __result_obj__ = node_742;
        come_call_finalizer3(buf_733,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_737) { obj_737 = come_decrement_ref_count2(obj_737, ((struct sNode*)obj_737)->finalize, ((struct sNode*)obj_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_738,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_741,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_742) { node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result372__;
        come_call_finalizer3(buf_733,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_737) { obj_737 = come_decrement_ref_count2(obj_737, ((struct sNode*)obj_737)->finalize, ((struct sNode*)obj_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_738,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_741,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_742) { node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_743=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_744=info->sline;
        value_745=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1945, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_746=info->p;
                sline_747=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_746;
                    info->sline=sline_747;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_745,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_748=0;
                    while(xisdigit(*info->p)&&len_748<3) {
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        len_748++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_745,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_745,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_749=info->sline;
                info->sline=sline_744;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_745,*info->p);
                info->p++;
            }
        }
        global_750=(_Bool)0;
        ignore_case_751=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_750=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_751=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_752=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_752=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2076, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value946=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 2076, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_745)),sline_744,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_753=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value946,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_754=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2078, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2080, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_753))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2081, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_751)?(((struct sNode*)(__right_value954=create_int_node(1,info)))):(((struct sNode*)(__right_value955=create_int_node(0,info)))))))));
        if(__right_value954) { __right_value954 = come_decrement_ref_count2(__right_value954, ((struct sNode*)__right_value954)->finalize, ((struct sNode*)__right_value954)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value955) { __right_value955 = come_decrement_ref_count2(__right_value955, ((struct sNode*)__right_value955)->finalize, ((struct sNode*)__right_value955)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2082, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2083, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_750)?(((struct sNode*)(__right_value963=create_int_node(1,info)))):(((struct sNode*)(__right_value964=create_int_node(0,info)))))))));
        if(__right_value963) { __right_value963 = come_decrement_ref_count2(__right_value963, ((struct sNode*)__right_value963)->finalize, ((struct sNode*)__right_value963)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value964) { __right_value964 = come_decrement_ref_count2(__right_value964, ((struct sNode*)__right_value964)->finalize, ((struct sNode*)__right_value964)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2084, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2085, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2086, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2087, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_754,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2088, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_755=((void*)0);
        method_block_sline_756=info->sline;
        method_generics_types_757=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 2094, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_758=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_753),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_754),method_block_755,method_block_sline_756,method_generics_types_757,info));
        if(        !catch_exception_752) {
            __dec_obj263=node_758;
            node_758=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_758)),info));
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_743;
        __result373__ = gComeFunResultObject = __result_obj__ = node_758;
        come_call_finalizer3(value_745,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_753) { obj_753 = come_decrement_ref_count2(obj_753, ((struct sNode*)obj_753)->finalize, ((struct sNode*)obj_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_754,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_757,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result373__;
        come_call_finalizer3(value_745,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_753) { obj_753 = come_decrement_ref_count2(obj_753, ((struct sNode*)obj_753)->finalize, ((struct sNode*)obj_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_754,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_757,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_759=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_761=0;
                while(xisdigit(*info->p)) {
                    n_761=n_761*8+*info->p-48;
                    info->p++;
                }
                c_760=n_761;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_760=10;
                    info->p++;
                    break;
                    case 116:
                    c_760=9;
                    info->p++;
                    break;
                    case 114:
                    c_760=13;
                    info->p++;
                    break;
                    case 97:
                    c_760=7;
                    info->p++;
                    break;
                    case 102:
                    c_760=12;
                    info->p++;
                    break;
                    case 118:
                    c_760=11;
                    info->p++;
                    break;
                    case 98:
                    c_760=8;
                    info->p++;
                    break;
                    case 92:
                    c_760=92;
                    info->p++;
                    break;
                    case 48:
                    c_760=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_762=0;
                        while(xisdigit(*info->p)) {
                            n_762=n_762*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_760=n_762;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_763[128];
                        memset(&buf_763, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_763,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_764[2];
                            memset(&buf2_764, 0, sizeof(char)                            *(2)                            );
                            buf2_764[0]=*info->p;
                            buf2_764[1]=0;
                            info->p++;
                            strncat(buf_763,buf2_764,128);
                        }
                        n_765=strtoll(buf_763,((void*)0),0);
                        c_760=n_765;
                    }
                    break;
                    default:
                    c_760=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_760=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_759;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2223, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value993=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2223, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_760,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value996=_inf_value10));
            come_call_finalizer3(__right_value993,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value996) { __right_value996 = come_decrement_ref_count2(__right_value996, ((struct sNode*)__right_value996)->finalize, ((struct sNode*)__right_value996)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_768=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_770=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_771=0;
                while(xisdigit(*info->p)) {
                    n_771=n_771*8+*info->p-48;
                    info->p++;
                }
                c_769=n_771;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_769=10;
                    info->p++;
                    break;
                    case 116:
                    c_769=9;
                    info->p++;
                    break;
                    case 114:
                    c_769=13;
                    info->p++;
                    break;
                    case 97:
                    c_769=7;
                    info->p++;
                    break;
                    case 92:
                    c_769=92;
                    info->p++;
                    break;
                    case 48:
                    c_769=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_772=0;
                        while(xisdigit(*info->p)) {
                            n_772=n_772*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_769=n_772;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_773[128];
                        memset(&buf_773, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_773,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_774[2];
                            memset(&buf2_774, 0, sizeof(char)                            *(2)                            );
                            buf2_774[0]=*info->p;
                            buf2_774[1]=0;
                            info->p++;
                            strncat(buf_773,buf2_774,128);
                        }
                        n_775=strtoll(buf_773,((void*)0),0);
                        c_769=n_775;
                    }
                    break;
                    default:
                    c_769=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_770=(_Bool)0;
            p2_776=*(unsigned char*)info->p;
            if(            p2_776>127) {
                char str_778[6+1];
                memset(&str_778, 0, sizeof(char)                *(6+1)                );
                size_777=((p2_776&128)>>7)+((p2_776&64)>>6)+((p2_776&32)>>5)+((p2_776&16)>>4);
                if(                size_777>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_778,info->p,size_777);
                    str_778[size_777]=0;
                    if(                    mbtowc(&c_769,str_778,size_777)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_777;
                    }
                }
            }
            else {
                c_769=*info->p;
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
            info->sline_real=sline_real_768;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2365, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value998=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2365, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_769,quote_770,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1001=_inf_value11));
            come_call_finalizer3(__right_value998,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1001) { __right_value1001 = come_decrement_ref_count2(__right_value1001, ((struct sNode*)__right_value1001)->finalize, ((struct sNode*)__right_value1001)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_781=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_782=info->sline;
        value_783=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2376, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_784=info->p;
                sline_785=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_784;
                    info->sline=sline_785;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_783,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_783,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_783,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_786=info->sline;
                info->sline=sline_782;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_783,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_787=value_783->len;
        wstr_788=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_787+1)), "06str.c", 2427, "int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_789=value_783->buf;
        if(        mbstowcs(wstr_788,str_789,len_787+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_788[len_787]=0;
        info->sline_real=sline_real_781;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2439, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value1006=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2439, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(int*)come_increment_ref_count(wstr_788),sline_782,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1010=_inf_value12));
        come_call_finalizer3(value_783,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_788 = come_decrement_ref_count2(wstr_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1006,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1010) { __right_value1010 = come_decrement_ref_count2(__right_value1010, ((struct sNode*)__right_value1010)->finalize, ((struct sNode*)__right_value1010)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        come_call_finalizer3(value_783,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_788 = come_decrement_ref_count2(wstr_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_792=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_793=info->sline;
        exps_794=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2449, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_795=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2450, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_796=info->p;
                sline_797=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_796;
                    info->sline=sline_797;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_795,37);
                buffer_append_char(value_795,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_795,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_798=0;
                    while(xisdigit(*info->p)&&len_798<3) {
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        len_798++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_795,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_799=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_794,(struct sNode*)come_increment_ref_count(exp_799));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_795,"%s");
                    if(exp_799) { exp_799 = come_decrement_ref_count2(exp_799, ((struct sNode*)exp_799)->finalize, ((struct sNode*)exp_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_795,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_800=info->sline;
                info->sline=sline_793;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_795,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_792;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2598, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value1018=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2598, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_795)),(struct list$1sNodeph*)come_increment_ref_count(exps_794),sline_793,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1019=_inf_value13));
        come_call_finalizer3(exps_794,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_795,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1018,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1019) { __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result383__;
        come_call_finalizer3(exps_794,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_795,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_801=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_802=info->p;
        no_comma_803=info->no_comma;
        info->no_comma=(_Bool)1;
        node_804=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_803;
        p2_805=info->p;
        first_element_source_806=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2617, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append(first_element_source_806,p_802,p2_805-p_802);
        buffer_append_char(first_element_source_806,0);
        list_elements_807=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2622, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_808=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2624, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_809=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2625, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_808,(struct sNode*)come_increment_ref_count(node_804));
            no_comma_810=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_811=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_810;
            list$1sNodephp_push_back(map_elements_809,(struct sNode*)come_increment_ref_count(node2_811));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2648, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1031=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2648, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_808),(struct list$1sNodeph*)come_increment_ref_count(map_elements_809),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1036=_inf_value14));
                if(node2_811) { node2_811 = come_decrement_ref_count2(node2_811, ((struct sNode*)node2_811)->finalize, ((struct sNode*)node2_811)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_807,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_808,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_809,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1031,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1036) { __right_value1036 = come_decrement_ref_count2(__right_value1036, ((struct sNode*)__right_value1036)->finalize, ((struct sNode*)__right_value1036)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result386__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_814=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_815=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_814;
                    list$1sNodephp_push_back(map_keys_808,(struct sNode*)come_increment_ref_count(node2_815));
                    expected_next_character(58,info);
                    no_comma_814=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_816=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_814;
                    list$1sNodephp_push_back(map_elements_809,(struct sNode*)come_increment_ref_count(node3_816));
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
                        if(node2_815) { node2_815 = come_decrement_ref_count2(node2_815, ((struct sNode*)node2_815)->finalize, ((struct sNode*)node2_815)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_816) { node3_816 = come_decrement_ref_count2(node3_816, ((struct sNode*)node3_816)->finalize, ((struct sNode*)node3_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_815) { node2_815 = come_decrement_ref_count2(node2_815, ((struct sNode*)node2_815)->finalize, ((struct sNode*)node2_815)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_816) { node3_816 = come_decrement_ref_count2(node3_816, ((struct sNode*)node3_816)->finalize, ((struct sNode*)node3_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2693, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1040=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2693, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_808),(struct list$1sNodeph*)come_increment_ref_count(map_elements_809),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1041=_inf_value15));
                if(node2_811) { node2_811 = come_decrement_ref_count2(node2_811, ((struct sNode*)node2_811)->finalize, ((struct sNode*)node2_811)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_807,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_808,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_809,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1040,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1041) { __right_value1041 = come_decrement_ref_count2(__right_value1041, ((struct sNode*)__right_value1041)->finalize, ((struct sNode*)__right_value1041)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result387__;
            }
            if(node2_811) { node2_811 = come_decrement_ref_count2(node2_811, ((struct sNode*)node2_811)->finalize, ((struct sNode*)node2_811)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_807,(struct sNode*)come_increment_ref_count(node_804));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_807,(struct sNode*)come_increment_ref_count(node_804));
            while((_Bool)1) {
                no_comma_817=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_818=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_817;
                list$1sNodephp_push_back(list_elements_807,(struct sNode*)come_increment_ref_count(node2_818));
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
                    if(node2_818) { node2_818 = come_decrement_ref_count2(node2_818, ((struct sNode*)node2_818)->finalize, ((struct sNode*)node2_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_818) { node2_818 = come_decrement_ref_count2(node2_818, ((struct sNode*)node2_818)->finalize, ((struct sNode*)node2_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodephp_length(list_elements_807)>0) {
            info->sline_real=sline_real_801;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1044=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2745, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_807),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1048=_inf_value16));
            if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(first_element_source_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_807,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_808,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_809,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1044,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1048) { __right_value1048 = come_decrement_ref_count2(__right_value1048, ((struct sNode*)__right_value1048)->finalize, ((struct sNode*)__right_value1048)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result390__;
        }
        else {
        }
        if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(first_element_source_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_807,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_808,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_809,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_821=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result391__ = gComeFunResultObject = __result_obj__ = node_821;
        if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result392__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result365__;
void* __right_value873 = (void*)0;
struct sSStringNode* result_714;
void* __right_value874 = (void*)0;
char* __dec_obj257;
void* __right_value875 = (void*)0;
char* __dec_obj258;
void* __right_value876 = (void*)0;
struct list$1sNodeph* __dec_obj259;
struct sSStringNode* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_714=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode", sSStringNode_finalize, sSStringNode_clone, sSStringNode_get_hash_key, sSStringNode_equals));
    if(    self!=((void*)0)) {
        result_714->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_714->sname;
        result_714->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_714->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj258=result_714->value;
        result_714->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj259=result_714->exps;
        result_714->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj259,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_714;
    come_call_finalizer3(result_714,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static unsigned int sSStringNode_get_hash_key(struct sSStringNode* self){
unsigned int result_713;
    result_713=0;
    result_713+=int_get_hash_key(((int)self->sline));
    result_713+=int_get_hash_key(((int)self->sname));
    result_713+=int_get_hash_key(((int)self->sline_real));
    result_713+=int_get_hash_key(((int)self->value));
    result_713+=int_get_hash_key(((int)self->exps));
    return result_713;
}

static _Bool sSStringNode_equals(struct sSStringNode* left, struct sSStringNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->exps,right->exps)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result369__;
void* __right_value888 = (void*)0;
struct sBufferNode* result_730;
void* __right_value889 = (void*)0;
char* __dec_obj260;
void* __right_value890 = (void*)0;
struct buffer* __dec_obj261;
struct sBufferNode* __result370__;
    if(    self==(void*)0) {
        __result369__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    result_730=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode", sBufferNode_finalize, sBufferNode_clone, sBufferNode_get_hash_key, sBufferNode_equals));
    if(    self!=((void*)0)) {
        result_730->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_730->sname;
        result_730->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_730->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj261=result_730->value;
        result_730->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_730->size=self->size;
    }
    __result370__ = gComeFunResultObject = __result_obj__ = result_730;
    come_call_finalizer3(result_730,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static unsigned int sBufferNode_get_hash_key(struct sBufferNode* self){
unsigned int result_729;
    result_729=0;
    result_729+=int_get_hash_key(((int)self->sline));
    result_729+=int_get_hash_key(((int)self->sname));
    result_729+=int_get_hash_key(((int)self->sline_real));
    result_729+=int_get_hash_key(((int)self->value));
    result_729+=int_get_hash_key(((int)self->size));
    return result_729;
}

static _Bool sBufferNode_equals(struct sBufferNode* left, struct sBufferNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    if(    !size_t_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool buffer_equals(struct buffer* left, struct buffer* right){
    if(    !charp_equals(left->buf,right->buf)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result374__;
void* __right_value994 = (void*)0;
struct sCharNode* result_767;
void* __right_value995 = (void*)0;
char* __dec_obj264;
struct sCharNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_767=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode", sCharNode_finalize, sCharNode_clone, sCharNode_get_hash_key, sCharNode_equals));
    if(    self!=((void*)0)) {
        result_767->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_767->sname;
        result_767->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_767->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_767->value=self->value;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_767;
    come_call_finalizer3(result_767,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static unsigned int sCharNode_get_hash_key(struct sCharNode* self){
unsigned int result_766;
    result_766=0;
    result_766+=int_get_hash_key(((int)self->sline));
    result_766+=int_get_hash_key(((int)self->sname));
    result_766+=int_get_hash_key(((int)self->sline_real));
    result_766+=int_get_hash_key(((int)self->value));
    return result_766;
}

static _Bool sCharNode_equals(struct sCharNode* left, struct sCharNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result377__;
void* __right_value999 = (void*)0;
struct sWCharNode* result_780;
void* __right_value1000 = (void*)0;
char* __dec_obj265;
struct sWCharNode* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_780=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode", sWCharNode_finalize, sWCharNode_clone, sWCharNode_get_hash_key, sWCharNode_equals));
    if(    self!=((void*)0)) {
        result_780->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_780->sname;
        result_780->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_780->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_780->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_780->quote=self->quote;
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_780;
    come_call_finalizer3(result_780,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static unsigned int sWCharNode_get_hash_key(struct sWCharNode* self){
unsigned int result_779;
    result_779=0;
    result_779+=int_get_hash_key(((int)self->sline));
    result_779+=int_get_hash_key(((int)self->sname));
    result_779+=int_get_hash_key(((int)self->sline_real));
    result_779+=int_get_hash_key(((int)self->value));
    result_779+=int_get_hash_key(((int)self->quote));
    return result_779;
}

static _Bool sWCharNode_equals(struct sWCharNode* left, struct sWCharNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !wchar_t_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->quote,right->quote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result380__;
void* __right_value1007 = (void*)0;
struct sWStringNode* result_791;
void* __right_value1008 = (void*)0;
char* __dec_obj266;
void* __right_value1009 = (void*)0;
int* __dec_obj267;
struct sWStringNode* __result381__;
    if(    self==(void*)0) {
        __result380__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    result_791=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode", sWStringNode_finalize, sWStringNode_clone, sWStringNode_get_hash_key, sWStringNode_equals));
    if(    self!=((void*)0)) {
        result_791->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_791->sname;
        result_791->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_791->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj267=result_791->value;
        result_791->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result381__ = gComeFunResultObject = __result_obj__ = result_791;
    come_call_finalizer3(result_791,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static unsigned int sWStringNode_get_hash_key(struct sWStringNode* self){
unsigned int result_790;
    result_790=0;
    result_790+=int_get_hash_key(((int)self->sline));
    result_790+=int_get_hash_key(((int)self->sname));
    result_790+=int_get_hash_key(((int)self->sline_real));
    result_790+=int_get_hash_key(((int)self->value));
    return result_790;
}

static _Bool sWStringNode_equals(struct sWStringNode* left, struct sWStringNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !wchar_tp_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result384__;
void* __right_value1032 = (void*)0;
struct sMapNode* result_813;
void* __right_value1033 = (void*)0;
char* __dec_obj268;
void* __right_value1034 = (void*)0;
struct list$1sNodeph* __dec_obj269;
void* __right_value1035 = (void*)0;
struct list$1sNodeph* __dec_obj270;
struct sMapNode* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_813=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode", sMapNode_finalize, sMapNode_clone, sMapNode_get_hash_key, sMapNode_equals));
    if(    self!=((void*)0)) {
        result_813->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj268=result_813->sname;
        result_813->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_813->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj269=result_813->map_key_elements;
        result_813->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj269,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj270=result_813->map_elements;
        result_813->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj270,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_813;
    come_call_finalizer3(result_813,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static unsigned int sMapNode_get_hash_key(struct sMapNode* self){
unsigned int result_812;
    result_812=0;
    result_812+=int_get_hash_key(((int)self->sline));
    result_812+=int_get_hash_key(((int)self->sname));
    result_812+=int_get_hash_key(((int)self->sline_real));
    result_812+=int_get_hash_key(((int)self->map_key_elements));
    result_812+=int_get_hash_key(((int)self->map_elements));
    return result_812;
}

static _Bool sMapNode_equals(struct sMapNode* left, struct sMapNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->map_key_elements,right->map_key_elements)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->map_elements,right->map_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result388__;
void* __right_value1045 = (void*)0;
struct sListNode* result_820;
void* __right_value1046 = (void*)0;
char* __dec_obj271;
void* __right_value1047 = (void*)0;
struct list$1sNodeph* __dec_obj272;
struct sListNode* __result389__;
    if(    self==(void*)0) {
        __result388__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    result_820=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode", sListNode_finalize, sListNode_clone, sListNode_get_hash_key, sListNode_equals));
    if(    self!=((void*)0)) {
        result_820->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_820->sname;
        result_820->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_820->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj272=result_820->list_elements;
        result_820->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj272,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result389__ = gComeFunResultObject = __result_obj__ = result_820;
    come_call_finalizer3(result_820,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static unsigned int sListNode_get_hash_key(struct sListNode* self){
unsigned int result_819;
    result_819=0;
    result_819+=int_get_hash_key(((int)self->sline));
    result_819+=int_get_hash_key(((int)self->sname));
    result_819+=int_get_hash_key(((int)self->sline_real));
    result_819+=int_get_hash_key(((int)self->list_elements));
    return result_819;
}

static _Bool sListNode_equals(struct sListNode* left, struct sListNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->list_elements,right->list_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_822;
char* p_823;
char* name_824;
void* __right_value1052 = (void*)0;
char* __dec_obj273;
_Bool no_comma_825;
void* __right_value1053 = (void*)0;
struct sNode* node_826;
void* __right_value1054 = (void*)0;
struct sNode* __dec_obj274;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1069 = (void*)0;
struct sNode* __result398__;
name_824 = (void*)0;
    tuple_elements_822=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2760, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_823=info->p;
        if(        named_tuple) {
            __dec_obj273=name_824;
            name_824=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_825=info->no_comma;
        info->no_comma=(_Bool)1;
        node_826=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj274=node_826;
        node_826=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_826),info));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_825;
        list$1tuple2$2charphsNodephphp_push_back(tuple_elements_822,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2779, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_824)),(struct sNode*)come_increment_ref_count(node_826))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            name_824 = come_decrement_ref_count2(name_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        name_824 = come_decrement_ref_count2(name_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2796, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1062=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2796, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_822),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1069=_inf_value17));
    come_call_finalizer3(tuple_elements_822,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1062,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1069) { __right_value1069 = come_decrement_ref_count2(__right_value1069, ((struct sNode*)__right_value1069)->finalize, ((struct sNode*)__right_value1069)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1055 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_827;
struct tuple2$2charphsNodeph* __dec_obj275;
void* __right_value1056 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_828;
struct tuple2$2charphsNodeph* __dec_obj276;
void* __right_value1057 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_829;
struct tuple2$2charphsNodeph* __dec_obj277;
struct list$1tuple2$2charphsNodephph* __result393__;
    if(    self->len==0) {
        litem_827=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1055=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_827->prev=((void*)0);
        litem_827->next=((void*)0);
        __dec_obj275=litem_827->item;
        litem_827->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj275,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_827;
        self->head=litem_827;
    }
    else if(    self->len==1) {
        litem_828=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1056=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_828->prev=self->head;
        litem_828->next=((void*)0);
        __dec_obj276=litem_828->item;
        litem_828->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj276,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_828;
        self->head->next=litem_828;
    }
    else {
        litem_829=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1057=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_829->prev=self->tail;
        litem_829->next=((void*)0);
        __dec_obj277=litem_829->item;
        litem_829->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj277,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_829;
        self->tail=litem_829;
    }
    self->len++;
    __result393__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result394__;
void* __right_value1063 = (void*)0;
struct sTupleNode* result_833;
void* __right_value1064 = (void*)0;
char* __dec_obj278;
void* __right_value1068 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj279;
struct sTupleNode* __result397__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_833=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode", sTupleNode_finalize, sTupleNode_clone, sTupleNode_get_hash_key, sTupleNode_equals));
    if(    self!=((void*)0)) {
        result_833->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj278=result_833->sname;
        result_833->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_833->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj279=result_833->tuple_elements;
        result_833->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj279,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_833;
    come_call_finalizer3(result_833,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static unsigned int sTupleNode_get_hash_key(struct sTupleNode* self){
unsigned int result_830;
    result_830=0;
    result_830+=int_get_hash_key(((int)self->sline));
    result_830+=int_get_hash_key(((int)self->sname));
    result_830+=int_get_hash_key(((int)self->sline_real));
    result_830+=int_get_hash_key(((int)self->tuple_elements));
    return result_830;
}

static _Bool sTupleNode_equals(struct sTupleNode* left, struct sTupleNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsNodephphp_equals(left->tuple_elements,right->tuple_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right){
struct list_item$1tuple2$2charphsNodephph* it_831;
struct list_item$1tuple2$2charphsNodephph* it2_832;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_831=left->head;
    it2_832=right->head;
    while(it_831!=((void*)0)) {
        if(        !tuple2$2charphsNodephp_equals(it_831->item,it2_832->item)) {
            return (_Bool)0;
        }
        it_831=it_831->next;
        it2_832=it2_832->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result395__;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_834;
struct list_item$1tuple2$2charphsNodephph* it_835;
void* __right_value1067 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result396__;
    if(    self==((void*)0)) {
        __result395__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_834=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_835=self->head;
    while(it_835!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_834,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_835->item)));
        it_835=it_835->next;
    }
    __result396__ = gComeFunResultObject = __result_obj__ = result_834;
    come_call_finalizer3(result_834,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct list$1sNodeph* tuple_elements_836;
struct sNode* node_837;
void* __right_value1072 = (void*)0;
struct sNode* node2_838;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1078 = (void*)0;
struct sNode* __result401__;
    tuple_elements_836=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2801, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_837=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodephp_push_back(tuple_elements_836,(struct sNode*)come_increment_ref_count(node_837));
    node2_838=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_836,(struct sNode*)come_increment_ref_count(node2_838));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2811, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1074=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2811, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_836),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1078=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(tuple_elements_836,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_837) { node_837 = come_decrement_ref_count2(node_837, ((struct sNode*)node_837)->finalize, ((struct sNode*)node_837)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_838) { node2_838 = come_decrement_ref_count2(node2_838, ((struct sNode*)node2_838)->finalize, ((struct sNode*)node2_838)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1074,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1078) { __right_value1078 = come_decrement_ref_count2(__right_value1078, ((struct sNode*)__right_value1078)->finalize, ((struct sNode*)__right_value1078)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result399__;
void* __right_value1075 = (void*)0;
struct sSomeNode* result_840;
void* __right_value1076 = (void*)0;
char* __dec_obj280;
void* __right_value1077 = (void*)0;
struct list$1sNodeph* __dec_obj281;
struct sSomeNode* __result400__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_840=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode", sSomeNode_finalize, sSomeNode_clone, sSomeNode_get_hash_key, sSomeNode_equals));
    if(    self!=((void*)0)) {
        result_840->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_840->sname;
        result_840->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_840->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj281=result_840->tuple_elements;
        result_840->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj281,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result400__ = gComeFunResultObject = __result_obj__ = result_840;
    come_call_finalizer3(result_840,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static unsigned int sSomeNode_get_hash_key(struct sSomeNode* self){
unsigned int result_839;
    result_839=0;
    result_839+=int_get_hash_key(((int)self->sline));
    result_839+=int_get_hash_key(((int)self->sname));
    result_839+=int_get_hash_key(((int)self->sline_real));
    result_839+=int_get_hash_key(((int)self->tuple_elements));
    return result_839;
}

static _Bool sSomeNode_equals(struct sSomeNode* left, struct sSomeNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->tuple_elements,right->tuple_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct list$1sNodeph* tuple_elements_841;
void* __right_value1081 = (void*)0;
struct sNode* node_842;
void* __right_value1082 = (void*)0;
struct sNode* __dec_obj282;
void* __right_value1083 = (void*)0;
struct sNode* node2_843;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1086 = (void*)0;
struct sNode* __result402__;
    tuple_elements_841=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2816, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_842=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj282=node_842;
    node_842=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_842),info));
    if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodephp_push_back(tuple_elements_841,(struct sNode*)come_increment_ref_count(node_842));
    node2_843=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_841,(struct sNode*)come_increment_ref_count(node2_843));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2829, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1085=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2829, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_841),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result402__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1086=_inf_value19));
    come_call_finalizer3(tuple_elements_841,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_842) { node_842 = come_decrement_ref_count2(node_842, ((struct sNode*)node_842)->finalize, ((struct sNode*)node_842)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_843) { node2_843 = come_decrement_ref_count2(node2_843, ((struct sNode*)node2_843)->finalize, ((struct sNode*)node2_843)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1085,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1086) { __right_value1086 = come_decrement_ref_count2(__right_value1086, ((struct sNode*)__right_value1086)->finalize, ((struct sNode*)__right_value1086)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result402__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1sNodeph* tuple_elements_844;
void* __right_value1089 = (void*)0;
struct sNode* node_845;
void* __right_value1090 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value1091 = (void*)0;
struct sNode* node2_846;
struct sNode* node3_847;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1097 = (void*)0;
struct sNode* __result405__;
    tuple_elements_844=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2834, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_845=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj283=node_845;
    node_845=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_845),info));
    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_846=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodephp_push_back(tuple_elements_844,(struct sNode*)come_increment_ref_count(node2_846));
    node3_847=(struct sNode*)come_increment_ref_count(node_845);
    list$1sNodephp_push_back(tuple_elements_844,(struct sNode*)come_increment_ref_count(node3_847));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2849, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1093=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2849, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_844),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1097=_inf_value20));
    come_call_finalizer3(tuple_elements_844,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_845) { node_845 = come_decrement_ref_count2(node_845, ((struct sNode*)node_845)->finalize, ((struct sNode*)node_845)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_846) { node2_846 = come_decrement_ref_count2(node2_846, ((struct sNode*)node2_846)->finalize, ((struct sNode*)node2_846)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_847) { node3_847 = come_decrement_ref_count2(node3_847, ((struct sNode*)node3_847)->finalize, ((struct sNode*)node3_847)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1093,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1097) { __right_value1097 = come_decrement_ref_count2(__right_value1097, ((struct sNode*)__right_value1097)->finalize, ((struct sNode*)__right_value1097)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result403__;
void* __right_value1094 = (void*)0;
struct sNoneNode* result_849;
void* __right_value1095 = (void*)0;
char* __dec_obj284;
void* __right_value1096 = (void*)0;
struct list$1sNodeph* __dec_obj285;
struct sNoneNode* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_849=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode", sNoneNode_finalize, sNoneNode_clone, sNoneNode_get_hash_key, sNoneNode_equals));
    if(    self!=((void*)0)) {
        result_849->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj284=result_849->sname;
        result_849->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj285=result_849->tuple_elements;
        result_849->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj285,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_849;
    come_call_finalizer3(result_849,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static unsigned int sNoneNode_get_hash_key(struct sNoneNode* self){
unsigned int result_848;
    result_848=0;
    result_848+=int_get_hash_key(((int)self->sline));
    result_848+=int_get_hash_key(((int)self->sname));
    result_848+=int_get_hash_key(((int)self->sline_real));
    result_848+=int_get_hash_key(((int)self->tuple_elements));
    return result_848;
}

static _Bool sNoneNode_equals(struct sNoneNode* left, struct sNoneNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->tuple_elements,right->tuple_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

