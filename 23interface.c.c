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
struct sInterfaceNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    struct sClass* klass;
    _Bool mOutput;
};

struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};

struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
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
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);
char* sInterfaceNode_kind(struct sInterfaceNode* self);
_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct map$2charphbufferph* map$2charphbufferphp_insert(struct map$2charphbufferph* self, char* key, struct buffer* item);
static void map$2charphbufferphp_rehash(struct map$2charphbufferph* self);
static char* map$2charphbufferphp_begin(struct map$2charphbufferph* self);
static _Bool map$2charphbufferphp_end(struct map$2charphbufferph* self);
static char* map$2charphbufferphp_next(struct map$2charphbufferph* self);
static struct buffer* map$2charphbufferphp_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct list$1voidph* list$1voidphp_insert(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1charph* list$1charphp_insert(struct list$1charph* self, int position, char* item);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list_item$1sTypeph_equals(struct list_item$1sTypeph* left, struct list_item$1sTypeph* right);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
static unsigned int sInterfaceNode_get_hash_key(struct sInterfaceNode* self);
static _Bool sInterfaceNode_equals(struct sInterfaceNode* left, struct sInterfaceNode* right);
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __dec_obj32;
void* __right_value264 = (void*)0;
struct sClass* __dec_obj47;
struct sInterfaceNode* __result235__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj47=self->klass;
    self->klass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj47,sClass_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* sInterfaceNode_kind(struct sInterfaceNode* self){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value265=__builtin_string("sInterfaceNode")));
    __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __right_value266 = (void*)0;
char* name_322;
struct sClass* klass_323;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct buffer* buf_324;
struct list$1voidph* o2_saved_325;
struct tuple2$2charphsTypeph* it_328;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_331=0;
struct sType* type_332=0;
void* __right_value269 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
_Bool __result275__;
    name_322=(char*)come_increment_ref_count(__builtin_string(self->name));
    klass_323=self->klass;
    klass_323->mProtocol=(_Bool)1;
    buf_324=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 26, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_324,"struct %s\n{\n",klass_323->mName);
    for(    o2_saved_325=(struct list$1voidph*)come_increment_ref_count((klass_323->mFields)),it_328=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_325)));    !list$1voidphp_end((o2_saved_325));    it_328=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_325)))    ){
        multiple_assign_var1=it_328;
        name_331=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_332=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        buffer_append_str(buf_324,"    ");
        buffer_append_str(buf_324,((char*)(__right_value269=make_define_var(type_332,name_331,(_Bool)0,info))));
        __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_324,";\n");
        name_331 = come_decrement_ref_count2(name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_325,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_324,"};\n");
    if(    self->mOutput) {
        map$2charphbufferphp_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_322)),(struct buffer*)come_increment_ref_count(buf_324));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name_322)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_323)));
    }
    __result275__ = (_Bool)1;
    name_322 = come_decrement_ref_count2(name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_324,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
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

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result229__;
void* __right_value252 = (void*)0;
struct sClass* result_315;
void* __right_value253 = (void*)0;
char* __dec_obj39;
void* __right_value260 = (void*)0;
struct list$1voidph* __dec_obj43;
void* __right_value261 = (void*)0;
char* __dec_obj44;
void* __right_value262 = (void*)0;
char* __dec_obj45;
void* __right_value263 = (void*)0;
char* __dec_obj46;
struct sClass* __result234__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_315=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_315->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_315->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_315->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_315->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_315->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_315->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_315->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_315->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj39=result_315->mName;
        result_315->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_315->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj43=result_315->mFields;
        result_315->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj43,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_315->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj44=result_315->mDeclareSName;
        result_315->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj45=result_315->mParentClassName;
        result_315->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj46=result_315->mAttribute;
        result_315->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer3(result_315,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj33;
struct list$1voidph* __dec_obj34;
char* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj33=self->mName;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj34=self->mFields;
            come_call_finalizer3(__dec_obj34,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj36=self->mDeclareSName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj37=self->mParentClassName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj38=self->mAttribute;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_308;
struct list_item$1voidph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj35;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            come_call_finalizer3(__dec_obj35,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_310;
struct list_item$1voidph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_312;
    result_312=0;
    result_312+=int_get_hash_key(((int)self->mStruct));
    result_312+=int_get_hash_key(((int)self->mFloat));
    result_312+=int_get_hash_key(((int)self->mUnion));
    result_312+=int_get_hash_key(((int)self->mGenerics));
    result_312+=int_get_hash_key(((int)self->mMethodGenerics));
    result_312+=int_get_hash_key(((int)self->mEnum));
    result_312+=int_get_hash_key(((int)self->mProtocol));
    result_312+=int_get_hash_key(((int)self->mNumber));
    result_312+=int_get_hash_key(((int)self->mName));
    result_312+=int_get_hash_key(((int)self->mGenericsNum));
    result_312+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_312+=int_get_hash_key(((int)self->mFields));
    result_312+=int_get_hash_key(((int)self->mOutputed));
    result_312+=int_get_hash_key(((int)self->mOutputed2));
    result_312+=int_get_hash_key(((int)self->mDeclareSName));
    result_312+=int_get_hash_key(((int)self->mNobodyStruct));
    result_312+=int_get_hash_key(((int)self->mParentClassName));
    result_312+=int_get_hash_key(((int)self->mAttribute));
    return result_312;
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
struct list_item$1voidph* it_313;
struct list_item$1voidph* it2_314;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_313=left->head;
    it2_314=right->head;
    while(it_313!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_313->item)) {
            return (_Bool)0;
        }
        it_313=it_313->next;
        it2_314=it2_314->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result230__;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1voidph* result_317;
struct list_item$1voidph* it_318;
void* __right_value259 = (void*)0;
struct list$1voidph* __result233__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_317=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_318=self->head;
    while(it_318!=((void*)0)) {
        list$1voidphp_add(result_317,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_318->item)));
        it_318=it_318->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_316;
    result_316=0;
    result_316+=int_get_hash_key(((int)self->head));
    result_316+=int_get_hash_key(((int)self->tail));
    result_316+=int_get_hash_key(((int)self->len));
    result_316+=int_get_hash_key(((int)self->it));
    return result_316;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1voidph* litem_319;
void* __dec_obj40;
void* __right_value257 = (void*)0;
struct list_item$1voidph* litem_320;
void* __dec_obj41;
void* __right_value258 = (void*)0;
struct list_item$1voidph* litem_321;
void* __dec_obj42;
struct list$1voidph* __result232__;
    if(    self->len==0) {
        litem_319=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value256=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj40=litem_319->item;
        litem_319->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj40,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value257=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj41=litem_320->item;
        litem_320->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value258=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj42=litem_321->item;
        litem_321->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj42,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
char* __dec_obj48;
char* __dec_obj49;
struct sClass* __dec_obj50;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj48=self->sname;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj49=self->name;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->klass!=((void*)0)) {
        if(        self->klass==gComeFunResultObject) {
            __dec_obj50=self->klass;
            come_call_finalizer3(__dec_obj50,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_326;
void* __result237__;
void* __result238__;
void* result_327;
void* __result239__;
result_326 = (void*)0;
result_327 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_326,0,sizeof(void*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_326;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_327,0,sizeof(void*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_327;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_329;
void* __result240__;
void* __result241__;
void* result_330;
void* __result242__;
result_329 = (void*)0;
result_330 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_329,0,sizeof(void*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_329;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_330,0,sizeof(void*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_330;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj51;
struct sType* __dec_obj52;
struct sType* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
struct list$1voidph* __dec_obj56;
struct list$1sNodeph* __dec_obj57;
struct list$1voidph* __dec_obj59;
struct list$1charph* __dec_obj60;
struct sType* __dec_obj61;
struct sNode* __dec_obj62;
struct sType* __dec_obj63;
struct sNode* __dec_obj64;
char* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj51=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj52=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj53=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj54=self->mInterfaceName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj55=self->mGenericsName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj56=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj56,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj57=self->mArrayNum;
            come_call_finalizer3(__dec_obj57,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj59=self->mParamTypes;
            come_call_finalizer3(__dec_obj59,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj60=self->mParamNames;
            come_call_finalizer3(__dec_obj60,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj61=self->mResultType;
            come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj62=self->mAlignas;
            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj63=self->mChannelType;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj64=self->mSizeNum;
            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj65=self->mOriginalTypeName;
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj66=self->mAsmName;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj67=self->mTupleName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj68=self->mAttribute;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_333;
struct list_item$1sNodeph* prev_it_334;
    it_333=self->head;
    while(it_333!=((void*)0)) {
        prev_it_334=it_333;
        it_333=it_333->next;
        come_call_finalizer3(prev_it_334,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj58;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj58=self->item;
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_335;
struct list_item$1sNodeph* prev_it_336;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_337;
struct list_item$1charph* prev_it_338;
    it_337=self->head;
    while(it_337!=((void*)0)) {
        prev_it_338=it_337;
        it_337=it_337->next;
        come_call_finalizer3(prev_it_338,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphbufferph* map$2charphbufferphp_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_356;
unsigned int it_357;
_Bool same_key_exist_374;
char* it2_377;
struct map$2charphbufferph* __result263__;
    if(    self->len*10>=self->size) {
        map$2charphbufferphp_rehash(self);
    }
    hash_356=string_get_hash_key(((char*)key))%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            string_equals(self->keys[it_357],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_357]);
                    self->keys[it_357] = come_decrement_ref_count2(self->keys[it_357], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_357]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_357]);
                    self->keys[it_357]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_357],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_357]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_357]=item;
                }
                break;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_357]=(_Bool)1;
            if(            1) {
                self->keys[it_357]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_357]=key;
            }
            if(            1) {
                self->items[it_357]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_357]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_374=(_Bool)0;
    for(    it2_377=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_377=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_377,key)) {
            same_key_exist_374=(_Bool)1;
        }
    }
    if(    !same_key_exist_374) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void map$2charphbufferphp_rehash(struct map$2charphbufferph* self){
int size_339;
void* __right_value270 = (void*)0;
char** keys_340;
void* __right_value271 = (void*)0;
struct buffer** items_341;
void* __right_value272 = (void*)0;
_Bool* item_existance_342;
int len_343;
char* it_346;
struct buffer* default_value_349;
void* __right_value273 = (void*)0;
struct buffer* it2_350;
unsigned int hash_353;
int n_354;
struct buffer* default_value_355;
void* __right_value274 = (void*)0;
default_value_349 = (void*)0;
default_value_355 = (void*)0;
    size_339=self->size*10;
    keys_340=(char**)come_increment_ref_count(((char**)(__right_value270=(char**)come_calloc(1, sizeof(char*)*(1*(size_339)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_341=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value271=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_339)), "/usr/local/include/comelang.h", 2809, "struct buffer**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_342=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value272=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_339)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_343=0;
    for(    it_346=map$2charphbufferphp_begin(self);    !map$2charphbufferphp_end(self);    it_346=map$2charphbufferphp_next(self)    ){
        memset(&default_value_349,0,sizeof(struct buffer*));
        it2_350=((struct buffer*)(__right_value273=map$2charphbufferphp_at(self,it_346,default_value_349)));
        come_call_finalizer3(__right_value273,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_353=string_get_hash_key(((char*)it_346))%size_339;
        n_354=hash_353;
        while((_Bool)1) {
            if(            item_existance_342[n_354]) {
                n_354++;
                if(                n_354>=size_339) {
                    n_354=0;
                }
                else if(                n_354==hash_353) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_342[n_354]=(_Bool)1;
                keys_340[n_354]=it_346;
                items_341[n_354]=((struct buffer*)(__right_value274=map$2charphbufferphp_at(self,it_346,default_value_355)));
                come_call_finalizer3(__right_value274,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_343++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_340;
    self->items=items_341;
    self->item_existance=item_existance_342;
    self->size=size_339;
    self->len=len_343;
}

static char* map$2charphbufferphp_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_344;
char* __result243__;
char* __result244__;
char* result_345;
char* __result245__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_345,0,sizeof(char*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool map$2charphbufferphp_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferphp_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_347;
char* __result246__;
char* __result247__;
char* result_348;
char* __result248__;
result_347 = (void*)0;
result_348 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_347,0,sizeof(char*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_347;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_348,0,sizeof(char*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_348;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct buffer* map$2charphbufferphp_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_351;
unsigned int it_352;
struct buffer* __result249__;
struct buffer* __result250__;
struct buffer* __result251__;
struct buffer* __result252__;
    hash_351=string_get_hash_key(((char*)key))%self->size;
    it_352=hash_351;
    while((_Bool)1) {
        if(        self->item_existance[it_352]) {
            if(            string_equals(self->keys[it_352],key)) {
                __result249__ = gComeFunResultObject = __result_obj__ = self->items[it_352];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
            it_352++;
            if(            it_352>=self->size) {
                it_352=0;
            }
            else if(            it_352==hash_351) {
                __result250__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
        }
        else {
            __result251__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result251__;
        }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_358;
struct list_item$1charp* it_359;
struct list$1charp* __result256__;
    it2_358=0;
    it_359=self->head;
    while(it_359!=((void*)0)) {
        if(        charp_equals(it_359->item,item)) {
            list$1charpp_delete(self,it2_358,it2_358+1);
            break;
        }
        it2_358++;
        it_359=it_359->next;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_360;
struct list$1charp* __result253__;
struct list_item$1charp* it_363;
int i_364;
struct list_item$1charp* prev_it_365;
struct list_item$1charp* it_366;
int i_367;
struct list_item$1charp* prev_it_368;
struct list_item$1charp* it_369;
struct list_item$1charp* head_prev_it_370;
struct list_item$1charp* tail_it_371;
int i_372;
struct list_item$1charp* prev_it_373;
struct list$1charp* __result255__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_360=tail;
        tail=head;
        head=tmp_360;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result253__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_363=self->head;
        i_364=0;
        while(it_363!=((void*)0)) {
            if(            i_364<tail) {
                prev_it_365=it_363;
                it_363=it_363->next;
                i_364++;
                come_call_finalizer3(prev_it_365,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_364==tail) {
                self->head=it_363;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_363=it_363->next;
                i_364++;
            }
        }
    }
    else if(    tail==self->len) {
        it_366=self->head;
        i_367=0;
        while(it_366!=((void*)0)) {
            if(            i_367==head) {
                self->tail=it_366->prev;
                self->tail->next=((void*)0);
            }
            if(            i_367>=head) {
                prev_it_368=it_366;
                it_366=it_366->next;
                i_367++;
                come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_366=it_366->next;
                i_367++;
            }
        }
    }
    else {
        it_369=self->head;
        head_prev_it_370=((void*)0);
        tail_it_371=((void*)0);
        i_372=0;
        while(it_369!=((void*)0)) {
            if(            i_372==head) {
                head_prev_it_370=it_369->prev;
            }
            if(            i_372==tail) {
                tail_it_371=it_369;
            }
            if(            i_372>=head&&i_372<tail) {
                prev_it_373=it_369;
                it_369=it_369->next;
                i_372++;
                come_call_finalizer3(prev_it_373,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_369=it_369->next;
                i_372++;
            }
        }
        if(        head_prev_it_370!=((void*)0)) {
            head_prev_it_370->next=tail_it_371;
        }
        if(        tail_it_371!=((void*)0)) {
            tail_it_371->prev=head_prev_it_370;
        }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_361;
struct list_item$1charp* prev_it_362;
struct list$1charp* __result254__;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        prev_it_362=it_361;
        it_361=it_361->next;
        come_call_finalizer3(prev_it_362,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_375;
char* __result257__;
char* __result258__;
char* result_376;
char* __result259__;
result_375 = (void*)0;
result_376 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_375,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_375;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->head;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_376,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_376;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_378;
char* __result260__;
char* __result261__;
char* result_379;
char* __result262__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_378,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_379,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_397;
unsigned int it_398;
_Bool same_key_exist_399;
char* it2_400;
struct map$2charphsClassph* __result274__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_397=string_get_hash_key(((char*)key))%self->size;
    it_398=hash_397;
    while((_Bool)1) {
        if(        self->item_existance[it_398]) {
            if(            string_equals(self->keys[it_398],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_398]);
                    self->keys[it_398] = come_decrement_ref_count2(self->keys[it_398], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_398]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_398]);
                    self->keys[it_398]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_398],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_398]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_398]=item;
                }
                break;
            }
            it_398++;
            if(            it_398>=self->size) {
                it_398=0;
            }
            else if(            it_398==hash_397) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_398]=(_Bool)1;
            if(            1) {
                self->keys[it_398]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_398]=key;
            }
            if(            1) {
                self->items[it_398]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_398]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_399=(_Bool)0;
    for(    it2_400=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_400=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_400,key)) {
            same_key_exist_399=(_Bool)1;
        }
    }
    if(    !same_key_exist_399) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_380;
void* __right_value276 = (void*)0;
char** keys_381;
void* __right_value277 = (void*)0;
struct sClass** items_382;
void* __right_value278 = (void*)0;
_Bool* item_existance_383;
int len_384;
char* it_387;
struct sClass* default_value_390;
void* __right_value279 = (void*)0;
struct sClass* it2_391;
unsigned int hash_394;
int n_395;
struct sClass* default_value_396;
void* __right_value280 = (void*)0;
default_value_390 = (void*)0;
default_value_396 = (void*)0;
    size_380=self->size*10;
    keys_381=(char**)come_increment_ref_count(((char**)(__right_value276=(char**)come_calloc(1, sizeof(char*)*(1*(size_380)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_382=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value277=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_380)), "/usr/local/include/comelang.h", 2809, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_383=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value278=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_380)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_384=0;
    for(    it_387=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_387=map$2charphsClassphp_next(self)    ){
        memset(&default_value_390,0,sizeof(struct sClass*));
        it2_391=((struct sClass*)(__right_value279=map$2charphsClassphp_at(self,it_387,default_value_390)));
        come_call_finalizer3(__right_value279,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_394=string_get_hash_key(((char*)it_387))%size_380;
        n_395=hash_394;
        while((_Bool)1) {
            if(            item_existance_383[n_395]) {
                n_395++;
                if(                n_395>=size_380) {
                    n_395=0;
                }
                else if(                n_395==hash_394) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_383[n_395]=(_Bool)1;
                keys_381[n_395]=it_387;
                items_382[n_395]=((struct sClass*)(__right_value280=map$2charphsClassphp_at(self,it_387,default_value_396)));
                come_call_finalizer3(__right_value280,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_384++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_381;
    self->items=items_382;
    self->item_existance=item_existance_383;
    self->size=size_380;
    self->len=len_384;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_385;
char* __result264__;
char* __result265__;
char* result_386;
char* __result266__;
result_385 = (void*)0;
result_386 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_385,0,sizeof(char*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_385;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_386,0,sizeof(char*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_386;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_388;
char* __result267__;
char* __result268__;
char* result_389;
char* __result269__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_388,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_389,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_392;
unsigned int it_393;
struct sClass* __result270__;
struct sClass* __result271__;
struct sClass* __result272__;
struct sClass* __result273__;
    hash_392=string_get_hash_key(((char*)key))%self->size;
    it_393=hash_392;
    while((_Bool)1) {
        if(        self->item_existance[it_393]) {
            if(            string_equals(self->keys[it_393],key)) {
                __result270__ = gComeFunResultObject = __result_obj__ = self->items[it_393];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result270__;
            }
            it_393++;
            if(            it_393>=self->size) {
                it_393=0;
            }
            else if(            it_393==hash_392) {
                __result271__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
        }
        else {
            __result272__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result272__;
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_401=0;
char* var_name_402=0;
_Bool err_403=0;
void* __right_value284 = (void*)0;
char* fun_name_404;
void* __right_value285 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var3 = (void*)0;
struct list$1voidph* param_types_405=0;
struct list$1charph* param_names_406=0;
struct list$1charph* param_default_parametors_407=0;
_Bool var_args_408=0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* type_445;
void* __right_value331 = (void*)0;
struct list$1voidph* __dec_obj106;
void* __right_value332 = (void*)0;
struct list$1charph* __dec_obj107;
void* __right_value333 = (void*)0;
struct sType* __dec_obj108;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple2$2sTypephcharph* __result295__;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value283=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_401=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name_402=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_403=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value283,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    !err_403) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    fun_name_404=(char*)come_increment_ref_count(parse_word(info));
    multiple_assign_var3=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value285=parse_params(info,(_Bool)0)));
    param_types_405=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names_406=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors_407=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args_408=multiple_assign_var3->v4;
    come_call_finalizer3(__right_value285,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    list$1voidphp_insert(param_types_405,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 62, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)));
    list$1charphp_insert(param_names_406,0,(char*)come_increment_ref_count(__builtin_string("self")));
    type_445=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 65, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
    __dec_obj106=type_445->mParamTypes;
    type_445->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_405));
    come_call_finalizer3(__dec_obj106,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj107=type_445->mParamNames;
    type_445->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names_406));
    come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    type_445->mVarArgs=var_args_408;
    __dec_obj108=type_445->mResultType;
    type_445->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_401));
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result295__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value338=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 72, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(type_445),(char*)come_increment_ref_count(fun_name_404))));
    come_call_finalizer3(result_type_401,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_402 = come_decrement_ref_count2(var_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_404 = come_decrement_ref_count2(fun_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_405,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_406,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_407,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_445,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value338,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj69;
char* __dec_obj70;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj69=self->v1;
            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj70=self->v2;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj71;
struct list$1charph* __dec_obj72;
struct list$1charph* __dec_obj73;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj71=self->v1;
            come_call_finalizer3(__dec_obj71,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj72=self->v2;
            come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj73=self->v3;
            come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1voidph* list$1voidphp_insert(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_409;
int i_410;
void* default_value_411;
struct list$1voidph* __result277__;
void* __right_value289 = (void*)0;
struct list_item$1voidph* litem_415;
void* __dec_obj77;
void* __right_value290 = (void*)0;
struct list_item$1voidph* litem_416;
void* __dec_obj78;
struct list_item$1voidph* it_417;
int i_418;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_419;
void* __dec_obj79;
struct list$1voidph* __result278__;
default_value_411 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_409=self->len;
        for(        i_410=0;        i_410<position-len_409;        i_410++        ){
            memset(&default_value_411,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_411));
            come_call_finalizer3(default_value_411, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result277__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    if(    position==0) {
        litem_415=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value289=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1565, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=((void*)0);
        litem_415->next=self->head;
        __dec_obj77=litem_415->item;
        litem_415->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,(void*)0, 0, 0, 0, 0, (void*)0);
        self->head->prev=litem_415;
        self->head=litem_415;
        self->len++;
    }
    else if(    self->len==1) {
        litem_416=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value290=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1577, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->head;
        litem_416->next=self->tail;
        __dec_obj78=litem_416->item;
        litem_416->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->prev=litem_416;
        self->head->next=litem_416;
        self->len++;
    }
    else {
        it_417=self->head;
        i_418=0;
        while(it_417!=((void*)0)) {
            if(            position==i_418) {
                litem_419=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1593, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                litem_419->prev=it_417->prev;
                litem_419->next=it_417;
                __dec_obj79=litem_419->item;
                litem_419->item=(void*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj79,(void*)0, 0, 0, 0, 0, (void*)0);
                it_417->prev->next=litem_419;
                it_417->prev=litem_419;
                self->len++;
            }
            it_417=it_417->next;
            i_418++;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
struct list_item$1voidph* litem_412;
void* __dec_obj74;
void* __right_value287 = (void*)0;
struct list_item$1voidph* litem_413;
void* __dec_obj75;
void* __right_value288 = (void*)0;
struct list_item$1voidph* litem_414;
void* __dec_obj76;
struct list$1voidph* __result276__;
    if(    self->len==0) {
        litem_412=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value286=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_412->prev=((void*)0);
        litem_412->next=((void*)0);
        __dec_obj74=litem_412->item;
        litem_412->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_412;
        self->head=litem_412;
    }
    else if(    self->len==1) {
        litem_413=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value287=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=self->head;
        litem_413->next=((void*)0);
        __dec_obj75=litem_413->item;
        litem_413->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_413;
        self->head->next=litem_413;
    }
    else {
        litem_414=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value288=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->tail;
        litem_414->next=((void*)0);
        __dec_obj76=litem_414->item;
        litem_414->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_414;
        self->tail=litem_414;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result279__;
void* __right_value292 = (void*)0;
struct sType* result_425;
void* __right_value293 = (void*)0;
struct sType* __dec_obj80;
void* __right_value294 = (void*)0;
struct sType* __dec_obj81;
void* __right_value295 = (void*)0;
struct sType* __dec_obj82;
void* __right_value296 = (void*)0;
char* __dec_obj83;
void* __right_value297 = (void*)0;
char* __dec_obj84;
void* __right_value298 = (void*)0;
struct list$1voidph* __dec_obj85;
void* __right_value306 = (void*)0;
struct list$1sNodeph* __dec_obj89;
void* __right_value307 = (void*)0;
struct list$1voidph* __dec_obj90;
void* __right_value314 = (void*)0;
struct list$1charph* __dec_obj94;
void* __right_value315 = (void*)0;
struct sType* __dec_obj95;
void* __right_value316 = (void*)0;
struct sNode* __dec_obj96;
void* __right_value317 = (void*)0;
struct sType* __dec_obj97;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj98;
void* __right_value319 = (void*)0;
char* __dec_obj99;
void* __right_value320 = (void*)0;
char* __dec_obj100;
void* __right_value321 = (void*)0;
char* __dec_obj101;
void* __right_value322 = (void*)0;
char* __dec_obj102;
struct sType* __result289__;
    if(    self==(void*)0) {
        __result279__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_425=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_425->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj80=result_425->mNoSolvedGenericsType;
        result_425->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj81=result_425->mOriginalLoadVarType;
        result_425->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj82=result_425->mAnyOriginalType;
        result_425->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj83=result_425->mInterfaceName;
        result_425->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj84=result_425->mGenericsName;
        result_425->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj85=result_425->mGenericsTypes;
        result_425->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj85,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj89=result_425->mArrayNum;
        result_425->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj89,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj90=result_425->mParamTypes;
        result_425->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj90,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj94=result_425->mParamNames;
        result_425->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj95=result_425->mResultType;
        result_425->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj96=result_425->mAlignas;
        result_425->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj97=result_425->mChannelType;
        result_425->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_425->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_425->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_425->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_425->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_425->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_425->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_425->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_425->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_425->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_425->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_425->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_425->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_425->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_425->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_425->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_425->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_425->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_425->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_425->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_425->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_425->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_425->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_425->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj98=result_425->mSizeNum;
        result_425->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_425->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj99=result_425->mOriginalTypeName;
        result_425->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_425->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_425->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_425->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_425->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_425->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_425->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_425->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj100=result_425->mAsmName;
        result_425->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_425->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_425->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_425->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_425->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_425->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj101=result_425->mTupleName;
        result_425->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj102=result_425->mAttribute;
        result_425->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_425->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_425->mCreateVTable=self->mCreateVTable;
    }
    __result289__ = gComeFunResultObject = __result_obj__ = result_425;
    come_call_finalizer3(result_425,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_420;
    result_420=0;
    result_420+=int_get_hash_key(((int)self->mClass));
    result_420+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_420+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_420+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_420+=int_get_hash_key(((int)self->mAnyClass));
    result_420+=int_get_hash_key(((int)self->mInterfaceName));
    result_420+=int_get_hash_key(((int)self->mGenericsName));
    result_420+=int_get_hash_key(((int)self->mGenericsTypes));
    result_420+=int_get_hash_key(((int)self->mArrayNum));
    result_420+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_420+=int_get_hash_key(((int)self->mParamTypes));
    result_420+=int_get_hash_key(((int)self->mParamNames));
    result_420+=int_get_hash_key(((int)self->mResultType));
    result_420+=int_get_hash_key(((int)self->mVarArgs));
    result_420+=int_get_hash_key(((int)self->mAlignas));
    result_420+=int_get_hash_key(((int)self->mChannelType));
    result_420+=int_get_hash_key(((int)self->mUnsigned));
    result_420+=int_get_hash_key(((int)self->mShort));
    result_420+=int_get_hash_key(((int)self->mLong));
    result_420+=int_get_hash_key(((int)self->mLongLong));
    result_420+=int_get_hash_key(((int)self->mConstant));
    result_420+=int_get_hash_key(((int)self->mAtomic));
    result_420+=int_get_hash_key(((int)self->mRegister));
    result_420+=int_get_hash_key(((int)self->mVolatile));
    result_420+=int_get_hash_key(((int)self->mStatic));
    result_420+=int_get_hash_key(((int)self->mUniq));
    result_420+=int_get_hash_key(((int)self->mRecord));
    result_420+=int_get_hash_key(((int)self->mExtern));
    result_420+=int_get_hash_key(((int)self->mRestrict));
    result_420+=int_get_hash_key(((int)self->mImmutable));
    result_420+=int_get_hash_key(((int)self->mHeap));
    result_420+=int_get_hash_key(((int)self->mChannel));
    result_420+=int_get_hash_key(((int)self->mNoHeap));
    result_420+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_420+=int_get_hash_key(((int)self->mException));
    result_420+=int_get_hash_key(((int)self->mPointerNum));
    result_420+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_420+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_420+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_420+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_420+=int_get_hash_key(((int)self->mSizeNum));
    result_420+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_420+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_420+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_420+=int_get_hash_key(((int)self->mFunctionParam));
    result_420+=int_get_hash_key(((int)self->mAllocaValue));
    result_420+=int_get_hash_key(((int)self->mGenericsStruct));
    result_420+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_420+=int_get_hash_key(((int)self->mInline));
    result_420+=int_get_hash_key(((int)self->mNullValue));
    result_420+=int_get_hash_key(((int)self->mGuardValue));
    result_420+=int_get_hash_key(((int)self->mAsmName));
    result_420+=int_get_hash_key(((int)self->mArrayPointerType));
    result_420+=int_get_hash_key(((int)self->mLambdaArray));
    result_420+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_420+=int_get_hash_key(((int)self->mTypedef));
    result_420+=int_get_hash_key(((int)self->mMultipleTypes));
    result_420+=int_get_hash_key(((int)self->mOriginIsArray));
    result_420+=int_get_hash_key(((int)self->mTupleName));
    result_420+=int_get_hash_key(((int)self->mAttribute));
    result_420+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_420+=int_get_hash_key(((int)self->mGenerate));
    result_420+=int_get_hash_key(((int)self->mCreateVTable));
    return result_420;
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_421;
struct list_item$1sNodeph* it2_422;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_421=left->head;
    it2_422=right->head;
    while(it_421!=((void*)0)) {
        if(        !sNode_equals(it_421->item,it2_422->item)) {
            return (_Bool)0;
        }
        it_421=it_421->next;
        it2_422=it2_422->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_423;
struct list_item$1charph* it2_424;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_423=left->head;
    it2_424=right->head;
    while(it_423!=((void*)0)) {
        if(        !string_equals(it_423->item,it2_424->item)) {
            return (_Bool)0;
        }
        it_423=it_423->next;
        it2_424=it2_424->next;
    }
    return (_Bool)1;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result280__;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1sNodeph* result_426;
struct list_item$1sNodeph* it_427;
void* __right_value305 = (void*)0;
struct list$1sNodeph* __result285__;
    if(    self==((void*)0)) {
        __result280__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    result_426=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_427=self->head;
    while(it_427!=((void*)0)) {
        list$1sNodephp_add(result_426,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_427->item)));
        it_427=it_427->next;
    }
    __result285__ = gComeFunResultObject = __result_obj__ = result_426;
    come_call_finalizer3(result_426,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result281__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list_item$1sNodeph* litem_428;
struct sNode* __dec_obj86;
void* __right_value302 = (void*)0;
struct list_item$1sNodeph* litem_429;
struct sNode* __dec_obj87;
void* __right_value303 = (void*)0;
struct list_item$1sNodeph* litem_430;
struct sNode* __dec_obj88;
struct list$1sNodeph* __result282__;
    if(    self->len==0) {
        litem_428=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value301=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=((void*)0);
        litem_428->next=((void*)0);
        __dec_obj86=litem_428->item;
        litem_428->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_428;
        self->head=litem_428;
    }
    else if(    self->len==1) {
        litem_429=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value302=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_429->prev=self->head;
        litem_429->next=((void*)0);
        __dec_obj87=litem_429->item;
        litem_429->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_429;
        self->head->next=litem_429;
    }
    else {
        litem_430=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value303=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=self->tail;
        litem_430->next=((void*)0);
        __dec_obj88=litem_430->item;
        litem_430->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_430;
        self->tail=litem_430;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result283__;
void* __right_value304 = (void*)0;
struct sNode* result_431;
struct sNode* __result284__;
    if(    self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_431=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_431->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_431->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_431->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_431->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_431->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_431->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_431->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_431->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_431->kind=self->kind;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_431;
    come_call_finalizer2((void*)0, result_431, result_431 ? ((struct sNode*)result_431)->finalize:(void*)0, result_431 ? ((struct sNode*)result_431)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result286__;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1charph* result_432;
struct list_item$1charph* it_433;
void* __right_value313 = (void*)0;
struct list$1charph* __result288__;
    if(    self==((void*)0)) {
        __result286__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_432=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_433=self->head;
    while(it_433!=((void*)0)) {
        list$1charphp_add(result_432,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_433->item)));
        it_433=it_433->next;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_432;
    come_call_finalizer3(result_432,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
struct list_item$1charph* litem_434;
char* __dec_obj91;
void* __right_value311 = (void*)0;
struct list_item$1charph* litem_435;
char* __dec_obj92;
void* __right_value312 = (void*)0;
struct list_item$1charph* litem_436;
char* __dec_obj93;
struct list$1charph* __result287__;
    if(    self->len==0) {
        litem_434=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value310=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_434->prev=((void*)0);
        litem_434->next=((void*)0);
        __dec_obj91=litem_434->item;
        litem_434->item=(char*)come_increment_ref_count(item);
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_434;
        self->head=litem_434;
    }
    else if(    self->len==1) {
        litem_435=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value311=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_435->prev=self->head;
        litem_435->next=((void*)0);
        __dec_obj92=litem_435->item;
        litem_435->item=(char*)come_increment_ref_count(item);
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_435;
        self->head->next=litem_435;
    }
    else {
        litem_436=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value312=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_436->prev=self->tail;
        litem_436->next=((void*)0);
        __dec_obj93=litem_436->item;
        litem_436->item=(char*)come_increment_ref_count(item);
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_436;
        self->tail=litem_436;
    }
    self->len++;
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1charph* list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_437;
int i_438;
char* default_value_439;
struct list$1charph* __result290__;
void* __right_value325 = (void*)0;
struct list_item$1charph* litem_440;
char* __dec_obj103;
void* __right_value326 = (void*)0;
struct list_item$1charph* litem_441;
char* __dec_obj104;
struct list_item$1charph* it_442;
int i_443;
void* __right_value327 = (void*)0;
struct list_item$1charph* litem_444;
char* __dec_obj105;
struct list$1charph* __result291__;
default_value_439 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_437=self->len;
        for(        i_438=0;        i_438<position-len_437;        i_438++        ){
            memset(&default_value_439,0,sizeof(char*));
            list$1charphp_push_back(self,(char*)come_increment_ref_count(default_value_439));
            default_value_439 = come_decrement_ref_count2(default_value_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
        __result290__ = gComeFunResultObject = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    if(    position==0) {
        litem_440=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value325=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1565, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_440->prev=((void*)0);
        litem_440->next=self->head;
        __dec_obj103=litem_440->item;
        litem_440->item=(char*)come_increment_ref_count(item);
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_440;
        self->head=litem_440;
        self->len++;
    }
    else if(    self->len==1) {
        litem_441=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value326=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1577, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_441->prev=self->head;
        litem_441->next=self->tail;
        __dec_obj104=litem_441->item;
        litem_441->item=(char*)come_increment_ref_count(item);
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_441;
        self->head->next=litem_441;
        self->len++;
    }
    else {
        it_442=self->head;
        i_443=0;
        while(it_442!=((void*)0)) {
            if(            position==i_443) {
                litem_444=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value327=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1593, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                litem_444->prev=it_442->prev;
                litem_444->next=it_442;
                __dec_obj105=litem_444->item;
                litem_444->item=(char*)come_increment_ref_count(item);
                __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_442->prev->next=litem_444;
                it_442->prev=litem_444;
                self->len++;
            }
            it_442=it_442->next;
            i_443++;
        }
    }
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj109=self->v1;
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result292__;
void* __right_value334 = (void*)0;
struct tuple2$2sTypephcharph* result_447;
void* __right_value335 = (void*)0;
struct sType* __dec_obj111;
void* __right_value336 = (void*)0;
char* __dec_obj112;
struct tuple2$2sTypephcharph* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_447=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result_447->v1;
        result_447->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj112=result_447->v2;
        result_447->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_447;
    come_call_finalizer3(result_447,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_446;
    result_446=0;
    result_446+=int_get_hash_key(((int)self->v1));
    result_446+=int_get_hash_key(((int)self->v2));
    return result_446;
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
struct sType* __dec_obj113;
char* __dec_obj114;
struct tuple2$2sTypephcharph* __result294__;
    __dec_obj113=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj115;
char* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 1, 0, (void*)0);
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
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_448;
_Bool output_449;
void* __right_value339 = (void*)0;
char* type_name_450;
struct sClass* klass_451;
void* __right_value340 = (void*)0;
_Bool _if_conditional1;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sClass* __dec_obj117;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sClass* __dec_obj118;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* voidp_452;
void* __right_value347 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* finalizer_455;
void* __right_value355 = (void*)0;
struct sType* __list_values1___456[1];
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1voidph* __dec_obj131;
void* __right_value362 = (void*)0;
char* __list_values2___467[1];
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1charph* __dec_obj132;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* __dec_obj133;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* cloner_471;
void* __right_value373 = (void*)0;
struct sType* __list_values3___472[1];
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1voidph* __dec_obj134;
void* __right_value376 = (void*)0;
char* __list_values4___473[1];
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1charph* __dec_obj135;
void* __right_value379 = (void*)0;
struct sType* __dec_obj136;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4 = (void*)0;
struct sType* type2_474=0;
char* name_475=0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
char* source_tail_476;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct buffer* header_477;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* __right_value396 = (void*)0;
struct sNode* __result308__;
void* __right_value397 = (void*)0;
struct sNode* __result309__;
klass_451 = (void*)0;
    if(    !gComeC&&(charp_operator_equals(buf,"interface")||charp_operator_equals(buf,"protocol"))) {
        source_head_448=info->p;
        output_449=(_Bool)1;
        type_name_450=(char*)come_increment_ref_count(parse_word(info));
        if(        (_if_conditional1=(((struct sClass*)(__right_value340=map$2charphsClassphp_at(info->classes,type_name_450,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value340,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional1) {
            __dec_obj117=klass_451;
            klass_451=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 86, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_450,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj117,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj118=klass_451;
            klass_451=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)(__right_value343=map$2charphsClassphp_at(info->classes,type_name_450,((void*)0))))));
            come_call_finalizer3(__dec_obj118,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value343,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            list$1voidphp_length(klass_451->mFields)>0) {
                output_449=(_Bool)0;
            }
        }
        expected_next_character(123,info);
        voidp_452=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 98, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        voidp_452->mPointerNum++;
        list$1voidphp_push_back(klass_451->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 101, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("_protocol_obj")),(struct sType*)come_increment_ref_count(voidp_452))));
        finalizer_455=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 103, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        __dec_obj131=finalizer_455->mParamTypes;
        finalizer_455->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___456[0]=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value355=come_call_cloner(sType_clone, voidp_452))))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 105, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values1___456)));
        come_call_finalizer3(__dec_obj131,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value355,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj132=finalizer_455->mParamNames;
        finalizer_455->mParamNames=(struct list$1charph*)come_increment_ref_count((__list_values2___467[0]=(char*)come_increment_ref_count(((char*)(__right_value362=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 106, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values2___467)));
        come_call_finalizer3(__dec_obj132,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        finalizer_455->mVarArgs=(_Bool)0;
        __dec_obj133=finalizer_455->mResultType;
        finalizer_455->mResultType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 108, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1voidphp_push_back(klass_451->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 110, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("finalize")),(struct sType*)come_increment_ref_count(finalizer_455))));
        cloner_471=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 112, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        __dec_obj134=cloner_471->mParamTypes;
        cloner_471->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___472[0]=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value373=come_call_cloner(sType_clone, voidp_452))))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 114, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values3___472)));
        come_call_finalizer3(__dec_obj134,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value373,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj135=cloner_471->mParamNames;
        cloner_471->mParamNames=(struct list$1charph*)come_increment_ref_count((__list_values4___473[0]=(char*)come_increment_ref_count(((char*)(__right_value376=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 115, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values4___473)));
        come_call_finalizer3(__dec_obj135,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        cloner_471->mVarArgs=(_Bool)0;
        __dec_obj136=cloner_471->mResultType;
        cloner_471->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, voidp_452));
        come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1voidphp_push_back(klass_451->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 119, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("clone")),(struct sType*)come_increment_ref_count(cloner_471))));
        while((_Bool)1) {
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value383=parse_interface_function(info)));
            type2_474=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_475=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer3(__right_value383,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            expected_next_character(59,info);
            list$1voidphp_push_back(klass_451->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 132, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_475),(struct sType*)come_increment_ref_count(type2_474))));
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_475 = come_decrement_ref_count2(name_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            parse_sharp_v5(info);
            come_call_finalizer3(type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_475 = come_decrement_ref_count2(name_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_476=info->p;
        header_477=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 146, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_477,"interface ");
        buffer_append(header_477,source_head_448,source_tail_476-source_head_448);
        add_come_code_at_come_header(info,"%s\n",((char*)(__right_value388=buffer_to_string(header_477))));
        __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 152, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(__right_value391=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count((struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 152, "struct sInterfaceNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_450)),(struct sClass*)come_increment_ref_count(klass_451),output_449,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value396=_inf_value1));
        type_name_450 = come_decrement_ref_count2(type_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_451,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(voidp_452,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(finalizer_455,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cloner_471,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value391,sInterfaceNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value396) { __right_value396 = come_decrement_ref_count2(__right_value396, ((struct sNode*)__right_value396)->finalize, ((struct sNode*)__right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result308__;
        type_name_450 = come_decrement_ref_count2(type_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_451,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(voidp_452,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(finalizer_455,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cloner_471,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result309__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value397=top_level_v91(buf,head,head_sline,info)));
    if(__right_value397) { __right_value397 = come_decrement_ref_count2(__right_value397, ((struct sNode*)__right_value397)->finalize, ((struct sNode*)__right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj119;
struct sType* __dec_obj120;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj119=self->v1;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj120=self->v2;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result296__;
void* __right_value348 = (void*)0;
struct tuple2$2charphsTypeph* result_454;
void* __right_value349 = (void*)0;
char* __dec_obj121;
void* __right_value350 = (void*)0;
struct sType* __dec_obj122;
struct tuple2$2charphsTypeph* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_454=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj121=result_454->v1;
        result_454->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj122=result_454->v2;
        result_454->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_454;
    come_call_finalizer3(result_454,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_453;
    result_453=0;
    result_453+=int_get_hash_key(((int)self->v1));
    result_453+=int_get_hash_key(((int)self->v2));
    return result_453;
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
char* __dec_obj123;
struct sType* __dec_obj124;
struct tuple2$2charphsTypeph* __result298__;
    __dec_obj123=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj125;
struct sType* __dec_obj126;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj125=self->v1;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj126=self->v2;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_457;
struct list$1sTypeph* __result300__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_457=0;    i_457<num_value;    i_457++    ){
        list$1sTypephp_push_back(self,values[i_457]);
    }
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct list_item$1sTypeph* litem_458;
struct sType* __dec_obj127;
void* __right_value357 = (void*)0;
struct list_item$1sTypeph* litem_459;
struct sType* __dec_obj128;
void* __right_value358 = (void*)0;
struct list_item$1sTypeph* litem_460;
struct sType* __dec_obj129;
struct list$1sTypeph* __result299__;
    if(    self->len==0) {
        litem_458=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value356=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=((void*)0);
        litem_458->next=((void*)0);
        __dec_obj127=litem_458->item;
        litem_458->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_458;
        self->head=litem_458;
    }
    else if(    self->len==1) {
        litem_459=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value357=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=self->head;
        litem_459->next=((void*)0);
        __dec_obj128=litem_459->item;
        litem_459->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_459;
        self->head->next=litem_459;
    }
    else {
        litem_460=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value358=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_460->prev=self->tail;
        litem_460->next=((void*)0);
        __dec_obj129=litem_460->item;
        litem_460->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_460;
        self->tail=litem_460;
    }
    self->len++;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_461;
struct list_item$1sTypeph* prev_it_462;
    it_461=self->head;
    while(it_461!=((void*)0)) {
        prev_it_462=it_461;
        it_461=it_461->next;
        come_call_finalizer3(prev_it_462,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj130;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_463;
struct list_item$1sTypeph* prev_it_464;
    it_463=self->head;
    while(it_463!=((void*)0)) {
        prev_it_464=it_463;
        it_463=it_463->next;
        come_call_finalizer3(prev_it_464,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result301__;
void* __right_value359 = (void*)0;
struct list$1sTypeph* result_466;
struct list$1sTypeph* __result302__;
    if(    self==(void*)0) {
        __result301__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_466=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals));
    if(    self!=((void*)0)) {
        result_466->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_466->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_466->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_466->it=self->it;
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_466;
    come_call_finalizer3(result_466,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_465;
    result_465=0;
    result_465+=int_get_hash_key(((int)self->head));
    result_465+=int_get_hash_key(((int)self->tail));
    result_465+=int_get_hash_key(((int)self->len));
    result_465+=int_get_hash_key(((int)self->it));
    return result_465;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    if(    !list_item$1sTypeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sTypeph_equals(struct list_item$1sTypeph* left, struct list_item$1sTypeph* right){
    if(    !sType_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_468;
struct list$1charph* __result303__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_468=0;    i_468<num_value;    i_468++    ){
        list$1charphp_push_back(self,values[i_468]);
    }
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result304__;
void* __right_value363 = (void*)0;
struct list$1charph* result_470;
struct list$1charph* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_470=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals));
    if(    self!=((void*)0)) {
        result_470->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_470->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_470->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_470->it=self->it;
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_470;
    come_call_finalizer3(result_470,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_469;
    result_469=0;
    result_469+=int_get_hash_key(((int)self->head));
    result_469+=int_get_hash_key(((int)self->tail));
    result_469+=int_get_hash_key(((int)self->len));
    result_469+=int_get_hash_key(((int)self->it));
    return result_469;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
    if(    !list_item$1charph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right){
    if(    !string_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__=(void*)0;
struct sInterfaceNode* __result306__;
void* __right_value392 = (void*)0;
struct sInterfaceNode* result_479;
void* __right_value393 = (void*)0;
char* __dec_obj137;
void* __right_value394 = (void*)0;
char* __dec_obj138;
void* __right_value395 = (void*)0;
struct sClass* __dec_obj139;
struct sInterfaceNode* __result307__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_479=(struct sInterfaceNode*)come_increment_ref_count((struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "struct sInterfaceNode", sInterfaceNode_finalize, sInterfaceNode_clone, sInterfaceNode_get_hash_key, sInterfaceNode_equals));
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_479->sname;
        result_479->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj138=result_479->name;
        result_479->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->klass!=((void*)0)) {
        __dec_obj139=result_479->klass;
        result_479->klass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->klass));
        come_call_finalizer3(__dec_obj139,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->mOutput=self->mOutput;
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_479;
    come_call_finalizer3(result_479,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static unsigned int sInterfaceNode_get_hash_key(struct sInterfaceNode* self){
unsigned int result_478;
    result_478=0;
    result_478+=int_get_hash_key(((int)self->sline));
    result_478+=int_get_hash_key(((int)self->sname));
    result_478+=int_get_hash_key(((int)self->sline_real));
    result_478+=int_get_hash_key(((int)self->name));
    result_478+=int_get_hash_key(((int)self->klass));
    result_478+=int_get_hash_key(((int)self->mOutput));
    return result_478;
}

static _Bool sInterfaceNode_equals(struct sInterfaceNode* left, struct sInterfaceNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->name,right->name)) {
        return (_Bool)0;
    }
    if(    !sClass_equals(left->klass,right->klass)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutput,right->mOutput)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

