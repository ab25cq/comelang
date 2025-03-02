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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1voidph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
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
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self);
static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self);
static unsigned int tuple2$2charphsGenericsFunp_get_hash_key(struct tuple2$2charphsGenericsFunp* self);
static _Bool tuple2$2charphsGenericsFunp_equals(struct tuple2$2charphsGenericsFunp* left, struct tuple2$2charphsGenericsFunp* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1voidphp_length(struct list$1voidph* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1charphp_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct sCurrentNode* __result230__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string(self->sname)));
    (__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result231__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("sCurrentNode")));
    (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result232__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value255 = (void*)0;
char* class_name_317;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sClass* current_stack_318;
struct sVarTable* vtable_333;
struct map$2voidphvoidph* o2_saved_334;
char* it_337;
char* key_340;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sVar* value_341;
void* __right_value300 = (void*)0;
struct sType* type2_345;
void* __right_value301 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct tuple2$2charphsTypeph* item_369;
void* __right_value307 = (void*)0;
struct sType* type3_372;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2charphsTypeph* item2_375;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct map$2voidphvoidph* o2_saved_423;
char* it_424;
char* key_425;
void* __right_value324 = (void*)0;
struct sVar* value_426;
void* __right_value325 = (void*)0;
struct sType* type2_427;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple2$2charphsTypeph* item_428;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_429;
void* __right_value330 = (void*)0;
char* __dec_obj93;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj94;
_Bool __result282__;
    info->current_stack_num++;
    class_name_317=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_318=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),class_name_317,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_333=info->lv_table;
    while(vtable_333) {
        for(        o2_saved_334=(struct map$2voidphvoidph*)come_increment_ref_count((vtable_333->mVars)),it_337=((char*)map$2voidphvoidphp_begin((o2_saved_334)));        !map$2voidphvoidphp_end((o2_saved_334));        it_337=((char*)map$2voidphvoidphp_next((o2_saved_334)))        ){
            key_340=it_337;
            value_341=((struct sVar*)((void*)(__right_value270=map$2voidphvoidphp_operator_load_element(vtable_333->mVars,((char*)(__right_value269=__builtin_string(key_340)))))));
            (__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value270,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_345=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_341->mType));
            type2_345->mPointerNum++;
            item_369=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 438, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string(value_341->mCValueName)),(struct sType*)come_increment_ref_count(type2_345)));
            if(            value_341->mCValueName!=((void*)0)) {
                if(                strcmp(value_341->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_341->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_341->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_341->mType->mClass->mName,"va_list")||string_operator_equals(value_341->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodephp_length(type2_345->mArrayNum)==1) {
                    type3_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_345));
                    list$1sNodephp_reset(type3_372->mArrayNum);
                    type3_372->mPointerNum=1;
                    type3_372->mOriginIsArray=(_Bool)1;
                    item2_375=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 458, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string(value_341->mCValueName)),(struct sType*)come_increment_ref_count(type3_372)));
                    list$1voidphp_push_back(current_stack_318->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item2_375)));
                    value_341->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_372,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_375,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1voidphp_push_back(current_stack_318->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item_369)));
                }
            }
            come_call_finalizer3(type2_345,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_369,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_334,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_333=vtable_333->mParent;
    }
    output_struct(current_stack_318,info);
    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(class_name_317),(struct sClass*)come_increment_ref_count(current_stack_318));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_317,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_317);
    vtable_333=info->lv_table;
    while(vtable_333) {
        for(        o2_saved_423=(struct map$2voidphvoidph*)come_increment_ref_count((vtable_333->mVars)),it_424=((char*)map$2voidphvoidphp_begin((o2_saved_423)));        !map$2voidphvoidphp_end((o2_saved_423));        it_424=((char*)map$2voidphvoidphp_next((o2_saved_423)))        ){
            key_425=it_424;
            value_426=((struct sVar*)((void*)(__right_value324=map$2voidphvoidphp_operator_load_element(vtable_333->mVars,key_425))));
            come_call_finalizer3(__right_value324,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_426->mType));
            item_428=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 487, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(value_426->mCValueName),(struct sType*)come_increment_ref_count(type2_427)));
            if(            value_426->mCValueName!=((void*)0)) {
                if(                strcmp(value_426->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_426->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_426->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_426->mType->mClass->mName,"va_list")||string_operator_equals(value_426->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_427->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_426->mCValueName,value_426->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_426->mCValueName,value_426->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_428,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_423,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_333=vtable_333->mParent;
    }
    come_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj93=come_value_429->c_value;
    come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj94=come_value_429->type;
    come_value_429->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_317,(_Bool)0,info));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_429->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_429->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_429));
    __result282__ = (_Bool)1;
    (class_name_317 = come_decrement_ref_count2(class_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_318,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result282__;
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

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj33;
struct list$1voidph* __dec_obj34;
char* __dec_obj36;
char* __dec_obj37;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj33=self->mName;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj34=self->mFields;
            come_call_finalizer3(__dec_obj34,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj36=self->mParentClassName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj37=self->mAttribute;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_319;
struct list_item$1voidph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_321;
struct list_item$1voidph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result233__;
void* __right_value256 = (void*)0;
struct sClass* result_326;
void* __right_value257 = (void*)0;
char* __dec_obj38;
void* __right_value264 = (void*)0;
struct list$1voidph* __dec_obj42;
void* __right_value265 = (void*)0;
char* __dec_obj43;
void* __right_value266 = (void*)0;
char* __dec_obj44;
struct sClass* __result238__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_326=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_326->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_326->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_326->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_326->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_326->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_326->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_326->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_326->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj38=result_326->mName;
        result_326->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_326->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj42=result_326->mFields;
        result_326->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj43=result_326->mParentClassName;
        result_326->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj44=result_326->mAttribute;
        result_326->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mDynamic=self->mDynamic;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer3(result_326,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_323;
    result_323=0;
    result_323+=int_get_hash_key(((int)self->mStruct));
    result_323+=int_get_hash_key(((int)self->mFloat));
    result_323+=int_get_hash_key(((int)self->mUnion));
    result_323+=int_get_hash_key(((int)self->mGenerics));
    result_323+=int_get_hash_key(((int)self->mMethodGenerics));
    result_323+=int_get_hash_key(((int)self->mEnum));
    result_323+=int_get_hash_key(((int)self->mProtocol));
    result_323+=int_get_hash_key(((int)self->mNumber));
    result_323+=int_get_hash_key(((int)self->mName));
    result_323+=int_get_hash_key(((int)self->mGenericsNum));
    result_323+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_323+=int_get_hash_key(((int)self->mFields));
    result_323+=int_get_hash_key(((int)self->mParentClassName));
    result_323+=int_get_hash_key(((int)self->mAttribute));
    result_323+=int_get_hash_key(((int)self->mDynamic));
    return result_323;
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
struct list_item$1voidph* it_324;
struct list_item$1voidph* it2_325;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_324=left->head;
    it2_325=right->head;
    while(it_324!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_324->item, it2_325->item)) {
            return (_Bool)0;
        }
        it_324=it_324->next;
        it2_325=it2_325->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1voidph* result_328;
struct list_item$1voidph* it_329;
void* __right_value263 = (void*)0;
struct list$1voidph* __result237__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_328=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        list$1voidphp_add(result_328,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_329->item)));
        it_329=it_329->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
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
struct list$1voidph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj39;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj40;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_332;
void* __dec_obj41;
struct list$1voidph* __result236__;
    if(    self->len==0) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj39=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj39,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj40=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj40,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj41=litem_332->item;
        litem_332->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_335;
void* __result239__;
void* __result240__;
void* result_336;
void* __result241__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_335,0,sizeof(void*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_336,0,sizeof(void*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_338;
void* __result242__;
void* __result243__;
void* result_339;
void* __result244__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_338,0,sizeof(void*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_339,0,sizeof(void*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_342;
unsigned int hash_343;
unsigned int it_344;
void* __result245__;
void* __result246__;
void* __result247__;
void* __result248__;
default_value_342 = (void*)0;
    memset(&default_value_342,0,sizeof(void*));
    hash_343=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_344=hash_343;
    while((_Bool)1) {
        if(        self->item_existance[it_344]) {
            if(            come_call_equals((void*)0, self->keys[it_344], ((char*)key))) {
                __result245__ = gComeFunResultObject = __result_obj__ = self->items[it_344];
                come_call_finalizer3(default_value_342,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
            it_344++;
            if(            it_344>=self->size) {
                it_344=0;
            }
            else if(            it_344==hash_343) {
                __result246__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_342);
                come_call_finalizer3(default_value_342,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
        }
        else {
            __result247__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_342);
            come_call_finalizer3(default_value_342,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result247__;
        }
    }
    __result248__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_342);
    come_call_finalizer3(default_value_342,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result249__;
void* __right_value271 = (void*)0;
struct sType* result_357;
void* __right_value272 = (void*)0;
struct sType* __dec_obj61;
void* __right_value273 = (void*)0;
struct sType* __dec_obj62;
void* __right_value274 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value275 = (void*)0;
struct sType* __dec_obj64;
void* __right_value276 = (void*)0;
struct sType* __dec_obj65;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj67;
void* __right_value280 = (void*)0;
char* __dec_obj68;
void* __right_value281 = (void*)0;
char* __dec_obj69;
void* __right_value282 = (void*)0;
char* __dec_obj70;
void* __right_value289 = (void*)0;
struct list$1sNodeph* __dec_obj74;
void* __right_value290 = (void*)0;
char* __dec_obj75;
void* __right_value291 = (void*)0;
struct list$1voidph* __dec_obj76;
void* __right_value298 = (void*)0;
struct list$1charph* __dec_obj80;
void* __right_value299 = (void*)0;
struct sType* __dec_obj81;
struct sType* __result259__;
    if(    self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_357=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_357->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_357->mOriginalLoadVarType;
        result_357->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj62=result_357->mChannelType;
        result_357->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj63=result_357->mGenericsTypes;
        result_357->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj64=result_357->mNoSolvedGenericsType;
        result_357->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj65=result_357->mAnyOriginalType;
        result_357->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj66=result_357->mSizeNum;
        result_357->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj67=result_357->mAlignas;
        result_357->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj68=result_357->mTupleName;
        result_357->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj69=result_357->mAttribute;
        result_357->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_357->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_357->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_357->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_357->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_357->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_357->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_357->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_357->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_357->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_357->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_357->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_357->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_357->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_357->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_357->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_357->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_357->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_357->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_357->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_357->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_357->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_357->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_357->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj70=result_357->mAsmName;
        result_357->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_357->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj74=result_357->mArrayNum;
        result_357->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj74,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_357->mOriginalTypeName;
        result_357->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj76=result_357->mParamTypes;
        result_357->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj76,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj80=result_357->mParamNames;
        result_357->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj81=result_357->mResultType;
        result_357->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mVarArgs=self->mVarArgs;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj45;
struct sType* __dec_obj46;
struct list$1voidph* __dec_obj47;
struct sType* __dec_obj48;
struct sType* __dec_obj49;
struct sNode* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
struct list$1sNodeph* __dec_obj55;
char* __dec_obj57;
struct list$1voidph* __dec_obj58;
struct list$1charph* __dec_obj59;
struct sType* __dec_obj60;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj45=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj46=self->mChannelType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj47=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj47,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj48=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj49=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj50=self->mSizeNum;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj51=self->mAlignas;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj52=self->mTupleName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj53=self->mAttribute;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj54=self->mAsmName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj55=self->mArrayNum;
            come_call_finalizer3(__dec_obj55,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj57=self->mOriginalTypeName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj58=self->mParamTypes;
            come_call_finalizer3(__dec_obj58,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj59=self->mParamNames;
            come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj60=self->mResultType;
            come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_346;
struct list_item$1sNodeph* prev_it_347;
    it_346=self->head;
    while(it_346!=((void*)0)) {
        prev_it_347=it_346;
        it_346=it_346->next;
        come_call_finalizer3(prev_it_347,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj56;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj56=self->item;
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_348;
struct list_item$1sNodeph* prev_it_349;
    it_348=self->head;
    while(it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        come_call_finalizer3(prev_it_349,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_350;
struct list_item$1charph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_352;
    result_352=0;
    result_352+=int_get_hash_key(((int)self->mClass));
    result_352+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_352+=int_get_hash_key(((int)self->mChannelType));
    result_352+=int_get_hash_key(((int)self->mGenericsTypes));
    result_352+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_352+=int_get_hash_key(((int)self->mAnyClass));
    result_352+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_352+=int_get_hash_key(((int)self->mSizeNum));
    result_352+=int_get_hash_key(((int)self->mAlignas));
    result_352+=int_get_hash_key(((int)self->mTupleName));
    result_352+=int_get_hash_key(((int)self->mAttribute));
    result_352+=int_get_hash_key(((int)self->mAllocaValue));
    result_352+=int_get_hash_key(((int)self->mUnsigned));
    result_352+=int_get_hash_key(((int)self->mShort));
    result_352+=int_get_hash_key(((int)self->mLong));
    result_352+=int_get_hash_key(((int)self->mLongLong));
    result_352+=int_get_hash_key(((int)self->mConstant));
    result_352+=int_get_hash_key(((int)self->mAtomic));
    result_352+=int_get_hash_key(((int)self->mRegister));
    result_352+=int_get_hash_key(((int)self->mVolatile));
    result_352+=int_get_hash_key(((int)self->mStatic));
    result_352+=int_get_hash_key(((int)self->mUniq));
    result_352+=int_get_hash_key(((int)self->mRecord));
    result_352+=int_get_hash_key(((int)self->mExtern));
    result_352+=int_get_hash_key(((int)self->mRestrict));
    result_352+=int_get_hash_key(((int)self->mImmutable));
    result_352+=int_get_hash_key(((int)self->mHeap));
    result_352+=int_get_hash_key(((int)self->mChannel));
    result_352+=int_get_hash_key(((int)self->mNoHeap));
    result_352+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_352+=int_get_hash_key(((int)self->mException));
    result_352+=int_get_hash_key(((int)self->mGenerate));
    result_352+=int_get_hash_key(((int)self->mCreateVTable));
    result_352+=int_get_hash_key(((int)self->mDynamic));
    result_352+=int_get_hash_key(((int)self->mInline));
    result_352+=int_get_hash_key(((int)self->mNullValue));
    result_352+=int_get_hash_key(((int)self->mGuardValue));
    result_352+=int_get_hash_key(((int)self->mAsmName));
    result_352+=int_get_hash_key(((int)self->mTypedef));
    result_352+=int_get_hash_key(((int)self->mMultipleTypes));
    result_352+=int_get_hash_key(((int)self->mOriginIsArray));
    result_352+=int_get_hash_key(((int)self->mArrayNum));
    result_352+=int_get_hash_key(((int)self->mPointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_352+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_352+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_352+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_352+=int_get_hash_key(((int)self->mArrayPointerType));
    result_352+=int_get_hash_key(((int)self->mLambdaArray));
    result_352+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_352+=int_get_hash_key(((int)self->mParamTypes));
    result_352+=int_get_hash_key(((int)self->mParamNames));
    result_352+=int_get_hash_key(((int)self->mResultType));
    result_352+=int_get_hash_key(((int)self->mVarArgs));
    return result_352;
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
struct list_item$1sNodeph* it_353;
struct list_item$1sNodeph* it2_354;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_353=left->head;
    it2_354=right->head;
    while(it_353!=((void*)0)) {
        if(        !sNode_equals(it_353->item,it2_354->item)) {
            return (_Bool)0;
        }
        it_353=it_353->next;
        it2_354=it2_354->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_355;
struct list_item$1charph* it2_356;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_355=left->head;
    it2_356=right->head;
    while(it_355!=((void*)0)) {
        if(        !string_equals(it_355->item,it2_356->item)) {
            return (_Bool)0;
        }
        it_355=it_355->next;
        it2_356=it2_356->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result250__;
void* __right_value277 = (void*)0;
struct sNode* result_358;
struct sNode* __result251__;
    if(    self==(void*)0) {
        __result250__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_358=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_358->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_358->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_358->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_358->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_358->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_358->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_358->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_358->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_358->kind=self->kind;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_358;
    ((result_358) ? result_358 = come_decrement_ref_count2(result_358, ((struct sNode*)result_358)->finalize, ((struct sNode*)result_358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result252__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sNodeph* result_359;
struct list_item$1sNodeph* it_360;
void* __right_value288 = (void*)0;
struct list$1sNodeph* __result255__;
    if(    self==((void*)0)) {
        __result252__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_359=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_360=self->head;
    while(it_360!=((void*)0)) {
        list$1sNodephp_add(result_359,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_360->item)));
        it_360=it_360->next;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result253__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1sNodeph* litem_361;
struct sNode* __dec_obj71;
void* __right_value286 = (void*)0;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj72;
void* __right_value287 = (void*)0;
struct list_item$1sNodeph* litem_363;
struct sNode* __dec_obj73;
struct list$1sNodeph* __result254__;
    if(    self->len==0) {
        litem_361=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value285=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=((void*)0);
        litem_361->next=((void*)0);
        __dec_obj71=litem_361->item;
        litem_361->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_361;
        self->head=litem_361;
    }
    else if(    self->len==1) {
        litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value286=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_362->prev=self->head;
        litem_362->next=((void*)0);
        __dec_obj72=litem_362->item;
        litem_362->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_362;
        self->head->next=litem_362;
    }
    else {
        litem_363=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value287=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_363->prev=self->tail;
        litem_363->next=((void*)0);
        __dec_obj73=litem_363->item;
        litem_363->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_363;
        self->tail=litem_363;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result256__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1charph* result_364;
struct list_item$1charph* it_365;
void* __right_value297 = (void*)0;
struct list$1charph* __result258__;
    if(    self==((void*)0)) {
        __result256__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_364=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_365=self->head;
    while(it_365!=((void*)0)) {
        list$1charphp_add(result_364,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_365->item)));
        it_365=it_365->next;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_364;
    come_call_finalizer3(result_364,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1charph* litem_366;
char* __dec_obj77;
void* __right_value295 = (void*)0;
struct list_item$1charph* litem_367;
char* __dec_obj78;
void* __right_value296 = (void*)0;
struct list_item$1charph* litem_368;
char* __dec_obj79;
struct list$1charph* __result257__;
    if(    self->len==0) {
        litem_366=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value294=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=((void*)0);
        litem_366->next=((void*)0);
        __dec_obj77=litem_366->item;
        litem_366->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_366;
        self->head=litem_366;
    }
    else if(    self->len==1) {
        litem_367=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value295=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->head;
        litem_367->next=((void*)0);
        __dec_obj78=litem_367->item;
        litem_367->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_367;
        self->head->next=litem_367;
    }
    else {
        litem_368=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value296=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->tail;
        litem_368->next=((void*)0);
        __dec_obj79=litem_368->item;
        litem_368->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_368;
        self->tail=litem_368;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj82;
struct sType* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result260__;
void* __right_value302 = (void*)0;
struct tuple2$2charphsTypeph* result_370;
void* __right_value303 = (void*)0;
char* __dec_obj84;
void* __right_value304 = (void*)0;
struct sType* __dec_obj85;
struct tuple2$2charphsTypeph* __result261__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_370=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_370->v1;
        result_370->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_370->v2;
        result_370->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_370;
    come_call_finalizer3(result_370,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_371;
    result_371=0;
    result_371+=int_get_hash_key(((int)self->v1));
    result_371+=int_get_hash_key(((int)self->v2));
    return result_371;
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
char* __dec_obj86;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result262__;
    __dec_obj86=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj88;
struct sType* __dec_obj89;
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
            come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_373;
struct list_item$1sNodeph* prev_it_374;
struct list$1sNodeph* __result263__;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        prev_it_374=it_373;
        it_373=it_373->next;
        come_call_finalizer3(prev_it_374,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct list_item$1voidph* litem_376;
void* __dec_obj90;
void* __right_value312 = (void*)0;
struct list_item$1voidph* litem_377;
void* __dec_obj91;
void* __right_value313 = (void*)0;
struct list_item$1voidph* litem_378;
void* __dec_obj92;
struct list$1voidph* __result264__;
    if(    self->len==0) {
        litem_376=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value311=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj90=litem_376->item;
        litem_376->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value312=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj91=litem_377->item;
        litem_377->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value313=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj92=litem_378->item;
        litem_378->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_379;
int i_380;
    for(    i_379=0;    i_379<self->size;    i_379++    ){
        if(        self->item_existance[i_379]) {
            if(            1) {
                come_call_finalizer3(self->items[i_379],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_380=0;    i_380<self->size;    i_380++    ){
        if(        self->item_existance[i_380]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_380],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_381;
struct list_item$1voidp* prev_it_382;
    it_381=self->head;
    while(it_381!=((void*)0)) {
        prev_it_382=it_381;
        it_381=it_381->next;
        come_call_finalizer3(prev_it_382,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_396;
unsigned int it_397;
_Bool same_key_exist_414;
char* it2_417;
struct map$2voidphvoidph* __result280__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_396=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(        self->item_existance[it_397]) {
            if(            come_call_equals((void*)0, self->keys[it_397], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_397]);
                    come_call_finalizer3(self->keys[it_397],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_397]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_397]);
                    self->keys[it_397]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_397],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_397]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_397]=item;
                }
                break;
            }
            it_397++;
            if(            it_397>=self->size) {
                it_397=0;
            }
            else if(            it_397==hash_396) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_397]=(_Bool)1;
            if(            1) {
                self->keys[it_397]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_397]=key;
            }
            if(            1) {
                self->items[it_397]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_397]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_414=(_Bool)0;
    for(    it2_417=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_417=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_417, key)) {
            same_key_exist_414=(_Bool)1;
        }
    }
    if(    !same_key_exist_414) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_383;
void* __right_value316 = (void*)0;
void** keys_384;
void* __right_value317 = (void*)0;
void** items_385;
void* __right_value318 = (void*)0;
_Bool* item_existance_386;
int len_387;
void* it_388;
void* default_value_389;
void* __right_value319 = (void*)0;
void* it2_390;
unsigned int hash_393;
int n_394;
void* default_value_395;
void* __right_value320 = (void*)0;
default_value_389 = (void*)0;
default_value_395 = (void*)0;
    size_383=self->size*10;
    keys_384=(void**)come_increment_ref_count(((void**)(__right_value316=(void**)come_calloc(1, sizeof(void*)*(1*(size_383)), "/usr/local/include/comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_385=(void**)come_increment_ref_count(((void**)(__right_value317=(void**)come_calloc(1, sizeof(void*)*(1*(size_383)), "/usr/local/include/comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_386=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value318=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_383)), "/usr/local/include/comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_387=0;
    for(    it_388=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_388=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_389,0,sizeof(void*));
        it2_390=((void*)(__right_value319=map$2voidphvoidphp_at(self,it_388,default_value_389)));
        come_call_finalizer3(__right_value319,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_393=come_call_get_hash_key((void*)0, ((void*)it_388))%size_383;
        n_394=hash_393;
        while((_Bool)1) {
            if(            item_existance_386[n_394]) {
                n_394++;
                if(                n_394>=size_383) {
                    n_394=0;
                }
                else if(                n_394==hash_393) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_386[n_394]=(_Bool)1;
                keys_384[n_394]=it_388;
                items_385[n_394]=((void*)(__right_value320=map$2voidphvoidphp_at(self,it_388,default_value_395)));
                come_call_finalizer3(__right_value320,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_387++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_384;
    self->items=items_385;
    self->item_existance=item_existance_386;
    self->size=size_383;
    self->len=len_387;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_391;
unsigned int it_392;
void* __result265__;
void* __result266__;
void* __result267__;
void* __result268__;
    hash_391=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_392=hash_391;
    while((_Bool)1) {
        if(        self->item_existance[it_392]) {
            if(            come_call_equals((void*)0, self->keys[it_392], key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_392];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_392++;
            if(            it_392>=self->size) {
                it_392=0;
            }
            else if(            it_392==hash_391) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_398;
struct list_item$1voidp* it_399;
struct list$1voidp* __result272__;
    it2_398=0;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        if(        come_call_equals((void*)0, it_399->item, item)) {
            list$1voidpp_delete(self,it2_398,it2_398+1);
            break;
        }
        it2_398++;
        it_399=it_399->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_400;
struct list$1voidp* __result269__;
struct list_item$1voidp* it_403;
int i_404;
struct list_item$1voidp* prev_it_405;
struct list_item$1voidp* it_406;
int i_407;
struct list_item$1voidp* prev_it_408;
struct list_item$1voidp* it_409;
struct list_item$1voidp* head_prev_it_410;
struct list_item$1voidp* tail_it_411;
int i_412;
struct list_item$1voidp* prev_it_413;
struct list$1voidp* __result271__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_400=tail;
        tail=head;
        head=tmp_400;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result269__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_403=self->head;
        i_404=0;
        while(it_403!=((void*)0)) {
            if(            i_404<tail) {
                prev_it_405=it_403;
                it_403=it_403->next;
                i_404++;
                come_call_finalizer3(prev_it_405,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_404==tail) {
                self->head=it_403;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_403=it_403->next;
                i_404++;
            }
        }
    }
    else if(    tail==self->len) {
        it_406=self->head;
        i_407=0;
        while(it_406!=((void*)0)) {
            if(            i_407==head) {
                self->tail=it_406->prev;
                self->tail->next=((void*)0);
            }
            if(            i_407>=head) {
                prev_it_408=it_406;
                it_406=it_406->next;
                i_407++;
                come_call_finalizer3(prev_it_408,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_406=it_406->next;
                i_407++;
            }
        }
    }
    else {
        it_409=self->head;
        head_prev_it_410=((void*)0);
        tail_it_411=((void*)0);
        i_412=0;
        while(it_409!=((void*)0)) {
            if(            i_412==head) {
                head_prev_it_410=it_409->prev;
            }
            if(            i_412==tail) {
                tail_it_411=it_409;
            }
            if(            i_412>=head&&i_412<tail) {
                prev_it_413=it_409;
                it_409=it_409->next;
                i_412++;
                come_call_finalizer3(prev_it_413,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_409=it_409->next;
                i_412++;
            }
        }
        if(        head_prev_it_410!=((void*)0)) {
            head_prev_it_410->next=tail_it_411;
        }
        if(        tail_it_411!=((void*)0)) {
            tail_it_411->prev=head_prev_it_410;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_401;
struct list_item$1voidp* prev_it_402;
struct list$1voidp* __result270__;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        come_call_finalizer3(prev_it_402,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_415;
void* __result273__;
void* __result274__;
void* result_416;
void* __result275__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_415,0,sizeof(void*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->head;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_416,0,sizeof(void*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_418;
void* __result276__;
void* __result277__;
void* result_419;
void* __result278__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_418,0,sizeof(void*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_419,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
struct list_item$1voidp* litem_420;
void* __right_value322 = (void*)0;
struct list_item$1voidp* litem_421;
void* __right_value323 = (void*)0;
struct list_item$1voidp* litem_422;
struct list$1voidp* __result279__;
    if(    self->len==0) {
        litem_420=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value321=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        litem_420->item=item;
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value322=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        litem_421->item=item;
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value323=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        litem_422->item=item;
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
struct list_item$1CVALUEph* litem_430;
struct CVALUE* __dec_obj95;
void* __right_value334 = (void*)0;
struct list_item$1CVALUEph* litem_431;
struct CVALUE* __dec_obj100;
void* __right_value335 = (void*)0;
struct list_item$1CVALUEph* litem_432;
struct CVALUE* __dec_obj101;
struct list$1CVALUEph* __result281__;
    if(    self->len==0) {
        litem_430=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value333=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        __dec_obj95=litem_430->item;
        litem_430->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj95,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value334=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        __dec_obj100=litem_431->item;
        litem_431->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value335=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        __dec_obj101=litem_432->item;
        litem_432->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj96;
struct sType* __dec_obj97;
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj96=self->c_value;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj97=self->type;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj98=self->c_value_without_right_value_objects;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj99=self->c_value_without_cast_object_value;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sType* use_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj102;
int i_433;
struct list$1voidph* o2_saved_434;
struct sType* it_437;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sType* __result291__;
    if(    type->mAnyOriginalType) {
        __dec_obj102=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_433=0;
    for(    o2_saved_434=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_437=((struct sType*)list$1voidphp_begin((o2_saved_434)));    !list$1voidphp_end((o2_saved_434));    it_437=((struct sType*)list$1voidphp_next((o2_saved_434)))    ){
        list$1voidphp_operator_store_element(type->mGenericsTypes,i_433,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_437)))));
        i_433++;
    }
    come_call_finalizer3(o2_saved_434,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_435;
void* __result283__;
void* __result284__;
void* result_436;
void* __result285__;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_435,0,sizeof(void*));
        __result283__ = gComeFunResultObject = __result_obj__ = result_435;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    self->it=self->head;
    if(    self->it) {
        __result284__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    memset(&result_436,0,sizeof(void*));
    __result285__ = gComeFunResultObject = __result_obj__ = result_436;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_438;
void* __result286__;
void* __result287__;
void* result_439;
void* __result288__;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_438,0,sizeof(void*));
        __result286__ = gComeFunResultObject = __result_obj__ = result_438;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result287__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    memset(&result_439,0,sizeof(void*));
    __result288__ = gComeFunResultObject = __result_obj__ = result_439;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_440;
int i_441;
void* default_value_442;
struct list$1voidph* __result289__;
struct list_item$1voidph* it_443;
int i_444;
void* __dec_obj103;
struct list$1voidph* __result290__;
default_value_442 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_440=self->len;
        for(        i_441=0;        i_441<position-len_440;        i_441++        ){
            memset(&default_value_442,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_442));
            come_call_finalizer3(default_value_442,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result289__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    it_443=self->head;
    i_444=0;
    while(it_443!=((void*)0)) {
        if(        position==i_444) {
            __dec_obj103=it_443->item;
            it_443->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj103,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_443=it_443->next;
        i_444++;
    }
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sType* remove_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj104;
struct sType* __dec_obj105;
int i_445;
struct list$1voidph* o2_saved_446;
struct sType* it_447;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __result292__;
    if(    type->mAnyOriginalType) {
        __dec_obj104=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj105=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_445=0;
    for(    o2_saved_446=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_447=((struct sType*)list$1voidphp_begin((o2_saved_446)));    !list$1voidphp_end((o2_saved_446));    it_447=((struct sType*)list$1voidphp_next((o2_saved_446)))    ){
        list$1voidphp_operator_store_element(type->mGenericsTypes,i_445,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_447)))));
        i_445++;
    }
    come_call_finalizer3(o2_saved_446,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result292__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
char* none_generics_name_448;
void* __right_value341 = (void*)0;
char* fun_name2_449;
void* __right_value342 = (void*)0;
char* fun_name3_450;
void* __right_value343 = (void*)0;
struct sGenericsFun* generics_fun_451;
_Bool generics_any_child_452;
void* __right_value344 = (void*)0;
struct sType* no_solved_type_453;
struct sType* __dec_obj106;
struct list$1voidph* o2_saved_454;
struct sType* it_455;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* type2_456;
void* __right_value347 = (void*)0;
struct sType* type_before_457;
void* __right_value348 = (void*)0;
char* __dec_obj107;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_458=0;
_Bool err_459=0;
void* __right_value351 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_460=0;
char* Err_461=0;
void* __right_value352 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result296__;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* type2_464;
void* __right_value359 = (void*)0;
struct sType* type_before_465;
void* __right_value360 = (void*)0;
char* __dec_obj114;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var3 = (void*)0;
char* name_466=0;
_Bool err_467=0;
void* __right_value363 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var4 = (void*)0;
int come_exception_var_c2_468=0;
char* Err_469=0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result297__;
void* __right_value367 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result301__;
    none_generics_name_448=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_449=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_450=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_448,fun_name));
    generics_fun_451=((struct sGenericsFun*)((void*)(__right_value343=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_450,((void*)0)))));
    come_call_finalizer3(__right_value343,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
    generics_any_child_452=(_Bool)0;
    no_solved_type_453=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj106=no_solved_type_453;
        no_solved_type_453=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_454=(struct list$1voidph*)come_increment_ref_count((no_solved_type_453->mGenericsTypes)),it_455=((struct sType*)list$1voidphp_begin((o2_saved_454)));        !list$1voidphp_end((o2_saved_454));        it_455=((struct sType*)list$1voidphp_next((o2_saved_454)))        ){
            if(            it_455->mAnyOriginalType) {
                generics_any_child_452=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_454,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_451) {
        if(        generics_fun_451->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_452)) {
            type2_456=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_453))));
            type_before_457=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj107=fun_name2_449;
            fun_name2_449=(char*)come_increment_ref_count(create_method_name(type2_456,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value350=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_449)),generics_fun_451,type2_456,info)));
            name_458=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_459=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value350,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_459) {
                multiple_assign_var2=((struct tuple2$2intcharph*)(__right_value351=err_msg(info,"%s not found",fun_name3_450)));
                come_exception_var_c1_460=multiple_assign_var2->v1;
                Err_461=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                ((Err_461)?(puts(Err_461),exit(0)):(0));
                come_call_finalizer3(__right_value351,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __result296__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value356=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 74, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                (Err_461 = come_decrement_ref_count2(Err_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_456,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_449 = come_decrement_ref_count2(fun_name2_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_450 = come_decrement_ref_count2(fun_name3_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value356,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result296__;
                (Err_461 = come_decrement_ref_count2(Err_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_457;
            come_call_finalizer3(type2_456,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_457,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            type2_464=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_453))));
            type_before_465=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj114=fun_name2_449;
            fun_name2_449=(char*)come_increment_ref_count(create_method_name(type2_464,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var3=((struct tuple2$2charphbool*)(__right_value362=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_449)),generics_fun_451,type2_464,info)));
            name_466=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            err_467=multiple_assign_var3->v2;
            come_call_finalizer3(__right_value362,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_467) {
                multiple_assign_var4=((struct tuple2$2intcharph*)(__right_value363=err_msg(info,"%s not found",fun_name3_450)));
                come_exception_var_c2_468=multiple_assign_var4->v1;
                Err_469=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_469)?(puts(Err_469),exit(0)):(0));
                come_call_finalizer3(__right_value363,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __result297__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value366=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 90, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                (Err_469 = come_decrement_ref_count2(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_466 = come_decrement_ref_count2(name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_449 = come_decrement_ref_count2(fun_name2_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_450 = come_decrement_ref_count2(fun_name3_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value366,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result297__;
                (Err_469 = come_decrement_ref_count2(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_465;
            come_call_finalizer3(type2_464,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_465,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_466 = come_decrement_ref_count2(name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value371=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 97, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key, tuple2$2charphsGenericsFunp_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_449)),generics_fun_451)));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_449 = come_decrement_ref_count2(fun_name2_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_450 = come_decrement_ref_count2(fun_name3_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(no_solved_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value371,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj108;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj108=self->v1;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj109;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj109=self->v2;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj110;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj110=self->v1;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result293__;
void* __right_value353 = (void*)0;
struct tuple2$2charphvoidp* result_462;
void* __right_value354 = (void*)0;
char* __dec_obj111;
struct tuple2$2charphvoidp* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_462=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result_462->v1;
        result_462->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_462->v2=self->v2;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_462;
    come_call_finalizer3(result_462,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self){
unsigned int result_463;
    result_463=0;
    result_463+=int_get_hash_key(((int)self->v1));
    result_463+=int_get_hash_key(((int)self->v2));
    return result_463;
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
char* __dec_obj112;
struct tuple2$2charphvoidp* __result295__;
    __dec_obj112=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj113;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj113=self->v1;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj115;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsGenericsFunp* __result298__;
void* __right_value368 = (void*)0;
struct tuple2$2charphsGenericsFunp* result_470;
void* __right_value369 = (void*)0;
char* __dec_obj116;
struct tuple2$2charphsGenericsFunp* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_470=(struct tuple2$2charphsGenericsFunp*)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "tuple2$2charphsGenericsFunp_clone", 3, "struct tuple2$2charphsGenericsFunp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj116=result_470->v1;
        result_470->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_470->v2=self->v2;
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_470;
    come_call_finalizer3(result_470,tuple2$2charphsGenericsFunp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static unsigned int tuple2$2charphsGenericsFunp_get_hash_key(struct tuple2$2charphsGenericsFunp* self){
unsigned int result_471;
    result_471=0;
    result_471+=int_get_hash_key(((int)self->v1));
    result_471+=int_get_hash_key(((int)self->v2));
    return result_471;
}

static _Bool tuple2$2charphsGenericsFunp_equals(struct tuple2$2charphsGenericsFunp* left, struct tuple2$2charphsGenericsFunp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mSLine,right->mSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsSName,right->mGenericsSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsSLine,right->mGenericsSLine)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj117;
struct tuple2$2charphsGenericsFunp* __result300__;
    __dec_obj117=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj118;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj118=self->v1;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* fun_name3_473;
struct list$1voidph* method_generics_types_before_474;
struct list$1voidph* __dec_obj119;
void* __right_value373 = (void*)0;
struct sGenericsFun* generics_fun_475;
void* __right_value374 = (void*)0;
_Bool _if_conditional1;
void* __right_value375 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var5 = (void*)0;
int come_exception_var_c3_476=0;
char* Err_477=0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result302__;
struct list$1voidph* __dec_obj120;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result303__;
    static int num_method_generics_472=0;
    fun_name3_473=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_472++));
    method_generics_types_before_474=(struct list$1voidph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj119=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj119,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_475=((struct sGenericsFun*)((void*)(__right_value373=map$2voidphvoidphp_at(info->generics_funcs,fun_name,((void*)0)))));
    come_call_finalizer3(__right_value373,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
    if(    generics_fun_475) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_473)),generics_fun_475,info))),        _if_conditional1) {
            multiple_assign_var5=((struct tuple2$2intcharph*)(__right_value375=err_msg(info,"%s not found",fun_name3_473)));
            come_exception_var_c3_476=multiple_assign_var5->v1;
            Err_477=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_477)?(puts(Err_477),exit(0)):(0));
            come_call_finalizer3(__right_value375,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            __result302__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value378=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 113, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
            (Err_477 = come_decrement_ref_count2(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name3_473 = come_decrement_ref_count2(fun_name3_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types_before_474,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value378,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result302__;
            (Err_477 = come_decrement_ref_count2(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj120=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_474);
    come_call_finalizer3(__dec_obj120,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value381=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 119, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key, tuple2$2charphsGenericsFunp_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_473)),generics_fun_475)));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name3_473 = come_decrement_ref_count2(fun_name3_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types_before_474,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value381,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value386 = (void*)0;
struct sNode* current_stack_frame_node_478;
_Bool Value_480;
_Bool __result306__;
void* __right_value387 = (void*)0;
struct CVALUE* come_value_483;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct buffer* method_block2_484;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* method_block_type_485;
void* __right_value392 = (void*)0;
char* class_name_489;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sClass* current_stack_frame_struct_490;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var6 = (void*)0;
int come_exception_var_c4_491=0;
char* Err_492=0;
_Bool __result309__;
void* __right_value397 = (void*)0;
struct sType* result_type_493;
struct list$1voidph* param_types_494;
struct list$1charph* param_names_495;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* all_alhabet_sname_496;
char* p_497;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
int i_498;
struct list$1voidph* o2_saved_499;
struct sType* it_500;
struct sType* param_type_501;
void* __right_value402 = (void*)0;
char* param_name_502;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* param_name_503;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
char* param_name_504;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct buffer* source3_505;
char* p_506;
char* head_507;
int sline_508;
struct buffer* __dec_obj123;
void* __right_value409 = (void*)0;
struct sNode* node_509;
_Bool Value_510;
_Bool __result310__;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* method_block_name_511;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value2_512;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sFun* fun2_513;
void* __right_value416 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var7 = (void*)0;
int come_exception_var_c5_514=0;
char* Err_515=0;
_Bool __result311__;
struct sType* method_block_type2_516;
void* __right_value417 = (void*)0;
char* __dec_obj124;
void* __right_value418 = (void*)0;
struct sType* __dec_obj125;
struct buffer* __dec_obj126;
void* __right_value419 = (void*)0;
struct sType* __dec_obj127;
_Bool contained_method_generics_method_block_517;
struct list$1voidph* o2_saved_518;
struct sType* it_519;
void* __right_value420 = (void*)0;
_Bool __result313__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value383=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_478=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value383,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_480=node_compile(current_stack_frame_node_478,info);
    if(    !Value_480) {
        __result306__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_478) ? current_stack_frame_node_478 = come_decrement_ref_count2(current_stack_frame_node_478, ((struct sNode*)current_stack_frame_node_478)->finalize, ((struct sNode*)current_stack_frame_node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result306__;
    }
    else {
    }
    come_value_483=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_483));
    dec_stack_ptr(1,info);
    method_block2_484=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    method_block_type_485=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value390=list$1voidphp_operator_load_element(fun->mParamTypes,-1))))));
    come_call_finalizer3(__right_value390,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    class_name_489=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)((void*)(__right_value393=list$1voidphp_operator_load_element(method_block_type_485->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value394=map$2voidphvoidphp_operator_load_element(info->classes,class_name_489))));
    come_call_finalizer3(__right_value393,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__right_value394,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    current_stack_frame_struct_490=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value395=map$2voidphvoidphp_operator_load_element(info->classes,class_name_489))));
    come_call_finalizer3(__right_value395,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_485->mClass->mName,"lambda")) {
        multiple_assign_var6=((struct tuple2$2intcharph*)(__right_value396=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c4_491=multiple_assign_var6->v1;
        Err_492=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        ((Err_492)?(puts(Err_492),exit(0)):(0));
        come_call_finalizer3(__right_value396,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __result309__ = (_Bool)0;
        (Err_492 = come_decrement_ref_count2(Err_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_478) ? current_stack_frame_node_478 = come_decrement_ref_count2(current_stack_frame_node_478, ((struct sNode*)current_stack_frame_node_478)->finalize, ((struct sNode*)current_stack_frame_node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_489 = come_decrement_ref_count2(class_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result309__;
        (Err_492 = come_decrement_ref_count2(Err_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_493=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_485->mResultType));
    result_type_493->mStatic=(_Bool)0;
    param_types_494=method_block_type_485->mParamTypes;
    param_names_495=method_block_type_485->mParamNames;
    all_alhabet_sname_496=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    {
        p_497=info->sname;
        while(*p_497) {
            if(            xisalnum(*p_497)) {
                buffer_append_char(all_alhabet_sname_496,*p_497++);
            }
            else {
                p_497++;
            }
        }
    }
    buffer_append_format(method_block2_484,"%s method_block%d_%s(",((char*)(__right_value400=make_type_name_string(result_type_493,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value401=buffer_to_string(all_alhabet_sname_496))));
    (__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_498=0;
    for(    o2_saved_499=(param_types_494),it_500=((struct sType*)list$1voidphp_begin((o2_saved_499)));    !list$1voidphp_end((o2_saved_499));    it_500=((struct sType*)list$1voidphp_next((o2_saved_499)))    ){
        param_type_501=it_500;
        if(        i_498==0) {
            param_name_502=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_484,"%s",((char*)(__right_value403=make_define_var(param_type_501,param_name_502,(_Bool)0,info))));
            (__right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_502 = come_decrement_ref_count2(param_name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_498==1) {
            param_name_503=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_484,"%s",((char*)(__right_value405=make_define_var_no_solved(param_type_501,param_name_503,(_Bool)0,(_Bool)0,info))));
            (__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_503 = come_decrement_ref_count2(param_name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_504=(char*)come_increment_ref_count(xsprintf("it%d",i_498));
            buffer_append_format(method_block2_484,"%s",((char*)(__right_value407=make_define_var_no_solved(param_type_501,param_name_504,(_Bool)0,(_Bool)0,info))));
            (__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_504 = come_decrement_ref_count2(param_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_498!=list$1voidphp_length(param_types_494)-1) {
            buffer_append_str(method_block2_484,",");
        }
        i_498++;
    }
    buffer_append_str(method_block2_484,")\n");
    buffer_append_str(method_block2_484,((char*)(__right_value408=buffer_to_string(method_block))));
    (__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_505=(struct buffer*)come_increment_ref_count(info->source);
    p_506=info->p;
    head_507=info->head;
    sline_508=info->sline;
    __dec_obj123=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_484);
    come_call_finalizer3(__dec_obj123,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_509=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_510=node_compile(node_509,info);
    if(    !Value_510) {
        __result310__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_478) ? current_stack_frame_node_478 = come_decrement_ref_count2(current_stack_frame_node_478, ((struct sNode*)current_stack_frame_node_478)->finalize, ((struct sNode*)current_stack_frame_node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_489 = come_decrement_ref_count2(class_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_505,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_509) ? node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result310__;
    }
    else {
    }
    method_block_name_511=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value410=buffer_to_string(all_alhabet_sname_496)))));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    fun2_513=((struct sFun*)((void*)(__right_value415=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value414=__builtin_string(method_block_name_511))),((void*)0)))));
    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value415,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun2_513==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2intcharph*)(__right_value416=err_msg(info,"method block function not found(%s)",method_block_name_511)));
        come_exception_var_c5_514=multiple_assign_var7->v1;
        Err_515=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_515)?(puts(Err_515),exit(0)):(0));
        come_call_finalizer3(__right_value416,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __result311__ = (_Bool)1;
        (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_478) ? current_stack_frame_node_478 = come_decrement_ref_count2(current_stack_frame_node_478, ((struct sNode*)current_stack_frame_node_478)->finalize, ((struct sNode*)current_stack_frame_node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_489 = come_decrement_ref_count2(class_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_505,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_509) ? node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (method_block_name_511 = come_decrement_ref_count2(method_block_name_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result311__;
        (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_516=fun2_513->mLambdaType;
    __dec_obj124=come_value2_512->c_value;
    come_value2_512->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_511));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj125=come_value2_512->type;
    come_value2_512->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_516));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_512->var=((void*)0);
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_512));
    __dec_obj126=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_505);
    come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_506;
    info->head=head_507;
    info->sline=sline_508;
    info->current_stack_frame_struct=current_stack_frame_struct_490;
    __dec_obj127=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_517=(_Bool)0;
    for(    o2_saved_518=(param_types_494),it_519=((struct sType*)list$1voidphp_begin((o2_saved_518)));    !list$1voidphp_end((o2_saved_518));    it_519=((struct sType*)list$1voidphp_next((o2_saved_518)))    ){
        if(        is_contained_method_generics_types(it_519,info)) {
            contained_method_generics_method_block_517=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_493,info)) {
        contained_method_generics_method_block_517=(_Bool)1;
    }
    if(    contained_method_generics_method_block_517) {
        map$2voidphvoidphp_remove(info->funcs,((char*)(__right_value420=__builtin_string(method_block_name_511))));
        (__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result313__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node_478) ? current_stack_frame_node_478 = come_decrement_ref_count2(current_stack_frame_node_478, ((struct sNode*)current_stack_frame_node_478)->finalize, ((struct sNode*)current_stack_frame_node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_489 = come_decrement_ref_count2(class_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_505,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_509) ? node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (method_block_name_511 = come_decrement_ref_count2(method_block_name_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value2_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result304__;
void* __right_value384 = (void*)0;
struct sCurrentNode* result_479;
void* __right_value385 = (void*)0;
char* __dec_obj121;
struct sCurrentNode* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_479=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj121=result_479->sname;
        result_479->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_479;
    come_call_finalizer3(result_479,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_481;
struct list_item$1CVALUEph* prev_it_482;
    it_481=self->head;
    while(it_481!=((void*)0)) {
        prev_it_482=it_481;
        it_481=it_481->next;
        come_call_finalizer3(prev_it_482,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj122;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj122=self->item;
            come_call_finalizer3(__dec_obj122,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_486;
int i_487;
void* __result307__;
void* default_value_488;
void* __result308__;
default_value_488 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_486=self->head;
    i_487=0;
    while(it_486!=((void*)0)) {
        if(        position==i_487) {
            __result307__ = gComeFunResultObject = __result_obj__ = it_486->item;
            gComeFunResultObject = (void*)0;
            return __result307__;
        }
        it_486=it_486->next;
        i_487++;
    }
    memset(&default_value_488,0,sizeof(void*));
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_488);
    come_call_finalizer3(default_value_488,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
unsigned int hash_520;
unsigned int it_521;
struct map$2voidphvoidph* __result312__;
    hash_520=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_521=hash_520;
    while((_Bool)1) {
        if(        self->item_existance[it_521]) {
            if(            come_call_equals((void*)0, self->keys[it_521], key)) {
                list$1voidpp_remove(self->key_list,self->keys[it_521]);
                self->item_existance[it_521]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_521],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_521]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_521],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_521]=((void*)0);
                self->len--;
                break;
            }
            it_521++;
            if(            it_521>=self->size) {
                it_521=0;
            }
            else if(            it_521==hash_520) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value423 = (void*)0;
char* __dec_obj129;
void* __right_value433 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj140;
void* __right_value434 = (void*)0;
struct buffer* __dec_obj141;
void* __right_value435 = (void*)0;
struct list$1voidph* __dec_obj142;
struct sMethodCallNode* __result320__;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj128=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj129=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj140,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj141=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj141,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj142=self->method_generics_types;
    self->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, method_generics_types));
    come_call_finalizer3(__dec_obj142,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value436 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value436=__builtin_string("sMethodCallNode")));
    (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_532;
struct list$1tuple2$2charphsNodephph* params_533;
struct sNode* obj_534;
struct buffer* method_block_535;
int method_block_sline_536;
_Bool no_infference_method_generics_537;
struct list$1voidph* method_generics_types_538;
_Bool recursive_539;
struct list$1voidph* method_generics_types_before_540;
struct list$1voidph* __dec_obj149;
void* __right_value437 = (void*)0;
struct list$1voidph* __dec_obj150;
_Bool Value_541;
_Bool __result322__;
void* __right_value438 = (void*)0;
struct CVALUE* obj_value_542;
void* __right_value439 = (void*)0;
struct sType* obj_type_543;
_Bool no_output_come_code_544;
struct sType* type_545;
void* __right_value440 = (void*)0;
char* none_generics_name_546;
void* __right_value441 = (void*)0;
char* fun_name2_547;
void* __right_value442 = (void*)0;
char* fun_name3_548;
void* __right_value443 = (void*)0;
struct sGenericsFun* generics_fun_549;
_Bool method_generics_550;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_551=0;
struct sGenericsFun* gfun_552=0;
char* generics_fun_name_553;
void* __right_value446 = (void*)0;
struct sFun* fun_554;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1CVALUEph* come_params_555;
_Bool no_output_come_code_556;
_Bool __result324__;
void* __right_value449 = (void*)0;
struct CVALUE* method_block_node_557;
void* __right_value450 = (void*)0;
struct sType* method_block_lambda_type_561;
void* __right_value451 = (void*)0;
struct sType* method_block_result_type_562;
void* __right_value452 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_563;
struct sType* generics_fun_method_block_result_type_564;
int method_generics_num_565;
void* __right_value453 = (void*)0;
int n_566;
struct list$1voidph* o2_saved_567;
struct sType* it_568;
int method_generics_num_569;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1CVALUEph* come_params_570;
int i_571;
struct list$1tuple2$2charphsNodephph* o2_saved_572;
struct tuple2$2charphsNodeph* it_575;
struct tuple2$2charphsNodeph* multiple_assign_var9 = (void*)0;
char* label_578=0;
struct sNode* node_579=0;
_Bool Value_580;
_Bool __result333__;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_581;
int method_generics_num_582;
_Bool generics_any_child_583;
struct sType* obj_type2_584;
struct sType* __dec_obj151;
struct list$1voidph* o2_saved_585;
struct sType* it_586;
void* __right_value459 = (void*)0;
struct list$1voidph* o2_saved_587;
struct sType* it_588;
int method_generics_num_589;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1CVALUEph* come_params_590;
int i_591;
struct list$1tuple2$2charphsNodephph* o2_saved_592;
struct tuple2$2charphsNodeph* it_593;
struct tuple2$2charphsNodeph* multiple_assign_var10 = (void*)0;
char* label_594=0;
struct sNode* node_595=0;
_Bool Value_596;
_Bool __result334__;
void* __right_value464 = (void*)0;
struct CVALUE* come_value_597;
int method_generics_num_598;
void* __right_value465 = (void*)0;
int n_599;
struct list$1voidph* o2_saved_600;
struct sType* it_601;
int method_generics_num_602;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sClass* klass_603;
_Bool calling_dynamic_method_604;
struct sType* lambda_type_605;
struct list$1voidph* o2_saved_606;
struct tuple2$2charphsTypeph* it_607;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* field_name_608=0;
struct sType* field_type_609=0;
void* __right_value468 = (void*)0;
struct sType* result_type_610;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1CVALUEph* come_params_611;
int i_612;
struct list$1tuple2$2charphsNodephph* o2_saved_613;
struct tuple2$2charphsNodeph* it_614;
struct tuple2$2charphsNodeph* multiple_assign_var12 = (void*)0;
char* label_615=0;
struct sNode* node_616=0;
_Bool Value_617;
_Bool __result335__;
void* __right_value471 = (void*)0;
struct CVALUE* come_value_618;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_1_619=0;
char* Err_620=0;
_Bool _if_conditional2;
_Bool __result336__;
void* __right_value477 = (void*)0;
_Bool _if_conditional3;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct buffer* buf_621;
int j_622;
struct list$1CVALUEph* o2_saved_623;
struct CVALUE* it_626;
void* __right_value481 = (void*)0;
char* __dec_obj153;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct CVALUE* come_value2_629;
void* __right_value484 = (void*)0;
char* __dec_obj154;
void* __right_value485 = (void*)0;
struct sType* result_type2_630;
void* __right_value486 = (void*)0;
struct sType* __dec_obj155;
struct list$1voidph* __dec_obj156;
struct sGenericsFun* generics_fun_631;
char* generics_fun_name_632;
struct sFun* fun_633;
void* __right_value487 = (void*)0;
char* __dec_obj157;
struct sClass* klass_634;
void* __right_value488 = (void*)0;
_Bool _while_condtional1;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __dec_obj158;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var14 = (void*)0;
char* name_635=0;
struct sGenericsFun* gfun_636=0;
char* __dec_obj159;
void* __right_value495 = (void*)0;
char* none_generics_name_637;
void* __right_value496 = (void*)0;
char* fun_name3_638;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var15 = (void*)0;
char* name_639=0;
struct sGenericsFun* gfun_640=0;
char* __dec_obj160;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var16 = (void*)0;
char* name_641=0;
struct sGenericsFun* gfun_642=0;
char* __dec_obj161;
int i_643;
void* __right_value501 = (void*)0;
char* new_fun_name_644;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
char* __dec_obj162;
struct sType* obj_array_type_645;
void* __right_value505 = (void*)0;
char* array_method_name_646;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* __dec_obj163;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj164;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var17 = (void*)0;
int come_exception_var_2_647=0;
char* Err_648=0;
_Bool _if_conditional4;
_Bool __result343__;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __dec_obj165;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sClass* klass_649;
void* __right_value522 = (void*)0;
_Bool _while_condtional2;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj166;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var18 = (void*)0;
struct sFun* fun2_650=0;
char* real_fun_name_651=0;
char* __dec_obj168;
void* __right_value528 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var19 = (void*)0;
struct sFun* fun2_652=0;
char* real_fun_name_653=0;
char* __dec_obj169;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* original_obj_type_fun_name_654;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __dec_obj170;
void* __right_value533 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var20 = (void*)0;
int come_exception_var_3_655=0;
char* Err_656=0;
_Bool _if_conditional5;
_Bool __result344__;
void* __right_value534 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var21 = (void*)0;
int come_exception_var_4_657=0;
char* Err_658=0;
_Bool _if_conditional6;
_Bool __result345__;
void* __right_value535 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var22 = (void*)0;
int come_exception_var_5_659=0;
char* Err_660=0;
_Bool _if_conditional7;
_Bool __result346__;
void* __right_value536 = (void*)0;
struct sType* result_type_661;
_Bool in_exception_value_662;
void* __right_value544 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* new_node_663;
_Bool Value_665;
_Bool __result349__;
_Bool __result350__;
_Bool in_exception_value_666;
void* __right_value547 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* new_node_667;
_Bool Value_668;
_Bool __result351__;
_Bool __result352__;
void* __right_value550 = (void*)0;
struct sType* result_type2_669;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1voidph* param_types_670;
struct list$1voidph* o2_saved_671;
struct sType* it_672;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* it2_673;
struct sType* no_solved_obj_type_674;
void* __right_value555 = (void*)0;
struct sType* it3_675;
void* __right_value556 = (void*)0;
struct sType* any_type_676;
void* __right_value557 = (void*)0;
struct list$1voidph* type_checking_param_types_677;
int n_678;
struct list$1voidph* o2_saved_679;
struct sType* it_680;
struct sType* no_solved_obj_type_681;
void* __right_value558 = (void*)0;
struct sType* it3_682;
void* __right_value559 = (void*)0;
struct sType* any_type_683;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
_Bool _if_conditional8;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1CVALUEph* come_params_684;
int i_685;
_Bool first_param_689;
struct list$1tuple2$2charphsNodephph* o2_saved_690;
struct tuple2$2charphsNodeph* it_691;
struct tuple2$2charphsNodeph* multiple_assign_var23 = (void*)0;
char* label_692=0;
struct sNode* node_693=0;
int n_694;
struct list$1charph* o2_saved_695;
char* it_698;
_Bool Value_701;
_Bool __result360__;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_702;
void* __right_value568 = (void*)0;
_Bool _if_conditional9;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_6_703=0;
char* Err_704=0;
_Bool _if_conditional10;
_Bool __result361__;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
_Bool _if_conditional11;
void* __right_value576 = (void*)0;
int i_710;
struct list$1tuple2$2charphsNodephph* o2_saved_711;
struct tuple2$2charphsNodeph* it_712;
struct tuple2$2charphsNodeph* multiple_assign_var25 = (void*)0;
char* label_713=0;
struct sNode* node_714=0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_7_715=0;
char* Err_716=0;
_Bool _if_conditional12;
_Bool __result364__;
void* __right_value582 = (void*)0;
_Bool _if_conditional13;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
_Bool _elif_conditional1;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var27 = (void*)0;
int come_exception_var_8_720=0;
char* Err_721=0;
_Bool _if_conditional14;
_Bool __result367__;
void* __right_value587 = (void*)0;
_Bool _if_conditional15;
_Bool Value_722;
_Bool __result368__;
void* __right_value588 = (void*)0;
struct CVALUE* come_value_723;
void* __right_value589 = (void*)0;
_Bool _if_conditional16;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_9_724=0;
char* Err_725=0;
_Bool _if_conditional17;
_Bool __result369__;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
_Bool _if_conditional18;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
_Bool _if_conditional19;
struct sType* obj_array_type_726;
void* __right_value599 = (void*)0;
char* array_method_name_727;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct buffer* buf_728;
int i_729;
struct list$1sNodeph* o2_saved_730;
struct sNode* it_733;
_Bool Value_736;
void* __right_value602 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var29 = (void*)0;
int come_exception_var_10_737=0;
char* Err_738=0;
_Bool _if_conditional20;
_Bool __result376__;
void* __right_value603 = (void*)0;
struct CVALUE* come_value_739;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value_740;
void* __right_value606 = (void*)0;
char* __dec_obj181;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __dec_obj182;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct buffer* buf_744;
int i_745;
struct list$1sNodeph* o2_saved_746;
struct sNode* it_747;
_Bool Value_748;
void* __right_value617 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var30 = (void*)0;
int come_exception_var_11_749=0;
char* Err_750=0;
_Bool _if_conditional21;
_Bool __result378__;
void* __right_value618 = (void*)0;
struct CVALUE* come_value_751;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct CVALUE* come_value_752;
void* __right_value621 = (void*)0;
char* __dec_obj186;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sType* __dec_obj187;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct buffer* buf_753;
int i_754;
struct list$1sNodeph* o2_saved_755;
struct sNode* it_756;
_Bool Value_757;
void* __right_value629 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var31 = (void*)0;
int come_exception_var_12_758=0;
char* Err_759=0;
_Bool _if_conditional22;
_Bool __result379__;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_760;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct CVALUE* come_value_761;
void* __right_value633 = (void*)0;
char* __dec_obj188;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* __dec_obj189;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct buffer* buf_762;
int i_763;
struct list$1sNodeph* o2_saved_764;
struct sNode* it_765;
_Bool Value_766;
void* __right_value641 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var32 = (void*)0;
int come_exception_var_13_767=0;
char* Err_768=0;
_Bool _if_conditional23;
_Bool __result380__;
void* __right_value642 = (void*)0;
struct CVALUE* come_value_769;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct CVALUE* come_value_770;
void* __right_value645 = (void*)0;
char* __dec_obj190;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* __dec_obj191;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct buffer* buf_771;
int i_772;
struct list$1sNodeph* o2_saved_773;
struct sNode* it_774;
_Bool Value_775;
void* __right_value653 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var33 = (void*)0;
int come_exception_var_14_776=0;
char* Err_777=0;
_Bool _if_conditional24;
_Bool __result381__;
void* __right_value654 = (void*)0;
struct CVALUE* come_value_778;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct CVALUE* come_value_779;
void* __right_value657 = (void*)0;
char* __dec_obj192;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* __dec_obj193;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
char* default_param_780;
void* __right_value665 = (void*)0;
char* param_name_781;
void* __right_value666 = (void*)0;
_Bool _if_conditional25;
struct buffer* source_782;
char* p_783;
char* head_784;
int sline_785;
void* __right_value667 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value668 = (void*)0;
struct sNode* node_786;
_Bool Value_787;
_Bool __result382__;
struct buffer* __dec_obj195;
void* __right_value669 = (void*)0;
struct CVALUE* come_value_788;
void* __right_value670 = (void*)0;
_Bool _if_conditional26;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var34 = (void*)0;
_Bool come_exception_var_15_789=0;
char* Err_790=0;
_Bool _if_conditional27;
_Bool __result383__;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
_Bool _if_conditional28;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
_Bool _if_conditional29;
void* __right_value680 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var35 = (void*)0;
int come_exception_var_16_791=0;
char* Err_792=0;
_Bool _if_conditional30;
_Bool __result384__;
_Bool __result385__;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct buffer* buf_793;
int j_794;
struct list$1CVALUEph* o2_saved_795;
struct CVALUE* it_796;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct CVALUE* come_value2_797;
void* __right_value685 = (void*)0;
char* __dec_obj196;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sType* __dec_obj197;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
char* __dec_obj198;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sType* __dec_obj199;
void* __right_value692 = (void*)0;
char* __dec_obj200;
_Bool generics_any_child_798;
struct sType* obj_type2_799;
struct sType* __dec_obj201;
struct list$1voidph* o2_saved_800;
struct sType* it_801;
struct sType* obj_type2_802;
void* __right_value693 = (void*)0;
struct sType* __dec_obj202;
void* __right_value694 = (void*)0;
struct sType* __dec_obj203;
void* __right_value695 = (void*)0;
struct sType* __dec_obj204;
void* __right_value696 = (void*)0;
struct sType* __dec_obj205;
void* __right_value697 = (void*)0;
struct sType* __dec_obj206;
void* __right_value698 = (void*)0;
char* __dec_obj207;
void* __right_value699 = (void*)0;
struct CVALUE* __dec_obj208;
void* __right_value700 = (void*)0;
struct list$1voidph* __dec_obj209;
_Bool __result386__;
    fun_name_532=(char*)come_increment_ref_count(self->fun_name);
    params_533=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_534=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_535=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_536=self->method_block_sline;
    no_infference_method_generics_537=self->no_infference_method_generics;
    method_generics_types_538=(struct list$1voidph*)come_increment_ref_count(self->method_generics_types);
    recursive_539=self->recursive;
    method_generics_types_before_540=((void*)0);
    __dec_obj149=method_generics_types_before_540;
    method_generics_types_before_540=(struct list$1voidph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj149,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj150=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj150,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_541=node_compile(obj_534,info);
    if(    !Value_541) {
        __result322__ = (_Bool)0;
        (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result322__;
    }
    else {
    }
    obj_value_542=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_543=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_542->type));
    if(    !no_infference_method_generics_537) {
        no_output_come_code_544=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_545=(struct sType*)come_increment_ref_count(obj_type_543);
        none_generics_name_546=(char*)come_increment_ref_count(get_none_generics_name(type_545->mClass->mName));
        fun_name2_547=(char*)come_increment_ref_count(create_method_name(type_545,(_Bool)0,fun_name_532,info,(_Bool)1));
        fun_name3_548=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_546,fun_name_532));
        generics_fun_549=((struct sGenericsFun*)((void*)(__right_value443=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_548,((void*)0)))));
        come_call_finalizer3(__right_value443,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_549) {
            method_generics_550=list$1charphp_length(generics_fun_549->mMethodGenericsTypeNames)>0;
            if(            method_generics_550&&list$1voidphp_length(info->method_generics_types)==0) {
                multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value445=make_generics_function(obj_type_543,(char*)come_increment_ref_count(__builtin_string(fun_name_532)),info,(_Bool)1)));
                name_551=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_552=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value445,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_553=(char*)come_increment_ref_count(name_551);
                fun_554=((struct sFun*)((void*)(__right_value446=map$2voidphvoidphp_at(info->funcs,generics_fun_name_553,((void*)0)))));
                come_call_finalizer3(__right_value446,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_params_555=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 354, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                method_block_535) {
                    no_output_come_code_556=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_535,(struct list$1CVALUEph*)come_increment_ref_count(come_params_555),fun_554,fun_name3_548,method_block_sline_536,info,(_Bool)1)) {
                        __result324__ = (_Bool)0;
                        (name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_553 = come_decrement_ref_count2(generics_fun_name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_params_555,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (none_generics_name_546 = come_decrement_ref_count2(none_generics_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_547 = come_decrement_ref_count2(fun_name2_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_548 = come_decrement_ref_count2(fun_name3_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result324__;
                    }
                    info->no_output_come_code=no_output_come_code_556;
                    method_block_node_557=((struct CVALUE*)(__right_value449=list$1CVALUEphp_operator_load_element(come_params_555,-1)));
                    come_call_finalizer3(__right_value449,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_561=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_557->type));
                    method_block_result_type_562=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_563=((struct sType*)((void*)(__right_value452=list$1voidphp_operator_load_element(generics_fun_549->mParamTypes,-1))));
                    come_call_finalizer3(__right_value452,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    generics_fun_method_block_result_type_564=generics_fun_method_block_lambda_type_563->mResultType;
                    if(                    generics_fun_method_block_result_type_564->mClass->mMethodGenerics) {
                        method_generics_num_565=generics_fun_method_block_result_type_564->mClass->mMethodGenericsNum;
                        list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_565,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_562)));
                    }
                    n_566=0;
                    for(                    o2_saved_567=(struct list$1voidph*)come_increment_ref_count((generics_fun_method_block_lambda_type_563->mParamTypes)),it_568=((struct sType*)list$1voidphp_begin((o2_saved_567)));                    !list$1voidphp_end((o2_saved_567));                    it_568=((struct sType*)list$1voidphp_next((o2_saved_567)))                    ){
                        if(                        it_568->mClass->mMethodGenerics) {
                            method_generics_num_569=it_568->mClass->mMethodGenericsNum;
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_569,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value454=list$1voidphp_operator_load_element(method_block_lambda_type_561->mParamTypes,n_566)))))));
                            come_call_finalizer3(__right_value454,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        }
                        n_566++;
                    }
                    come_call_finalizer3(o2_saved_567,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_570=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 383, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_571=0;
                    for(                    o2_saved_572=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_533)),it_575=list$1tuple2$2charphsNodephphp_begin((o2_saved_572));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_572));                    it_575=list$1tuple2$2charphsNodephphp_next((o2_saved_572))                    ){
                        multiple_assign_var9=it_575;
                        label_578=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_579=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_571==0) {
                            list$1CVALUEphp_push_back(come_params_570,(struct CVALUE*)come_increment_ref_count(obj_value_542));
                            i_571++;
                        }
                        else {
                            Value_580=node_compile(node_579,info);
                            if(                            !Value_580) {
                                __result333__ = (_Bool)0;
                                (label_578 = come_decrement_ref_count2(label_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_579) ? node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(o2_saved_572,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_553 = come_decrement_ref_count2(generics_fun_name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_555,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_546 = come_decrement_ref_count2(none_generics_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_547 = come_decrement_ref_count2(fun_name2_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_548 = come_decrement_ref_count2(fun_name3_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result333__;
                            }
                            else {
                            }
                            come_value_581=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_570,(struct CVALUE*)come_increment_ref_count(come_value_581));
                            come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_578 = come_decrement_ref_count2(label_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_579) ? node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                    come_call_finalizer3(o2_saved_572,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_549->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_582=generics_fun_549->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            generics_any_child_583=(_Bool)0;
                            obj_type2_584=(struct sType*)come_increment_ref_count(obj_type_543);
                            if(                            obj_type2_584->mNoSolvedGenericsType) {
                                __dec_obj151=obj_type2_584;
                                obj_type2_584=(struct sType*)come_increment_ref_count(obj_type2_584->mNoSolvedGenericsType);
                                come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                                for(                                o2_saved_585=(struct list$1voidph*)come_increment_ref_count((obj_type2_584->mGenericsTypes)),it_586=((struct sType*)list$1voidphp_begin((o2_saved_585)));                                !list$1voidphp_end((o2_saved_585));                                it_586=((struct sType*)list$1voidphp_next((o2_saved_585)))                                ){
                                    if(                                    it_586->mAnyOriginalType) {
                                        generics_any_child_583=(_Bool)1;
                                    }
                                }
                                come_call_finalizer3(o2_saved_585,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_582,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                            come_call_finalizer3(obj_type2_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    n_566=0;
                    for(                    o2_saved_587=(struct list$1voidph*)come_increment_ref_count((generics_fun_549->mParamTypes)),it_588=((struct sType*)list$1voidphp_begin((o2_saved_587)));                    !list$1voidphp_end((o2_saved_587));                    it_588=((struct sType*)list$1voidphp_next((o2_saved_587)))                    ){
                        if(                        it_588->mClass->mMethodGenerics) {
                            method_generics_num_589=it_588->mClass->mMethodGenericsNum;
                            if(                            n_566<list$1CVALUEphp_length(come_params_570)) {
                                list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_589,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value460=list$1CVALUEphp_operator_load_element(come_params_570,n_566)))->type)));
                                come_call_finalizer3(__right_value460,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_566++;
                    }
                    come_call_finalizer3(o2_saved_587,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_590=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 433, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_591=0;
                    for(                    o2_saved_592=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_533)),it_593=list$1tuple2$2charphsNodephphp_begin((o2_saved_592));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_592));                    it_593=list$1tuple2$2charphsNodephphp_next((o2_saved_592))                    ){
                        multiple_assign_var10=it_593;
                        label_594=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                        node_595=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
                        if(                        i_591==0) {
                            list$1CVALUEphp_push_back(come_params_590,(struct CVALUE*)come_increment_ref_count(obj_value_542));
                            i_591++;
                        }
                        else {
                            Value_596=node_compile(node_595,info);
                            if(                            !Value_596) {
                                __result334__ = (_Bool)0;
                                (label_594 = come_decrement_ref_count2(label_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_595) ? node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(o2_saved_592,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_590,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_553 = come_decrement_ref_count2(generics_fun_name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_555,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_546 = come_decrement_ref_count2(none_generics_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_547 = come_decrement_ref_count2(fun_name2_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_548 = come_decrement_ref_count2(fun_name3_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result334__;
                            }
                            else {
                            }
                            come_value_597=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_590,(struct CVALUE*)come_increment_ref_count(come_value_597));
                            come_call_finalizer3(come_value_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_594 = come_decrement_ref_count2(label_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_595) ? node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                    come_call_finalizer3(o2_saved_592,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_549->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_598=generics_fun_549->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_598,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_599=0;
                    for(                    o2_saved_600=(struct list$1voidph*)come_increment_ref_count((generics_fun_549->mParamTypes)),it_601=((struct sType*)list$1voidphp_begin((o2_saved_600)));                    !list$1voidphp_end((o2_saved_600));                    it_601=((struct sType*)list$1voidphp_next((o2_saved_600)))                    ){
                        if(                        it_601->mClass->mMethodGenerics) {
                            method_generics_num_602=it_601->mClass->mMethodGenericsNum;
                            if(                            n_599<list$1CVALUEphp_length(come_params_590)) {
                                list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_602,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value466=list$1CVALUEphp_operator_load_element(come_params_590,n_599)))->type)));
                                come_call_finalizer3(__right_value466,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_599++;
                    }
                    come_call_finalizer3(o2_saved_600,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_590,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2voidphvoidphp_remove(info->funcs,generics_fun_name_553);
                (name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_553 = come_decrement_ref_count2(generics_fun_name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_params_555,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_544;
        come_call_finalizer3(type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        (none_generics_name_546 = come_decrement_ref_count2(none_generics_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_547 = come_decrement_ref_count2(fun_name2_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_548 = come_decrement_ref_count2(fun_name3_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_603=obj_type_543->mClass;
    calling_dynamic_method_604=(_Bool)0;
    lambda_type_605=((void*)0);
    for(    o2_saved_606=(struct list$1voidph*)come_increment_ref_count((klass_603->mFields)),it_607=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_606)));    !list$1voidphp_end((o2_saved_606));    it_607=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_606)))    ){
        multiple_assign_var11=it_607;
        field_name_608=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        field_type_609=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        string_operator_equals(field_name_608,fun_name_532)&&string_operator_equals(field_type_609->mClass->mName,"lambda")) {
            calling_dynamic_method_604=(_Bool)1;
            lambda_type_605=field_type_609;
            (field_name_608 = come_decrement_ref_count2(field_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        (field_name_608 = come_decrement_ref_count2(field_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_606,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_604) {
        result_type_610=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_605->mResultType));
        result_type_610->mStatic=(_Bool)0;
        come_params_611=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 496, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_612=0;
        for(        o2_saved_613=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_533)),it_614=list$1tuple2$2charphsNodephphp_begin((o2_saved_613));        !list$1tuple2$2charphsNodephphp_end((o2_saved_613));        it_614=list$1tuple2$2charphsNodephphp_next((o2_saved_613))        ){
            multiple_assign_var12=it_614;
            label_615=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_616=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            i_612==0) {
                list$1CVALUEphp_push_back(come_params_611,(struct CVALUE*)come_increment_ref_count(obj_value_542));
                i_612++;
            }
            else {
                Value_617=node_compile(node_616,info);
                if(                !Value_617) {
                    __result335__ = (_Bool)0;
                    (label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_616) ? node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_611,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result335__;
                }
                else {
                }
                come_value_618=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var13=((struct tuple2$2boolcharph*)(__right_value476=check_assign_type(((char*)(__right_value474=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value472=string_to_string(fun_name_532))),((char*)(__right_value473=int_to_string(i_612)))))),((struct sType*)((void*)(__right_value475=list$1voidphp_operator_load_element(lambda_type_605->mParamTypes,i_612-1)))),come_value_618->type,come_value_618,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_1_619=multiple_assign_var13->v1;
                Err_620=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                (_if_conditional2=(Err_620)),                (__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value475,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value476,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result336__ = (_Bool)1;
                    come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_620 = come_decrement_ref_count2(Err_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_616) ? node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_611,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result336__;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)((void*)(__right_value477=list$1voidphp_operator_load_element(lambda_type_605->mParamTypes,i_612-1))))->mHeap&&come_value_618->type->mHeap)),                come_call_finalizer3(__right_value477,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)((void*)(__right_value478=list$1voidphp_operator_load_element(lambda_type_605->mParamTypes,i_612-1)))),come_value_618->type,come_value_618,info,(_Bool)1);
                    come_call_finalizer3(__right_value478,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUEphp_push_back(come_params_611,(struct CVALUE*)come_increment_ref_count(come_value_618));
                i_612++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_620 = come_decrement_ref_count2(Err_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_616) ? node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_621=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 528, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_format(buf_621,"%s->%s",obj_value_542->c_value,fun_name_532);
        buffer_append_str(buf_621,"(");
        j_622=0;
        for(        o2_saved_623=(struct list$1CVALUEph*)come_increment_ref_count((come_params_611)),it_626=list$1CVALUEphp_begin((o2_saved_623));        !list$1CVALUEphp_end((o2_saved_623));        it_626=list$1CVALUEphp_next((o2_saved_623))        ){
            if(            j_622==0) {
                __dec_obj153=it_626->c_value;
                it_626->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_626->c_value));
                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_621,it_626->c_value);
            if(            j_622!=list$1CVALUEphp_length(come_params_611)-1) {
                buffer_append_str(buf_621,",");
            }
            j_622++;
        }
        come_call_finalizer3(o2_saved_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_621,")");
        come_value2_629=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 548, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj154=come_value2_629->c_value;
        come_value2_629->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_621));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_630=(struct sType*)come_increment_ref_count(solve_generics(result_type_610,info->generics_type,info));
        __dec_obj155=come_value2_629->type;
        come_value2_629->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_630));
        come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_629->type->mStatic=(_Bool)0;
        come_value2_629->var=((void*)0);
        if(        result_type2_630->mHeap) {
            append_object_to_right_values2(come_value2_629,(struct sType*)come_increment_ref_count(result_type2_630),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_629->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_629));
        come_call_finalizer3(info->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj156=info->method_generics_types;
        info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_540);
        come_call_finalizer3(__dec_obj156,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_611,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_621,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_630,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_631=((void*)0);
        generics_fun_name_632=((void*)0);
        fun_633=((void*)0);
        if(        string_operator_equals(fun_name_532,"super")) {
            __dec_obj157=fun_name_532;
            fun_name_532=(char*)come_increment_ref_count(create_non_method_name(obj_type_543,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_634=obj_type_543->mClass;
            while((_while_condtional1=(((struct sClass*)((void*)(__right_value488=map$2voidphvoidphp_operator_load_element(info->classes,klass_634->mParentClassName)))))),            come_call_finalizer3(__right_value488,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _while_condtional1) {
                klass_634=((struct sClass*)((void*)(__right_value489=map$2voidphvoidphp_operator_load_element(info->classes,klass_634->mParentClassName))));
                come_call_finalizer3(__right_value489,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                __dec_obj158=generics_fun_name_632;
                generics_fun_name_632=(char*)come_increment_ref_count(create_method_name_using_class(klass_634,(_Bool)0,fun_name_532,info,(_Bool)1));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_633=((struct sFun*)((void*)(__right_value492=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value491=__builtin_string(generics_fun_name_632))),((void*)0)))));
                (__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value492,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_633) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_543&&obj_type_543->mNoSolvedGenericsType&&list$1voidphp_length(obj_type_543->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var14=((struct tuple2$2charphsGenericsFunp*)(__right_value494=make_generics_function(obj_type_543,(char*)come_increment_ref_count(__builtin_string(fun_name_532)),info,(_Bool)1)));
                name_635=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_636=multiple_assign_var14->v2;
                come_call_finalizer3(__right_value494,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj159=generics_fun_name_632;
                generics_fun_name_632=(char*)come_increment_ref_count(name_635);
                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_631=gfun_636;
                (name_635 = come_decrement_ref_count2(name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1voidphp_length(info->method_generics_types)>0) {
                none_generics_name_637=(char*)come_increment_ref_count(get_none_generics_name(obj_type_543->mClass->mName));
                fun_name3_638=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_637,fun_name_532));
                multiple_assign_var15=((struct tuple2$2charphsGenericsFunp*)(__right_value498=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_638)),(struct list$1voidph*)come_increment_ref_count(info->method_generics_types),info)));
                name_639=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                gfun_640=multiple_assign_var15->v2;
                come_call_finalizer3(__right_value498,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj160=generics_fun_name_632;
                generics_fun_name_632=(char*)come_increment_ref_count(name_639);
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_631=gfun_640;
                (none_generics_name_637 = come_decrement_ref_count2(none_generics_name_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_638 = come_decrement_ref_count2(fun_name3_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_639 = come_decrement_ref_count2(name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var16=((struct tuple2$2charphsGenericsFunp*)(__right_value500=make_generics_function(obj_type_543,(char*)come_increment_ref_count(__builtin_string(fun_name_532)),info,(_Bool)1)));
                name_641=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                gfun_642=multiple_assign_var16->v2;
                come_call_finalizer3(__right_value500,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj161=generics_fun_name_632;
                generics_fun_name_632=(char*)come_increment_ref_count(name_641);
                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_631=gfun_642;
                (name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_643=128;            i_643>=1;            i_643--            ){
                new_fun_name_644=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_632,i_643));
                fun_633=((struct sFun*)((void*)(__right_value503=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value502=__builtin_string(new_fun_name_644)))))));
                (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value503,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_633!=((void*)0)) {
                    __dec_obj162=generics_fun_name_632;
                    generics_fun_name_632=(char*)come_increment_ref_count(__builtin_string(new_fun_name_644));
                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_644 = come_decrement_ref_count2(new_fun_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_644 = come_decrement_ref_count2(new_fun_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_633==((void*)0)) {
                obj_array_type_645=obj_type_543->mOriginalLoadVarType;
                if(                obj_array_type_645&&list$1sNodephp_length(obj_array_type_645->mArrayNum)>0) {
                    array_method_name_646=(char*)come_increment_ref_count(create_method_name(obj_array_type_645,(_Bool)0,fun_name_532,info,(_Bool)0));
                    fun_633=((struct sFun*)((void*)(__right_value507=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value506=__builtin_string(array_method_name_646))),((void*)0)))));
                    (__right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value507,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    if(                    fun_633) {
                        __dec_obj163=generics_fun_name_632;
                        generics_fun_name_632=(char*)come_increment_ref_count(__builtin_string(array_method_name_646));
                        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_633=((struct sFun*)((void*)(__right_value510=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value509=__builtin_string(generics_fun_name_632))),((void*)0)))));
                        (__right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value510,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        if(                        fun_633==((void*)0)) {
                            __dec_obj164=generics_fun_name_632;
                            generics_fun_name_632=(char*)come_increment_ref_count(create_method_name(obj_type_543,(_Bool)0,((char*)(__right_value511=__builtin_string(fun_name_532))),info,(_Bool)1));
                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_633=((struct sFun*)((void*)(__right_value514=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value513=__builtin_string(generics_fun_name_632))),((void*)0)))));
                            (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value514,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                            if(                            fun_633==((void*)0)) {
                                multiple_assign_var17=((struct tuple2$2intcharph*)(__right_value515=err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_632,info->come_fun->mName)));
                                come_exception_var_2_647=multiple_assign_var17->v1;
                                Err_648=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                                if(                                (_if_conditional4=(Err_648)),                                come_call_finalizer3(__right_value515,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional4) {
                                    __result343__ = (_Bool)1;
                                    (Err_648 = come_decrement_ref_count2(Err_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_646 = come_decrement_ref_count2(array_method_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result343__;
                                }
                                else {
                                }
                                (Err_648 = come_decrement_ref_count2(Err_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_646 = come_decrement_ref_count2(array_method_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_633=((struct sFun*)((void*)(__right_value517=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value516=__builtin_string(generics_fun_name_632))),((void*)0)))));
                    (__right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value517,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    if(                    fun_633==((void*)0)) {
                        __dec_obj165=generics_fun_name_632;
                        generics_fun_name_632=(char*)come_increment_ref_count(create_method_name(obj_type_543,(_Bool)0,((char*)(__right_value518=__builtin_string(fun_name_532))),info,(_Bool)1));
                        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                        (__right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_633=((struct sFun*)((void*)(__right_value521=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value520=__builtin_string(generics_fun_name_632))),((void*)0)))));
                        (__right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value521,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        if(                        fun_633==((void*)0)) {
                            klass_649=obj_type_543->mClass;
                            while((_while_condtional2=(((struct sClass*)((void*)(__right_value522=map$2voidphvoidphp_operator_load_element(info->classes,klass_649->mParentClassName)))))),                            come_call_finalizer3(__right_value522,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                            _while_condtional2) {
                                klass_649=((struct sClass*)((void*)(__right_value523=map$2voidphvoidphp_operator_load_element(info->classes,klass_649->mParentClassName))));
                                come_call_finalizer3(__right_value523,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                                __dec_obj166=generics_fun_name_632;
                                generics_fun_name_632=(char*)come_increment_ref_count(create_method_name_using_class(klass_649,(_Bool)0,fun_name_532,info,(_Bool)1));
                                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_633=((struct sFun*)((void*)(__right_value526=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value525=__builtin_string(generics_fun_name_632))),((void*)0)))));
                                (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(__right_value526,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                                if(                                fun_633) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_633==((void*)0)&&string_operator_equals(fun_name_532,"to_string")) {
                            multiple_assign_var18=((struct tuple2$2sFunpcharph*)(__right_value527=create_to_string_automatically(obj_type_543,fun_name_532,info)));
                            fun2_650=multiple_assign_var18->v1;
                            real_fun_name_651=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            come_call_finalizer3(__right_value527,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_633=fun2_650;
                            __dec_obj168=generics_fun_name_632;
                            generics_fun_name_632=(char*)come_increment_ref_count(real_fun_name_651);
                            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_651 = come_decrement_ref_count2(real_fun_name_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_633==((void*)0)&&string_operator_equals(fun_name_532,"equals")) {
                            multiple_assign_var19=((struct tuple2$2sFunpcharph*)(__right_value528=create_equals_automatically(obj_type_543,fun_name_532,info)));
                            fun2_652=multiple_assign_var19->v1;
                            real_fun_name_653=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                            come_call_finalizer3(__right_value528,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_633=fun2_652;
                            __dec_obj169=generics_fun_name_632;
                            generics_fun_name_632=(char*)come_increment_ref_count(real_fun_name_653);
                            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_653 = come_decrement_ref_count2(real_fun_name_653, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_633==((void*)0)) {
                            original_obj_type_fun_name_654=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_543,(_Bool)0,((char*)(__right_value529=__builtin_string(fun_name_532))),info,(_Bool)1));
                            (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_633=((struct sFun*)((void*)(__right_value532=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value531=__builtin_string(original_obj_type_fun_name_654))),((void*)0)))));
                            (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                            if(                            fun_633) {
                                __dec_obj170=generics_fun_name_632;
                                generics_fun_name_632=(char*)come_increment_ref_count(original_obj_type_fun_name_654);
                                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            (original_obj_type_fun_name_654 = come_decrement_ref_count2(original_obj_type_fun_name_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_633==((void*)0)) {
                            multiple_assign_var20=((struct tuple2$2intcharph*)(__right_value533=err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_632,info->come_fun->mName)));
                            come_exception_var_3_655=multiple_assign_var20->v1;
                            Err_656=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            if(                            (_if_conditional5=(Err_656)),                            come_call_finalizer3(__right_value533,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional5) {
                                __result344__ = (_Bool)1;
                                (Err_656 = come_decrement_ref_count2(Err_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result344__;
                            }
                            else {
                            }
                            (Err_656 = come_decrement_ref_count2(Err_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_633==((void*)0)) {
            multiple_assign_var21=((struct tuple2$2intcharph*)(__right_value534=err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_632,info->come_fun->mName)));
            come_exception_var_4_657=multiple_assign_var21->v1;
            Err_658=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional6=(Err_658)),            come_call_finalizer3(__right_value534,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result345__ = (_Bool)1;
                (Err_658 = come_decrement_ref_count2(Err_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result345__;
            }
            else {
            }
            (Err_658 = come_decrement_ref_count2(Err_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1voidphp_length(fun_633->mParamTypes)==0) {
            multiple_assign_var22=((struct tuple2$2intcharph*)(__right_value535=err_msg(info,"Method require function parametor")));
            come_exception_var_5_659=multiple_assign_var22->v1;
            Err_660=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional7=(Err_660)),            come_call_finalizer3(__right_value535,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result346__ = (_Bool)1;
                (Err_660 = come_decrement_ref_count2(Err_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result346__;
            }
            else {
            }
            (Err_660 = come_decrement_ref_count2(Err_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_661=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_633->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_661->mException&&!info->in_exception_value) {
            in_exception_value_662=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 716, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value544=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMethodCallNode_finalize;
            _inf_value2->clone=(void*)sMethodCallNode_clone;
            _inf_value2->compile=(void*)sMethodCallNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMethodCallNode_terminated;
            _inf_value2->kind=(void*)sMethodCallNode_kind;
            new_node_663=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            come_call_finalizer3(__right_value544,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_665=node_compile(new_node_663,info);
            if(            !Value_665) {
                __result349__ = (_Bool)0;
                ((new_node_663) ? new_node_663 = come_decrement_ref_count2(new_node_663, ((struct sNode*)new_node_663)->finalize, ((struct sNode*)new_node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result349__;
            }
            else {
            }
            info->in_exception_value=in_exception_value_662;
            __result350__ = (_Bool)1;
            ((new_node_663) ? new_node_663 = come_decrement_ref_count2(new_node_663, ((struct sNode*)new_node_663)->finalize, ((struct sNode*)new_node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result350__;
            ((new_node_663) ? new_node_663 = come_decrement_ref_count2(new_node_663, ((struct sNode*)new_node_663)->finalize, ((struct sNode*)new_node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        result_type_661->mException&&!info->in_exception_value) {
            in_exception_value_666=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 728, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value547=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMethodCallNode_finalize;
            _inf_value3->clone=(void*)sMethodCallNode_clone;
            _inf_value3->compile=(void*)sMethodCallNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMethodCallNode_terminated;
            _inf_value3->kind=(void*)sMethodCallNode_kind;
            new_node_667=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            come_call_finalizer3(__right_value547,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_668=node_compile(new_node_667,info);
            if(            !Value_668) {
                __result351__ = (_Bool)0;
                ((new_node_667) ? new_node_667 = come_decrement_ref_count2(new_node_667, ((struct sNode*)new_node_667)->finalize, ((struct sNode*)new_node_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result351__;
            }
            else {
            }
            info->in_exception_value=in_exception_value_666;
            __result352__ = (_Bool)1;
            ((new_node_667) ? new_node_667 = come_decrement_ref_count2(new_node_667, ((struct sNode*)new_node_667)->finalize, ((struct sNode*)new_node_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result352__;
            ((new_node_667) ? new_node_667 = come_decrement_ref_count2(new_node_667, ((struct sNode*)new_node_667)->finalize, ((struct sNode*)new_node_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        result_type_661->mStatic=(_Bool)0;
        result_type2_669=(struct sType*)come_increment_ref_count(solve_generics(result_type_661,info->generics_type,info));
        param_types_670=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "20method.c", 743, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        for(        o2_saved_671=(struct list$1voidph*)come_increment_ref_count((fun_633->mParamTypes)),it_672=((struct sType*)list$1voidphp_begin((o2_saved_671)));        !list$1voidphp_end((o2_saved_671));        it_672=((struct sType*)list$1voidphp_next((o2_saved_671)))        ){
            if(            it_672==((void*)0)) {
                list$1voidphp_push_back(param_types_670,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_672)));
            }
            else {
                it2_673=(struct sType*)come_increment_ref_count(solve_generics(it_672,info->generics_type,info));
                no_solved_obj_type_674=(struct sType*)come_increment_ref_count(obj_type_543->mNoSolvedGenericsType);
                it3_675=(struct sType*)come_increment_ref_count(solve_generics(it_672,no_solved_obj_type_674,info));
                any_type_676=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_675)));
                list$1voidphp_push_back(param_types_670,(struct sType*)come_increment_ref_count(it2_673));
                come_call_finalizer3(it2_673,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_obj_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(it3_675,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(any_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_671,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        type_checking_param_types_677=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_670));
        if(        generics_fun_631) {
            n_678=0;
            for(            o2_saved_679=(struct list$1voidph*)come_increment_ref_count((generics_fun_631->mParamTypes)),it_680=((struct sType*)list$1voidphp_begin((o2_saved_679)));            !list$1voidphp_end((o2_saved_679));            it_680=((struct sType*)list$1voidphp_next((o2_saved_679)))            ){
                if(                it_680==((void*)0)) {
                }
                else {
                    no_solved_obj_type_681=(struct sType*)come_increment_ref_count(obj_type_543->mNoSolvedGenericsType);
                    it3_682=(struct sType*)come_increment_ref_count(solve_generics(it_680,no_solved_obj_type_681,info));
                    any_type_683=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_682)));
                    if(                    (_if_conditional8=(string_operator_equals(((struct sType*)((void*)(__right_value560=list$1voidphp_operator_load_element(param_types_670,n_678))))->mClass->mName,"void")&&((struct sType*)((void*)(__right_value561=list$1voidphp_operator_load_element(param_types_670,n_678))))->mPointerNum==1)),                    come_call_finalizer3(__right_value560,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value561,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional8) {
                        list$1voidphp_replace(type_checking_param_types_677,n_678,(struct sType*)come_increment_ref_count(any_type_683));
                    }
                    come_call_finalizer3(no_solved_obj_type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(it3_682,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(any_type_683,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                n_678++;
            }
            come_call_finalizer3(o2_saved_679,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_params_684=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 782, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        i_685=0;        i_685<list$1voidphp_length(fun_633->mParamTypes)-(((method_block_535)?(2):(0)));        i_685++        ){
            list$1CVALUEphp_add(come_params_684,((void*)0));
        }
        first_param_689=(_Bool)1;
        for(        o2_saved_690=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_533)),it_691=list$1tuple2$2charphsNodephphp_begin((o2_saved_690));        !list$1tuple2$2charphsNodephphp_end((o2_saved_690));        it_691=list$1tuple2$2charphsNodephphp_next((o2_saved_690))        ){
            multiple_assign_var23=it_691;
            label_692=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_693=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            first_param_689) {
                first_param_689=(_Bool)0;
            }
            else if(            label_692) {
                n_694=0;
                for(                o2_saved_695=(struct list$1charph*)come_increment_ref_count((fun_633->mParamNames)),it_698=list$1charphp_begin((o2_saved_695));                !list$1charphp_end((o2_saved_695));                it_698=list$1charphp_next((o2_saved_695))                ){
                    if(                    string_operator_equals(label_692,it_698)) {
                        break;
                    }
                    n_694++;
                }
                come_call_finalizer3(o2_saved_695,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                Value_701=node_compile(node_693,info);
                if(                !Value_701) {
                    __result360__ = (_Bool)0;
                    (label_692 = come_decrement_ref_count2(label_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_693) ? node_693 = come_decrement_ref_count2(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_690,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result360__;
                }
                else {
                }
                come_value_702=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional9=(((struct sType*)((void*)(__right_value568=list$1voidphp_operator_load_element(param_types_670,n_694)))))),                come_call_finalizer3(__right_value568,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional9) {
                    multiple_assign_var24=((struct tuple2$2boolcharph*)(__right_value573=check_assign_type(((char*)(__right_value571=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value569=string_to_string(fun_name_532))),((char*)(__right_value570=int_to_string(n_694)))))),((struct sType*)((void*)(__right_value572=list$1voidphp_operator_load_element(type_checking_param_types_677,n_694)))),come_value_702->type,come_value_702,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_6_703=multiple_assign_var24->v1;
                    Err_704=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                    if(                    (_if_conditional10=(Err_704)),                    (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value572,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value573,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional10) {
                        __result361__ = (_Bool)1;
                        (Err_704 = come_decrement_ref_count2(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_702,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_692 = come_decrement_ref_count2(label_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_693) ? node_693 = come_decrement_ref_count2(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(o2_saved_690,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result361__;
                    }
                    else {
                    }
                    (Err_704 = come_decrement_ref_count2(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional11=(((struct sType*)((void*)(__right_value574=list$1voidphp_operator_load_element(param_types_670,n_694))))&&((struct sType*)((void*)(__right_value575=list$1voidphp_operator_load_element(param_types_670,n_694))))->mHeap&&come_value_702->type->mHeap)),                come_call_finalizer3(__right_value574,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value575,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional11) {
                    std_move(((struct sType*)((void*)(__right_value576=list$1voidphp_operator_load_element(param_types_670,n_694)))),come_value_702->type,come_value_702,info,(_Bool)1);
                    come_call_finalizer3(__right_value576,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_684,n_694,(struct CVALUE*)come_increment_ref_count(come_value_702));
                come_call_finalizer3(come_value_702,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_692 = come_decrement_ref_count2(label_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_693) ? node_693 = come_decrement_ref_count2(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        come_call_finalizer3(o2_saved_690,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_710=0;
        for(        o2_saved_711=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_533)),it_712=list$1tuple2$2charphsNodephphp_begin((o2_saved_711));        !list$1tuple2$2charphsNodephphp_end((o2_saved_711));        it_712=list$1tuple2$2charphsNodephphp_next((o2_saved_711))        ){
            multiple_assign_var25=it_712;
            label_713=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            node_714=(struct sNode*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            i_710==0) {
                multiple_assign_var26=((struct tuple2$2boolcharph*)(__right_value581=check_assign_type(((char*)(__right_value579=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value577=string_to_string(fun_name_532))),((char*)(__right_value578=int_to_string(i_710)))))),((struct sType*)((void*)(__right_value580=list$1voidphp_operator_load_element(type_checking_param_types_677,i_710)))),obj_value_542->type,obj_value_542,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_715=multiple_assign_var26->v1;
                Err_716=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                if(                (_if_conditional12=(Err_716)),                (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value580,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value581,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    __result364__ = (_Bool)1;
                    (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_711,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result364__;
                }
                else {
                }
                if(                (_if_conditional13=(((struct sType*)((void*)(__right_value582=list$1voidphp_operator_load_element(param_types_670,i_710))))->mHeap&&obj_value_542->type->mHeap)),                come_call_finalizer3(__right_value582,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional13) {
                    std_move(((struct sType*)((void*)(__right_value583=list$1voidphp_operator_load_element(param_types_670,i_710)))),obj_value_542->type,obj_value_542,info,(_Bool)1);
                    come_call_finalizer3(__right_value583,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)((void*)(__right_value584=list$1voidphp_operator_load_element(param_types_670,i_710))))->mHeap&&!obj_value_542->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value584,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _elif_conditional1) {
                    multiple_assign_var27=((struct tuple2$2intcharph*)(__right_value586=err_msg(info,"require heap parametor(%s)",((char*)(__right_value585=list$1charphp_operator_load_element(fun_633->mParamNames,i_710))))));
                    come_exception_var_8_720=multiple_assign_var27->v1;
                    Err_721=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                    if(                    (_if_conditional14=(Err_721)),                    (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value586,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        __result367__ = (_Bool)1;
                        (Err_721 = come_decrement_ref_count2(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(o2_saved_711,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result367__;
                    }
                    else {
                    }
                    (Err_721 = come_decrement_ref_count2(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUEphp_replace(come_params_684,i_710,(struct CVALUE*)come_increment_ref_count(obj_value_542));
                i_710++;
                (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_713) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value587=list$1CVALUEphp_operator_load_element(come_params_684,i_710)))==((void*)0))),                    come_call_finalizer3(__right_value587,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        break;
                    }
                    else {
                        i_710++;
                    }
                }
                Value_722=node_compile(node_714,info);
                if(                !Value_722) {
                    __result368__ = (_Bool)0;
                    (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_711,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result368__;
                }
                else {
                }
                come_value_723=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional16=(((struct sType*)((void*)(__right_value589=list$1voidphp_operator_load_element(param_types_670,i_710)))))),                come_call_finalizer3(__right_value589,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional16) {
                    multiple_assign_var28=((struct tuple2$2boolcharph*)(__right_value594=check_assign_type(((char*)(__right_value592=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value590=string_to_string(fun_name_532))),((char*)(__right_value591=int_to_string(i_710)))))),((struct sType*)((void*)(__right_value593=list$1voidphp_operator_load_element(type_checking_param_types_677,i_710)))),come_value_723->type,come_value_723,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_9_724=multiple_assign_var28->v1;
                    Err_725=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    if(                    (_if_conditional17=(Err_725)),                    (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value593,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value594,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional17) {
                        __result369__ = (_Bool)1;
                        (Err_725 = come_decrement_ref_count2(Err_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_723,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(o2_saved_711,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result369__;
                    }
                    else {
                    }
                    (Err_725 = come_decrement_ref_count2(Err_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional18=(((struct sType*)((void*)(__right_value595=list$1voidphp_operator_load_element(param_types_670,i_710))))&&((struct sType*)((void*)(__right_value596=list$1voidphp_operator_load_element(param_types_670,i_710))))->mHeap&&come_value_723->type->mHeap)),                come_call_finalizer3(__right_value595,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value596,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional18) {
                    std_move(((struct sType*)((void*)(__right_value597=list$1voidphp_operator_load_element(param_types_670,i_710)))),come_value_723->type,come_value_723,info,(_Bool)1);
                    come_call_finalizer3(__right_value597,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_684,i_710,(struct CVALUE*)come_increment_ref_count(come_value_723));
                i_710++;
                come_call_finalizer3(come_value_723,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        come_call_finalizer3(o2_saved_711,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional19=(((struct CVALUE*)(__right_value598=list$1CVALUEphp_operator_load_element(come_params_684,i_710)))==((void*)0))),            come_call_finalizer3(__right_value598,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                break;
            }
            else {
                i_710++;
            }
        }
        obj_array_type_726=obj_type_543->mOriginalLoadVarType;
        if(        obj_array_type_726&&list$1sNodephp_length(obj_array_type_726->mArrayNum)>0) {
            array_method_name_727=(char*)come_increment_ref_count(create_method_name(obj_array_type_726,(_Bool)0,fun_name_532,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_632,array_method_name_727)) {
                if(                string_operator_equals(fun_name_532,"to_pointer")) {
                    buf_728=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 895, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_729=0;
                    for(                    o2_saved_730=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_726->mArrayNum)),it_733=list$1sNodephp_begin((o2_saved_730));                    !list$1sNodephp_end((o2_saved_730));                    it_733=list$1sNodephp_next((o2_saved_730))                    ){
                        Value_736=node_compile(it_733,info);
                        if(                        !Value_736) {
                            multiple_assign_var29=((struct tuple2$2intcharph*)(__right_value602=err_msg(info,"invalid array num")));
                            come_exception_var_10_737=multiple_assign_var29->v1;
                            Err_738=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional20=(Err_738)),                            come_call_finalizer3(__right_value602,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional20) {
                                __result376__ = (_Bool)1;
                                (Err_738 = come_decrement_ref_count2(Err_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_730,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_728,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_727 = come_decrement_ref_count2(array_method_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result376__;
                            }
                            else {
                            }
                            (Err_738 = come_decrement_ref_count2(Err_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_739=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_728,"%s",come_value_739->c_value);
                        if(                        i_729!=list$1sNodephp_length(obj_array_type_726->mArrayNum)-1) {
                            buffer_append_str(buf_728,"*");
                        }
                        i_729++;
                        come_call_finalizer3(come_value_739,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_730,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_740=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 916, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj181=come_value_740->c_value;
                    come_value_740->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_728));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_740->var=((void*)0);
                    __dec_obj182=come_value_740->type;
                    come_value_740->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 920, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUEphp_replace(come_params_684,1,(struct CVALUE*)come_increment_ref_count(come_value_740));
                    list$1tuple2$2charphsNodephphp_push_back(params_533,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 923, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_728,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_740,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_532,"length")) {
                    buf_744=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 926, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_745=0;
                    for(                    o2_saved_746=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_726->mArrayNum)),it_747=list$1sNodephp_begin((o2_saved_746));                    !list$1sNodephp_end((o2_saved_746));                    it_747=list$1sNodephp_next((o2_saved_746))                    ){
                        Value_748=node_compile(it_747,info);
                        if(                        !Value_748) {
                            multiple_assign_var30=((struct tuple2$2intcharph*)(__right_value617=err_msg(info,"invalid array num")));
                            come_exception_var_11_749=multiple_assign_var30->v1;
                            Err_750=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional21=(Err_750)),                            come_call_finalizer3(__right_value617,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional21) {
                                __result378__ = (_Bool)1;
                                (Err_750 = come_decrement_ref_count2(Err_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_746,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_727 = come_decrement_ref_count2(array_method_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result378__;
                            }
                            else {
                            }
                            (Err_750 = come_decrement_ref_count2(Err_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_751=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_744,"%s",come_value_751->c_value);
                        if(                        i_745!=list$1sNodephp_length(obj_array_type_726->mArrayNum)-1) {
                            buffer_append_str(buf_744,"*");
                        }
                        i_745++;
                        come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_746,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_752=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 946, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj186=come_value_752->c_value;
                    come_value_752->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_744));
                    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_752->var=((void*)0);
                    __dec_obj187=come_value_752->type;
                    come_value_752->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 950, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUEphp_replace(come_params_684,1,(struct CVALUE*)come_increment_ref_count(come_value_752));
                    list$1tuple2$2charphsNodephphp_push_back(params_533,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 953, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_532,"to_buffer")) {
                    buf_753=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 956, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_754=0;
                    for(                    o2_saved_755=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_726->mArrayNum)),it_756=list$1sNodephp_begin((o2_saved_755));                    !list$1sNodephp_end((o2_saved_755));                    it_756=list$1sNodephp_next((o2_saved_755))                    ){
                        Value_757=node_compile(it_756,info);
                        if(                        !Value_757) {
                            multiple_assign_var31=((struct tuple2$2intcharph*)(__right_value629=err_msg(info,"invalid array num")));
                            come_exception_var_12_758=multiple_assign_var31->v1;
                            Err_759=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                            if(                            (_if_conditional22=(Err_759)),                            come_call_finalizer3(__right_value629,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional22) {
                                __result379__ = (_Bool)1;
                                (Err_759 = come_decrement_ref_count2(Err_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_755,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_727 = come_decrement_ref_count2(array_method_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result379__;
                            }
                            else {
                            }
                            (Err_759 = come_decrement_ref_count2(Err_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_760=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_753,"%s",come_value_760->c_value);
                        if(                        i_754!=list$1sNodephp_length(obj_array_type_726->mArrayNum)-1) {
                            buffer_append_str(buf_753,"*");
                        }
                        i_754++;
                        come_call_finalizer3(come_value_760,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_755,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_761=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 976, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj188=come_value_761->c_value;
                    come_value_761->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_753));
                    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_761->var=((void*)0);
                    __dec_obj189=come_value_761->type;
                    come_value_761->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 980, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUEphp_replace(come_params_684,1,(struct CVALUE*)come_increment_ref_count(come_value_761));
                    list$1tuple2$2charphsNodephphp_push_back(params_533,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 983, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_761,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_532,"to_list")) {
                    buf_762=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 986, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_763=0;
                    for(                    o2_saved_764=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_726->mArrayNum)),it_765=list$1sNodephp_begin((o2_saved_764));                    !list$1sNodephp_end((o2_saved_764));                    it_765=list$1sNodephp_next((o2_saved_764))                    ){
                        Value_766=node_compile(it_765,info);
                        if(                        !Value_766) {
                            multiple_assign_var32=((struct tuple2$2intcharph*)(__right_value641=err_msg(info,"invalid array num")));
                            come_exception_var_13_767=multiple_assign_var32->v1;
                            Err_768=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                            if(                            (_if_conditional23=(Err_768)),                            come_call_finalizer3(__right_value641,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional23) {
                                __result380__ = (_Bool)1;
                                (Err_768 = come_decrement_ref_count2(Err_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_764,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_762,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_727 = come_decrement_ref_count2(array_method_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result380__;
                            }
                            else {
                            }
                            (Err_768 = come_decrement_ref_count2(Err_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_769=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_762,"%s",come_value_769->c_value);
                        if(                        i_763!=list$1sNodephp_length(obj_array_type_726->mArrayNum)-1) {
                            buffer_append_str(buf_762,"*");
                        }
                        i_763++;
                        come_call_finalizer3(come_value_769,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_764,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_770=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1006, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj190=come_value_770->c_value;
                    come_value_770->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_762));
                    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_770->var=((void*)0);
                    __dec_obj191=come_value_770->type;
                    come_value_770->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1010, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUEphp_replace(come_params_684,1,(struct CVALUE*)come_increment_ref_count(come_value_770));
                    list$1tuple2$2charphsNodephphp_push_back(params_533,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 1013, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_762,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_532,"to_vector")) {
                    buf_771=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1016, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_772=0;
                    for(                    o2_saved_773=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_726->mArrayNum)),it_774=list$1sNodephp_begin((o2_saved_773));                    !list$1sNodephp_end((o2_saved_773));                    it_774=list$1sNodephp_next((o2_saved_773))                    ){
                        Value_775=node_compile(it_774,info);
                        if(                        !Value_775) {
                            multiple_assign_var33=((struct tuple2$2intcharph*)(__right_value653=err_msg(info,"invalid array num")));
                            come_exception_var_14_776=multiple_assign_var33->v1;
                            Err_777=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                            if(                            (_if_conditional24=(Err_777)),                            come_call_finalizer3(__right_value653,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional24) {
                                __result381__ = (_Bool)1;
                                (Err_777 = come_decrement_ref_count2(Err_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_773,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_771,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_727 = come_decrement_ref_count2(array_method_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result381__;
                            }
                            else {
                            }
                            (Err_777 = come_decrement_ref_count2(Err_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_778=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_771,"%s",come_value_778->c_value);
                        if(                        i_772!=list$1sNodephp_length(obj_array_type_726->mArrayNum)-1) {
                            buffer_append_str(buf_771,"*");
                        }
                        i_772++;
                        come_call_finalizer3(come_value_778,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_773,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_779=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1036, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj192=come_value_779->c_value;
                    come_value_779->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_771));
                    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_779->var=((void*)0);
                    __dec_obj193=come_value_779->type;
                    come_value_779->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1040, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUEphp_replace(come_params_684,1,(struct CVALUE*)come_increment_ref_count(come_value_779));
                    list$1tuple2$2charphsNodephphp_push_back(params_533,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 1043, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_771,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_779,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (array_method_name_727 = come_decrement_ref_count2(array_method_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2charphsNodephphp_length(params_533)<list$1voidphp_length(fun_633->mParamTypes)+(((method_block_535)?(-2):(0)))) {
            for(            ;            i_710<list$1voidphp_length(fun_633->mParamTypes)+(((method_block_535)?(-2):(0)));            i_710++            ){
                default_param_780=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value663=list$1charphp_operator_load_element(fun_633->mParamDefaultParametors,i_710)))));
                (__right_value663 = come_decrement_ref_count2(__right_value663, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_781=((char*)(__right_value665=list$1charphp_operator_load_element(fun_633->mParamNames,i_710)));
                (__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional25=(default_param_780&&string_operator_not_equals(default_param_780,"")&&((struct CVALUE*)(__right_value666=list$1CVALUEphp_operator_load_element(come_params_684,i_710)))==((void*)0))),                come_call_finalizer3(__right_value666,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    source_782=(struct buffer*)come_increment_ref_count(info->source);
                    p_783=info->p;
                    head_784=info->head;
                    sline_785=info->sline;
                    __dec_obj194=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_780));
                    come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_786=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_787=node_compile(node_786,info);
                    if(                    !Value_787) {
                        __result382__ = (_Bool)0;
                        come_call_finalizer3(source_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_786) ? node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        (default_param_780 = come_decrement_ref_count2(default_param_780, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result382__;
                    }
                    else {
                    }
                    __dec_obj195=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_782);
                    come_call_finalizer3(__dec_obj195,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_783;
                    info->head=head_784;
                    info->sline=sline_785;
                    come_value_788=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional26=(((struct sType*)((void*)(__right_value670=list$1voidphp_operator_load_element(param_types_670,i_710)))))),                    come_call_finalizer3(__right_value670,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional26) {
                        multiple_assign_var34=((struct tuple2$2boolcharph*)(__right_value675=check_assign_type(((char*)(__right_value673=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value671=string_to_string(fun_name_532))),((char*)(__right_value672=int_to_string(i_710)))))),((struct sType*)((void*)(__right_value674=list$1voidphp_operator_load_element(type_checking_param_types_677,i_710)))),come_value_788->type,come_value_788,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_15_789=multiple_assign_var34->v1;
                        Err_790=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                        if(                        (_if_conditional27=(Err_790)),                        (__right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value674,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                        come_call_finalizer3(__right_value675,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional27) {
                            __result383__ = (_Bool)1;
                            (Err_790 = come_decrement_ref_count2(Err_790, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(source_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            ((node_786) ? node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                            come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            (default_param_780 = come_decrement_ref_count2(default_param_780, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                            come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result383__;
                        }
                        else {
                        }
                        (Err_790 = come_decrement_ref_count2(Err_790, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional28=(((struct sType*)((void*)(__right_value676=list$1voidphp_operator_load_element(param_types_670,i_710))))&&((struct sType*)((void*)(__right_value677=list$1voidphp_operator_load_element(param_types_670,i_710))))->mHeap&&come_value_788->type->mHeap)),                    come_call_finalizer3(__right_value676,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value677,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional28) {
                        std_move(((struct sType*)((void*)(__right_value678=list$1voidphp_operator_load_element(param_types_670,i_710)))),come_value_788->type,come_value_788,info,(_Bool)1);
                        come_call_finalizer3(__right_value678,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    }
                    list$1CVALUEphp_replace(come_params_684,i_710,(struct CVALUE*)come_increment_ref_count(come_value_788));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_786) ? node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional29=(((struct CVALUE*)(__right_value679=list$1CVALUEphp_operator_load_element(come_params_684,i_710)))==((void*)0))),                    come_call_finalizer3(__right_value679,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional29) {
                        multiple_assign_var35=((struct tuple2$2intcharph*)(__right_value680=err_msg(info,"require parametor(%s) %d",fun_633->mName,i_710)));
                        come_exception_var_16_791=multiple_assign_var35->v1;
                        Err_792=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        if(                        (_if_conditional30=(Err_792)),                        come_call_finalizer3(__right_value680,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional30) {
                            __result384__ = (_Bool)1;
                            (Err_792 = come_decrement_ref_count2(Err_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_780 = come_decrement_ref_count2(default_param_780, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                            come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result384__;
                        }
                        else {
                        }
                        (Err_792 = come_decrement_ref_count2(Err_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_780 = come_decrement_ref_count2(default_param_780, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_535) {
            if(            !compile_method_block(method_block_535,(struct list$1CVALUEph*)come_increment_ref_count(come_params_684),fun_633,fun_name_532,method_block_sline_536,info,(_Bool)0)) {
                __result385__ = (_Bool)0;
                (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result385__;
            }
        }
        buf_793=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1103, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_793,generics_fun_name_632);
        buffer_append_str(buf_793,"(");
        j_794=0;
        for(        o2_saved_795=(struct list$1CVALUEph*)come_increment_ref_count((come_params_684)),it_796=list$1CVALUEphp_begin((o2_saved_795));        !list$1CVALUEphp_end((o2_saved_795));        it_796=list$1CVALUEphp_next((o2_saved_795))        ){
            buffer_append_str(buf_793,it_796->c_value);
            if(            j_794!=list$1CVALUEphp_length(come_params_684)-1) {
                buffer_append_str(buf_793,",");
            }
            j_794++;
        }
        come_call_finalizer3(o2_saved_795,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_793,")");
        come_value2_797=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1122, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_value2_797->var=((void*)0);
        if(        obj_type_543->mAnyClass&&string_operator_equals(fun_name_532,"get_hash_key")) {
            __dec_obj196=come_value2_797->c_value;
            come_value2_797->c_value=(char*)come_increment_ref_count(xsprintf("come_call_get_hash_key((void*)0, %s)",obj_value_542->c_value));
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj197=come_value2_797->type;
            come_value2_797->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1127, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_797->type->mUnsigned=(_Bool)1;
        }
        else if(        obj_type_543->mAnyClass&&string_operator_equals(fun_name_532,"equals")) {
            __dec_obj198=come_value2_797->c_value;
            come_value2_797->c_value=(char*)come_increment_ref_count(xsprintf("come_call_equals((void*)0, %s, %s)",obj_value_542->c_value,((struct CVALUE*)(__right_value688=list$1CVALUEphp_operator_load_element(come_params_684,1)))->c_value));
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(__right_value688,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj199=come_value2_797->type;
            come_value2_797->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1132, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_797->type->mUnsigned=(_Bool)1;
        }
        else {
            __dec_obj200=come_value2_797->c_value;
            come_value2_797->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_793));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
            generics_any_child_798=(_Bool)0;
            obj_type2_799=(struct sType*)come_increment_ref_count(obj_type_543);
            if(            obj_type2_799->mNoSolvedGenericsType) {
                __dec_obj201=obj_type2_799;
                obj_type2_799=(struct sType*)come_increment_ref_count(obj_type2_799->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_800=(struct list$1voidph*)come_increment_ref_count((obj_type2_799->mGenericsTypes)),it_801=((struct sType*)list$1voidphp_begin((o2_saved_800)));                !list$1voidphp_end((o2_saved_800));                it_801=((struct sType*)list$1voidphp_next((o2_saved_800)))                ){
                    if(                    it_801->mAnyOriginalType) {
                        generics_any_child_798=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_800,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            result_type2_669->mAnyOriginalType&&generics_fun_631&&obj_type_543->mNoSolvedGenericsType) {
                obj_type2_802=(struct sType*)come_increment_ref_count(obj_type_543->mNoSolvedGenericsType);
                __dec_obj202=result_type2_669;
                result_type2_669=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_631->mResultType,obj_type2_802,info));
                come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj203=come_value2_797->type;
                come_value2_797->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_669));
                come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_797->type->mStatic=(_Bool)0;
                if(                result_type2_669->mHeap) {
                    append_object_to_right_values2(come_value2_797,(struct sType*)come_increment_ref_count(result_type2_669),info,(_Bool)0);
                }
                come_call_finalizer3(obj_type2_802,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            generics_fun_631&&generics_any_child_798) {
                __dec_obj204=result_type2_669;
                result_type2_669=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_631->mResultType,obj_type2_799,info));
                come_call_finalizer3(__dec_obj204,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj205=come_value2_797->type;
                come_value2_797->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_669));
                come_call_finalizer3(__dec_obj205,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_797->type->mStatic=(_Bool)0;
                if(                result_type2_669->mHeap) {
                    append_object_to_right_values2(come_value2_797,(struct sType*)come_increment_ref_count(result_type2_669),info,(_Bool)0);
                }
            }
            else {
                __dec_obj206=come_value2_797->type;
                come_value2_797->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_669));
                come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_797->type->mStatic=(_Bool)0;
                if(                result_type2_669->mHeap) {
                    append_object_to_right_values2(come_value2_797,(struct sType*)come_increment_ref_count(result_type2_669),info,(_Bool)0);
                }
            }
            __dec_obj207=come_value2_797->c_value;
            come_value2_797->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_797->c_value,come_value2_797->type,info));
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj208=come_value2_797;
            come_value2_797=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_797),info));
            come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(obj_type2_799,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        add_come_last_code(info,"%s",come_value2_797->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_797));
        if(        is_contained_method_generics_types(obj_type_543,info)&&generics_fun_name_632) {
            map$2voidphvoidphp_remove(info->funcs,((char*)(__right_value700=__builtin_string(generics_fun_name_632))));
            (__right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(info->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj209=info->method_generics_types;
        info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_540);
        come_call_finalizer3(__dec_obj209,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_633;
        (generics_fun_name_632 = come_decrement_ref_count2(generics_fun_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_checking_param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_797,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result386__ = (_Bool)1;
    (fun_name_532 = come_decrement_ref_count2(fun_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    ((obj_534) ? obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(method_block_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_538,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_540,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result386__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result314__;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_524;
struct list_item$1tuple2$2charphsNodephph* it_525;
void* __right_value432 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result319__;
    if(    self==((void*)0)) {
        __result314__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_524=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_525=self->head;
    while(it_525!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_524,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_525->item)));
        it_525=it_525->next;
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_524;
    come_call_finalizer3(result_524,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result315__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_522;
struct list_item$1tuple2$2charphsNodephph* prev_it_523;
    it_522=self->head;
    while(it_522!=((void*)0)) {
        prev_it_523=it_522;
        it_522=it_522->next;
        come_call_finalizer3(prev_it_523,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj130;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            come_call_finalizer3(__dec_obj130,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj131;
struct sNode* __dec_obj132;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj131=self->v1;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj132=self->v2;
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_526;
struct tuple2$2charphsNodeph* __dec_obj133;
void* __right_value427 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_527;
struct tuple2$2charphsNodeph* __dec_obj134;
void* __right_value428 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_528;
struct tuple2$2charphsNodeph* __dec_obj135;
struct list$1tuple2$2charphsNodephph* __result316__;
    if(    self->len==0) {
        litem_526=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value426=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_526->prev=((void*)0);
        litem_526->next=((void*)0);
        __dec_obj133=litem_526->item;
        litem_526->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj133,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_526;
        self->head=litem_526;
    }
    else if(    self->len==1) {
        litem_527=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value427=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_527->prev=self->head;
        litem_527->next=((void*)0);
        __dec_obj134=litem_527->item;
        litem_527->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj134,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_527;
        self->head->next=litem_527;
    }
    else {
        litem_528=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value428=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_528->prev=self->tail;
        litem_528->next=((void*)0);
        __dec_obj135=litem_528->item;
        litem_528->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj135,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_528;
        self->tail=litem_528;
    }
    self->len++;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result317__;
void* __right_value429 = (void*)0;
struct tuple2$2charphsNodeph* result_529;
void* __right_value430 = (void*)0;
char* __dec_obj136;
void* __right_value431 = (void*)0;
struct sNode* __dec_obj137;
struct tuple2$2charphsNodeph* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_529=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj136=result_529->v1;
        result_529->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj137=result_529->v2;
        result_529->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_529;
    come_call_finalizer3(result_529,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj138;
struct sNode* __dec_obj139;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj138=self->v1;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj139=self->v2;
            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_530;
struct list_item$1tuple2$2charphsNodephph* prev_it_531;
    it_530=self->head;
    while(it_530!=((void*)0)) {
        prev_it_531=it_530;
        it_530=it_530->next;
        come_call_finalizer3(prev_it_531,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj143;
struct sNode* __dec_obj144;
char* __dec_obj145;
struct list$1tuple2$2charphsNodephph* __dec_obj146;
struct buffer* __dec_obj147;
struct list$1voidph* __dec_obj148;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj144=self->obj;
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->obj) ? self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj145=self->fun_name;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj146=self->params;
            come_call_finalizer3(__dec_obj146,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj147=self->method_block;
            come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj148=self->method_generics_types;
            come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result323__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_558;
int i_559;
struct CVALUE* __result325__;
struct CVALUE* default_value_560;
struct CVALUE* __result326__;
default_value_560 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_558=self->head;
    i_559=0;
    while(it_558!=((void*)0)) {
        if(        position==i_559) {
            __result325__ = gComeFunResultObject = __result_obj__ = it_558->item;
            gComeFunResultObject = (void*)0;
            return __result325__;
        }
        it_558=it_558->next;
        i_559++;
    }
    memset(&default_value_560,0,sizeof(struct CVALUE*));
    __result326__ = gComeFunResultObject = __result_obj__ = default_value_560;
    come_call_finalizer3(default_value_560,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_573;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* __result328__;
struct tuple2$2charphsNodeph* result_574;
struct tuple2$2charphsNodeph* __result329__;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_573,0,sizeof(struct tuple2$2charphsNodeph*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_573;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->head;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_574,0,sizeof(struct tuple2$2charphsNodeph*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_574;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_576;
struct tuple2$2charphsNodeph* __result330__;
struct tuple2$2charphsNodeph* __result331__;
struct tuple2$2charphsNodeph* result_577;
struct tuple2$2charphsNodeph* __result332__;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_576,0,sizeof(struct tuple2$2charphsNodeph*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_576;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_577,0,sizeof(struct tuple2$2charphsNodeph*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_577;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj152;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj152=self->v2;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_624;
struct CVALUE* __result337__;
struct CVALUE* __result338__;
struct CVALUE* result_625;
struct CVALUE* __result339__;
result_624 = (void*)0;
result_625 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_624,0,sizeof(struct CVALUE*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_624;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->head;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_625,0,sizeof(struct CVALUE*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_625;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_627;
struct CVALUE* __result340__;
struct CVALUE* __result341__;
struct CVALUE* result_628;
struct CVALUE* __result342__;
result_627 = (void*)0;
result_628 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_627,0,sizeof(struct CVALUE*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_627;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_628,0,sizeof(struct CVALUE*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_628;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj167;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj167=self->v2;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result347__;
void* __right_value537 = (void*)0;
struct sMethodCallNode* result_664;
void* __right_value538 = (void*)0;
char* __dec_obj171;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value540 = (void*)0;
char* __dec_obj173;
void* __right_value541 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj174;
void* __right_value542 = (void*)0;
struct buffer* __dec_obj175;
void* __right_value543 = (void*)0;
struct list$1voidph* __dec_obj176;
struct sMethodCallNode* __result348__;
    if(    self==(void*)0) {
        __result347__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    result_664=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj171=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj172=result_664->obj;
        result_664->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj173=result_664->fun_name;
        result_664->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj174=result_664->params;
        result_664->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj174,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj175=result_664->method_block;
        result_664->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj175,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj176=result_664->method_generics_types;
        result_664->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj176,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_664->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_664->fun=self->fun;
    }
    __result348__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
struct list_item$1CVALUEph* litem_686;
struct CVALUE* __dec_obj177;
void* __right_value565 = (void*)0;
struct list_item$1CVALUEph* litem_687;
struct CVALUE* __dec_obj178;
void* __right_value566 = (void*)0;
struct list_item$1CVALUEph* litem_688;
struct CVALUE* __dec_obj179;
struct list$1CVALUEph* __result353__;
    if(    self->len==0) {
        litem_686=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value564=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1382, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_686->prev=((void*)0);
        litem_686->next=((void*)0);
        __dec_obj177=litem_686->item;
        litem_686->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj177,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_686;
        self->head=litem_686;
    }
    else if(    self->len==1) {
        litem_687=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value565=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1392, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_687->prev=self->head;
        litem_687->next=((void*)0);
        __dec_obj178=litem_687->item;
        litem_687->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_687;
        self->head->next=litem_687;
    }
    else {
        litem_688=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value566=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1402, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_688->prev=self->tail;
        litem_688->next=((void*)0);
        __dec_obj179=litem_688->item;
        litem_688->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_688;
        self->tail=litem_688;
    }
    self->len++;
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_696;
char* __result354__;
char* __result355__;
char* result_697;
char* __result356__;
result_696 = (void*)0;
result_697 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_696,0,sizeof(char*));
        __result354__ = gComeFunResultObject = __result_obj__ = result_696;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    self->it=self->head;
    if(    self->it) {
        __result355__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    memset(&result_697,0,sizeof(char*));
    __result356__ = gComeFunResultObject = __result_obj__ = result_697;
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_699;
char* __result357__;
char* __result358__;
char* result_700;
char* __result359__;
result_699 = (void*)0;
result_700 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_699,0,sizeof(char*));
        __result357__ = gComeFunResultObject = __result_obj__ = result_699;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result358__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    memset(&result_700,0,sizeof(char*));
    __result359__ = gComeFunResultObject = __result_obj__ = result_700;
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_705;
int i_706;
struct CVALUE* default_value_707;
struct list$1CVALUEph* __result362__;
struct list_item$1CVALUEph* it_708;
int i_709;
struct CVALUE* __dec_obj180;
struct list$1CVALUEph* __result363__;
default_value_707 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_705=self->len;
        for(        i_706=0;        i_706<position-len_705;        i_706++        ){
            memset(&default_value_707,0,sizeof(struct CVALUE*));
            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_707));
            come_call_finalizer3(default_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result362__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    it_708=self->head;
    i_709=0;
    while(it_708!=((void*)0)) {
        if(        position==i_709) {
            __dec_obj180=it_708->item;
            it_708->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj180,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_708=it_708->next;
        i_709++;
    }
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_717;
int i_718;
char* __result365__;
char* default_value_719;
char* __result366__;
default_value_719 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_717=self->head;
    i_718=0;
    while(it_717!=((void*)0)) {
        if(        position==i_718) {
            __result365__ = gComeFunResultObject = __result_obj__ = it_717->item;
            gComeFunResultObject = (void*)0;
            return __result365__;
        }
        it_717=it_717->next;
        i_718++;
    }
    memset(&default_value_719,0,sizeof(char*));
    __result366__ = gComeFunResultObject = __result_obj__ = default_value_719;
    (default_value_719 = come_decrement_ref_count2(default_value_719, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_731;
struct sNode* __result370__;
struct sNode* __result371__;
struct sNode* result_732;
struct sNode* __result372__;
result_731 = (void*)0;
result_732 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_731,0,sizeof(struct sNode*));
        __result370__ = gComeFunResultObject = __result_obj__ = result_731;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    self->it=self->head;
    if(    self->it) {
        __result371__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    memset(&result_732,0,sizeof(struct sNode*));
    __result372__ = gComeFunResultObject = __result_obj__ = result_732;
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_734;
struct sNode* __result373__;
struct sNode* __result374__;
struct sNode* result_735;
struct sNode* __result375__;
result_734 = (void*)0;
result_735 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_734,0,sizeof(struct sNode*));
        __result373__ = gComeFunResultObject = __result_obj__ = result_734;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result374__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    memset(&result_735,0,sizeof(struct sNode*));
    __result375__ = gComeFunResultObject = __result_obj__ = result_735;
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value609 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_741;
struct tuple2$2charphsNodeph* __dec_obj183;
void* __right_value610 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_742;
struct tuple2$2charphsNodeph* __dec_obj184;
void* __right_value611 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_743;
struct tuple2$2charphsNodeph* __dec_obj185;
struct list$1tuple2$2charphsNodephph* __result377__;
    if(    self->len==0) {
        litem_741=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value609=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1452, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_741->prev=((void*)0);
        litem_741->next=((void*)0);
        __dec_obj183=litem_741->item;
        litem_741->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_741;
        self->head=litem_741;
    }
    else if(    self->len==1) {
        litem_742=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value610=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1462, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_742->prev=self->head;
        litem_742->next=((void*)0);
        __dec_obj184=litem_742->item;
        litem_742->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj184,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_742;
        self->head->next=litem_742;
    }
    else {
        litem_743=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value611=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1472, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_743->prev=self->tail;
        litem_743->next=((void*)0);
        __dec_obj185=litem_743->item;
        litem_743->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj185,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_743;
        self->tail=litem_743;
    }
    self->len++;
    __result377__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value703 = (void*)0;
struct sNode* node_803;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj210;
struct sNode* __result387__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1204, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value702=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1204, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMethodCallNode_finalize;
    _inf_value4->clone=(void*)sMethodCallNode_clone;
    _inf_value4->compile=(void*)sMethodCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMethodCallNode_terminated;
    _inf_value4->kind=(void*)sMethodCallNode_kind;
    node_803=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value702,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=node_803;
    node_803=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_803),info));
    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
    __result387__ = gComeFunResultObject = __result_obj__ = node_803;
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_803) ? node_803 = come_decrement_ref_count2(node_803, ((struct sNode*)node_803)->finalize, ((struct sNode*)node_803)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_804;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
_Bool parse_method_generics_type_806;
char* p_807;
int sline_808;
void* __right_value710 = (void*)0;
char* word_809;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1voidph* method_generics_types_810;
void* __right_value713 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_811=0;
char* Err_812=0;
void* __right_value714 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var37 = (void*)0;
struct sType* type_813=0;
char* name_814=0;
_Bool err_815=0;
void* __right_value715 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var38 = (void*)0;
int come_exception_var_c7_816=0;
char* Err_817=0;
void* __right_value716 = (void*)0;
char* p_818;
int sline_819;
_Bool err_flag_820;
void* __right_value717 = (void*)0;
char* label_821;
void* __right_value718 = (void*)0;
char* __dec_obj215;
char* __dec_obj216;
_Bool no_comma_822;
_Bool in_fun_param_823;
void* __right_value719 = (void*)0;
struct sNode* node_824;
void* __right_value720 = (void*)0;
struct sNode* __dec_obj217;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct buffer* method_block_825;
int method_block_sline_826;
char* head_827;
void* __right_value723 = (void*)0;
char* tail_828;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct buffer* __dec_obj218;
int len_829;
void* __right_value726 = (void*)0;
char* mem_830;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value730 = (void*)0;
struct sNode* node_831;
void* __right_value731 = (void*)0;
struct sNode* __dec_obj219;
struct sNode* __result389__;
    params_804=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1213, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_push_back(params_804,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1214, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_806=(_Bool)0;
    {
        p_807=info->p;
        sline_808=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_809=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_809,info)) {
                    parse_method_generics_type_806=(_Bool)1;
                }
                (word_809 = come_decrement_ref_count2(word_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_807;
        info->sline=sline_808;
    }
    method_generics_types_810=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "20method.c", 1244, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    if(    parse_method_generics_type_806&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var36=((struct tuple2$2intcharph*)(__right_value713=err_msg(info,"unexpected source end")));
                come_exception_var_c6_811=multiple_assign_var36->v1;
                Err_812=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                ((Err_812)?(puts(Err_812),exit(0)):(0));
                come_call_finalizer3(__right_value713,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_812 = come_decrement_ref_count2(Err_812, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var37=((struct tuple3$3sTypephcharphbool*)(__right_value714=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_813=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
                name_814=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                err_815=multiple_assign_var37->v3;
                come_call_finalizer3(__right_value714,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_815) {
                    multiple_assign_var38=((struct tuple2$2intcharph*)(__right_value715=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c7_816=multiple_assign_var38->v1;
                    Err_817=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_817)?(puts(Err_817),exit(0)):(0));
                    come_call_finalizer3(__right_value715,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_817 = come_decrement_ref_count2(Err_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1voidphp_push_back(method_generics_types_810,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_813)));
                come_call_finalizer3(type_813,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_814 = come_decrement_ref_count2(name_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_818=info->p;
            sline_819=info->sline;
            err_flag_820=(_Bool)0;
            label_821=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj215=label_821;
                label_821=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_820=(_Bool)1;
            }
            if(            err_flag_820==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj216=label_821;
                label_821=((void*)0);
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_818;
                info->sline=sline_819;
            }
            no_comma_822=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_823=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_824=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj217=node_824;
            node_824=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_824),info));
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_823;
            info->no_comma=no_comma_822;
            list$1tuple2$2charphsNodephphp_push_back(params_804,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1320, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(label_821),(struct sNode*)come_increment_ref_count(node_824))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_821 = come_decrement_ref_count2(label_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_824) ? node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                break;
            }
            (label_821 = come_decrement_ref_count2(label_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_824) ? node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    method_block_825=((void*)0);
    method_block_sline_826=0;
    if(    *info->p==123) {
        head_827=info->p;
        method_block_sline_826=info->sline;
        ((char*)(__right_value723=skip_block(info)));
        (__right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        tail_828=info->p;
        __dec_obj218=method_block_825;
        method_block_825=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1344, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_829=tail_828-head_827;
        mem_830=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_829+1)), "20method.c", 1347, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_830,head_827,len_829);
        mem_830[len_829]=0;
        buffer_append_str(method_block_825,mem_830);
        buffer_append_str(method_block_825,"\n");
        (mem_830 = come_decrement_ref_count2(mem_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1359, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value729=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1359, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_804),method_block_825,method_block_sline_826,method_generics_types_810,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_831=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value729,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj219=node_831;
    node_831=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_831),info));
    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
    __result389__ = gComeFunResultObject = __result_obj__ = node_831;
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_804,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_810,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_825,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_831) ? node_831 = come_decrement_ref_count2(node_831, ((struct sNode*)node_831)->finalize, ((struct sNode*)node_831)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_805;
    result_805=0;
    result_805+=int_get_hash_key(((int)self->v1));
    result_805+=int_get_hash_key(((int)self->v2));
    return result_805;
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
char* __dec_obj211;
struct sNode* __dec_obj212;
struct tuple2$2charphsNodeph* __result388__;
    __dec_obj211=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj212=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
    __result388__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj213;
char* __dec_obj214;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj213=self->v1;
            come_call_finalizer3(__dec_obj213,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj214=self->v2;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value734 = (void*)0;
struct sNode* __result390__;
void* __right_value735 = (void*)0;
struct sNode* __result391__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1369, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value733=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1369, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value734=_inf_value6));
        come_call_finalizer3(__right_value733,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value734) ? __right_value734 = come_decrement_ref_count2(__right_value734, ((struct sNode*)__right_value734)->finalize, ((struct sNode*)__right_value734)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value735=string_node_v17(buf,head,head_sline,info)));
    ((__right_value735) ? __right_value735 = come_decrement_ref_count2(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

