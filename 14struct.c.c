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

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
};

struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};

struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
void output_struct(struct sClass* klass, struct sInfo* info);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
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
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2voidphvoidphp_find(struct map$2voidphvoidph* self, void* key);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static struct list$1sClassp* list$1sClasspp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClasspp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClasspp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClasspp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClasspp_begin(struct list$1sClassp* self);
static _Bool list$1sClasspp_end(struct list$1sClassp* self);
static struct sClass* list$1sClasspp_next(struct list$1sClassp* self);
static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1charphp_length(struct list$1charph* self);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self);
static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self);
static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item);
static void list$1voidp_finalize(struct list$1voidp* self);
static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_317;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __result230__;
void* __right_value254 = (void*)0;
char* __result231__;
    p_317=class_name;
    while(*p_317) {
        if(        *p_317==36) {
            __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=charp_substring(((char*)(__right_value252=__builtin_string(class_name))),0,p_317-class_name)));
            (__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
        else {
            p_317++;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string(class_name)));
    (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result231__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct buffer* buf_318;
struct sClass* klass_319;
char* class_name_320;
int i_321;
void* __right_value257 = (void*)0;
struct sType* type_322;
void* __right_value258 = (void*)0;
char* type_name_326;
int i_327;
void* __right_value259 = (void*)0;
char* __result234__;
    buf_318=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    klass_319=generics_type->mClass;
    class_name_320=klass_319->mName;
    buffer_append_str(buf_318,class_name_320);
    if(    list$1voidphp_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_318,36);
        buffer_append_char(buf_318,list$1voidphp_length(generics_type->mGenericsTypes)+48);
        for(        i_321=0;        i_321<list$1voidphp_length(generics_type->mGenericsTypes);        i_321++        ){
            type_322=((struct sType*)((void*)(__right_value257=list$1voidphp_operator_load_element(generics_type->mGenericsTypes,i_321))));
            come_call_finalizer3(__right_value257,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            type_name_326=(char*)come_increment_ref_count(create_generics_name(type_322,info));
            buffer_append_str(buf_318,type_name_326);
            for(            i_327=0;            i_327<type_322->mPointerNum;            i_327++            ){
                buffer_append_char(buf_318,112);
            }
            if(            type_322->mHeap) {
                buffer_append_str(buf_318,"h");
            }
            (type_name_326 = come_decrement_ref_count2(type_name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value259=buffer_to_string(buf_318)));
    come_call_finalizer3(buf_318,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_323;
int i_324;
void* __result232__;
void* default_value_325;
void* __result233__;
default_value_325 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_323=self->head;
    i_324=0;
    while(it_323!=((void*)0)) {
        if(        position==i_324) {
            __result232__ = gComeFunResultObject = __result_obj__ = it_323->item;
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
        it_323=it_323->next;
        i_324++;
    }
    memset(&default_value_325,0,sizeof(void*));
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_325);
    come_call_finalizer3(default_value_325,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_328;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct buffer* buf_329;
_Bool existance_generics_330;
struct list$1voidph* o2_saved_331;
struct tuple2$2charphsTypeph* it_334;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_337=0;
struct sType* type_338=0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
_Bool _if_conditional1;
void* __right_value273 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1voidphp_length(klass->mFields)==0) {
        return;
    }
    name_328=(char*)come_increment_ref_count(klass->mName);
    buf_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_329,"struct %s\n{\n",klass->mName);
    existance_generics_330=(_Bool)0;
    for(    o2_saved_331=(struct list$1voidph*)come_increment_ref_count((klass->mFields)),it_334=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_331)));    !list$1voidphp_end((o2_saved_331));    it_334=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_331)))    ){
        multiple_assign_var1=it_334;
        name_337=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_338=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_338,info)||is_contained_generics_types(type_338,info)) {
            existance_generics_330=(_Bool)1;
        }
        type_338->mStatic=(_Bool)0;
        buffer_append_str(buf_329,"    ");
        buffer_append_str(buf_329,((char*)(__right_value262=make_define_var(type_338,name_337,(_Bool)0,info))));
        (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_329,";\n");
        (name_337 = come_decrement_ref_count2(name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_331,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_329,"};\n");
    }
    else {
        buffer_append_format(buf_329,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)((void*)(__right_value264=map$2voidphvoidphp_operator_load_element(info->struct_definition,((char*)(__right_value263=__builtin_string(name_328)))))))==((void*)0)&&!existance_generics_330)),    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value264,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional1) {
        map$2voidphvoidphp_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_328)),(struct buffer*)come_increment_ref_count(buf_329));
    }
    (name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_332;
void* __result235__;
void* __result236__;
void* result_333;
void* __result237__;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_332,0,sizeof(void*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_332;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->it=self->head;
    if(    self->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_333,0,sizeof(void*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_333;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_335;
void* __result238__;
void* __result239__;
void* result_336;
void* __result240__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_335,0,sizeof(void*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_336,0,sizeof(void*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result240__;
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
struct list_item$1voidph* it_339;
struct list_item$1voidph* prev_it_340;
    it_339=self->head;
    while(it_339!=((void*)0)) {
        prev_it_340=it_339;
        it_339=it_339->next;
        come_call_finalizer3(prev_it_340,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_341;
struct list_item$1voidph* prev_it_342;
    it_341=self->head;
    while(it_341!=((void*)0)) {
        prev_it_342=it_341;
        it_341=it_341->next;
        come_call_finalizer3(prev_it_342,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_343;
struct list_item$1sNodeph* prev_it_344;
    it_343=self->head;
    while(it_343!=((void*)0)) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer3(prev_it_344,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_345;
struct list_item$1sNodeph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        come_call_finalizer3(prev_it_346,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_347;
struct list_item$1charph* prev_it_348;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        prev_it_348=it_347;
        it_347=it_347->next;
        come_call_finalizer3(prev_it_348,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_349;
unsigned int hash_350;
unsigned int it_351;
void* __result241__;
void* __result242__;
void* __result243__;
void* __result244__;
default_value_349 = (void*)0;
    memset(&default_value_349,0,sizeof(void*));
    hash_350=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_351=hash_350;
    while((_Bool)1) {
        if(        self->item_existance[it_351]) {
            if(            come_call_equals((void*)0, self->keys[it_351], ((char*)key))) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_351];
                come_call_finalizer3(default_value_349,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_351++;
            if(            it_351>=self->size) {
                it_351=0;
            }
            else if(            it_351==hash_350) {
                __result242__ = gComeFunResultObject = __result_obj__ = ((struct buffer*)default_value_349);
                come_call_finalizer3(default_value_349,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = ((struct buffer*)default_value_349);
            come_call_finalizer3(default_value_349,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct buffer*)default_value_349);
    come_call_finalizer3(default_value_349,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_369;
unsigned int it_370;
_Bool same_key_exist_387;
char* it2_390;
struct map$2voidphvoidph* __result266__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_369=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_370=hash_369;
    while((_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            come_call_equals((void*)0, self->keys[it_370], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_370]);
                    come_call_finalizer3(self->keys[it_370],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_370]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_370]);
                    self->keys[it_370]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_370],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_370]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_370]=item;
                }
                break;
            }
            it_370++;
            if(            it_370>=self->size) {
                it_370=0;
            }
            else if(            it_370==hash_369) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_370]=(_Bool)1;
            if(            1) {
                self->keys[it_370]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_370]=key;
            }
            if(            1) {
                self->items[it_370]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_370]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_387=(_Bool)0;
    for(    it2_390=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_390=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_390, key)) {
            same_key_exist_387=(_Bool)1;
        }
    }
    if(    !same_key_exist_387) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_352;
void* __right_value265 = (void*)0;
void** keys_353;
void* __right_value266 = (void*)0;
void** items_354;
void* __right_value267 = (void*)0;
_Bool* item_existance_355;
int len_356;
void* it_359;
void* default_value_362;
void* __right_value268 = (void*)0;
void* it2_363;
unsigned int hash_366;
int n_367;
void* default_value_368;
void* __right_value269 = (void*)0;
default_value_362 = (void*)0;
default_value_368 = (void*)0;
    size_352=self->size*10;
    keys_353=(void**)come_increment_ref_count(((void**)(__right_value265=(void**)come_calloc(1, sizeof(void*)*(1*(size_352)), "/usr/local/include/comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_354=(void**)come_increment_ref_count(((void**)(__right_value266=(void**)come_calloc(1, sizeof(void*)*(1*(size_352)), "/usr/local/include/comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_355=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value267=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_352)), "/usr/local/include/comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_356=0;
    for(    it_359=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_359=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_362,0,sizeof(void*));
        it2_363=((void*)(__right_value268=map$2voidphvoidphp_at(self,it_359,default_value_362)));
        come_call_finalizer3(__right_value268,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_366=come_call_get_hash_key((void*)0, ((void*)it_359))%size_352;
        n_367=hash_366;
        while((_Bool)1) {
            if(            item_existance_355[n_367]) {
                n_367++;
                if(                n_367>=size_352) {
                    n_367=0;
                }
                else if(                n_367==hash_366) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_355[n_367]=(_Bool)1;
                keys_353[n_367]=it_359;
                items_354[n_367]=((void*)(__right_value269=map$2voidphvoidphp_at(self,it_359,default_value_368)));
                come_call_finalizer3(__right_value269,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_356++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_353;
    self->items=items_354;
    self->item_existance=item_existance_355;
    self->size=size_352;
    self->len=len_356;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_357;
void* __result245__;
void* __result246__;
void* result_358;
void* __result247__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_357,0,sizeof(void*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_358,0,sizeof(void*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_360;
void* __result248__;
void* __result249__;
void* result_361;
void* __result250__;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_360,0,sizeof(void*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_360;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_361,0,sizeof(void*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_361;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_364;
unsigned int it_365;
void* __result251__;
void* __result252__;
void* __result253__;
void* __result254__;
    hash_364=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            come_call_equals((void*)0, self->keys[it_365], key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_365];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_371;
struct list_item$1voidp* it_372;
struct list$1voidp* __result258__;
    it2_371=0;
    it_372=self->head;
    while(it_372!=((void*)0)) {
        if(        come_call_equals((void*)0, it_372->item, item)) {
            list$1voidpp_delete(self,it2_371,it2_371+1);
            break;
        }
        it2_371++;
        it_372=it_372->next;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_373;
struct list$1voidp* __result255__;
struct list_item$1voidp* it_376;
int i_377;
struct list_item$1voidp* prev_it_378;
struct list_item$1voidp* it_379;
int i_380;
struct list_item$1voidp* prev_it_381;
struct list_item$1voidp* it_382;
struct list_item$1voidp* head_prev_it_383;
struct list_item$1voidp* tail_it_384;
int i_385;
struct list_item$1voidp* prev_it_386;
struct list$1voidp* __result257__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_373=tail;
        tail=head;
        head=tmp_373;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result255__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_376=self->head;
        i_377=0;
        while(it_376!=((void*)0)) {
            if(            i_377<tail) {
                prev_it_378=it_376;
                it_376=it_376->next;
                i_377++;
                come_call_finalizer3(prev_it_378,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_377==tail) {
                self->head=it_376;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_376=it_376->next;
                i_377++;
            }
        }
    }
    else if(    tail==self->len) {
        it_379=self->head;
        i_380=0;
        while(it_379!=((void*)0)) {
            if(            i_380==head) {
                self->tail=it_379->prev;
                self->tail->next=((void*)0);
            }
            if(            i_380>=head) {
                prev_it_381=it_379;
                it_379=it_379->next;
                i_380++;
                come_call_finalizer3(prev_it_381,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_379=it_379->next;
                i_380++;
            }
        }
    }
    else {
        it_382=self->head;
        head_prev_it_383=((void*)0);
        tail_it_384=((void*)0);
        i_385=0;
        while(it_382!=((void*)0)) {
            if(            i_385==head) {
                head_prev_it_383=it_382->prev;
            }
            if(            i_385==tail) {
                tail_it_384=it_382;
            }
            if(            i_385>=head&&i_385<tail) {
                prev_it_386=it_382;
                it_382=it_382->next;
                i_385++;
                come_call_finalizer3(prev_it_386,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_382=it_382->next;
                i_385++;
            }
        }
        if(        head_prev_it_383!=((void*)0)) {
            head_prev_it_383->next=tail_it_384;
        }
        if(        tail_it_384!=((void*)0)) {
            tail_it_384->prev=head_prev_it_383;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_374;
struct list_item$1voidp* prev_it_375;
struct list$1voidp* __result256__;
    it_374=self->head;
    while(it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        come_call_finalizer3(prev_it_375,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_388;
void* __result259__;
void* __result260__;
void* result_389;
void* __result261__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_388,0,sizeof(void*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->head;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_389,0,sizeof(void*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_391;
void* __result262__;
void* __result263__;
void* result_392;
void* __result264__;
result_391 = (void*)0;
result_392 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_391,0,sizeof(void*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_391;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_392,0,sizeof(void*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_392;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1voidp* litem_393;
void* __right_value271 = (void*)0;
struct list_item$1voidp* litem_394;
void* __right_value272 = (void*)0;
struct list_item$1voidp* litem_395;
struct list$1voidp* __result265__;
    if(    self->len==0) {
        litem_393=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value270=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_393->prev=((void*)0);
        litem_393->next=((void*)0);
        litem_393->item=item;
        self->tail=litem_393;
        self->head=litem_393;
    }
    else if(    self->len==1) {
        litem_394=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value271=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=self->head;
        litem_394->next=((void*)0);
        litem_394->item=item;
        self->tail=litem_394;
        self->head->next=litem_394;
    }
    else {
        litem_395=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value272=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=self->tail;
        litem_395->next=((void*)0);
        litem_395->item=item;
        self->tail->next=litem_395;
        self->tail=litem_395;
    }
    self->len++;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct buffer* buf_396;
struct list$1voidph* o2_saved_397;
struct tuple2$2charphsTypeph* it_398;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_399=0;
struct sType* type_400=0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* id_401;
void* __right_value278 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    buf_396=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    klass->mParentClassName) {
        buffer_append_format(buf_396,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_396,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_397=(struct list$1voidph*)come_increment_ref_count((klass->mFields)),it_398=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_397)));    !list$1voidphp_end((o2_saved_397));    it_398=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_397)))    ){
        multiple_assign_var2=it_398;
        name_399=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_400=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_400->mStatic=(_Bool)0;
        buffer_append_str(buf_396,"    ");
        buffer_append_str(buf_396,((char*)(__right_value276=make_define_var_no_solved(type_400,name_399,(_Bool)0,(_Bool)1,info))));
        (__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_396,";\n");
        (name_399 = come_decrement_ref_count2(name_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_397,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_396,"};\n");
    }
    else {
        buffer_append_format(buf_396,"} %s;\n",klass->mAttribute);
    }
    id_401=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_401,"%s",((char*)(__right_value278=buffer_to_string(buf_396))));
    (__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (id_401 = come_decrement_ref_count2(id_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_402;
struct sClass* klass_403;
int i_404;
void* __right_value279 = (void*)0;
_Bool result_405;
    type2_402=type->mNoSolvedGenericsType;
    if(    type2_402&&is_contained_generics_types(type2_402,info)) {
        return (_Bool)1;
    }
    klass_403=type->mClass;
    if(    klass_403->mGenerics) {
        return (_Bool)1;
    }
    for(    i_404=0;    i_404<list$1voidphp_length(type->mGenericsTypes);    i_404++    ){
        result_405=is_contained_generics_types(((struct sType*)((void*)(__right_value279=list$1voidphp_operator_load_element(type->mGenericsTypes,i_404)))),info);
        come_call_finalizer3(__right_value279,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        result_405) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_406;
struct sClass* klass_407;
int i_408;
void* __right_value280 = (void*)0;
_Bool result_409;
    type2_406=type->mNoSolvedGenericsType;
    if(    type2_406&&is_contained_method_generics_types(type2_406,info)) {
        return (_Bool)1;
    }
    klass_407=type->mClass;
    if(    klass_407->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_408=0;    i_408<list$1voidphp_length(type->mGenericsTypes);    i_408++    ){
        result_409=is_contained_method_generics_types(((struct sType*)((void*)(__right_value280=list$1voidphp_operator_load_element(type->mGenericsTypes,i_408)))),info);
        come_call_finalizer3(__right_value280,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        result_409) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value281 = (void*)0;
char* new_name_410;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sClass* generics_class_413;
void* __right_value284 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var3 = (void*)0;
int come_exception_var_c1_414=0;
char* Err_415=0;
_Bool __result267__;
void* __right_value285 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sClass* new_class_426;
int i_427;
struct list$1voidph* o2_saved_428;
struct tuple2$2charphsTypeph* it_429;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* name_430=0;
struct sType* type_431=0;
void* __right_value301 = (void*)0;
struct sType* new_type_432;
void* __right_value305 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sType* __dec_obj92;
void* __right_value342 = (void*)0;
struct sType* __dec_obj93;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
_Bool __result290__;
    new_name_410=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2voidphvoidphp_find(info->classes,new_name_410)) {
        generics_class_413=((struct sClass*)((void*)(__right_value283=map$2voidphvoidphp_operator_load_element(info->generics_classes,((char*)(__right_value282=__builtin_string(type->mClass->mName)))))));
        (__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value283,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_class_413==((void*)0)) {
            multiple_assign_var3=((struct tuple2$2intcharph*)(__right_value284=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            come_exception_var_c1_414=multiple_assign_var3->v1;
            Err_415=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_415)?(puts(Err_415),exit(0)):(0));
            come_call_finalizer3(__right_value284,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __result267__ = (_Bool)0;
            (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (new_name_410 = come_decrement_ref_count2(new_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result267__;
            (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_410)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 188, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),new_name_410,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_426=((struct sClass*)((void*)(__right_value300=map$2voidphvoidphp_at(info->classes,((char*)(__right_value299=__builtin_string(new_name_410))),((void*)0)))));
        (__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value300,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        new_class_426->mDynamic=generics_class_413->mDynamic;
        i_427=0;
        for(        o2_saved_428=(struct list$1voidph*)come_increment_ref_count((generics_class_413->mFields)),it_429=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_428)));        !list$1voidphp_end((o2_saved_428));        it_429=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_428)))        ){
            multiple_assign_var4=it_429;
            name_430=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            type_431=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
            new_type_432=(struct sType*)come_increment_ref_count(solve_generics(type_431,generics_type,info));
            list$1voidphp_push_back(new_class_426->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 200, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_430)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_432)))));
            (name_430 = come_decrement_ref_count2(name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_428,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj92=type->mNoSolvedGenericsType;
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_426;
        list$1voidphp_reset(type->mGenericsTypes);
        output_struct(new_class_426,info);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1voidphp_length(type->mGenericsTypes)>0) {
            __dec_obj93=type->mNoSolvedGenericsType;
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)((void*)(__right_value344=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value343=__builtin_string(new_name_410)))))));
        (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value344,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        list$1voidphp_reset(type->mGenericsTypes);
    }
    __result290__ = (_Bool)1;
    (new_name_410 = come_decrement_ref_count2(new_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result290__;
}

static _Bool map$2voidphvoidphp_find(struct map$2voidphvoidph* self, void* key){
unsigned int hash_411;
int it_412;
    hash_411=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_412=hash_411;
    while((_Bool)1) {
        if(        self->item_existance[it_412]) {
            if(            come_call_equals((void*)0, self->keys[it_412], key)) {
                return (_Bool)1;
            }
            it_412++;
            if(            it_412>=self->size) {
                it_412=0;
            }
            else if(            it_412==hash_411) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj48;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj48=self->v2;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj49;
struct list$1voidph* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj49=self->mName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj50=self->mFields;
            come_call_finalizer3(__dec_obj50,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj51=self->mParentClassName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result268__;
void* __right_value286 = (void*)0;
struct sClass* result_419;
void* __right_value287 = (void*)0;
char* __dec_obj53;
void* __right_value294 = (void*)0;
struct list$1voidph* __dec_obj57;
void* __right_value295 = (void*)0;
char* __dec_obj58;
void* __right_value296 = (void*)0;
char* __dec_obj59;
struct sClass* __result273__;
    if(    self==(void*)0) {
        __result268__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_419=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_419->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_419->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_419->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_419->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_419->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_419->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_419->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_419->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj53=result_419->mName;
        result_419->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_419->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj57=result_419->mFields;
        result_419->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj57,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj58=result_419->mParentClassName;
        result_419->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj59=result_419->mAttribute;
        result_419->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mDynamic=self->mDynamic;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_419;
    come_call_finalizer3(result_419,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_416;
    result_416=0;
    result_416+=int_get_hash_key(((int)self->mStruct));
    result_416+=int_get_hash_key(((int)self->mFloat));
    result_416+=int_get_hash_key(((int)self->mUnion));
    result_416+=int_get_hash_key(((int)self->mGenerics));
    result_416+=int_get_hash_key(((int)self->mMethodGenerics));
    result_416+=int_get_hash_key(((int)self->mEnum));
    result_416+=int_get_hash_key(((int)self->mProtocol));
    result_416+=int_get_hash_key(((int)self->mNumber));
    result_416+=int_get_hash_key(((int)self->mName));
    result_416+=int_get_hash_key(((int)self->mGenericsNum));
    result_416+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_416+=int_get_hash_key(((int)self->mFields));
    result_416+=int_get_hash_key(((int)self->mParentClassName));
    result_416+=int_get_hash_key(((int)self->mAttribute));
    result_416+=int_get_hash_key(((int)self->mDynamic));
    return result_416;
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
struct list_item$1voidph* it_417;
struct list_item$1voidph* it2_418;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_417=left->head;
    it2_418=right->head;
    while(it_417!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_417->item, it2_418->item)) {
            return (_Bool)0;
        }
        it_417=it_417->next;
        it2_418=it2_418->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result269__;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1voidph* result_421;
struct list_item$1voidph* it_422;
void* __right_value293 = (void*)0;
struct list$1voidph* __result272__;
    if(    self==((void*)0)) {
        __result269__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_421=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_422=self->head;
    while(it_422!=((void*)0)) {
        list$1voidphp_add(result_421,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_422->item)));
        it_422=it_422->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_421;
    come_call_finalizer3(result_421,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_420;
    result_420=0;
    result_420+=int_get_hash_key(((int)self->head));
    result_420+=int_get_hash_key(((int)self->tail));
    result_420+=int_get_hash_key(((int)self->len));
    result_420+=int_get_hash_key(((int)self->it));
    return result_420;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result270__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
struct list_item$1voidph* litem_423;
void* __dec_obj54;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_424;
void* __dec_obj55;
void* __right_value292 = (void*)0;
struct list_item$1voidph* litem_425;
void* __dec_obj56;
struct list$1voidph* __result271__;
    if(    self->len==0) {
        litem_423=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value290=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_423->prev=((void*)0);
        litem_423->next=((void*)0);
        __dec_obj54=litem_423->item;
        litem_423->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_423;
        self->head=litem_423;
    }
    else if(    self->len==1) {
        litem_424=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=self->head;
        litem_424->next=((void*)0);
        __dec_obj55=litem_424->item;
        litem_424->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_424;
        self->head->next=litem_424;
    }
    else {
        litem_425=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value292=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_425->prev=self->tail;
        litem_425->next=((void*)0);
        __dec_obj56=litem_425->item;
        litem_425->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_425;
        self->tail=litem_425;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct list_item$1voidph* litem_433;
void* __dec_obj60;
void* __right_value303 = (void*)0;
struct list_item$1voidph* litem_434;
void* __dec_obj61;
void* __right_value304 = (void*)0;
struct list_item$1voidph* litem_435;
void* __dec_obj62;
struct list$1voidph* __result274__;
    if(    self->len==0) {
        litem_433=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value302=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_433->prev=((void*)0);
        litem_433->next=((void*)0);
        __dec_obj60=litem_433->item;
        litem_433->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_433;
        self->head=litem_433;
    }
    else if(    self->len==1) {
        litem_434=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value303=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_434->prev=self->head;
        litem_434->next=((void*)0);
        __dec_obj61=litem_434->item;
        litem_434->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_434;
        self->head->next=litem_434;
    }
    else {
        litem_435=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value304=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_435->prev=self->tail;
        litem_435->next=((void*)0);
        __dec_obj62=litem_435->item;
        litem_435->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_435;
        self->tail=litem_435;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result275__;
void* __right_value306 = (void*)0;
struct sType* result_441;
void* __right_value307 = (void*)0;
struct sType* __dec_obj63;
void* __right_value308 = (void*)0;
struct sType* __dec_obj64;
void* __right_value309 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value310 = (void*)0;
struct sType* __dec_obj66;
void* __right_value311 = (void*)0;
struct sType* __dec_obj67;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj68;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value315 = (void*)0;
char* __dec_obj70;
void* __right_value316 = (void*)0;
char* __dec_obj71;
void* __right_value317 = (void*)0;
char* __dec_obj72;
void* __right_value324 = (void*)0;
struct list$1sNodeph* __dec_obj76;
void* __right_value325 = (void*)0;
char* __dec_obj77;
void* __right_value326 = (void*)0;
struct list$1voidph* __dec_obj78;
void* __right_value333 = (void*)0;
struct list$1charph* __dec_obj82;
void* __right_value334 = (void*)0;
struct sType* __dec_obj83;
struct sType* __result285__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_441=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_441->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj63=result_441->mOriginalLoadVarType;
        result_441->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj64=result_441->mChannelType;
        result_441->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=result_441->mGenericsTypes;
        result_441->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj66=result_441->mNoSolvedGenericsType;
        result_441->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj67=result_441->mAnyOriginalType;
        result_441->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj68=result_441->mSizeNum;
        result_441->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj69=result_441->mAlignas;
        result_441->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj70=result_441->mTupleName;
        result_441->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj71=result_441->mAttribute;
        result_441->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_441->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_441->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_441->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_441->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_441->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_441->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_441->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_441->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_441->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_441->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_441->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_441->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_441->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_441->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_441->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_441->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_441->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_441->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_441->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_441->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_441->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_441->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_441->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_441->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_441->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj72=result_441->mAsmName;
        result_441->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_441->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_441->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_441->mArrayNum;
        result_441->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_441->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_441->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_441->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_441->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_441->mOriginalTypeName;
        result_441->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_441->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_441->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_441->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj78=result_441->mParamTypes;
        result_441->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj78,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj82=result_441->mParamNames;
        result_441->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj83=result_441->mResultType;
        result_441->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mVarArgs=self->mVarArgs;
    }
    __result285__ = gComeFunResultObject = __result_obj__ = result_441;
    come_call_finalizer3(result_441,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_436;
    result_436=0;
    result_436+=int_get_hash_key(((int)self->mClass));
    result_436+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_436+=int_get_hash_key(((int)self->mChannelType));
    result_436+=int_get_hash_key(((int)self->mGenericsTypes));
    result_436+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_436+=int_get_hash_key(((int)self->mAnyClass));
    result_436+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_436+=int_get_hash_key(((int)self->mSizeNum));
    result_436+=int_get_hash_key(((int)self->mAlignas));
    result_436+=int_get_hash_key(((int)self->mTupleName));
    result_436+=int_get_hash_key(((int)self->mAttribute));
    result_436+=int_get_hash_key(((int)self->mAllocaValue));
    result_436+=int_get_hash_key(((int)self->mUnsigned));
    result_436+=int_get_hash_key(((int)self->mShort));
    result_436+=int_get_hash_key(((int)self->mLong));
    result_436+=int_get_hash_key(((int)self->mLongLong));
    result_436+=int_get_hash_key(((int)self->mConstant));
    result_436+=int_get_hash_key(((int)self->mAtomic));
    result_436+=int_get_hash_key(((int)self->mRegister));
    result_436+=int_get_hash_key(((int)self->mVolatile));
    result_436+=int_get_hash_key(((int)self->mStatic));
    result_436+=int_get_hash_key(((int)self->mUniq));
    result_436+=int_get_hash_key(((int)self->mRecord));
    result_436+=int_get_hash_key(((int)self->mExtern));
    result_436+=int_get_hash_key(((int)self->mRestrict));
    result_436+=int_get_hash_key(((int)self->mImmutable));
    result_436+=int_get_hash_key(((int)self->mHeap));
    result_436+=int_get_hash_key(((int)self->mChannel));
    result_436+=int_get_hash_key(((int)self->mNoHeap));
    result_436+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_436+=int_get_hash_key(((int)self->mException));
    result_436+=int_get_hash_key(((int)self->mGenerate));
    result_436+=int_get_hash_key(((int)self->mCreateVTable));
    result_436+=int_get_hash_key(((int)self->mDynamic));
    result_436+=int_get_hash_key(((int)self->mInline));
    result_436+=int_get_hash_key(((int)self->mNullValue));
    result_436+=int_get_hash_key(((int)self->mGuardValue));
    result_436+=int_get_hash_key(((int)self->mAsmName));
    result_436+=int_get_hash_key(((int)self->mTypedef));
    result_436+=int_get_hash_key(((int)self->mMultipleTypes));
    result_436+=int_get_hash_key(((int)self->mOriginIsArray));
    result_436+=int_get_hash_key(((int)self->mArrayNum));
    result_436+=int_get_hash_key(((int)self->mPointerNum));
    result_436+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_436+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_436+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_436+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_436+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_436+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_436+=int_get_hash_key(((int)self->mArrayPointerType));
    result_436+=int_get_hash_key(((int)self->mLambdaArray));
    result_436+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_436+=int_get_hash_key(((int)self->mParamTypes));
    result_436+=int_get_hash_key(((int)self->mParamNames));
    result_436+=int_get_hash_key(((int)self->mResultType));
    result_436+=int_get_hash_key(((int)self->mVarArgs));
    return result_436;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_437;
struct list_item$1sNodeph* it2_438;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_437=left->head;
    it2_438=right->head;
    while(it_437!=((void*)0)) {
        if(        !sNode_equals(it_437->item,it2_438->item)) {
            return (_Bool)0;
        }
        it_437=it_437->next;
        it2_438=it2_438->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_439;
struct list_item$1charph* it2_440;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_439=left->head;
    it2_440=right->head;
    while(it_439!=((void*)0)) {
        if(        !string_equals(it_439->item,it2_440->item)) {
            return (_Bool)0;
        }
        it_439=it_439->next;
        it2_440=it2_440->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result276__;
void* __right_value312 = (void*)0;
struct sNode* result_442;
struct sNode* __result277__;
    if(    self==(void*)0) {
        __result276__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    result_442=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_442->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_442->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_442->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_442->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_442->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_442->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_442->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_442->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_442->kind=self->kind;
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_442;
    ((result_442) ? result_442 = come_decrement_ref_count2(result_442, ((struct sNode*)result_442)->finalize, ((struct sNode*)result_442)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result278__;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct list$1sNodeph* result_443;
struct list_item$1sNodeph* it_444;
void* __right_value323 = (void*)0;
struct list$1sNodeph* __result281__;
    if(    self==((void*)0)) {
        __result278__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_443=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_444=self->head;
    while(it_444!=((void*)0)) {
        list$1sNodephp_add(result_443,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_444->item)));
        it_444=it_444->next;
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_443;
    come_call_finalizer3(result_443,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result279__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct list_item$1sNodeph* litem_445;
struct sNode* __dec_obj73;
void* __right_value321 = (void*)0;
struct list_item$1sNodeph* litem_446;
struct sNode* __dec_obj74;
void* __right_value322 = (void*)0;
struct list_item$1sNodeph* litem_447;
struct sNode* __dec_obj75;
struct list$1sNodeph* __result280__;
    if(    self->len==0) {
        litem_445=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value320=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_445->prev=((void*)0);
        litem_445->next=((void*)0);
        __dec_obj73=litem_445->item;
        litem_445->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_445;
        self->head=litem_445;
    }
    else if(    self->len==1) {
        litem_446=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value321=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_446->prev=self->head;
        litem_446->next=((void*)0);
        __dec_obj74=litem_446->item;
        litem_446->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_446;
        self->head->next=litem_446;
    }
    else {
        litem_447=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value322=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=self->tail;
        litem_447->next=((void*)0);
        __dec_obj75=litem_447->item;
        litem_447->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_447;
        self->tail=litem_447;
    }
    self->len++;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result282__;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1charph* result_448;
struct list_item$1charph* it_449;
void* __right_value332 = (void*)0;
struct list$1charph* __result284__;
    if(    self==((void*)0)) {
        __result282__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_448=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_449=self->head;
    while(it_449!=((void*)0)) {
        list$1charphp_add(result_448,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_449->item)));
        it_449=it_449->next;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_448;
    come_call_finalizer3(result_448,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
struct list_item$1charph* litem_450;
char* __dec_obj79;
void* __right_value330 = (void*)0;
struct list_item$1charph* litem_451;
char* __dec_obj80;
void* __right_value331 = (void*)0;
struct list_item$1charph* litem_452;
char* __dec_obj81;
struct list$1charph* __result283__;
    if(    self->len==0) {
        litem_450=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value329=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_450->prev=((void*)0);
        litem_450->next=((void*)0);
        __dec_obj79=litem_450->item;
        litem_450->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_450;
        self->head=litem_450;
    }
    else if(    self->len==1) {
        litem_451=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value330=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=self->head;
        litem_451->next=((void*)0);
        __dec_obj80=litem_451->item;
        litem_451->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_451;
        self->head->next=litem_451;
    }
    else {
        litem_452=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value331=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->tail;
        litem_452->next=((void*)0);
        __dec_obj81=litem_452->item;
        litem_452->item=(char*)come_increment_ref_count(item);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_452;
        self->tail=litem_452;
    }
    self->len++;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj84;
struct sType* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result286__;
void* __right_value336 = (void*)0;
struct tuple2$2charphsTypeph* result_453;
void* __right_value337 = (void*)0;
char* __dec_obj86;
void* __right_value338 = (void*)0;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_453=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj86=result_453->v1;
        result_453->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj87=result_453->v2;
        result_453->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_453;
    come_call_finalizer3(result_453,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_454;
    result_454=0;
    result_454+=int_get_hash_key(((int)self->v1));
    result_454+=int_get_hash_key(((int)self->v2));
    return result_454;
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
char* __dec_obj88;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result288__;
    __dec_obj88=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj90;
struct sType* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_455;
struct list_item$1voidph* prev_it_456;
struct list$1voidph* __result289__;
    it_455=self->head;
    while(it_455!=((void*)0)) {
        prev_it_456=it_455;
        it_455=it_455->next;
        come_call_finalizer3(prev_it_456,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* __dec_obj95;
void* __right_value347 = (void*)0;
struct sClass* __dec_obj96;
struct sStructNode* __result291__;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value345,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj96=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj96,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value348=__builtin_string("sStructNode")));
    (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_457;
void* __right_value349 = (void*)0;
char* name_458;
_Bool __result293__;
    klass_457=(struct sClass*)come_increment_ref_count(self->mClass);
    name_458=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_457,info);
    __result293__ = (_Bool)1;
    come_call_finalizer3(klass_457,sClass_finalize, 0, 0, 0, 0, (void*)0);
    (name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result293__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj94=self->sname;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj97;
char* __dec_obj98;
struct sClass* __dec_obj99;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj97=self->sname;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj98=self->mName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj99=self->mClass;
            come_call_finalizer3(__dec_obj99,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
char* __dec_obj100;
void* __right_value352 = (void*)0;
struct sClass* __dec_obj101;
struct sStructNobodyNode* __result294__;
    ((struct sNodeBase*)(__right_value350=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value350,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj100=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj101,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value353=__builtin_string("sStructNobodyNode")));
    (__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value354 = (void*)0;
char* name_459;
struct sClass* klass_460;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
_Bool __result296__;
    name_459=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_460=self->mClass;
    map$2voidphvoidphp_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_459)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value356=xsprintf("struct %s;\n",name_459))))));
    (__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result296__ = (_Bool)1;
    (name_459 = come_decrement_ref_count2(name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result296__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj102;
char* __dec_obj103;
struct sClass* __dec_obj104;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj102=self->sname;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj103=self->mName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj104=self->mClass;
            come_call_finalizer3(__dec_obj104,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
struct sNothingNode* __result297__;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sNothingNode")));
    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
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

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value364 = (void*)0;
struct sNode* __result301__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 310, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value361=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 310, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value364=_inf_value1));
    come_call_finalizer3(__right_value361,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value364) ? __right_value364 = come_decrement_ref_count2(__right_value364, ((struct sNode*)__right_value364)->finalize, ((struct sNode*)__right_value364)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result299__;
void* __right_value362 = (void*)0;
struct sNothingNode* result_461;
void* __right_value363 = (void*)0;
char* __dec_obj106;
struct sNothingNode* __result300__;
    if(    self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_461=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_461->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj106=result_461->sname;
        result_461->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->sline_real=self->sline_real;
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_461;
    come_call_finalizer3(result_461,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
char* __dec_obj107;
void* __right_value367 = (void*)0;
struct sClass* __dec_obj108;
struct list$1sNodeph* __dec_obj109;
struct sClassNode* __result302__;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value365,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj107=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj108,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj109=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj109,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value368=__builtin_string("sClassNode")));
    (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value369 = (void*)0;
struct sClass* klass_462;
void* __right_value370 = (void*)0;
char* name_463;
void* __right_value371 = (void*)0;
_Bool _if_conditional2;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
_Bool _elif_conditional1;
void* __right_value374 = (void*)0;
struct sClass* klass2_464;
void* __right_value375 = (void*)0;
struct list$1voidph* __dec_obj114;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* type_465;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* override__466;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct list$1sNodeph* o2_saved_467;
struct sNode* it_470;
_Bool Value_473;
_Bool __result310__;
_Bool __result311__;
    klass_462=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
    name_463=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)((void*)(__right_value371=map$2voidphvoidphp_at(info->classes,name_463,((void*)0)))))==((void*)0))),    come_call_finalizer3(__right_value371,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional2) {
        map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(name_463),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_462)));
    }
    else if(    (_elif_conditional1=(list$1voidphp_length(((struct sClass*)((void*)(__right_value373=map$2voidphvoidphp_at(info->classes,name_463,((void*)0)))))->mFields)==0&&list$1voidphp_length(klass_462->mFields)>0)),    come_call_finalizer3(__right_value373,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _elif_conditional1) {
        klass2_464=((struct sClass*)((void*)(__right_value374=map$2voidphvoidphp_at(info->classes,name_463,((void*)0)))));
        come_call_finalizer3(__right_value374,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        __dec_obj114=klass2_464->mFields;
        klass2_464->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, klass_462->mFields));
        come_call_finalizer3(__dec_obj114,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    type_465=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 348, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),name_463,(_Bool)0,info));
    override__466=((struct sType*)((void*)(__right_value379=map$2voidphvoidphp_at(info->types,((char*)(__right_value378=__builtin_string(name_463))),((void*)0)))));
    (__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value379,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    override__466) {
        if(        override__466->mTypedef) {
            type_465->mTypedef=(_Bool)1;
        }
    }
    map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_463)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_465)));
    output_struct(klass_462,info);
    for(    o2_saved_467=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_470=list$1sNodephp_begin((o2_saved_467));    !list$1sNodephp_end((o2_saved_467));    it_470=list$1sNodephp_next((o2_saved_467))    ){
        Value_473=node_compile(it_470,info);
        if(        !Value_473) {
            __result310__ = (_Bool)0;
            come_call_finalizer3(o2_saved_467,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_462,sClass_finalize, 0, 0, 0, 0, (void*)0);
            (name_463 = come_decrement_ref_count2(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result310__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_467,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_462,info);
    __result311__ = (_Bool)1;
    come_call_finalizer3(klass_462,sClass_finalize, 0, 0, 0, 0, (void*)0);
    (name_463 = come_decrement_ref_count2(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result311__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj110;
char* __dec_obj111;
struct sClass* __dec_obj112;
struct list$1sNodeph* __dec_obj113;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj110=self->sname;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj111=self->mName;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj112=self->mClass;
            come_call_finalizer3(__dec_obj112,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj113=self->mMethods;
            come_call_finalizer3(__dec_obj113,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_468;
struct sNode* __result304__;
struct sNode* __result305__;
struct sNode* result_469;
struct sNode* __result306__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_468,0,sizeof(struct sNode*));
        __result304__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    self->it=self->head;
    if(    self->it) {
        __result305__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    memset(&result_469,0,sizeof(struct sNode*));
    __result306__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_471;
struct sNode* __result307__;
struct sNode* __result308__;
struct sNode* result_472;
struct sNode* __result309__;
result_471 = (void*)0;
result_472 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_471,0,sizeof(struct sNode*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_471;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_472,0,sizeof(struct sNode*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_472;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_474;
void* __right_value382 = (void*)0;
_Bool _if_conditional3;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sType* type_475;
void* __right_value389 = (void*)0;
struct sType* override__476;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* type_477;
void* __right_value395 = (void*)0;
struct sType* override__478;
void* __right_value396 = (void*)0;
struct sClass* parent_class_479;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
char* parent_class_name_480;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var5 = (void*)0;
int come_exception_var_c2_481=0;
char* Err_482=0;
struct sNode* __result312__;
_Bool multiple_declare_483;
char* p_484;
int sline_485;
void* __right_value401 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_486=0;
char* name_487=0;
_Bool err_488=0;
void* __right_value402 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_489=0;
char* name_490=0;
_Bool err_491=0;
void* __right_value403 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_492=0;
char* name2_493=0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_494=0;
char* name2_495=0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type2_496=0;
char* name_497=0;
_Bool err_498=0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
char* struct_attribute2_499;
void* __right_value413 = (void*)0;
char* __dec_obj119;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
char* __dec_obj120;
char* __dec_obj121;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* __dec_obj122;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value425 = (void*)0;
struct sNode* node_500;
_Bool Value_502;
struct sNode* __result315__;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value428 = (void*)0;
struct sNode* __result316__;
klass_474 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)((void*)(__right_value382=map$2voidphvoidphp_at(info->classes,type_name,((void*)0)))))==((void*)0))),    come_call_finalizer3(__right_value382,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional3) {
        map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 375, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),((char*)(__right_value385=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        (__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        type_475=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 376, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name,(_Bool)0,info));
        override__476=((struct sType*)((void*)(__right_value389=map$2voidphvoidphp_at(info->types,type_name,((void*)0)))));
        come_call_finalizer3(__right_value389,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        override__476) {
            if(            override__476->mTypedef) {
                type_475->mTypedef=(_Bool)1;
            }
        }
        map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475)));
        klass_474=((struct sClass*)((void*)(__right_value391=map$2voidphvoidphp_at(info->classes,type_name,((void*)0)))));
        come_call_finalizer3(__right_value391,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_474=((struct sClass*)((void*)(__right_value392=map$2voidphvoidphp_at(info->classes,type_name,((void*)0)))));
        come_call_finalizer3(__right_value392,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        type_477=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 389, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name,(_Bool)0,info));
        override__478=((struct sType*)((void*)(__right_value395=map$2voidphvoidphp_at(info->types,type_name,((void*)0)))));
        come_call_finalizer3(__right_value395,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        override__478) {
            if(            override__478->mTypedef) {
                type_477->mTypedef=(_Bool)1;
            }
        }
        map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_477)));
        come_call_finalizer3(type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_479=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value397=parse_word(info)));
        (__right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        parent_class_name_480=(char*)come_increment_ref_count(parse_word(info));
        parent_class_479=((struct sClass*)((void*)(__right_value399=map$2voidphvoidphp_operator_load_element(info->classes,parent_class_name_480))));
        come_call_finalizer3(__right_value399,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        parent_class_479==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2intcharph*)(__right_value400=err_msg(info,"invalid class name(%s)",parent_class_name_480)));
            come_exception_var_c2_481=multiple_assign_var5->v1;
            Err_482=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_482)?(puts(Err_482),exit(0)):(0));
            come_call_finalizer3(__right_value400,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            __result312__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            (Err_482 = come_decrement_ref_count2(Err_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (parent_class_name_480 = come_decrement_ref_count2(parent_class_name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result312__;
            (Err_482 = come_decrement_ref_count2(Err_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (parent_class_name_480 = come_decrement_ref_count2(parent_class_name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_483=(_Bool)0;
        {
            p_484=info->p;
            sline_485=info->sline;
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value401=backtrace_parse_type((_Bool)1,info)));
            type_486=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_487=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_488=multiple_assign_var6->v3;
            come_call_finalizer3(__right_value401,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_488&&*info->p==44) {
                multiple_declare_483=(_Bool)1;
            }
            info->p=p_484;
            info->sline=sline_485;
            come_call_finalizer3(type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        multiple_declare_483) {
            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value402=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_489=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name_490=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            err_491=multiple_assign_var7->v3;
            come_call_finalizer3(__right_value402,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value403=parse_variable_name((struct sType*)come_increment_ref_count(base_type_489),(_Bool)1,info)));
            type2_492=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name2_493=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            come_call_finalizer3(__right_value403,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1voidphp_push_back(klass_474->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 446, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_493),(struct sType*)come_increment_ref_count(type2_492))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value406=parse_variable_name((struct sType*)come_increment_ref_count(base_type_489),(_Bool)0,info)));
                type2_494=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name2_495=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                come_call_finalizer3(__right_value406,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1voidphp_push_back(klass_474->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 454, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_495),(struct sType*)come_increment_ref_count(type2_494))));
                come_call_finalizer3(type2_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name2_495 = come_decrement_ref_count2(name2_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(base_type_489,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_490 = come_decrement_ref_count2(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type2_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name2_493 = come_decrement_ref_count2(name2_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value409=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_496=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_497=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_498=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value409,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_498) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1voidphp_push_back(klass_474->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 465, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_497),(struct sType*)come_increment_ref_count(type2_496))));
            come_call_finalizer3(type2_496,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_497 = come_decrement_ref_count2(name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_499=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_479) {
        __dec_obj119=klass_474->mParentClassName;
        klass_474->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_479->mName));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_474->mName)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_474)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_499,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj120=klass_474->mAttribute;
        klass_474->mAttribute=(char*)come_increment_ref_count(struct_attribute2_499);
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_499,"")) {
        __dec_obj121=klass_474->mAttribute;
        klass_474->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj122=klass_474->mAttribute;
        klass_474->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value416=charp_operator_add(" ",struct_attribute2_499)))));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 501, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value420=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 501, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_474,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_500=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value420,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_502=node_compile(node_500,info);
    if(    !Value_502) {
        __result315__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        (type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute2_499 = come_decrement_ref_count2(struct_attribute2_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_500) ? node_500 = come_decrement_ref_count2(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 507, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value427=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 507, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result316__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value428=_inf_value3));
    (type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute2_499 = come_decrement_ref_count2(struct_attribute2_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((node_500) ? node_500 = come_decrement_ref_count2(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value427,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value428) ? __right_value428 = come_decrement_ref_count2(__right_value428, ((struct sNode*)__right_value428)->finalize, ((struct sNode*)__right_value428)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj115;
char* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
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

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result313__;
void* __right_value421 = (void*)0;
struct sStructNode* result_501;
void* __right_value422 = (void*)0;
char* __dec_obj123;
void* __right_value423 = (void*)0;
char* __dec_obj124;
void* __right_value424 = (void*)0;
struct sClass* __dec_obj125;
struct sStructNode* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_501=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_501->sname;
        result_501->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_501->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj124=result_501->mName;
        result_501->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj125=result_501->mClass;
        result_501->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj125,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_501;
    come_call_finalizer3(result_501,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct buffer* result_503;
char* head_504;
char* tail_505;
void* __right_value431 = (void*)0;
char* __result317__;
    parse_sharp_v5(info);
    result_503=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 513, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_504=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_505=info->p;
            buffer_append(result_503,head_504,tail_505-head_504);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value431=buffer_to_string(result_503)));
    come_call_finalizer3(result_503,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result317__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool dynamic__506;
char* buf2_507;
void* __right_value432 = (void*)0;
char* __dec_obj126;
char* source_head_508;
void* __right_value433 = (void*)0;
char* struct_attribute_509;
void* __right_value434 = (void*)0;
char* type_name_510;
struct sClass* struct_class_511;
void* __right_value435 = (void*)0;
_Bool _if_conditional4;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* type_512;
void* __right_value441 = (void*)0;
struct sType* override__513;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* type_514;
void* __right_value445 = (void*)0;
struct sType* override__515;
char* source_tail_516;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct buffer* header_517;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* id_518;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value458 = (void*)0;
struct sNode* __result320__;
void* __right_value459 = (void*)0;
char* T_522;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var11 = (void*)0;
int come_exception_var_c3_523=0;
char* Err_524=0;
struct sClass* generics_class_525;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
_Bool _if_conditional5;
void* __right_value464 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var12 = (void*)0;
int come_exception_var_c4_526=0;
char* Err_527=0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sClass* __dec_obj130;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
_Bool _if_conditional6;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type2_528=0;
char* name_529=0;
_Bool err_530=0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* name2_531;
void* __right_value474 = (void*)0;
struct sType* type3_532;
_Bool no_comma_533;
void* __right_value475 = (void*)0;
struct sNode* node_534;
struct sNode* __dec_obj131;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
char* source_tail_535;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct buffer* header_536;
void* __right_value483 = (void*)0;
char* id_537;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value487 = (void*)0;
struct sNode* __result322__;
struct sClass* struct_class_538;
void* __right_value488 = (void*)0;
_Bool _if_conditional7;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* type_539;
void* __right_value493 = (void*)0;
struct sType* override__540;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* type_541;
void* __right_value497 = (void*)0;
struct sType* override__542;
void* __right_value498 = (void*)0;
struct sClass* parent_class_543;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* parent_class_name_544;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var14 = (void*)0;
int come_exception_var_c5_545=0;
char* Err_546=0;
struct sNode* __result323__;
_Bool multiple_declare_547;
char* p_548;
int sline_549;
void* __right_value503 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_550=0;
char* name_551=0;
_Bool err_552=0;
void* __right_value504 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* base_type_553=0;
char* name_554=0;
_Bool err_555=0;
void* __right_value505 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var17 = (void*)0;
struct sType* type2_556=0;
char* name2_557=0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_558=0;
char* name2_559=0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var19 = (void*)0;
struct sType* type2_560=0;
char* name_561=0;
_Bool err_562=0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* struct_attribute2_563;
void* __right_value515 = (void*)0;
struct sClass* klass2_564;
char* source_tail_565;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct buffer* header_566;
void* __right_value518 = (void*)0;
char* id_567;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
char* __dec_obj134;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
char* __dec_obj135;
char* __dec_obj136;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj137;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value528 = (void*)0;
struct sNode* __result324__;
char* source_head_568;
void* __right_value529 = (void*)0;
char* type_name_569;
void* __right_value530 = (void*)0;
char* id_570;
struct sClass* parent_class_571;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* parent_class_name_572;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var20 = (void*)0;
int come_exception_var_c6_573=0;
char* Err_574=0;
struct sNode* __result325__;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1sClassp* parent_classes_575;
struct sClass* parent_class2_578;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sClass* struct_class_582;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
_Bool _if_conditional8;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sClass* __dec_obj138;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sClass* __dec_obj139;
struct sClass* defining_class_583;
void* __right_value549 = (void*)0;
_Bool _if_conditional9;
void* __right_value550 = (void*)0;
char* __dec_obj140;
void* __right_value551 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1sClassp* o2_saved_589;
struct sClass* parent_592;
struct list$1voidph* o2_saved_595;
struct tuple2$2charphsTypeph* it_596;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
_Bool _elif_conditional2;
void* __right_value560 = (void*)0;
struct sClass* klass2_597;
void* __right_value561 = (void*)0;
char* __dec_obj141;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1sClassp* o2_saved_598;
struct sClass* parent_599;
struct list$1voidph* o2_saved_600;
struct tuple2$2charphsTypeph* it_601;
void* __right_value564 = (void*)0;
struct list$1voidph* o2_saved_602;
struct tuple2$2charphsTypeph* it_603;
void* __right_value565 = (void*)0;
char* head_604;
char* p_saved_605;
int sline_saved_606;
char* sname_saved_607;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1sNodeph* methods_608;
void* __right_value568 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
struct map$2voidphvoidph* __dec_obj144;
_Bool include__613;
_Bool multiple_declare_614;
char* p_615;
int sline_616;
void* __right_value569 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21 = (void*)0;
struct sType* type_617=0;
char* name_618=0;
_Bool err_619=0;
_Bool define_function_flag_620;
char* p_621;
int sline_622;
_Bool invalid_type_623;
void* __right_value570 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var22 = (void*)0;
struct sType* result_type_624=0;
char* fun_name_625=0;
_Bool err_626=0;
char* word_627;
void* __right_value571 = (void*)0;
char* __dec_obj145;
void* __right_value572 = (void*)0;
char* __dec_obj146;
char* __dec_obj147;
void* __right_value573 = (void*)0;
char* __dec_obj148;
char* tail_628;
int pointer_num_629;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* __dec_obj149;
void* __right_value576 = (void*)0;
struct sNode* method_630;
struct sType* __dec_obj150;
void* __right_value580 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var23 = (void*)0;
struct sType* base_type_634=0;
char* name_635=0;
_Bool err_636=0;
void* __right_value581 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var24 = (void*)0;
struct sType* type2_637=0;
char* name2_638=0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var25 = (void*)0;
struct sType* type2_639=0;
char* name2_640=0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
char* module_name_641;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1charph* params_642;
void* __right_value591 = (void*)0;
char* word_643;
void* __right_value592 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var26 = (void*)0;
int come_exception_var_c7_644=0;
char* Err_645=0;
void* __right_value593 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var27 = (void*)0;
int come_exception_var_c8_646=0;
char* Err_647=0;
void* __right_value594 = (void*)0;
char* __dec_obj154;
void* __right_value595 = (void*)0;
char* __dec_obj155;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
_Bool _if_conditional10;
void* __right_value598 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var28 = (void*)0;
int come_exception_var_c9_648=0;
char* Err_649=0;
struct sNode* __result337__;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sClassModule* module_650;
void* __right_value601 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var29 = (void*)0;
int come_exception_var_c10_651=0;
char* Err_652=0;
void* __right_value609 = (void*)0;
void* __right_value615 = (void*)0;
struct map$2voidphvoidph* __dec_obj158;
int i_666;
struct list$1charph* o2_saved_667;
char* it_670;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
char* __dec_obj159;
void* __right_value620 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var30 = (void*)0;
struct sType* type2_676=0;
char* name_677=0;
_Bool err_678=0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
char* __dec_obj160;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value633 = (void*)0;
struct sNode* __result356__;
void* __right_value634 = (void*)0;
struct sNode* __result357__;
buf2_507 = (void*)0;
struct_class_511 = (void*)0;
generics_class_525 = (void*)0;
struct_class_538 = (void*)0;
struct_class_582 = (void*)0;
    dynamic__506=(_Bool)0;
    if(    charp_operator_equals(buf,"dynamic")) {
        __dec_obj126=buf2_507;
        buf2_507=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        dynamic__506=(_Bool)1;
    }
    if(    (dynamic__506&&string_operator_equals(buf2_507,"struct"))||charp_operator_equals(buf,"struct")) {
        source_head_508=head;
        struct_attribute_509=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_510=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)((void*)(__right_value435=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))))==((void*)0))),            come_call_finalizer3(__right_value435,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional4) {
                map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_510),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 556, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_510,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_511=((struct sClass*)((void*)(__right_value438=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value438,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 558, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_510,(_Bool)0,info));
                override__513=((struct sType*)((void*)(__right_value441=map$2voidphvoidphp_at(info->types,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value441,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__513) {
                    if(                    override__513->mTypedef) {
                        type_512->mTypedef=(_Bool)1;
                    }
                }
                map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(type_name_510),(struct sType*)come_increment_ref_count(type_512));
                come_call_finalizer3(type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_511=((struct sClass*)((void*)(__right_value442=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value442,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                type_514=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 569, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_510,(_Bool)0,info));
                override__515=((struct sType*)((void*)(__right_value445=map$2voidphvoidphp_at(info->types,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value445,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__515) {
                    if(                    override__515->mTypedef) {
                        type_514->mTypedef=(_Bool)1;
                    }
                }
                map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(type_name_510),(struct sType*)come_increment_ref_count(type_514));
                come_call_finalizer3(type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_516=info->p;
            header_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 581, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_517,source_head_508,source_tail_516-source_head_508);
            id_518=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value448=__builtin_string(type_name_510))),";"));
            (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            add_come_code_at_come_struct_header(info,id_518,"%s",((char*)(__right_value450=buffer_to_string(header_517))));
            (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 587, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value453=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 587, "struct sStructNobodyNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_510)),struct_class_511,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result320__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value458=_inf_value4));
            come_call_finalizer3(header_517,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_518 = come_decrement_ref_count2(id_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_509 = come_decrement_ref_count2(struct_attribute_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value453,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value458) ? __right_value458 = come_decrement_ref_count2(__right_value458, ((struct sNode*)__right_value458)->finalize, ((struct sNode*)__right_value458)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result320__;
            come_call_finalizer3(header_517,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_518 = come_decrement_ref_count2(id_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==60) {
            list$1charphp_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_522=(char*)come_increment_ref_count(parse_word(info));
                list$1charphp_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_522)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_522 = come_decrement_ref_count2(T_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    multiple_assign_var11=((struct tuple2$2intcharph*)(__right_value461=err_msg(info,"invalid generics struct definition")));
                    come_exception_var_c3_523=multiple_assign_var11->v1;
                    Err_524=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    ((Err_524)?(puts(Err_524),exit(0)):(0));
                    come_call_finalizer3(__right_value461,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (T_522 = come_decrement_ref_count2(T_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional5=(((struct sClass*)((void*)(__right_value463=map$2voidphvoidphp_at(info->generics_classes,((char*)(__right_value462=__builtin_string(type_name_510))),((void*)0)))))!=((void*)0))),            (__right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value463,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional5) {
                multiple_assign_var12=((struct tuple2$2intcharph*)(__right_value464=err_msg(info,"redifined generics struct(%s)",type_name_510)));
                come_exception_var_c4_526=multiple_assign_var12->v1;
                Err_527=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                ((Err_527)?(puts(Err_527),exit(0)):(0));
                come_call_finalizer3(__right_value464,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_527 = come_decrement_ref_count2(Err_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                __dec_obj130=generics_class_525;
                generics_class_525=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 620, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_510,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj130,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)((void*)(__right_value468=map$2voidphvoidphp_at(info->generics_classes,((char*)(__right_value467=__builtin_string(type_name_510))),((void*)0)))))==((void*)0))),            (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value468,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional6) {
                map$2voidphvoidphp_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_510)),(struct sClass*)come_increment_ref_count(generics_class_525));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value470=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_528=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_529=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_530=multiple_assign_var13->v3;
                come_call_finalizer3(__right_value470,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_530) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1voidphp_push_back(generics_class_525->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 648, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_529),(struct sType*)come_increment_ref_count(type2_528))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_531=(char*)come_increment_ref_count(parse_word(info));
                        type3_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_528));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_533=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_534=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_533;
                            __dec_obj131=type3_532->mSizeNum;
                            type3_532->mSizeNum=(struct sNode*)come_increment_ref_count(node_534);
                            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
                            ((node_534) ? node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        }
                        list$1voidphp_push_back(generics_class_525->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 670, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_531),(struct sType*)come_increment_ref_count(type3_532))));
                        (name2_531 = come_decrement_ref_count2(name2_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(type3_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1voidphp_push_back(generics_class_525->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 674, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_529),(struct sType*)come_increment_ref_count(type2_528))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_529 = come_decrement_ref_count2(name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_529 = come_decrement_ref_count2(name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            generics_class_525->mDynamic=dynamic__506;
            ((struct tuple2$2charphcharph*)(__right_value480=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value480,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charphp_reset(info->generics_type_names);
            source_tail_535=info->p;
            header_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 701, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(header_536,"struct ");
            buffer_append(header_536,source_head_508,source_tail_535-source_head_508);
            id_537=(char*)come_increment_ref_count(__builtin_string(type_name_510));
            add_come_code_at_come_struct_header(info,id_537,"%s;\n",((char*)(__right_value484=buffer_to_string(header_536))));
            (__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 708, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value486=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 708, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value487=_inf_value5));
            come_call_finalizer3(generics_class_525,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_537 = come_decrement_ref_count2(id_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_509 = come_decrement_ref_count2(struct_attribute_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value486,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value487) ? __right_value487 = come_decrement_ref_count2(__right_value487, ((struct sNode*)__right_value487)->finalize, ((struct sNode*)__right_value487)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result322__;
            come_call_finalizer3(generics_class_525,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_537 = come_decrement_ref_count2(id_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)((void*)(__right_value488=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))))==((void*)0))),            come_call_finalizer3(__right_value488,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional7) {
                map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_510),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 713, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_510,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_539=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 715, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_510,(_Bool)0,info));
                override__540=((struct sType*)((void*)(__right_value493=map$2voidphvoidphp_at(info->types,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value493,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__540) {
                    if(                    override__540->mTypedef) {
                        type_539->mTypedef=(_Bool)1;
                    }
                }
                map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(type_name_510),(struct sType*)come_increment_ref_count(type_539));
                struct_class_538=((struct sClass*)((void*)(__right_value494=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value494,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                come_call_finalizer3(type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_541=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 727, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_510,(_Bool)0,info));
                override__542=((struct sType*)((void*)(__right_value497=map$2voidphvoidphp_at(info->types,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value497,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__542) {
                    if(                    override__542->mTypedef) {
                        type_541->mTypedef=(_Bool)1;
                    }
                }
                map$2voidphvoidphp_insert(info->types,(char*)come_increment_ref_count(type_name_510),(struct sType*)come_increment_ref_count(type_541));
                struct_class_538=((struct sClass*)((void*)(__right_value498=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))));
                come_call_finalizer3(__right_value498,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                come_call_finalizer3(type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            struct_class_538==((void*)0)) {
                printf("%s is not found\n",type_name_510);
                exit(1);
            }
            parent_class_543=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value499=parse_word(info)));
                (__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                parent_class_name_544=(char*)come_increment_ref_count(parse_word(info));
                parent_class_543=((struct sClass*)((void*)(__right_value501=map$2voidphvoidphp_operator_load_element(info->classes,parent_class_name_544))));
                come_call_finalizer3(__right_value501,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                parent_class_543==((void*)0)) {
                    multiple_assign_var14=((struct tuple2$2intcharph*)(__right_value502=err_msg(info,"invalid class name(%s)",parent_class_name_544)));
                    come_exception_var_c5_545=multiple_assign_var14->v1;
                    Err_546=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    ((Err_546)?(puts(Err_546),exit(0)):(0));
                    come_call_finalizer3(__right_value502,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    __result323__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    (Err_546 = come_decrement_ref_count2(Err_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (parent_class_name_544 = come_decrement_ref_count2(parent_class_name_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (struct_attribute_509 = come_decrement_ref_count2(struct_attribute_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    gComeFunResultObject = (void*)0;
                    return __result323__;
                    (Err_546 = come_decrement_ref_count2(Err_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (parent_class_name_544 = come_decrement_ref_count2(parent_class_name_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_547=(_Bool)0;
                {
                    p_548=info->p;
                    sline_549=info->sline;
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value503=backtrace_parse_type((_Bool)1,info)));
                    type_550=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_551=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_552=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value503,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_552&&*info->p==44) {
                        multiple_declare_547=(_Bool)1;
                    }
                    info->p=p_548;
                    info->sline=sline_549;
                    come_call_finalizer3(type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                multiple_declare_547) {
                    multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value504=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_553=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                    name_554=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                    err_555=multiple_assign_var16->v3;
                    come_call_finalizer3(__right_value504,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var17=((struct tuple2$2sTypephcharph*)(__right_value505=parse_variable_name((struct sType*)come_increment_ref_count(base_type_553),(_Bool)1,info)));
                    type2_556=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                    name2_557=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                    come_call_finalizer3(__right_value505,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1voidphp_push_back(struct_class_538->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 789, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_557),(struct sType*)come_increment_ref_count(type2_556))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value508=parse_variable_name((struct sType*)come_increment_ref_count(base_type_553),(_Bool)0,info)));
                        type2_558=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name2_559=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        come_call_finalizer3(__right_value508,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1voidphp_push_back(struct_class_538->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 797, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_559),(struct sType*)come_increment_ref_count(type2_558))));
                        come_call_finalizer3(type2_558,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (name2_559 = come_decrement_ref_count2(name2_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(base_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name2_557 = come_decrement_ref_count2(name2_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    multiple_assign_var19=((struct tuple3$3sTypephcharphbool*)(__right_value511=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_560=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name_561=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    err_562=multiple_assign_var19->v3;
                    come_call_finalizer3(__right_value511,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_562) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1voidphp_push_back(struct_class_538->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 807, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_561),(struct sType*)come_increment_ref_count(type2_560))));
                    come_call_finalizer3(type2_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_561 = come_decrement_ref_count2(name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_563=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1charphp_reset(info->generics_type_names);
            klass2_564=((struct sClass*)((void*)(__right_value515=map$2voidphvoidphp_at(info->classes,type_name_510,((void*)0)))));
            come_call_finalizer3(__right_value515,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            source_tail_565=info->p;
            header_566=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 834, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_566,source_head_508,source_tail_565-source_head_508);
            id_567=(char*)come_increment_ref_count(__builtin_string(type_name_510));
            add_come_code_at_come_struct_header(info,id_567,"%s;\n",((char*)(__right_value519=buffer_to_string(header_566))));
            (__right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            parent_class_543) {
                __dec_obj134=struct_class_538->mParentClassName;
                struct_class_538->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_543->mName));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(struct_class_538->mName)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_538)));
            }
            if(            string_operator_equals(struct_attribute_509,"")&&string_operator_equals(struct_attribute2_563,"")) {
            }
            else if(            string_operator_equals(struct_attribute_509,"")) {
                __dec_obj135=struct_class_538->mAttribute;
                struct_class_538->mAttribute=(char*)come_increment_ref_count(struct_attribute2_563);
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_563,"")) {
                __dec_obj136=struct_class_538->mAttribute;
                struct_class_538->mAttribute=(char*)come_increment_ref_count(struct_attribute_509);
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj137=struct_class_538->mAttribute;
                struct_class_538->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_509,((char*)(__right_value523=charp_operator_add(" ",struct_attribute2_563)))));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            }
            struct_class_538->mDynamic=dynamic__506;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 858, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value527=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 858, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_510)),struct_class_538,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value528=_inf_value6));
            (struct_attribute2_563 = come_decrement_ref_count2(struct_attribute2_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_566,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_567 = come_decrement_ref_count2(id_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_509 = come_decrement_ref_count2(struct_attribute_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value527,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value528) ? __right_value528 = come_decrement_ref_count2(__right_value528, ((struct sNode*)__right_value528)->finalize, ((struct sNode*)__right_value528)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result324__;
            (struct_attribute2_563 = come_decrement_ref_count2(struct_attribute2_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_566,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_567 = come_decrement_ref_count2(id_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (struct_attribute_509 = come_decrement_ref_count2(struct_attribute_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    !gComeC&&(dynamic__506&&string_operator_equals(buf2_507,"class"))||charp_operator_equals(buf,"class")) {
        source_head_568=head;
        type_name_569=(char*)come_increment_ref_count(parse_word(info));
        id_570=(char*)come_increment_ref_count(__builtin_string(type_name_569));
        add_come_code_at_come_struct_header(info,id_570,"struct %s;\n",type_name_569);
        parent_class_571=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value531=parse_word(info)));
            (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            parent_class_name_572=(char*)come_increment_ref_count(parse_word(info));
            parent_class_571=((struct sClass*)((void*)(__right_value533=map$2voidphvoidphp_operator_load_element(info->classes,parent_class_name_572))));
            come_call_finalizer3(__right_value533,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            parent_class_571==((void*)0)) {
                multiple_assign_var20=((struct tuple2$2intcharph*)(__right_value534=err_msg(info,"invalid class name(%s)",parent_class_name_572)));
                come_exception_var_c6_573=multiple_assign_var20->v1;
                Err_574=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                ((Err_574)?(puts(Err_574),exit(0)):(0));
                come_call_finalizer3(__right_value534,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __result325__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                (Err_574 = come_decrement_ref_count2(Err_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (parent_class_name_572 = come_decrement_ref_count2(parent_class_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name_569 = come_decrement_ref_count2(type_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_570 = come_decrement_ref_count2(id_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result325__;
                (Err_574 = come_decrement_ref_count2(Err_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (parent_class_name_572 = come_decrement_ref_count2(parent_class_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        parent_classes_575=(struct list$1sClassp*)come_increment_ref_count(list$1sClasspp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 883, "struct list$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parent_class2_578=parent_class_571;
        while(parent_class2_578) {
            list$1sClasspp_add(parent_classes_575,parent_class2_578);
            if(            parent_class_571->mParentClassName) {
                parent_class2_578=((struct sClass*)((void*)(__right_value541=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value540=__builtin_string(parent_class_571->mParentClassName)))))));
                (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value541,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            }
            else {
                parent_class2_578=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)((void*)(__right_value543=map$2voidphvoidphp_at(info->classes,((char*)(__right_value542=__builtin_string(type_name_569))),((void*)0)))))==((void*)0))),        (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
        come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional8) {
            __dec_obj138=struct_class_582;
            struct_class_582=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 898, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_569,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj138,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            __dec_obj139=struct_class_582;
            struct_class_582=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)((void*)(__right_value547=map$2voidphvoidphp_at(info->classes,((char*)(__right_value546=__builtin_string(type_name_569))),((void*)0)))))));
            come_call_finalizer3(__dec_obj139,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            come_call_finalizer3(__right_value547,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        struct_class_582->mDynamic=dynamic__506;
        defining_class_583=info->defining_class;
        info->defining_class=struct_class_582;
        if(        (_if_conditional9=(((struct sClass*)((void*)(__right_value549=map$2voidphvoidphp_at(info->classes,type_name_569,((void*)0)))))==((void*)0))),        come_call_finalizer3(__right_value549,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional9) {
            if(            parent_class_571) {
                __dec_obj140=struct_class_582->mParentClassName;
                struct_class_582->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_571->mName));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_569),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_582)));
            for(            o2_saved_589=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value557=list$1sClasspp_reverse(parent_classes_575))))),parent_592=list$1sClasspp_begin((o2_saved_589)) ,            come_call_finalizer3(__right_value557,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClasspp_end((o2_saved_589));            parent_592=list$1sClasspp_next((o2_saved_589))            ){
                for(                o2_saved_595=(struct list$1voidph*)come_increment_ref_count((parent_592->mFields)),it_596=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_595)));                !list$1voidphp_end((o2_saved_595));                it_596=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_595)))                ){
                    list$1voidphp_add(struct_class_582->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, it_596)));
                }
                come_call_finalizer3(o2_saved_595,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_589,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1voidphp_length(((struct sClass*)((void*)(__right_value559=map$2voidphvoidphp_at(info->classes,type_name_569,((void*)0)))))->mFields)==0&&list$1voidphp_length(struct_class_582->mFields)>0)),        come_call_finalizer3(__right_value559,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _elif_conditional2) {
            klass2_597=((struct sClass*)((void*)(__right_value560=map$2voidphvoidphp_at(info->classes,type_name_569,((void*)0)))));
            come_call_finalizer3(__right_value560,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            parent_class_571) {
                __dec_obj141=klass2_597->mParentClassName;
                klass2_597->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_571->mName));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_569),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass2_597)));
            for(            o2_saved_598=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value563=list$1sClasspp_reverse(parent_classes_575))))),parent_599=list$1sClasspp_begin((o2_saved_598)) ,            come_call_finalizer3(__right_value563,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClasspp_end((o2_saved_598));            parent_599=list$1sClasspp_next((o2_saved_598))            ){
                for(                o2_saved_600=(struct list$1voidph*)come_increment_ref_count((parent_599->mFields)),it_601=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_600)));                !list$1voidphp_end((o2_saved_600));                it_601=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_600)))                ){
                    list$1voidphp_add(klass2_597->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, it_601)));
                }
                come_call_finalizer3(o2_saved_600,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_598,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_602=(struct list$1voidph*)come_increment_ref_count((struct_class_582->mFields)),it_603=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_602)));            !list$1voidphp_end((o2_saved_602));            it_603=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_602)))            ){
                list$1voidphp_add(klass2_597->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, it_603)));
            }
            come_call_finalizer3(o2_saved_602,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_604=info->p;
        p_saved_605=((void*)0);
        sline_saved_606=0;
        sname_saved_607=((void*)0);
        methods_608=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 947, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            p_saved_605) {
                if(                *info->p==0) {
                    info->p=p_saved_605;
                    info->sline=sline_saved_606;
                    __dec_obj142=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_607));
                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_605=((void*)0);
                    sline_saved_606=0;
                    __dec_obj143=sname_saved_607;
                    sname_saved_607=((void*)0);
                    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj144=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj144,map$2voidphvoidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__613=parsecmp("include",info);
            multiple_declare_614=(_Bool)0;
            if(            include__613==(_Bool)0) {
                p_615=info->p;
                sline_616=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value569=backtrace_parse_type((_Bool)1,info)));
                    type_617=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                    name_618=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    err_619=multiple_assign_var21->v3;
                    come_call_finalizer3(__right_value569,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_619&&*info->p==44) {
                        multiple_declare_614=(_Bool)1;
                    }
                    come_call_finalizer3(type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_618 = come_decrement_ref_count2(name_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_615;
                info->sline=sline_616;
            }
            define_function_flag_620=(_Bool)0;
            if(            include__613==(_Bool)0) {
                p_621=info->p;
                sline_622=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_620=(_Bool)1;
                }
                else {
                    invalid_type_623=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var22=((struct tuple3$3sTypephcharphbool*)(__right_value570=backtrace_parse_type((_Bool)0,info)));
                        result_type_624=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                        fun_name_625=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                        err_626=multiple_assign_var22->v3;
                        come_call_finalizer3(__right_value570,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_625 = come_decrement_ref_count2(fun_name_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    word_627=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj145=word_627;
                        word_627=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_627,"extern")) {
                            __dec_obj146=word_627;
                            word_627=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj147=word_627;
                        word_627=((void*)0);
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_627) {
                        if(                        is_type_name(word_627,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj148=word_627;
                                word_627=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_627)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_620=(_Bool)1;
                        }
                    }
                    (word_627 = come_decrement_ref_count2(word_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_621;
                info->sline=sline_622;
            }
            if(            define_function_flag_620) {
                tail_628=info->p;
                pointer_num_629=1;
                __dec_obj149=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1057, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_569,(_Bool)0,info));
                come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->impl_type->mPointerNum=pointer_num_629;
                info->in_class=(_Bool)1;
                method_630=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj150=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodephp_push_back(methods_608,(struct sNode*)come_increment_ref_count(method_630));
                ((method_630) ? method_630 = come_decrement_ref_count2(method_630, ((struct sNode*)method_630)->finalize, ((struct sNode*)method_630)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else if(            multiple_declare_614) {
                multiple_assign_var23=((struct tuple3$3sTypephcharphbool*)(__right_value580=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_634=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                name_635=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                err_636=multiple_assign_var23->v3;
                come_call_finalizer3(__right_value580,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var24=((struct tuple2$2sTypephcharph*)(__right_value581=parse_variable_name((struct sType*)come_increment_ref_count(base_type_634),(_Bool)1,info)));
                type2_637=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
                name2_638=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                come_call_finalizer3(__right_value581,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1voidphp_push_back(struct_class_582->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1074, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_638),(struct sType*)come_increment_ref_count(type2_637))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var25=((struct tuple2$2sTypephcharph*)(__right_value584=parse_variable_name((struct sType*)come_increment_ref_count(base_type_634),(_Bool)0,info)));
                    type2_639=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                    name2_640=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                    come_call_finalizer3(__right_value584,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1voidphp_push_back(struct_class_582->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1082, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_640),(struct sType*)come_increment_ref_count(type2_639))));
                    come_call_finalizer3(type2_639,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name2_640 = come_decrement_ref_count2(name2_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_635 = come_decrement_ref_count2(name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_637,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name2_638 = come_decrement_ref_count2(name2_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value587=parse_word(info)));
                (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                module_name_641=(char*)come_increment_ref_count(parse_word(info));
                params_642=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1091, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_643=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_642,(char*)come_increment_ref_count(word_643));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var26=((struct tuple2$2intcharph*)(__right_value592=err_msg(info,"invalid source end")));
                            come_exception_var_c7_644=multiple_assign_var26->v1;
                            Err_645=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_645)?(puts(Err_645),exit(0)):(0));
                            come_call_finalizer3(__right_value592,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_645 = come_decrement_ref_count2(Err_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_643 = come_decrement_ref_count2(word_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2intcharph*)(__right_value593=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c8_646=multiple_assign_var27->v1;
                            Err_647=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_647)?(puts(Err_647),exit(0)):(0));
                            come_call_finalizer3(__right_value593,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_647 = come_decrement_ref_count2(Err_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_643 = come_decrement_ref_count2(word_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_605=info->p;
                sline_saved_606=info->sline;
                __dec_obj154=sname_saved_607;
                sname_saved_607=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj155=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_641));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)((void*)(__right_value597=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value596=__builtin_string(module_name_641)))))))==((void*)0))),                (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                come_call_finalizer3(__right_value597,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                _if_conditional10) {
                    multiple_assign_var28=((struct tuple2$2intcharph*)(__right_value598=err_msg(info,"module not found")));
                    come_exception_var_c9_648=multiple_assign_var28->v1;
                    Err_649=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    ((Err_649)?(puts(Err_649),exit(0)):(0));
                    come_call_finalizer3(__right_value598,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    __result337__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    (Err_649 = come_decrement_ref_count2(Err_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_641 = come_decrement_ref_count2(module_name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name_569 = come_decrement_ref_count2(type_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_570 = come_decrement_ref_count2(id_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(parent_classes_575,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_582,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_saved_607 = come_decrement_ref_count2(sname_saved_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(methods_608,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    gComeFunResultObject = (void*)0;
                    return __result337__;
                    (Err_649 = come_decrement_ref_count2(Err_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_650=((struct sClassModule*)((void*)(__right_value600=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value599=__builtin_string(module_name_641)))))));
                (__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value600,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                list$1charphp_length(module_650->mParams)!=list$1charphp_length(params_642)) {
                    multiple_assign_var29=((struct tuple2$2intcharph*)(__right_value601=err_msg(info,"invalid parametor number")));
                    come_exception_var_c10_651=multiple_assign_var29->v1;
                    Err_652=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                    ((Err_652)?(puts(Err_652),exit(0)):(0));
                    come_call_finalizer3(__right_value601,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(1);
                    (Err_652 = come_decrement_ref_count2(Err_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj158=info->module_params;
                info->module_params=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "14struct.c", 1145, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
                come_call_finalizer3(__dec_obj158,map$2voidphvoidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_666=0;
                for(                o2_saved_667=(struct list$1charph*)come_increment_ref_count((module_650->mParams)),it_670=list$1charphp_begin((o2_saved_667));                !list$1charphp_end((o2_saved_667));                it_670=list$1charphp_next((o2_saved_667))                ){
                    map$2voidphvoidphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_670)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value617=list$1charphp_operator_load_element(params_642,i_666))))));
                    (__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    i_666++;
                }
                come_call_finalizer3(o2_saved_667,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_650->mText;
                info->sline=module_650->mSLine;
                __dec_obj159=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_650->mSName));
                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_641 = come_decrement_ref_count2(module_name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var30=((struct tuple3$3sTypephcharphbool*)(__right_value620=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_676=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_677=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_678=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value620,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_678) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1voidphp_push_back(struct_class_582->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1164, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_677),(struct sType*)come_increment_ref_count(type2_676))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_677 = come_decrement_ref_count2(name_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_605) {
            if(            info->p==0) {
                info->p=p_saved_605;
                info->sline=sline_saved_606;
                __dec_obj160=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_607));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_605=((void*)0);
                sline_saved_606=0;
            }
        }
        list$1charphp_reset(info->generics_type_names);
        info->defining_class=defining_class_583;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1198, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value627=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1198, "struct sClassNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_569)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_582)),(struct list$1sNodeph*)come_increment_ref_count(methods_608),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value633=_inf_value7));
        (type_name_569 = come_decrement_ref_count2(type_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_570 = come_decrement_ref_count2(id_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(parent_classes_575,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_582,sClass_finalize, 0, 0, 0, 0, (void*)0);
        (sname_saved_607 = come_decrement_ref_count2(sname_saved_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(methods_608,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value627,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value633) ? __right_value633 = come_decrement_ref_count2(__right_value633, ((struct sNode*)__right_value633)->finalize, ((struct sNode*)__right_value633)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result356__;
        (type_name_569 = come_decrement_ref_count2(type_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_570 = come_decrement_ref_count2(id_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(parent_classes_575,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_582,sClass_finalize, 0, 0, 0, 0, (void*)0);
        (sname_saved_607 = come_decrement_ref_count2(sname_saved_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(methods_608,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value634=top_level_v97(buf,head,head_sline,info)));
    (buf2_507 = come_decrement_ref_count2(buf2_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value634) ? __right_value634 = come_decrement_ref_count2(__right_value634, ((struct sNode*)__right_value634)->finalize, ((struct sNode*)__right_value634)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result318__;
void* __right_value454 = (void*)0;
struct sStructNobodyNode* result_519;
void* __right_value455 = (void*)0;
char* __dec_obj127;
void* __right_value456 = (void*)0;
char* __dec_obj128;
void* __right_value457 = (void*)0;
struct sClass* __dec_obj129;
struct sStructNobodyNode* __result319__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_519=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_519->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj127=result_519->sname;
        result_519->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_519->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj128=result_519->mName;
        result_519->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj129=result_519->mClass;
        result_519->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj129,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_519;
    come_call_finalizer3(result_519,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_520;
struct list_item$1charph* prev_it_521;
struct list$1charph* __result321__;
    it_520=self->head;
    while(it_520!=((void*)0)) {
        prev_it_521=it_520;
        it_520=it_520->next;
        come_call_finalizer3(prev_it_521,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result321__;
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

static struct list$1sClassp* list$1sClasspp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result326__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_576;
struct list_item$1sClassp* prev_it_577;
    it_576=self->head;
    while(it_576!=((void*)0)) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer3(prev_it_577,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClasspp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
struct list_item$1sClassp* litem_579;
void* __right_value538 = (void*)0;
struct list_item$1sClassp* litem_580;
void* __right_value539 = (void*)0;
struct list_item$1sClassp* litem_581;
struct list$1sClassp* __result327__;
    if(    self->len==0) {
        litem_579=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value537=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_579->prev=((void*)0);
        litem_579->next=((void*)0);
        litem_579->item=item;
        self->tail=litem_579;
        self->head=litem_579;
    }
    else if(    self->len==1) {
        litem_580=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value538=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_580->prev=self->head;
        litem_580->next=((void*)0);
        litem_580->item=item;
        self->tail=litem_580;
        self->head->next=litem_580;
    }
    else {
        litem_581=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value539=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_581->prev=self->tail;
        litem_581->next=((void*)0);
        litem_581->item=item;
        self->tail->next=litem_581;
        self->tail=litem_581;
    }
    self->len++;
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct list$1sClassp* list$1sClasspp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1sClassp* result_584;
struct list_item$1sClassp* it_585;
struct list$1sClassp* __result329__;
    result_584=(struct list$1sClassp*)come_increment_ref_count(list$1sClasspp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "/usr/local/include/comelang.h", 2119, "struct list$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_585=self->tail;
    while(it_585!=((void*)0)) {
        list$1sClasspp_push_back(result_584,it_585->item);
        it_585=it_585->prev;
    }
    __result329__ = gComeFunResultObject = __result_obj__ = result_584;
    come_call_finalizer3(result_584,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct list$1sClassp* list$1sClasspp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value554 = (void*)0;
struct list_item$1sClassp* litem_586;
void* __right_value555 = (void*)0;
struct list_item$1sClassp* litem_587;
void* __right_value556 = (void*)0;
struct list_item$1sClassp* litem_588;
struct list$1sClassp* __result328__;
    if(    self->len==0) {
        litem_586=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value554=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_586->prev=((void*)0);
        litem_586->next=((void*)0);
        litem_586->item=item;
        self->tail=litem_586;
        self->head=litem_586;
    }
    else if(    self->len==1) {
        litem_587=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value555=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_587->prev=self->head;
        litem_587->next=((void*)0);
        litem_587->item=item;
        self->tail=litem_587;
        self->head->next=litem_587;
    }
    else {
        litem_588=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value556=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_588->prev=self->tail;
        litem_588->next=((void*)0);
        litem_588->item=item;
        self->tail->next=litem_588;
        self->tail=litem_588;
    }
    self->len++;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct sClass* list$1sClasspp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_590;
struct sClass* __result330__;
struct sClass* __result331__;
struct sClass* result_591;
struct sClass* __result332__;
result_590 = (void*)0;
result_591 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_590,0,sizeof(struct sClass*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_590;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->head;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_591,0,sizeof(struct sClass*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_591;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static _Bool list$1sClasspp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClasspp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_593;
struct sClass* __result333__;
struct sClass* __result334__;
struct sClass* result_594;
struct sClass* __result335__;
result_593 = (void*)0;
result_594 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_593,0,sizeof(struct sClass*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_593;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_594,0,sizeof(struct sClass*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_594;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self){
int i_609;
int i_610;
    for(    i_609=0;    i_609<self->size;    i_609++    ){
        if(        self->item_existance[i_609]) {
            if(            1) {
                come_call_finalizer3(self->items[i_609],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_610=0;    i_610<self->size;    i_610++    ){
        if(        self->item_existance[i_610]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_610],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_611;
struct list_item$1voidp* prev_it_612;
    it_611=self->head;
    while(it_611!=((void*)0)) {
        prev_it_612=it_611;
        it_611=it_611->next;
        come_call_finalizer3(prev_it_612,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value577 = (void*)0;
struct list_item$1sNodeph* litem_631;
struct sNode* __dec_obj151;
void* __right_value578 = (void*)0;
struct list_item$1sNodeph* litem_632;
struct sNode* __dec_obj152;
void* __right_value579 = (void*)0;
struct list_item$1sNodeph* litem_633;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result336__;
    if(    self->len==0) {
        litem_631=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value577=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_631->prev=((void*)0);
        litem_631->next=((void*)0);
        __dec_obj151=litem_631->item;
        litem_631->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_631;
        self->head=litem_631;
    }
    else if(    self->len==1) {
        litem_632=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value578=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_632->prev=self->head;
        litem_632->next=((void*)0);
        __dec_obj152=litem_632->item;
        litem_632->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_632;
        self->head->next=litem_632;
    }
    else {
        litem_633=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value579=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_633->prev=self->tail;
        litem_633->next=((void*)0);
        __dec_obj153=litem_633->item;
        litem_633->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_633;
        self->tail=litem_633;
    }
    self->len++;
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_653;
int i_654;
    for(    i_653=0;    i_653<self->size;    i_653++    ){
        if(        self->item_existance[i_653]) {
            if(            1) {
                come_call_finalizer3(self->items[i_653],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_654=0;    i_654<self->size;    i_654++    ){
        if(        self->item_existance[i_654]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_654],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result338__;
void* __right_value602 = (void*)0;
struct map$2voidphvoidph* result_655;
void* __right_value608 = (void*)0;
struct list$1voidp* __dec_obj156;
struct map$2voidphvoidph* __result343__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_655=(struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "map$2voidphvoidph_clone", 3, "struct map$2voidphvoidph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_655->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_655->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_655->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_655->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_655->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj156=result_655->key_list;
        result_655->key_list=(struct list$1voidp*)come_increment_ref_count(come_call_cloner(list$1voidpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj156,list$1voidp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->it=self->it;
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result339__;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1voidp* result_657;
struct list_item$1voidp* it_658;
struct list$1voidp* __result342__;
    if(    self==((void*)0)) {
        __result339__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_657=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    it_658=self->head;
    while(it_658!=((void*)0)) {
        list$1voidpp_add(result_657,it_658->item);
        it_658=it_658->next;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_657;
    come_call_finalizer3(result_657,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_656;
    result_656=0;
    result_656+=int_get_hash_key(((int)self->head));
    result_656+=int_get_hash_key(((int)self->tail));
    result_656+=int_get_hash_key(((int)self->len));
    result_656+=int_get_hash_key(((int)self->it));
    return result_656;
}

static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right){
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

static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result340__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
struct list_item$1voidp* litem_659;
void* __right_value606 = (void*)0;
struct list_item$1voidp* litem_660;
void* __right_value607 = (void*)0;
struct list_item$1voidp* litem_661;
struct list$1voidp* __result341__;
    if(    self->len==0) {
        litem_659=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value605=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_659->prev=((void*)0);
        litem_659->next=((void*)0);
        litem_659->item=item;
        self->tail=litem_659;
        self->head=litem_659;
    }
    else if(    self->len==1) {
        litem_660=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value606=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_660->prev=self->head;
        litem_660->next=((void*)0);
        litem_660->item=item;
        self->tail=litem_660;
        self->head->next=litem_660;
    }
    else {
        litem_661=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value607=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_661->prev=self->tail;
        litem_661->next=((void*)0);
        litem_661->item=item;
        self->tail->next=litem_661;
        self->tail=litem_661;
    }
    self->len++;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_662;
struct list_item$1voidp* prev_it_663;
    it_662=self->head;
    while(it_662!=((void*)0)) {
        prev_it_663=it_662;
        it_662=it_662->next;
        come_call_finalizer3(prev_it_663,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_664;
    result_664=0;
    result_664+=int_get_hash_key(((int)self->keys));
    result_664+=int_get_hash_key(((int)self->item_existance));
    result_664+=int_get_hash_key(((int)self->items));
    result_664+=int_get_hash_key(((int)self->size));
    result_664+=int_get_hash_key(((int)self->len));
    result_664+=int_get_hash_key(((int)self->key_list));
    result_664+=int_get_hash_key(((int)self->it));
    return result_664;
}

static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
    if(    !come_call_equals((void*)0, left->keys, right->keys)) {
        return (_Bool)0;
    }
    if(    !boolp_equals(left->item_existance,right->item_existance)) {
        return (_Bool)0;
    }
    if(    !come_call_equals((void*)0, left->items, right->items)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list$1voidpp_equals(left->key_list,right->key_list)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool voidpp_equals(void** left, void** right){
    return (_Bool)1;
}

static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
int i_665;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1voidp* __dec_obj157;
struct map$2voidphvoidph* __result345__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value610=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value611=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value612=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_665=0;    i_665<128;    i_665++    ){
        self->item_existance[i_665]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj157=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "/usr/local/include/comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj157,list$1voidp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result344__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_668;
char* __result346__;
char* __result347__;
char* result_669;
char* __result348__;
result_668 = (void*)0;
result_669 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_668,0,sizeof(char*));
        __result346__ = gComeFunResultObject = __result_obj__ = result_668;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    self->it=self->head;
    if(    self->it) {
        __result347__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    memset(&result_669,0,sizeof(char*));
    __result348__ = gComeFunResultObject = __result_obj__ = result_669;
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_671;
char* __result349__;
char* __result350__;
char* result_672;
char* __result351__;
result_671 = (void*)0;
result_672 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_671,0,sizeof(char*));
        __result349__ = gComeFunResultObject = __result_obj__ = result_671;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result350__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    memset(&result_672,0,sizeof(char*));
    __result351__ = gComeFunResultObject = __result_obj__ = result_672;
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item){
    map$2voidphvoidphp_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_673;
int i_674;
char* __result352__;
char* default_value_675;
char* __result353__;
default_value_675 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_673=self->head;
    i_674=0;
    while(it_673!=((void*)0)) {
        if(        position==i_674) {
            __result352__ = gComeFunResultObject = __result_obj__ = it_673->item;
            gComeFunResultObject = (void*)0;
            return __result352__;
        }
        it_673=it_673->next;
        i_674++;
    }
    memset(&default_value_675,0,sizeof(char*));
    __result353__ = gComeFunResultObject = __result_obj__ = default_value_675;
    (default_value_675 = come_decrement_ref_count2(default_value_675, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result354__;
void* __right_value628 = (void*)0;
struct sClassNode* result_679;
void* __right_value629 = (void*)0;
char* __dec_obj161;
void* __right_value630 = (void*)0;
char* __dec_obj162;
void* __right_value631 = (void*)0;
struct sClass* __dec_obj163;
void* __right_value632 = (void*)0;
struct list$1sNodeph* __dec_obj164;
struct sClassNode* __result355__;
    if(    self==(void*)0) {
        __result354__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    result_679=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_679->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_679->sname;
        result_679->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj162=result_679->mName;
        result_679->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj163=result_679->mClass;
        result_679->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj163,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj164=result_679->mMethods;
        result_679->mMethods=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mMethods));
        come_call_finalizer3(__dec_obj164,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_679;
    come_call_finalizer3(result_679,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_680;
char* p_681;
int sline_682;
void* __right_value635 = (void*)0;
char* type_name_683;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
char* struct_attribute_684;
void* __right_value640 = (void*)0;
char* type_name_685;
void* __right_value641 = (void*)0;
struct sNode* __result358__;
void* __right_value642 = (void*)0;
struct sNode* __result359__;
    define_struct_680=(_Bool)0;
    {
        p_681=info->p;
        sline_682=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_683=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value636=parse_word(info)));
                    (__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    ((char*)(__right_value637=parse_word(info)));
                    (__right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
                if(                *info->p==123) {
                    ((char*)(__right_value638=skip_block(info)));
                    (__right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    if(                    *info->p==59) {
                        define_struct_680=(_Bool)1;
                    }
                }
                (type_name_683 = come_decrement_ref_count2(type_name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_681;
        info->sline=sline_682;
    }
    if(    define_struct_680) {
        struct_attribute_684=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_685=(char*)come_increment_ref_count(parse_word(info));
        __result358__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value641=parse_struct((char*)come_increment_ref_count(type_name_685),(char*)come_increment_ref_count(struct_attribute_684),info)));
        (struct_attribute_684 = come_decrement_ref_count2(struct_attribute_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_685 = come_decrement_ref_count2(type_name_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value641) ? __right_value641 = come_decrement_ref_count2(__right_value641, ((struct sNode*)__right_value641)->finalize, ((struct sNode*)__right_value641)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result358__;
        (struct_attribute_684 = come_decrement_ref_count2(struct_attribute_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_685 = come_decrement_ref_count2(type_name_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value642=string_node_v13(buf,head,head_sline,info)));
    ((__right_value642) ? __right_value642 = come_decrement_ref_count2(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

