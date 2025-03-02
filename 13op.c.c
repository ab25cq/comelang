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

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
};

struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1voidphp_length(struct list$1voidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self);
static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
static void sNilNode_finalize(struct sNilNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value287 = (void*)0;
struct sType* generics_type_317;
struct sType* __dec_obj72;
struct sClass* klass_353;
char* class_name_354;
struct sFun* operator_fun_355;
char* fun_name2_356;
struct sGenericsFun* generics_fun_357;
void* __right_value288 = (void*)0;
char* none_generics_name_358;
void* __right_value289 = (void*)0;
struct sType* obj_type_359;
void* __right_value290 = (void*)0;
char* __dec_obj73;
void* __right_value291 = (void*)0;
char* fun_name3_360;
void* __right_value292 = (void*)0;
_Bool generics_any_child_363;
void* __right_value293 = (void*)0;
struct sType* no_solved_type_364;
struct sType* __dec_obj74;
struct list$1voidph* o2_saved_365;
struct sType* it_368;
struct list$1voidph* o2_saved_371;
struct sType* it_372;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* type2_373;
void* __right_value296 = (void*)0;
struct sType* type_before_374;
void* __right_value297 = (void*)0;
char* __dec_obj75;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_375=0;
_Bool err_376=0;
void* __right_value300 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_377=0;
char* Err_378=0;
void* __right_value301 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
_Bool __result258__;
void* __right_value306 = (void*)0;
char* __dec_obj82;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var3 = (void*)0;
char* name_384=0;
_Bool err_385=0;
_Bool __result263__;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun_386=0;
char* fun_name_387=0;
void* __right_value311 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_388=0;
char* fun_name2_389=0;
void* __right_value312 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun_390=0;
char* fun_name_391=0;
void* __right_value313 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun2_392=0;
char* fun_name2_393=0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj84;
int i_394;
void* __right_value316 = (void*)0;
char* new_fun_name_395;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj85;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* obj_type_396;
void* __right_value321 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun_397=0;
char* fun_name_398=0;
void* __right_value322 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9 = (void*)0;
struct sFun* fun2_399=0;
char* fun_name2_400=0;
void* __right_value323 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun_401=0;
char* fun_name_402=0;
void* __right_value324 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun2_403=0;
char* fun_name2_404=0;
_Bool result_405;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value_406;
char* left_value2_407;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var12 = (void*)0;
_Bool come_exception_var_1_411=0;
char* Err_412=0;
_Bool _if_conditional1;
_Bool __result266__;
void* __right_value331 = (void*)0;
_Bool _if_conditional2;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj91;
void* __right_value334 = (void*)0;
char* __dec_obj92;
char* right_value2_413;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_2_414=0;
char* Err_415=0;
_Bool _if_conditional3;
_Bool __result267__;
void* __right_value339 = (void*)0;
_Bool _if_conditional4;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __dec_obj93;
void* __right_value342 = (void*)0;
char* __dec_obj94;
void* __right_value343 = (void*)0;
struct sType* type2_416;
void* __right_value344 = (void*)0;
struct sType* type3_417;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* __dec_obj95;
struct sType* result_type_418;
struct sType* obj_type_419;
void* __right_value349 = (void*)0;
struct sType* __dec_obj96;
void* __right_value350 = (void*)0;
struct sType* __dec_obj97;
void* __right_value351 = (void*)0;
struct sType* __dec_obj98;
void* __right_value352 = (void*)0;
char* __dec_obj99;
void* __right_value353 = (void*)0;
struct CVALUE* __dec_obj100;
_Bool __result269__;
fun_name2_356 = (void*)0;
memset(&i_394, 0, sizeof(int));
left_value2_407 = (void*)0;
right_value2_413 = (void*)0;
    generics_type_317=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_317->mNoSolvedGenericsType) {
        __dec_obj72=generics_type_317;
        generics_type_317=(struct sType*)come_increment_ref_count(generics_type_317->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_353=type->mClass;
    class_name_354=klass_353->mName;
    operator_fun_355=((void*)0);
    generics_fun_357=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_358=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_359=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj73=fun_name2_356;
        fun_name2_356=(char*)come_increment_ref_count(create_method_name(obj_type_359,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_360=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_358,fun_name));
        generics_fun_357=((struct sGenericsFun*)((void*)(__right_value292=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_360,((void*)0)))));
        come_call_finalizer3(__right_value292,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_357) {
            generics_any_child_363=(_Bool)0;
            no_solved_type_364=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj74=no_solved_type_364;
                no_solved_type_364=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_365=(struct list$1voidph*)come_increment_ref_count((no_solved_type_364->mGenericsTypes)),it_368=((struct sType*)list$1voidphp_begin((o2_saved_365)));                !list$1voidphp_end((o2_saved_365));                it_368=((struct sType*)list$1voidphp_next((o2_saved_365)))                ){
                    if(                    it_368->mAnyOriginalType) {
                        generics_any_child_363=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_365,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            for(            o2_saved_371=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_372=((struct sType*)list$1voidphp_begin((o2_saved_371)));            !list$1voidphp_end((o2_saved_371));            it_372=((struct sType*)list$1voidphp_next((o2_saved_371)))            ){
                if(                it_372->mAnyOriginalType) {
                    generics_any_child_363=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_371,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            generics_fun_357->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_363)) {
                type2_373=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type))));
                type_before_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
                __dec_obj75=fun_name2_356;
                fun_name2_356=(char*)come_increment_ref_count(create_method_name(type2_373,(_Bool)0,fun_name,info,(_Bool)1));
                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value299=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_356)),generics_fun_357,type2_373,info)));
                name_375=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                err_376=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value299,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_376) {
                    multiple_assign_var2=((struct tuple2$2intcharph*)(__right_value300=err_msg(info,"%s not found",fun_name3_360)));
                    come_exception_var_c1_377=multiple_assign_var2->v1;
                    Err_378=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                    ((Err_378)?(puts(Err_378),exit(0)):(0));
                    come_call_finalizer3(__right_value300,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    __result258__ = ((struct tuple2$2charphvoidp*)(__right_value305=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "13op.c", 58, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                    (Err_378 = come_decrement_ref_count2(Err_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_before_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_375 = come_decrement_ref_count2(name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(no_solved_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (none_generics_name_358 = come_decrement_ref_count2(none_generics_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_360 = come_decrement_ref_count2(fun_name3_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value305,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                    return __result258__;
                    (Err_378 = come_decrement_ref_count2(Err_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                operator_fun_355=((struct sFun*)((void*)(__right_value306=map$2voidphvoidphp_operator_load_element(info->funcs,name_375))));
                come_call_finalizer3(__right_value306,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                __dec_obj82=fun_name2_356;
                fun_name2_356=(char*)come_increment_ref_count(name_375);
                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                type=type_before_374;
                come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_375 = come_decrement_ref_count2(name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var3=((struct tuple2$2charphbool*)(__right_value308=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_356)),generics_fun_357,obj_type_359,info)));
                name_384=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                err_385=multiple_assign_var3->v2;
                come_call_finalizer3(__right_value308,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_385) {
                    __result263__ = (_Bool)0;
                    (name_384 = come_decrement_ref_count2(name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(no_solved_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (none_generics_name_358 = come_decrement_ref_count2(none_generics_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_360 = come_decrement_ref_count2(fun_name3_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result263__;
                }
                operator_fun_355=((struct sFun*)((void*)(__right_value309=map$2voidphvoidphp_operator_load_element(info->funcs,name_384))));
                come_call_finalizer3(__right_value309,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_384 = come_decrement_ref_count2(name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(no_solved_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value310=create_equals_automatically(obj_type_359,"equals",info)));
                fun_386=multiple_assign_var4->v1;
                fun_name_387=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value311=create_operator_equals_automatically(obj_type_359,"operator_equals",info)));
                fun2_388=multiple_assign_var5->v1;
                fun_name2_389=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_355=fun2_388;
                (fun_name_387 = come_decrement_ref_count2(fun_name_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_389 = come_decrement_ref_count2(fun_name2_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value312=create_not_equals_automatically(obj_type_359,"not_equals",info)));
                fun_390=multiple_assign_var6->v1;
                fun_name_391=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                come_call_finalizer3(__right_value312,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value313=create_operator_not_equals_automatically(obj_type_359,"operator_not_equals",info)));
                fun2_392=multiple_assign_var7->v1;
                fun_name2_393=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(__right_value313,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_355=fun2_392;
                (fun_name_391 = come_decrement_ref_count2(fun_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_393 = come_decrement_ref_count2(fun_name2_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                operator_fun_355=((struct sFun*)((void*)(__right_value314=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_356))));
                come_call_finalizer3(__right_value314,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        (none_generics_name_358 = come_decrement_ref_count2(none_generics_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_360 = come_decrement_ref_count2(fun_name3_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj84=fun_name2_356;
        fun_name2_356=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_394=128-1;        i_394>=1;        i_394--        ){
            new_fun_name_395=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_356,i_394));
            operator_fun_355=((struct sFun*)((void*)(__right_value317=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_395))));
            come_call_finalizer3(__right_value317,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            operator_fun_355) {
                __dec_obj85=fun_name2_356;
                fun_name2_356=(char*)come_increment_ref_count(__builtin_string(new_fun_name_395));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_395 = come_decrement_ref_count2(new_fun_name_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_395 = come_decrement_ref_count2(new_fun_name_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_355==((void*)0)) {
            operator_fun_355=((struct sFun*)((void*)(__right_value319=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_356))));
            come_call_finalizer3(__right_value319,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            obj_type_396=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_355==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value321=create_equals_automatically(obj_type_396,"equals",info)));
                    fun_397=multiple_assign_var8->v1;
                    fun_name_398=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer3(__right_value321,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value322=create_operator_equals_automatically(obj_type_396,"operator_equals",info)));
                    fun2_399=multiple_assign_var9->v1;
                    fun_name2_400=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    come_call_finalizer3(__right_value322,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_355=fun2_399;
                    (fun_name_398 = come_decrement_ref_count2(fun_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name2_400 = come_decrement_ref_count2(fun_name2_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value323=create_not_equals_automatically(obj_type_396,"not_equals",info)));
                    fun_401=multiple_assign_var10->v1;
                    fun_name_402=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    come_call_finalizer3(__right_value323,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value324=create_operator_not_equals_automatically(obj_type_396,"operator_not_equals",info)));
                    fun2_403=multiple_assign_var11->v1;
                    fun_name2_404=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    come_call_finalizer3(__right_value324,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_355=fun2_403;
                    (fun_name_402 = come_decrement_ref_count2(fun_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name2_404 = come_decrement_ref_count2(fun_name2_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(obj_type_396,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_405=(_Bool)0;
    if(    operator_fun_355&&(list$1voidphp_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 134, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var12=((struct tuple2$2boolcharph*)(__right_value330=check_assign_type(((char*)(__right_value328=xsprintf("\%s is assigned to",((char*)(__right_value327=string_to_string(fun_name2_356)))))),((struct sType*)((void*)(__right_value329=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_1_411=multiple_assign_var12->v1;
        Err_412=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        if(        (_if_conditional1=(Err_412)),        (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value329,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value330,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            __result266__ = (_Bool)1;
            come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result266__;
        }
        else {
        }
        if(        (_if_conditional2=(((struct sType*)((void*)(__right_value331=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,0))))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value331,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)((void*)(__right_value332=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,0)))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value332,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj91=left_value2_407;
            left_value2_407=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj92=left_value2_407;
            left_value2_407=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var13=((struct tuple2$2boolcharph*)(__right_value338=check_assign_type(((char*)(__right_value336=xsprintf("\%s is assigned to",((char*)(__right_value335=string_to_string(fun_name2_356)))))),((struct sType*)((void*)(__right_value337=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,1)))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_2_414=multiple_assign_var13->v1;
        Err_415=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        if(        (_if_conditional3=(Err_415)),        (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value337,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value338,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            __result267__ = (_Bool)1;
            come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (right_value2_413 = come_decrement_ref_count2(right_value2_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result267__;
        }
        else {
        }
        if(        (_if_conditional4=(((struct sType*)((void*)(__right_value339=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,1))))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value339,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)((void*)(__right_value340=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,1)))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value340,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj93=right_value2_413;
            right_value2_413=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj94=right_value2_413;
            right_value2_413=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type2_416=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_355->mResultType));
        type3_417=(struct sType*)come_increment_ref_count(solve_generics(type2_416,generics_type_317,info));
        __dec_obj95=come_value_406->c_value;
        come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value345=string_to_string(fun_name2_356))),((char*)(__right_value346=string_to_string(left_value2_407))),((char*)(__right_value347=string_to_string(right_value2_413)))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_418=(struct sType*)come_increment_ref_count(type2_416);
        obj_type_419=(struct sType*)come_increment_ref_count(generics_type_317);
        come_value_406->var=((void*)0);
        if(        result_type_418->mAnyOriginalType&&generics_fun_357) {
            __dec_obj96=type3_417;
            type3_417=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_357->mResultType,obj_type_419,info));
            come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj97=come_value_406->type;
            come_value_406->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_417));
            come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_406->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj98=come_value_406->type;
            come_value_406->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_417));
            come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        type3_417->mHeap) {
            append_object_to_right_values2(come_value_406,(struct sType*)come_increment_ref_count(type3_417),info,(_Bool)0);
        }
        __dec_obj99=come_value_406->c_value;
        come_value_406->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_406->c_value,come_value_406->type,info));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_406->c_value);
        __dec_obj100=come_value_406;
        come_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_406),info));
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_406));
        result_405=(_Bool)1;
        come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (right_value2_413 = come_decrement_ref_count2(right_value2_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_416,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_417,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_419,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result269__ = result_405;
    come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result269__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result230__;
void* __right_value252 = (void*)0;
struct sType* result_335;
void* __right_value253 = (void*)0;
struct sType* __dec_obj48;
void* __right_value254 = (void*)0;
struct sType* __dec_obj49;
void* __right_value261 = (void*)0;
struct list$1voidph* __dec_obj53;
void* __right_value262 = (void*)0;
struct sType* __dec_obj54;
void* __right_value263 = (void*)0;
struct sType* __dec_obj55;
void* __right_value265 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value266 = (void*)0;
struct sNode* __dec_obj57;
void* __right_value267 = (void*)0;
char* __dec_obj58;
void* __right_value268 = (void*)0;
char* __dec_obj59;
void* __right_value269 = (void*)0;
char* __dec_obj60;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value277 = (void*)0;
char* __dec_obj65;
void* __right_value278 = (void*)0;
struct list$1voidph* __dec_obj66;
void* __right_value285 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value286 = (void*)0;
struct sType* __dec_obj71;
struct sType* __result244__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_335=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_335->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj48=result_335->mOriginalLoadVarType;
        result_335->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj49=result_335->mChannelType;
        result_335->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj53=result_335->mGenericsTypes;
        result_335->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj53,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=result_335->mNoSolvedGenericsType;
        result_335->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_335->mAnyOriginalType;
        result_335->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj56=result_335->mSizeNum;
        result_335->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj57=result_335->mAlignas;
        result_335->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj58=result_335->mTupleName;
        result_335->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj59=result_335->mAttribute;
        result_335->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mAllocaValue=self->mAllocaValue;
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
    if(    self!=((void*)0)) {
        result_335->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_335->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_335->mDynamic=self->mDynamic;
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
        __dec_obj60=result_335->mAsmName;
        result_335->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_335->mArrayNum;
        result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        __dec_obj65=result_335->mOriginalTypeName;
        result_335->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalPointerNum=self->mOriginalPointerNum;
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
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_335->mParamTypes;
        result_335->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_335->mParamNames;
        result_335->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_335->mResultType;
        result_335->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mVarArgs=self->mVarArgs;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj31;
struct sType* __dec_obj32;
struct list$1voidph* __dec_obj33;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
struct sNode* __dec_obj37;
struct sNode* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1sNodeph* __dec_obj42;
char* __dec_obj44;
struct list$1voidph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct sType* __dec_obj47;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj31=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj32=self->mChannelType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj33=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj33,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj38=self->mAlignas;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj39=self->mTupleName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj40=self->mAttribute;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj41=self->mAsmName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj44=self->mOriginalTypeName;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj45=self->mParamTypes;
            come_call_finalizer3(__dec_obj45,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj46=self->mParamNames;
            come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj47=self->mResultType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            come_call_finalizer3(__dec_obj34,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
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

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->mClass));
    result_328+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_328+=int_get_hash_key(((int)self->mChannelType));
    result_328+=int_get_hash_key(((int)self->mGenericsTypes));
    result_328+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_328+=int_get_hash_key(((int)self->mAnyClass));
    result_328+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_328+=int_get_hash_key(((int)self->mSizeNum));
    result_328+=int_get_hash_key(((int)self->mAlignas));
    result_328+=int_get_hash_key(((int)self->mTupleName));
    result_328+=int_get_hash_key(((int)self->mAttribute));
    result_328+=int_get_hash_key(((int)self->mAllocaValue));
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
    result_328+=int_get_hash_key(((int)self->mGenerate));
    result_328+=int_get_hash_key(((int)self->mCreateVTable));
    result_328+=int_get_hash_key(((int)self->mDynamic));
    result_328+=int_get_hash_key(((int)self->mInline));
    result_328+=int_get_hash_key(((int)self->mNullValue));
    result_328+=int_get_hash_key(((int)self->mGuardValue));
    result_328+=int_get_hash_key(((int)self->mAsmName));
    result_328+=int_get_hash_key(((int)self->mTypedef));
    result_328+=int_get_hash_key(((int)self->mMultipleTypes));
    result_328+=int_get_hash_key(((int)self->mOriginIsArray));
    result_328+=int_get_hash_key(((int)self->mArrayNum));
    result_328+=int_get_hash_key(((int)self->mPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_328+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_328+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mArrayPointerType));
    result_328+=int_get_hash_key(((int)self->mLambdaArray));
    result_328+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_328+=int_get_hash_key(((int)self->mParamTypes));
    result_328+=int_get_hash_key(((int)self->mParamNames));
    result_328+=int_get_hash_key(((int)self->mResultType));
    result_328+=int_get_hash_key(((int)self->mVarArgs));
    return result_328;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
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
struct list$1voidph* __result231__;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct list$1voidph* result_337;
struct list_item$1voidph* it_338;
void* __right_value260 = (void*)0;
struct list$1voidph* __result234__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_337=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_338=self->head;
    while(it_338!=((void*)0)) {
        list$1voidphp_add(result_337,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_338->item)));
        it_338=it_338->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(result_337,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
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
void* __right_value257 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj50;
void* __right_value258 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj51;
void* __right_value259 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj52;
struct list$1voidph* __result233__;
    if(    self->len==0) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value257=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        __dec_obj50=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value258=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        __dec_obj51=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value259=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        __dec_obj52=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_341;
        self->tail=litem_341;
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
void* __right_value264 = (void*)0;
struct sNode* result_342;
struct sNode* __result236__;
    if(    self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_342=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_342->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_342->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_342->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_342->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_342->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_342->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_342->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_342->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_342->kind=self->kind;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_342;
    ((result_342) ? result_342 = come_decrement_ref_count2(result_342, ((struct sNode*)result_342)->finalize, ((struct sNode*)result_342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sNodeph* result_343;
struct list_item$1sNodeph* it_344;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result240__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_343=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_344=self->head;
    while(it_344!=((void*)0)) {
        list$1sNodephp_add(result_343,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_344->item)));
        it_344=it_344->next;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_343;
    come_call_finalizer3(result_343,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj61;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj62;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result239__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj61=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj62=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj63=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_347;
        self->tail=litem_347;
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
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* result_348;
struct list_item$1charph* it_349;
void* __right_value284 = (void*)0;
struct list$1charph* __result243__;
    if(    self==((void*)0)) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_348=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1charphp_add(result_348,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj67;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj68;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj69;
struct list$1charph* __result242__;
    if(    self->len==0) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj67=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj68=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj69=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_361;
unsigned int it_362;
void* __result245__;
void* __result246__;
void* __result247__;
void* __result248__;
    hash_361=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_362=hash_361;
    while((_Bool)1) {
        if(        self->item_existance[it_362]) {
            if(            come_call_equals((void*)0, self->keys[it_362], key)) {
                __result245__ = gComeFunResultObject = __result_obj__ = self->items[it_362];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
            it_362++;
            if(            it_362>=self->size) {
                it_362=0;
            }
            else if(            it_362==hash_361) {
                __result246__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
        }
        else {
            __result247__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result247__;
        }
    }
    __result248__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_366;
void* __result249__;
void* __result250__;
void* result_367;
void* __result251__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_366,0,sizeof(void*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->head;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_367,0,sizeof(void*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_369;
void* __result252__;
void* __result253__;
void* result_370;
void* __result254__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(void*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_370,0,sizeof(void*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj76;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj76=self->v1;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj77;
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

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj78;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj78=self->v1;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result255__;
void* __right_value302 = (void*)0;
struct tuple2$2charphvoidp* result_379;
void* __right_value303 = (void*)0;
char* __dec_obj79;
struct tuple2$2charphvoidp* __result256__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_379=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj79=result_379->v1;
        result_379->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_379->v2=self->v2;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_379;
    come_call_finalizer3(result_379,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self){
unsigned int result_380;
    result_380=0;
    result_380+=int_get_hash_key(((int)self->v1));
    result_380+=int_get_hash_key(((int)self->v2));
    return result_380;
}

static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj80;
struct tuple2$2charphvoidp* __result257__;
    __dec_obj80=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj81;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj81=self->v1;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_381;
unsigned int hash_382;
unsigned int it_383;
void* __result259__;
void* __result260__;
void* __result261__;
void* __result262__;
default_value_381 = (void*)0;
    memset(&default_value_381,0,sizeof(void*));
    hash_382=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(        self->item_existance[it_383]) {
            if(            come_call_equals((void*)0, self->keys[it_383], ((char*)key))) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_383];
                come_call_finalizer3(default_value_381,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_383++;
            if(            it_383>=self->size) {
                it_383=0;
            }
            else if(            it_383==hash_382) {
                __result260__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_381);
                come_call_finalizer3(default_value_381,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_381);
            come_call_finalizer3(default_value_381,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_381);
    come_call_finalizer3(default_value_381,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj83;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_408;
int i_409;
void* __result264__;
void* default_value_410;
void* __result265__;
default_value_410 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_408=self->head;
    i_409=0;
    while(it_408!=((void*)0)) {
        if(        position==i_409) {
            __result264__ = gComeFunResultObject = __result_obj__ = it_408->item;
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
        it_408=it_408->next;
        i_409++;
    }
    memset(&default_value_410,0,sizeof(void*));
    __result265__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_410);
    come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj86;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj87;
struct sType* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj87=self->c_value;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj88=self->type;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj89=self->c_value_without_right_value_objects;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj90=self->c_value_without_cast_object_value;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
struct list_item$1CVALUEph* litem_420;
struct CVALUE* __dec_obj101;
void* __right_value355 = (void*)0;
struct list_item$1CVALUEph* litem_421;
struct CVALUE* __dec_obj102;
void* __right_value356 = (void*)0;
struct list_item$1CVALUEph* litem_422;
struct CVALUE* __dec_obj103;
struct list$1CVALUEph* __result268__;
    if(    self->len==0) {
        litem_420=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value354=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        __dec_obj101=litem_420->item;
        litem_420->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value355=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        __dec_obj102=litem_421->item;
        litem_421->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value356=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        __dec_obj103=litem_422->item;
        litem_422->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
struct sNullNode* __result270__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sNullNode")));
    (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value361 = (void*)0;
char* __dec_obj106;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj107;
_Bool __result272__;
    come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 216, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj106=come_value_423->c_value;
    come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=come_value_423->type;
    come_value_423->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 219, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_423->var=((void*)0);
    add_come_last_code(info,"%s",come_value_423->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
    __result272__ = (_Bool)1;
    come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj104;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj104=self->sname;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj105;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj105=self->sname;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value368 = (void*)0;
struct sNode* __result275__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 232, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value365=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 232, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result275__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value368=_inf_value1));
    come_call_finalizer3(__right_value365,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value368) ? __right_value368 = come_decrement_ref_count2(__right_value368, ((struct sNode*)__right_value368)->finalize, ((struct sNode*)__right_value368)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result273__;
void* __right_value366 = (void*)0;
struct sNullNode* result_424;
void* __right_value367 = (void*)0;
char* __dec_obj108;
struct sNullNode* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_424=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_424->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj108=result_424->sname;
        result_424->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_424->sline_real=self->sline_real;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_424;
    come_call_finalizer3(result_424,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
struct sNilNode* __result276__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sNilNode")));
    (__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value373 = (void*)0;
char* __dec_obj110;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sType* __dec_obj111;
_Bool __result278__;
    come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 249, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj110=come_value_425->c_value;
    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=come_value_425->type;
    come_value_425->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 252, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_425->type->mNullValue=(_Bool)1;
    come_value_425->var=((void*)0);
    add_come_last_code(info,"%s",come_value_425->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
    __result278__ = (_Bool)1;
    come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result278__;
}

static void sNilNode_finalize(struct sNilNode* self){
char* __dec_obj109;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj109=self->sname;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj112;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj113;
struct sAddNode* __result279__;
    ((struct sNodeBase*)(__right_value376=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value376,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj113=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sAddNode")));
    (__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_426;
_Bool Value_427;
void* __right_value380 = (void*)0;
struct CVALUE* left_value_428;
struct sNode* right_node_429;
_Bool Value_430;
_Bool __result281__;
void* __right_value381 = (void*)0;
struct CVALUE* right_value_431;
struct sType* type_432;
char* fun_name_433;
_Bool calling_fun_434;
void* __right_value382 = (void*)0;
struct sType* result_type_435;
void* __right_value383 = (void*)0;
struct sType* __dec_obj117;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value386 = (void*)0;
char* __dec_obj118;
void* __right_value387 = (void*)0;
struct sType* __dec_obj119;
_Bool __result282__;
memset(&calling_fun_434, 0, sizeof(_Bool));
    left_node_426=self->mLeft;
    Value_427=node_compile(left_node_426,info);
    if(    !Value_427) {
        return (_Bool)0;
    }
    else {
    }
    left_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_429=self->mRight;
    Value_430=node_compile(right_node_429,info);
    if(    !Value_430) {
        __result281__ = (_Bool)0;
        come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result281__;
    }
    else {
    }
    right_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_432=(struct sType*)come_increment_ref_count(left_value_428->type);
    fun_name_433="operator_add";
    if(    self->mQuote) {
        calling_fun_434=(_Bool)0;
    }
    else {
        calling_fun_434=operator_overload_fun(type_432,fun_name_433,left_value_428,right_value_431,(_Bool)0,info);
    }
    if(    !calling_fun_434) {
        result_type_435=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_428->type));
        if(        right_value_431->type->mPointerNum>0) {
            __dec_obj117=result_type_435;
            result_type_435=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_431->type));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 318, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj118=come_value_436->c_value;
        come_value_436->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_428->c_value,right_value_431->c_value));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj119=come_value_436->type;
        come_value_436->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_435));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_436->type->mHeap=(_Bool)0;
        come_value_436->var=((void*)0);
        add_come_last_code(info,"%s",come_value_436->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
        come_call_finalizer3(result_type_435,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result282__ = (_Bool)1;
    come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result282__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj114;
struct sNode* __dec_obj115;
struct sNode* __dec_obj116;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj114=self->sname;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj115=self->mLeft;
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj116=self->mRight;
            if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj121;
struct sSubNode* __result283__;
    ((struct sNodeBase*)(__right_value388=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value388,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj121=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
char* __result284__;
    __result284__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value391=__builtin_string("sSubNode")));
    (__right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result284__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_437;
_Bool Value_438;
void* __right_value392 = (void*)0;
struct CVALUE* left_value_439;
struct sNode* right_node_440;
_Bool Value_441;
_Bool __result285__;
void* __right_value393 = (void*)0;
struct CVALUE* right_value_442;
struct sType* type_443;
char* fun_name_444;
_Bool calling_fun_445;
void* __right_value394 = (void*)0;
struct sType* result_type_446;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj125;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value399 = (void*)0;
char* __dec_obj126;
void* __right_value400 = (void*)0;
struct sType* __dec_obj127;
_Bool __result286__;
memset(&calling_fun_445, 0, sizeof(_Bool));
    left_node_437=self->mLeft;
    Value_438=node_compile(left_node_437,info);
    if(    !Value_438) {
        return (_Bool)0;
    }
    else {
    }
    left_value_439=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_440=self->mRight;
    Value_441=node_compile(right_node_440,info);
    if(    !Value_441) {
        __result285__ = (_Bool)0;
        come_call_finalizer3(left_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result285__;
    }
    else {
    }
    right_value_442=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_443=(struct sType*)come_increment_ref_count(left_value_439->type);
    fun_name_444="operator_sub";
    if(    self->mQuote) {
        calling_fun_445=(_Bool)0;
    }
    else {
        calling_fun_445=operator_overload_fun(type_443,fun_name_444,left_value_439,right_value_442,(_Bool)0,info);
    }
    if(    !calling_fun_445) {
        result_type_446=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_439->type));
        if(        left_value_439->type->mPointerNum>0&&right_value_442->type->mPointerNum>0) {
            __dec_obj125=result_type_446;
            result_type_446=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 385, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_447=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 388, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj126=come_value_447->c_value;
        come_value_447->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_439->c_value,right_value_442->c_value));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj127=come_value_447->type;
        come_value_447->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_446));
        come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_447->type->mHeap=(_Bool)0;
        come_value_447->var=((void*)0);
        add_come_last_code(info,"%s",come_value_447->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_447));
        come_call_finalizer3(result_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result286__ = (_Bool)1;
    come_call_finalizer3(left_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_443,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result286__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj122;
struct sNode* __dec_obj123;
struct sNode* __dec_obj124;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj122=self->sname;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj123=self->mLeft;
            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj124=self->mRight;
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value403 = (void*)0;
struct sNode* __dec_obj129;
struct sMultNode* __result287__;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result288__;
    __result288__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sMultNode")));
    (__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_448;
_Bool Value_449;
void* __right_value405 = (void*)0;
struct CVALUE* left_value_450;
struct sNode* right_node_451;
_Bool Value_452;
_Bool __result289__;
void* __right_value406 = (void*)0;
struct CVALUE* right_value_453;
struct sType* type_454;
char* fun_name_455;
_Bool calling_fun_456;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value409 = (void*)0;
char* __dec_obj133;
void* __right_value410 = (void*)0;
struct sType* __dec_obj134;
_Bool __result290__;
memset(&calling_fun_456, 0, sizeof(_Bool));
    left_node_448=self->mLeft;
    Value_449=node_compile(left_node_448,info);
    if(    !Value_449) {
        return (_Bool)0;
    }
    else {
    }
    left_value_450=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_451=self->mRight;
    Value_452=node_compile(right_node_451,info);
    if(    !Value_452) {
        __result289__ = (_Bool)0;
        come_call_finalizer3(left_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result289__;
    }
    else {
    }
    right_value_453=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_454=(struct sType*)come_increment_ref_count(left_value_450->type);
    fun_name_455="operator_mult";
    if(    self->mQuote) {
        calling_fun_456=(_Bool)0;
    }
    else {
        calling_fun_456=operator_overload_fun(type_454,fun_name_455,left_value_450,right_value_453,(_Bool)0,info);
    }
    if(    !calling_fun_456) {
        come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 453, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj133=come_value_457->c_value;
        come_value_457->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_450->c_value,right_value_453->c_value));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj134=come_value_457->type;
        come_value_457->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_450->type));
        come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_457->type->mHeap=(_Bool)0;
        come_value_457->var=((void*)0);
        add_come_last_code(info,"%s",come_value_457->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
        come_call_finalizer3(come_value_457,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result290__ = (_Bool)1;
    come_call_finalizer3(left_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_453,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj130;
struct sNode* __dec_obj131;
struct sNode* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj130=self->sname;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj131=self->mLeft;
            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj132=self->mRight;
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj136;
struct sDivNode* __result291__;
    ((struct sNodeBase*)(__right_value411=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value411,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj135=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj136=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("sDivNode")));
    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_458;
_Bool Value_459;
void* __right_value415 = (void*)0;
struct CVALUE* left_value_460;
struct sNode* right_node_461;
_Bool Value_462;
_Bool __result293__;
void* __right_value416 = (void*)0;
struct CVALUE* right_value_463;
struct sType* type_464;
char* fun_name_465;
_Bool calling_fun_466;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_467;
void* __right_value419 = (void*)0;
char* __dec_obj140;
void* __right_value420 = (void*)0;
struct sType* __dec_obj141;
_Bool __result294__;
memset(&calling_fun_466, 0, sizeof(_Bool));
    left_node_458=self->mLeft;
    Value_459=node_compile(left_node_458,info);
    if(    !Value_459) {
        return (_Bool)0;
    }
    else {
    }
    left_value_460=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_461=self->mRight;
    Value_462=node_compile(right_node_461,info);
    if(    !Value_462) {
        __result293__ = (_Bool)0;
        come_call_finalizer3(left_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result293__;
    }
    else {
    }
    right_value_463=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_464=(struct sType*)come_increment_ref_count(left_value_460->type);
    fun_name_465="operator_div";
    if(    self->mQuote) {
        calling_fun_466=(_Bool)0;
    }
    else {
        calling_fun_466=operator_overload_fun(type_464,fun_name_465,left_value_460,right_value_463,(_Bool)0,info);
    }
    if(    !calling_fun_466) {
        come_value_467=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 518, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj140=come_value_467->c_value;
        come_value_467->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_460->c_value,right_value_463->c_value));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj141=come_value_467->type;
        come_value_467->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_460->type));
        come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_467->type->mHeap=(_Bool)0;
        come_value_467->var=((void*)0);
        add_come_last_code(info,"%s",come_value_467->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_467));
        come_call_finalizer3(come_value_467,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result294__ = (_Bool)1;
    come_call_finalizer3(left_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result294__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj137;
struct sNode* __dec_obj138;
struct sNode* __dec_obj139;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj137=self->sname;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj138=self->mLeft;
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj139=self->mRight;
            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj143;
struct sModNode* __result295__;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj142=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj143=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value424=__builtin_string("sModNode")));
    (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_468;
_Bool Value_469;
void* __right_value425 = (void*)0;
struct CVALUE* left_value_470;
struct sNode* right_node_471;
_Bool Value_472;
_Bool __result297__;
void* __right_value426 = (void*)0;
struct CVALUE* right_value_473;
struct sType* type_474;
char* fun_name_475;
_Bool calling_fun_476;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value429 = (void*)0;
char* __dec_obj147;
void* __right_value430 = (void*)0;
struct sType* __dec_obj148;
_Bool __result298__;
memset(&calling_fun_476, 0, sizeof(_Bool));
    left_node_468=self->mLeft;
    Value_469=node_compile(left_node_468,info);
    if(    !Value_469) {
        return (_Bool)0;
    }
    else {
    }
    left_value_470=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_471=self->mRight;
    Value_472=node_compile(right_node_471,info);
    if(    !Value_472) {
        __result297__ = (_Bool)0;
        come_call_finalizer3(left_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result297__;
    }
    else {
    }
    right_value_473=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_474=(struct sType*)come_increment_ref_count(left_value_470->type);
    fun_name_475="operator_mod";
    if(    self->mQuote) {
        calling_fun_476=(_Bool)0;
    }
    else {
        calling_fun_476=operator_overload_fun(type_474,fun_name_475,left_value_470,right_value_473,(_Bool)0,info);
    }
    if(    !calling_fun_476) {
        come_value_477=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 583, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj147=come_value_477->c_value;
        come_value_477->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_470->c_value,right_value_473->c_value));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj148=come_value_477->type;
        come_value_477->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_470->type));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_477->type->mHeap=(_Bool)0;
        come_value_477->var=((void*)0);
        add_come_last_code(info,"%s",come_value_477->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_477));
        come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result298__ = (_Bool)1;
    come_call_finalizer3(left_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_474,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj144;
struct sNode* __dec_obj145;
struct sNode* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj145=self->mLeft;
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj146=self->mRight;
            if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value433 = (void*)0;
struct sNode* __dec_obj150;
struct sLShiftNode* __result299__;
    ((struct sNodeBase*)(__right_value431=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value431,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj149=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj150=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value434=__builtin_string("sLShiftNode")));
    (__right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_478;
_Bool Value_479;
void* __right_value435 = (void*)0;
struct CVALUE* left_value_480;
struct sNode* right_node_481;
_Bool Value_482;
_Bool __result301__;
void* __right_value436 = (void*)0;
struct CVALUE* right_value_483;
struct sType* type_484;
char* fun_name_485;
_Bool calling_fun_486;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct CVALUE* come_value_487;
void* __right_value439 = (void*)0;
char* __dec_obj154;
void* __right_value440 = (void*)0;
struct sType* __dec_obj155;
_Bool __result302__;
memset(&calling_fun_486, 0, sizeof(_Bool));
    left_node_478=self->mLeft;
    Value_479=node_compile(left_node_478,info);
    if(    !Value_479) {
        return (_Bool)0;
    }
    else {
    }
    left_value_480=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_481=self->mRight;
    Value_482=node_compile(right_node_481,info);
    if(    !Value_482) {
        __result301__ = (_Bool)0;
        come_call_finalizer3(left_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result301__;
    }
    else {
    }
    right_value_483=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_484=(struct sType*)come_increment_ref_count(left_value_480->type);
    fun_name_485="operator_lshift";
    if(    self->mQuote) {
        calling_fun_486=(_Bool)0;
    }
    else {
        calling_fun_486=operator_overload_fun(type_484,fun_name_485,left_value_480,right_value_483,(_Bool)0,info);
    }
    if(    !calling_fun_486) {
        come_value_487=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 649, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj154=come_value_487->c_value;
        come_value_487->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_480->c_value,right_value_483->c_value));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj155=come_value_487->type;
        come_value_487->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_480->type));
        come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_487->type->mHeap=(_Bool)0;
        come_value_487->var=((void*)0);
        add_come_last_code(info,"%s",come_value_487->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_487));
        come_call_finalizer3(come_value_487,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result302__ = (_Bool)1;
    come_call_finalizer3(left_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj151;
struct sNode* __dec_obj152;
struct sNode* __dec_obj153;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj152=self->mLeft;
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj153=self->mRight;
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value443 = (void*)0;
struct sNode* __dec_obj157;
struct sRShiftNode* __result303__;
    ((struct sNodeBase*)(__right_value441=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value441,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj156=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj157=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value444=__builtin_string("sRShiftNode")));
    (__right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_488;
_Bool Value_489;
void* __right_value445 = (void*)0;
struct CVALUE* left_value_490;
struct sNode* right_node_491;
_Bool Value_492;
_Bool __result305__;
void* __right_value446 = (void*)0;
struct CVALUE* right_value_493;
struct sType* type_494;
char* fun_name_495;
_Bool calling_fun_496;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value449 = (void*)0;
char* __dec_obj161;
void* __right_value450 = (void*)0;
struct sType* __dec_obj162;
_Bool __result306__;
memset(&calling_fun_496, 0, sizeof(_Bool));
    left_node_488=self->mLeft;
    Value_489=node_compile(left_node_488,info);
    if(    !Value_489) {
        return (_Bool)0;
    }
    else {
    }
    left_value_490=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_491=self->mRight;
    Value_492=node_compile(right_node_491,info);
    if(    !Value_492) {
        __result305__ = (_Bool)0;
        come_call_finalizer3(left_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result305__;
    }
    else {
    }
    right_value_493=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_494=(struct sType*)come_increment_ref_count(left_value_490->type);
    fun_name_495="operator_rshift";
    if(    self->mQuote) {
        calling_fun_496=(_Bool)0;
    }
    else {
        calling_fun_496=operator_overload_fun(type_494,fun_name_495,left_value_490,right_value_493,(_Bool)0,info);
    }
    if(    !calling_fun_496) {
        come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 714, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj161=come_value_497->c_value;
        come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_490->c_value,right_value_493->c_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj162=come_value_497->type;
        come_value_497->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_490->type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_497->type->mHeap=(_Bool)0;
        come_value_497->var=((void*)0);
        add_come_last_code(info,"%s",come_value_497->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
        come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result306__ = (_Bool)1;
    come_call_finalizer3(left_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result306__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj158;
struct sNode* __dec_obj159;
struct sNode* __dec_obj160;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj158=self->sname;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj159=self->mLeft;
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj160=self->mRight;
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value453 = (void*)0;
struct sNode* __dec_obj164;
struct sGtEqNode* __result307__;
    ((struct sNodeBase*)(__right_value451=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value451,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj163=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj164=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value454 = (void*)0;
char* __result308__;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value454=__builtin_string("sGtEqNode")));
    (__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_498;
_Bool Value_499;
void* __right_value455 = (void*)0;
struct CVALUE* left_value_500;
struct sNode* right_node_501;
_Bool Value_502;
_Bool __result309__;
void* __right_value456 = (void*)0;
struct CVALUE* right_value_503;
struct sType* type_504;
char* fun_name_505;
_Bool calling_fun_506;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value459 = (void*)0;
char* __dec_obj168;
void* __right_value460 = (void*)0;
struct sType* __dec_obj169;
_Bool __result310__;
memset(&calling_fun_506, 0, sizeof(_Bool));
    left_node_498=self->mLeft;
    Value_499=node_compile(left_node_498,info);
    if(    !Value_499) {
        return (_Bool)0;
    }
    else {
    }
    left_value_500=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_501=self->mRight;
    Value_502=node_compile(right_node_501,info);
    if(    !Value_502) {
        __result309__ = (_Bool)0;
        come_call_finalizer3(left_value_500,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result309__;
    }
    else {
    }
    right_value_503=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_504=(struct sType*)come_increment_ref_count(left_value_500->type);
    fun_name_505="operator_gteq";
    if(    self->mQuote) {
        calling_fun_506=(_Bool)0;
    }
    else {
        calling_fun_506=operator_overload_fun(type_504,fun_name_505,left_value_500,right_value_503,(_Bool)0,info);
    }
    if(    !calling_fun_506) {
        come_value_507=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 779, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj168=come_value_507->c_value;
        come_value_507->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_500->c_value,right_value_503->c_value));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj169=come_value_507->type;
        come_value_507->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_500->type));
        come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_507->type->mHeap=(_Bool)0;
        come_value_507->var=((void*)0);
        add_come_last_code(info,"%s",come_value_507->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_507));
        come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result310__ = (_Bool)1;
    come_call_finalizer3(left_value_500,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result310__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj165;
struct sNode* __dec_obj166;
struct sNode* __dec_obj167;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj165=self->sname;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj166=self->mLeft;
            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj167=self->mRight;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj170;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj171;
struct sLtEqNode* __result311__;
    ((struct sNodeBase*)(__right_value461=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value461,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj170=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj171=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value464=__builtin_string("sLtEqNode")));
    (__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_508;
_Bool Value_509;
void* __right_value465 = (void*)0;
struct CVALUE* left_value_510;
struct sNode* right_node_511;
_Bool Value_512;
_Bool __result313__;
void* __right_value466 = (void*)0;
struct CVALUE* right_value_513;
struct sType* type_514;
char* fun_name_515;
_Bool calling_fun_516;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct CVALUE* come_value_517;
void* __right_value469 = (void*)0;
char* __dec_obj175;
void* __right_value470 = (void*)0;
struct sType* __dec_obj176;
_Bool __result314__;
memset(&calling_fun_516, 0, sizeof(_Bool));
    left_node_508=self->mLeft;
    Value_509=node_compile(left_node_508,info);
    if(    !Value_509) {
        return (_Bool)0;
    }
    else {
    }
    left_value_510=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_511=self->mRight;
    Value_512=node_compile(right_node_511,info);
    if(    !Value_512) {
        __result313__ = (_Bool)0;
        come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result313__;
    }
    else {
    }
    right_value_513=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_514=(struct sType*)come_increment_ref_count(left_value_510->type);
    fun_name_515="operator_lteq";
    if(    self->mQuote) {
        calling_fun_516=(_Bool)0;
    }
    else {
        calling_fun_516=operator_overload_fun(type_514,fun_name_515,left_value_510,right_value_513,(_Bool)0,info);
    }
    if(    !calling_fun_516) {
        come_value_517=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 844, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj175=come_value_517->c_value;
        come_value_517->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_510->c_value,right_value_513->c_value));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj176=come_value_517->type;
        come_value_517->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_510->type));
        come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_517->type->mHeap=(_Bool)0;
        come_value_517->var=((void*)0);
        add_come_last_code(info,"%s",come_value_517->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_517));
        come_call_finalizer3(come_value_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result314__ = (_Bool)1;
    come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result314__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj172;
struct sNode* __dec_obj173;
struct sNode* __dec_obj174;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj172=self->sname;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj173=self->mLeft;
            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj174=self->mRight;
            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj178;
struct sLtNode* __result315__;
    ((struct sNodeBase*)(__right_value471=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value471,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj177=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj178=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
char* __result316__;
    __result316__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value474=__builtin_string("sLtNode")));
    (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_518;
_Bool Value_519;
void* __right_value475 = (void*)0;
struct CVALUE* left_value_520;
struct sNode* right_node_521;
_Bool Value_522;
_Bool __result317__;
void* __right_value476 = (void*)0;
struct CVALUE* right_value_523;
struct sType* type_524;
char* fun_name_525;
_Bool calling_fun_526;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct CVALUE* come_value_527;
void* __right_value479 = (void*)0;
char* __dec_obj182;
void* __right_value480 = (void*)0;
struct sType* __dec_obj183;
_Bool __result318__;
memset(&calling_fun_526, 0, sizeof(_Bool));
    left_node_518=self->mLeft;
    Value_519=node_compile(left_node_518,info);
    if(    !Value_519) {
        return (_Bool)0;
    }
    else {
    }
    left_value_520=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_521=self->mRight;
    Value_522=node_compile(right_node_521,info);
    if(    !Value_522) {
        __result317__ = (_Bool)0;
        come_call_finalizer3(left_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result317__;
    }
    else {
    }
    right_value_523=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_524=(struct sType*)come_increment_ref_count(left_value_520->type);
    fun_name_525="operator_lt";
    if(    self->mQuote) {
        calling_fun_526=(_Bool)0;
    }
    else {
        calling_fun_526=operator_overload_fun(type_524,fun_name_525,left_value_520,right_value_523,(_Bool)0,info);
    }
    if(    !calling_fun_526) {
        come_value_527=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 909, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj182=come_value_527->c_value;
        come_value_527->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_520->c_value,right_value_523->c_value));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj183=come_value_527->type;
        come_value_527->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_520->type));
        come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_527->type->mHeap=(_Bool)0;
        come_value_527->var=((void*)0);
        add_come_last_code(info,"%s",come_value_527->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_527));
        come_call_finalizer3(come_value_527,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result318__ = (_Bool)1;
    come_call_finalizer3(left_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj179;
struct sNode* __dec_obj180;
struct sNode* __dec_obj181;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj180=self->mLeft;
            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj181=self->mRight;
            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj185;
struct sGtNode* __result319__;
    ((struct sNodeBase*)(__right_value481=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value481,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj184=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj185=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value484 = (void*)0;
char* __result320__;
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value484=__builtin_string("sGtNode")));
    (__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_528;
_Bool Value_529;
void* __right_value485 = (void*)0;
struct CVALUE* left_value_530;
struct sNode* right_node_531;
_Bool Value_532;
_Bool __result321__;
void* __right_value486 = (void*)0;
struct CVALUE* right_value_533;
struct sType* type_534;
char* fun_name_535;
_Bool calling_fun_536;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_537;
void* __right_value489 = (void*)0;
char* __dec_obj189;
void* __right_value490 = (void*)0;
struct sType* __dec_obj190;
_Bool __result322__;
memset(&calling_fun_536, 0, sizeof(_Bool));
    left_node_528=self->mLeft;
    Value_529=node_compile(left_node_528,info);
    if(    !Value_529) {
        return (_Bool)0;
    }
    else {
    }
    left_value_530=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_531=self->mRight;
    Value_532=node_compile(right_node_531,info);
    if(    !Value_532) {
        __result321__ = (_Bool)0;
        come_call_finalizer3(left_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result321__;
    }
    else {
    }
    right_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_534=(struct sType*)come_increment_ref_count(left_value_530->type);
    fun_name_535="operator_gt";
    if(    self->mQuote) {
        calling_fun_536=(_Bool)0;
    }
    else {
        calling_fun_536=operator_overload_fun(type_534,fun_name_535,left_value_530,right_value_533,(_Bool)0,info);
    }
    if(    !calling_fun_536) {
        come_value_537=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 974, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj189=come_value_537->c_value;
        come_value_537->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_530->c_value,right_value_533->c_value));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj190=come_value_537->type;
        come_value_537->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_530->type));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_537->type->mHeap=(_Bool)0;
        come_value_537->var=((void*)0);
        add_come_last_code(info,"%s",come_value_537->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_537));
        come_call_finalizer3(come_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result322__ = (_Bool)1;
    come_call_finalizer3(left_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result322__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj186;
struct sNode* __dec_obj187;
struct sNode* __dec_obj188;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj187=self->mLeft;
            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj188=self->mRight;
            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj192;
struct sEqNode* __result323__;
    ((struct sNodeBase*)(__right_value491=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value491,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj191=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj192=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value494 = (void*)0;
char* __result324__;
    __result324__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value494=__builtin_string("sEqNode")));
    (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result324__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_538;
_Bool Value_539;
void* __right_value495 = (void*)0;
struct CVALUE* left_value_540;
struct sNode* right_node_541;
_Bool Value_542;
_Bool __result325__;
void* __right_value496 = (void*)0;
struct CVALUE* right_value_543;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_544;
void* __right_value499 = (void*)0;
char* __dec_obj196;
void* __right_value500 = (void*)0;
struct sType* __dec_obj197;
_Bool __result326__;
    left_node_538=self->mLeft;
    Value_539=node_compile(left_node_538,info);
    if(    !Value_539) {
        return (_Bool)0;
    }
    else {
    }
    left_value_540=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_541=self->mRight;
    Value_542=node_compile(right_node_541,info);
    if(    !Value_542) {
        __result325__ = (_Bool)0;
        come_call_finalizer3(left_value_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result325__;
    }
    else {
    }
    right_value_543=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_544=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1027, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj196=come_value_544->c_value;
    come_value_544->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_540->c_value,right_value_543->c_value));
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=come_value_544->type;
    come_value_544->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_540->type));
    come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_544->type->mHeap=(_Bool)0;
    come_value_544->var=((void*)0);
    add_come_last_code(info,"%s",come_value_544->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_544));
    __result326__ = (_Bool)1;
    come_call_finalizer3(left_value_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_543,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result326__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj193;
struct sNode* __dec_obj194;
struct sNode* __dec_obj195;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj193=self->sname;
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj194=self->mLeft;
            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj195=self->mRight;
            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj199;
struct sNotEqNode* __result327__;
    ((struct sNodeBase*)(__right_value501=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value501,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj198=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj199=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value504 = (void*)0;
char* __result328__;
    __result328__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value504=__builtin_string("sNotEqNode")));
    (__right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result328__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_545;
_Bool Value_546;
void* __right_value505 = (void*)0;
struct CVALUE* left_value_547;
struct sNode* right_node_548;
_Bool Value_549;
_Bool __result329__;
void* __right_value506 = (void*)0;
struct CVALUE* right_value_550;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct CVALUE* come_value_551;
void* __right_value509 = (void*)0;
char* __dec_obj203;
void* __right_value510 = (void*)0;
struct sType* __dec_obj204;
_Bool __result330__;
    left_node_545=self->mLeft;
    Value_546=node_compile(left_node_545,info);
    if(    !Value_546) {
        return (_Bool)0;
    }
    else {
    }
    left_value_547=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_548=self->mRight;
    Value_549=node_compile(right_node_548,info);
    if(    !Value_549) {
        __result329__ = (_Bool)0;
        come_call_finalizer3(left_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result329__;
    }
    else {
    }
    right_value_550=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_551=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1079, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj203=come_value_551->c_value;
    come_value_551->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_547->c_value,right_value_550->c_value));
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=come_value_551->type;
    come_value_551->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_547->type));
    come_call_finalizer3(__dec_obj204,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_551->type->mHeap=(_Bool)0;
    come_value_551->var=((void*)0);
    add_come_last_code(info,"%s",come_value_551->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_551));
    __result330__ = (_Bool)1;
    come_call_finalizer3(left_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result330__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj200;
struct sNode* __dec_obj201;
struct sNode* __dec_obj202;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj200=self->sname;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj201=self->mLeft;
            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj202=self->mRight;
            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj206;
struct sEq2Node* __result331__;
    ((struct sNodeBase*)(__right_value511=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value511,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj205=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj206=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value514 = (void*)0;
char* __result332__;
    __result332__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value514=__builtin_string("sEq2Node")));
    (__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result332__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_552;
_Bool Value_553;
void* __right_value515 = (void*)0;
struct CVALUE* left_value_554;
struct sNode* right_node_555;
_Bool Value_556;
_Bool __result333__;
void* __right_value516 = (void*)0;
struct CVALUE* right_value_557;
struct sType* type_558;
char* fun_name_559;
_Bool calling_fun_560;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct CVALUE* come_value_561;
void* __right_value519 = (void*)0;
char* __dec_obj210;
void* __right_value520 = (void*)0;
struct sType* __dec_obj211;
_Bool __result334__;
memset(&calling_fun_560, 0, sizeof(_Bool));
    left_node_552=self->mLeft;
    Value_553=node_compile(left_node_552,info);
    if(    !Value_553) {
        return (_Bool)0;
    }
    else {
    }
    left_value_554=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_555=self->mRight;
    Value_556=node_compile(right_node_555,info);
    if(    !Value_556) {
        __result333__ = (_Bool)0;
        come_call_finalizer3(left_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result333__;
    }
    else {
    }
    right_value_557=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_558=(struct sType*)come_increment_ref_count(left_value_554->type);
    fun_name_559="operator_equals";
    if(    self->mQuote) {
        calling_fun_560=(_Bool)0;
    }
    else {
        calling_fun_560=operator_overload_fun(type_558,fun_name_559,left_value_554,right_value_557,(_Bool)0,info);
    }
    if(    !calling_fun_560) {
        come_value_561=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1144, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj210=come_value_561->c_value;
        come_value_561->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_554->c_value,right_value_557->c_value));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj211=come_value_561->type;
        come_value_561->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_554->type));
        come_call_finalizer3(__dec_obj211,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_561->type->mHeap=(_Bool)0;
        come_value_561->var=((void*)0);
        add_come_last_code(info,"%s",come_value_561->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_561));
        come_call_finalizer3(come_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result334__ = (_Bool)1;
    come_call_finalizer3(left_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result334__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj207;
struct sNode* __dec_obj208;
struct sNode* __dec_obj209;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj207=self->sname;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj208=self->mLeft;
            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj209=self->mRight;
            if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj212;
void* __right_value523 = (void*)0;
struct sNode* __dec_obj213;
struct sNotEq2Node* __result335__;
    ((struct sNodeBase*)(__right_value521=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value521,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj212=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj213=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value524 = (void*)0;
char* __result336__;
    __result336__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value524=__builtin_string("sNotEq2Node")));
    (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result336__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_562;
_Bool Value_563;
void* __right_value525 = (void*)0;
struct CVALUE* left_value_564;
struct sNode* right_node_565;
_Bool Value_566;
_Bool __result337__;
void* __right_value526 = (void*)0;
struct CVALUE* right_value_567;
struct sType* type_568;
char* fun_name_569;
_Bool calling_fun_570;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct CVALUE* come_value_571;
void* __right_value529 = (void*)0;
char* __dec_obj217;
void* __right_value530 = (void*)0;
struct sType* __dec_obj218;
_Bool __result338__;
memset(&calling_fun_570, 0, sizeof(_Bool));
    left_node_562=self->mLeft;
    Value_563=node_compile(left_node_562,info);
    if(    !Value_563) {
        return (_Bool)0;
    }
    else {
    }
    left_value_564=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_565=self->mRight;
    Value_566=node_compile(right_node_565,info);
    if(    !Value_566) {
        __result337__ = (_Bool)0;
        come_call_finalizer3(left_value_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result337__;
    }
    else {
    }
    right_value_567=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_568=(struct sType*)come_increment_ref_count(left_value_564->type);
    fun_name_569="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_570=(_Bool)0;
    }
    else {
        calling_fun_570=operator_overload_fun(type_568,fun_name_569,left_value_564,right_value_567,(_Bool)0,info);
    }
    if(    !calling_fun_570) {
        come_value_571=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1209, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj217=come_value_571->c_value;
        come_value_571->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_564->c_value,right_value_567->c_value));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj218=come_value_571->type;
        come_value_571->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_564->type));
        come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_571->type->mHeap=(_Bool)0;
        come_value_571->var=((void*)0);
        add_come_last_code(info,"%s",come_value_571->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_571));
        come_call_finalizer3(come_value_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result338__ = (_Bool)1;
    come_call_finalizer3(left_value_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result338__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj214;
struct sNode* __dec_obj215;
struct sNode* __dec_obj216;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj214=self->sname;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj215=self->mLeft;
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj216=self->mRight;
            if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj219;
void* __right_value533 = (void*)0;
struct sNode* __dec_obj220;
struct sAndNode* __result339__;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value531,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj219=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj220=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value534 = (void*)0;
char* __result340__;
    __result340__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value534=__builtin_string("sAndNode")));
    (__right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result340__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_572;
_Bool Value_573;
void* __right_value535 = (void*)0;
struct CVALUE* left_value_574;
struct sNode* right_node_575;
_Bool Value_576;
_Bool __result341__;
void* __right_value536 = (void*)0;
struct CVALUE* right_value_577;
struct sType* type_578;
char* fun_name_579;
_Bool calling_fun_580;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_581;
void* __right_value539 = (void*)0;
char* __dec_obj224;
void* __right_value540 = (void*)0;
struct sType* __dec_obj225;
_Bool __result342__;
memset(&calling_fun_580, 0, sizeof(_Bool));
    left_node_572=self->mLeft;
    Value_573=node_compile(left_node_572,info);
    if(    !Value_573) {
        return (_Bool)0;
    }
    else {
    }
    left_value_574=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_575=self->mRight;
    Value_576=node_compile(right_node_575,info);
    if(    !Value_576) {
        __result341__ = (_Bool)0;
        come_call_finalizer3(left_value_574,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result341__;
    }
    else {
    }
    right_value_577=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_578=(struct sType*)come_increment_ref_count(left_value_574->type);
    fun_name_579="operator_and";
    if(    self->mQuote) {
        calling_fun_580=(_Bool)0;
    }
    else {
        calling_fun_580=operator_overload_fun(type_578,fun_name_579,left_value_574,right_value_577,(_Bool)0,info);
    }
    if(    !calling_fun_580) {
        come_value_581=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1275, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj224=come_value_581->c_value;
        come_value_581->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_574->c_value,right_value_577->c_value));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj225=come_value_581->type;
        come_value_581->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_574->type));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_581->type->mHeap=(_Bool)0;
        come_value_581->var=((void*)0);
        add_come_last_code(info,"%s",come_value_581->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_581));
        come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result342__ = (_Bool)1;
    come_call_finalizer3(left_value_574,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_578,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result342__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj221;
struct sNode* __dec_obj222;
struct sNode* __dec_obj223;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj221=self->sname;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj222=self->mLeft;
            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj223=self->mRight;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj226;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj227;
struct sXOrNode* __result343__;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value541,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj226=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj227=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
char* __result344__;
    __result344__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value544=__builtin_string("sXOrNode")));
    (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result344__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_582;
_Bool Value_583;
void* __right_value545 = (void*)0;
struct CVALUE* left_value_584;
struct sNode* right_node_585;
_Bool Value_586;
_Bool __result345__;
void* __right_value546 = (void*)0;
struct CVALUE* right_value_587;
struct sType* type_588;
char* fun_name_589;
_Bool calling_fun_590;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_591;
void* __right_value549 = (void*)0;
char* __dec_obj231;
void* __right_value550 = (void*)0;
struct sType* __dec_obj232;
_Bool __result346__;
memset(&calling_fun_590, 0, sizeof(_Bool));
    left_node_582=self->mLeft;
    Value_583=node_compile(left_node_582,info);
    if(    !Value_583) {
        return (_Bool)0;
    }
    else {
    }
    left_value_584=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_585=self->mRight;
    Value_586=node_compile(right_node_585,info);
    if(    !Value_586) {
        __result345__ = (_Bool)0;
        come_call_finalizer3(left_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result345__;
    }
    else {
    }
    right_value_587=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_588=(struct sType*)come_increment_ref_count(left_value_584->type);
    fun_name_589="operator_xor";
    if(    self->mQuote) {
        calling_fun_590=(_Bool)0;
    }
    else {
        calling_fun_590=operator_overload_fun(type_588,fun_name_589,left_value_584,right_value_587,(_Bool)0,info);
    }
    if(    !calling_fun_590) {
        come_value_591=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1340, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj231=come_value_591->c_value;
        come_value_591->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_584->c_value,right_value_587->c_value));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj232=come_value_591->type;
        come_value_591->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_584->type));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_591->type->mHeap=(_Bool)0;
        come_value_591->var=((void*)0);
        add_come_last_code(info,"%s",come_value_591->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_591));
        come_call_finalizer3(come_value_591,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result346__ = (_Bool)1;
    come_call_finalizer3(left_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result346__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj228;
struct sNode* __dec_obj229;
struct sNode* __dec_obj230;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj228=self->sname;
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj229=self->mLeft;
            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj230=self->mRight;
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj233;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj234;
struct sOrNode* __result347__;
    ((struct sNodeBase*)(__right_value551=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value551,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj233=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj234=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value554 = (void*)0;
char* __result348__;
    __result348__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value554=__builtin_string("sOrNode")));
    (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result348__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_592;
_Bool Value_593;
void* __right_value555 = (void*)0;
struct CVALUE* left_value_594;
struct sNode* right_node_595;
_Bool Value_596;
_Bool __result349__;
void* __right_value556 = (void*)0;
struct CVALUE* right_value_597;
struct sType* type_598;
char* fun_name_599;
_Bool calling_fun_600;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_601;
void* __right_value559 = (void*)0;
char* __dec_obj238;
void* __right_value560 = (void*)0;
struct sType* __dec_obj239;
_Bool __result350__;
memset(&calling_fun_600, 0, sizeof(_Bool));
    left_node_592=self->mLeft;
    Value_593=node_compile(left_node_592,info);
    if(    !Value_593) {
        return (_Bool)0;
    }
    else {
    }
    left_value_594=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_595=self->mRight;
    Value_596=node_compile(right_node_595,info);
    if(    !Value_596) {
        __result349__ = (_Bool)0;
        come_call_finalizer3(left_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result349__;
    }
    else {
    }
    right_value_597=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_598=(struct sType*)come_increment_ref_count(left_value_594->type);
    fun_name_599="operator_or";
    if(    self->mQuote) {
        calling_fun_600=(_Bool)0;
    }
    else {
        calling_fun_600=operator_overload_fun(type_598,fun_name_599,left_value_594,right_value_597,(_Bool)0,info);
    }
    if(    !calling_fun_600) {
        come_value_601=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1406, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj238=come_value_601->c_value;
        come_value_601->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_594->c_value,right_value_597->c_value));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj239=come_value_601->type;
        come_value_601->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_594->type));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_601->type->mHeap=(_Bool)0;
        come_value_601->var=((void*)0);
        add_come_last_code(info,"%s",come_value_601->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_601));
        come_call_finalizer3(come_value_601,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result350__ = (_Bool)1;
    come_call_finalizer3(left_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj235;
struct sNode* __dec_obj236;
struct sNode* __dec_obj237;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj235=self->sname;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj236=self->mLeft;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj237=self->mRight;
            if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj240;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj241;
struct sAndAndNode* __result351__;
    ((struct sNodeBase*)(__right_value561=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value561,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj240=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj241=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
char* __result352__;
    __result352__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value564=__builtin_string("sAndAndNode")));
    (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result352__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_602;
_Bool Value_603;
void* __right_value565 = (void*)0;
struct CVALUE* left_value_604;
struct sNode* right_node_605;
_Bool Value_606;
_Bool __result353__;
void* __right_value566 = (void*)0;
struct CVALUE* right_value_607;
struct sType* type_608;
char* fun_name_609;
_Bool calling_fun_610;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct CVALUE* come_value_611;
void* __right_value569 = (void*)0;
char* __dec_obj245;
void* __right_value570 = (void*)0;
struct sType* __dec_obj246;
_Bool __result354__;
memset(&calling_fun_610, 0, sizeof(_Bool));
    left_node_602=self->mLeft;
    Value_603=node_compile(left_node_602,info);
    if(    !Value_603) {
        return (_Bool)0;
    }
    else {
    }
    left_value_604=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_605=self->mRight;
    Value_606=node_compile(right_node_605,info);
    if(    !Value_606) {
        __result353__ = (_Bool)0;
        come_call_finalizer3(left_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result353__;
    }
    else {
    }
    right_value_607=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_608=(struct sType*)come_increment_ref_count(left_value_604->type);
    fun_name_609="operator_andand";
    if(    self->mQuote) {
        calling_fun_610=(_Bool)0;
    }
    else {
        calling_fun_610=operator_overload_fun(type_608,fun_name_609,left_value_604,right_value_607,(_Bool)0,info);
    }
    if(    !calling_fun_610) {
        come_value_611=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1472, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj245=come_value_611->c_value;
        come_value_611->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_604->c_value,right_value_607->c_value));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj246=come_value_611->type;
        come_value_611->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_604->type));
        come_call_finalizer3(__dec_obj246,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_611->type->mHeap=(_Bool)0;
        come_value_611->var=left_value_604->var;
        add_come_last_code(info,"%s",come_value_611->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_611));
        come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result354__ = (_Bool)1;
    come_call_finalizer3(left_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result354__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj242;
struct sNode* __dec_obj243;
struct sNode* __dec_obj244;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj242=self->sname;
            __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj243=self->mLeft;
            if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj244=self->mRight;
            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj247;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj248;
struct sOrOrNode* __result355__;
    ((struct sNodeBase*)(__right_value571=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value571,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj247=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj248=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value574 = (void*)0;
char* __result356__;
    __result356__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value574=__builtin_string("sOrOrNode")));
    (__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result356__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_612;
_Bool Value_613;
void* __right_value575 = (void*)0;
struct CVALUE* left_value_614;
struct sNode* right_node_615;
_Bool Value_616;
_Bool __result357__;
void* __right_value576 = (void*)0;
struct CVALUE* right_value_617;
struct sType* type_618;
char* fun_name_619;
_Bool calling_fun_620;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_621;
void* __right_value579 = (void*)0;
char* __dec_obj252;
void* __right_value580 = (void*)0;
struct sType* __dec_obj253;
_Bool __result358__;
memset(&calling_fun_620, 0, sizeof(_Bool));
    left_node_612=self->mLeft;
    Value_613=node_compile(left_node_612,info);
    if(    !Value_613) {
        return (_Bool)0;
    }
    else {
    }
    left_value_614=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_615=self->mRight;
    Value_616=node_compile(right_node_615,info);
    if(    !Value_616) {
        __result357__ = (_Bool)0;
        come_call_finalizer3(left_value_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result357__;
    }
    else {
    }
    right_value_617=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_618=(struct sType*)come_increment_ref_count(left_value_614->type);
    fun_name_619="operator_oror";
    if(    self->mQuote) {
        calling_fun_620=(_Bool)0;
    }
    else {
        calling_fun_620=operator_overload_fun(type_618,fun_name_619,left_value_614,right_value_617,(_Bool)0,info);
    }
    if(    !calling_fun_620) {
        come_value_621=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1537, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj252=come_value_621->c_value;
        come_value_621->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_614->c_value,right_value_617->c_value));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj253=come_value_621->type;
        come_value_621->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_614->type));
        come_call_finalizer3(__dec_obj253,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_621->type->mHeap=(_Bool)0;
        come_value_621->var=left_value_614->var;
        add_come_last_code(info,"%s",come_value_621->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_621));
        come_call_finalizer3(come_value_621,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result358__ = (_Bool)1;
    come_call_finalizer3(left_value_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result358__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj249;
struct sNode* __dec_obj250;
struct sNode* __dec_obj251;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj249=self->sname;
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj250=self->mLeft;
            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj251=self->mRight;
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj254;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj255;
struct sCommaNode* __result359__;
    ((struct sNodeBase*)(__right_value581=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value581,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj254=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj255=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
char* __result360__;
    __result360__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value584=__builtin_string("sCommaNode")));
    (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result360__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_622;
_Bool Value_623;
void* __right_value585 = (void*)0;
struct CVALUE* left_value_624;
struct sNode* right_node_625;
_Bool Value_626;
_Bool __result361__;
void* __right_value586 = (void*)0;
struct CVALUE* right_value_627;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct CVALUE* come_value_628;
void* __right_value589 = (void*)0;
char* __dec_obj259;
void* __right_value590 = (void*)0;
struct sType* __dec_obj260;
_Bool __result362__;
    left_node_622=self->mLeft;
    Value_623=node_compile(left_node_622,info);
    if(    !Value_623) {
        return (_Bool)0;
    }
    else {
    }
    left_value_624=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_625=self->mRight;
    Value_626=node_compile(right_node_625,info);
    if(    !Value_626) {
        __result361__ = (_Bool)0;
        come_call_finalizer3(left_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result361__;
    }
    else {
    }
    right_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_628=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1589, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj259=come_value_628->c_value;
    come_value_628->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_624->c_value,right_value_627->c_value));
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj260=come_value_628->type;
    come_value_628->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_624->type));
    come_call_finalizer3(__dec_obj260,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_628->var=((void*)0);
    add_come_last_code(info,"%s",come_value_628->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_628));
    __result362__ = (_Bool)1;
    come_call_finalizer3(left_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_628,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result362__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj256;
struct sNode* __dec_obj257;
struct sNode* __dec_obj258;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj256=self->sname;
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj257=self->mLeft;
            if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj258=self->mRight;
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj261;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj263;
struct sConditionalNode* __result363__;
    ((struct sNodeBase*)(__right_value591=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value591,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj261=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value1));
    if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj262=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value2));
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj263=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value3));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    ((value1) ? value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((value2) ? value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((value3) ? value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value595 = (void*)0;
char* __result364__;
    __result364__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value595=__builtin_string("sConditionalNode")));
    (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result364__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_629;
struct sNode* value1_630;
_Bool Value_631;
void* __right_value596 = (void*)0;
struct CVALUE* value1_value_632;
struct sNode* value2_633;
_Bool Value_634;
_Bool __result365__;
void* __right_value597 = (void*)0;
struct CVALUE* value2_value_635;
struct sNode* value3_636;
_Bool Value_637;
_Bool __result366__;
void* __right_value598 = (void*)0;
struct CVALUE* value3_value_638;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_639;
void* __right_value601 = (void*)0;
char* __dec_obj268;
void* __right_value602 = (void*)0;
struct sType* __dec_obj269;
_Bool __result367__;
    in_conditional_operator_629=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_630=self->mValue1;
    Value_631=node_compile(value1_630,info);
    if(    !Value_631) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_632=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_633=self->mValue2;
    Value_634=node_compile(value2_633,info);
    if(    !Value_634) {
        __result365__ = (_Bool)0;
        come_call_finalizer3(value1_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result365__;
    }
    else {
    }
    value2_value_635=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_636=self->mValue3;
    Value_637=node_compile(value3_636,info);
    if(    !Value_637) {
        __result366__ = (_Bool)0;
        come_call_finalizer3(value1_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result366__;
    }
    else {
    }
    value3_value_638=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_639=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1652, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj268=come_value_639->c_value;
    come_value_639->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_632->c_value,value2_value_635->c_value,value3_value_638->c_value));
    __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj269=come_value_639->type;
    come_value_639->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value2_value_635->type));
    come_call_finalizer3(__dec_obj269,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_639->var=((void*)0);
    add_come_last_code(info,"%s",come_value_639->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_639));
    info->in_conditional_operator=in_conditional_operator_629;
    __result367__ = (_Bool)1;
    come_call_finalizer3(value1_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_638,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result367__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj264;
struct sNode* __dec_obj265;
struct sNode* __dec_obj266;
struct sNode* __dec_obj267;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj264=self->sname;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj265=self->mValue1;
            if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mValue1) ? self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj266=self->mValue2;
            if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mValue2) ? self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj267=self->mValue3;
            if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mValue3) ? self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value610 = (void*)0;
struct sNode* __result370__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1670, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value604=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1670, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value610=_inf_value2));
    ((value1) ? value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((value2) ? value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((value3) ? value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value604,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value610) ? __right_value610 = come_decrement_ref_count2(__right_value610, ((struct sNode*)__right_value610)->finalize, ((struct sNode*)__right_value610)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result368__;
void* __right_value605 = (void*)0;
struct sConditionalNode* result_640;
void* __right_value606 = (void*)0;
char* __dec_obj270;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj271;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj272;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj273;
struct sConditionalNode* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_640=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj270=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj271=result_640->mValue1;
        result_640->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue1));
        if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj272=result_640->mValue2;
        result_640->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue2));
        if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj273=result_640->mValue3;
        result_640->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue3));
        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value611 = (void*)0;
struct sNode* node_641;
int sline_real_642;
void* __right_value612 = (void*)0;
struct sNode* right_643;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value619 = (void*)0;
struct sNode* __result373__;
int sline_real_645;
void* __right_value620 = (void*)0;
struct sNode* right_646;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value627 = (void*)0;
struct sNode* __result376__;
int sline_real_648;
void* __right_value628 = (void*)0;
struct sNode* right_649;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value635 = (void*)0;
struct sNode* __result379__;
int sline_real_651;
void* __right_value636 = (void*)0;
struct sNode* right_652;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value639 = (void*)0;
struct sNode* __result380__;
int sline_real_653;
void* __right_value640 = (void*)0;
struct sNode* right_654;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value643 = (void*)0;
struct sNode* __result381__;
int sline_real_655;
void* __right_value644 = (void*)0;
struct sNode* right_656;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value647 = (void*)0;
struct sNode* __result382__;
struct sNode* __result383__;
    node_641=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_641->terminated(node_641->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_642=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_643=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_642;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1690, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value614=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1690, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),(struct sNode*)come_increment_ref_count(right_643),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value619=_inf_value3));
            ((right_643) ? right_643 = come_decrement_ref_count2(right_643, ((struct sNode*)right_643)->finalize, ((struct sNode*)right_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value614,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value619) ? __right_value619 = come_decrement_ref_count2(__right_value619, ((struct sNode*)__right_value619)->finalize, ((struct sNode*)__right_value619)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result373__;
            ((right_643) ? right_643 = come_decrement_ref_count2(right_643, ((struct sNode*)right_643)->finalize, ((struct sNode*)right_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_645=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_646=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_645;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1701, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value622=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1701, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),(struct sNode*)come_increment_ref_count(right_646),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value627=_inf_value4));
            ((right_646) ? right_646 = come_decrement_ref_count2(right_646, ((struct sNode*)right_646)->finalize, ((struct sNode*)right_646)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value622,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value627) ? __right_value627 = come_decrement_ref_count2(__right_value627, ((struct sNode*)__right_value627)->finalize, ((struct sNode*)__right_value627)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result376__;
            ((right_646) ? right_646 = come_decrement_ref_count2(right_646, ((struct sNode*)right_646)->finalize, ((struct sNode*)right_646)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_648=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_649=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_648;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1712, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value630=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1712, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),(struct sNode*)come_increment_ref_count(right_649),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value635=_inf_value5));
            ((right_649) ? right_649 = come_decrement_ref_count2(right_649, ((struct sNode*)right_649)->finalize, ((struct sNode*)right_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value630,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value635) ? __right_value635 = come_decrement_ref_count2(__right_value635, ((struct sNode*)__right_value635)->finalize, ((struct sNode*)__right_value635)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result379__;
            ((right_649) ? right_649 = come_decrement_ref_count2(right_649, ((struct sNode*)right_649)->finalize, ((struct sNode*)right_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        !node_641->terminated(node_641->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_651=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_652=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_651;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1723, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value638=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1723, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),(struct sNode*)come_increment_ref_count(right_652),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value639=_inf_value6));
            ((right_652) ? right_652 = come_decrement_ref_count2(right_652, ((struct sNode*)right_652)->finalize, ((struct sNode*)right_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value638,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value639) ? __right_value639 = come_decrement_ref_count2(__right_value639, ((struct sNode*)__right_value639)->finalize, ((struct sNode*)__right_value639)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result380__;
            ((right_652) ? right_652 = come_decrement_ref_count2(right_652, ((struct sNode*)right_652)->finalize, ((struct sNode*)right_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_653=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_654=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_653;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1734, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value642=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1734, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),(struct sNode*)come_increment_ref_count(right_654),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=_inf_value7));
            ((right_654) ? right_654 = come_decrement_ref_count2(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value642,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value643) ? __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result381__;
            ((right_654) ? right_654 = come_decrement_ref_count2(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_655=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_656=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_655;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value646=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1745, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),(struct sNode*)come_increment_ref_count(right_656),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value647=_inf_value8));
            ((right_656) ? right_656 = come_decrement_ref_count2(right_656, ((struct sNode*)right_656)->finalize, ((struct sNode*)right_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value646,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value647) ? __right_value647 = come_decrement_ref_count2(__right_value647, ((struct sNode*)__right_value647)->finalize, ((struct sNode*)__right_value647)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result382__;
            ((right_656) ? right_656 = come_decrement_ref_count2(right_656, ((struct sNode*)right_656)->finalize, ((struct sNode*)right_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result383__ = gComeFunResultObject = __result_obj__ = node_641;
    ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result371__;
void* __right_value615 = (void*)0;
struct sMultNode* result_644;
void* __right_value616 = (void*)0;
char* __dec_obj274;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj275;
void* __right_value618 = (void*)0;
struct sNode* __dec_obj276;
struct sMultNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_644=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj274=result_644->sname;
        result_644->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_644->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj275=result_644->mLeft;
        result_644->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj276=result_644->mRight;
        result_644->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_644;
    come_call_finalizer3(result_644,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result374__;
void* __right_value623 = (void*)0;
struct sDivNode* result_647;
void* __right_value624 = (void*)0;
char* __dec_obj277;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj278;
void* __right_value626 = (void*)0;
struct sNode* __dec_obj279;
struct sDivNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_647=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_647->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_647->sname;
        result_647->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_647->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_647->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj278=result_647->mLeft;
        result_647->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj279=result_647->mRight;
        result_647->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_647;
    come_call_finalizer3(result_647,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result377__;
void* __right_value631 = (void*)0;
struct sModNode* result_650;
void* __right_value632 = (void*)0;
char* __dec_obj280;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj281;
void* __right_value634 = (void*)0;
struct sNode* __dec_obj282;
struct sModNode* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_650=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_650->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_650->sname;
        result_650->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_650->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_650->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj281=result_650->mLeft;
        result_650->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj282=result_650->mRight;
        result_650->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_650;
    come_call_finalizer3(result_650,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value648 = (void*)0;
struct sNode* node_657;
int sline_real_658;
void* __right_value649 = (void*)0;
struct sNode* right_659;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value656 = (void*)0;
struct sNode* __result386__;
int sline_real_661;
void* __right_value657 = (void*)0;
struct sNode* right_662;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value664 = (void*)0;
struct sNode* __result389__;
int sline_real_664;
void* __right_value665 = (void*)0;
struct sNode* right_665;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value668 = (void*)0;
struct sNode* __result390__;
int sline_real_666;
void* __right_value669 = (void*)0;
struct sNode* right_667;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value672 = (void*)0;
struct sNode* __result391__;
struct sNode* __result392__;
    node_657=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_658=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_659=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_658;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1774, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value651=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1774, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_657),(struct sNode*)come_increment_ref_count(right_659),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value656=_inf_value9));
            ((right_659) ? right_659 = come_decrement_ref_count2(right_659, ((struct sNode*)right_659)->finalize, ((struct sNode*)right_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_657) ? node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value651,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value656) ? __right_value656 = come_decrement_ref_count2(__right_value656, ((struct sNode*)__right_value656)->finalize, ((struct sNode*)__right_value656)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result386__;
            ((right_659) ? right_659 = come_decrement_ref_count2(right_659, ((struct sNode*)right_659)->finalize, ((struct sNode*)right_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_661=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_662=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_661;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1786, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value659=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1786, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_657),(struct sNode*)come_increment_ref_count(right_662),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value664=_inf_value10));
            ((right_662) ? right_662 = come_decrement_ref_count2(right_662, ((struct sNode*)right_662)->finalize, ((struct sNode*)right_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_657) ? node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value659,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value664) ? __right_value664 = come_decrement_ref_count2(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result389__;
            ((right_662) ? right_662 = come_decrement_ref_count2(right_662, ((struct sNode*)right_662)->finalize, ((struct sNode*)right_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_664=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_665=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_664;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1798, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value667=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1798, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_657),(struct sNode*)come_increment_ref_count(right_665),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value668=_inf_value11));
            ((right_665) ? right_665 = come_decrement_ref_count2(right_665, ((struct sNode*)right_665)->finalize, ((struct sNode*)right_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_657) ? node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value667,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value668) ? __right_value668 = come_decrement_ref_count2(__right_value668, ((struct sNode*)__right_value668)->finalize, ((struct sNode*)__right_value668)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result390__;
            ((right_665) ? right_665 = come_decrement_ref_count2(right_665, ((struct sNode*)right_665)->finalize, ((struct sNode*)right_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_666=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_667=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_666;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1810, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value671=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1810, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_657),(struct sNode*)come_increment_ref_count(right_667),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value672=_inf_value12));
            ((right_667) ? right_667 = come_decrement_ref_count2(right_667, ((struct sNode*)right_667)->finalize, ((struct sNode*)right_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_657) ? node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value671,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value672) ? __right_value672 = come_decrement_ref_count2(__right_value672, ((struct sNode*)__right_value672)->finalize, ((struct sNode*)__right_value672)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result391__;
            ((right_667) ? right_667 = come_decrement_ref_count2(right_667, ((struct sNode*)right_667)->finalize, ((struct sNode*)right_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result392__ = gComeFunResultObject = __result_obj__ = node_657;
    ((node_657) ? node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result384__;
void* __right_value652 = (void*)0;
struct sAddNode* result_660;
void* __right_value653 = (void*)0;
char* __dec_obj283;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj284;
void* __right_value655 = (void*)0;
struct sNode* __dec_obj285;
struct sAddNode* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_660=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_660->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_660->sname;
        result_660->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_660->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj284=result_660->mLeft;
        result_660->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj285=result_660->mRight;
        result_660->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_660->mQuote=self->mQuote;
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_660;
    come_call_finalizer3(result_660,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result387__;
void* __right_value660 = (void*)0;
struct sSubNode* result_663;
void* __right_value661 = (void*)0;
char* __dec_obj286;
void* __right_value662 = (void*)0;
struct sNode* __dec_obj287;
void* __right_value663 = (void*)0;
struct sNode* __dec_obj288;
struct sSubNode* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_663=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_663->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj286=result_663->sname;
        result_663->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_663->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj287=result_663->mLeft;
        result_663->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj288=result_663->mRight;
        result_663->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_663->mQuote=self->mQuote;
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_663;
    come_call_finalizer3(result_663,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value673 = (void*)0;
struct sNode* node_668;
int sline_real_669;
void* __right_value674 = (void*)0;
struct sNode* right_670;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value681 = (void*)0;
struct sNode* __result395__;
int sline_real_672;
void* __right_value682 = (void*)0;
struct sNode* right_673;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value689 = (void*)0;
struct sNode* __result398__;
int sline_real_675;
void* __right_value690 = (void*)0;
struct sNode* right_676;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value693 = (void*)0;
struct sNode* __result399__;
int sline_real_677;
void* __right_value694 = (void*)0;
struct sNode* right_678;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value697 = (void*)0;
struct sNode* __result400__;
struct sNode* __result401__;
    parse_sharp_v5(info);
    node_668=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_669=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_670=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_669;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1840, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value676=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1840, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_668),(struct sNode*)come_increment_ref_count(right_670),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value681=_inf_value13));
            ((right_670) ? right_670 = come_decrement_ref_count2(right_670, ((struct sNode*)right_670)->finalize, ((struct sNode*)right_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value676,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value681) ? __right_value681 = come_decrement_ref_count2(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result395__;
            ((right_670) ? right_670 = come_decrement_ref_count2(right_670, ((struct sNode*)right_670)->finalize, ((struct sNode*)right_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_672=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_673=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_672;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1851, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value684=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1851, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_668),(struct sNode*)come_increment_ref_count(right_673),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value689=_inf_value14));
            ((right_673) ? right_673 = come_decrement_ref_count2(right_673, ((struct sNode*)right_673)->finalize, ((struct sNode*)right_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value684,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value689) ? __right_value689 = come_decrement_ref_count2(__right_value689, ((struct sNode*)__right_value689)->finalize, ((struct sNode*)__right_value689)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result398__;
            ((right_673) ? right_673 = come_decrement_ref_count2(right_673, ((struct sNode*)right_673)->finalize, ((struct sNode*)right_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_675=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_676=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_675;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1862, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value692=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1862, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_668),(struct sNode*)come_increment_ref_count(right_676),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value693=_inf_value15));
            ((right_676) ? right_676 = come_decrement_ref_count2(right_676, ((struct sNode*)right_676)->finalize, ((struct sNode*)right_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value692,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value693) ? __right_value693 = come_decrement_ref_count2(__right_value693, ((struct sNode*)__right_value693)->finalize, ((struct sNode*)__right_value693)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result399__;
            ((right_676) ? right_676 = come_decrement_ref_count2(right_676, ((struct sNode*)right_676)->finalize, ((struct sNode*)right_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_677=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_678=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_677;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1873, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value696=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1873, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_668),(struct sNode*)come_increment_ref_count(right_678),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value697=_inf_value16));
            ((right_678) ? right_678 = come_decrement_ref_count2(right_678, ((struct sNode*)right_678)->finalize, ((struct sNode*)right_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value696,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value697) ? __right_value697 = come_decrement_ref_count2(__right_value697, ((struct sNode*)__right_value697)->finalize, ((struct sNode*)__right_value697)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result400__;
            ((right_678) ? right_678 = come_decrement_ref_count2(right_678, ((struct sNode*)right_678)->finalize, ((struct sNode*)right_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result401__ = gComeFunResultObject = __result_obj__ = node_668;
    ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result393__;
void* __right_value677 = (void*)0;
struct sLShiftNode* result_671;
void* __right_value678 = (void*)0;
char* __dec_obj289;
void* __right_value679 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value680 = (void*)0;
struct sNode* __dec_obj291;
struct sLShiftNode* __result394__;
    if(    self==(void*)0) {
        __result393__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    result_671=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_671->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_671->sname;
        result_671->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_671->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_671->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj290=result_671->mLeft;
        result_671->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj291=result_671->mRight;
        result_671->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result394__ = gComeFunResultObject = __result_obj__ = result_671;
    come_call_finalizer3(result_671,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result396__;
void* __right_value685 = (void*)0;
struct sRShiftNode* result_674;
void* __right_value686 = (void*)0;
char* __dec_obj292;
void* __right_value687 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value688 = (void*)0;
struct sNode* __dec_obj294;
struct sRShiftNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_674=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_674->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_674->sname;
        result_674->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_674->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_674->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj293=result_674->mLeft;
        result_674->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj294=result_674->mRight;
        result_674->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_674;
    come_call_finalizer3(result_674,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value698 = (void*)0;
struct sNode* node_679;
int sline_real_680;
void* __right_value699 = (void*)0;
struct sNode* right_681;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value706 = (void*)0;
struct sNode* __result404__;
int sline_real_683;
void* __right_value707 = (void*)0;
struct sNode* right_684;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value714 = (void*)0;
struct sNode* __result407__;
int sline_real_686;
void* __right_value715 = (void*)0;
struct sNode* right_687;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value722 = (void*)0;
struct sNode* __result410__;
int sline_real_689;
void* __right_value723 = (void*)0;
struct sNode* right_690;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value730 = (void*)0;
struct sNode* __result413__;
int sline_real_692;
void* __right_value731 = (void*)0;
struct sNode* right_693;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value734 = (void*)0;
struct sNode* __result414__;
int sline_real_694;
void* __right_value735 = (void*)0;
struct sNode* right_695;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value738 = (void*)0;
struct sNode* __result415__;
int sline_real_696;
void* __right_value739 = (void*)0;
struct sNode* right_697;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value742 = (void*)0;
struct sNode* __result416__;
int sline_real_698;
void* __right_value743 = (void*)0;
struct sNode* right_699;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value746 = (void*)0;
struct sNode* __result417__;
struct sNode* __result418__;
    parse_sharp_v5(info);
    node_679=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_680=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_681=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_680;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1903, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value701=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1903, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_681),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value706=_inf_value17));
            ((right_681) ? right_681 = come_decrement_ref_count2(right_681, ((struct sNode*)right_681)->finalize, ((struct sNode*)right_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value701,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value706) ? __right_value706 = come_decrement_ref_count2(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result404__;
            ((right_681) ? right_681 = come_decrement_ref_count2(right_681, ((struct sNode*)right_681)->finalize, ((struct sNode*)right_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_683=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_684=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_683;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1914, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value709=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1914, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_684),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value714=_inf_value18));
            ((right_684) ? right_684 = come_decrement_ref_count2(right_684, ((struct sNode*)right_684)->finalize, ((struct sNode*)right_684)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value709,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value714) ? __right_value714 = come_decrement_ref_count2(__right_value714, ((struct sNode*)__right_value714)->finalize, ((struct sNode*)__right_value714)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result407__;
            ((right_684) ? right_684 = come_decrement_ref_count2(right_684, ((struct sNode*)right_684)->finalize, ((struct sNode*)right_684)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_686=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_687=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_686;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1925, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value717=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1925, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_687),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result410__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value722=_inf_value19));
            ((right_687) ? right_687 = come_decrement_ref_count2(right_687, ((struct sNode*)right_687)->finalize, ((struct sNode*)right_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value717,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value722) ? __right_value722 = come_decrement_ref_count2(__right_value722, ((struct sNode*)__right_value722)->finalize, ((struct sNode*)__right_value722)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result410__;
            ((right_687) ? right_687 = come_decrement_ref_count2(right_687, ((struct sNode*)right_687)->finalize, ((struct sNode*)right_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_689=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_690=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_689;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1936, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value725=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1936, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_690),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value730=_inf_value20));
            ((right_690) ? right_690 = come_decrement_ref_count2(right_690, ((struct sNode*)right_690)->finalize, ((struct sNode*)right_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value725,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value730) ? __right_value730 = come_decrement_ref_count2(__right_value730, ((struct sNode*)__right_value730)->finalize, ((struct sNode*)__right_value730)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result413__;
            ((right_690) ? right_690 = come_decrement_ref_count2(right_690, ((struct sNode*)right_690)->finalize, ((struct sNode*)right_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_692=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_693=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_692;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1947, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value733=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1947, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_693),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value734=_inf_value21));
            ((right_693) ? right_693 = come_decrement_ref_count2(right_693, ((struct sNode*)right_693)->finalize, ((struct sNode*)right_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value733,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value734) ? __right_value734 = come_decrement_ref_count2(__right_value734, ((struct sNode*)__right_value734)->finalize, ((struct sNode*)__right_value734)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result414__;
            ((right_693) ? right_693 = come_decrement_ref_count2(right_693, ((struct sNode*)right_693)->finalize, ((struct sNode*)right_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_694=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_695=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_694;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1958, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value737=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1958, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_695),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result415__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value738=_inf_value22));
            ((right_695) ? right_695 = come_decrement_ref_count2(right_695, ((struct sNode*)right_695)->finalize, ((struct sNode*)right_695)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value737,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value738) ? __right_value738 = come_decrement_ref_count2(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result415__;
            ((right_695) ? right_695 = come_decrement_ref_count2(right_695, ((struct sNode*)right_695)->finalize, ((struct sNode*)right_695)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_696=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_697=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_696;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1969, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value741=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1969, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_697),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result416__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value742=_inf_value23));
            ((right_697) ? right_697 = come_decrement_ref_count2(right_697, ((struct sNode*)right_697)->finalize, ((struct sNode*)right_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value741,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value742) ? __right_value742 = come_decrement_ref_count2(__right_value742, ((struct sNode*)__right_value742)->finalize, ((struct sNode*)__right_value742)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result416__;
            ((right_697) ? right_697 = come_decrement_ref_count2(right_697, ((struct sNode*)right_697)->finalize, ((struct sNode*)right_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_698=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_699=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_698;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1980, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value745=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1980, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(right_699),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value746=_inf_value24));
            ((right_699) ? right_699 = come_decrement_ref_count2(right_699, ((struct sNode*)right_699)->finalize, ((struct sNode*)right_699)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value745,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value746) ? __right_value746 = come_decrement_ref_count2(__right_value746, ((struct sNode*)__right_value746)->finalize, ((struct sNode*)__right_value746)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result417__;
            ((right_699) ? right_699 = come_decrement_ref_count2(right_699, ((struct sNode*)right_699)->finalize, ((struct sNode*)right_699)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result418__ = gComeFunResultObject = __result_obj__ = node_679;
    ((node_679) ? node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result402__;
void* __right_value702 = (void*)0;
struct sGtEqNode* result_682;
void* __right_value703 = (void*)0;
char* __dec_obj295;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj296;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj297;
struct sGtEqNode* __result403__;
    if(    self==(void*)0) {
        __result402__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    result_682=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_682->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj295=result_682->sname;
        result_682->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_682->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj296=result_682->mLeft;
        result_682->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj297=result_682->mRight;
        result_682->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result403__ = gComeFunResultObject = __result_obj__ = result_682;
    come_call_finalizer3(result_682,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result405__;
void* __right_value710 = (void*)0;
struct sLtEqNode* result_685;
void* __right_value711 = (void*)0;
char* __dec_obj298;
void* __right_value712 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj300;
struct sLtEqNode* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_685=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_685->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj298=result_685->sname;
        result_685->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_685->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_685->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj299=result_685->mLeft;
        result_685->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj300=result_685->mRight;
        result_685->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_685;
    come_call_finalizer3(result_685,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result408__;
void* __right_value718 = (void*)0;
struct sGtNode* result_688;
void* __right_value719 = (void*)0;
char* __dec_obj301;
void* __right_value720 = (void*)0;
struct sNode* __dec_obj302;
void* __right_value721 = (void*)0;
struct sNode* __dec_obj303;
struct sGtNode* __result409__;
    if(    self==(void*)0) {
        __result408__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result408__;
    }
    result_688=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_688->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj301=result_688->sname;
        result_688->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_688->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_688->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj302=result_688->mLeft;
        result_688->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj303=result_688->mRight;
        result_688->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result409__ = gComeFunResultObject = __result_obj__ = result_688;
    come_call_finalizer3(result_688,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result411__;
void* __right_value726 = (void*)0;
struct sLtNode* result_691;
void* __right_value727 = (void*)0;
char* __dec_obj304;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj305;
void* __right_value729 = (void*)0;
struct sNode* __dec_obj306;
struct sLtNode* __result412__;
    if(    self==(void*)0) {
        __result411__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result411__;
    }
    result_691=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_691->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_691->sname;
        result_691->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_691->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_691->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj305=result_691->mLeft;
        result_691->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj306=result_691->mRight;
        result_691->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result412__ = gComeFunResultObject = __result_obj__ = result_691;
    come_call_finalizer3(result_691,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value747 = (void*)0;
struct sNode* node_700;
int sline_real_701;
void* __right_value748 = (void*)0;
struct sNode* right_702;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value755 = (void*)0;
struct sNode* __result421__;
int sline_real_704;
void* __right_value756 = (void*)0;
struct sNode* right_705;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value763 = (void*)0;
struct sNode* __result424__;
int sline_real_707;
void* __right_value764 = (void*)0;
struct sNode* right_708;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value771 = (void*)0;
struct sNode* __result427__;
int sline_real_710;
void* __right_value772 = (void*)0;
struct sNode* right_711;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value779 = (void*)0;
struct sNode* __result430__;
int sline_real_713;
void* __right_value780 = (void*)0;
struct sNode* right_714;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value783 = (void*)0;
struct sNode* __result431__;
int sline_real_715;
void* __right_value784 = (void*)0;
struct sNode* right_716;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value787 = (void*)0;
struct sNode* __result432__;
int sline_real_717;
void* __right_value788 = (void*)0;
struct sNode* right_718;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value791 = (void*)0;
struct sNode* __result433__;
int sline_real_719;
void* __right_value792 = (void*)0;
struct sNode* right_720;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value795 = (void*)0;
struct sNode* __result434__;
struct sNode* __result435__;
    parse_sharp_v5(info);
    node_700=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_701=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_702=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_701;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2010, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value750=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2010, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_702),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value755=_inf_value25));
            ((right_702) ? right_702 = come_decrement_ref_count2(right_702, ((struct sNode*)right_702)->finalize, ((struct sNode*)right_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value750,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value755) ? __right_value755 = come_decrement_ref_count2(__right_value755, ((struct sNode*)__right_value755)->finalize, ((struct sNode*)__right_value755)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result421__;
            ((right_702) ? right_702 = come_decrement_ref_count2(right_702, ((struct sNode*)right_702)->finalize, ((struct sNode*)right_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_704=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_705=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_704;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2021, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value758=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2021, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_705),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value763=_inf_value26));
            ((right_705) ? right_705 = come_decrement_ref_count2(right_705, ((struct sNode*)right_705)->finalize, ((struct sNode*)right_705)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value758,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value763) ? __right_value763 = come_decrement_ref_count2(__right_value763, ((struct sNode*)__right_value763)->finalize, ((struct sNode*)__right_value763)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result424__;
            ((right_705) ? right_705 = come_decrement_ref_count2(right_705, ((struct sNode*)right_705)->finalize, ((struct sNode*)right_705)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_707=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_708=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_707;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2032, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value766=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2032, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_708),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value771=_inf_value27));
            ((right_708) ? right_708 = come_decrement_ref_count2(right_708, ((struct sNode*)right_708)->finalize, ((struct sNode*)right_708)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value766,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value771) ? __right_value771 = come_decrement_ref_count2(__right_value771, ((struct sNode*)__right_value771)->finalize, ((struct sNode*)__right_value771)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result427__;
            ((right_708) ? right_708 = come_decrement_ref_count2(right_708, ((struct sNode*)right_708)->finalize, ((struct sNode*)right_708)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_710=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_711=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_710;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2043, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value774=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2043, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_711),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result430__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value779=_inf_value28));
            ((right_711) ? right_711 = come_decrement_ref_count2(right_711, ((struct sNode*)right_711)->finalize, ((struct sNode*)right_711)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value774,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value779) ? __right_value779 = come_decrement_ref_count2(__right_value779, ((struct sNode*)__right_value779)->finalize, ((struct sNode*)__right_value779)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result430__;
            ((right_711) ? right_711 = come_decrement_ref_count2(right_711, ((struct sNode*)right_711)->finalize, ((struct sNode*)right_711)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_713=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_714=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_713;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2054, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value782=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2054, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_714),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value783=_inf_value29));
            ((right_714) ? right_714 = come_decrement_ref_count2(right_714, ((struct sNode*)right_714)->finalize, ((struct sNode*)right_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value782,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value783) ? __right_value783 = come_decrement_ref_count2(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result431__;
            ((right_714) ? right_714 = come_decrement_ref_count2(right_714, ((struct sNode*)right_714)->finalize, ((struct sNode*)right_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_715=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_716=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_715;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2065, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value786=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2065, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_716),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result432__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value787=_inf_value30));
            ((right_716) ? right_716 = come_decrement_ref_count2(right_716, ((struct sNode*)right_716)->finalize, ((struct sNode*)right_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value786,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value787) ? __right_value787 = come_decrement_ref_count2(__right_value787, ((struct sNode*)__right_value787)->finalize, ((struct sNode*)__right_value787)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result432__;
            ((right_716) ? right_716 = come_decrement_ref_count2(right_716, ((struct sNode*)right_716)->finalize, ((struct sNode*)right_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_717=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_718=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_717;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2076, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value790=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2076, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_718),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value791=_inf_value31));
            ((right_718) ? right_718 = come_decrement_ref_count2(right_718, ((struct sNode*)right_718)->finalize, ((struct sNode*)right_718)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value790,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value791) ? __right_value791 = come_decrement_ref_count2(__right_value791, ((struct sNode*)__right_value791)->finalize, ((struct sNode*)__right_value791)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result433__;
            ((right_718) ? right_718 = come_decrement_ref_count2(right_718, ((struct sNode*)right_718)->finalize, ((struct sNode*)right_718)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_719=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_720=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_719;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2087, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value794=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2087, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_700),(struct sNode*)come_increment_ref_count(right_720),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result434__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value32));
            ((right_720) ? right_720 = come_decrement_ref_count2(right_720, ((struct sNode*)right_720)->finalize, ((struct sNode*)right_720)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value794,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value795) ? __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result434__;
            ((right_720) ? right_720 = come_decrement_ref_count2(right_720, ((struct sNode*)right_720)->finalize, ((struct sNode*)right_720)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result435__ = gComeFunResultObject = __result_obj__ = node_700;
    ((node_700) ? node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result419__;
void* __right_value751 = (void*)0;
struct sEq2Node* result_703;
void* __right_value752 = (void*)0;
char* __dec_obj307;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj308;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj309;
struct sEq2Node* __result420__;
    if(    self==(void*)0) {
        __result419__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result419__;
    }
    result_703=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_703->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj307=result_703->sname;
        result_703->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_703->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_703->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj308=result_703->mLeft;
        result_703->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj309=result_703->mRight;
        result_703->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result420__ = gComeFunResultObject = __result_obj__ = result_703;
    come_call_finalizer3(result_703,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result422__;
void* __right_value759 = (void*)0;
struct sEqNode* result_706;
void* __right_value760 = (void*)0;
char* __dec_obj310;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj312;
struct sEqNode* __result423__;
    if(    self==(void*)0) {
        __result422__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result422__;
    }
    result_706=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_706->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj310=result_706->sname;
        result_706->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_706->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_706->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj311=result_706->mLeft;
        result_706->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj312=result_706->mRight;
        result_706->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result423__ = gComeFunResultObject = __result_obj__ = result_706;
    come_call_finalizer3(result_706,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result425__;
void* __right_value767 = (void*)0;
struct sNotEq2Node* result_709;
void* __right_value768 = (void*)0;
char* __dec_obj313;
void* __right_value769 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value770 = (void*)0;
struct sNode* __dec_obj315;
struct sNotEq2Node* __result426__;
    if(    self==(void*)0) {
        __result425__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    result_709=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_709->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj313=result_709->sname;
        result_709->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_709->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_709->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj314=result_709->mLeft;
        result_709->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj315=result_709->mRight;
        result_709->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result426__ = gComeFunResultObject = __result_obj__ = result_709;
    come_call_finalizer3(result_709,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result428__;
void* __right_value775 = (void*)0;
struct sNotEqNode* result_712;
void* __right_value776 = (void*)0;
char* __dec_obj316;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj318;
struct sNotEqNode* __result429__;
    if(    self==(void*)0) {
        __result428__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    result_712=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_712->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj316=result_712->sname;
        result_712->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_712->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_712->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj317=result_712->mLeft;
        result_712->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj318=result_712->mRight;
        result_712->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result429__ = gComeFunResultObject = __result_obj__ = result_712;
    come_call_finalizer3(result_712,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value796 = (void*)0;
struct sNode* node_721;
int sline_real_722;
void* __right_value797 = (void*)0;
struct sNode* right_723;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value804 = (void*)0;
struct sNode* __result438__;
int sline_real_725;
void* __right_value805 = (void*)0;
struct sNode* right_726;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value808 = (void*)0;
struct sNode* __result439__;
struct sNode* __result440__;
    parse_sharp_v5(info);
    node_721=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_721->terminated(node_721->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_722=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_723=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_722;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2117, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value799=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2117, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_721),(struct sNode*)come_increment_ref_count(right_723),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result438__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value804=_inf_value33));
            ((right_723) ? right_723 = come_decrement_ref_count2(right_723, ((struct sNode*)right_723)->finalize, ((struct sNode*)right_723)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_721) ? node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value799,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value804) ? __right_value804 = come_decrement_ref_count2(__right_value804, ((struct sNode*)__right_value804)->finalize, ((struct sNode*)__right_value804)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result438__;
            ((right_723) ? right_723 = come_decrement_ref_count2(right_723, ((struct sNode*)right_723)->finalize, ((struct sNode*)right_723)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        !node_721->terminated(node_721->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_725=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_726=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_725;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2128, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value807=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2128, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_721),(struct sNode*)come_increment_ref_count(right_726),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result439__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=_inf_value34));
            ((right_726) ? right_726 = come_decrement_ref_count2(right_726, ((struct sNode*)right_726)->finalize, ((struct sNode*)right_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_721) ? node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value807,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value808) ? __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result439__;
            ((right_726) ? right_726 = come_decrement_ref_count2(right_726, ((struct sNode*)right_726)->finalize, ((struct sNode*)right_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result440__ = gComeFunResultObject = __result_obj__ = node_721;
    ((node_721) ? node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result440__;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result436__;
void* __right_value800 = (void*)0;
struct sAndNode* result_724;
void* __right_value801 = (void*)0;
char* __dec_obj319;
void* __right_value802 = (void*)0;
struct sNode* __dec_obj320;
void* __right_value803 = (void*)0;
struct sNode* __dec_obj321;
struct sAndNode* __result437__;
    if(    self==(void*)0) {
        __result436__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result436__;
    }
    result_724=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_724->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_724->sname;
        result_724->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_724->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_724->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj320=result_724->mLeft;
        result_724->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj321=result_724->mRight;
        result_724->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result437__ = gComeFunResultObject = __result_obj__ = result_724;
    come_call_finalizer3(result_724,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result437__;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value809 = (void*)0;
struct sNode* node_727;
int sline_real_728;
void* __right_value810 = (void*)0;
struct sNode* right_729;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value817 = (void*)0;
struct sNode* __result443__;
int sline_real_731;
void* __right_value818 = (void*)0;
struct sNode* right_732;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value821 = (void*)0;
struct sNode* __result444__;
struct sNode* __result445__;
    parse_sharp_v5(info);
    node_727=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_728=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_729=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_728;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2158, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value812=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2158, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_727),(struct sNode*)come_increment_ref_count(right_729),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result443__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value817=_inf_value35));
            ((right_729) ? right_729 = come_decrement_ref_count2(right_729, ((struct sNode*)right_729)->finalize, ((struct sNode*)right_729)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_727) ? node_727 = come_decrement_ref_count2(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value812,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value817) ? __right_value817 = come_decrement_ref_count2(__right_value817, ((struct sNode*)__right_value817)->finalize, ((struct sNode*)__right_value817)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result443__;
            ((right_729) ? right_729 = come_decrement_ref_count2(right_729, ((struct sNode*)right_729)->finalize, ((struct sNode*)right_729)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_731=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_732=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_731;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2169, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value820=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2169, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_727),(struct sNode*)come_increment_ref_count(right_732),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result444__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value821=_inf_value36));
            ((right_732) ? right_732 = come_decrement_ref_count2(right_732, ((struct sNode*)right_732)->finalize, ((struct sNode*)right_732)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_727) ? node_727 = come_decrement_ref_count2(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value820,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value821) ? __right_value821 = come_decrement_ref_count2(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result444__;
            ((right_732) ? right_732 = come_decrement_ref_count2(right_732, ((struct sNode*)right_732)->finalize, ((struct sNode*)right_732)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result445__ = gComeFunResultObject = __result_obj__ = node_727;
    ((node_727) ? node_727 = come_decrement_ref_count2(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result441__;
void* __right_value813 = (void*)0;
struct sXOrNode* result_730;
void* __right_value814 = (void*)0;
char* __dec_obj322;
void* __right_value815 = (void*)0;
struct sNode* __dec_obj323;
void* __right_value816 = (void*)0;
struct sNode* __dec_obj324;
struct sXOrNode* __result442__;
    if(    self==(void*)0) {
        __result441__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result441__;
    }
    result_730=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_730->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj322=result_730->sname;
        result_730->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_730->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_730->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj323=result_730->mLeft;
        result_730->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj324=result_730->mRight;
        result_730->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result442__ = gComeFunResultObject = __result_obj__ = result_730;
    come_call_finalizer3(result_730,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value822 = (void*)0;
struct sNode* node_733;
int sline_real_734;
void* __right_value823 = (void*)0;
struct sNode* right_735;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value830 = (void*)0;
struct sNode* __result448__;
int sline_real_737;
void* __right_value831 = (void*)0;
struct sNode* right_738;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value834 = (void*)0;
struct sNode* __result449__;
struct sNode* __result450__;
    parse_sharp_v5(info);
    node_733=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_734=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_735=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_734;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2199, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value825=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2199, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_733),(struct sNode*)come_increment_ref_count(right_735),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result448__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value830=_inf_value37));
            ((right_735) ? right_735 = come_decrement_ref_count2(right_735, ((struct sNode*)right_735)->finalize, ((struct sNode*)right_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_733) ? node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value825,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value830) ? __right_value830 = come_decrement_ref_count2(__right_value830, ((struct sNode*)__right_value830)->finalize, ((struct sNode*)__right_value830)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result448__;
            ((right_735) ? right_735 = come_decrement_ref_count2(right_735, ((struct sNode*)right_735)->finalize, ((struct sNode*)right_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_737=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_738=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_737;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2210, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value833=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2210, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_733),(struct sNode*)come_increment_ref_count(right_738),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value834=_inf_value38));
            ((right_738) ? right_738 = come_decrement_ref_count2(right_738, ((struct sNode*)right_738)->finalize, ((struct sNode*)right_738)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_733) ? node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value833,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value834) ? __right_value834 = come_decrement_ref_count2(__right_value834, ((struct sNode*)__right_value834)->finalize, ((struct sNode*)__right_value834)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result449__;
            ((right_738) ? right_738 = come_decrement_ref_count2(right_738, ((struct sNode*)right_738)->finalize, ((struct sNode*)right_738)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result450__ = gComeFunResultObject = __result_obj__ = node_733;
    ((node_733) ? node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result450__;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result446__;
void* __right_value826 = (void*)0;
struct sOrNode* result_736;
void* __right_value827 = (void*)0;
char* __dec_obj325;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value829 = (void*)0;
struct sNode* __dec_obj327;
struct sOrNode* __result447__;
    if(    self==(void*)0) {
        __result446__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result446__;
    }
    result_736=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_736->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj325=result_736->sname;
        result_736->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_736->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_736->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj326=result_736->mLeft;
        result_736->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj327=result_736->mRight;
        result_736->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result447__ = gComeFunResultObject = __result_obj__ = result_736;
    come_call_finalizer3(result_736,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result447__;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value835 = (void*)0;
struct sNode* node_739;
int sline_real_740;
void* __right_value836 = (void*)0;
struct sNode* right_741;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value843 = (void*)0;
struct sNode* __result453__;
int sline_real_743;
void* __right_value844 = (void*)0;
struct sNode* right_744;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value847 = (void*)0;
struct sNode* __result454__;
struct sNode* __result455__;
    parse_sharp_v5(info);
    node_739=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_740=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_741=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_740;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2240, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value838=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2240, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_739),(struct sNode*)come_increment_ref_count(right_741),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result453__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value843=_inf_value39));
            ((right_741) ? right_741 = come_decrement_ref_count2(right_741, ((struct sNode*)right_741)->finalize, ((struct sNode*)right_741)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_739) ? node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value838,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value843) ? __right_value843 = come_decrement_ref_count2(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result453__;
            ((right_741) ? right_741 = come_decrement_ref_count2(right_741, ((struct sNode*)right_741)->finalize, ((struct sNode*)right_741)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_743=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_744=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_743;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2251, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value846=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2251, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_739),(struct sNode*)come_increment_ref_count(right_744),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result454__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value847=_inf_value40));
            ((right_744) ? right_744 = come_decrement_ref_count2(right_744, ((struct sNode*)right_744)->finalize, ((struct sNode*)right_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_739) ? node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value846,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value847) ? __right_value847 = come_decrement_ref_count2(__right_value847, ((struct sNode*)__right_value847)->finalize, ((struct sNode*)__right_value847)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result454__;
            ((right_744) ? right_744 = come_decrement_ref_count2(right_744, ((struct sNode*)right_744)->finalize, ((struct sNode*)right_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result455__ = gComeFunResultObject = __result_obj__ = node_739;
    ((node_739) ? node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result451__;
void* __right_value839 = (void*)0;
struct sAndAndNode* result_742;
void* __right_value840 = (void*)0;
char* __dec_obj328;
void* __right_value841 = (void*)0;
struct sNode* __dec_obj329;
void* __right_value842 = (void*)0;
struct sNode* __dec_obj330;
struct sAndAndNode* __result452__;
    if(    self==(void*)0) {
        __result451__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result451__;
    }
    result_742=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_742->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_742->sname;
        result_742->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_742->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_742->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj329=result_742->mLeft;
        result_742->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj330=result_742->mRight;
        result_742->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result452__ = gComeFunResultObject = __result_obj__ = result_742;
    come_call_finalizer3(result_742,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result452__;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value848 = (void*)0;
struct sNode* node_745;
int sline_real_746;
void* __right_value849 = (void*)0;
struct sNode* right_747;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value856 = (void*)0;
struct sNode* __result458__;
int sline_real_749;
void* __right_value857 = (void*)0;
struct sNode* right_750;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value860 = (void*)0;
struct sNode* __result459__;
struct sNode* __result460__;
    parse_sharp_v5(info);
    node_745=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_746=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_747=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_746;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2281, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value851=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2281, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_745),(struct sNode*)come_increment_ref_count(right_747),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result458__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value856=_inf_value41));
            ((right_747) ? right_747 = come_decrement_ref_count2(right_747, ((struct sNode*)right_747)->finalize, ((struct sNode*)right_747)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_745) ? node_745 = come_decrement_ref_count2(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value851,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value856) ? __right_value856 = come_decrement_ref_count2(__right_value856, ((struct sNode*)__right_value856)->finalize, ((struct sNode*)__right_value856)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result458__;
            ((right_747) ? right_747 = come_decrement_ref_count2(right_747, ((struct sNode*)right_747)->finalize, ((struct sNode*)right_747)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_749=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_750=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_749;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2292, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value859=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2292, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_745),(struct sNode*)come_increment_ref_count(right_750),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result459__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value860=_inf_value42));
            ((right_750) ? right_750 = come_decrement_ref_count2(right_750, ((struct sNode*)right_750)->finalize, ((struct sNode*)right_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_745) ? node_745 = come_decrement_ref_count2(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value859,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value860) ? __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result459__;
            ((right_750) ? right_750 = come_decrement_ref_count2(right_750, ((struct sNode*)right_750)->finalize, ((struct sNode*)right_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result460__ = gComeFunResultObject = __result_obj__ = node_745;
    ((node_745) ? node_745 = come_decrement_ref_count2(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result456__;
void* __right_value852 = (void*)0;
struct sOrOrNode* result_748;
void* __right_value853 = (void*)0;
char* __dec_obj331;
void* __right_value854 = (void*)0;
struct sNode* __dec_obj332;
void* __right_value855 = (void*)0;
struct sNode* __dec_obj333;
struct sOrOrNode* __result457__;
    if(    self==(void*)0) {
        __result456__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result456__;
    }
    result_748=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_748->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj331=result_748->sname;
        result_748->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_748->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj332=result_748->mLeft;
        result_748->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj333=result_748->mRight;
        result_748->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj333) { __dec_obj333 = come_decrement_ref_count2(__dec_obj333, ((struct sNode*)__dec_obj333)->finalize, ((struct sNode*)__dec_obj333)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result457__ = gComeFunResultObject = __result_obj__ = result_748;
    come_call_finalizer3(result_748,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result457__;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value861 = (void*)0;
struct sNode* node_751;
int sline_real_752;
void* __right_value862 = (void*)0;
struct sNode* node2_753;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value869 = (void*)0;
struct sNode* __result463__;
struct sNode* __result464__;
    parse_sharp_v5(info);
    node_751=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_752=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_753=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_752;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2322, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value864=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2322, "struct sCommaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_751),(struct sNode*)come_increment_ref_count(node2_753),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value869=_inf_value43));
            ((node2_753) ? node2_753 = come_decrement_ref_count2(node2_753, ((struct sNode*)node2_753)->finalize, ((struct sNode*)node2_753)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value864,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value869) ? __right_value869 = come_decrement_ref_count2(__right_value869, ((struct sNode*)__right_value869)->finalize, ((struct sNode*)__right_value869)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result463__;
            ((node2_753) ? node2_753 = come_decrement_ref_count2(node2_753, ((struct sNode*)node2_753)->finalize, ((struct sNode*)node2_753)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result464__ = gComeFunResultObject = __result_obj__ = node_751;
    ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result464__;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result461__;
void* __right_value865 = (void*)0;
struct sCommaNode* result_754;
void* __right_value866 = (void*)0;
char* __dec_obj334;
void* __right_value867 = (void*)0;
struct sNode* __dec_obj335;
void* __right_value868 = (void*)0;
struct sNode* __dec_obj336;
struct sCommaNode* __result462__;
    if(    self==(void*)0) {
        __result461__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result461__;
    }
    result_754=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_754->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj334=result_754->sname;
        result_754->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_754->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj335=result_754->mLeft;
        result_754->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj336=result_754->mRight;
        result_754->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj336) { __dec_obj336 = come_decrement_ref_count2(__dec_obj336, ((struct sNode*)__dec_obj336)->finalize, ((struct sNode*)__dec_obj336)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result462__ = gComeFunResultObject = __result_obj__ = result_754;
    come_call_finalizer3(result_754,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result462__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value870 = (void*)0;
struct sNode* node_755;
int sline_real_756;
struct sNode* value1_757;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value873 = (void*)0;
struct sNode* __dec_obj337;
_Bool no_label_758;
void* __right_value874 = (void*)0;
struct sNode* __dec_obj338;
void* __right_value875 = (void*)0;
struct sNode* value2_759;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value878 = (void*)0;
struct sNode* __result465__;
struct sNode* __result466__;
value1_757 = (void*)0;
    parse_sharp_v5(info);
    node_755=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_756=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2353, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value872=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2353, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj337=value1_757;
                value1_757=(struct sNode*)come_increment_ref_count(_inf_value44);
                if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value872,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_758=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj338=value1_757;
                value1_757=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_758;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_759=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_756;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2371, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value877=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2371, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_755),(struct sNode*)come_increment_ref_count(value1_757),(struct sNode*)come_increment_ref_count(value2_759),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value878=_inf_value45));
            ((value1_757) ? value1_757 = come_decrement_ref_count2(value1_757, ((struct sNode*)value1_757)->finalize, ((struct sNode*)value1_757)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((value2_759) ? value2_759 = come_decrement_ref_count2(value2_759, ((struct sNode*)value2_759)->finalize, ((struct sNode*)value2_759)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_755) ? node_755 = come_decrement_ref_count2(node_755, ((struct sNode*)node_755)->finalize, ((struct sNode*)node_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value877,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value878) ? __right_value878 = come_decrement_ref_count2(__right_value878, ((struct sNode*)__right_value878)->finalize, ((struct sNode*)__right_value878)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result465__;
            ((value1_757) ? value1_757 = come_decrement_ref_count2(value1_757, ((struct sNode*)value1_757)->finalize, ((struct sNode*)value1_757)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((value2_759) ? value2_759 = come_decrement_ref_count2(value2_759, ((struct sNode*)value2_759)->finalize, ((struct sNode*)value2_759)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result466__ = gComeFunResultObject = __result_obj__ = node_755;
    ((node_755) ? node_755 = come_decrement_ref_count2(node_755, ((struct sNode*)node_755)->finalize, ((struct sNode*)node_755)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value879 = (void*)0;
struct sNode* node_760;
struct sNode* __result467__;
    parse_sharp_v5(info);
    node_760=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result467__ = gComeFunResultObject = __result_obj__ = node_760;
    ((node_760) ? node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value882 = (void*)0;
struct sNode* __result468__;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value887 = (void*)0;
struct sNode* __result471__;
void* __right_value888 = (void*)0;
struct sNode* __result472__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2395, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value881=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2395, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value882=_inf_value46));
        come_call_finalizer3(__right_value881,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value882) ? __right_value882 = come_decrement_ref_count2(__right_value882, ((struct sNode*)__right_value882)->finalize, ((struct sNode*)__right_value882)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2398, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value884=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2398, "struct sNilNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value887=_inf_value47));
        come_call_finalizer3(__right_value884,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value887) ? __right_value887 = come_decrement_ref_count2(__right_value887, ((struct sNode*)__right_value887)->finalize, ((struct sNode*)__right_value887)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result471__;
    }
    __result472__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value888=string_node_v12(buf,head,head_sline,info)));
    ((__right_value888) ? __right_value888 = come_decrement_ref_count2(__right_value888, ((struct sNode*)__right_value888)->finalize, ((struct sNode*)__right_value888)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result469__;
void* __right_value885 = (void*)0;
struct sNilNode* result_761;
void* __right_value886 = (void*)0;
char* __dec_obj339;
struct sNilNode* __result470__;
    if(    self==(void*)0) {
        __result469__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_761=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_761->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_761->sname;
        result_761->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_761->sline_real=self->sline_real;
    }
    __result470__ = gComeFunResultObject = __result_obj__ = result_761;
    come_call_finalizer3(result_761,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result470__;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value891 = (void*)0;
struct sNode* __result473__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2406, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value890=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2406, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result473__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value891=_inf_value48));
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value890,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value891) ? __right_value891 = come_decrement_ref_count2(__right_value891, ((struct sNode*)__right_value891)->finalize, ((struct sNode*)__right_value891)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result473__;
}

