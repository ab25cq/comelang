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

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    char* attribute;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};

struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};

struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephphp_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void sVar_finalize(struct sVar* self);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephphp_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephphp_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static unsigned int tuple2$2sNodephsNodeph_get_hash_key(struct tuple2$2sNodephsNodeph* self);
static _Bool tuple2$2sNodephsNodeph_equals(struct tuple2$2sNodephsNodeph* left, struct tuple2$2sNodephsNodeph* right);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2voidpsNodeph_finalize(struct tuple2$2voidpsNodeph* self);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_clone(struct tuple2$2voidpsNodeph* self);
static unsigned int tuple2$2voidpsNodeph_get_hash_key(struct tuple2$2voidpsNodeph* self);
static _Bool tuple2$2voidpsNodeph_equals(struct tuple2$2voidpsNodeph* left, struct tuple2$2voidpsNodeph* right);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static unsigned int tuple3$3sTypephcharphsNodeph_get_hash_key(struct tuple3$3sTypephcharphsNodeph* self);
static _Bool tuple3$3sTypephcharphsNodeph_equals(struct tuple3$3sTypephcharphsNodeph* left, struct tuple3$3sTypephcharphsNodeph* right);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sTypephcharphvoidp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_clone(struct tuple3$3sTypephcharphvoidp* self);
static unsigned int tuple3$3sTypephcharphvoidp_get_hash_key(struct tuple3$3sTypephcharphvoidp* self);
static _Bool tuple3$3sTypephcharphvoidp_equals(struct tuple3$3sTypephcharphvoidp* left, struct tuple3$3sTypephcharphvoidp* right);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __dec_obj32;
void* __right_value289 = (void*)0;
struct sType* __dec_obj74;
struct sNode* __dec_obj75;
void* __right_value290 = (void*)0;
struct list$1charph* __dec_obj76;
void* __right_value301 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj90;
char* __dec_obj91;
struct sStoreNode* __result251__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj74=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj75=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj76=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, multiple_assign));
    come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj90=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, multiple_declare));
    come_call_finalizer3(__dec_obj90,list$1tuple3$3sTypephcharphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj91=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result251__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __result252__;
    __result252__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value302=__builtin_string("sStoreNode")));
    (__right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sVar* var__362;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_384=0;
char* Err_385=0;
_Bool _if_conditional1;
_Bool __result262__;
void* __right_value308 = (void*)0;
struct sType* type_386;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_387;
struct tuple3$3sTypephcharphsNodeph* it_390;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var2 = (void*)0;
struct sType* type_393=0;
char* var_name_394=0;
struct sNode* right_value_395=0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var3 = (void*)0;
int come_exception_var_2_396=0;
char* Err_397=0;
_Bool _if_conditional2;
_Bool __result269__;
void* __right_value315 = (void*)0;
struct sType* left_type_398;
_Bool Value_399;
_Bool __result270__;
void* __right_value316 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
_Bool Value_401;
void* __right_value320 = (void*)0;
struct CVALUE* right_value_402;
struct sType* right_type_403;
int i_404;
struct list$1charph* o2_saved_405;
char* it_408;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sVar* var__411;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sType* right_type2_412;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* multiple_var_name_417;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* __dec_obj108;
struct list$1charph* o2_saved_418;
char* it_419;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* right_type2_420;
struct sVar* var__421;
void* __right_value332 = (void*)0;
struct sType* var_type_422;
void* __right_value333 = (void*)0;
struct sType* left_type_423;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct CVALUE* right_value2_424;
void* __right_value336 = (void*)0;
char* __dec_obj109;
void* __right_value337 = (void*)0;
struct sType* __dec_obj110;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_426=0;
char* Err_427=0;
_Bool _if_conditional3;
_Bool __result279__;
void* __right_value343 = (void*)0;
char* __dec_obj112;
void* __right_value344 = (void*)0;
char* __dec_obj113;
void* __right_value345 = (void*)0;
struct sType* __dec_obj114;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sVar* var__428;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var5 = (void*)0;
int come_exception_var_4_429=0;
char* Err_430=0;
_Bool _if_conditional4;
_Bool __result280__;
void* __right_value352 = (void*)0;
struct sType* type_431;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var6 = (void*)0;
int come_exception_var_5_432=0;
char* Err_433=0;
_Bool _if_conditional5;
_Bool __result281__;
void* __right_value355 = (void*)0;
struct sType* left_type_434;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1sNodeph* o2_saved_435;
struct sNode* it_438;
_Bool Value_441;
void* __right_value358 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_442=0;
char* Err_443=0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_444;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_445;
void* __right_value364 = (void*)0;
char* __dec_obj115;
void* __right_value365 = (void*)0;
struct sType* __dec_obj116;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sVar* var__449;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sType* type_450;
void* __right_value374 = (void*)0;
_Bool Value_451;
void* __right_value375 = (void*)0;
_Bool array_initializer_452;
void* __right_value376 = (void*)0;
_Bool struct_initializer_453;
void* __right_value377 = (void*)0;
_Bool new_channel_454;
void* __right_value378 = (void*)0;
struct CVALUE* right_value_455;
struct sType* right_type_456;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* var_type_457;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* left_type_458;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sVar* var__459;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value388 = (void*)0;
char* __dec_obj120;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sVar* var__461;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_462;
void* __right_value394 = (void*)0;
char* __dec_obj121;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_6_463=0;
char* Err_464=0;
_Bool _if_conditional6;
_Bool __result289__;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value401 = (void*)0;
char* __dec_obj122;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var9 = (void*)0;
_Bool come_exception_var_7_466=0;
char* Err_467=0;
_Bool _if_conditional7;
_Bool __result290__;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value408 = (void*)0;
char* __dec_obj123;
void* __right_value409 = (void*)0;
struct sType* __dec_obj124;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_469;
void* __right_value413 = (void*)0;
char* __dec_obj125;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sType* __dec_obj126;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_8_470=0;
char* Err_471=0;
_Bool _if_conditional8;
_Bool __result291__;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value422 = (void*)0;
char* __dec_obj127;
void* __right_value423 = (void*)0;
struct sType* __dec_obj128;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_9_473=0;
char* Err_474=0;
_Bool _if_conditional9;
_Bool __result292__;
void* __right_value427 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var12 = (void*)0;
int come_exception_var_10_475=0;
char* Err_476=0;
_Bool _if_conditional10;
_Bool __result293__;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value431 = (void*)0;
char* __dec_obj129;
void* __right_value432 = (void*)0;
struct sType* __dec_obj130;
_Bool Value_478;
void* __right_value433 = (void*)0;
_Bool new_channel_479;
void* __right_value434 = (void*)0;
struct CVALUE* right_value_480;
struct sType* right_type_481;
struct sClass* current_stack_frame_struct_482;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
_Bool _if_conditional11;
struct sVar* parent_var_483;
struct sType* left_type_484;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_11_485=0;
char* Err_486=0;
_Bool _if_conditional12;
_Bool __result294__;
void* __right_value440 = (void*)0;
char* c_value_487;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value443 = (void*)0;
char* __dec_obj131;
void* __right_value444 = (void*)0;
char* __dec_obj132;
void* __right_value445 = (void*)0;
struct sType* __dec_obj133;
_Bool __result295__;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_12_489=0;
char* Err_490=0;
_Bool _if_conditional13;
_Bool __result296__;
void* __right_value449 = (void*)0;
char* c_value_491;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct CVALUE* come_value_492;
void* __right_value452 = (void*)0;
char* __dec_obj134;
void* __right_value453 = (void*)0;
char* __dec_obj135;
void* __right_value454 = (void*)0;
struct sType* __dec_obj136;
_Bool __result297__;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_13_493=0;
char* Err_494=0;
_Bool _if_conditional14;
_Bool __result298__;
void* __right_value458 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var16 = (void*)0;
int come_exception_var_14_495=0;
char* Err_496=0;
_Bool _if_conditional15;
_Bool __result299__;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value461 = (void*)0;
char* __dec_obj137;
void* __right_value462 = (void*)0;
char* __dec_obj138;
void* __right_value463 = (void*)0;
struct sType* __dec_obj139;
_Bool __result300__;
struct sVar* var__498;
void* __right_value464 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var17 = (void*)0;
int come_exception_var_15_499=0;
char* Err_500=0;
_Bool _if_conditional16;
_Bool __result301__;
void* __right_value465 = (void*)0;
struct sType* __dec_obj140;
void* __right_value466 = (void*)0;
struct sType* left_type_501;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_16_502=0;
char* Err_503=0;
_Bool _if_conditional17;
_Bool __result302__;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct CVALUE* come_value_504;
void* __right_value472 = (void*)0;
char* __dec_obj141;
void* __right_value473 = (void*)0;
struct sType* __dec_obj142;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_17_505=0;
char* Err_506=0;
_Bool _if_conditional18;
_Bool __result303__;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value479 = (void*)0;
char* __dec_obj143;
void* __right_value480 = (void*)0;
struct sType* __dec_obj144;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_18_508=0;
char* Err_509=0;
_Bool _if_conditional19;
_Bool __result304__;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value_510;
void* __right_value486 = (void*)0;
char* __dec_obj145;
void* __right_value487 = (void*)0;
struct sType* __dec_obj146;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value490 = (void*)0;
char* __dec_obj147;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj148;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var21 = (void*)0;
_Bool come_exception_var_19_512=0;
char* Err_513=0;
_Bool _if_conditional20;
_Bool __result305__;
void* __right_value496 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var22 = (void*)0;
int come_exception_var_20_514=0;
char* Err_515=0;
_Bool _if_conditional21;
_Bool __result306__;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_516;
void* __right_value499 = (void*)0;
char* __dec_obj149;
void* __right_value500 = (void*)0;
struct sType* __dec_obj150;
    if(    self->multiple_declare) {
        var__362=((struct sVar*)((void*)(__right_value304=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value303=__builtin_string(self->name)))))));
        (__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value304,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__362) {
            if(            var__362->mType->mHeap) {
                free_object(((struct sType*)(__right_value305=come_call_cloner(sType_clone, var__362->mType))),var__362->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2voidphvoidphp_remove(info->lv_table->mVars,((char*)(__right_value306=__builtin_string(self->name))));
            (__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2intcharph*)(__right_value307=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_1_384=multiple_assign_var1->v1;
            Err_385=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            (_if_conditional1=(Err_385)),            come_call_finalizer3(__right_value307,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                __result262__ = (_Bool)1;
                (Err_385 = come_decrement_ref_count2(Err_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result262__;
            }
            else {
            }
            (Err_385 = come_decrement_ref_count2(Err_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_386=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        for(        o2_saved_387=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_390=list$1tuple3$3sTypephcharphsNodephphp_begin((o2_saved_387));        !list$1tuple3$3sTypephcharphsNodephphp_end((o2_saved_387));        it_390=list$1tuple3$3sTypephcharphsNodephphp_next((o2_saved_387))        ){
            multiple_assign_var2=it_390;
            type_393=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            var_name_394=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            right_value_395=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v3);
            var__362=((struct sVar*)((void*)(__right_value310=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value309=__builtin_string(var_name_394)))))));
            (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value310,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            var__362) {
                if(                var__362->mType->mHeap) {
                    free_object(((struct sType*)(__right_value311=come_call_cloner(sType_clone, var__362->mType))),var__362->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value311,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                map$2voidphvoidphp_remove(info->lv_table->mVars,((char*)(__right_value312=__builtin_string(var_name_394))));
                (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_394,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_393)),info,(_Bool)0);
            var__362=get_variable_from_table(info->lv_table,var_name_394);
            if(            var__362==((void*)0)) {
                multiple_assign_var3=((struct tuple2$2intcharph*)(__right_value314=err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_390)));
                come_exception_var_2_396=multiple_assign_var3->v1;
                Err_397=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_397)),                come_call_finalizer3(__right_value314,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result269__ = (_Bool)1;
                    (Err_397 = come_decrement_ref_count2(Err_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_394 = come_decrement_ref_count2(var_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_395) ? right_value_395 = come_decrement_ref_count2(right_value_395, ((struct sNode*)right_value_395)->finalize, ((struct sNode*)right_value_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_387,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result269__;
                }
                else {
                }
                (Err_397 = come_decrement_ref_count2(Err_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            left_type_398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__362->mType));
            if(            right_value_395) {
                Value_399=node_compile(right_value_395,info);
                if(                !Value_399) {
                    __result270__ = (_Bool)0;
                    come_call_finalizer3(type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_394 = come_decrement_ref_count2(var_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_395) ? right_value_395 = come_decrement_ref_count2(right_value_395, ((struct sNode*)right_value_395)->finalize, ((struct sNode*)right_value_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(left_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_387,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result270__;
                }
                else {
                }
                come_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value317=make_define_var(left_type_398,var__362->mCValueName,(_Bool)0,info))),come_value_400->c_value);
                (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__362->mCValueName,((char*)(__right_value318=make_type_name_string(left_type_398,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value319=make_define_var(left_type_398,var__362->mCValueName,(_Bool)0,info))));
                (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_394 = come_decrement_ref_count2(var_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_395) ? right_value_395 = come_decrement_ref_count2(right_value_395, ((struct sNode*)right_value_395)->finalize, ((struct sNode*)right_value_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(left_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_387,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_401=node_compile(self->right_value,info);
        if(        !Value_401) {
            return (_Bool)0;
        }
        else {
        }
        right_value_402=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_403=right_value_402->type;
        dec_stack_ptr(1,info);
        if(        right_type_403->mNoSolvedGenericsType) {
            right_type_403=right_type_403->mNoSolvedGenericsType;
        }
        i_404=0;
        for(        o2_saved_405=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_408=list$1charphp_begin((o2_saved_405));        !list$1charphp_end((o2_saved_405));        it_408=list$1charphp_next((o2_saved_405))        ){
            if(            i_404<list$1voidphp_length(right_type_403->mGenericsTypes)) {
                var__411=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value321=__builtin_string(it_408)))));
                (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__411) {
                    if(                    var__411->mType->mHeap) {
                        free_object(((struct sType*)(__right_value323=come_call_cloner(sType_clone, var__411->mType))),var__411->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    map$2voidphvoidphp_remove(info->lv_table->mVars,((char*)(__right_value324=__builtin_string(it_408))));
                    (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_412=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(right_type_403->mGenericsTypes,i_404));
                add_variable_to_table(it_408,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_412)),info,(_Bool)0);
                come_call_finalizer3(var__411,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_412,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_404++;
        }
        come_call_finalizer3(o2_saved_405,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_416=0;
        multiple_var_name_417=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_416));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value328=make_define_var(right_value_402->type,multiple_var_name_417,(_Bool)0,info))));
        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_417,right_value_402->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_417,right_value_402->c_value);
        }
        __dec_obj108=right_value_402->c_value;
        right_value_402->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_417));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_404=0;
        for(        o2_saved_418=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_419=list$1charphp_begin((o2_saved_418));        !list$1charphp_end((o2_saved_418));        it_419=list$1charphp_next((o2_saved_418))        ){
            if(            i_404<list$1voidphp_length(right_type_403->mGenericsTypes)) {
                right_type2_420=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value330=list$1voidphp_operator_load_element(right_type_403->mGenericsTypes,i_404))))));
                come_call_finalizer3(__right_value330,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                var__421=get_variable_from_table(info->lv_table,it_419);
                var_type_422=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__421->mType));
                var_type_422->mStatic=(_Bool)0;
                left_type_423=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__421->mType));
                right_value2_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 141, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj109=right_value2_424->c_value;
                right_value2_424->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_402->c_value,i_404+1));
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj110=right_value2_424->type;
                right_value2_424->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_420));
                come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_424->var=((void*)0);
                come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 147, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                multiple_assign_var4=((struct tuple2$2boolcharph*)(__right_value342=check_assign_type(((char*)(__right_value341=xsprintf("\%s is assining to}",((char*)(__right_value340=string_to_string(self->name)))))),left_type_423,right_type2_420,come_value_425,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_3_426=multiple_assign_var4->v1;
                Err_427=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_427)),                (__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value342,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    __result279__ = (_Bool)1;
                    come_call_finalizer3(right_type2_420,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value2_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_427 = come_decrement_ref_count2(Err_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(o2_saved_418,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (multiple_var_name_417 = come_decrement_ref_count2(multiple_var_name_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result279__;
                }
                else {
                }
                if(                right_type2_420->mHeap&&left_type_423->mHeap&&left_type_423->mPointerNum>0&&right_type2_420->mPointerNum>0) {
                    std_move(left_type_423,right_type2_420,right_value2_424,info,(_Bool)0);
                    __dec_obj112=come_value_425->c_value;
                    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__421->mCValueName,right_value2_424->c_value));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj113=come_value_425->c_value;
                    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__421->mCValueName,right_value2_424->c_value));
                    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj114=come_value_425->type;
                come_value_425->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_423));
                come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_425->var=var__421;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value346=make_define_var(left_type_423,var__421->mCValueName,(_Bool)0,info))));
                (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_425->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_425->c_value);
                }
                come_call_finalizer3(right_type2_420,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_427 = come_decrement_ref_count2(Err_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            i_404++;
        }
        come_call_finalizer3(o2_saved_418,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (multiple_var_name_417 = come_decrement_ref_count2(multiple_var_name_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__428=((struct sVar*)((void*)(__right_value348=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value347=__builtin_string(self->name)))))));
        (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value348,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__428) {
            if(            var__428->mType->mHeap) {
                free_object(((struct sType*)(__right_value349=come_call_cloner(sType_clone, var__428->mType))),var__428->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2voidphvoidphp_remove(info->lv_table->mVars,((char*)(__right_value350=__builtin_string(self->name))));
            (__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2intcharph*)(__right_value351=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_4_429=multiple_assign_var5->v1;
            Err_430=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            (_if_conditional4=(Err_430)),            come_call_finalizer3(__right_value351,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result280__ = (_Bool)1;
                (Err_430 = come_decrement_ref_count2(Err_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result280__;
            }
            else {
            }
            (Err_430 = come_decrement_ref_count2(Err_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_431=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_431)),info,(_Bool)0);
        var__428=get_variable_from_table(info->lv_table,self->name);
        if(        var__428==((void*)0)) {
            var__428=get_variable_from_table(info->gv_table,self->name);
            if(            var__428==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2intcharph*)(__right_value354=err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name)));
                come_exception_var_5_432=multiple_assign_var6->v1;
                Err_433=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_433)),                come_call_finalizer3(__right_value354,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    __result281__ = (_Bool)1;
                    (Err_433 = come_decrement_ref_count2(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result281__;
                }
                else {
                }
                (Err_433 = come_decrement_ref_count2(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_434=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__428->mType));
        if(        left_type_434->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__428->mCValueName);
        }
        else if(        list$1sNodephp_length(left_type_434->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value356=make_define_var(left_type_434,var__428->mCValueName,(_Bool)0,info))));
            (__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__428->mCValueName,((char*)(__right_value357=make_type_name_string(left_type_434,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_435=(struct list$1sNodeph*)come_increment_ref_count((left_type_434->mArrayNum)),it_438=list$1sNodephp_begin((o2_saved_435));            !list$1sNodephp_end((o2_saved_435));            it_438=list$1sNodephp_next((o2_saved_435))            ){
                Value_441=node_compile(it_438,info);
                if(                !Value_441) {
                    multiple_assign_var7=((struct tuple2$2intcharph*)(__right_value358=err_msg(info,"invalid array num")));
                    come_exception_var_c1_442=multiple_assign_var7->v1;
                    Err_443=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_443)?(puts(Err_443),exit(0)):(0));
                    come_call_finalizer3(__right_value358,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_443 = come_decrement_ref_count2(Err_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                }
                come_value_444=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_444->c_value);
                come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_435,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value360=make_define_var(left_type_434,var__428->mCValueName,(_Bool)0,info))));
            (__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_434->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__428->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__428->mCValueName,((char*)(__right_value361=make_type_name_string(left_type_434,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_445=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 242, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj115=come_value_445->c_value;
            come_value_445->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__428->mCValueName));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj116=come_value_445->type;
            come_value_445->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_434));
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_445->var=var__428;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_445));
            come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_434->mClass->mNumber&&left_type_434->mPointerNum==0) {
            var__428->mType->mAllocaValue=(_Bool)1;
            if(            var__428->mType->mNoSolvedGenericsType) {
                var__428->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer3(type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__449=((struct sVar*)((void*)(__right_value370=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value369=__builtin_string(self->name)))))));
        (__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value370,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__449) {
            if(            var__449->mType->mHeap) {
                free_object(((struct sType*)(__right_value371=come_call_cloner(sType_clone, var__449->mType))),var__449->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value371,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2voidphvoidphp_remove(info->lv_table->mVars,((char*)(__right_value372=__builtin_string(self->name))));
            (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_450=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_450)),info,(_Bool)0);
            come_call_finalizer3(type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_451=node_compile(self->right_value,info);
        if(        !Value_451) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_452=string_operator_equals(((char*)(__right_value375=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_453=string_operator_equals(((char*)(__right_value376=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_454=string_operator_equals(((char*)(__right_value377=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_456=right_value_455->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_456)),info,(_Bool)0);
        }
        else {
        }
        var__449=get_variable_from_table(info->lv_table,self->name);
        var_type_457=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__449->mType));
        var_type_457->mStatic=(_Bool)0;
        if(        !array_initializer_452&&!struct_initializer_453&&!var__449->mType->mStatic&&!var_type_457->mConstant&&list$1sNodephp_length(var_type_457->mArrayNum)==0) {
            if(            var_type_457->mClass->mNumber) {
            }
            else if(            (var_type_457->mClass->mStruct||var_type_457->mClass->mUnion||var_type_457->mClass->mEnum)||var_type_457->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__449->mCValueName,((char*)(__right_value381=make_type_name_string(var_type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_458=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__449->mType));
        if(        array_initializer_452) {
            var__459=((struct sVar*)((void*)(__right_value384=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value383=__builtin_string(self->name)))))));
            (__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value384,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value385=make_define_var(var__459->mType,var__459->mCValueName,(_Bool)0,info))),right_value_455->c_value);
            (__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_460=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 315, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj120=come_value_460->c_value;
            come_value_460->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_460));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_453) {
            var__461=((struct sVar*)((void*)(__right_value390=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value389=__builtin_string(self->name)))))));
            (__right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value390,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value391=make_define_var(var__461->mType,var__461->mCValueName,(_Bool)0,info))),right_value_455->c_value);
            (__right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 325, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj121=come_value_462->c_value;
            come_value_462->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_462));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__449->mType->mStatic||var__449->mType->mConstant) {
            multiple_assign_var8=((struct tuple2$2boolcharph*)(__right_value397=check_assign_type(((char*)(__right_value396=xsprintf("\%s is assining to",((char*)(__right_value395=string_to_string(self->name)))))),left_type_458,right_type_456,right_value_455,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_6_463=multiple_assign_var8->v1;
            Err_464=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            (_if_conditional6=(Err_464)),            (__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value397,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result289__ = (_Bool)1;
                (Err_464 = come_decrement_ref_count2(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result289__;
            }
            else {
            }
            add_come_code(info,"%s=%s;\n",((char*)(__right_value398=make_define_var(left_type_458,var__449->mCValueName,(_Bool)0,info))),right_value_455->c_value);
            (__right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 338, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj122=come_value_465->c_value;
            come_value_465->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_465));
            transpiler_clear_last_code(info);
            (Err_464 = come_decrement_ref_count2(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_456->mHeap&&left_type_458->mHeap&&left_type_458->mPointerNum>0&&right_type_456->mPointerNum>0) {
            multiple_assign_var9=((struct tuple2$2boolcharph*)(__right_value404=check_assign_type(((char*)(__right_value403=xsprintf("\%s is assining to",((char*)(__right_value402=string_to_string(self->name)))))),left_type_458,right_type_456,right_value_455,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_7_466=multiple_assign_var9->v1;
            Err_467=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional7=(Err_467)),            (__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value404,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result290__ = (_Bool)1;
                (Err_467 = come_decrement_ref_count2(Err_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result290__;
            }
            else {
            }
            std_move(left_type_458,right_type_456,right_value_455,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value405=make_define_var(left_type_458,var__449->mCValueName,(_Bool)0,info))));
            (__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 354, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj123=come_value_468->c_value;
            come_value_468->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__449->mCValueName,right_value_455->c_value));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj124=come_value_468->type;
            come_value_468->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_458));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_468->var=var__449;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
            add_come_last_code(info,"%s",come_value_468->c_value);
            (Err_467 = come_decrement_ref_count2(Err_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_458->mChannel&&new_channel_454) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value410=make_define_var(left_type_458,var__449->mCValueName,(_Bool)0,info))));
            (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__449->mCValueName);
            come_value_469=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 368, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj125=come_value_469->c_value;
            come_value_469->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__449->mCValueName));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value_469->type;
            come_value_469->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 370, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_469->type->mPointerNum=1;
            come_value_469->var=var__449;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_469));
            add_come_last_code(info,"%s",come_value_469->c_value);
            come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_458->mPointerNum>0&&left_type_458->mHeap&&string_operator_equals(right_type_456->mClass->mName,"void")&&right_type_456->mPointerNum>0) {
            multiple_assign_var10=((struct tuple2$2boolcharph*)(__right_value418=check_assign_type(((char*)(__right_value417=xsprintf("\%s is assining to",((char*)(__right_value416=string_to_string(self->name)))))),left_type_458,right_type_456,right_value_455,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_8_470=multiple_assign_var10->v1;
            Err_471=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional8=(Err_471)),            (__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value418,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                __result291__ = (_Bool)1;
                (Err_471 = come_decrement_ref_count2(Err_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result291__;
            }
            else {
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value419=make_define_var(left_type_458,var__449->mCValueName,(_Bool)0,info))));
            (__right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 388, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj127=come_value_472->c_value;
            come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__449->mCValueName,right_value_455->c_value));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=come_value_472->type;
            come_value_472->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_458));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_472->var=var__449;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
            add_come_last_code(info,"%s",come_value_472->c_value);
            (Err_471 = come_decrement_ref_count2(Err_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2boolcharph*)(__right_value426=check_assign_type(((char*)(__right_value425=xsprintf("\%s is assining to",((char*)(__right_value424=string_to_string(self->name)))))),left_type_458,right_type_456,right_value_455,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_9_473=multiple_assign_var11->v1;
            Err_474=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            (_if_conditional9=(Err_474)),            (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value426,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result292__ = (_Bool)1;
                (Err_474 = come_decrement_ref_count2(Err_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result292__;
            }
            else {
            }
            if(            right_type_456->mHeap&&left_type_458->mHeap&&left_type_458->mPointerNum>0&&right_type_456->mPointerNum>0) {
                std_move(left_type_458,right_type_456,right_value_455,info,(_Bool)0);
            }
            if(            left_type_458->mHeap&&!right_value_455->type->mHeap) {
                multiple_assign_var12=((struct tuple2$2intcharph*)(__right_value427=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_10_475=multiple_assign_var12->v1;
                Err_476=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_476)),                come_call_finalizer3(__right_value427,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result293__ = (_Bool)1;
                    (Err_476 = come_decrement_ref_count2(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_474 = come_decrement_ref_count2(Err_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result293__;
                }
                else {
                }
                (Err_476 = come_decrement_ref_count2(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value428=make_define_var(left_type_458,var__449->mCValueName,(_Bool)0,info))));
            (__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_477=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 416, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj129=come_value_477->c_value;
            come_value_477->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__449->mCValueName,right_value_455->c_value));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value_477->type;
            come_value_477->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_458));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_477->var=var__449;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_477));
            add_come_last_code(info,"%s",come_value_477->c_value);
            (Err_474 = come_decrement_ref_count2(Err_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_478=node_compile(self->right_value,info);
        if(        !Value_478) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_479=string_operator_equals(((char*)(__right_value433=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_480=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_481=right_value_480->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_482=info->current_stack_frame_struct;
        if(        (_if_conditional11=(current_stack_frame_struct_482&&((struct sVar*)((void*)(__right_value436=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value435=__builtin_string(self->name)))))))==((void*)0))),        (__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value436,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional11) {
            parent_var_483=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_483!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_483->mFunName,info->come_fun->mName)) {
                    left_type_484=parent_var_483->mType;
                    if(                    left_type_484->mPointerNum>0&&right_type_481->mPointerNum>0&&right_type_481->mHeap&&left_type_484->mHeap) {
                        multiple_assign_var13=((struct tuple2$2boolcharph*)(__right_value439=check_assign_type(((char*)(__right_value438=xsprintf("\%s is assigning to",((char*)(__right_value437=string_to_string(self->name)))))),left_type_484,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_11_485=multiple_assign_var13->v1;
                        Err_486=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        if(                        (_if_conditional12=(Err_486)),                        (__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value439,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional12) {
                            __result294__ = (_Bool)1;
                            (Err_486 = come_decrement_ref_count2(Err_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result294__;
                        }
                        else {
                        }
                        c_value_487=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_483->mCValueName));
                        decrement_ref_count_object(parent_var_483->mType,c_value_487,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_484,right_type_481,right_value_480,info,(_Bool)0);
                        come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 457, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_483->mType->mOriginIsArray) {
                            __dec_obj131=come_value_488->c_value;
                            come_value_488->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_483->mCValueName,right_value_480->c_value));
                            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj132=come_value_488->c_value;
                            come_value_488->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_483->mCValueName,right_value_480->c_value));
                            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj133=come_value_488->type;
                        come_value_488->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_484));
                        come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_488->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_488->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_488));
                        __result295__ = (_Bool)1;
                        (Err_486 = come_decrement_ref_count2(Err_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_487 = come_decrement_ref_count2(c_value_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result295__;
                        (Err_486 = come_decrement_ref_count2(Err_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_487 = come_decrement_ref_count2(c_value_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_484->mPointerNum>0&&right_type_481->mPointerNum>0&&string_operator_equals(right_type_481->mClass->mName,"void")&&left_type_484->mHeap) {
                        multiple_assign_var14=((struct tuple2$2boolcharph*)(__right_value448=check_assign_type(((char*)(__right_value447=xsprintf("\%s is assigning to",((char*)(__right_value446=string_to_string(self->name)))))),left_type_484,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_12_489=multiple_assign_var14->v1;
                        Err_490=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        if(                        (_if_conditional13=(Err_490)),                        (__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value448,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional13) {
                            __result296__ = (_Bool)1;
                            (Err_490 = come_decrement_ref_count2(Err_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result296__;
                        }
                        else {
                        }
                        c_value_491=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_483->mCValueName));
                        decrement_ref_count_object(parent_var_483->mType,c_value_491,info,(_Bool)0,(_Bool)0);
                        come_value_492=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 483, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_483->mType->mOriginIsArray) {
                            __dec_obj134=come_value_492->c_value;
                            come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_483->mCValueName,right_value_480->c_value));
                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj135=come_value_492->c_value;
                            come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_483->mCValueName,right_value_480->c_value));
                            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj136=come_value_492->type;
                        come_value_492->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_484));
                        come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_492->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_492->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
                        __result297__ = (_Bool)1;
                        (Err_490 = come_decrement_ref_count2(Err_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_491 = come_decrement_ref_count2(c_value_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result297__;
                        (Err_490 = come_decrement_ref_count2(Err_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_491 = come_decrement_ref_count2(c_value_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple2$2boolcharph*)(__right_value457=check_assign_type(((char*)(__right_value456=xsprintf("\%s is assigning to",((char*)(__right_value455=string_to_string(self->name)))))),left_type_484,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_13_493=multiple_assign_var15->v1;
                        Err_494=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        if(                        (_if_conditional14=(Err_494)),                        (__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value457,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional14) {
                            __result298__ = (_Bool)1;
                            (Err_494 = come_decrement_ref_count2(Err_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result298__;
                        }
                        else {
                        }
                        if(                        left_type_484->mHeap&&!right_value_480->type->mHeap) {
                            multiple_assign_var16=((struct tuple2$2intcharph*)(__right_value458=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_exception_var_14_495=multiple_assign_var16->v1;
                            Err_496=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            if(                            (_if_conditional15=(Err_496)),                            come_call_finalizer3(__right_value458,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional15) {
                                __result299__ = (_Bool)1;
                                (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (Err_494 = come_decrement_ref_count2(Err_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                return __result299__;
                            }
                            else {
                            }
                            (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 511, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_483->mType->mOriginIsArray) {
                            __dec_obj137=come_value_497->c_value;
                            come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_483->mCValueName,right_value_480->c_value));
                            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj138=come_value_497->c_value;
                            come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_483->mCValueName,right_value_480->c_value));
                            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj139=come_value_497->type;
                        come_value_497->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_484));
                        come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_497->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_497->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
                        __result300__ = (_Bool)1;
                        (Err_494 = come_decrement_ref_count2(Err_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result300__;
                        (Err_494 = come_decrement_ref_count2(Err_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__498=get_variable_from_table(info->lv_table,self->name);
        if(        var__498==((void*)0)) {
            var__498=get_variable_from_table(info->gv_table,self->name);
            if(            var__498==((void*)0)) {
                multiple_assign_var17=((struct tuple2$2intcharph*)(__right_value464=err_msg(info,"var not found(%s)(X) at storing variable\n",self->name)));
                come_exception_var_15_499=multiple_assign_var17->v1;
                Err_500=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_500)),                come_call_finalizer3(__right_value464,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    __result301__ = (_Bool)1;
                    (Err_500 = come_decrement_ref_count2(Err_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result301__;
                }
                else {
                }
                (Err_500 = come_decrement_ref_count2(Err_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        var__498->mType==((void*)0)) {
            __dec_obj140=var__498->mType;
            var__498->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_481));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__498->mType));
        if(        (var__498->mType->mStatic||var__498->mType->mConstant)&&!var__498->mGlobal) {
            multiple_assign_var18=((struct tuple2$2boolcharph*)(__right_value469=check_assign_type(((char*)(__right_value468=xsprintf("\%s is assining to",((char*)(__right_value467=string_to_string(self->name)))))),left_type_501,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_16_502=multiple_assign_var18->v1;
            Err_503=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_503)),            (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value469,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                __result302__ = (_Bool)1;
                (Err_503 = come_decrement_ref_count2(Err_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result302__;
            }
            else {
            }
            come_value_504=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 555, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj141=come_value_504->c_value;
            come_value_504->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__498->mCValueName,right_value_480->c_value));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj142=come_value_504->type;
            come_value_504->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_501));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_504->var=var__498;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_504));
            add_come_last_code(info,"%s",come_value_504->c_value);
            (Err_503 = come_decrement_ref_count2(Err_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_481->mHeap&&left_type_501->mHeap&&left_type_501->mPointerNum>0&&right_type_481->mPointerNum>0) {
            multiple_assign_var19=((struct tuple2$2boolcharph*)(__right_value476=check_assign_type(((char*)(__right_value475=xsprintf("\%s is assining to",((char*)(__right_value474=string_to_string(self->name)))))),left_type_501,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_17_505=multiple_assign_var19->v1;
            Err_506=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional18=(Err_506)),            (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value476,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional18) {
                __result303__ = (_Bool)1;
                (Err_506 = come_decrement_ref_count2(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result303__;
            }
            else {
            }
            decrement_ref_count_object(left_type_501,var__498->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_501,right_type_481,right_value_480,info,(_Bool)0);
            come_value_507=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 574, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj143=come_value_507->c_value;
            come_value_507->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__498->mCValueName,right_value_480->c_value));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value_507->type;
            come_value_507->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_501));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_507->var=var__498;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_507));
            add_come_last_code(info,"%s",come_value_507->c_value);
            (Err_506 = come_decrement_ref_count2(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_501->mPointerNum>0&&left_type_501->mHeap&&string_operator_equals(right_type_481->mClass->mName,"void")&&right_type_481->mPointerNum>0) {
            multiple_assign_var20=((struct tuple2$2boolcharph*)(__right_value483=check_assign_type(((char*)(__right_value482=xsprintf("\%s is assining to",((char*)(__right_value481=string_to_string(self->name)))))),left_type_501,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_18_508=multiple_assign_var20->v1;
            Err_509=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional19=(Err_509)),            (__right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value483,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                __result304__ = (_Bool)1;
                (Err_509 = come_decrement_ref_count2(Err_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result304__;
            }
            else {
            }
            decrement_ref_count_object(left_type_501,var__498->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 592, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj145=come_value_510->c_value;
            come_value_510->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__498->mCValueName,right_value_480->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_510->type;
            come_value_510->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_501));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_510->var=var__498;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_510));
            add_come_last_code(info,"%s",come_value_510->c_value);
            (Err_509 = come_decrement_ref_count2(Err_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_501->mChannel&&new_channel_479) {
            come_value_511=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 603, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj147=come_value_511->c_value;
            come_value_511->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__498->mCValueName));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_511->type;
            come_value_511->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_511->type->mPointerNum=1;
            come_value_511->var=var__498;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_511));
            add_come_last_code(info,"%s",come_value_511->c_value);
            come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var21=((struct tuple2$2boolcharph*)(__right_value495=check_assign_type(((char*)(__right_value494=xsprintf("\%s is assining to",((char*)(__right_value493=string_to_string(self->name)))))),left_type_501,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_19_512=multiple_assign_var21->v1;
            Err_513=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional20=(Err_513)),            (__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value495,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                __result305__ = (_Bool)1;
                (Err_513 = come_decrement_ref_count2(Err_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result305__;
            }
            else {
            }
            if(            left_type_501->mHeap&&!right_value_480->type->mHeap) {
                multiple_assign_var22=((struct tuple2$2intcharph*)(__right_value496=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_20_514=multiple_assign_var22->v1;
                Err_515=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                if(                (_if_conditional21=(Err_515)),                come_call_finalizer3(__right_value496,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result306__ = (_Bool)1;
                    (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_513 = come_decrement_ref_count2(Err_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result306__;
                }
                else {
                }
                (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 624, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj149=come_value_516->c_value;
            come_value_516->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__498->mCValueName,right_value_480->c_value));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj150=come_value_516->type;
            come_value_516->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_501));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_516->var=var__498;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_516));
            add_come_last_code(info,"%s",come_value_516->c_value);
            (Err_513 = come_decrement_ref_count2(Err_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result230__;
void* __right_value254 = (void*)0;
struct sType* result_334;
void* __right_value255 = (void*)0;
struct sType* __dec_obj50;
void* __right_value256 = (void*)0;
struct sType* __dec_obj51;
void* __right_value263 = (void*)0;
struct list$1voidph* __dec_obj55;
void* __right_value264 = (void*)0;
struct sType* __dec_obj56;
void* __right_value265 = (void*)0;
struct sType* __dec_obj57;
void* __right_value267 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value268 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value269 = (void*)0;
char* __dec_obj60;
void* __right_value270 = (void*)0;
char* __dec_obj61;
void* __right_value271 = (void*)0;
char* __dec_obj62;
void* __right_value278 = (void*)0;
struct list$1sNodeph* __dec_obj66;
void* __right_value279 = (void*)0;
char* __dec_obj67;
void* __right_value280 = (void*)0;
struct list$1voidph* __dec_obj68;
void* __right_value287 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value288 = (void*)0;
struct sType* __dec_obj73;
struct sType* __result244__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_334=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_334->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj50=result_334->mOriginalLoadVarType;
        result_334->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj51=result_334->mChannelType;
        result_334->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj55=result_334->mGenericsTypes;
        result_334->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj55,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_334->mNoSolvedGenericsType;
        result_334->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_334->mAnyOriginalType;
        result_334->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj58=result_334->mSizeNum;
        result_334->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_334->mAlignas;
        result_334->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj60=result_334->mTupleName;
        result_334->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj61=result_334->mAttribute;
        result_334->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_334->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_334->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_334->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_334->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_334->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_334->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_334->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_334->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_334->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_334->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_334->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_334->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_334->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_334->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_334->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_334->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_334->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_334->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_334->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_334->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_334->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_334->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_334->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_334->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_334->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_334->mAsmName;
        result_334->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_334->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_334->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_334->mArrayNum;
        result_334->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_334->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj67=result_334->mOriginalTypeName;
        result_334->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_334->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_334->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_334->mParamTypes;
        result_334->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_334->mParamNames;
        result_334->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_334->mResultType;
        result_334->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mVarArgs=self->mVarArgs;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_334;
    come_call_finalizer3(result_334,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct list$1voidph* __dec_obj35;
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
            __dec_obj33=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj34=self->mChannelType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj35=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj35,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
struct list_item$1voidph* it_317;
struct list_item$1voidph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj36;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj36=self->item;
            come_call_finalizer3(__dec_obj36,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_319;
struct list_item$1voidph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_321;
struct list_item$1sNodeph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_323;
struct list_item$1sNodeph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_325;
struct list_item$1charph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_327;
    result_327=0;
    result_327+=int_get_hash_key(((int)self->mClass));
    result_327+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_327+=int_get_hash_key(((int)self->mChannelType));
    result_327+=int_get_hash_key(((int)self->mGenericsTypes));
    result_327+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_327+=int_get_hash_key(((int)self->mAnyClass));
    result_327+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_327+=int_get_hash_key(((int)self->mSizeNum));
    result_327+=int_get_hash_key(((int)self->mAlignas));
    result_327+=int_get_hash_key(((int)self->mTupleName));
    result_327+=int_get_hash_key(((int)self->mAttribute));
    result_327+=int_get_hash_key(((int)self->mAllocaValue));
    result_327+=int_get_hash_key(((int)self->mUnsigned));
    result_327+=int_get_hash_key(((int)self->mShort));
    result_327+=int_get_hash_key(((int)self->mLong));
    result_327+=int_get_hash_key(((int)self->mLongLong));
    result_327+=int_get_hash_key(((int)self->mConstant));
    result_327+=int_get_hash_key(((int)self->mAtomic));
    result_327+=int_get_hash_key(((int)self->mRegister));
    result_327+=int_get_hash_key(((int)self->mVolatile));
    result_327+=int_get_hash_key(((int)self->mStatic));
    result_327+=int_get_hash_key(((int)self->mUniq));
    result_327+=int_get_hash_key(((int)self->mRecord));
    result_327+=int_get_hash_key(((int)self->mExtern));
    result_327+=int_get_hash_key(((int)self->mRestrict));
    result_327+=int_get_hash_key(((int)self->mImmutable));
    result_327+=int_get_hash_key(((int)self->mHeap));
    result_327+=int_get_hash_key(((int)self->mChannel));
    result_327+=int_get_hash_key(((int)self->mNoHeap));
    result_327+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_327+=int_get_hash_key(((int)self->mException));
    result_327+=int_get_hash_key(((int)self->mGenerate));
    result_327+=int_get_hash_key(((int)self->mCreateVTable));
    result_327+=int_get_hash_key(((int)self->mDynamic));
    result_327+=int_get_hash_key(((int)self->mInline));
    result_327+=int_get_hash_key(((int)self->mNullValue));
    result_327+=int_get_hash_key(((int)self->mGuardValue));
    result_327+=int_get_hash_key(((int)self->mAsmName));
    result_327+=int_get_hash_key(((int)self->mTypedef));
    result_327+=int_get_hash_key(((int)self->mMultipleTypes));
    result_327+=int_get_hash_key(((int)self->mOriginIsArray));
    result_327+=int_get_hash_key(((int)self->mArrayNum));
    result_327+=int_get_hash_key(((int)self->mPointerNum));
    result_327+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_327+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_327+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_327+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_327+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_327+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_327+=int_get_hash_key(((int)self->mArrayPointerType));
    result_327+=int_get_hash_key(((int)self->mLambdaArray));
    result_327+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_327+=int_get_hash_key(((int)self->mParamTypes));
    result_327+=int_get_hash_key(((int)self->mParamNames));
    result_327+=int_get_hash_key(((int)self->mResultType));
    result_327+=int_get_hash_key(((int)self->mVarArgs));
    return result_327;
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
struct list_item$1voidph* it_328;
struct list_item$1voidph* it2_329;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_328=left->head;
    it2_329=right->head;
    while(it_328!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_328->item, it2_329->item)) {
            return (_Bool)0;
        }
        it_328=it_328->next;
        it2_329=it2_329->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_330;
struct list_item$1sNodeph* it2_331;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_330=left->head;
    it2_331=right->head;
    while(it_330!=((void*)0)) {
        if(        !sNode_equals(it_330->item,it2_331->item)) {
            return (_Bool)0;
        }
        it_330=it_330->next;
        it2_331=it2_331->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_332;
struct list_item$1charph* it2_333;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_332=left->head;
    it2_333=right->head;
    while(it_332!=((void*)0)) {
        if(        !string_equals(it_332->item,it2_333->item)) {
            return (_Bool)0;
        }
        it_332=it_332->next;
        it2_333=it2_333->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result231__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1voidph* result_336;
struct list_item$1voidph* it_337;
void* __right_value262 = (void*)0;
struct list$1voidph* __result234__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_336=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_337=self->head;
    while(it_337!=((void*)0)) {
        list$1voidphp_add(result_336,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_337->item)));
        it_337=it_337->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_336;
    come_call_finalizer3(result_336,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_335;
    result_335=0;
    result_335+=int_get_hash_key(((int)self->head));
    result_335+=int_get_hash_key(((int)self->tail));
    result_335+=int_get_hash_key(((int)self->len));
    result_335+=int_get_hash_key(((int)self->it));
    return result_335;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result232__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1voidph* litem_338;
void* __dec_obj52;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj53;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj54;
struct list$1voidph* __result233__;
    if(    self->len==0) {
        litem_338=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value259=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_338->prev=((void*)0);
        litem_338->next=((void*)0);
        __dec_obj52=litem_338->item;
        litem_338->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_338;
        self->head=litem_338;
    }
    else if(    self->len==1) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=self->head;
        litem_339->next=((void*)0);
        __dec_obj53=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_339;
        self->head->next=litem_339;
    }
    else {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=self->tail;
        litem_340->next=((void*)0);
        __dec_obj54=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_340;
        self->tail=litem_340;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result235__;
void* __right_value266 = (void*)0;
struct sNode* result_341;
struct sNode* __result236__;
    if(    self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_341=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_341->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_341->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_341->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_341->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_341->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_341->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_341->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_341->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_341->kind=self->kind;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_341;
    ((result_341) ? result_341 = come_decrement_ref_count2(result_341, ((struct sNode*)result_341)->finalize, ((struct sNode*)result_341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1sNodeph* result_342;
struct list_item$1sNodeph* it_343;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __result240__;
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
    __result240__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
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
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj63;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj64;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj65;
struct list$1sNodeph* __result239__;
    if(    self->len==0) {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj63=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj64=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj65=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result241__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* result_347;
struct list_item$1charph* it_348;
void* __right_value286 = (void*)0;
struct list$1charph* __result243__;
    if(    self==((void*)0)) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_347=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_348=self->head;
    while(it_348!=((void*)0)) {
        list$1charphp_add(result_347,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_348->item)));
        it_348=it_348->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_347;
    come_call_finalizer3(result_347,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_349;
char* __dec_obj69;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj70;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj71;
struct list$1charph* __result242__;
    if(    self->len==0) {
        litem_349=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_349->prev=((void*)0);
        litem_349->next=((void*)0);
        __dec_obj69=litem_349->item;
        litem_349->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_349;
        self->head=litem_349;
    }
    else if(    self->len==1) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=self->head;
        litem_350->next=((void*)0);
        __dec_obj70=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head->next=litem_350;
    }
    else {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=self->tail;
        litem_351->next=((void*)0);
        __dec_obj71=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_351;
        self->tail=litem_351;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result245__;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_354;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_355;
void* __right_value300 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result250__;
    if(    self==((void*)0)) {
        __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_354=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_355=self->head;
    while(it_355!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephphp_add(result_354,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(come_call_cloner(tuple3$3sTypephcharphsNodeph_clone, it_355->item)));
        it_355=it_355->next;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_354;
    come_call_finalizer3(result_354,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result246__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_352;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj77;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj77=self->item;
            come_call_finalizer3(__dec_obj77,tuple3$3sTypephcharphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj78;
char* __dec_obj79;
struct sNode* __dec_obj80;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj78=self->v1;
            come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj79=self->v2;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj80=self->v3;
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v3) ? self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_356;
struct tuple3$3sTypephcharphsNodeph* __dec_obj81;
void* __right_value294 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_357;
struct tuple3$3sTypephcharphsNodeph* __dec_obj82;
void* __right_value295 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_358;
struct tuple3$3sTypephcharphsNodeph* __dec_obj83;
struct list$1tuple3$3sTypephcharphsNodephph* __result247__;
    if(    self->len==0) {
        litem_356=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value293=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj81=litem_356->item;
        litem_356->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,tuple3$3sTypephcharphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value294=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj82=litem_357->item;
        litem_357->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,tuple3$3sTypephcharphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value295=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj83=litem_358->item;
        litem_358->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,tuple3$3sTypephcharphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_358;
        self->tail=litem_358;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result248__;
void* __right_value296 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_359;
void* __right_value297 = (void*)0;
struct sType* __dec_obj84;
void* __right_value298 = (void*)0;
char* __dec_obj85;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj86;
struct tuple3$3sTypephcharphsNodeph* __result249__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_359=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodeph_clone", 3, "struct tuple3$3sTypephcharphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_359->v1;
        result_359->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_359->v2;
        result_359->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj86=result_359->v3;
        result_359->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj87;
char* __dec_obj88;
struct sNode* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj87=self->v1;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj88=self->v2;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj89=self->v3;
            if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v3) ? self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_360;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj92;
char* __dec_obj93;
struct sType* __dec_obj94;
struct sNode* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj97;
char* __dec_obj98;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj92=self->sname;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj93=self->name;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj94=self->type;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj95=self->right_value;
            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->right_value) ? self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj96=self->multiple_assign;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj97=self->multiple_declare;
            come_call_finalizer3(__dec_obj97,list$1tuple3$3sTypephcharphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        if(        self->attribute==gComeFunResultObject) {
            __dec_obj98=self->attribute;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_363;
unsigned int hash_364;
unsigned int it_365;
void* __result253__;
void* __result254__;
void* __result255__;
void* __result256__;
default_value_363 = (void*)0;
    memset(&default_value_363,0,sizeof(void*));
    hash_364=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            come_call_equals((void*)0, self->keys[it_365], ((char*)key))) {
                __result253__ = gComeFunResultObject = __result_obj__ = self->items[it_365];
                come_call_finalizer3(default_value_363,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result253__;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
                __result254__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_363);
                come_call_finalizer3(default_value_363,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
        }
        else {
            __result255__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_363);
            come_call_finalizer3(default_value_363,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result255__;
        }
    }
    __result256__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_363);
    come_call_finalizer3(default_value_363,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
unsigned int hash_366;
unsigned int it_367;
struct map$2voidphvoidph* __result261__;
    hash_366=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_367=hash_366;
    while((_Bool)1) {
        if(        self->item_existance[it_367]) {
            if(            come_call_equals((void*)0, self->keys[it_367], key)) {
                list$1voidpp_remove(self->key_list,self->keys[it_367]);
                self->item_existance[it_367]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_367],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_367]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_367],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_367]=((void*)0);
                self->len--;
                break;
            }
            it_367++;
            if(            it_367>=self->size) {
                it_367=0;
            }
            else if(            it_367==hash_366) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_368;
struct list_item$1voidp* it_369;
struct list$1voidp* __result260__;
    it2_368=0;
    it_369=self->head;
    while(it_369!=((void*)0)) {
        if(        come_call_equals((void*)0, it_369->item, item)) {
            list$1voidpp_delete(self,it2_368,it2_368+1);
            break;
        }
        it2_368++;
        it_369=it_369->next;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_370;
struct list$1voidp* __result257__;
struct list_item$1voidp* it_373;
int i_374;
struct list_item$1voidp* prev_it_375;
struct list_item$1voidp* it_376;
int i_377;
struct list_item$1voidp* prev_it_378;
struct list_item$1voidp* it_379;
struct list_item$1voidp* head_prev_it_380;
struct list_item$1voidp* tail_it_381;
int i_382;
struct list_item$1voidp* prev_it_383;
struct list$1voidp* __result259__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_370=tail;
        tail=head;
        head=tmp_370;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result257__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_373=self->head;
        i_374=0;
        while(it_373!=((void*)0)) {
            if(            i_374<tail) {
                prev_it_375=it_373;
                it_373=it_373->next;
                i_374++;
                come_call_finalizer3(prev_it_375,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_374==tail) {
                self->head=it_373;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_373=it_373->next;
                i_374++;
            }
        }
    }
    else if(    tail==self->len) {
        it_376=self->head;
        i_377=0;
        while(it_376!=((void*)0)) {
            if(            i_377==head) {
                self->tail=it_376->prev;
                self->tail->next=((void*)0);
            }
            if(            i_377>=head) {
                prev_it_378=it_376;
                it_376=it_376->next;
                i_377++;
                come_call_finalizer3(prev_it_378,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_376=it_376->next;
                i_377++;
            }
        }
    }
    else {
        it_379=self->head;
        head_prev_it_380=((void*)0);
        tail_it_381=((void*)0);
        i_382=0;
        while(it_379!=((void*)0)) {
            if(            i_382==head) {
                head_prev_it_380=it_379->prev;
            }
            if(            i_382==tail) {
                tail_it_381=it_379;
            }
            if(            i_382>=head&&i_382<tail) {
                prev_it_383=it_379;
                it_379=it_379->next;
                i_382++;
                come_call_finalizer3(prev_it_383,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_379=it_379->next;
                i_382++;
            }
        }
        if(        head_prev_it_380!=((void*)0)) {
            head_prev_it_380->next=tail_it_381;
        }
        if(        tail_it_381!=((void*)0)) {
            tail_it_381->prev=head_prev_it_380;
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_371;
struct list_item$1voidp* prev_it_372;
struct list$1voidp* __result258__;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj99;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_388;
struct tuple3$3sTypephcharphsNodeph* __result263__;
struct tuple3$3sTypephcharphsNodeph* __result264__;
struct tuple3$3sTypephcharphsNodeph* result_389;
struct tuple3$3sTypephcharphsNodeph* __result265__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_388,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->it=self->head;
    if(    self->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_389,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephphp_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_391;
struct tuple3$3sTypephcharphsNodeph* __result266__;
struct tuple3$3sTypephcharphsNodeph* __result267__;
struct tuple3$3sTypephcharphsNodeph* result_392;
struct tuple3$3sTypephcharphsNodeph* __result268__;
result_391 = (void*)0;
result_392 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_391,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result266__ = gComeFunResultObject = __result_obj__ = result_391;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result267__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    memset(&result_392,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result268__ = gComeFunResultObject = __result_obj__ = result_392;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj100;
struct sType* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj100=self->c_value;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj101=self->type;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj102=self->c_value_without_right_value_objects;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj103=self->c_value_without_cast_object_value;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_406;
char* __result271__;
char* __result272__;
char* result_407;
char* __result273__;
result_406 = (void*)0;
result_407 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_406,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_406;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->head;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_407,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_407;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_409;
char* __result274__;
char* __result275__;
char* result_410;
char* __result276__;
result_409 = (void*)0;
result_410 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_409,0,sizeof(char*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_409;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_410,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_410;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_413;
int i_414;
void* __result277__;
void* default_value_415;
void* __result278__;
default_value_415 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_413=self->head;
    i_414=0;
    while(it_413!=((void*)0)) {
        if(        position==i_414) {
            __result277__ = gComeFunResultObject = __result_obj__ = it_413->item;
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
        it_413=it_413->next;
        i_414++;
    }
    memset(&default_value_415,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_415);
    come_call_finalizer3(default_value_415,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj104;
char* __dec_obj105;
struct sType* __dec_obj106;
char* __dec_obj107;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj105=self->mCValueName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj106=self->mType;
            come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj107=self->mFunName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj111;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj111=self->v2;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sNode* result_436;
struct sNode* __result282__;
struct sNode* __result283__;
struct sNode* result_437;
struct sNode* __result284__;
result_436 = (void*)0;
result_437 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_436,0,sizeof(struct sNode*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_436;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->head;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_437,0,sizeof(struct sNode*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_437;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_439;
struct sNode* __result285__;
struct sNode* __result286__;
struct sNode* result_440;
struct sNode* __result287__;
result_439 = (void*)0;
result_440 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_439,0,sizeof(struct sNode*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_439;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_440,0,sizeof(struct sNode*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_440;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
struct list_item$1CVALUEph* litem_446;
struct CVALUE* __dec_obj117;
void* __right_value367 = (void*)0;
struct list_item$1CVALUEph* litem_447;
struct CVALUE* __dec_obj118;
void* __right_value368 = (void*)0;
struct list_item$1CVALUEph* litem_448;
struct CVALUE* __dec_obj119;
struct list$1CVALUEph* __result288__;
    if(    self->len==0) {
        litem_446=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value366=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_446->prev=((void*)0);
        litem_446->next=((void*)0);
        __dec_obj117=litem_446->item;
        litem_446->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_446;
        self->head=litem_446;
    }
    else if(    self->len==1) {
        litem_447=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value367=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=self->head;
        litem_447->next=((void*)0);
        __dec_obj118=litem_447->item;
        litem_447->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_447;
        self->head->next=litem_447;
    }
    else {
        litem_448=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value368=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->tail;
        litem_448->next=((void*)0);
        __dec_obj119=litem_448->item;
        litem_448->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_448;
        self->tail=litem_448;
    }
    self->len++;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value501 = (void*)0;
struct sNewChannel* __result307__;
    ((struct sNodeBase*)(__right_value501=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value501,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
char* __result308__;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value502=__builtin_string("sNewChannel")));
    (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value503 = (void*)0;
struct sNode* node_517;
_Bool Value_518;
_Bool __result309__;
_Bool __result310__;
    node_517=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_518=node_compile(node_517,info);
    if(    !Value_518) {
        __result309__ = (_Bool)0;
        ((node_517) ? node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result309__;
    }
    else {
    }
    __result310__ = (_Bool)1;
    ((node_517) ? node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result310__;
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj152;
struct sNode* __dec_obj153;
struct sWriteChannelNode* __result311__;
    ((struct sNodeBase*)(__right_value504=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value504,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj153=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value505=__builtin_string("sWriteChannelNode")));
    (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_519;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_520;
_Bool Value_521;
_Bool __result313__;
void* __right_value507 = (void*)0;
struct CVALUE* right_value_522;
struct sType* right_type_523;
void* __right_value508 = (void*)0;
struct sType* left_type_524;
struct sType* channel_type_525;
void* __right_value509 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var23 = (void*)0;
int come_exception_var_21_527=0;
char* Err_528=0;
_Bool _if_conditional22;
_Bool __result314__;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct buffer* buf_529;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value2_530;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* __dec_obj157;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj158;
_Bool __result315__;
    Value_519=node_compile(self->exp,info);
    if(    !Value_519) {
        return (_Bool)0;
    }
    else {
    }
    come_value_520=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_521=node_compile(self->right_value,info);
    if(    !Value_521) {
        __result313__ = (_Bool)0;
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result313__;
    }
    else {
    }
    right_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_523=right_value_522->type;
    dec_stack_ptr(1,info);
    left_type_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_520->type));
    channel_type_525=(struct sType*)come_increment_ref_count(left_type_524->mChannelType);
    static int var_num_526=0;
    var_num_526++;
    if(    right_value_522->type->mHeap) {
        multiple_assign_var23=((struct tuple2$2intcharph*)(__right_value509=err_msg(info,"channel can't get heap type")));
        come_exception_var_21_527=multiple_assign_var23->v1;
        Err_528=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional22=(Err_528)),        come_call_finalizer3(__right_value509,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional22) {
            __result314__ = (_Bool)1;
            (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(channel_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result314__;
        }
        else {
        }
        (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buf_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 710, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_529,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_526,((char*)(__right_value512=make_type_name_string(channel_type_525,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_529,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value513=make_type_name_string(channel_type_525,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_526,var_num_526);
    (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_529,"*__channel_p%d = %s;\n",var_num_526,right_value_522->c_value);
    add_come_code(info,((char*)(__right_value514=buffer_to_string(buf_529))));
    (__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_530=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 718, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj157=come_value2_530->c_value;
    come_value2_530->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_520->c_value,var_num_526,((char*)(__right_value517=make_type_name_string(channel_type_525,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj158=come_value2_530->type;
    come_value2_530->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 722, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_530->type->mPointerNum=1;
    come_value2_530->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_530));
    add_come_last_code(info,"%s",come_value2_530->c_value);
    __result315__ = (_Bool)1;
    come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj154;
struct sNode* __dec_obj155;
struct sNode* __dec_obj156;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj154=self->sname;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj155=self->exp;
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj156=self->right_value;
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->right_value) ? self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
struct sNode* __dec_obj159;
struct sReadChannelNode* __result316__;
    ((struct sNodeBase*)(__right_value521=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value521,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value522 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value522=__builtin_string("sReadChannelNode")));
    (__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_531;
_Bool Value_532;
_Bool __result318__;
void* __right_value523 = (void*)0;
struct CVALUE* come_value_533;
void* __right_value524 = (void*)0;
struct sType* var_type_534;
void* __right_value525 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var24 = (void*)0;
int come_exception_var_22_535=0;
char* Err_536=0;
_Bool _if_conditional23;
_Bool __result319__;
struct sType* channel_type_537;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct CVALUE* come_value2_539;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __dec_obj162;
void* __right_value532 = (void*)0;
struct sType* __dec_obj163;
_Bool __result320__;
    exp_531=(struct sNode*)come_increment_ref_count(self->exp);
    Value_532=node_compile(exp_531,info);
    if(    !Value_532) {
        __result318__ = (_Bool)0;
        ((exp_531) ? exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result318__;
    }
    else {
    }
    come_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_534=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_533->type));
    if(    !var_type_534->mChannel) {
        multiple_assign_var24=((struct tuple2$2intcharph*)(__right_value525=err_msg(info,"require right type is channel")));
        come_exception_var_22_535=multiple_assign_var24->v1;
        Err_536=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional23=(Err_536)),        come_call_finalizer3(__right_value525,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional23) {
            __result319__ = (_Bool)1;
            (Err_536 = come_decrement_ref_count2(Err_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_531) ? exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(var_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result319__;
        }
        else {
        }
        (Err_536 = come_decrement_ref_count2(Err_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    channel_type_537=(struct sType*)come_increment_ref_count(var_type_534->mChannelType);
    static int var_num_538=0;
    var_num_538++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_538,((char*)(__right_value526=make_type_name_string(channel_type_537,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_539=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 775, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj162=come_value2_539->c_value;
    come_value2_539->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_533->c_value,var_num_538,((char*)(__right_value529=make_type_name_string(channel_type_537,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value530=make_type_name_string(channel_type_537,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_538));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj163=come_value2_539->type;
    come_value2_539->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_537));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_539->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_539));
    add_come_last_code(info,"%s",come_value2_539->c_value);
    __result320__ = (_Bool)1;
    ((exp_531) ? exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj160;
struct sNode* __dec_obj161;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj160=self->sname;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj161=self->exp;
            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value544 = (void*)0;
struct sNode* __result323__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 792, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value535=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 792, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result323__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value544=_inf_value1));
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value535,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value544) ? __right_value544 = come_decrement_ref_count2(__right_value544, ((struct sNode*)__right_value544)->finalize, ((struct sNode*)__right_value544)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result321__;
void* __right_value536 = (void*)0;
struct sStoreNode* result_540;
void* __right_value537 = (void*)0;
char* __dec_obj164;
void* __right_value538 = (void*)0;
char* __dec_obj165;
void* __right_value539 = (void*)0;
struct sType* __dec_obj166;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj167;
void* __right_value541 = (void*)0;
struct list$1charph* __dec_obj168;
void* __right_value542 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj169;
void* __right_value543 = (void*)0;
char* __dec_obj170;
struct sStoreNode* __result322__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_540=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_540->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_540->sname;
        result_540->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_540->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj165=result_540->name;
        result_540->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_540->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result_540->type;
        result_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj167=result_540->right_value;
        result_540->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj168=result_540->multiple_assign;
        result_540->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->multiple_assign));
        come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj169=result_540->multiple_declare;
        result_540->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj169,list$1tuple3$3sTypephcharphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj170=result_540->attribute;
        result_540->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_540;
    come_call_finalizer3(result_540,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* result_541;
struct sType* __dec_obj175;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
char* __dec_obj176;
char* __dec_obj177;
struct CVALUE* __result326__;
    result_541=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value));
    if(    come_value->type->mAnyOriginalType) {
        __dec_obj175=result_541->type;
        result_541->type=(struct sType*)come_increment_ref_count(come_value->type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj176=result_541->c_value;
        result_541->c_value=(char*)come_increment_ref_count(xsprintf("((%s)%s)",((char*)(__right_value551=make_type_name_string(result_541->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value->c_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        __dec_obj177=result_541->c_value_without_cast_object_value;
        result_541->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_value->c_value);
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        come_value->type->mNoHeap) {
            result_541->type->mHeap=(_Bool)0;
        }
    }
    __result326__ = gComeFunResultObject = __result_obj__ = result_541;
    come_call_finalizer3(come_value,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_541,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result324__;
void* __right_value545 = (void*)0;
struct CVALUE* result_542;
void* __right_value546 = (void*)0;
char* __dec_obj171;
void* __right_value547 = (void*)0;
struct sType* __dec_obj172;
void* __right_value548 = (void*)0;
char* __dec_obj173;
void* __right_value549 = (void*)0;
char* __dec_obj174;
struct CVALUE* __result325__;
    if(    self==(void*)0) {
        __result324__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    result_542=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj171=result_542->c_value;
        result_542->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj172=result_542->type;
        result_542->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_542->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_542->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj173=result_542->c_value_without_right_value_objects;
        result_542->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj174=result_542->c_value_without_cast_object_value;
        result_542->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = result_542;
    come_call_finalizer3(result_542,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* __dec_obj178;
struct sLoadNode* __result327__;
    ((struct sNodeBase*)(__right_value553=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value553,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result327__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value555 = (void*)0;
char* __result328__;
    __result328__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value555=__builtin_string("sLoadNode")));
    (__right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result328__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_543;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
_Bool _if_conditional24;
struct sVar* parent_var_544;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct CVALUE* come_value_545;
struct sType* type_546;
void* __right_value560 = (void*)0;
char* __dec_obj181;
void* __right_value561 = (void*)0;
char* __dec_obj182;
void* __right_value562 = (void*)0;
struct sType* __dec_obj183;
void* __right_value563 = (void*)0;
struct CVALUE* __dec_obj184;
_Bool __result329__;
struct sVar* var__547;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sFun* fun_548;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_549;
void* __right_value568 = (void*)0;
char* __dec_obj185;
struct sType* __dec_obj186;
_Bool __result330__;
void* __right_value569 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var25 = (void*)0;
int come_exception_var_23_550=0;
char* Err_551=0;
_Bool _if_conditional25;
_Bool __result331__;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_552;
void* __right_value572 = (void*)0;
char* __dec_obj187;
void* __right_value573 = (void*)0;
struct sType* __dec_obj188;
void* __right_value574 = (void*)0;
struct CVALUE* __dec_obj189;
void* __right_value575 = (void*)0;
struct sType* __dec_obj190;
_Bool __result333__;
    current_stack_frame_struct_543=info->current_stack_frame_struct;
    if(    (_if_conditional24=(current_stack_frame_struct_543&&((struct sVar*)((void*)(__right_value557=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value556=__builtin_string(self->name)))))))==((void*)0))),    (__right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value557,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional24) {
        parent_var_544=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_544!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_544->mFunName,info->come_fun->mName)) {
                come_value_545=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 839, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                type_546=parent_var_544->mType;
                if(                parent_var_544->mType->mOriginIsArray) {
                    __dec_obj181=come_value_545->c_value;
                    come_value_545->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_544->mCValueName));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj182=come_value_545->c_value;
                    come_value_545->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_544->mCValueName));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj183=come_value_545->type;
                come_value_545->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_546));
                come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_545->var=((void*)0);
                __dec_obj184=come_value_545;
                come_value_545=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_545),info));
                come_call_finalizer3(__dec_obj184,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                add_come_last_code(info,"%s",come_value_545->c_value);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_545));
                __result329__ = (_Bool)1;
                come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result329__;
                come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__547=get_variable_from_table(info->lv_table,self->name);
    if(    var__547==((void*)0)) {
        var__547=get_variable_from_table(info->gv_table,self->name);
        if(        var__547==((void*)0)) {
            fun_548=((struct sFun*)((void*)(__right_value565=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value564=__builtin_string(self->name)))))));
            (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value565,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            fun_548) {
                come_value_549=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 873, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj185=come_value_549->c_value;
                come_value_549->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_548->mName));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj186=come_value_549->type;
                come_value_549->type=(struct sType*)come_increment_ref_count(fun_548->mLambdaType);
                come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_549->var=((void*)0);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_549));
                __result330__ = (_Bool)1;
                come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result330__;
                come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var25=((struct tuple2$2intcharph*)(__right_value569=err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name)));
                come_exception_var_23_550=multiple_assign_var25->v1;
                Err_551=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                if(                (_if_conditional25=(Err_551)),                come_call_finalizer3(__right_value569,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    __result331__ = (_Bool)1;
                    (Err_551 = come_decrement_ref_count2(Err_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result331__;
                }
                else {
                }
                (Err_551 = come_decrement_ref_count2(Err_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_value_552=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 891, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj187=come_value_552->c_value;
    come_value_552->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__547->mCValueName));
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj188=come_value_552->type;
    come_value_552->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__547->mType));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_552->var=var__547;
    __dec_obj189=come_value_552;
    come_value_552=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_552),info));
    come_call_finalizer3(__dec_obj189,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_552));
    if(    list$1sNodephp_length(come_value_552->type->mArrayNum)==1) {
        __dec_obj190=come_value_552->type->mOriginalLoadVarType;
        come_value_552->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_552->type));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNodephp_reset(come_value_552->type->mArrayNum);
        come_value_552->type->mPointerNum++;
        come_value_552->type->mOriginalTypeNamePointerNum=come_value_552->type->mPointerNum;
    }
    __result333__ = (_Bool)1;
    come_call_finalizer3(come_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result333__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj179;
char* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj180=self->name;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_553;
struct list_item$1sNodeph* prev_it_554;
struct list$1sNodeph* __result332__;
    it_553=self->head;
    while(it_553!=((void*)0)) {
        prev_it_554=it_553;
        it_553=it_553->next;
        come_call_finalizer3(prev_it_554,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value576 = (void*)0;
_Bool _if_conditional26;
struct sLoadNode* load_node_555;
    if(    (_if_conditional26=(string_operator_equals(((char*)(__right_value576=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional26) {
        load_node_555=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_555->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value583 = (void*)0;
struct sNode* __result336__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 926, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value579=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 926, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result336__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value583=_inf_value2));
    come_call_finalizer3(__right_value579,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value583) ? __right_value583 = come_decrement_ref_count2(__right_value583, ((struct sNode*)__right_value583)->finalize, ((struct sNode*)__right_value583)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result334__;
void* __right_value580 = (void*)0;
struct sLoadNode* result_556;
void* __right_value581 = (void*)0;
char* __dec_obj191;
void* __right_value582 = (void*)0;
char* __dec_obj192;
struct sLoadNode* __result335__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_556=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_556->sname;
        result_556->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj192=result_556->name;
        result_556->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_556;
    come_call_finalizer3(result_556,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
char* __dec_obj193;
struct sFunLoadNode* __result337__;
    ((struct sNodeBase*)(__right_value584=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value584,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result337__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value586 = (void*)0;
char* __result338__;
    __result338__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value586=__builtin_string("sFunLoadNode")));
    (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result338__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sFun* fun_557;
void* __right_value589 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var26 = (void*)0;
int come_exception_var_24_558=0;
char* Err_559=0;
_Bool _if_conditional27;
_Bool __result339__;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct CVALUE* come_value_560;
void* __right_value592 = (void*)0;
char* __dec_obj196;
struct sType* __dec_obj197;
    fun_557=((struct sFun*)((void*)(__right_value588=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value587=__builtin_string(self->name)))))));
    (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value588,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_557==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2intcharph*)(__right_value589=err_msg(info,"fun not found(%s) at loading variable\n",self->name)));
        come_exception_var_24_558=multiple_assign_var26->v1;
        Err_559=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional27=(Err_559)),        come_call_finalizer3(__right_value589,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result339__ = (_Bool)1;
            (Err_559 = come_decrement_ref_count2(Err_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result339__;
        }
        else {
        }
        (Err_559 = come_decrement_ref_count2(Err_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        come_value_560=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 953, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj196=come_value_560->c_value;
        come_value_560->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_557->mName));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj197=come_value_560->type;
        come_value_560->type=(struct sType*)come_increment_ref_count(fun_557->mLambdaType);
        come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_560->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_560));
        come_call_finalizer3(come_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj194;
char* __dec_obj195;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj195=self->name;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value593 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj208;
struct sArrayInitializer* __result346__;
    ((struct sNodeBase*)(__right_value593=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value593,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj208,list$1tuple2$2sNodephsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value604 = (void*)0;
char* __result347__;
    __result347__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value604=__builtin_string("sArrayInitializer")));
    (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_571;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct buffer* buf_572;
int i_573;
struct sType* element_type_574;
struct list$1tuple2$2sNodephsNodephph* o2_saved_575;
struct tuple2$2sNodephsNodeph* it_578;
struct tuple2$2sNodephsNodeph* multiple_assign_var27 = (void*)0;
struct sNode* index_581=0;
struct sNode* value_582=0;
struct CVALUE* come_value_583;
_Bool Value_584;
_Bool __result354__;
void* __right_value607 = (void*)0;
struct CVALUE* __dec_obj211;
_Bool Value_585;
_Bool __result355__;
void* __right_value608 = (void*)0;
struct CVALUE* come_value2_586;
void* __right_value609 = (void*)0;
struct sType* __dec_obj212;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct CVALUE* come_value_587;
void* __right_value612 = (void*)0;
char* __dec_obj213;
void* __right_value613 = (void*)0;
struct sType* __dec_obj214;
_Bool __result356__;
    initializer_571=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_572=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 984, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_572,"{");
    i_573=0;
    element_type_574=((void*)0);
    for(    o2_saved_575=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_571)),it_578=list$1tuple2$2sNodephsNodephphp_begin((o2_saved_575));    !list$1tuple2$2sNodephsNodephphp_end((o2_saved_575));    it_578=list$1tuple2$2sNodephsNodephphp_next((o2_saved_575))    ){
        multiple_assign_var27=it_578;
        index_581=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v1);
        value_582=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        come_value_583=((void*)0);
        if(        index_581) {
            Value_584=node_compile(index_581,info);
            if(            !Value_584) {
                __result354__ = (_Bool)0;
                ((index_581) ? index_581 = come_decrement_ref_count2(index_581, ((struct sNode*)index_581)->finalize, ((struct sNode*)index_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((value_582) ? value_582 = come_decrement_ref_count2(value_582, ((struct sNode*)value_582)->finalize, ((struct sNode*)value_582)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_575,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_571,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result354__;
            }
            else {
            }
            __dec_obj211=come_value_583;
            come_value_583=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj211,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_585=node_compile(value_582,info);
        if(        !Value_585) {
            __result355__ = (_Bool)0;
            ((index_581) ? index_581 = come_decrement_ref_count2(index_581, ((struct sNode*)index_581)->finalize, ((struct sNode*)index_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((value_582) ? value_582 = come_decrement_ref_count2(value_582, ((struct sNode*)value_582)->finalize, ((struct sNode*)value_582)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_575,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_571,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result355__;
        }
        else {
        }
        come_value2_586=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj212=element_type_574;
        element_type_574=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_586->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        come_value_583) {
            buffer_append_format(buf_572,"[%s] = %s",come_value_583->c_value,come_value2_586->c_value);
        }
        else {
            buffer_append_str(buf_572,come_value2_586->c_value);
        }
        i_573++;
        if(        i_573!=list$1tuple2$2sNodephsNodephphp_length(initializer_571)) {
            buffer_append_str(buf_572,",");
        }
        ((index_581) ? index_581 = come_decrement_ref_count2(index_581, ((struct sNode*)index_581)->finalize, ((struct sNode*)index_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((value_582) ? value_582 = come_decrement_ref_count2(value_582, ((struct sNode*)value_582)->finalize, ((struct sNode*)value_582)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_586,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_575,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_572,"}");
    come_value_587=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1023, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj213=come_value_587->c_value;
    come_value_587->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_572));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=come_value_587->type;
    come_value_587->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_574));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_587->type->mPointerNum++;
    come_value_587->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_587));
    __result356__ = (_Bool)1;
    come_call_finalizer3(initializer_571,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result356__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result340__;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_563;
struct list_item$1tuple2$2sNodephsNodephph* it_564;
void* __right_value602 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result345__;
    if(    self==((void*)0)) {
        __result340__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_563=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_564=self->head;
    while(it_564!=((void*)0)) {
        list$1tuple2$2sNodephsNodephphp_add(result_563,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2sNodephsNodeph_clone, it_564->item)));
        it_564=it_564->next;
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_563;
    come_call_finalizer3(result_563,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result341__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_561;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_562;
    it_561=self->head;
    while(it_561!=((void*)0)) {
        prev_it_562=it_561;
        it_561=it_561->next;
        come_call_finalizer3(prev_it_562,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj198;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj198=self->item;
            come_call_finalizer3(__dec_obj198,tuple2$2sNodephsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj199;
struct sNode* __dec_obj200;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj199=self->v1;
            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v1) ? self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj200=self->v2;
            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value596 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_565;
struct tuple2$2sNodephsNodeph* __dec_obj201;
void* __right_value597 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_566;
struct tuple2$2sNodephsNodeph* __dec_obj202;
void* __right_value598 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_567;
struct tuple2$2sNodephsNodeph* __dec_obj203;
struct list$1tuple2$2sNodephsNodephph* __result342__;
    if(    self->len==0) {
        litem_565=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value596=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_565->prev=((void*)0);
        litem_565->next=((void*)0);
        __dec_obj201=litem_565->item;
        litem_565->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj201,tuple2$2sNodephsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_565;
        self->head=litem_565;
    }
    else if(    self->len==1) {
        litem_566=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value597=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_566->prev=self->head;
        litem_566->next=((void*)0);
        __dec_obj202=litem_566->item;
        litem_566->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj202,tuple2$2sNodephsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_566;
        self->head->next=litem_566;
    }
    else {
        litem_567=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value598=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_567->prev=self->tail;
        litem_567->next=((void*)0);
        __dec_obj203=litem_567->item;
        litem_567->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,tuple2$2sNodephsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_567;
        self->tail=litem_567;
    }
    self->len++;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result343__;
void* __right_value599 = (void*)0;
struct tuple2$2sNodephsNodeph* result_568;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj205;
struct tuple2$2sNodephsNodeph* __result344__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_568=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodeph_clone", 3, "struct tuple2$2sNodephsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj204=result_568->v1;
        result_568->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj205=result_568->v2;
        result_568->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_568;
    come_call_finalizer3(result_568,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj206;
struct sNode* __dec_obj207;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj206=self->v1;
            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v1) ? self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj207=self->v2;
            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_569;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_570;
    it_569=self->head;
    while(it_569!=((void*)0)) {
        prev_it_570=it_569;
        it_569=it_569->next;
        come_call_finalizer3(prev_it_570,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj209;
struct list$1tuple2$2sNodephsNodephph* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj210=self->initializer;
            come_call_finalizer3(__dec_obj210,list$1tuple2$2sNodephsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_576;
struct tuple2$2sNodephsNodeph* __result348__;
struct tuple2$2sNodephsNodeph* __result349__;
struct tuple2$2sNodephsNodeph* result_577;
struct tuple2$2sNodephsNodeph* __result350__;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_576,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result348__ = gComeFunResultObject = __result_obj__ = result_576;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    self->it=self->head;
    if(    self->it) {
        __result349__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    memset(&result_577,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_577;
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static _Bool list$1tuple2$2sNodephsNodephphp_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_579;
struct tuple2$2sNodephsNodeph* __result351__;
struct tuple2$2sNodephsNodeph* __result352__;
struct tuple2$2sNodephsNodeph* result_580;
struct tuple2$2sNodephsNodeph* __result353__;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_579,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result351__ = gComeFunResultObject = __result_obj__ = result_579;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result352__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    memset(&result_580,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result353__ = gComeFunResultObject = __result_obj__ = result_580;
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static int list$1tuple2$2sNodephsNodephphp_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_588;
void* __right_value616 = (void*)0;
struct sNode* index_589;
_Bool no_comma_590;
void* __right_value617 = (void*)0;
struct sNode* exp_591;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
_Bool no_comma_593;
void* __right_value620 = (void*)0;
struct sNode* exp_594;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* index_597;
_Bool no_comma_598;
void* __right_value626 = (void*)0;
struct sNode* exp_599;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
_Bool no_comma_600;
void* __right_value629 = (void*)0;
struct sNode* exp_601;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value637 = (void*)0;
struct sNode* __result363__;
    expected_next_character(123,info);
    initializer_588=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 1041, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_589=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_590=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_591=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_590;
        list$1tuple2$2sNodephsNodephphp_add(initializer_588,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph**)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1057, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone, tuple2$2sNodephsNodeph_get_hash_key, tuple2$2sNodephsNodeph_equals)),(struct sNode*)come_increment_ref_count(index_589),(struct sNode*)come_increment_ref_count(exp_591))));
        ((index_589) ? index_589 = come_decrement_ref_count2(index_589, ((struct sNode*)index_589)->finalize, ((struct sNode*)index_589)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((exp_591) ? exp_591 = come_decrement_ref_count2(exp_591, ((struct sNode*)exp_591)->finalize, ((struct sNode*)exp_591)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        no_comma_593=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_594=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_593;
        list$1tuple2$2sNodephsNodephphp_add(initializer_588,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1065, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_594))));
        ((exp_594) ? exp_594 = come_decrement_ref_count2(exp_594, ((struct sNode*)exp_594)->finalize, ((struct sNode*)exp_594)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_597=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_598=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_599=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_598;
            list$1tuple2$2sNodephsNodephphp_add(initializer_588,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph**)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1092, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone, tuple2$2sNodephsNodeph_get_hash_key, tuple2$2sNodephsNodeph_equals)),(struct sNode*)come_increment_ref_count(index_597),(struct sNode*)come_increment_ref_count(exp_599))));
            ((index_597) ? index_597 = come_decrement_ref_count2(index_597, ((struct sNode*)index_597)->finalize, ((struct sNode*)index_597)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp_599) ? exp_599 = come_decrement_ref_count2(exp_599, ((struct sNode*)exp_599)->finalize, ((struct sNode*)exp_599)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            no_comma_600=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_601=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_600;
            list$1tuple2$2sNodephsNodephphp_add(initializer_588,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1100, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_601))));
            ((exp_601) ? exp_601 = come_decrement_ref_count2(exp_601, ((struct sNode*)exp_601)->finalize, ((struct sNode*)exp_601)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1106, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value633=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1106, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_588),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value3));
    come_call_finalizer3(initializer_588,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value633,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value637) ? __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static unsigned int tuple2$2sNodephsNodeph_get_hash_key(struct tuple2$2sNodephsNodeph* self){
unsigned int result_592;
    result_592=0;
    result_592+=int_get_hash_key(((int)self->v1));
    result_592+=int_get_hash_key(((int)self->v2));
    return result_592;
}

static _Bool tuple2$2sNodephsNodeph_equals(struct tuple2$2sNodephsNodeph* left, struct tuple2$2sNodephsNodeph* right){
    if(    !sNode_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj215;
struct sNode* __dec_obj216;
struct tuple2$2sNodephsNodeph* __result357__;
    __dec_obj215=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj216=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    ((v1) ? v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static void tuple2$2voidpsNodeph_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj217;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj217=self->v2;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_clone(struct tuple2$2voidpsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2voidpsNodeph* __result358__;
void* __right_value621 = (void*)0;
struct tuple2$2voidpsNodeph* result_595;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj218;
struct tuple2$2voidpsNodeph* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_595=(struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "tuple2$2voidpsNodeph_clone", 3, "struct tuple2$2voidpsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_595->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj218=result_595->v2;
        result_595->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_595;
    come_call_finalizer3(result_595,tuple2$2voidpsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static unsigned int tuple2$2voidpsNodeph_get_hash_key(struct tuple2$2voidpsNodeph* self){
unsigned int result_596;
    result_596=0;
    result_596+=int_get_hash_key(((int)self->v1));
    result_596+=int_get_hash_key(((int)self->v2));
    return result_596;
}

static _Bool tuple2$2voidpsNodeph_equals(struct tuple2$2voidpsNodeph* left, struct tuple2$2voidpsNodeph* right){
    if(    !voidp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj219;
struct tuple2$2voidpsNodeph* __result360__;
    self->v1=v1;
    __dec_obj219=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj220;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj220=self->v2;
            if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result361__;
void* __right_value634 = (void*)0;
struct sArrayInitializer* result_602;
void* __right_value635 = (void*)0;
char* __dec_obj221;
void* __right_value636 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj222;
struct sArrayInitializer* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_602=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_602->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_602->sname;
        result_602->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_602->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj222=result_602->initializer;
        result_602->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj222,list$1tuple2$2sNodephsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_602;
    come_call_finalizer3(result_602,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value638 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj233;
struct sStructInitializer* __result370__;
    ((struct sNodeBase*)(__right_value638=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value638,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj233=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj233,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result370__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value649 = (void*)0;
char* __result371__;
    __result371__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value649=__builtin_string("sStructInitializer")));
    (__right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result371__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_613;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct buffer* buf_614;
int i_615;
struct list$1tuple2$2charphsNodephph* o2_saved_616;
struct tuple2$2charphsNodeph* it_619;
struct tuple2$2charphsNodeph* multiple_assign_var28 = (void*)0;
char* name_622=0;
struct sNode* value_623=0;
_Bool Value_624;
_Bool __result378__;
void* __right_value652 = (void*)0;
struct CVALUE* come_value2_625;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct CVALUE* come_value_626;
void* __right_value655 = (void*)0;
char* __dec_obj236;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* __dec_obj237;
_Bool __result379__;
    initializer_613=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_614=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1127, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_614,"{");
    i_615=0;
    for(    o2_saved_616=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_613)),it_619=list$1tuple2$2charphsNodephphp_begin((o2_saved_616));    !list$1tuple2$2charphsNodephphp_end((o2_saved_616));    it_619=list$1tuple2$2charphsNodephphp_next((o2_saved_616))    ){
        multiple_assign_var28=it_619;
        name_622=(char*)come_increment_ref_count(multiple_assign_var28->v1);
        value_623=(struct sNode*)come_increment_ref_count(multiple_assign_var28->v2);
        Value_624=node_compile(value_623,info);
        if(        !Value_624) {
            __result378__ = (_Bool)0;
            (name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_623) ? value_623 = come_decrement_ref_count2(value_623, ((struct sNode*)value_623)->finalize, ((struct sNode*)value_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(o2_saved_616,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result378__;
        }
        else {
        }
        come_value2_625=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_622) {
            buffer_append_format(buf_614,".%s = %s",name_622,come_value2_625->c_value);
        }
        else {
            buffer_append_format(buf_614,"%s",come_value2_625->c_value);
        }
        i_615++;
        if(        i_615!=list$1tuple2$2charphsNodephphp_length(initializer_613)) {
            buffer_append_str(buf_614,",");
        }
        (name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((value_623) ? value_623 = come_decrement_ref_count2(value_623, ((struct sNode*)value_623)->finalize, ((struct sNode*)value_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value2_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_616,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_614,"}");
    come_value_626=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1154, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj236=come_value_626->c_value;
    come_value_626->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_614));
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=come_value_626->type;
    come_value_626->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1157, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj237,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_626->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_626));
    __result379__ = (_Bool)1;
    come_call_finalizer3(initializer_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_626,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result379__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result364__;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_605;
struct list_item$1tuple2$2charphsNodephph* it_606;
void* __right_value647 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result369__;
    if(    self==((void*)0)) {
        __result364__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    result_605=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_606=self->head;
    while(it_606!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_605,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_606->item)));
        it_606=it_606->next;
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_605;
    come_call_finalizer3(result_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result365__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_603;
struct list_item$1tuple2$2charphsNodephph* prev_it_604;
    it_603=self->head;
    while(it_603!=((void*)0)) {
        prev_it_604=it_603;
        it_603=it_603->next;
        come_call_finalizer3(prev_it_604,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj223;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj223=self->item;
            come_call_finalizer3(__dec_obj223,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj224;
struct sNode* __dec_obj225;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj224=self->v1;
            __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj225=self->v2;
            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value641 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_607;
struct tuple2$2charphsNodeph* __dec_obj226;
void* __right_value642 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_608;
struct tuple2$2charphsNodeph* __dec_obj227;
void* __right_value643 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_609;
struct tuple2$2charphsNodeph* __dec_obj228;
struct list$1tuple2$2charphsNodephph* __result366__;
    if(    self->len==0) {
        litem_607=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value641=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_607->prev=((void*)0);
        litem_607->next=((void*)0);
        __dec_obj226=litem_607->item;
        litem_607->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj226,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_607;
        self->head=litem_607;
    }
    else if(    self->len==1) {
        litem_608=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value642=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_608->prev=self->head;
        litem_608->next=((void*)0);
        __dec_obj227=litem_608->item;
        litem_608->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj227,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_608;
        self->head->next=litem_608;
    }
    else {
        litem_609=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value643=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_609->prev=self->tail;
        litem_609->next=((void*)0);
        __dec_obj228=litem_609->item;
        litem_609->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj228,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_609;
        self->tail=litem_609;
    }
    self->len++;
    __result366__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result367__;
void* __right_value644 = (void*)0;
struct tuple2$2charphsNodeph* result_610;
void* __right_value645 = (void*)0;
char* __dec_obj229;
void* __right_value646 = (void*)0;
struct sNode* __dec_obj230;
struct tuple2$2charphsNodeph* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_610=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj229=result_610->v1;
        result_610->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj230=result_610->v2;
        result_610->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_610;
    come_call_finalizer3(result_610,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj231;
struct sNode* __dec_obj232;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj231=self->v1;
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj232=self->v2;
            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_611;
struct list_item$1tuple2$2charphsNodephph* prev_it_612;
    it_611=self->head;
    while(it_611!=((void*)0)) {
        prev_it_612=it_611;
        it_611=it_611->next;
        come_call_finalizer3(prev_it_612,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj234;
struct list$1tuple2$2charphsNodephph* __dec_obj235;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj234=self->sname;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj235=self->initializer;
            come_call_finalizer3(__dec_obj235,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_617;
struct tuple2$2charphsNodeph* __result372__;
struct tuple2$2charphsNodeph* __result373__;
struct tuple2$2charphsNodeph* result_618;
struct tuple2$2charphsNodeph* __result374__;
result_617 = (void*)0;
result_618 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_617,0,sizeof(struct tuple2$2charphsNodeph*));
        __result372__ = gComeFunResultObject = __result_obj__ = result_617;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    self->it=self->head;
    if(    self->it) {
        __result373__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    memset(&result_618,0,sizeof(struct tuple2$2charphsNodeph*));
    __result374__ = gComeFunResultObject = __result_obj__ = result_618;
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_620;
struct tuple2$2charphsNodeph* __result375__;
struct tuple2$2charphsNodeph* __result376__;
struct tuple2$2charphsNodeph* result_621;
struct tuple2$2charphsNodeph* __result377__;
result_620 = (void*)0;
result_621 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_620,0,sizeof(struct tuple2$2charphsNodeph*));
        __result375__ = gComeFunResultObject = __result_obj__ = result_620;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result376__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    memset(&result_621,0,sizeof(struct tuple2$2charphsNodeph*));
    __result377__ = gComeFunResultObject = __result_obj__ = result_621;
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_627;
void* __right_value660 = (void*)0;
char* name_628;
_Bool no_comma_629;
void* __right_value661 = (void*)0;
struct sNode* exp_630;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
_Bool no_comma_632;
void* __right_value664 = (void*)0;
struct sNode* exp_633;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
char* name_634;
_Bool no_comma_635;
void* __right_value668 = (void*)0;
struct sNode* exp_636;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
_Bool no_comma_637;
void* __right_value671 = (void*)0;
struct sNode* exp_638;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value679 = (void*)0;
struct sNode* __result383__;
    expected_next_character(123,info);
    initializer_627=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1170, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_628=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_629=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_630=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_629;
        list$1tuple2$2charphsNodephphp_add(initializer_627,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1185, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(name_628),(struct sNode*)come_increment_ref_count(exp_630))));
        (name_628 = come_decrement_ref_count2(name_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_630) ? exp_630 = come_decrement_ref_count2(exp_630, ((struct sNode*)exp_630)->finalize, ((struct sNode*)exp_630)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        no_comma_632=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_633=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_632;
        list$1tuple2$2charphsNodephphp_add(initializer_627,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1193, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_633))));
        ((exp_633) ? exp_633 = come_decrement_ref_count2(exp_633, ((struct sNode*)exp_633)->finalize, ((struct sNode*)exp_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_634=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_635=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_636=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_635;
            list$1tuple2$2charphsNodephphp_add(initializer_627,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1219, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(name_634),(struct sNode*)come_increment_ref_count(exp_636))));
            (name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_636) ? exp_636 = come_decrement_ref_count2(exp_636, ((struct sNode*)exp_636)->finalize, ((struct sNode*)exp_636)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            no_comma_637=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_638=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_637;
            list$1tuple2$2charphsNodephphp_add(initializer_627,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1227, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_638))));
            ((exp_638) ? exp_638 = come_decrement_ref_count2(exp_638, ((struct sNode*)exp_638)->finalize, ((struct sNode*)exp_638)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1233, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value675=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1233, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_627),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value679=_inf_value4));
    come_call_finalizer3(initializer_627,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value675,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value679) ? __right_value679 = come_decrement_ref_count2(__right_value679, ((struct sNode*)__right_value679)->finalize, ((struct sNode*)__right_value679)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_631;
    result_631=0;
    result_631+=int_get_hash_key(((int)self->v1));
    result_631+=int_get_hash_key(((int)self->v2));
    return result_631;
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
char* __dec_obj238;
struct sNode* __dec_obj239;
struct tuple2$2charphsNodeph* __result380__;
    __dec_obj238=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result381__;
void* __right_value676 = (void*)0;
struct sStructInitializer* result_639;
void* __right_value677 = (void*)0;
char* __dec_obj240;
void* __right_value678 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj241;
struct sStructInitializer* __result382__;
    if(    self==(void*)0) {
        __result381__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    result_639=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_639->sname;
        result_639->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_639->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj241=result_639->initializer;
        result_639->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj241,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result382__ = gComeFunResultObject = __result_obj__ = result_639;
    come_call_finalizer3(result_639,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param){
void* __right_value685 = (void*)0;
struct sVar* self_640;
void* __right_value686 = (void*)0;
char* __dec_obj246;
void* __right_value687 = (void*)0;
struct sType* __dec_obj247;
void* __right_value688 = (void*)0;
char* __dec_obj248;
void* __right_value689 = (void*)0;
char* __dec_obj249;
void* __right_value690 = (void*)0;
char* __dec_obj250;
char* __dec_obj251;
void* __right_value699 = (void*)0;
    self_640=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1238, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj246=self_640->mName;
    self_640->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj247=self_640->mType;
    self_640->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj247,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj248=self_640->mCValueName;
        self_640->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_643=0;
        __dec_obj249=self_640->mCValueName;
        self_640->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_643++));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_640->mAllocaValue=(_Bool)0;
    self_640->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj250=self_640->mFunName;
        self_640->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj251=self_640->mFunName;
        self_640->mFunName=((void*)0);
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2voidphvoidphp_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_640));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_640,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result384__;
void* __right_value680 = (void*)0;
struct sVar* result_642;
void* __right_value681 = (void*)0;
char* __dec_obj242;
void* __right_value682 = (void*)0;
char* __dec_obj243;
void* __right_value683 = (void*)0;
struct sType* __dec_obj244;
void* __right_value684 = (void*)0;
char* __dec_obj245;
struct sVar* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_642=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj242=result_642->mName;
        result_642->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj243=result_642->mCValueName;
        result_642->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj244=result_642->mType;
        result_642->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj244,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_642->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_642->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj245=result_642->mFunName;
        result_642->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_642;
    come_call_finalizer3(result_642,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_641;
    result_641=0;
    result_641+=int_get_hash_key(((int)self->mName));
    result_641+=int_get_hash_key(((int)self->mCValueName));
    result_641+=int_get_hash_key(((int)self->mType));
    result_641+=int_get_hash_key(((int)self->mGlobal));
    result_641+=int_get_hash_key(((int)self->mAllocaValue));
    result_641+=int_get_hash_key(((int)self->mNoFree));
    result_641+=int_get_hash_key(((int)self->mFunName));
    return result_641;
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
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_661;
unsigned int it_662;
_Bool same_key_exist_663;
char* it2_666;
struct map$2voidphvoidph* __result403__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_661=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_662=hash_661;
    while((_Bool)1) {
        if(        self->item_existance[it_662]) {
            if(            come_call_equals((void*)0, self->keys[it_662], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_662]);
                    come_call_finalizer3(self->keys[it_662],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_662]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_662]);
                    self->keys[it_662]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_662],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_662]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_662]=item;
                }
                break;
            }
            it_662++;
            if(            it_662>=self->size) {
                it_662=0;
            }
            else if(            it_662==hash_661) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_662]=(_Bool)1;
            if(            1) {
                self->keys[it_662]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_662]=key;
            }
            if(            1) {
                self->items[it_662]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_662]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_663=(_Bool)0;
    for(    it2_666=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_666=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_666, key)) {
            same_key_exist_663=(_Bool)1;
        }
    }
    if(    !same_key_exist_663) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result403__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_644;
void* __right_value691 = (void*)0;
void** keys_645;
void* __right_value692 = (void*)0;
void** items_646;
void* __right_value693 = (void*)0;
_Bool* item_existance_647;
int len_648;
void* it_651;
void* default_value_654;
void* __right_value694 = (void*)0;
void* it2_655;
unsigned int hash_658;
int n_659;
void* default_value_660;
void* __right_value695 = (void*)0;
default_value_654 = (void*)0;
default_value_660 = (void*)0;
    size_644=self->size*10;
    keys_645=(void**)come_increment_ref_count(((void**)(__right_value691=(void**)come_calloc(1, sizeof(void*)*(1*(size_644)), "/usr/local/include/comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_646=(void**)come_increment_ref_count(((void**)(__right_value692=(void**)come_calloc(1, sizeof(void*)*(1*(size_644)), "/usr/local/include/comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_647=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value693=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_644)), "/usr/local/include/comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_648=0;
    for(    it_651=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_651=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_654,0,sizeof(void*));
        it2_655=((void*)(__right_value694=map$2voidphvoidphp_at(self,it_651,default_value_654)));
        come_call_finalizer3(__right_value694,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_658=come_call_get_hash_key((void*)0, ((void*)it_651))%size_644;
        n_659=hash_658;
        while((_Bool)1) {
            if(            item_existance_647[n_659]) {
                n_659++;
                if(                n_659>=size_644) {
                    n_659=0;
                }
                else if(                n_659==hash_658) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_647[n_659]=(_Bool)1;
                keys_645[n_659]=it_651;
                items_646[n_659]=((void*)(__right_value695=map$2voidphvoidphp_at(self,it_651,default_value_660)));
                come_call_finalizer3(__right_value695,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_648++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_645;
    self->items=items_646;
    self->item_existance=item_existance_647;
    self->size=size_644;
    self->len=len_648;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_649;
void* __result386__;
void* __result387__;
void* result_650;
void* __result388__;
result_649 = (void*)0;
result_650 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_649,0,sizeof(void*));
        __result386__ = gComeFunResultObject = __result_obj__ = result_649;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result387__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    memset(&result_650,0,sizeof(void*));
    __result388__ = gComeFunResultObject = __result_obj__ = result_650;
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_652;
void* __result389__;
void* __result390__;
void* result_653;
void* __result391__;
result_652 = (void*)0;
result_653 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_652,0,sizeof(void*));
        __result389__ = gComeFunResultObject = __result_obj__ = result_652;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result390__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    memset(&result_653,0,sizeof(void*));
    __result391__ = gComeFunResultObject = __result_obj__ = result_653;
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_656;
unsigned int it_657;
void* __result392__;
void* __result393__;
void* __result394__;
void* __result395__;
    hash_656=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_657=hash_656;
    while((_Bool)1) {
        if(        self->item_existance[it_657]) {
            if(            come_call_equals((void*)0, self->keys[it_657], key)) {
                __result392__ = gComeFunResultObject = __result_obj__ = self->items[it_657];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result392__;
            }
            it_657++;
            if(            it_657>=self->size) {
                it_657=0;
            }
            else if(            it_657==hash_656) {
                __result393__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result393__;
            }
        }
        else {
            __result394__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result394__;
        }
    }
    __result395__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_664;
void* __result396__;
void* __result397__;
void* result_665;
void* __result398__;
result_664 = (void*)0;
result_665 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_664,0,sizeof(void*));
        __result396__ = gComeFunResultObject = __result_obj__ = result_664;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    self->it=self->head;
    if(    self->it) {
        __result397__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    memset(&result_665,0,sizeof(void*));
    __result398__ = gComeFunResultObject = __result_obj__ = result_665;
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_667;
void* __result399__;
void* __result400__;
void* result_668;
void* __result401__;
result_667 = (void*)0;
result_668 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_667,0,sizeof(void*));
        __result399__ = gComeFunResultObject = __result_obj__ = result_667;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result400__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    memset(&result_668,0,sizeof(void*));
    __result401__ = gComeFunResultObject = __result_obj__ = result_668;
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value696 = (void*)0;
struct list_item$1voidp* litem_669;
void* __right_value697 = (void*)0;
struct list_item$1voidp* litem_670;
void* __right_value698 = (void*)0;
struct list_item$1voidp* litem_671;
struct list$1voidp* __result402__;
    if(    self->len==0) {
        litem_669=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value696=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_669->prev=((void*)0);
        litem_669->next=((void*)0);
        litem_669->item=item;
        self->tail=litem_669;
        self->head=litem_669;
    }
    else if(    self->len==1) {
        litem_670=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value697=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_670->prev=self->head;
        litem_670->next=((void*)0);
        litem_670->item=item;
        self->tail=litem_670;
        self->head->next=litem_670;
    }
    else {
        litem_671=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value698=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_671->prev=self->tail;
        litem_671->next=((void*)0);
        litem_671->item=item;
        self->tail->next=litem_671;
        self->tail=litem_671;
    }
    self->len++;
    __result402__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result402__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value700 = (void*)0;
struct sVar* self_672;
void* __right_value701 = (void*)0;
char* __dec_obj252;
void* __right_value702 = (void*)0;
struct sType* __dec_obj253;
void* __right_value703 = (void*)0;
char* __dec_obj254;
void* __right_value704 = (void*)0;
    self_672=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1265, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj252=self_672->mName;
    self_672->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj253=self_672->mType;
    self_672->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj253,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_672->mGlobal=(_Bool)1;
    __dec_obj254=self_672->mCValueName;
    self_672->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_672->mAllocaValue=(_Bool)0;
    self_672->mNoFree=(_Bool)0;
    map$2voidphvoidphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_672));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_672,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value705 = (void*)0;
struct sVar* self_673;
void* __right_value706 = (void*)0;
char* __dec_obj255;
void* __right_value707 = (void*)0;
struct sType* __dec_obj256;
void* __right_value708 = (void*)0;
char* __dec_obj257;
void* __right_value709 = (void*)0;
    self_673=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1282, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj255=self_673->mName;
    self_673->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=self_673->mType;
    self_673->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_673->mGlobal=(_Bool)1;
    __dec_obj257=self_673->mCValueName;
    self_673->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_673->mAllocaValue=(_Bool)0;
    self_673->mNoFree=(_Bool)0;
    map$2voidphvoidphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_673));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_673,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_674;
_Bool is_type_name_flag_675;
_Bool multiple_declare_676;
char* p_677;
int sline_678;
void* __right_value710 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var29 = (void*)0;
struct sType* type_679=0;
char* name_680=0;
_Bool err_681=0;
void* __right_value711 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var30 = (void*)0;
struct sType* type_682=0;
char* name_683=0;
void* __right_value712 = (void*)0;
_Bool no_output_err_684;
_Bool no_comma_685;
_Bool no_output_come_code_686;
void* __right_value713 = (void*)0;
struct sNode* exp_687;
_Bool attr_define_688;
char* p_689;
int sline_690;
void* __right_value714 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var31 = (void*)0;
struct sType* type_691=0;
char* name_692=0;
_Bool err_693=0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sFun* fun_694;
void* __right_value717 = (void*)0;
char* buf2_695;
struct list$1charph* multiple_assign_696;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1charph* __dec_obj262;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
char* buf3_697;
void* __right_value722 = (void*)0;
_Bool no_comma_698;
void* __right_value723 = (void*)0;
struct sNode* right_value_699;
void* __right_value724 = (void*)0;
struct sNode* __dec_obj263;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value729 = (void*)0;
struct sNode* node_700;
struct sNode* __result404__;
void* __right_value730 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var32 = (void*)0;
int come_exception_var_c2_701=0;
char* Err_702=0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value735 = (void*)0;
struct sNode* node_703;
struct sNode* __result407__;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_705;
void* __right_value738 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var33 = (void*)0;
struct sType* base_type_706=0;
char* name_707=0;
_Bool err_708=0;
void* __right_value739 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var34 = (void*)0;
struct sType* type2_709=0;
char* var_name_710=0;
_Bool no_comma_711;
void* __right_value740 = (void*)0;
struct sNode* exp_712;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
_Bool no_comma_717;
void* __right_value746 = (void*)0;
struct sNode* exp_718;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var35 = (void*)0;
struct sType* type2_721=0;
char* var_name_722=0;
_Bool no_comma_723;
void* __right_value755 = (void*)0;
struct sNode* exp_724;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
_Bool no_comma_725;
void* __right_value758 = (void*)0;
struct sNode* exp_726;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* right_node_727;
void* __right_value763 = (void*)0;
char* var_name2_728;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value768 = (void*)0;
struct sNode* node_729;
struct sNode* __result413__;
void* __right_value769 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var36 = (void*)0;
struct sType* type_730=0;
char* name_731=0;
_Bool err_732=0;
void* __right_value770 = (void*)0;
char* __dec_obj279;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value779 = (void*)0;
struct sNode* self_node_735;
void* __right_value780 = (void*)0;
struct sNode* right_node_736;
void* __right_value781 = (void*)0;
struct sNode* node_737;
struct sNode* __result417__;
void* __right_value782 = (void*)0;
struct sNode* __result418__;
void* __right_value783 = (void*)0;
struct sNode* right_value_738;
void* __right_value784 = (void*)0;
struct sNode* __dec_obj288;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value789 = (void*)0;
struct sNode* node_739;
struct sNode* __result419__;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
_Bool _elif_conditional1;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value795 = (void*)0;
struct sNode* node_740;
void* __right_value796 = (void*)0;
struct sNode* __dec_obj289;
struct sNode* __result420__;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value800 = (void*)0;
struct sNode* node_741;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj290;
struct sNode* __result421__;
char* word_742;
void* __right_value802 = (void*)0;
char* __dec_obj291;
void* __right_value803 = (void*)0;
char* __dec_obj292;
_Bool is_type_name_flag_743;
void* __right_value804 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var37 = (void*)0;
struct sType* type_744=0;
char* name_745=0;
_Bool err_746=0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value807 = (void*)0;
struct sNode* node_747;
struct sNode* __result422__;
struct sNode* right_value_748;
_Bool no_comma_749;
void* __right_value808 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj294;
void* __right_value810 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value814 = (void*)0;
struct sNode* node_750;
struct sNode* __result423__;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value818 = (void*)0;
struct sNode* node_751;
struct sNode* __result424__;
void* __right_value819 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var38 = (void*)0;
int come_exception_var_c3_752=0;
char* Err_753=0;
word_742 = (void*)0;
    sline_real_674=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_675=is_type_name(buf,info);
    multiple_declare_676=(_Bool)0;
    if(    is_type_name_flag_675) {
        p_677=info->p;
        sline_678=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var29=((struct tuple3$3sTypephcharphbool*)(__right_value710=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_679=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
            name_680=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            err_681=multiple_assign_var29->v3;
            come_call_finalizer3(__right_value710,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_681) {
                parse_sharp_v5(info);
                multiple_assign_var30=((struct tuple2$2sTypephcharph*)(__right_value711=parse_variable_name((struct sType*)come_increment_ref_count(type_679),(_Bool)1,info)));
                type_682=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_683=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                come_call_finalizer3(__right_value711,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value712=skip_block(info)));
                        (__right_value712 = come_decrement_ref_count2(__right_value712, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    else {
                        no_output_err_684=info->no_output_err;
                        no_comma_685=info->no_comma;
                        no_output_come_code_686=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_687=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_685;
                        info->no_output_err=no_output_err_684;
                        info->no_output_come_code=no_output_come_code_686;
                        ((exp_687) ? exp_687 = come_decrement_ref_count2(exp_687, ((struct sNode*)exp_687)->finalize, ((struct sNode*)exp_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                }
                if(                !is_type_name(name_683,info)&&*info->p==44) {
                    multiple_declare_676=(_Bool)1;
                }
                come_call_finalizer3(type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(type_679,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_680 = come_decrement_ref_count2(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_677;
        info->sline=sline_678;
    }
    attr_define_688=(_Bool)0;
    if(    is_type_name_flag_675&&info->defining_class) {
        p_689=info->p;
        sline_690=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var31=((struct tuple3$3sTypephcharphbool*)(__right_value714=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_691=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_692=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_693=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value714,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_693&&strmemcmp(info->p,"self")) {
            attr_define_688=(_Bool)1;
        }
        info->p=p_689;
        info->sline=sline_690;
        come_call_finalizer3(type_691,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_692 = come_decrement_ref_count2(name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_694=((struct sFun*)((void*)(__right_value716=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value715=__builtin_string(buf)))))));
    (__right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    come_call_finalizer3(__right_value716,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_695=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_696=((void*)0);
        if(        *info->p==44) {
            __dec_obj262=multiple_assign_696;
            multiple_assign_696=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1391, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj262,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1charphp_push_back(multiple_assign_696,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_695)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_697=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charphp_push_back(multiple_assign_696,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_697)));
                (buf3_697 = come_decrement_ref_count2(buf3_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_698=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_699=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_698;
            parse_sharp_v5(info);
            __dec_obj263=right_value_699;
            right_value_699=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_699),info));
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1421, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value728=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1421, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf2_695)),(struct list$1charph*)come_increment_ref_count(multiple_assign_696),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_699),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_700=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value728,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_674;
            __result404__ = gComeFunResultObject = __result_obj__ = node_700;
            ((right_value_699) ? right_value_699 = come_decrement_ref_count2(right_value_699, ((struct sNode*)right_value_699)->finalize, ((struct sNode*)right_value_699)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf2_695 = come_decrement_ref_count2(buf2_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(multiple_assign_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result404__;
            ((right_value_699) ? right_value_699 = come_decrement_ref_count2(right_value_699, ((struct sNode*)right_value_699)->finalize, ((struct sNode*)right_value_699)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2intcharph*)(__right_value730=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_exception_var_c2_701=multiple_assign_var32->v1;
            Err_702=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_702)?(puts(Err_702),exit(0)):(0));
            come_call_finalizer3(__right_value730,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(1);
            (Err_702 = come_decrement_ref_count2(Err_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (buf2_695 = come_decrement_ref_count2(buf2_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(multiple_assign_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1431, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value732=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1431, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_703=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value732,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_674;
        __result407__ = gComeFunResultObject = __result_obj__ = node_703;
        ((node_703) ? node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result407__;
        ((node_703) ? node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    multiple_declare_676) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_705=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1439, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var33=((struct tuple3$3sTypephcharphbool*)(__right_value738=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_706=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name_707=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_708=multiple_assign_var33->v3;
        come_call_finalizer3(__right_value738,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_708) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var34=((struct tuple2$2sTypephcharph*)(__right_value739=parse_variable_name((struct sType*)come_increment_ref_count(base_type_706),(_Bool)1,info)));
        type2_709=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
        var_name_710=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        come_call_finalizer3(__right_value739,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_709->mClass->mStruct&&list$1sNodephp_length(type2_709->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_711=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_712=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_711;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_705,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1466, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_709),(char*)come_increment_ref_count(var_name_710),(struct sNode*)come_increment_ref_count(exp_712))));
                ((exp_712) ? exp_712 = come_decrement_ref_count2(exp_712, ((struct sNode*)exp_712)->finalize, ((struct sNode*)exp_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_717=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_718=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_717;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_705,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1476, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_709),(char*)come_increment_ref_count(var_name_710),(struct sNode*)come_increment_ref_count(exp_718))));
                ((exp_718) ? exp_718 = come_decrement_ref_count2(exp_718, ((struct sNode*)exp_718)->finalize, ((struct sNode*)exp_718)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_705,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp**)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1480, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone, tuple3$3sTypephcharphvoidp_get_hash_key, tuple3$3sTypephcharphvoidp_equals)),(struct sType*)come_increment_ref_count(type2_709),(char*)come_increment_ref_count(var_name_710),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var35=((struct tuple2$2sTypephcharph*)(__right_value754=parse_variable_name((struct sType*)come_increment_ref_count(base_type_706),(_Bool)0,info)));
            type2_721=(struct sType*)come_increment_ref_count(multiple_assign_var35->v1);
            var_name_722=(char*)come_increment_ref_count(multiple_assign_var35->v2);
            come_call_finalizer3(__right_value754,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_721->mClass->mStruct&&list$1sNodephp_length(type2_721->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_723=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_724=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_723;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_705,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1502, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_721),(char*)come_increment_ref_count(var_name_722),(struct sNode*)come_increment_ref_count(exp_724))));
                    ((exp_724) ? exp_724 = come_decrement_ref_count2(exp_724, ((struct sNode*)exp_724)->finalize, ((struct sNode*)exp_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    no_comma_725=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_726=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_725;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_705,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1514, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_721),(char*)come_increment_ref_count(var_name_722),(struct sNode*)come_increment_ref_count(exp_726))));
                    ((exp_726) ? exp_726 = come_decrement_ref_count2(exp_726, ((struct sNode*)exp_726)->finalize, ((struct sNode*)exp_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_705,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp**)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1518, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone, tuple3$3sTypephcharphvoidp_get_hash_key, tuple3$3sTypephcharphvoidp_equals)),(struct sType*)come_increment_ref_count(type2_721),(char*)come_increment_ref_count(var_name_722),((void*)0))));
            }
            come_call_finalizer3(type2_721,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_722 = come_decrement_ref_count2(var_name_722, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_727=((void*)0);
        var_name2_728=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1525, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value767=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1525, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_705),(struct sType*)come_increment_ref_count(base_type_706),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_729=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value767,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_674;
        __result413__ = gComeFunResultObject = __result_obj__ = node_729;
        come_call_finalizer3(multiple_declare_705,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_706,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_707 = come_decrement_ref_count2(name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_709,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_710 = come_decrement_ref_count2(var_name_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_727) ? right_node_727 = come_decrement_ref_count2(right_node_727, ((struct sNode*)right_node_727)->finalize, ((struct sNode*)right_node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (var_name2_728 = come_decrement_ref_count2(var_name2_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_729) ? node_729 = come_decrement_ref_count2(node_729, ((struct sNode*)node_729)->finalize, ((struct sNode*)node_729)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result413__;
        come_call_finalizer3(multiple_declare_705,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_706,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_707 = come_decrement_ref_count2(name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_709,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_710 = come_decrement_ref_count2(var_name_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_727) ? right_node_727 = come_decrement_ref_count2(right_node_727, ((struct sNode*)right_node_727)->finalize, ((struct sNode*)right_node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (var_name2_728 = come_decrement_ref_count2(var_name2_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_729) ? node_729 = come_decrement_ref_count2(node_729, ((struct sNode*)node_729)->finalize, ((struct sNode*)node_729)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    attr_define_688) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var36=((struct tuple3$3sTypephcharphbool*)(__right_value769=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_730=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
        name_731=(char*)come_increment_ref_count(multiple_assign_var36->v2);
        err_732=multiple_assign_var36->v3;
        come_call_finalizer3(__right_value769,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_732) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj279=name_731;
        name_731=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1voidphp_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1548, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_731),(struct sType*)come_increment_ref_count(type_730))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value778=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1556, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_735=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value778,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_736=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_737=(struct sNode*)come_increment_ref_count(store_field(self_node_735,(struct sNode*)come_increment_ref_count(right_node_736),(char*)come_increment_ref_count(name_731),info));
            info->sline_real=sline_real_674;
            __result417__ = gComeFunResultObject = __result_obj__ = node_737;
            ((self_node_735) ? self_node_735 = come_decrement_ref_count2(self_node_735, ((struct sNode*)self_node_735)->finalize, ((struct sNode*)self_node_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((right_node_736) ? right_node_736 = come_decrement_ref_count2(right_node_736, ((struct sNode*)right_node_736)->finalize, ((struct sNode*)right_node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_737) ? node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_731 = come_decrement_ref_count2(name_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result417__;
            ((self_node_735) ? self_node_735 = come_decrement_ref_count2(self_node_735, ((struct sNode*)self_node_735)->finalize, ((struct sNode*)self_node_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((right_node_736) ? right_node_736 = come_decrement_ref_count2(right_node_736, ((struct sNode*)right_node_736)->finalize, ((struct sNode*)right_node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_737) ? node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            info->sline_real=sline_real_674;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=create_null_node(info)));
            come_call_finalizer3(type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_731 = come_decrement_ref_count2(name_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value782) ? __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result418__;
        }
        come_call_finalizer3(type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_731 = come_decrement_ref_count2(name_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_675&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_738=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj288=right_value_738;
        right_value_738=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_738),info));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1581, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value788=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1581, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_738),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_739=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value788,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_674;
        __result419__ = gComeFunResultObject = __result_obj__ = node_739;
        ((right_value_738) ? right_value_738 = come_decrement_ref_count2(right_value_738, ((struct sNode*)right_value_738)->finalize, ((struct sNode*)right_value_738)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node_739) ? node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result419__;
        ((right_value_738) ? right_value_738 = come_decrement_ref_count2(right_value_738, ((struct sNode*)right_value_738)->finalize, ((struct sNode*)right_value_738)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node_739) ? node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_675||((struct sFun*)((void*)(__right_value791=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value790=__builtin_string(buf))))))))),    (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
    come_call_finalizer3(__right_value791,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1586, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value794=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1586, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_740=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value794,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj289=node_740;
        node_740=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_740),info));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_674;
        __result420__ = gComeFunResultObject = __result_obj__ = node_740;
        ((node_740) ? node_740 = come_decrement_ref_count2(node_740, ((struct sNode*)node_740)->finalize, ((struct sNode*)node_740)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result420__;
        ((node_740) ? node_740 = come_decrement_ref_count2(node_740, ((struct sNode*)node_740)->finalize, ((struct sNode*)node_740)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !is_type_name_flag_675) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1594, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value799=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1594, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_741=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value799,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj290=node_741;
        node_741=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_741),info));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_674;
        __result421__ = gComeFunResultObject = __result_obj__ = node_741;
        ((node_741) ? node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result421__;
        ((node_741) ? node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj291=word_742;
            word_742=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj292=word_742;
            word_742=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_743=is_type_name(word_742,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_743) {
            parse_sharp_v5(info);
            multiple_assign_var37=((struct tuple3$3sTypephcharphbool*)(__right_value804=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_744=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
            name_745=(char*)come_increment_ref_count(multiple_assign_var37->v2);
            err_746=multiple_assign_var37->v3;
            come_call_finalizer3(__right_value804,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_746) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1631, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value806=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1631, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_745),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_747=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value806,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_674;
                __result422__ = gComeFunResultObject = __result_obj__ = node_747;
                ((node_747) ? node_747 = come_decrement_ref_count2(node_747, ((struct sNode*)node_747)->finalize, ((struct sNode*)node_747)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_745 = come_decrement_ref_count2(name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_742 = come_decrement_ref_count2(word_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result422__;
                ((node_747) ? node_747 = come_decrement_ref_count2(node_747, ((struct sNode*)node_747)->finalize, ((struct sNode*)node_747)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_748=((void*)0);
                if(                type_744->mClass->mStruct&&list$1sNodephp_length(type_744->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_749=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj293=right_value_748;
                    right_value_748=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_749;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj294=right_value_748;
                    right_value_748=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj295=right_value_748;
                right_value_748=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_748),info));
                if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1660, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value813=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1660, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_745),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_744),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_748),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_750=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value813,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_674;
                __result423__ = gComeFunResultObject = __result_obj__ = node_750;
                ((right_value_748) ? right_value_748 = come_decrement_ref_count2(right_value_748, ((struct sNode*)right_value_748)->finalize, ((struct sNode*)right_value_748)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_750) ? node_750 = come_decrement_ref_count2(node_750, ((struct sNode*)node_750)->finalize, ((struct sNode*)node_750)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_745 = come_decrement_ref_count2(name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_742 = come_decrement_ref_count2(word_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result423__;
                ((right_value_748) ? right_value_748 = come_decrement_ref_count2(right_value_748, ((struct sNode*)right_value_748)->finalize, ((struct sNode*)right_value_748)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_750) ? node_750 = come_decrement_ref_count2(node_750, ((struct sNode*)node_750)->finalize, ((struct sNode*)node_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1665, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value817=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1665, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_745),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_744),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_751=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value817,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_674;
                __result424__ = gComeFunResultObject = __result_obj__ = node_751;
                ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_745 = come_decrement_ref_count2(name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_742 = come_decrement_ref_count2(word_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result424__;
                ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            come_call_finalizer3(type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_745 = come_decrement_ref_count2(name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_742 = come_decrement_ref_count2(word_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    multiple_assign_var38=((struct tuple2$2intcharph*)(__right_value819=err_msg(info,"unexpected word(%s)(1)\n",buf)));
    come_exception_var_c3_752=multiple_assign_var38->v1;
    Err_753=(char*)come_increment_ref_count(multiple_assign_var38->v2);
    ((Err_753)?(puts(Err_753),exit(0)):(0));
    come_call_finalizer3(__right_value819,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    exit(2);
    (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj258;
char* __dec_obj259;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj258=self->v1;
            come_call_finalizer3(__dec_obj258,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj259=self->v2;
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj260;
char* __dec_obj261;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj260=self->v1;
            come_call_finalizer3(__dec_obj260,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj261=self->v2;
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result405__;
void* __right_value733 = (void*)0;
struct sNewChannel* result_704;
void* __right_value734 = (void*)0;
char* __dec_obj264;
struct sNewChannel* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_704=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_704->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_704->sname;
        result_704->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_704->sline_real=self->sline_real;
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_704;
    come_call_finalizer3(result_704,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value741 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_713;
struct tuple3$3sTypephcharphsNodeph* __dec_obj265;
void* __right_value742 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_714;
struct tuple3$3sTypephcharphsNodeph* __dec_obj266;
void* __right_value743 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_715;
struct tuple3$3sTypephcharphsNodeph* __dec_obj267;
struct list$1tuple3$3sTypephcharphsNodephph* __result408__;
    if(    self->len==0) {
        litem_713=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value741=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_713->prev=((void*)0);
        litem_713->next=((void*)0);
        __dec_obj265=litem_713->item;
        litem_713->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj265,tuple3$3sTypephcharphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_713;
        self->head=litem_713;
    }
    else if(    self->len==1) {
        litem_714=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value742=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_714->prev=self->head;
        litem_714->next=((void*)0);
        __dec_obj266=litem_714->item;
        litem_714->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj266,tuple3$3sTypephcharphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_714;
        self->head->next=litem_714;
    }
    else {
        litem_715=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value743=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_715->prev=self->tail;
        litem_715->next=((void*)0);
        __dec_obj267=litem_715->item;
        litem_715->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj267,tuple3$3sTypephcharphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_715;
        self->tail=litem_715;
    }
    self->len++;
    __result408__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static unsigned int tuple3$3sTypephcharphsNodeph_get_hash_key(struct tuple3$3sTypephcharphsNodeph* self){
unsigned int result_716;
    result_716=0;
    result_716+=int_get_hash_key(((int)self->v1));
    result_716+=int_get_hash_key(((int)self->v2));
    result_716+=int_get_hash_key(((int)self->v3));
    return result_716;
}

static _Bool tuple3$3sTypephcharphsNodeph_equals(struct tuple3$3sTypephcharphsNodeph* left, struct tuple3$3sTypephcharphsNodeph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj268;
char* __dec_obj269;
struct sNode* __dec_obj270;
struct tuple3$3sTypephcharphsNodeph* __result409__;
    __dec_obj268=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj268,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj269=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj270=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    __result409__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static void tuple3$3sTypephcharphvoidp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj271;
char* __dec_obj272;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj271=self->v1;
            come_call_finalizer3(__dec_obj271,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj272=self->v2;
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_clone(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphvoidp* __result410__;
void* __right_value749 = (void*)0;
struct tuple3$3sTypephcharphvoidp* result_719;
void* __right_value750 = (void*)0;
struct sType* __dec_obj273;
void* __right_value751 = (void*)0;
char* __dec_obj274;
struct tuple3$3sTypephcharphvoidp* __result411__;
    if(    self==(void*)0) {
        __result410__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    result_719=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "tuple3$3sTypephcharphvoidp_clone", 3, "struct tuple3$3sTypephcharphvoidp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj273=result_719->v1;
        result_719->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj273,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj274=result_719->v2;
        result_719->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_719->v3=self->v3;
    }
    __result411__ = gComeFunResultObject = __result_obj__ = result_719;
    come_call_finalizer3(result_719,tuple3$3sTypephcharphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static unsigned int tuple3$3sTypephcharphvoidp_get_hash_key(struct tuple3$3sTypephcharphvoidp* self){
unsigned int result_720;
    result_720=0;
    result_720+=int_get_hash_key(((int)self->v1));
    result_720+=int_get_hash_key(((int)self->v2));
    result_720+=int_get_hash_key(((int)self->v3));
    return result_720;
}

static _Bool tuple3$3sTypephcharphvoidp_equals(struct tuple3$3sTypephcharphvoidp* left, struct tuple3$3sTypephcharphvoidp* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj275;
char* __dec_obj276;
struct tuple3$3sTypephcharphvoidp* __result412__;
    __dec_obj275=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj275,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj276=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result412__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj277;
char* __dec_obj278;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj277=self->v1;
            come_call_finalizer3(__dec_obj277,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj278=self->v2;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj280;
struct sType* __dec_obj281;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj280=self->v1;
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj281=self->v2;
            come_call_finalizer3(__dec_obj281,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result414__;
void* __right_value771 = (void*)0;
struct tuple2$2charphsTypeph* result_733;
void* __right_value772 = (void*)0;
char* __dec_obj282;
void* __right_value773 = (void*)0;
struct sType* __dec_obj283;
struct tuple2$2charphsTypeph* __result415__;
    if(    self==(void*)0) {
        __result414__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result414__;
    }
    result_733=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj282=result_733->v1;
        result_733->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj283=result_733->v2;
        result_733->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj283,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result415__ = gComeFunResultObject = __result_obj__ = result_733;
    come_call_finalizer3(result_733,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_734;
    result_734=0;
    result_734+=int_get_hash_key(((int)self->v1));
    result_734+=int_get_hash_key(((int)self->v2));
    return result_734;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj284;
struct sType* __dec_obj285;
struct tuple2$2charphsTypeph* __result416__;
    __dec_obj284=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj285=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj285,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result416__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj286;
struct sType* __dec_obj287;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj286=self->v1;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj287=self->v2;
            come_call_finalizer3(__dec_obj287,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_754;
void* __right_value820 = (void*)0;
struct sNode* exp_755;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value826 = (void*)0;
struct sNode* __result427__;
void* __right_value827 = (void*)0;
struct sNode* __dec_obj298;
struct sNode* __result428__;
node_754 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_755=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1691, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value822=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1691, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_755),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value826=_inf_value15));
        ((exp_755) ? exp_755 = come_decrement_ref_count2(exp_755, ((struct sNode*)exp_755)->finalize, ((struct sNode*)exp_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node_754) ? node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value822,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value826) ? __right_value826 = come_decrement_ref_count2(__right_value826, ((struct sNode*)__right_value826)->finalize, ((struct sNode*)__right_value826)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result427__;
        ((exp_755) ? exp_755 = come_decrement_ref_count2(exp_755, ((struct sNode*)exp_755)->finalize, ((struct sNode*)exp_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        __dec_obj298=node_754;
        node_754=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result428__ = gComeFunResultObject = __result_obj__ = node_754;
    ((node_754) ? node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result425__;
void* __right_value823 = (void*)0;
struct sReadChannelNode* result_756;
void* __right_value824 = (void*)0;
char* __dec_obj296;
void* __right_value825 = (void*)0;
struct sNode* __dec_obj297;
struct sReadChannelNode* __result426__;
    if(    self==(void*)0) {
        __result425__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    result_756=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_756->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_756->sname;
        result_756->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_756->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj297=result_756->exp;
        result_756->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result426__ = gComeFunResultObject = __result_obj__ = result_756;
    come_call_finalizer3(result_756,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value828 = (void*)0;
struct sNode* right_value_757;
void* __right_value829 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value836 = (void*)0;
struct sNode* __result431__;
void* __right_value837 = (void*)0;
struct sNode* __result432__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_757=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj299=right_value_757;
        right_value_757=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_757),info));
        if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1714, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value831=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1714, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_757),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value836=_inf_value16));
        ((right_value_757) ? right_value_757 = come_decrement_ref_count2(right_value_757, ((struct sNode*)right_value_757)->finalize, ((struct sNode*)right_value_757)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value831,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value836) ? __right_value836 = come_decrement_ref_count2(__right_value836, ((struct sNode*)__right_value836)->finalize, ((struct sNode*)__right_value836)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result431__;
        ((right_value_757) ? right_value_757 = come_decrement_ref_count2(right_value_757, ((struct sNode*)right_value_757)->finalize, ((struct sNode*)right_value_757)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    __result432__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((__right_value837) ? __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result429__;
void* __right_value832 = (void*)0;
struct sWriteChannelNode* result_758;
void* __right_value833 = (void*)0;
char* __dec_obj300;
void* __right_value834 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value835 = (void*)0;
struct sNode* __dec_obj302;
struct sWriteChannelNode* __result430__;
    if(    self==(void*)0) {
        __result429__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    result_758=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_758->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_758->sname;
        result_758->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj301=result_758->exp;
        result_758->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj302=result_758->right_value;
        result_758->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result430__ = gComeFunResultObject = __result_obj__ = result_758;
    come_call_finalizer3(result_758,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

