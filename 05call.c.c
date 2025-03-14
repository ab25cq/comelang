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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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

struct smart_pointer$1char$
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short$
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int$
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long$
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1char$p
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float$
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double$
{
    struct buffer* memory;
    double* p;
};

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

struct vector$1char$
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1char$p
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short$
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int$
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long$
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float$
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double$
{
    double* items;
    int len;
    int size;
    int it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
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
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
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
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$p* key_list;
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
    struct list$1char$p* key_list;
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
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$p* key_list;
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
    struct map$2char$phsFun$ph* funcs;
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
    _Bool without_semicolon;
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
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2int$char$ph
{
    int v1;
    char* v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
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

struct tuple2$2bool$char$ph
{
    _Bool v1;
    char* v2;
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

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef unsigned int nfds_t;

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWildCard
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    _Bool guard_break;
    struct list$1sType$ph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
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
int fgetpos(struct __sFILE* anonymous_var_nameX42, long long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long long* anonymous_var_nameX62);
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
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
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
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
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
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
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
void come_print_heap_info(void* mem);
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values);
static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item);
static void vector$1char$$p_finalize(struct vector$1char$* self);
struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values);
static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item);
static void vector$1char$p$p_finalize(struct vector$1char$p* self);
struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values);
static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item);
static void vector$1short$$p_finalize(struct vector$1short$* self);
struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values);
static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item);
static void vector$1int$$p_finalize(struct vector$1int$* self);
struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values);
static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item);
static void vector$1long$$p_finalize(struct vector$1long$* self);
struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values);
static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item);
static void vector$1float$$p_finalize(struct vector$1float$* self);
struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values);
static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item);
static void vector$1double$$p_finalize(struct vector$1double$* self);
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
struct list$1char$ph* charp_split_char(char* self, char c);
static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item);
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
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
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
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
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
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX1097, unsigned int anonymous_var_nameX1098, int anonymous_var_nameX1099);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
static void sWildCard_finalize(struct sWildCard* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_158;
    result_158=0;
    result_158+=int_get_hash_key(((int)self->buf));
    result_158+=int_get_hash_key(((int)self->len));
    result_158+=int_get_hash_key(((int)self->size));
    return result_158;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__81;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_180;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0;    i_180<num_value;    i_180++    ){
        list$1char$$p_push_back(self,values[i_180]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_183;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_184;
struct list_item$1char$* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer3(prev_it_185,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_186;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0;    i_186<num_value;    i_186++    ){
        list$1char$p$p_push_back(self,values[i_186]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_189;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_190;
struct list_item$1char$p* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer3(prev_it_191,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_192;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0;    i_192<num_value;    i_192++    ){
        list$1short$$p_push_back(self,values[i_192]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_195;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_196;
struct list_item$1short$* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer3(prev_it_197,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_198;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0;    i_198<num_value;    i_198++    ){
        list$1int$$p_push_back(self,values[i_198]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_201;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_202;
struct list_item$1int$* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer3(prev_it_203,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_204;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1long$$p_push_back(self,values[i_204]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_207;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_208;
struct list_item$1long$* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_210;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1float$$p_push_back(self,values[i_210]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_213;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_214;
struct list_item$1float$* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_216;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1double$$p_push_back(self,values[i_216]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_219;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_220;
struct list_item$1double$* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer3(prev_it_221,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$$p_add(self,values[i_222]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_223;
char* items_224;
void* __right_value128 = (void*)0;
int i_225;
struct vector$1char$* __result_obj__121;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "/usr/local/include/comelang.h", 2433, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1char$p$p_add(self,values[i_227]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_228;
char** items_229;
void* __right_value132 = (void*)0;
int i_230;
struct vector$1char$p* __result_obj__124;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "/usr/local/include/comelang.h", 2433, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
            (self->items[i_231] = come_decrement_ref_count2(self->items[i_231], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1short$$p_add(self,values[i_232]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_233;
short* items_234;
void* __right_value136 = (void*)0;
int i_235;
struct vector$1short$* __result_obj__127;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "/usr/local/include/comelang.h", 2433, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1int$$p_add(self,values[i_237]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_238;
int* items_239;
void* __right_value140 = (void*)0;
int i_240;
struct vector$1int$* __result_obj__130;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "/usr/local/include/comelang.h", 2433, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1long$$p_add(self,values[i_242]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_243;
long* items_244;
void* __right_value144 = (void*)0;
int i_245;
struct vector$1long$* __result_obj__133;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "/usr/local/include/comelang.h", 2433, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1float$$p_add(self,values[i_247]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_248;
float* items_249;
void* __right_value148 = (void*)0;
int i_250;
struct vector$1float$* __result_obj__136;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "/usr/local/include/comelang.h", 2433, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        vector$1double$$p_add(self,values[i_252]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_253;
double* items_254;
void* __right_value152 = (void*)0;
int i_255;
struct vector$1double$* __result_obj__139;
memset(&i_255, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_253=self->size*2;
        items_254=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "/usr/local/include/comelang.h", 2433, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_255=0;        i_255<self->size;        i_255++        ){
            self->items[i_255]=items_254[i_255];
        }
        self->size=new_size_253;
        come_free(items_254);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__178 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_290;
struct list_item$1char$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj22=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sNode* __dec_obj23;
void* __right_value260 = (void*)0;
char* __dec_obj24;
struct sReturnNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj24=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__237,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sReturnNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_350;
void* __right_value300 = (void*)0;
struct sType* result_type_351;
void* __right_value301 = (void*)0;
struct sType* result_type2_379;
struct sType* result_type3_380;
void* __right_value302 = (void*)0;
_Bool _if_conditional1;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj49;
_Bool Value_381;
_Bool __result_obj__254;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_382;
void* __right_value305 = (void*)0;
struct sType* come_value_type_383;
void* __right_value306 = (void*)0;
struct sType* __dec_obj50;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_385=0;
char* Err_386=0;
_Bool _if_conditional2;
_Bool __result_obj__255;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __if_result__0_387 = (void*)0;
struct list$1sVar$ph* o2_saved_388;
struct sVar* it_391;
void* __right_value317 = (void*)0;
struct list$1sVar$ph* __dec_obj51;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sFun* come_fun_398;
void* __if_result__1_399 = (void*)0;
struct list$1sVar$ph* o2_saved_400;
struct sVar* it_401;
void* __right_value323 = (void*)0;
struct list$1sVar$ph* __dec_obj52;
void* __right_value324 = (void*)0;
    if(    self->value) {
        come_fun_350=info->come_fun;
        result_type_351=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_350->mResultType));
        result_type2_379=(struct sType*)come_increment_ref_count(solve_generics(result_type_351,info->generics_type,info));
        result_type3_380=result_type2_379->mNoSolvedGenericsType;
        if(        result_type2_379->mNoSolvedGenericsType) {
            result_type3_380=result_type2_379->mNoSolvedGenericsType;
        }
        else {
            result_type3_380=result_type2_379;
        }
        if(        result_type_351->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value302=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj49=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_381=node_compile(self->value,info);
        if(        !Value_381) {
            __result_obj__254 = (_Bool)0;
            come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_379,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__254;
        }
        else {
        }
        come_value_382=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_383=(struct sType*)come_increment_ref_count(solve_generics(come_value_382->type,info->generics_type,info));
        __dec_obj50=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_382->type));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_382->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_350->mBlock,info,come_value_382->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_382->c_value);
        }
        else {
            static int result_num_384=0;
            result_num_384++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value309=make_define_var(result_type2_379,((char*)(__right_value308=xsprintf("__result_obj__\%s",((char*)(__right_value307=int_to_string(result_num_384)))))),(_Bool)0,info))));
            (__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_379->mClass->mName)>strlen("tuple")&&memcmp(result_type2_379->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value310=check_assign_type("result type",result_type2_379,come_value_type_383,come_value_382,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_385=multiple_assign_var1->v1;
                    Err_386=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_386)),                    come_call_finalizer3(__right_value310,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional2) {
                        __result_obj__255 = (_Bool)1;
                        (Err_386 = come_decrement_ref_count2(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_379,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_382,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__255;
                    }
                    else {
                    }
                    (Err_386 = come_decrement_ref_count2(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_379->mHeap) {
                    add_come_code(info,((char*)(__right_value312=xsprintf("__result_obj__\%s = come_increment_ref_count(%%s);\n",((char*)(__right_value311=int_to_string(result_num_384)))))),come_value_382->c_value);
                    (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value314=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value313=int_to_string(result_num_384)))))),come_value_382->c_value);
                    (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value316=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value315=int_to_string(result_num_384)))))),come_value_382->c_value);
                (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_350->mBlock,info,come_value_382->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_388=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_391=list$1sVar$ph$p_begin((o2_saved_388));                    !list$1sVar$ph$p_end((o2_saved_388));                    it_391=list$1sVar$ph$p_next((o2_saved_388))                    ){
                        free_object(((struct sType*)(__right_value317=come_call_cloner(sType_clone, it_391->mType))),it_391->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_388,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj51=info->match_it_var;
                    __if_result__0_387=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj51,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                come_call_finalizer3(__if_result__0_387,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value318=xsprintf("come_heap_final();\n"))));
                (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_379->mHeap) {
                free_object(result_type2_379,((char*)(__right_value320=xsprintf("__result_obj__\%s",((char*)(__right_value319=int_to_string(result_num_384)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value322=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value321=int_to_string(result_num_384)))))));
            (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_379,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_382,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_398=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_398->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_400=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_401=list$1sVar$ph$p_begin((o2_saved_400));                !list$1sVar$ph$p_end((o2_saved_400));                it_401=list$1sVar$ph$p_next((o2_saved_400))                ){
                    free_object(((struct sType*)(__right_value323=come_call_cloner(sType_clone, it_401->mType))),it_401->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_400,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj52=info->match_it_var;
                __if_result__1_399=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj52,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            come_call_finalizer3(__if_result__1_399,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value324=xsprintf("come_heap_final();\n"))));
            (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        (self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__239;
void* __right_value262 = (void*)0;
struct sType* result_356;
void* __right_value263 = (void*)0;
struct sType* __dec_obj25;
void* __right_value264 = (void*)0;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list$1sType$ph* __dec_obj30;
void* __right_value273 = (void*)0;
struct sType* __dec_obj31;
void* __right_value274 = (void*)0;
struct sType* __dec_obj32;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value278 = (void*)0;
char* __dec_obj35;
void* __right_value279 = (void*)0;
char* __dec_obj36;
void* __right_value280 = (void*)0;
char* __dec_obj37;
void* __right_value288 = (void*)0;
struct list$1sNode$ph* __dec_obj41;
void* __right_value289 = (void*)0;
char* __dec_obj42;
void* __right_value290 = (void*)0;
struct list$1sType$ph* __dec_obj43;
void* __right_value298 = (void*)0;
struct list$1char$ph* __dec_obj47;
void* __right_value299 = (void*)0;
struct sType* __dec_obj48;
struct sType* __result_obj__253;
    if(    self==(void*)0) {
        __result_obj__239 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__239,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__239;
    }
    result_356=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_356->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_356->mOriginalLoadVarType;
        result_356->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_356->mChannelType;
        result_356->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_356->mGenericsTypes;
        result_356->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj30,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_356->mNoSolvedGenericsType;
        result_356->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_356->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_356->mAnyOriginalType;
        result_356->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_356->mSizeNum;
        result_356->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_356->mAlignas;
        result_356->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_356->mTupleName;
        result_356->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_356->mAttribute;
        result_356->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_356->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_356->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_356->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_356->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_356->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_356->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_356->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_356->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_356->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_356->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_356->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_356->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_356->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_356->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_356->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_356->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_356->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_356->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_356->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_356->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_356->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_356->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_356->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_356->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_356->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_356->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_356->mAsmName;
        result_356->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_356->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_356->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_356->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_356->mArrayNum;
        result_356->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_356->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_356->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_356->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_356->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_356->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_356->mOriginalTypeName;
        result_356->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_356->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_356->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_356->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_356->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_356->mParamTypes;
        result_356->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_356->mParamNames;
        result_356->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_356->mResultType;
        result_356->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_356->mVarArgs=self->mVarArgs;
    }
    __result_obj__253 = come_increment_ref_count(result_356);
    come_call_finalizer3(result_356,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_352;
struct list_item$1sType$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_354;
struct list_item$1sNode$ph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        come_call_finalizer3(prev_it_355,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__240;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sType$ph* result_357;
struct list_item$1sType$ph* it_358;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sType$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__240,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_357=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_358=self->head;
    while(it_358!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_357,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_358->item)));
        }
        else {
            list$1sType$ph$p_add(result_357,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_358->item)));
        }
        it_358=it_358->next;
    }
    __result_obj__243 = come_increment_ref_count(result_357);
    come_call_finalizer3(result_357,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value267 = (void*)0;
struct list_item$1sType$ph* litem_359;
struct sType* __dec_obj27;
void* __right_value268 = (void*)0;
struct list_item$1sType$ph* litem_360;
struct sType* __dec_obj28;
void* __right_value269 = (void*)0;
struct list_item$1sType$ph* litem_361;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__242;
    if(    self->len==0) {
        litem_359=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value267=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj27=litem_359->item;
        litem_359->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value268=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj28=litem_360->item;
        litem_360->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value269=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj29=litem_361->item;
        litem_361->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result_obj__242 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__242;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_362;
struct list_item$1sType$ph* prev_it_363;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        come_call_finalizer3(prev_it_363,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__244;
void* __right_value275 = (void*)0;
struct sNode* result_364;
struct sNode* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count2(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
    }
    result_364=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_364->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_364->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_364->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_364->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_364->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_364->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_364->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_364->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_364->kind=self->kind;
    }
    __result_obj__245 = come_increment_ref_count(result_364);
    ((result_364) ? result_364 = come_decrement_ref_count2(result_364, ((struct sNode*)result_364)->finalize, ((struct sNode*)result_364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count2(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* result_365;
struct list_item$1sNode$ph* it_366;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_365=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_366=self->head;
    while(it_366!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_365,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_366->item)));
        }
        else {
            list$1sNode$ph$p_add(result_365,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_366->item)));
        }
        it_366=it_366->next;
    }
    __result_obj__249 = come_increment_ref_count(result_365);
    come_call_finalizer3(result_365,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__247;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_367;
struct sNode* __dec_obj38;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_368;
struct sNode* __dec_obj39;
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_369;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__248;
    if(    self->len==0) {
        litem_367=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=((void*)0);
        litem_367->next=((void*)0);
        __dec_obj38=litem_367->item;
        litem_367->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_367;
        self->head=litem_367;
    }
    else if(    self->len==1) {
        litem_368=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->head;
        litem_368->next=((void*)0);
        __dec_obj39=litem_368->item;
        litem_368->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_368;
        self->head->next=litem_368;
    }
    else {
        litem_369=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value285=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->tail;
        litem_369->next=((void*)0);
        __dec_obj40=litem_369->item;
        litem_369->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_369;
        self->tail=litem_369;
    }
    self->len++;
    __result_obj__248 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__248;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_370;
struct list_item$1sNode$ph* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__250;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1char$ph* result_372;
struct list_item$1char$ph* it_373;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1char$ph* __result_obj__252;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_372=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_373=self->head;
    while(it_373!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_372,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_373->item)));
        }
        else {
            list$1char$ph$p_add(result_372,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_373->item)));
        }
        it_373=it_373->next;
    }
    __result_obj__252 = come_increment_ref_count(result_372);
    come_call_finalizer3(result_372,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_374;
char* __dec_obj44;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_375;
char* __dec_obj45;
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_376;
char* __dec_obj46;
struct list$1char$ph* __result_obj__251;
    if(    self->len==0) {
        litem_374=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=((void*)0);
        litem_374->next=((void*)0);
        __dec_obj44=litem_374->item;
        litem_374->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_374;
        self->head=litem_374;
    }
    else if(    self->len==1) {
        litem_375=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=self->head;
        litem_375->next=((void*)0);
        __dec_obj45=litem_375->item;
        litem_375->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_375;
        self->head->next=litem_375;
    }
    else {
        litem_376=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value295=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->tail;
        litem_376->next=((void*)0);
        __dec_obj46=litem_376->item;
        litem_376->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_376;
        self->tail=litem_376;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_377;
struct list_item$1char$ph* prev_it_378;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        prev_it_378=it_377;
        it_377=it_377->next;
        come_call_finalizer3(prev_it_378,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self){
struct sVar* result_389;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
struct sVar* result_390;
struct sVar* __result_obj__258;
result_389 = (void*)0;
result_390 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_389,0,sizeof(struct sVar*));
        __result_obj__256 = result_389;
        return __result_obj__256;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        return __result_obj__257;
    }
    memset(&result_390,0,sizeof(struct sVar*));
    __result_obj__258 = result_390;
    return __result_obj__258;
}

static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self){
struct sVar* result_392;
struct sVar* __result_obj__259;
struct sVar* __result_obj__260;
struct sVar* result_393;
struct sVar* __result_obj__261;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_392,0,sizeof(struct sVar*));
        __result_obj__259 = result_392;
        return __result_obj__259;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__260 = self->it->item;
        return __result_obj__260;
    }
    memset(&result_393,0,sizeof(struct sVar*));
    __result_obj__261 = result_393;
    return __result_obj__261;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_394;
struct list_item$1sVar$ph* prev_it_395;
    it_394=self->head;
    while(it_394!=((void*)0)) {
        prev_it_395=it_394;
        it_394=it_394->next;
        come_call_finalizer3(prev_it_395,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_396;
struct list_item$1sVar$ph* prev_it_397;
    it_396=self->head;
    while(it_396!=((void*)0)) {
        prev_it_397=it_396;
        it_396=it_396->next;
        come_call_finalizer3(prev_it_397,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value325 = (void*)0;
char* __dec_obj53;
struct sOutputNode* __result_obj__262;
    ((struct sNodeBase*)(__right_value325=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value325,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__262 = come_increment_ref_count(self);
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    (contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__262,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value326 = (void*)0;
char* __result_obj__263;
    __result_obj__263 = come_increment_ref_count(((char*)(__right_value326=__builtin_string("sOutputNode"))));
    (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__263 = come_decrement_ref_count2(__result_obj__263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value327 = (void*)0;
char* __dec_obj54;
struct list$1sNode$ph* __dec_obj55;
struct sInlineAssembler* __result_obj__264;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj54=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj55,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    (source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value328 = (void*)0;
char* __result_obj__265;
    __result_obj__265 = come_increment_ref_count(((char*)(__right_value328=__builtin_string("sInlineAssembler"))));
    (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__265 = come_decrement_ref_count2(__result_obj__265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_402;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* buf_404;
char* p_405;
_Bool dquort_406;
int num_exp_407;
void* __right_value333 = (void*)0;
struct sNode* node_408;
_Bool Value_412;
_Bool __result_obj__268;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj56;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__270;
    source_402=(char*)come_increment_ref_count(self->source);
    come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 188, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_404=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 190, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    p_405=source_402;
    while(*p_405!=40) {
        buffer_append_char(buf_404,*p_405);
        p_405++;
    }
    if(    *p_405==40) {
        buffer_append_char(buf_404,*p_405);
        p_405++;
        while(*p_405==32||*p_405==9||*p_405==10) {
            buffer_append_char(buf_404,*p_405);
            p_405++;
        }
    }
    dquort_406=(_Bool)0;
    num_exp_407=0;
    while(*p_405) {
        if(        *p_405==34) {
            buffer_append_char(buf_404,*p_405);
            p_405++;
            dquort_406=!dquort_406;
        }
        else if(        dquort_406) {
            buffer_append_char(buf_404,*p_405);
            p_405++;
        }
        else if(        *p_405==40) {
            buffer_append_char(buf_404,*p_405);
            p_405++;
            node_408=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_407++));
            Value_412=node_compile(node_408,info);
            if(            !Value_412) {
                __result_obj__268 = (_Bool)0;
                ((node_408) ? node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_402 = come_decrement_ref_count2(source_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__268;
            }
            else {
            }
            come_value_413=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_404,come_value_413->c_value);
            if(            *p_405==41) {
                buffer_append_char(buf_404,*p_405);
                p_405++;
            }
            ((node_408) ? node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_404,*p_405);
            p_405++;
        }
    }
    __dec_obj56=come_value_403->c_value;
    come_value_403->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value335=buffer_to_string(buf_404)))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj57=come_value_403->type;
    come_value_403->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 247, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_403->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
    add_come_last_code(info,"%s",come_value_403->c_value);
    __result_obj__270 = (_Bool)1;
    (source_402 = come_decrement_ref_count2(source_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__270;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_409;
int i_410;
struct sNode* __result_obj__266;
struct sNode* default_value_411;
struct sNode* __result_obj__267;
default_value_411 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_409=self->head;
    i_410=0;
    while(it_409!=((void*)0)) {
        if(        position==i_410) {
            __result_obj__266 = come_increment_ref_count(it_409->item);
            ((__result_obj__266) ? __result_obj__266 = come_decrement_ref_count2(__result_obj__266, ((struct sNode*)__result_obj__266)->finalize, ((struct sNode*)__result_obj__266)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__266;
        }
        it_409=it_409->next;
        i_410++;
    }
    memset(&default_value_411,0,sizeof(struct sNode*));
    __result_obj__267 = come_increment_ref_count(default_value_411);
    ((default_value_411) ? default_value_411 = come_decrement_ref_count2(default_value_411, ((struct sNode*)default_value_411)->finalize, ((struct sNode*)default_value_411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__267) ? __result_obj__267 = come_decrement_ref_count2(__result_obj__267, ((struct sNode*)__result_obj__267)->finalize, ((struct sNode*)__result_obj__267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__267;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value340 = (void*)0;
struct list_item$1CVALUE$ph* litem_414;
struct CVALUE* __dec_obj58;
void* __right_value341 = (void*)0;
struct list_item$1CVALUE$ph* litem_415;
struct CVALUE* __dec_obj59;
void* __right_value342 = (void*)0;
struct list_item$1CVALUE$ph* litem_416;
struct CVALUE* __dec_obj60;
struct list$1CVALUE$ph* __result_obj__269;
    if(    self->len==0) {
        litem_414=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value340=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=((void*)0);
        litem_414->next=((void*)0);
        __dec_obj58=litem_414->item;
        litem_414->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_414;
        self->head=litem_414;
    }
    else if(    self->len==1) {
        litem_415=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value341=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->head;
        litem_415->next=((void*)0);
        __dec_obj59=litem_415->item;
        litem_415->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_415;
        self->head->next=litem_415;
    }
    else {
        litem_416=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value342=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->tail;
        litem_416->next=((void*)0);
        __dec_obj60=litem_416->item;
        litem_416->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_416;
        self->tail=litem_416;
    }
    self->len++;
    __result_obj__269 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__269;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value343 = (void*)0;
struct sCurrentNode2* __result_obj__271;
    ((struct sNodeBase*)(__right_value343=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value343,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__271 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value344 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = come_increment_ref_count(((char*)(__right_value344=__builtin_string(self->sname))));
    (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count2(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value345 = (void*)0;
char* __result_obj__273;
    __result_obj__273 = come_increment_ref_count(((char*)(__right_value345=__builtin_string("sCurrentNode"))));
    (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__273 = come_decrement_ref_count2(__result_obj__273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value346 = (void*)0;
char* class_name_417;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sClass* current_stack_418;
struct sVarTable* vtable_419;
struct map$2char$phsVar$ph* o2_saved_420;
char* it_423;
char* key_426;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sVar* value_427;
void* __right_value351 = (void*)0;
struct sType* type2_431;
void* __right_value352 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple2$2char$phsType$ph* item_432;
void* __right_value358 = (void*)0;
struct sType* type3_443;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct tuple2$2char$phsType$ph* item2_446;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_495;
char* it_496;
char* key_497;
void* __right_value372 = (void*)0;
struct sVar* value_498;
void* __right_value373 = (void*)0;
struct sType* type2_499;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct tuple2$2char$phsType$ph* item_500;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_501;
void* __right_value378 = (void*)0;
char* __dec_obj68;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__310;
    info->current_stack_num++;
    class_name_417=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_418=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 426, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(class_name_417),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_419=info->lv_table;
    while(vtable_419) {
        for(        o2_saved_420=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_419->mVars)),it_423=map$2char$phsVar$ph$p_begin((o2_saved_420));        !map$2char$phsVar$ph$p_end((o2_saved_420));        it_423=map$2char$phsVar$ph$p_next((o2_saved_420))        ){
            key_426=it_423;
            value_427=((struct sVar*)(__right_value350=map$2char$phsVar$ph$p_operator_load_element(vtable_419->mVars,((char*)(__right_value349=__builtin_string(key_426))))));
            (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value350,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_427->mType));
            type2_431->mPointerNum++;
            item_432=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 439, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_427->mCValueName)),(struct sType*)come_increment_ref_count(type2_431)));
            if(            value_427->mCValueName!=((void*)0)) {
                if(                strcmp(value_427->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_427->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_427->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_427->mType->mClass->mName,"va_list")||string_operator_equals(value_427->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_431->mArrayNum)==1) {
                    type3_443=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_431));
                    list$1sNode$ph$p_reset(type3_443->mArrayNum);
                    type3_443->mPointerNum=1;
                    type3_443->mOriginIsArray=(_Bool)1;
                    item2_446=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 459, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_427->mCValueName)),(struct sType*)come_increment_ref_count(type3_443)));
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_418->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_446)));
                    value_427->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_446,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_418->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_432)));
                }
            }
            come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_432,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_420,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_419=vtable_419->mParent;
    }
    output_struct(current_stack_418,info);
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_417),(struct sClass*)come_increment_ref_count(current_stack_418));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_417,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_417);
    vtable_419=info->lv_table;
    while(vtable_419) {
        for(        o2_saved_495=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_419->mVars)),it_496=map$2char$phsVar$ph$p_begin((o2_saved_495));        !map$2char$phsVar$ph$p_end((o2_saved_495));        it_496=map$2char$phsVar$ph$p_next((o2_saved_495))        ){
            key_497=it_496;
            value_498=((struct sVar*)(__right_value372=map$2char$phsVar$ph$p_operator_load_element(vtable_419->mVars,key_497)));
            come_call_finalizer3(__right_value372,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_499=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_498->mType));
            item_500=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 488, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_498->mCValueName),(struct sType*)come_increment_ref_count(type2_499)));
            if(            value_498->mCValueName!=((void*)0)) {
                if(                strcmp(value_498->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_498->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_498->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_498->mType->mClass->mName,"va_list")||string_operator_equals(value_498->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_499->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_498->mCValueName,value_498->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_498->mCValueName,value_498->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_499,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_500,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_495,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_419=vtable_419->mParent;
    }
    come_value_501=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 517, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj68=come_value_501->c_value;
    come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj69=come_value_501->type;
    come_value_501->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 520, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(class_name_417),(_Bool)0,info));
    come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_501->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_501->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_501));
    __result_obj__310 = (_Bool)1;
    (class_name_417 = come_decrement_ref_count2(class_name_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_418,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__310;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_421;
char* __result_obj__274;
char* __result_obj__275;
char* result_422;
char* __result_obj__276;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_421,0,sizeof(char*));
        __result_obj__274 = result_421;
        return __result_obj__274;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__275 = self->key_list->it->item;
        return __result_obj__275;
    }
    memset(&result_422,0,sizeof(char*));
    __result_obj__276 = result_422;
    return __result_obj__276;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_424;
char* __result_obj__277;
char* __result_obj__278;
char* result_425;
char* __result_obj__279;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_424,0,sizeof(char*));
        __result_obj__277 = result_424;
        return __result_obj__277;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__278 = self->key_list->it->item;
        return __result_obj__278;
    }
    memset(&result_425,0,sizeof(char*));
    __result_obj__279 = result_425;
    return __result_obj__279;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_428;
unsigned int hash_429;
unsigned int it_430;
struct sVar* __result_obj__280;
struct sVar* __result_obj__281;
struct sVar* __result_obj__282;
struct sVar* __result_obj__283;
default_value_428 = (void*)0;
    memset(&default_value_428,0,sizeof(struct sVar*));
    hash_429=string_get_hash_key(((char*)key))%self->size;
    it_430=hash_429;
    while((_Bool)1) {
        if(        self->item_existance[it_430]) {
            if(            string_equals(self->keys[it_430],key)) {
                __result_obj__280 = come_increment_ref_count(self->items[it_430]);
                come_call_finalizer3(default_value_428,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__280,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__280;
            }
            it_430++;
            if(            it_430>=self->size) {
                it_430=0;
            }
            else if(            it_430==hash_429) {
                __result_obj__281 = come_increment_ref_count(default_value_428);
                come_call_finalizer3(default_value_428,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__281,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__281;
            }
        }
        else {
            __result_obj__282 = come_increment_ref_count(default_value_428);
            come_call_finalizer3(default_value_428,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__282,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__282;
        }
    }
    __result_obj__283 = come_increment_ref_count(default_value_428);
    come_call_finalizer3(default_value_428,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__283,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__283;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__284;
void* __right_value353 = (void*)0;
struct tuple2$2char$phsType$ph* result_433;
void* __right_value354 = (void*)0;
char* __dec_obj61;
void* __right_value355 = (void*)0;
struct sType* __dec_obj62;
struct tuple2$2char$phsType$ph* __result_obj__285;
    if(    self==(void*)0) {
        __result_obj__284 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__284,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__284;
    }
    result_433=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj61=result_433->v1;
        result_433->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj62=result_433->v2;
        result_433->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__285 = come_increment_ref_count(result_433);
    come_call_finalizer3(result_433,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__285,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__285;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_434;
    result_434=0;
    result_434+=int_get_hash_key(((int)self->v1));
    result_434+=int_get_hash_key(((int)self->v2));
    return result_434;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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
    if(    !list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_435;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_436;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_435=left->head;
    it2_436=right->head;
    while(it_435!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_435->item,it2_436->item)) {
            return (_Bool)0;
        }
        it_435=it_435->next;
        it2_436=it2_436->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_437;
struct list_item$1sType$ph* it2_438;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_437=left->head;
    it2_438=right->head;
    while(it_437!=((void*)0)) {
        if(        !sType_equals(it_437->item,it2_438->item)) {
            return (_Bool)0;
        }
        it_437=it_437->next;
        it2_438=it2_438->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_439;
struct list_item$1sNode$ph* it2_440;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_439=left->head;
    it2_440=right->head;
    while(it_439!=((void*)0)) {
        if(        !sNode_equals(it_439->item,it2_440->item)) {
            return (_Bool)0;
        }
        it_439=it_439->next;
        it2_440=it2_440->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_441;
struct list_item$1char$ph* it2_442;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_441=left->head;
    it2_442=right->head;
    while(it_441!=((void*)0)) {
        if(        !string_equals(it_441->item,it2_442->item)) {
            return (_Bool)0;
        }
        it_441=it_441->next;
        it2_442=it2_442->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj63;
struct sType* __dec_obj64;
struct tuple2$2char$phsType$ph* __result_obj__286;
    __dec_obj63=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj64=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__286 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__286,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_444;
struct list_item$1sNode$ph* prev_it_445;
struct list$1sNode$ph* __result_obj__287;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        come_call_finalizer3(prev_it_445,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__287 = self;
    return __result_obj__287;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value362 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_447;
struct tuple2$2char$phsType$ph* __dec_obj65;
void* __right_value363 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_448;
struct tuple2$2char$phsType$ph* __dec_obj66;
void* __right_value364 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_449;
struct tuple2$2char$phsType$ph* __dec_obj67;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__288;
    if(    self->len==0) {
        litem_447=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value362=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=((void*)0);
        litem_447->next=((void*)0);
        __dec_obj65=litem_447->item;
        litem_447->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_447;
        self->head=litem_447;
    }
    else if(    self->len==1) {
        litem_448=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value363=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->head;
        litem_448->next=((void*)0);
        __dec_obj66=litem_448->item;
        litem_448->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_448;
        self->head->next=litem_448;
    }
    else {
        litem_449=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value364=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=self->tail;
        litem_449->next=((void*)0);
        __dec_obj67=litem_449->item;
        litem_449->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_449;
        self->tail=litem_449;
    }
    self->len++;
    __result_obj__288 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__288;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_450;
int i_451;
    for(    i_450=0;    i_450<self->size;    i_450++    ){
        if(        self->item_existance[i_450]) {
            if(            1) {
                come_call_finalizer3(self->items[i_450],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_451=0;    i_451<self->size;    i_451++    ){
        if(        self->item_existance[i_451]) {
            if(            1) {
                (self->keys[i_451] = come_decrement_ref_count2(self->keys[i_451], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_471;
unsigned int it_472;
_Bool same_key_exist_489;
char* it2_492;
struct map$2char$phsClass$ph* __result_obj__309;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_471=string_get_hash_key(((char*)key))%self->size;
    it_472=hash_471;
    while((_Bool)1) {
        if(        self->item_existance[it_472]) {
            if(            string_equals(self->keys[it_472],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_472]);
                    (self->keys[it_472] = come_decrement_ref_count2(self->keys[it_472], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_472]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_472]);
                    self->keys[it_472]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_472],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_472]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_472]=item;
                }
                break;
            }
            it_472++;
            if(            it_472>=self->size) {
                it_472=0;
            }
            else if(            it_472==hash_471) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_472]=(_Bool)1;
            if(            1) {
                self->keys[it_472]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_472]=key;
            }
            if(            1) {
                self->items[it_472]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_472]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_489=(_Bool)0;
    for(    it2_492=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_492=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_492,key)) {
            same_key_exist_489=(_Bool)1;
        }
    }
    if(    !same_key_exist_489) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__309 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__309;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_452;
void* __right_value367 = (void*)0;
char** keys_453;
void* __right_value368 = (void*)0;
struct sClass** items_454;
void* __right_value369 = (void*)0;
_Bool* item_existance_455;
int len_456;
char* it_459;
struct sClass* default_value_462;
void* __right_value370 = (void*)0;
struct sClass* it2_463;
unsigned int hash_468;
int n_469;
struct sClass* default_value_470;
void* __right_value371 = (void*)0;
default_value_462 = (void*)0;
default_value_470 = (void*)0;
    size_452=self->size*10;
    keys_453=(char**)come_increment_ref_count(((char**)(__right_value367=(char**)come_calloc(1, sizeof(char*)*(1*(size_452)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_454=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value368=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_452)), "/usr/local/include/comelang.h", 2935, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_455=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value369=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_452)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_456=0;
    for(    it_459=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_459=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_462,0,sizeof(struct sClass*));
        it2_463=((struct sClass*)(__right_value370=map$2char$phsClass$ph$p_at(self,it_459,(struct sClass*)come_increment_ref_count(default_value_462))));
        come_call_finalizer3(__right_value370,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_468=string_get_hash_key(((char*)it_459))%size_452;
        n_469=hash_468;
        while((_Bool)1) {
            if(            item_existance_455[n_469]) {
                n_469++;
                if(                n_469>=size_452) {
                    n_469=0;
                }
                else if(                n_469==hash_468) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_455[n_469]=(_Bool)1;
                keys_453[n_469]=it_459;
                items_454[n_469]=((struct sClass*)(__right_value371=map$2char$phsClass$ph$p_at(self,it_459,(struct sClass*)come_increment_ref_count(default_value_470))));
                come_call_finalizer3(__right_value371,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_456++;
                come_call_finalizer3(default_value_470,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_470,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_462,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_453;
    self->items=items_454;
    self->item_existance=item_existance_455;
    self->size=size_452;
    self->len=len_456;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_457;
char* __result_obj__289;
char* __result_obj__290;
char* result_458;
char* __result_obj__291;
result_457 = (void*)0;
result_458 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_457,0,sizeof(char*));
        __result_obj__289 = result_457;
        return __result_obj__289;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__290 = self->key_list->it->item;
        return __result_obj__290;
    }
    memset(&result_458,0,sizeof(char*));
    __result_obj__291 = result_458;
    return __result_obj__291;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_460;
char* __result_obj__292;
char* __result_obj__293;
char* result_461;
char* __result_obj__294;
result_460 = (void*)0;
result_461 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_460,0,sizeof(char*));
        __result_obj__292 = result_460;
        return __result_obj__292;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__293 = self->key_list->it->item;
        return __result_obj__293;
    }
    memset(&result_461,0,sizeof(char*));
    __result_obj__294 = result_461;
    return __result_obj__294;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_464;
unsigned int it_465;
struct sClass* __result_obj__295;
struct sClass* __result_obj__296;
struct sClass* __result_obj__297;
struct sClass* __result_obj__298;
    hash_464=string_get_hash_key(((char*)key))%self->size;
    it_465=hash_464;
    while((_Bool)1) {
        if(        self->item_existance[it_465]) {
            if(            string_equals(self->keys[it_465],key)) {
                __result_obj__295 = come_increment_ref_count(self->items[it_465]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__295,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__295;
            }
            it_465++;
            if(            it_465>=self->size) {
                it_465=0;
            }
            else if(            it_465==hash_464) {
                __result_obj__296 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__296,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__296;
            }
        }
        else {
            __result_obj__297 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__297,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__297;
        }
    }
    __result_obj__298 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__298,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__298;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_466;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_467;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        come_call_finalizer3(prev_it_467,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_473;
struct list_item$1char$p* it_474;
struct list$1char$p* __result_obj__302;
    it2_473=0;
    it_474=self->head;
    while(it_474!=((void*)0)) {
        if(        charp_equals(it_474->item,item)) {
            list$1char$p$p_delete(self,it2_473,it2_473+1);
            break;
        }
        it2_473++;
        it_474=it_474->next;
    }
    __result_obj__302 = self;
    return __result_obj__302;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_475;
struct list$1char$p* __result_obj__299;
struct list_item$1char$p* it_478;
int i_479;
struct list_item$1char$p* prev_it_480;
struct list_item$1char$p* it_481;
int i_482;
struct list_item$1char$p* prev_it_483;
struct list_item$1char$p* it_484;
struct list_item$1char$p* head_prev_it_485;
struct list_item$1char$p* tail_it_486;
int i_487;
struct list_item$1char$p* prev_it_488;
struct list$1char$p* __result_obj__301;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_475=tail;
        tail=head;
        head=tmp_475;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__299 = self;
        return __result_obj__299;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_478=self->head;
        i_479=0;
        while(it_478!=((void*)0)) {
            if(            i_479<tail) {
                prev_it_480=it_478;
                it_478=it_478->next;
                i_479++;
                come_call_finalizer3(prev_it_480,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_479==tail) {
                self->head=it_478;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_478=it_478->next;
                i_479++;
            }
        }
    }
    else if(    tail==self->len) {
        it_481=self->head;
        i_482=0;
        while(it_481!=((void*)0)) {
            if(            i_482==head) {
                self->tail=it_481->prev;
                self->tail->next=((void*)0);
            }
            if(            i_482>=head) {
                prev_it_483=it_481;
                it_481=it_481->next;
                i_482++;
                come_call_finalizer3(prev_it_483,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_481=it_481->next;
                i_482++;
            }
        }
    }
    else {
        it_484=self->head;
        head_prev_it_485=((void*)0);
        tail_it_486=((void*)0);
        i_487=0;
        while(it_484!=((void*)0)) {
            if(            i_487==head) {
                head_prev_it_485=it_484->prev;
            }
            if(            i_487==tail) {
                tail_it_486=it_484;
            }
            if(            i_487>=head&&i_487<tail) {
                prev_it_488=it_484;
                it_484=it_484->next;
                i_487++;
                come_call_finalizer3(prev_it_488,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_484=it_484->next;
                i_487++;
            }
        }
        if(        head_prev_it_485!=((void*)0)) {
            head_prev_it_485->next=tail_it_486;
        }
        if(        tail_it_486!=((void*)0)) {
            tail_it_486->prev=head_prev_it_485;
        }
    }
    __result_obj__301 = self;
    return __result_obj__301;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_476;
struct list_item$1char$p* prev_it_477;
struct list$1char$p* __result_obj__300;
    it_476=self->head;
    while(it_476!=((void*)0)) {
        prev_it_477=it_476;
        it_476=it_476->next;
        come_call_finalizer3(prev_it_477,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__300 = self;
    return __result_obj__300;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_490;
char* __result_obj__303;
char* __result_obj__304;
char* result_491;
char* __result_obj__305;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_490,0,sizeof(char*));
        __result_obj__303 = result_490;
        return __result_obj__303;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__304 = self->it->item;
        return __result_obj__304;
    }
    memset(&result_491,0,sizeof(char*));
    __result_obj__305 = result_491;
    return __result_obj__305;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_493;
char* __result_obj__306;
char* __result_obj__307;
char* result_494;
char* __result_obj__308;
result_493 = (void*)0;
result_494 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_493,0,sizeof(char*));
        __result_obj__306 = result_493;
        return __result_obj__306;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__307 = self->it->item;
        return __result_obj__307;
    }
    memset(&result_494,0,sizeof(char*));
    __result_obj__308 = result_494;
    return __result_obj__308;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value381 = (void*)0;
struct sLineNode* __result_obj__311;
    ((struct sNodeBase*)(__right_value381=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value381,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value382 = (void*)0;
char* __result_obj__312;
    __result_obj__312 = come_increment_ref_count(((char*)(__right_value382=__builtin_string("sLineNode"))));
    (__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__312 = come_decrement_ref_count2(__result_obj__312, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__312;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value385 = (void*)0;
char* __dec_obj70;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__313;
    come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 277, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj70=come_value_502->c_value;
    come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj71=come_value_502->type;
    come_value_502->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 280, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_502->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
    add_come_last_code(info,"%s",come_value_502->c_value);
    __result_obj__313 = (_Bool)1;
    come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__313;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value389 = (void*)0;
struct sSNameNode* __result_obj__314;
    ((struct sNodeBase*)(__right_value389=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value389,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__314 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__314,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value390 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = come_increment_ref_count(((char*)(__right_value390=__builtin_string("sSNameNode"))));
    (__right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__315 = come_decrement_ref_count2(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_503;
void* __right_value393 = (void*)0;
char* __dec_obj72;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__316;
    come_value_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 305, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj72=come_value_503->c_value;
    come_value_503->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj73=come_value_503->type;
    come_value_503->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 308, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_503->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_503));
    add_come_last_code(info,"%s",come_value_503->c_value);
    __result_obj__316 = (_Bool)1;
    come_call_finalizer3(come_value_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__316;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value397 = (void*)0;
struct sFuncNode* __result_obj__317;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value398 = (void*)0;
char* __result_obj__318;
    __result_obj__318 = come_increment_ref_count(((char*)(__right_value398=__builtin_string("sFuncNode"))));
    (__right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__318;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_504;
void* __right_value401 = (void*)0;
char* __dec_obj74;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__319;
    come_value_504=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 333, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj74=come_value_504->c_value;
    come_value_504->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj75=come_value_504->type;
    come_value_504->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 336, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_504->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_504));
    add_come_last_code(info,"%s",come_value_504->c_value);
    __result_obj__319 = (_Bool)1;
    come_call_finalizer3(come_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__319;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value405 = (void*)0;
struct sWildCard* __result_obj__320;
    ((struct sNodeBase*)(__right_value405=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value405,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__320 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__320,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__320;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value406 = (void*)0;
char* __result_obj__321;
    __result_obj__321 = come_increment_ref_count(((char*)(__right_value406=__builtin_string("sWildCard"))));
    (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__321 = come_decrement_ref_count2(__result_obj__321, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__321;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sNode* value_node_505;
_Bool Value_506;
_Bool __result_obj__322;
_Bool __result_obj__323;
    value_node_505=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value407=xsprintf("Value"))),info));
    (__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_506=node_compile(value_node_505,info);
    if(    !Value_506) {
        __result_obj__322 = (_Bool)0;
        ((value_node_505) ? value_node_505 = come_decrement_ref_count2(value_node_505, ((struct sNode*)value_node_505)->finalize, ((struct sNode*)value_node_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__322;
    }
    else {
    }
    __result_obj__323 = (_Bool)1;
    ((value_node_505) ? value_node_505 = come_decrement_ref_count2(value_node_505, ((struct sNode*)value_node_505)->finalize, ((struct sNode*)value_node_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__323;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value409 = (void*)0;
struct sCallerFuncNode* __result_obj__324;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value409,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__324 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value410 = (void*)0;
char* __result_obj__325;
    __result_obj__325 = come_increment_ref_count(((char*)(__right_value410=__builtin_string("sCallerFuncNode"))));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__325 = come_decrement_ref_count2(__result_obj__325, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__325;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value413 = (void*)0;
char* __dec_obj76;
void* __right_value414 = (void*)0;
char* __dec_obj77;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__326;
    come_value_507=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 385, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj76=come_value_507->c_value;
        come_value_507->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj77=come_value_507->c_value;
        come_value_507->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj78=come_value_507->type;
    come_value_507->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 393, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_507->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_507));
    add_come_last_code(info,"%s",come_value_507->c_value);
    __result_obj__326 = (_Bool)1;
    come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__326;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value418 = (void*)0;
struct sCallerLineNode* __result_obj__327;
    ((struct sNodeBase*)(__right_value418=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value418,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__327 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__327,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_508;
void* __right_value421 = (void*)0;
char* __dec_obj79;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sType* __dec_obj80;
_Bool __result_obj__328;
    come_value_508=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 414, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj79=come_value_508->c_value;
    come_value_508->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_508->type;
    come_value_508->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 417, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_508->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_508));
    add_come_last_code(info,"%s",come_value_508->c_value);
    __result_obj__328 = (_Bool)1;
    come_call_finalizer3(come_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__328;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value425 = (void*)0;
char* __result_obj__329;
    __result_obj__329 = come_increment_ref_count(((char*)(__right_value425=__builtin_string("sCallerLineNode"))));
    (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__329 = come_decrement_ref_count2(__result_obj__329, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__329;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value426 = (void*)0;
struct sCallerSNameNode* __result_obj__330;
    ((struct sNodeBase*)(__right_value426=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value426,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__330 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__330,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__330;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_509;
void* __right_value429 = (void*)0;
char* __dec_obj81;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__331;
    come_value_509=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 442, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj81=come_value_509->c_value;
    come_value_509->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj82=come_value_509->type;
    come_value_509->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 445, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_509->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_509));
    add_come_last_code(info,"%s",come_value_509->c_value);
    __result_obj__331 = (_Bool)1;
    come_call_finalizer3(come_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__331;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value433 = (void*)0;
char* __result_obj__332;
    __result_obj__332 = come_increment_ref_count(((char*)(__right_value433=__builtin_string("sCallerSNameNode"))));
    (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__332 = come_decrement_ref_count2(__result_obj__332, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__332;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
char* __dec_obj83;
void* __right_value446 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj89;
struct list$1sType$ph* __dec_obj90;
struct buffer* __dec_obj91;
struct sFunCallNode* __result_obj__339;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value434,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj83=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj89,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj90=self->method_generics_types;
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj90,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj91=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj91,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__339 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__339,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value447 = (void*)0;
char* __result_obj__340;
    __result_obj__340 = come_increment_ref_count(((char*)(__right_value447=__builtin_string("sFunCallNode"))));
    (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__340 = come_decrement_ref_count2(__result_obj__340, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__340;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_520;
struct list$1tuple2$2char$phsNode$ph$ph* params_521;
struct buffer* method_block_522;
int method_block_sline_523;
struct sVar* var__524;
struct sType* lambda_type_525;
void* __right_value448 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_526=0;
char* Err_527=0;
_Bool _if_conditional3;
_Bool __result_obj__341;
void* __right_value449 = (void*)0;
struct sType* result_type_528;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1CVALUE$ph* come_params_529;
void* __right_value452 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_532=0;
char* Err_533=0;
_Bool _if_conditional4;
_Bool __result_obj__343;
int i_534;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_535;
struct tuple2$2char$phsNode$ph* it_538;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_541=0;
struct sNode* node_542=0;
_Bool Value_543;
_Bool __result_obj__350;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_544;
void* __right_value454 = (void*)0;
_Bool _if_conditional5;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_548=0;
char* Err_549=0;
_Bool _if_conditional6;
_Bool __result_obj__353;
void* __right_value460 = (void*)0;
_Bool _if_conditional7;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct buffer* buf_550;
int j_551;
struct list$1CVALUE$ph* o2_saved_552;
struct CVALUE* it_555;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_558;
void* __right_value466 = (void*)0;
char* __dec_obj92;
void* __right_value467 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__360;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sGenericsFun* generics_fun_559;
_Bool method_generics_562;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1sType$ph* method_generics_types_563;
void* __right_value472 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_564=0;
struct sGenericsFun* gfun_565=0;
char* generics_fun_name_566;
void* __right_value473 = (void*)0;
struct sFun* fun_567;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1CVALUE$ph* come_params_570;
void* __right_value476 = (void*)0;
struct sFun* fun_571;
_Bool no_output_come_code_572;
_Bool __result_obj__369;
void* __right_value477 = (void*)0;
struct CVALUE* method_block_node_573;
void* __right_value478 = (void*)0;
struct sType* method_block_lambda_type_577;
void* __right_value479 = (void*)0;
struct sType* method_block_result_type_578;
void* __right_value480 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_579;
struct sType* generics_fun_method_block_result_type_580;
int method_generics_num_581;
void* __right_value484 = (void*)0;
int n_590;
struct list$1sType$ph* o2_saved_591;
struct sType* it_594;
int method_generics_num_597;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1CVALUE$ph* come_params_598;
int i_599;
struct sType* result_type_600;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_601;
struct tuple2$2char$phsNode$ph* it_602;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_603=0;
struct sNode* node_604=0;
_Bool Value_605;
_Bool __result_obj__381;
void* __right_value489 = (void*)0;
struct CVALUE* come_value_606;
int method_generics_num_610;
void* __right_value493 = (void*)0;
int n_611;
struct list$1sType$ph* o2_saved_612;
struct sType* it_613;
int method_generics_num_614;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_617=0;
struct sGenericsFun* gfun_618=0;
char* __dec_obj101;
void* __right_value497 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_619=0;
struct sGenericsFun* gfun_620=0;
char* __dec_obj102;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1CVALUE$ph* come_params_621;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_622;
struct tuple2$2char$phsNode$ph* it_623;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_624=0;
struct sNode* node_625=0;
_Bool Value_626;
_Bool __result_obj__384;
void* __right_value500 = (void*)0;
struct CVALUE* come_value_627;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct buffer* buf_628;
int j_629;
struct list$1CVALUE$ph* o2_saved_630;
struct CVALUE* it_631;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_632;
void* __right_value505 = (void*)0;
char* __dec_obj103;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj104;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj105;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj106;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj107;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj108;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj109;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj110;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj111;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj112;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj113;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj114;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj115;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj116;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj117;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* __dec_obj118;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj119;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj120;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sType* __dec_obj121;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj122;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* __dec_obj123;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* __dec_obj124;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* __dec_obj125;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __dec_obj126;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj127;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* __dec_obj128;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* __dec_obj129;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj130;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* __dec_obj131;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj132;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj133;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* __dec_obj134;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* __dec_obj135;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __dec_obj136;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sType* __dec_obj137;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* __dec_obj138;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sType* __dec_obj139;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sType* __dec_obj140;
_Bool __result_obj__385;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1CVALUE$ph* come_params_633;
int i_634;
struct sType* result_type_635;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_636;
struct tuple2$2char$phsNode$ph* it_637;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_638=0;
struct sNode* node_639=0;
_Bool Value_640;
_Bool __result_obj__386;
void* __right_value610 = (void*)0;
struct CVALUE* come_value_641;
struct sType* __dec_obj141;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct buffer* buf_642;
int j_643;
struct list$1CVALUE$ph* o2_saved_644;
struct CVALUE* it_645;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value615 = (void*)0;
char* __dec_obj142;
struct sType* __dec_obj143;
_Bool __result_obj__387;
void* __right_value616 = (void*)0;
char* __dec_obj144;
void* __right_value617 = (void*)0;
char* __dec_obj145;
char* p_647;
int version_648;
char* p2_649;
int i_651;
void* __right_value618 = (void*)0;
char* new_fun_name_652;
void* __right_value619 = (void*)0;
_Bool _if_conditional8;
void* __right_value620 = (void*)0;
char* __dec_obj146;
void* __right_value621 = (void*)0;
char* new_fun_name_656;
void* __right_value622 = (void*)0;
_Bool _if_conditional9;
void* __right_value623 = (void*)0;
char* __dec_obj147;
void* __right_value624 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_657=0;
char* Err_658=0;
_Bool _if_conditional10;
_Bool __result_obj__392;
int i_659;
void* __right_value625 = (void*)0;
char* new_fun_name_660;
void* __right_value626 = (void*)0;
_Bool _if_conditional11;
void* __right_value627 = (void*)0;
char* __dec_obj148;
void* __right_value628 = (void*)0;
struct sFun* fun_661;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct list$1CVALUE$ph* come_params_662;
int i_663;
struct sType* result_type_664;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_665;
struct tuple2$2char$phsNode$ph* it_666;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_667=0;
struct sNode* node_668=0;
_Bool Value_669;
_Bool __result_obj__393;
void* __right_value631 = (void*)0;
struct CVALUE* come_value_670;
struct sType* __dec_obj149;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct buffer* buf_671;
int j_672;
struct list$1CVALUE$ph* o2_saved_673;
struct CVALUE* it_674;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct CVALUE* come_value_675;
void* __right_value636 = (void*)0;
char* __dec_obj150;
struct sType* __dec_obj151;
_Bool __result_obj__394;
void* __right_value637 = (void*)0;
struct sType* result_type_676;
_Bool in_exception_value_677;
void* __right_value644 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* new_node_678;
_Bool Value_680;
_Bool __result_obj__397;
_Bool __result_obj__398;
_Bool in_exception_value_681;
void* __right_value647 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sNode* new_node_682;
_Bool Value_683;
_Bool __result_obj__399;
_Bool __result_obj__400;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1sType$ph* param_types_684;
struct list$1sType$ph* o2_saved_685;
struct sType* it_686;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sType* it2_687;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __dec_obj157;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1CVALUE$ph* come_params_688;
int i_689;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_690;
struct tuple2$2char$phsNode$ph* it_691;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_692=0;
struct sNode* node_693=0;
_Bool Value_694;
_Bool __result_obj__401;
void* __right_value658 = (void*)0;
struct CVALUE* come_value_695;
int n_696;
struct list$1char$ph* o2_saved_697;
char* it_700;
void* __right_value659 = (void*)0;
_Bool _if_conditional12;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_703=0;
char* Err_704=0;
_Bool _if_conditional13;
_Bool __result_obj__408;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
_Bool _if_conditional14;
void* __right_value667 = (void*)0;
int i_710;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_711;
struct tuple2$2char$phsNode$ph* it_712;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_713=0;
struct sNode* node_714=0;
_Bool Value_715;
_Bool __result_obj__411;
void* __right_value668 = (void*)0;
struct CVALUE* come_value_716;
void* __right_value669 = (void*)0;
_Bool _if_conditional15;
_Bool Value_717;
_Bool __result_obj__412;
void* __right_value670 = (void*)0;
struct CVALUE* come_value_718;
void* __right_value671 = (void*)0;
_Bool _if_conditional16;
void* __right_value672 = (void*)0;
_Bool _if_conditional17;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_719=0;
char* Err_720=0;
_Bool _if_conditional18;
_Bool __result_obj__413;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
_Bool _if_conditional19;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
_Bool _if_conditional20;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* default_param_721;
void* __right_value684 = (void*)0;
char* param_name_725;
void* __right_value685 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_726;
char* p_727;
char* head_728;
int sline_729;
void* __right_value686 = (void*)0;
struct buffer* __dec_obj159;
void* __right_value687 = (void*)0;
struct sNode* node_730;
_Bool Value_731;
_Bool __result_obj__416;
struct buffer* __dec_obj160;
void* __right_value688 = (void*)0;
struct CVALUE* come_value_732;
void* __right_value689 = (void*)0;
_Bool _if_conditional22;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_733=0;
char* Err_734=0;
_Bool _if_conditional23;
_Bool __result_obj__417;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
_Bool _if_conditional24;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
_Bool _if_conditional25;
void* __right_value699 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_735=0;
char* Err_736=0;
_Bool _if_conditional26;
_Bool __result_obj__418;
void* __right_value700 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_737=0;
char* Err_738=0;
_Bool _if_conditional27;
_Bool __result_obj__419;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value705 = (void*)0;
struct sNode* current_stack_frame_node_739;
_Bool Value_741;
_Bool __result_obj__422;
void* __right_value706 = (void*)0;
struct CVALUE* come_value_742;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct buffer* method_block2_743;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sType* method_block_type_744;
void* __right_value711 = (void*)0;
char* class_name_745;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sClass* current_stack_frame_struct_749;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_750=0;
char* Err_751=0;
_Bool _if_conditional28;
_Bool __result_obj__427;
void* __right_value716 = (void*)0;
struct sType* result_type_752;
void* __right_value717 = (void*)0;
struct list$1sType$ph* param_types_753;
struct list$1char$ph* param_names_754;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct buffer* all_alhabet_sname_755;
char* p_756;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1sType$ph* o2_saved_757;
struct sType* it_758;
struct sType* param_type_759;
void* __right_value722 = (void*)0;
char* param_name_760;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
char* param_name_761;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
char* param_name_762;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct buffer* source3_763;
char* p_764;
char* head_765;
int sline_766;
struct buffer* __dec_obj162;
void* __right_value729 = (void*)0;
struct sNode* node_767;
_Bool Value_768;
_Bool __result_obj__428;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* method_block_name_769;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct CVALUE* come_value2_770;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sFun* fun2_771;
void* __right_value736 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_772=0;
char* Err_773=0;
_Bool _if_conditional29;
_Bool __result_obj__429;
struct sType* method_block_type2_774;
void* __right_value737 = (void*)0;
char* __dec_obj163;
void* __right_value738 = (void*)0;
struct sType* __dec_obj164;
struct buffer* __dec_obj165;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* buf_775;
int j_776;
struct list$1CVALUE$ph* o2_saved_777;
struct CVALUE* it_778;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct CVALUE* come_value_779;
void* __right_value743 = (void*)0;
char* __dec_obj166;
void* __right_value744 = (void*)0;
struct sType* __dec_obj167;
void* __right_value745 = (void*)0;
char* __dec_obj168;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
char* __dec_obj169;
void* __right_value748 = (void*)0;
struct CVALUE* __dec_obj170;
_Bool __result_obj__430;
memset(&i_651, 0, sizeof(int));
    fun_name_520=(char*)come_increment_ref_count(self->fun_name);
    params_521=self->params;
    method_block_522=self->method_block;
    method_block_sline_523=self->method_block_sline;
    var__524=get_variable_from_table(info->lv_table,fun_name_520);
    if(    var__524==((void*)0)) {
        var__524=get_variable_from_table(info->gv_table,fun_name_520);
    }
    if(    var__524) {
        lambda_type_525=var__524->mType;
        if(        string_operator_not_equals(lambda_type_525->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value448=err_msg(info,"%s is not lambda, can't call",fun_name_520)));
            come_exception_var_2_526=multiple_assign_var2->v1;
            Err_527=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_527)),            come_call_finalizer3(__right_value448,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__341 = (_Bool)1;
                (Err_527 = come_decrement_ref_count2(Err_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__341;
            }
            else {
            }
            (Err_527 = come_decrement_ref_count2(Err_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_528=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_525->mResultType));
        result_type_528->mStatic=(_Bool)0;
        come_params_529=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 517, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1sType$ph$p_length(lambda_type_525->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_521)&&!lambda_type_525->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value452=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_520,list$1sType$ph$p_length(lambda_type_525->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_521))));
            come_exception_var_3_532=multiple_assign_var3->v1;
            Err_533=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_533)),            come_call_finalizer3(__right_value452,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result_obj__343 = (_Bool)1;
                (Err_533 = come_decrement_ref_count2(Err_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_529,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__343;
            }
            else {
            }
            (Err_533 = come_decrement_ref_count2(Err_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_534=0;
        for(        o2_saved_535=(params_521),it_538=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_535));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_535));        it_538=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_535))        ){
            multiple_assign_var4=it_538;
            label_541=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_542=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_543=node_compile(node_542,info);
            if(            !Value_543) {
                __result_obj__350 = (_Bool)0;
                (label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_542) ? node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_529,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__350;
            }
            else {
            }
            come_value_544=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_525->mVarArgs&&((struct sType*)(__right_value454=list$1sType$ph$p_operator_load_element(lambda_type_525->mParamTypes,i_534)))==((void*)0))),            come_call_finalizer3(__right_value454,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value459=check_assign_type(((char*)(__right_value457=xsprintf("\%s calling param #\%s",((char*)(__right_value455=string_to_string(fun_name_520))),((char*)(__right_value456=int_to_string(i_534)))))),((struct sType*)(__right_value458=list$1sType$ph$p_operator_load_element(lambda_type_525->mParamTypes,i_534))),come_value_544->type,come_value_544,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_4_548=multiple_assign_var5->v1;
                Err_549=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_549)),                (__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value458,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value459,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    __result_obj__353 = (_Bool)1;
                    (Err_549 = come_decrement_ref_count2(Err_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_542) ? node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_529,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__353;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value460=list$1sType$ph$p_operator_load_element(lambda_type_525->mParamTypes,i_534)))->mHeap&&come_value_544->type->mHeap)),                come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value461=list$1sType$ph$p_operator_load_element(lambda_type_525->mParamTypes,i_534))),come_value_544->type,come_value_544,info,(_Bool)1);
                    come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                (Err_549 = come_decrement_ref_count2(Err_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(come_params_529,(struct CVALUE*)come_increment_ref_count(come_value_544));
            i_534++;
            (label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_542) ? node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 552, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_550,var__524->mCValueName);
        buffer_append_str(buf_550,"(");
        j_551=0;
        for(        o2_saved_552=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_529)),it_555=list$1CVALUE$ph$p_begin((o2_saved_552));        !list$1CVALUE$ph$p_end((o2_saved_552));        it_555=list$1CVALUE$ph$p_next((o2_saved_552))        ){
            buffer_append_str(buf_550,it_555->c_value);
            if(            j_551!=list$1CVALUE$ph$p_length(come_params_529)-1) {
                buffer_append_str(buf_550,",");
            }
            j_551++;
        }
        come_call_finalizer3(o2_saved_552,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_550,")");
        come_value_558=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 569, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj92=come_value_558->c_value;
        come_value_558->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_550));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj93=come_value_558->type;
        come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_528));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_558->type->mStatic=(_Bool)0;
        come_value_558->var=((void*)0);
        if(        lambda_type_525->mResultType->mHeap) {
            append_object_to_right_values2(come_value_558,(struct sType*)come_increment_ref_count(lambda_type_525->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_558->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_558));
        info->calling_fun=((void*)0);
        __result_obj__360 = (_Bool)1;
        come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_529,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__360;
        come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_529,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_559=((struct sGenericsFun*)(__right_value469=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,((char*)(__right_value468=__builtin_string(fun_name_520))),((void*)0))));
    (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value469,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_562=(_Bool)0;
    if(    generics_fun_559) {
        method_generics_562=list$1char$ph$p_length(generics_fun_559->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph$p_length(self->method_generics_types)>0||method_generics_562) {
        if(        list$1sType$ph$p_length(self->method_generics_types)==0) {
            method_generics_types_563=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 594, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value472=make_method_generics_function((char*)come_increment_ref_count(fun_name_520),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_563),info)));
            name_564=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_565=multiple_assign_var6->v2;
            come_call_finalizer3(__right_value472,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_566=(char*)come_increment_ref_count(name_564);
            fun_567=((struct sFun*)(__right_value473=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_566,((void*)0))));
            come_call_finalizer3(__right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_522) {
                come_params_570=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 601, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_571=((struct sFun*)(__right_value476=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_566,((void*)0))));
                come_call_finalizer3(__right_value476,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_572=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_522,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_570),fun_571,fun_name_520,method_block_sline_523,info,(_Bool)1)) {
                    __result_obj__369 = (_Bool)0;
                    come_call_finalizer3(come_params_570,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_563,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_566 = come_decrement_ref_count2(generics_fun_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__369;
                }
                info->no_output_come_code=no_output_come_code_572;
                method_block_node_573=((struct CVALUE*)(__right_value477=list$1CVALUE$ph$p_operator_load_element(come_params_570,-1)));
                come_call_finalizer3(__right_value477,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_577=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_573->type));
                method_block_result_type_578=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_579=((struct sType*)(__right_value480=list$1sType$ph$p_operator_load_element(generics_fun_559->mParamTypes,-1)));
                come_call_finalizer3(__right_value480,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_580=generics_fun_method_block_lambda_type_579->mResultType;
                if(                generics_fun_method_block_result_type_580->mClass->mMethodGenerics) {
                    method_generics_num_581=generics_fun_method_block_result_type_580->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_563,method_generics_num_581,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_578)));
                }
                n_590=0;
                for(                o2_saved_591=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_579->mParamTypes)),it_594=list$1sType$ph$p_begin((o2_saved_591));                !list$1sType$ph$p_end((o2_saved_591));                it_594=list$1sType$ph$p_next((o2_saved_591))                ){
                    if(                    it_594->mClass->mMethodGenerics) {
                        method_generics_num_597=it_594->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_563,method_generics_num_597,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value485=list$1sType$ph$p_operator_load_element(method_block_lambda_type_577->mParamTypes,n_590))))));
                        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_590++;
                }
                come_call_finalizer3(o2_saved_591,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_570,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_577,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_578,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_598=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 633, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            i_599=0;
            result_type_600=((void*)0);
            for(            o2_saved_601=(params_521),it_602=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_601));            !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_601));            it_602=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_601))            ){
                multiple_assign_var7=it_602;
                label_603=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_604=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_605=node_compile(node_604,info);
                if(                !Value_605) {
                    __result_obj__381 = (_Bool)0;
                    (label_603 = come_decrement_ref_count2(label_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_604) ? node_604 = come_decrement_ref_count2(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_generics_types_563,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_566 = come_decrement_ref_count2(generics_fun_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_params_598,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__381;
                }
                else {
                }
                come_value_606=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUE$ph$p_add(come_params_598,(struct CVALUE*)come_increment_ref_count(come_value_606));
                (label_603 = come_decrement_ref_count2(label_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_604) ? node_604 = come_decrement_ref_count2(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_559->mResultType->mClass->mMethodGenerics) {
                method_generics_num_610=generics_fun_559->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_563,method_generics_num_610,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_611=0;
            for(            o2_saved_612=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_559->mParamTypes)),it_613=list$1sType$ph$p_begin((o2_saved_612));            !list$1sType$ph$p_end((o2_saved_612));            it_613=list$1sType$ph$p_next((o2_saved_612))            ){
                if(                it_613->mClass->mMethodGenerics) {
                    method_generics_num_614=it_613->mClass->mMethodGenericsNum;
                    if(                    n_611<list$1CVALUE$ph$p_length(come_params_598)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_563,method_generics_num_614,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value494=list$1CVALUE$ph$p_operator_load_element(come_params_598,n_611)))->type)));
                        come_call_finalizer3(__right_value494,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_611++;
            }
            come_call_finalizer3(o2_saved_612,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            map$2char$phsFun$ph$p_remove(info->funcs,generics_fun_name_566);
            (name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value496=make_method_generics_function((char*)come_increment_ref_count(fun_name_520),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_563),info)));
            name_617=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_618=multiple_assign_var8->v2;
            come_call_finalizer3(__right_value496,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj101=fun_name_520;
            fun_name_520=(char*)come_increment_ref_count(name_617);
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_563,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (generics_fun_name_566 = come_decrement_ref_count2(generics_fun_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_params_598,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_617 = come_decrement_ref_count2(name_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value497=make_method_generics_function((char*)come_increment_ref_count(fun_name_520),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_619=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_620=multiple_assign_var9->v2;
            come_call_finalizer3(__right_value497,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj102=fun_name_520;
            fun_name_520=(char*)come_increment_ref_count(name_619);
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            (name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_520,"__builtin_memmove")||string_operator_equals(fun_name_520,"__builtin_memset")||string_operator_equals(fun_name_520,"__builtin_ffs")||string_operator_equals(fun_name_520,"__builtin_ffsl")||string_operator_equals(fun_name_520,"__builtin_ffsll")||string_operator_equals(fun_name_520,"__builtin_bswap16")||string_operator_equals(fun_name_520,"__builtin_bswap32")||string_operator_equals(fun_name_520,"__builtin_bswap64")||string_operator_equals(fun_name_520,"__builtin_constant_p")||string_operator_equals(fun_name_520,"__builtin_expect")||string_operator_equals(fun_name_520,"__builtin___memset_chk")||string_operator_equals(fun_name_520,"__builtin_object_size")||string_operator_equals(fun_name_520,"__builtin___memcpy_chk")||string_operator_equals(fun_name_520,"__builtin___strncpy_chk")||string_operator_equals(fun_name_520,"__builtin___strncat_chk")||string_operator_equals(fun_name_520,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_520,"__builtin_strrchr")||string_operator_equals(fun_name_520,"__builtin_clz")||string_operator_equals(fun_name_520,"__dsb")||string_operator_equals(fun_name_520,"__isb")||string_operator_equals(fun_name_520,"__dmb")||(strlen(fun_name_520)==strlen("__builtin_arm_")&&memcmp(fun_name_520,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_520,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_520,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_520,"__c11_atomic_store")||string_operator_equals(fun_name_520,"__c11_atomic_load")||string_operator_equals(fun_name_520,"__c11_atomic_exchange")||string_operator_equals(fun_name_520,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_520,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_520,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_520,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_520,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_520,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_520,"__c11_atomic_fetch_xor")) {
        come_params_621=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 706, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_622=(params_521),it_623=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_622));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_622));        it_623=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_622))        ){
            multiple_assign_var10=it_623;
            label_624=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_625=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_626=node_compile(node_625,info);
            if(            !Value_626) {
                __result_obj__384 = (_Bool)0;
                (label_624 = come_decrement_ref_count2(label_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_625) ? node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_621,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__384;
            }
            else {
            }
            come_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph$p_push_back(come_params_621,(struct CVALUE*)come_increment_ref_count(come_value_627));
            (label_624 = come_decrement_ref_count2(label_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_625) ? node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_628=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 719, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_628,fun_name_520);
        buffer_append_str(buf_628,"(");
        j_629=0;
        for(        o2_saved_630=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_621)),it_631=list$1CVALUE$ph$p_begin((o2_saved_630));        !list$1CVALUE$ph$p_end((o2_saved_630));        it_631=list$1CVALUE$ph$p_next((o2_saved_630))        ){
            buffer_append_str(buf_628,it_631->c_value);
            if(            j_629!=list$1CVALUE$ph$p_length(come_params_621)-1) {
                buffer_append_str(buf_628,",");
            }
            j_629++;
        }
        come_call_finalizer3(o2_saved_630,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_628,")");
        come_value_632=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 736, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj103=come_value_632->c_value;
        come_value_632->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_628));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_520,"__builtin_memmove")||string_operator_equals(fun_name_520,"__builtin_memset")) {
            __dec_obj104=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 740, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_ffs")) {
            __dec_obj105=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 743, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_ffsl")) {
            __dec_obj106=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 746, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_ffsll")) {
            __dec_obj107=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 749, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_bswap16")) {
            __dec_obj108=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_bswap32")) {
            __dec_obj109=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_bswap64")) {
            __dec_obj110=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_constant_p")) {
            __dec_obj111=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_expect")) {
            __dec_obj112=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin___memset_chk")) {
            __dec_obj113=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_632->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_object_size")) {
            __dec_obj114=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 771, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin___memcpy_chk")) {
            __dec_obj115=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_632->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_520,"__builtin___strncpy_chk")) {
            __dec_obj116=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_632->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_520,"__builtin___strncat_chk")) {
            __dec_obj117=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_632->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_strrchr")) {
            __dec_obj118=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 786, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_632->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_520,"__builtin___vsnprintf_chk")) {
            __dec_obj119=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 790, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_clz")) {
            __dec_obj120=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 793, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_thread_fence")) {
            __dec_obj121=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 796, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_signal_fence")) {
            __dec_obj122=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_exchange")) {
            __dec_obj123=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value563=list$1CVALUE$ph$p_operator_load_element(come_params_621,1)))->type));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value563,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_exchange_strong")) {
            __dec_obj124=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value565=list$1CVALUE$ph$p_operator_load_element(come_params_621,2)))->type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value565,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_exchange_weak")) {
            __dec_obj125=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value567=list$1CVALUE$ph$p_operator_load_element(come_params_621,2)))->type));
            come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value567,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_store")) {
            __dec_obj126=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_load")) {
            __dec_obj127=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value572=list$1CVALUE$ph$p_operator_load_element(come_params_621,0)))->type));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value572,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_632->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_fetch_add")) {
            __dec_obj128=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value574=list$1CVALUE$ph$p_operator_load_element(come_params_621,1)))->type));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value574,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_fetch_sub")) {
            __dec_obj129=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value576=list$1CVALUE$ph$p_operator_load_element(come_params_621,1)))->type));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value576,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_fetch_and")) {
            __dec_obj130=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value578=list$1CVALUE$ph$p_operator_load_element(come_params_621,1)))->type));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value578,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_fetch_or")) {
            __dec_obj131=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value580=list$1CVALUE$ph$p_operator_load_element(come_params_621,1)))->type));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value580,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__c11_atomic_fetch_xor")) {
            __dec_obj132=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value582=list$1CVALUE$ph$p_operator_load_element(come_params_621,1)))->type));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value582,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__dsb")) {
            __dec_obj133=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 833, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__isb")) {
            __dec_obj134=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 836, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__dmb")) {
            __dec_obj135=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 839, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_arm_cdp")) {
            __dec_obj136=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 842, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_arm_ldc")) {
            __dec_obj137=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_arm_stc")) {
            __dec_obj138=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_arm_stcl")) {
            __dec_obj139=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_520,"__builtin_arm_ldcl")) {
            __dec_obj140=come_value_632->type;
            come_value_632->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_632->var=((void*)0);
        add_come_last_code(info,"%s",come_value_632->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_632));
        __result_obj__385 = (_Bool)1;
        come_call_finalizer3(come_params_621,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__385;
        come_call_finalizer3(come_params_621,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_520,"__builtin_va_arg")) {
        come_params_633=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 866, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_634=0;
        result_type_635=((void*)0);
        for(        o2_saved_636=(params_521),it_637=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_636));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_636));        it_637=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_636))        ){
            multiple_assign_var11=it_637;
            label_638=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_639=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_640=node_compile(node_639,info);
            if(            !Value_640) {
                __result_obj__386 = (_Bool)0;
                (label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_639) ? node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_633,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__386;
            }
            else {
            }
            come_value_641=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph$p_add(come_params_633,(struct CVALUE*)come_increment_ref_count(come_value_641));
            __dec_obj141=result_type_635;
            result_type_635=(struct sType*)come_increment_ref_count(come_value_641->type);
            come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_639) ? node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_641,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 884, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_642,fun_name_520);
        buffer_append_str(buf_642,"(");
        j_643=0;
        for(        o2_saved_644=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_633)),it_645=list$1CVALUE$ph$p_begin((o2_saved_644));        !list$1CVALUE$ph$p_end((o2_saved_644));        it_645=list$1CVALUE$ph$p_next((o2_saved_644))        ){
            buffer_append_str(buf_642,it_645->c_value);
            if(            j_643!=list$1CVALUE$ph$p_length(come_params_633)-1) {
                buffer_append_str(buf_642,",");
            }
            j_643++;
        }
        come_call_finalizer3(o2_saved_644,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_642,")");
        come_value_646=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 901, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj142=come_value_646->c_value;
        come_value_646->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_642));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj143=come_value_646->type;
        come_value_646->type=(struct sType*)come_increment_ref_count(result_type_635);
        come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_646->var=((void*)0);
        add_come_last_code(info,"%s",come_value_646->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_646));
        __result_obj__387 = (_Bool)1;
        come_call_finalizer3(come_params_633,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__387;
        come_call_finalizer3(come_params_633,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_520,"string")) {
        __dec_obj144=fun_name_520;
        fun_name_520=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_520,"wstring")) {
        __dec_obj145=fun_name_520;
        fun_name_520=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_520,"inherit")) {
        p_647=info->come_fun->mName;
        version_648=0;
        while(*p_647) {
            if(            *p_647==95&&*(p_647+1)==118&&xisdigit(*(p_647+2))) {
                p2_649=p_647+2;
                version_648=0;
                while(xisdigit(*p2_649)) {
                    version_648=version_648*10+(*p2_649-48);
                    p2_649++;
                }
                break;
            }
            else {
                p_647++;
            }
        }
        char real_fun_name_650[2048];
        memset(&real_fun_name_650, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_650,info->come_fun->mName,p_647-info->come_fun->mName);
        real_fun_name_650[p_647-info->come_fun->mName]=0;
        for(        i_651=version_648-1;        i_651>=1;        i_651--        ){
            new_fun_name_652=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_650,i_651));
            if(            (_if_conditional8=(((struct sFun*)(__right_value619=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_652))))),            come_call_finalizer3(__right_value619,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                __dec_obj146=fun_name_520;
                fun_name_520=(char*)come_increment_ref_count(__builtin_string(new_fun_name_652));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_652 = come_decrement_ref_count2(new_fun_name_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_652 = come_decrement_ref_count2(new_fun_name_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_651==0) {
            new_fun_name_656=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_650));
            if(            (_if_conditional9=(((struct sFun*)(__right_value622=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_656))))),            come_call_finalizer3(__right_value622,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __dec_obj147=fun_name_520;
                fun_name_520=(char*)come_increment_ref_count(__builtin_string(new_fun_name_656));
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_520,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value624=err_msg(info,"invalid inherit")));
                come_exception_var_5_657=multiple_assign_var12->v1;
                Err_658=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_658)),                come_call_finalizer3(__right_value624,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result_obj__392 = (_Bool)1;
                    (Err_658 = come_decrement_ref_count2(Err_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_656 = come_decrement_ref_count2(new_fun_name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__392;
                }
                else {
                }
                (Err_658 = come_decrement_ref_count2(Err_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_656 = come_decrement_ref_count2(new_fun_name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_659=128;        i_659>=1;        i_659--        ){
            new_fun_name_660=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_520,i_659));
            if(            (_if_conditional11=(((struct sFun*)(__right_value626=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_660))))),            come_call_finalizer3(__right_value626,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                __dec_obj148=fun_name_520;
                fun_name_520=(char*)come_increment_ref_count(__builtin_string(new_fun_name_660));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_660 = come_decrement_ref_count2(new_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_660 = come_decrement_ref_count2(new_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_661=((struct sFun*)(__right_value628=map$2char$phsFun$ph$p_at(info->funcs,fun_name_520,((void*)0))));
    come_call_finalizer3(__right_value628,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_661==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_520);
        come_params_662=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 983, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_663=0;
        result_type_664=((void*)0);
        for(        o2_saved_665=(params_521),it_666=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_665));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_665));        it_666=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_665))        ){
            multiple_assign_var13=it_666;
            label_667=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_668=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_669=node_compile(node_668,info);
            if(            !Value_669) {
                __result_obj__393 = (_Bool)0;
                (label_667 = come_decrement_ref_count2(label_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_662,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__393;
            }
            else {
            }
            come_value_670=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph$p_add(come_params_662,(struct CVALUE*)come_increment_ref_count(come_value_670));
            __dec_obj149=result_type_664;
            result_type_664=(struct sType*)come_increment_ref_count(come_value_670->type);
            come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_667 = come_decrement_ref_count2(label_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_668) ? node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_670,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_671=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1001, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_671,fun_name_520);
        buffer_append_str(buf_671,"(");
        j_672=0;
        for(        o2_saved_673=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_662)),it_674=list$1CVALUE$ph$p_begin((o2_saved_673));        !list$1CVALUE$ph$p_end((o2_saved_673));        it_674=list$1CVALUE$ph$p_next((o2_saved_673))        ){
            buffer_append_str(buf_671,it_674->c_value);
            if(            j_672!=list$1CVALUE$ph$p_length(come_params_662)-1) {
                buffer_append_str(buf_671,",");
            }
            j_672++;
        }
        come_call_finalizer3(o2_saved_673,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_671,")");
        come_value_675=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1018, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj150=come_value_675->c_value;
        come_value_675->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_671));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj151=come_value_675->type;
        come_value_675->type=(struct sType*)come_increment_ref_count(result_type_664);
        come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_675->var=((void*)0);
        add_come_last_code(info,"%s",come_value_675->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_675));
        __result_obj__394 = (_Bool)1;
        come_call_finalizer3(come_params_662,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__394;
        come_call_finalizer3(come_params_662,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_676=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_661->mResultType));
    result_type_676->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_676->mException&&!info->in_exception_value) {
        in_exception_value_677=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1036, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value644=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_678=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        come_call_finalizer3(__right_value644,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_680=node_compile(new_node_678,info);
        if(        !Value_680) {
            __result_obj__397 = (_Bool)0;
            ((new_node_678) ? new_node_678 = come_decrement_ref_count2(new_node_678, ((struct sNode*)new_node_678)->finalize, ((struct sNode*)new_node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__397;
        }
        else {
        }
        info->in_exception_value=in_exception_value_677;
        __result_obj__398 = (_Bool)1;
        ((new_node_678) ? new_node_678 = come_decrement_ref_count2(new_node_678, ((struct sNode*)new_node_678)->finalize, ((struct sNode*)new_node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__398;
        ((new_node_678) ? new_node_678 = come_decrement_ref_count2(new_node_678, ((struct sNode*)new_node_678)->finalize, ((struct sNode*)new_node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_676->mException&&!info->in_exception_value) {
        in_exception_value_681=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1048, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value647=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_682=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        come_call_finalizer3(__right_value647,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_683=node_compile(new_node_682,info);
        if(        !Value_683) {
            __result_obj__399 = (_Bool)0;
            ((new_node_682) ? new_node_682 = come_decrement_ref_count2(new_node_682, ((struct sNode*)new_node_682)->finalize, ((struct sNode*)new_node_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__399;
        }
        else {
        }
        info->in_exception_value=in_exception_value_681;
        __result_obj__400 = (_Bool)1;
        ((new_node_682) ? new_node_682 = come_decrement_ref_count2(new_node_682, ((struct sNode*)new_node_682)->finalize, ((struct sNode*)new_node_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__400;
        ((new_node_682) ? new_node_682 = come_decrement_ref_count2(new_node_682, ((struct sNode*)new_node_682)->finalize, ((struct sNode*)new_node_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_684=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1058, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_685=(struct list$1sType$ph*)come_increment_ref_count((fun_661->mParamTypes)),it_686=list$1sType$ph$p_begin((o2_saved_685));    !list$1sType$ph$p_end((o2_saved_685));    it_686=list$1sType$ph$p_next((o2_saved_685))    ){
        it2_687=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value652=come_call_cloner(sType_clone, it_686))),info->generics_type,info));
        come_call_finalizer3(__right_value652,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_push_back(param_types_684,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_687)));
        come_call_finalizer3(it2_687,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_685,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj157=result_type_676;
    result_type_676=(struct sType*)come_increment_ref_count(solve_generics(result_type_676,info->generics_type,info));
    come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_688=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1066, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_689=0;    i_689<list$1sType$ph$p_length(fun_661->mParamTypes)-(((method_block_522)?(2):(0)));    i_689++    ){
        list$1CVALUE$ph$p_add(come_params_688,((void*)0));
    }
    for(    o2_saved_690=(params_521),it_691=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_690));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_690));    it_691=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_690))    ){
        multiple_assign_var14=it_691;
        label_692=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_693=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_661->mVarArgs||string_operator_equals(fun_name_520,"__builtin_va_start")) {
        }
        else if(        label_692) {
            Value_694=node_compile(node_693,info);
            if(            !Value_694) {
                __result_obj__401 = (_Bool)0;
                (label_692 = come_decrement_ref_count2(label_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_693) ? node_693 = come_decrement_ref_count2(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__401;
            }
            else {
            }
            come_value_695=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            n_696=0;
            for(            o2_saved_697=(struct list$1char$ph*)come_increment_ref_count((fun_661->mParamNames)),it_700=list$1char$ph$p_begin((o2_saved_697));            !list$1char$ph$p_end((o2_saved_697));            it_700=list$1char$ph$p_next((o2_saved_697))            ){
                if(                string_operator_equals(label_692,it_700)) {
                    break;
                }
                n_696++;
            }
            come_call_finalizer3(o2_saved_697,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional12=(((struct sType*)(__right_value659=list$1sType$ph$p_operator_load_element(param_types_684,n_696))))),            come_call_finalizer3(__right_value659,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value664=check_assign_type(((char*)(__right_value662=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value660=string_to_string(fun_name_520))),((char*)(__right_value661=int_to_string(n_696)))))),((struct sType*)(__right_value663=list$1sType$ph$p_operator_load_element(param_types_684,n_696))),come_value_695->type,come_value_695,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_6_703=multiple_assign_var15->v1;
                Err_704=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_704)),                (__right_value660 = come_decrement_ref_count2(__right_value660, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value662 = come_decrement_ref_count2(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value663,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value664,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    __result_obj__408 = (_Bool)1;
                    (Err_704 = come_decrement_ref_count2(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_692 = come_decrement_ref_count2(label_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_693) ? node_693 = come_decrement_ref_count2(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__408;
                }
                else {
                }
                (Err_704 = come_decrement_ref_count2(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)(__right_value665=list$1sType$ph$p_operator_load_element(param_types_684,n_696)))&&((struct sType*)(__right_value666=list$1sType$ph$p_operator_load_element(param_types_684,n_696)))->mHeap&&come_value_695->type->mHeap)),            come_call_finalizer3(__right_value665,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value666,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)(__right_value667=list$1sType$ph$p_operator_load_element(param_types_684,n_696))),come_value_695->type,come_value_695,info,(_Bool)1);
                come_call_finalizer3(__right_value667,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_688,n_696,(struct CVALUE*)come_increment_ref_count(come_value_695));
            come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_692 = come_decrement_ref_count2(label_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_693) ? node_693 = come_decrement_ref_count2(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_710=0;
    for(    o2_saved_711=(params_521),it_712=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_711));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_711));    it_712=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_711))    ){
        multiple_assign_var16=it_712;
        label_713=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_714=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_661->mVarArgs||string_operator_equals(fun_name_520,"__builtin_va_start")) {
            Value_715=node_compile(node_714,info);
            if(            !Value_715) {
                __result_obj__411 = (_Bool)0;
                (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__411;
            }
            else {
            }
            come_value_716=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value669=list$1CVALUE$ph$p_operator_load_element(come_params_688,i_710)))==((void*)0))),                come_call_finalizer3(__right_value669,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_710++;
                }
            }
            list$1CVALUE$ph$p_replace(come_params_688,i_710,(struct CVALUE*)come_increment_ref_count(come_value_716));
            i_710++;
            come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_713) {
        }
        else {
            Value_717=node_compile(node_714,info);
            if(            !Value_717) {
                __result_obj__412 = (_Bool)0;
                (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__412;
            }
            else {
            }
            come_value_718=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value671=list$1CVALUE$ph$p_operator_load_element(come_params_688,i_710)))==((void*)0))),                come_call_finalizer3(__right_value671,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_710++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)(__right_value672=list$1sType$ph$p_operator_load_element(param_types_684,i_710))))),            come_call_finalizer3(__right_value672,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value677=check_assign_type(((char*)(__right_value675=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value673=string_to_string(fun_name_520))),((char*)(__right_value674=int_to_string(i_710)))))),((struct sType*)(__right_value676=list$1sType$ph$p_operator_load_element(param_types_684,i_710))),come_value_718->type,come_value_718,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_719=multiple_assign_var17->v1;
                Err_720=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_720)),                (__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value675 = come_decrement_ref_count2(__right_value675, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value676,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value677,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__413 = (_Bool)1;
                    (Err_720 = come_decrement_ref_count2(Err_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_718,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__413;
                }
                else {
                }
                (Err_720 = come_decrement_ref_count2(Err_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)(__right_value678=list$1sType$ph$p_operator_load_element(param_types_684,i_710)))&&((struct sType*)(__right_value679=list$1sType$ph$p_operator_load_element(param_types_684,i_710)))->mHeap&&come_value_718->type->mHeap)),            come_call_finalizer3(__right_value678,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value679,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value680=list$1sType$ph$p_operator_load_element(param_types_684,i_710))),come_value_718->type,come_value_718,info,(_Bool)1);
                come_call_finalizer3(__right_value680,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_688,i_710,(struct CVALUE*)come_increment_ref_count(come_value_718));
            i_710++;
            come_call_finalizer3(come_value_718,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_713 = come_decrement_ref_count2(label_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_714) ? node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value681=list$1CVALUE$ph$p_operator_load_element(come_params_688,i_710)))==((void*)0))),        come_call_finalizer3(__right_value681,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_710++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph$p_length(params_521)<list$1sType$ph$p_length(fun_661->mParamTypes)) {
        for(        ;        i_710<list$1sType$ph$p_length(fun_661->mParamTypes)-(((method_block_522)?(2):(0)));        i_710++        ){
            default_param_721=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value682=list$1char$ph$p_operator_load_element(fun_661->mParamDefaultParametors,i_710)))));
            (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_725=((char*)(__right_value684=list$1char$ph$p_operator_load_element(fun_661->mParamNames,i_710)));
            (__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_721&&string_operator_not_equals(default_param_721,"")&&((struct CVALUE*)(__right_value685=list$1CVALUE$ph$p_operator_load_element(come_params_688,i_710)))==((void*)0))),            come_call_finalizer3(__right_value685,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional21) {
                source_726=(struct buffer*)come_increment_ref_count(info->source);
                p_727=info->p;
                head_728=info->head;
                sline_729=info->sline;
                __dec_obj159=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_721));
                come_call_finalizer3(__dec_obj159,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_730=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_731=node_compile(node_730,info);
                if(                !Value_731) {
                    __result_obj__416 = (_Bool)0;
                    come_call_finalizer3(source_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_730) ? node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_721 = come_decrement_ref_count2(default_param_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__416;
                }
                else {
                }
                __dec_obj160=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_726);
                come_call_finalizer3(__dec_obj160,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_727;
                info->head=head_728;
                info->sline=sline_729;
                come_value_732=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)(__right_value689=list$1sType$ph$p_operator_load_element(param_types_684,i_710))))),                come_call_finalizer3(__right_value689,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value694=check_assign_type(((char*)(__right_value692=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value690=string_to_string(fun_name_520))),((char*)(__right_value691=int_to_string(i_710)))))),((struct sType*)(__right_value693=list$1sType$ph$p_operator_load_element(param_types_684,i_710))),come_value_732->type,come_value_732,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_8_733=multiple_assign_var18->v1;
                    Err_734=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_734)),                    (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value693,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value694,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional23) {
                        __result_obj__417 = (_Bool)1;
                        (Err_734 = come_decrement_ref_count2(Err_734, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(source_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_730) ? node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(come_value_732,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (default_param_721 = come_decrement_ref_count2(default_param_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__417;
                    }
                    else {
                    }
                    (Err_734 = come_decrement_ref_count2(Err_734, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)(__right_value695=list$1sType$ph$p_operator_load_element(param_types_684,i_710)))&&((struct sType*)(__right_value696=list$1sType$ph$p_operator_load_element(param_types_684,i_710)))->mHeap&&come_value_732->type->mHeap)),                come_call_finalizer3(__right_value695,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value696,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)(__right_value697=list$1sType$ph$p_operator_load_element(param_types_684,i_710))),come_value_732->type,come_value_732,info,(_Bool)1);
                    come_call_finalizer3(__right_value697,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_688,i_710,(struct CVALUE*)come_increment_ref_count(come_value_732));
                come_call_finalizer3(source_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_730) ? node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_732,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value698=list$1CVALUE$ph$p_operator_load_element(come_params_688,i_710)))==((void*)0))),                come_call_finalizer3(__right_value698,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value699=err_msg(info,"require parametor(%s)(1) %d",fun_661->mName,i_710)));
                    come_exception_var_9_735=multiple_assign_var19->v1;
                    Err_736=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_736)),                    come_call_finalizer3(__right_value699,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        __result_obj__418 = (_Bool)1;
                        (Err_736 = come_decrement_ref_count2(Err_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_721 = come_decrement_ref_count2(default_param_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__418;
                    }
                    else {
                    }
                    (Err_736 = come_decrement_ref_count2(Err_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_721 = come_decrement_ref_count2(default_param_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph$p_length(fun_661->mParamTypes)-(((method_block_522)?(2):(0)))!=list$1CVALUE$ph$p_length(come_params_688)&&!fun_661->mVarArgs&&string_operator_not_equals(fun_name_520,"__builtin_va_start")&&string_operator_not_equals(fun_name_520,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value700=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_520,list$1sType$ph$p_length(fun_661->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_521))));
        come_exception_var_10_737=multiple_assign_var20->v1;
        Err_738=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_738)),        come_call_finalizer3(__right_value700,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result_obj__419 = (_Bool)1;
            (Err_738 = come_decrement_ref_count2(Err_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__419;
        }
        else {
        }
        (Err_738 = come_decrement_ref_count2(Err_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_522) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1226, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value702=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1226, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_739=(struct sNode*)come_increment_ref_count(_inf_value3);
        come_call_finalizer3(__right_value702,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_741=node_compile(current_stack_frame_node_739,info);
        if(        !Value_741) {
            __result_obj__422 = (_Bool)0;
            ((current_stack_frame_node_739) ? current_stack_frame_node_739 = come_decrement_ref_count2(current_stack_frame_node_739, ((struct sNode*)current_stack_frame_node_739)->finalize, ((struct sNode*)current_stack_frame_node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__422;
        }
        else {
        }
        come_value_742=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph$p_push_back(come_params_688,(struct CVALUE*)come_increment_ref_count(come_value_742));
        method_block2_743=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1235, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        method_block_type_744=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value709=list$1sType$ph$p_operator_load_element(fun_661->mParamTypes,-1)))));
        come_call_finalizer3(__right_value709,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_745=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value712=list$1sType$ph$p_operator_load_element(method_block_type_744->mParamTypes,0)))->mClass=((struct sClass*)(__right_value713=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_745)));
        come_call_finalizer3(__right_value712,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value713,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_749=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value714=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_745)));
        come_call_finalizer3(__right_value714,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_744->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value715=err_msg(info,"This function does not have method block(%s)",fun_name_520)));
            come_exception_var_11_750=multiple_assign_var21->v1;
            Err_751=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_751)),            come_call_finalizer3(__right_value715,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional28) {
                __result_obj__427 = (_Bool)1;
                (Err_751 = come_decrement_ref_count2(Err_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_739) ? current_stack_frame_node_739 = come_decrement_ref_count2(current_stack_frame_node_739, ((struct sNode*)current_stack_frame_node_739)->finalize, ((struct sNode*)current_stack_frame_node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_742,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_745 = come_decrement_ref_count2(class_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__427;
            }
            else {
            }
            (Err_751 = come_decrement_ref_count2(Err_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_752=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_744->mResultType));
        result_type_752->mStatic=(_Bool)0;
        param_types_753=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_block_type_744->mParamTypes));
        param_names_754=method_block_type_744->mParamNames;
        all_alhabet_sname_755=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1257, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        {
            p_756=info->sname;
            while(*p_756) {
                if(                xisalnum(*p_756)) {
                    buffer_append_char(all_alhabet_sname_755,*p_756++);
                }
                else {
                    p_756++;
                }
            }
        }
        buffer_append_format(method_block2_743,"%s fun_block%d_%s(",((char*)(__right_value720=make_type_name_string(result_type_752,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value721=buffer_to_string(all_alhabet_sname_755))));
        (__right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_710=0;
        for(        o2_saved_757=(struct list$1sType$ph*)come_increment_ref_count((param_types_753)),it_758=list$1sType$ph$p_begin((o2_saved_757));        !list$1sType$ph$p_end((o2_saved_757));        it_758=list$1sType$ph$p_next((o2_saved_757))        ){
            param_type_759=it_758;
            if(            i_710==0) {
                param_name_760=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_743,"%s",((char*)(__right_value723=make_define_var(param_type_759,param_name_760,(_Bool)0,info))));
                (__right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_760 = come_decrement_ref_count2(param_name_760, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_710==1) {
                param_name_761=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_743,"%s",((char*)(__right_value725=make_define_var_no_solved(param_type_759,param_name_761,(_Bool)0,(_Bool)1,info))));
                (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_761 = come_decrement_ref_count2(param_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_762=(char*)come_increment_ref_count(xsprintf("it%d",i_710));
                buffer_append_format(method_block2_743,"%s",((char*)(__right_value727=make_define_var_no_solved(param_type_759,param_name_762,(_Bool)0,(_Bool)1,info))));
                (__right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_762 = come_decrement_ref_count2(param_name_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_710!=list$1sType$ph$p_length(param_types_753)-1) {
                buffer_append_str(method_block2_743,",");
            }
            i_710++;
        }
        come_call_finalizer3(o2_saved_757,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_743,")\n");
        buffer_append_str(method_block2_743,((char*)(__right_value728=buffer_to_string(method_block_522))));
        (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_763=(struct buffer*)come_increment_ref_count(info->source);
        p_764=info->p;
        head_765=info->head;
        sline_766=info->sline;
        __dec_obj162=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_743);
        come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_523;
        node_767=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_768=node_compile(node_767,info);
        if(        !Value_768) {
            __result_obj__428 = (_Bool)0;
            ((current_stack_frame_node_739) ? current_stack_frame_node_739 = come_decrement_ref_count2(current_stack_frame_node_739, ((struct sNode*)current_stack_frame_node_739)->finalize, ((struct sNode*)current_stack_frame_node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_742,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_745 = come_decrement_ref_count2(class_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_753,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_755,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__428;
        }
        else {
        }
        method_block_name_769=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value730=buffer_to_string(all_alhabet_sname_755)))));
        (__right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_770=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1322, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun2_771=((struct sFun*)(__right_value735=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value734=__builtin_string(method_block_name_769))),((void*)0))));
        (__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value735,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_771==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value736=err_msg(info,"method block function not found(%s)",method_block_name_769)));
            come_exception_var_12_772=multiple_assign_var22->v1;
            Err_773=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_773)),            come_call_finalizer3(__right_value736,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional29) {
                __result_obj__429 = (_Bool)1;
                (Err_773 = come_decrement_ref_count2(Err_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_739) ? current_stack_frame_node_739 = come_decrement_ref_count2(current_stack_frame_node_739, ((struct sNode*)current_stack_frame_node_739)->finalize, ((struct sNode*)current_stack_frame_node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_742,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_745 = come_decrement_ref_count2(class_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_753,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_755,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_769 = come_decrement_ref_count2(method_block_name_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value2_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__429;
            }
            else {
            }
            (Err_773 = come_decrement_ref_count2(Err_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_774=fun2_771->mLambdaType;
        __dec_obj163=come_value2_770->c_value;
        come_value2_770->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_769));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=come_value2_770->type;
        come_value2_770->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_774));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_770->var=((void*)0);
        list$1CVALUE$ph$p_push_back(come_params_688,(struct CVALUE*)come_increment_ref_count(come_value2_770));
        __dec_obj165=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_763);
        come_call_finalizer3(__dec_obj165,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_764;
        info->head=head_765;
        info->sline=sline_766;
        info->current_stack_frame_struct=current_stack_frame_struct_749;
        ((current_stack_frame_node_739) ? current_stack_frame_node_739 = come_decrement_ref_count2(current_stack_frame_node_739, ((struct sNode*)current_stack_frame_node_739)->finalize, ((struct sNode*)current_stack_frame_node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_742,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_745 = come_decrement_ref_count2(class_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_753,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_755,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_769 = come_decrement_ref_count2(method_block_name_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_775=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1348, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_775,fun_name_520);
    buffer_append_str(buf_775,"(");
    j_776=0;
    for(    o2_saved_777=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_688)),it_778=list$1CVALUE$ph$p_begin((o2_saved_777));    !list$1CVALUE$ph$p_end((o2_saved_777));    it_778=list$1CVALUE$ph$p_next((o2_saved_777))    ){
        buffer_append_str(buf_775,it_778->c_value);
        if(        j_776!=list$1CVALUE$ph$p_length(come_params_688)-1) {
            buffer_append_str(buf_775,",");
        }
        j_776++;
    }
    come_call_finalizer3(o2_saved_777,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_775,")");
    come_value_779=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1365, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj166=come_value_779->c_value;
    come_value_779->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_775));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value_779->type;
    come_value_779->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_676));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_779->type->mStatic=(_Bool)0;
    come_value_779->var=((void*)0);
    if(    fun_661->mResultType->mHeap) {
        append_object_to_right_values2(come_value_779,(struct sType*)come_increment_ref_count(result_type_676),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_520,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_520,"null_check")&&string_operator_not_equals(fun_name_520,"come_push_stackframe")&&string_operator_not_equals(fun_name_520,"come_pop_stackframe")) {
            __dec_obj168=come_value_779->c_value;
            come_value_779->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_779->c_value,come_value_779->type,info));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_676->mGuardValue&&result_type_676->mPointerNum>0) {
        __dec_obj169=come_value_779->c_value;
        come_value_779->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value746=make_type_name_string(result_type_676,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_779->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj170=come_value_779;
    come_value_779=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_779),info));
    come_call_finalizer3(__dec_obj170,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    add_come_last_code(info,"%s",come_value_779->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_779));
    info->calling_fun=fun_661;
    __result_obj__430 = (_Bool)1;
    (fun_name_520 = come_decrement_ref_count2(fun_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_688,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_779,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__430;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__333;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_512;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_513;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__338;
    if(    self==((void*)0)) {
        __result_obj__333 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__333,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__333;
    }
    result_512=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_513=self->head;
    while(it_513!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_512,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_513->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_512,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_513->item)));
        }
        it_513=it_513->next;
    }
    __result_obj__338 = come_increment_ref_count(result_512);
    come_call_finalizer3(result_512,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__338,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__338;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_510;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_511;
    it_510=self->head;
    while(it_510!=((void*)0)) {
        prev_it_511=it_510;
        it_510=it_510->next;
        come_call_finalizer3(prev_it_511,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__334;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__334 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__334,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value438 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_514;
struct tuple2$2char$phsNode$ph* __dec_obj84;
void* __right_value439 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_515;
struct tuple2$2char$phsNode$ph* __dec_obj85;
void* __right_value440 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_516;
struct tuple2$2char$phsNode$ph* __dec_obj86;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__335;
    if(    self->len==0) {
        litem_514=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value438=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_514->prev=((void*)0);
        litem_514->next=((void*)0);
        __dec_obj84=litem_514->item;
        litem_514->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_514;
        self->head=litem_514;
    }
    else if(    self->len==1) {
        litem_515=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value439=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_515->prev=self->head;
        litem_515->next=((void*)0);
        __dec_obj85=litem_515->item;
        litem_515->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_515;
        self->head->next=litem_515;
    }
    else {
        litem_516=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value440=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_516->prev=self->tail;
        litem_516->next=((void*)0);
        __dec_obj86=litem_516->item;
        litem_516->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_516;
        self->tail=litem_516;
    }
    self->len++;
    __result_obj__335 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__335;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__336;
void* __right_value441 = (void*)0;
struct tuple2$2char$phsNode$ph* result_517;
void* __right_value442 = (void*)0;
char* __dec_obj87;
void* __right_value443 = (void*)0;
struct sNode* __dec_obj88;
struct tuple2$2char$phsNode$ph* __result_obj__337;
    if(    self==(void*)0) {
        __result_obj__336 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__336,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__336;
    }
    result_517=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj87=result_517->v1;
        result_517->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj88=result_517->v2;
        result_517->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__337 = come_increment_ref_count(result_517);
    come_call_finalizer3(result_517,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__337,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__337;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_518;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_519;
    it_518=self->head;
    while(it_518!=((void*)0)) {
        prev_it_519=it_518;
        it_518=it_518->next;
        come_call_finalizer3(prev_it_519,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__342;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__342 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__342,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__342;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_530;
struct list_item$1CVALUE$ph* prev_it_531;
    it_530=self->head;
    while(it_530!=((void*)0)) {
        prev_it_531=it_530;
        it_530=it_530->next;
        come_call_finalizer3(prev_it_531,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_536;
struct tuple2$2char$phsNode$ph* __result_obj__344;
struct tuple2$2char$phsNode$ph* __result_obj__345;
struct tuple2$2char$phsNode$ph* result_537;
struct tuple2$2char$phsNode$ph* __result_obj__346;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_536,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__344 = result_536;
        return __result_obj__344;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__345 = self->it->item;
        return __result_obj__345;
    }
    memset(&result_537,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__346 = result_537;
    return __result_obj__346;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_539;
struct tuple2$2char$phsNode$ph* __result_obj__347;
struct tuple2$2char$phsNode$ph* __result_obj__348;
struct tuple2$2char$phsNode$ph* result_540;
struct tuple2$2char$phsNode$ph* __result_obj__349;
result_539 = (void*)0;
result_540 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_539,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__347 = result_539;
        return __result_obj__347;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__348 = self->it->item;
        return __result_obj__348;
    }
    memset(&result_540,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__349 = result_540;
    return __result_obj__349;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_545;
int i_546;
struct sType* __result_obj__351;
struct sType* default_value_547;
struct sType* __result_obj__352;
default_value_547 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_545=self->head;
    i_546=0;
    while(it_545!=((void*)0)) {
        if(        position==i_546) {
            __result_obj__351 = come_increment_ref_count(it_545->item);
            come_call_finalizer3(__result_obj__351,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__351;
        }
        it_545=it_545->next;
        i_546++;
    }
    memset(&default_value_547,0,sizeof(struct sType*));
    __result_obj__352 = come_increment_ref_count(default_value_547);
    come_call_finalizer3(default_value_547,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__352,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__352;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_553;
struct CVALUE* __result_obj__354;
struct CVALUE* __result_obj__355;
struct CVALUE* result_554;
struct CVALUE* __result_obj__356;
result_553 = (void*)0;
result_554 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_553,0,sizeof(struct CVALUE*));
        __result_obj__354 = result_553;
        return __result_obj__354;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__355 = self->it->item;
        return __result_obj__355;
    }
    memset(&result_554,0,sizeof(struct CVALUE*));
    __result_obj__356 = result_554;
    return __result_obj__356;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_556;
struct CVALUE* __result_obj__357;
struct CVALUE* __result_obj__358;
struct CVALUE* result_557;
struct CVALUE* __result_obj__359;
result_556 = (void*)0;
result_557 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_556,0,sizeof(struct CVALUE*));
        __result_obj__357 = result_556;
        return __result_obj__357;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__358 = self->it->item;
        return __result_obj__358;
    }
    memset(&result_557,0,sizeof(struct CVALUE*));
    __result_obj__359 = result_557;
    return __result_obj__359;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_560;
unsigned int it_561;
struct sGenericsFun* __result_obj__361;
struct sGenericsFun* __result_obj__362;
struct sGenericsFun* __result_obj__363;
struct sGenericsFun* __result_obj__364;
    hash_560=string_get_hash_key(((char*)key))%self->size;
    it_561=hash_560;
    while((_Bool)1) {
        if(        self->item_existance[it_561]) {
            if(            string_equals(self->keys[it_561],key)) {
                __result_obj__361 = come_increment_ref_count(self->items[it_561]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__361,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__361;
            }
            it_561++;
            if(            it_561>=self->size) {
                it_561=0;
            }
            else if(            it_561==hash_560) {
                __result_obj__362 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__362,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__362;
            }
        }
        else {
            __result_obj__363 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__363,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__363;
        }
    }
    __result_obj__364 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__364,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__364;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_568;
unsigned int it_569;
struct sFun* __result_obj__365;
struct sFun* __result_obj__366;
struct sFun* __result_obj__367;
struct sFun* __result_obj__368;
    hash_568=string_get_hash_key(((char*)key))%self->size;
    it_569=hash_568;
    while((_Bool)1) {
        if(        self->item_existance[it_569]) {
            if(            string_equals(self->keys[it_569],key)) {
                __result_obj__365 = come_increment_ref_count(self->items[it_569]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__365,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__365;
            }
            it_569++;
            if(            it_569>=self->size) {
                it_569=0;
            }
            else if(            it_569==hash_568) {
                __result_obj__366 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__366,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__366;
            }
        }
        else {
            __result_obj__367 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__367,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__367;
        }
    }
    __result_obj__368 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__368,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__368;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_574;
int i_575;
struct CVALUE* __result_obj__370;
struct CVALUE* default_value_576;
struct CVALUE* __result_obj__371;
default_value_576 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_574=self->head;
    i_575=0;
    while(it_574!=((void*)0)) {
        if(        position==i_575) {
            __result_obj__370 = come_increment_ref_count(it_574->item);
            come_call_finalizer3(__result_obj__370,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__370;
        }
        it_574=it_574->next;
        i_575++;
    }
    memset(&default_value_576,0,sizeof(struct CVALUE*));
    __result_obj__371 = come_increment_ref_count(default_value_576);
    come_call_finalizer3(default_value_576,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__371,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__371;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_582;
int i_583;
struct sType* default_value_584;
struct list$1sType$ph* __result_obj__373;
struct list_item$1sType$ph* it_588;
int i_589;
struct sType* __dec_obj97;
struct list$1sType$ph* __result_obj__374;
default_value_584 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_582=self->len;
        for(        i_583=0;        i_583<position-len_582;        i_583++        ){
            memset(&default_value_584,0,sizeof(struct sType*));
            list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(default_value_584));
            come_call_finalizer3(default_value_584,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__373 = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__373;
    }
    it_588=self->head;
    i_589=0;
    while(it_588!=((void*)0)) {
        if(        position==i_589) {
            __dec_obj97=it_588->item;
            it_588->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_588=it_588->next;
        i_589++;
    }
    __result_obj__374 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__374;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value481 = (void*)0;
struct list_item$1sType$ph* litem_585;
struct sType* __dec_obj94;
void* __right_value482 = (void*)0;
struct list_item$1sType$ph* litem_586;
struct sType* __dec_obj95;
void* __right_value483 = (void*)0;
struct list_item$1sType$ph* litem_587;
struct sType* __dec_obj96;
struct list$1sType$ph* __result_obj__372;
    if(    self->len==0) {
        litem_585=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value481=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_585->prev=((void*)0);
        litem_585->next=((void*)0);
        __dec_obj94=litem_585->item;
        litem_585->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_585;
        self->head=litem_585;
    }
    else if(    self->len==1) {
        litem_586=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value482=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_586->prev=self->head;
        litem_586->next=((void*)0);
        __dec_obj95=litem_586->item;
        litem_586->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_586;
        self->head->next=litem_586;
    }
    else {
        litem_587=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value483=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_587->prev=self->tail;
        litem_587->next=((void*)0);
        __dec_obj96=litem_587->item;
        litem_587->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_587;
        self->tail=litem_587;
    }
    self->len++;
    __result_obj__372 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__372;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_592;
struct sType* __result_obj__375;
struct sType* __result_obj__376;
struct sType* result_593;
struct sType* __result_obj__377;
result_592 = (void*)0;
result_593 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_592,0,sizeof(struct sType*));
        __result_obj__375 = result_592;
        return __result_obj__375;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__376 = self->it->item;
        return __result_obj__376;
    }
    memset(&result_593,0,sizeof(struct sType*));
    __result_obj__377 = result_593;
    return __result_obj__377;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_595;
struct sType* __result_obj__378;
struct sType* __result_obj__379;
struct sType* result_596;
struct sType* __result_obj__380;
result_595 = (void*)0;
result_596 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_595,0,sizeof(struct sType*));
        __result_obj__378 = result_595;
        return __result_obj__378;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__379 = self->it->item;
        return __result_obj__379;
    }
    memset(&result_596,0,sizeof(struct sType*));
    __result_obj__380 = result_596;
    return __result_obj__380;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value490 = (void*)0;
struct list_item$1CVALUE$ph* litem_607;
struct CVALUE* __dec_obj98;
void* __right_value491 = (void*)0;
struct list_item$1CVALUE$ph* litem_608;
struct CVALUE* __dec_obj99;
void* __right_value492 = (void*)0;
struct list_item$1CVALUE$ph* litem_609;
struct CVALUE* __dec_obj100;
struct list$1CVALUE$ph* __result_obj__382;
    if(    self->len==0) {
        litem_607=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value490=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_607->prev=((void*)0);
        litem_607->next=((void*)0);
        __dec_obj98=litem_607->item;
        litem_607->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_607;
        self->head=litem_607;
    }
    else if(    self->len==1) {
        litem_608=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value491=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_608->prev=self->head;
        litem_608->next=((void*)0);
        __dec_obj99=litem_608->item;
        litem_608->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_608;
        self->head->next=litem_608;
    }
    else {
        litem_609=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value492=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_609->prev=self->tail;
        litem_609->next=((void*)0);
        __dec_obj100=litem_609->item;
        litem_609->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_609;
        self->tail=litem_609;
    }
    self->len++;
    __result_obj__382 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__382;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_615;
unsigned int it_616;
struct map$2char$phsFun$ph* __result_obj__383;
    hash_615=string_get_hash_key(((char*)key))%self->size;
    it_616=hash_615;
    while((_Bool)1) {
        if(        self->item_existance[it_616]) {
            if(            string_equals(self->keys[it_616],key)) {
                list$1char$p$p_remove(self->key_list,self->keys[it_616]);
                self->item_existance[it_616]=(_Bool)0;
                if(                1) {
                    (self->keys[it_616] = come_decrement_ref_count2(self->keys[it_616], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_616]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_616],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_616]=((void*)0);
                self->len--;
                break;
            }
            it_616++;
            if(            it_616>=self->size) {
                it_616=0;
            }
            else if(            it_616==hash_615) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__383 = self;
    return __result_obj__383;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_653;
unsigned int hash_654;
unsigned int it_655;
struct sFun* __result_obj__388;
struct sFun* __result_obj__389;
struct sFun* __result_obj__390;
struct sFun* __result_obj__391;
default_value_653 = (void*)0;
    memset(&default_value_653,0,sizeof(struct sFun*));
    hash_654=string_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while((_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            string_equals(self->keys[it_655],key)) {
                __result_obj__388 = come_increment_ref_count(self->items[it_655]);
                come_call_finalizer3(default_value_653,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__388,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__388;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                __result_obj__389 = come_increment_ref_count(default_value_653);
                come_call_finalizer3(default_value_653,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__389,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__389;
            }
        }
        else {
            __result_obj__390 = come_increment_ref_count(default_value_653);
            come_call_finalizer3(default_value_653,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__390,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__390;
        }
    }
    __result_obj__391 = come_increment_ref_count(default_value_653);
    come_call_finalizer3(default_value_653,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__391,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__391;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__395;
void* __right_value638 = (void*)0;
struct sFunCallNode* result_679;
void* __right_value639 = (void*)0;
char* __dec_obj152;
void* __right_value640 = (void*)0;
char* __dec_obj153;
void* __right_value641 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj154;
void* __right_value642 = (void*)0;
struct list$1sType$ph* __dec_obj155;
void* __right_value643 = (void*)0;
struct buffer* __dec_obj156;
struct sFunCallNode* __result_obj__396;
    if(    self==(void*)0) {
        __result_obj__395 = (void*)0;
        return __result_obj__395;
    }
    result_679=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_679->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_679->sname;
        result_679->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj153=result_679->fun_name;
        result_679->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj154=result_679->params;
        result_679->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj154,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj155=result_679->method_generics_types;
        result_679->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj155,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj156=result_679->method_block;
        result_679->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->method_block_sline=self->method_block_sline;
    }
    __result_obj__396 = result_679;
    come_call_finalizer3(result_679,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__396;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_698;
char* __result_obj__402;
char* __result_obj__403;
char* result_699;
char* __result_obj__404;
result_698 = (void*)0;
result_699 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_698,0,sizeof(char*));
        __result_obj__402 = result_698;
        return __result_obj__402;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__403 = self->it->item;
        return __result_obj__403;
    }
    memset(&result_699,0,sizeof(char*));
    __result_obj__404 = result_699;
    return __result_obj__404;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_701;
char* __result_obj__405;
char* __result_obj__406;
char* result_702;
char* __result_obj__407;
result_701 = (void*)0;
result_702 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_701,0,sizeof(char*));
        __result_obj__405 = result_701;
        return __result_obj__405;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__406 = self->it->item;
        return __result_obj__406;
    }
    memset(&result_702,0,sizeof(char*));
    __result_obj__407 = result_702;
    return __result_obj__407;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_705;
int i_706;
struct CVALUE* default_value_707;
struct list$1CVALUE$ph* __result_obj__409;
struct list_item$1CVALUE$ph* it_708;
int i_709;
struct CVALUE* __dec_obj158;
struct list$1CVALUE$ph* __result_obj__410;
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
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_707));
            come_call_finalizer3(default_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__409 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__409;
    }
    it_708=self->head;
    i_709=0;
    while(it_708!=((void*)0)) {
        if(        position==i_709) {
            __dec_obj158=it_708->item;
            it_708->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj158,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_708=it_708->next;
        i_709++;
    }
    __result_obj__410 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__410;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_722;
int i_723;
char* __result_obj__414;
char* default_value_724;
char* __result_obj__415;
default_value_724 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_722=self->head;
    i_723=0;
    while(it_722!=((void*)0)) {
        if(        position==i_723) {
            __result_obj__414 = come_increment_ref_count(it_722->item);
            (__result_obj__414 = come_decrement_ref_count2(__result_obj__414, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__414;
        }
        it_722=it_722->next;
        i_723++;
    }
    memset(&default_value_724,0,sizeof(char*));
    __result_obj__415 = come_increment_ref_count(default_value_724);
    (default_value_724 = come_decrement_ref_count2(default_value_724, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__415 = come_decrement_ref_count2(__result_obj__415, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__415;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__420;
void* __right_value703 = (void*)0;
struct sCurrentNode2* result_740;
void* __right_value704 = (void*)0;
char* __dec_obj161;
struct sCurrentNode2* __result_obj__421;
    if(    self==(void*)0) {
        __result_obj__420 = (void*)0;
        return __result_obj__420;
    }
    result_740=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_740->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_740->sname;
        result_740->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_740->sline_real=self->sline_real;
    }
    __result_obj__421 = result_740;
    come_call_finalizer3(result_740,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__421;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_746;
unsigned int hash_747;
unsigned int it_748;
struct sClass* __result_obj__423;
struct sClass* __result_obj__424;
struct sClass* __result_obj__425;
struct sClass* __result_obj__426;
default_value_746 = (void*)0;
    memset(&default_value_746,0,sizeof(struct sClass*));
    hash_747=string_get_hash_key(((char*)key))%self->size;
    it_748=hash_747;
    while((_Bool)1) {
        if(        self->item_existance[it_748]) {
            if(            string_equals(self->keys[it_748],key)) {
                __result_obj__423 = come_increment_ref_count(self->items[it_748]);
                come_call_finalizer3(default_value_746,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__423,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__423;
            }
            it_748++;
            if(            it_748>=self->size) {
                it_748=0;
            }
            else if(            it_748==hash_747) {
                __result_obj__424 = come_increment_ref_count(default_value_746);
                come_call_finalizer3(default_value_746,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__424,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__424;
            }
        }
        else {
            __result_obj__425 = come_increment_ref_count(default_value_746);
            come_call_finalizer3(default_value_746,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__425,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__425;
        }
    }
    __result_obj__426 = come_increment_ref_count(default_value_746);
    come_call_finalizer3(default_value_746,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__426,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__426;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value749 = (void*)0;
struct buffer* __dec_obj171;
struct sComeCallNode* __result_obj__431;
    ((struct sNodeBase*)(__right_value749=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value749,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj171=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj171,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__431 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__431,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__431;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value750 = (void*)0;
char* __result_obj__432;
    __result_obj__432 = come_increment_ref_count(((char*)(__right_value750=__builtin_string("sComeCallNode"))));
    (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__432 = come_decrement_ref_count2(__result_obj__432, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__432;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_780;
struct buffer* come_block_781;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1CVALUE$ph* come_params_782;
void* __right_value753 = (void*)0;
char* var_name_784;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sType* type__785;
void* __right_value757 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_788=0;
char* Err_789=0;
_Bool _if_conditional30;
_Bool __result_obj__437;
void* __right_value758 = (void*)0;
struct sNode* var_node_790;
_Bool Value_791;
_Bool __result_obj__438;
void* __right_value759 = (void*)0;
struct CVALUE* thread_var_value_792;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct CVALUE* come_value_793;
void* __right_value762 = (void*)0;
char* __dec_obj172;
struct sType* __dec_obj173;
void* __right_value763 = (void*)0;
struct sNode* null_node_794;
_Bool Value_795;
_Bool __result_obj__439;
void* __right_value764 = (void*)0;
struct CVALUE* __dec_obj174;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value767 = (void*)0;
struct sNode* current_stack_frame_node_796;
_Bool Value_797;
_Bool __result_obj__440;
void* __right_value768 = (void*)0;
struct CVALUE* current_stack_frame_value_798;
void* __right_value769 = (void*)0;
char* fun_name_799;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct buffer* come_block2_800;
void* __right_value772 = (void*)0;
char* class_name_801;
void* __right_value773 = (void*)0;
struct sClass* current_stack_frame_struct_802;
void* __right_value774 = (void*)0;
struct buffer* source3_803;
char* p_804;
char* head_805;
int sline_806;
struct buffer* __dec_obj175;
void* __right_value775 = (void*)0;
struct sNode* node_807;
_Bool Value_808;
_Bool __result_obj__441;
struct buffer* __dec_obj176;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct CVALUE* fun_value_809;
void* __right_value778 = (void*)0;
char* __dec_obj177;
struct sType* __dec_obj178;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct buffer* buf_810;
void* __right_value781 = (void*)0;
char* fun_name_811;
int j_812;
struct list$1CVALUE$ph* o2_saved_813;
struct CVALUE* it_814;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct CVALUE* come_value_815;
void* __right_value784 = (void*)0;
char* __dec_obj179;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sType* type_816;
void* __right_value788 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_817=0;
char* Err_818=0;
_Bool _if_conditional31;
_Bool __result_obj__442;
struct sType* __dec_obj180;
_Bool __result_obj__443;
    come_block_sline_780=self->come_block_sline;
    come_block_781=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_782=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1422, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int thread_num_783=0;
    thread_num_783++;
    var_name_784=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_783));
    type__785=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value755=map$2char$phsType$ph$p_at(info->types,((char*)(__right_value754=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value755,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__785==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value757=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_788=multiple_assign_var23->v1;
        Err_789=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_789)),        come_call_finalizer3(__right_value757,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional30) {
            __result_obj__437 = (_Bool)1;
            (Err_789 = come_decrement_ref_count2(Err_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__437;
        }
        else {
        }
        (Err_789 = come_decrement_ref_count2(Err_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_790=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_784),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__785),(_Bool)1,((void*)0),info));
    Value_791=node_compile(var_node_790,info);
    if(    !Value_791) {
        __result_obj__438 = (_Bool)0;
        come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_790) ? var_node_790 = come_decrement_ref_count2(var_node_790, ((struct sNode*)var_node_790)->finalize, ((struct sNode*)var_node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__438;
    }
    else {
    }
    thread_var_value_792=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_793=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1445, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj172=come_value_793->c_value;
    come_value_793->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_792->c_value));
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=come_value_793->type;
    come_value_793->type=(struct sType*)come_increment_ref_count(thread_var_value_792->type);
    come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_793->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_782,(struct CVALUE*)come_increment_ref_count(come_value_793));
    null_node_794=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_795=node_compile(null_node_794,info);
    if(    !Value_795) {
        __result_obj__439 = (_Bool)0;
        come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_790) ? var_node_790 = come_decrement_ref_count2(var_node_790, ((struct sNode*)var_node_790)->finalize, ((struct sNode*)var_node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_792,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_793,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_794) ? null_node_794 = come_decrement_ref_count2(null_node_794, ((struct sNode*)null_node_794)->finalize, ((struct sNode*)null_node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__439;
    }
    else {
    }
    __dec_obj174=come_value_793;
    come_value_793=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj174,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph$p_push_back(come_params_782,(struct CVALUE*)come_increment_ref_count(come_value_793));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1462, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value766=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1462, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_796=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value766,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_797=node_compile(current_stack_frame_node_796,info);
    if(    !Value_797) {
        __result_obj__440 = (_Bool)0;
        come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_790) ? var_node_790 = come_decrement_ref_count2(var_node_790, ((struct sNode*)var_node_790)->finalize, ((struct sNode*)var_node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_792,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_793,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_794) ? null_node_794 = come_decrement_ref_count2(null_node_794, ((struct sNode*)null_node_794)->finalize, ((struct sNode*)null_node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_796) ? current_stack_frame_node_796 = come_decrement_ref_count2(current_stack_frame_node_796, ((struct sNode*)current_stack_frame_node_796)->finalize, ((struct sNode*)current_stack_frame_node_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__440;
    }
    else {
    }
    current_stack_frame_value_798=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_799=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_783));
    come_block2_800=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1472, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    class_name_801=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_800,"void* %s(%s* parent)\n",fun_name_799,class_name_801);
    buffer_append_str(come_block2_800,((char*)(__right_value773=buffer_to_string(come_block_781))));
    (__right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_802=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value774=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_801)));
    come_call_finalizer3(__right_value774,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_803=(struct buffer*)come_increment_ref_count(info->source);
    p_804=info->p;
    head_805=info->head;
    sline_806=info->sline;
    __dec_obj175=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_800);
    come_call_finalizer3(__dec_obj175,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_780;
    node_807=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_808=node_compile(node_807,info);
    if(    !Value_808) {
        __result_obj__441 = (_Bool)0;
        come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_790) ? var_node_790 = come_decrement_ref_count2(var_node_790, ((struct sNode*)var_node_790)->finalize, ((struct sNode*)var_node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_792,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_793,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_794) ? null_node_794 = come_decrement_ref_count2(null_node_794, ((struct sNode*)null_node_794)->finalize, ((struct sNode*)null_node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_796) ? current_stack_frame_node_796 = come_decrement_ref_count2(current_stack_frame_node_796, ((struct sNode*)current_stack_frame_node_796)->finalize, ((struct sNode*)current_stack_frame_node_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(current_stack_frame_value_798,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_block2_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_801 = come_decrement_ref_count2(class_name_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_807) ? node_807 = come_decrement_ref_count2(node_807, ((struct sNode*)node_807)->finalize, ((struct sNode*)node_807)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__441;
    }
    else {
    }
    __dec_obj176=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_803);
    come_call_finalizer3(__dec_obj176,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_804;
    info->head=head_805;
    info->sline=sline_806;
    info->current_stack_frame_struct=current_stack_frame_struct_802;
    fun_value_809=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1506, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj177=fun_value_809->c_value;
    fun_value_809->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_799));
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj178=come_value_793->type;
    come_value_793->type=((void*)0);
    come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_793->var=((void*)0);
    list$1CVALUE$ph$p_add(come_params_782,(struct CVALUE*)come_increment_ref_count(fun_value_809));
    list$1CVALUE$ph$p_add(come_params_782,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_798));
    buf_810=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1516, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    (fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_811=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_810,"(");
    buffer_append_str(buf_810,fun_name_811);
    buffer_append_str(buf_810,"(");
    j_812=0;
    for(    o2_saved_813=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_782)),it_814=list$1CVALUE$ph$p_begin((o2_saved_813));    !list$1CVALUE$ph$p_end((o2_saved_813));    it_814=list$1CVALUE$ph$p_next((o2_saved_813))    ){
        buffer_append_str(buf_810,it_814->c_value);
        if(        j_812!=list$1CVALUE$ph$p_length(come_params_782)-1) {
            buffer_append_str(buf_810,",");
        }
        j_812++;
    }
    come_call_finalizer3(o2_saved_813,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_810,")");
    buffer_append_str(buf_810,", ");
    buffer_append_str(buf_810,thread_var_value_792->c_value);
    buffer_append_str(buf_810,")");
    come_call_finalizer3(come_value_793,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_815=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1539, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj179=come_value_815->c_value;
    come_value_815->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_810));
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_816=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value786=map$2char$phsType$ph$p_at(info->types,((char*)(__right_value785=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value786,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_816==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value788=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_817=multiple_assign_var24->v1;
        Err_818=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_818)),        come_call_finalizer3(__right_value788,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional31) {
            __result_obj__442 = (_Bool)1;
            (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((var_node_790) ? var_node_790 = come_decrement_ref_count2(var_node_790, ((struct sNode*)var_node_790)->finalize, ((struct sNode*)var_node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(thread_var_value_792,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((null_node_794) ? null_node_794 = come_decrement_ref_count2(null_node_794, ((struct sNode*)null_node_794)->finalize, ((struct sNode*)null_node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_796) ? current_stack_frame_node_796 = come_decrement_ref_count2(current_stack_frame_node_796, ((struct sNode*)current_stack_frame_node_796)->finalize, ((struct sNode*)current_stack_frame_node_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(current_stack_frame_value_798,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_block2_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_801 = come_decrement_ref_count2(class_name_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_807) ? node_807 = come_decrement_ref_count2(node_807, ((struct sNode*)node_807)->finalize, ((struct sNode*)node_807)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(fun_value_809,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_811 = come_decrement_ref_count2(fun_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_815,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_816,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__442;
        }
        else {
        }
        (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj180=come_value_815->type;
    come_value_815->type=(struct sType*)come_increment_ref_count(type_816);
    come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_815->var=((void*)0);
    add_come_last_code(info,"%s",come_value_815->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_815));
    __result_obj__443 = (_Bool)1;
    come_call_finalizer3(come_block_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_782,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_784 = come_decrement_ref_count2(var_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type__785,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((var_node_790) ? var_node_790 = come_decrement_ref_count2(var_node_790, ((struct sNode*)var_node_790)->finalize, ((struct sNode*)var_node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(thread_var_value_792,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    ((null_node_794) ? null_node_794 = come_decrement_ref_count2(null_node_794, ((struct sNode*)null_node_794)->finalize, ((struct sNode*)null_node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_796) ? current_stack_frame_node_796 = come_decrement_ref_count2(current_stack_frame_node_796, ((struct sNode*)current_stack_frame_node_796)->finalize, ((struct sNode*)current_stack_frame_node_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(current_stack_frame_value_798,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_801 = come_decrement_ref_count2(class_name_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source3_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_807) ? node_807 = come_decrement_ref_count2(node_807, ((struct sNode*)node_807)->finalize, ((struct sNode*)node_807)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(fun_value_809,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name_811 = come_decrement_ref_count2(fun_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_815,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_816,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__443;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_786;
unsigned int it_787;
struct sType* __result_obj__433;
struct sType* __result_obj__434;
struct sType* __result_obj__435;
struct sType* __result_obj__436;
    hash_786=string_get_hash_key(((char*)key))%self->size;
    it_787=hash_786;
    while((_Bool)1) {
        if(        self->item_existance[it_787]) {
            if(            string_equals(self->keys[it_787],key)) {
                __result_obj__433 = come_increment_ref_count(self->items[it_787]);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__433,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__433;
            }
            it_787++;
            if(            it_787>=self->size) {
                it_787=0;
            }
            else if(            it_787==hash_786) {
                __result_obj__434 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__434,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__434;
            }
        }
        else {
            __result_obj__435 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__435,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__435;
        }
    }
    __result_obj__436 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__436,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__436;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value789 = (void*)0;
struct sNode* __dec_obj181;
struct sComeJoinNode* __result_obj__444;
    ((struct sNodeBase*)(__right_value789=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value789,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj181=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__444 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__444,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__444;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value790 = (void*)0;
char* __result_obj__445;
    __result_obj__445 = come_increment_ref_count(((char*)(__right_value790=__builtin_string("sComeJoinNode"))));
    (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__445 = come_decrement_ref_count2(__result_obj__445, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__445;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_819;
_Bool Value_820;
_Bool __result_obj__446;
void* __right_value791 = (void*)0;
struct CVALUE* come_value_821;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct buffer* buf_822;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct CVALUE* come_value_823;
void* __right_value796 = (void*)0;
char* __dec_obj182;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sType* __dec_obj183;
_Bool __result_obj__447;
    node_819=(struct sNode*)come_increment_ref_count(self->node);
    Value_820=node_compile(node_819,info);
    if(    !Value_820) {
        __result_obj__446 = (_Bool)0;
        ((node_819) ? node_819 = come_decrement_ref_count2(node_819, ((struct sNode*)node_819)->finalize, ((struct sNode*)node_819)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__446;
    }
    else {
    }
    come_value_821=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_822=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1587, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_822,"pthread_join(");
    buffer_append_str(buf_822,come_value_821->c_value);
    buffer_append_str(buf_822,", 0)");
    come_call_finalizer3(come_value_821,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_823=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1592, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj182=come_value_823->c_value;
    come_value_823->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_822));
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=come_value_823->type;
    come_value_823->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1594, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_823->var=((void*)0);
    add_come_last_code(info,"%s",come_value_823->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_823));
    __result_obj__447 = (_Bool)1;
    ((node_819) ? node_819 = come_decrement_ref_count2(node_819, ((struct sNode*)node_819)->finalize, ((struct sNode*)node_819)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(buf_822,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_823,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__447;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value800 = (void*)0;
struct list$1sNode$ph* __dec_obj184;
struct list$1sBlock$ph* __dec_obj185;
struct sBlock* __dec_obj186;
struct sComePollNode* __result_obj__448;
    ((struct sNodeBase*)(__right_value800=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value800,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj184=self->vars;
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj184,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj185=self->blocks;
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj185,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj186=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj186,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__448 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__448,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__448;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value801 = (void*)0;
char* __result_obj__449;
    __result_obj__449 = come_increment_ref_count(((char*)(__right_value801=__builtin_string("sComePollNode"))));
    (__right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__449 = come_decrement_ref_count2(__result_obj__449, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__449;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_828;
struct list$1sBlock$ph* blocks_829;
int time_out_830;
int n_832;
struct list$1sNode$ph* o2_saved_833;
struct sNode* it_836;
_Bool Value_839;
_Bool __result_obj__456;
void* __right_value802 = (void*)0;
struct CVALUE* come_value_840;
int n_841;
struct list$1sNode$ph* o2_saved_842;
struct sNode* it_843;
void* __right_value803 = (void*)0;
_Bool __result_obj__459;
    vars_828=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_829=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_830=self->time_out;
    static int var_num_831=0;
    var_num_831++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_831,list$1sNode$ph$p_length(vars_828));
    n_832=0;
    for(    o2_saved_833=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_836=list$1sNode$ph$p_begin((o2_saved_833));    !list$1sNode$ph$p_end((o2_saved_833));    it_836=list$1sNode$ph$p_next((o2_saved_833))    ){
        Value_839=node_compile(it_836,info);
        if(        !Value_839) {
            __result_obj__456 = (_Bool)0;
            come_call_finalizer3(o2_saved_833,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_828,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_829,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__456;
        }
        else {
        }
        come_value_840=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_831,n_832,come_value_840->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_831,n_832,1);
        n_832++;
        come_call_finalizer3(come_value_840,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_833,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_831,var_num_831,list$1sNode$ph$p_length(vars_828),time_out_830);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_831);
    n_841=0;
    for(    o2_saved_842=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_843=list$1sNode$ph$p_begin((o2_saved_842));    !list$1sNode$ph$p_end((o2_saved_842));    it_843=list$1sNode$ph$p_next((o2_saved_842))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_831,n_841,1);
        transpile_block(((struct sBlock*)(__right_value803=list$1sBlock$ph$p_operator_load_element(blocks_829,n_841))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value803,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_841++;
    }
    come_call_finalizer3(o2_saved_842,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_831);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__459 = (_Bool)1;
    come_call_finalizer3(vars_828,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_829,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__459;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_824;
struct list_item$1sBlock$ph* prev_it_825;
    it_824=self->head;
    while(it_824!=((void*)0)) {
        prev_it_825=it_824;
        it_824=it_824->next;
        come_call_finalizer3(prev_it_825,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        come_call_finalizer3(self->vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        come_call_finalizer3(self->blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_826;
struct list_item$1sBlock$ph* prev_it_827;
    it_826=self->head;
    while(it_826!=((void*)0)) {
        prev_it_827=it_826;
        it_826=it_826->next;
        come_call_finalizer3(prev_it_827,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_834;
struct sNode* __result_obj__450;
struct sNode* __result_obj__451;
struct sNode* result_835;
struct sNode* __result_obj__452;
result_834 = (void*)0;
result_835 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_834,0,sizeof(struct sNode*));
        __result_obj__450 = result_834;
        return __result_obj__450;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__451 = self->it->item;
        return __result_obj__451;
    }
    memset(&result_835,0,sizeof(struct sNode*));
    __result_obj__452 = result_835;
    return __result_obj__452;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_837;
struct sNode* __result_obj__453;
struct sNode* __result_obj__454;
struct sNode* result_838;
struct sNode* __result_obj__455;
result_837 = (void*)0;
result_838 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_837,0,sizeof(struct sNode*));
        __result_obj__453 = result_837;
        return __result_obj__453;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__454 = self->it->item;
        return __result_obj__454;
    }
    memset(&result_838,0,sizeof(struct sNode*));
    __result_obj__455 = result_838;
    return __result_obj__455;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_844;
int i_845;
struct sBlock* __result_obj__457;
struct sBlock* default_value_846;
struct sBlock* __result_obj__458;
default_value_846 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_844=self->head;
    i_845=0;
    while(it_844!=((void*)0)) {
        if(        position==i_845) {
            __result_obj__457 = come_increment_ref_count(it_844->item);
            come_call_finalizer3(__result_obj__457,sBlock_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__457;
        }
        it_844=it_844->next;
        i_845++;
    }
    memset(&default_value_846,0,sizeof(struct sBlock*));
    __result_obj__458 = come_increment_ref_count(default_value_846);
    come_call_finalizer3(default_value_846,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__458,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__458;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value806 = (void*)0;
struct sNode* node_847;
void* __right_value807 = (void*)0;
struct sNode* __dec_obj187;
struct sNode* __result_obj__460;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1677, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value805=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1677, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_847=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value805,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj187=node_847;
    node_847=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_847),info));
    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__460 = come_increment_ref_count(node_847);
    come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__460) ? __result_obj__460 = come_decrement_ref_count2(__result_obj__460, ((struct sNode*)__result_obj__460)->finalize, ((struct sNode*)__result_obj__460)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__460;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value808 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value809 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj189;
struct sLambdaCall* __result_obj__461;
    ((struct sNodeBase*)(__right_value808=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value808,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj188=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj189=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj189,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__461 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__461,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__461;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value810 = (void*)0;
char* __result_obj__462;
    __result_obj__462 = come_increment_ref_count(((char*)(__right_value810=__builtin_string("sLambdaCall"))));
    (__right_value810 = come_decrement_ref_count2(__right_value810, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__462 = come_decrement_ref_count2(__result_obj__462, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__462;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_848;
struct list$1tuple2$2char$phsNode$ph$ph* params_849;
_Bool Value_850;
_Bool __result_obj__463;
void* __right_value811 = (void*)0;
struct CVALUE* come_value_851;
struct sType* lambda_type_852;
void* __right_value812 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_853=0;
char* Err_854=0;
_Bool _if_conditional32;
_Bool __result_obj__464;
void* __right_value813 = (void*)0;
struct sType* result_type_855;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct list$1CVALUE$ph* come_params_856;
void* __right_value816 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_857=0;
char* Err_858=0;
_Bool _if_conditional33;
_Bool __result_obj__465;
_Bool __result_obj__466;
int i_859;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_860;
struct tuple2$2char$phsNode$ph* it_861;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_862=0;
struct sNode* node_863=0;
_Bool Value_864;
_Bool __result_obj__467;
void* __right_value817 = (void*)0;
struct CVALUE* come_value_865;
void* __right_value818 = (void*)0;
_Bool _if_conditional34;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_866=0;
char* Err_867=0;
_Bool _if_conditional35;
_Bool __result_obj__468;
void* __right_value823 = (void*)0;
_Bool _if_conditional36;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct buffer* buf_868;
int j_869;
struct list$1CVALUE$ph* o2_saved_870;
struct CVALUE* it_871;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct CVALUE* come_value2_872;
void* __right_value829 = (void*)0;
char* __dec_obj190;
void* __right_value830 = (void*)0;
struct sType* __dec_obj191;
_Bool __result_obj__469;
    node_848=(struct sNode*)come_increment_ref_count(self->node);
    params_849=self->params;
    Value_850=node_compile(node_848,info);
    if(    !Value_850) {
        __result_obj__463 = (_Bool)0;
        ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__463;
    }
    else {
    }
    come_value_851=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_852=come_value_851->type;
    if(    lambda_type_852->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value812=err_msg(info,"invalid lambda type")));
        come_exception_var_15_853=multiple_assign_var25->v1;
        Err_854=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_854)),        come_call_finalizer3(__right_value812,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional32) {
            __result_obj__464 = (_Bool)1;
            (Err_854 = come_decrement_ref_count2(Err_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_851,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__464;
        }
        else {
        }
        (Err_854 = come_decrement_ref_count2(Err_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_855=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_852->mResultType));
    result_type_855->mStatic=(_Bool)0;
    come_params_856=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1721, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    list$1sType$ph$p_length(lambda_type_852->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_849)&&!lambda_type_852->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value816=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph$p_length(lambda_type_852->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_849))));
        come_exception_var_16_857=multiple_assign_var26->v1;
        Err_858=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_858)),        come_call_finalizer3(__right_value816,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional33) {
            __result_obj__465 = (_Bool)1;
            (Err_858 = come_decrement_ref_count2(Err_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_851,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_856,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__465;
        }
        else {
        }
        __result_obj__466 = (_Bool)0;
        (Err_858 = come_decrement_ref_count2(Err_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_851,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_856,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__466;
        (Err_858 = come_decrement_ref_count2(Err_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_859=0;
    for(    o2_saved_860=(params_849),it_861=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_860));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_860));    it_861=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_860))    ){
        multiple_assign_var27=it_861;
        label_862=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_863=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_864=node_compile(node_863,info);
        if(        !Value_864) {
            __result_obj__467 = (_Bool)0;
            (label_862 = come_decrement_ref_count2(label_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_863) ? node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_851,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_856,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__467;
        }
        else {
        }
        come_value_865=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_852->mVarArgs&&((struct sType*)(__right_value818=list$1sType$ph$p_operator_load_element(lambda_type_852->mParamTypes,i_859)))==((void*)0))),        come_call_finalizer3(__right_value818,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value822=check_assign_type(((char*)(__right_value820=xsprintf("calling param #\%s",((char*)(__right_value819=int_to_string(i_859)))))),((struct sType*)(__right_value821=list$1sType$ph$p_operator_load_element(lambda_type_852->mParamTypes,i_859))),come_value_865->type,come_value_865,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_866=multiple_assign_var28->v1;
            Err_867=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_867)),            (__right_value819 = come_decrement_ref_count2(__right_value819, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value820 = come_decrement_ref_count2(__right_value820, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value821,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value822,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional35) {
                __result_obj__468 = (_Bool)1;
                (Err_867 = come_decrement_ref_count2(Err_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_862 = come_decrement_ref_count2(label_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_863) ? node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_865,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_851,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_856,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__468;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)(__right_value823=list$1sType$ph$p_operator_load_element(lambda_type_852->mParamTypes,i_859)))->mHeap&&come_value_865->type->mHeap)),            come_call_finalizer3(__right_value823,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)(__right_value824=list$1sType$ph$p_operator_load_element(lambda_type_852->mParamTypes,i_859))),come_value_865->type,come_value_865,info,(_Bool)1);
                come_call_finalizer3(__right_value824,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            (Err_867 = come_decrement_ref_count2(Err_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(come_params_856,(struct CVALUE*)come_increment_ref_count(come_value_865));
        i_859++;
        (label_862 = come_decrement_ref_count2(label_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_863) ? node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_865,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_868=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1755, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_868,"(");
    buffer_append_str(buf_868,come_value_851->c_value);
    buffer_append_str(buf_868,")");
    buffer_append_str(buf_868,"(");
    j_869=0;
    for(    o2_saved_870=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_856)),it_871=list$1CVALUE$ph$p_begin((o2_saved_870));    !list$1CVALUE$ph$p_end((o2_saved_870));    it_871=list$1CVALUE$ph$p_next((o2_saved_870))    ){
        buffer_append_str(buf_868,it_871->c_value);
        if(        j_869!=list$1CVALUE$ph$p_length(come_params_856)-1) {
            buffer_append_str(buf_868,",");
        }
        j_869++;
    }
    come_call_finalizer3(o2_saved_870,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_868,")");
    come_value2_872=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1774, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj190=come_value2_872->c_value;
    come_value2_872->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_868));
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_852->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_872,(struct sType*)come_increment_ref_count(lambda_type_852->mResultType),info,(_Bool)0);
    }
    __dec_obj191=come_value2_872->type;
    come_value2_872->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_855));
    come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_872->type->mStatic=(_Bool)0;
    come_value2_872->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_872->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_872));
    __result_obj__469 = (_Bool)1;
    ((node_848) ? node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_851,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_856,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_868,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_872,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__469;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value831 = (void*)0;
struct sType* __dec_obj192;
struct sVarArgTypeName* __result_obj__470;
    ((struct sNodeBase*)(__right_value831=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value831,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj192=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj192,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__470 = come_increment_ref_count(self);
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__470,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__470;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value832 = (void*)0;
char* __result_obj__471;
    __result_obj__471 = come_increment_ref_count(((char*)(__right_value832=__builtin_string("sVarArgTypeName"))));
    (__right_value832 = come_decrement_ref_count2(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__471 = come_decrement_ref_count2(__result_obj__471, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__471;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_873;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct CVALUE* come_value_874;
void* __right_value835 = (void*)0;
char* __dec_obj193;
struct sType* __dec_obj194;
_Bool __result_obj__472;
    type_873=(struct sType*)come_increment_ref_count(self->type);
    come_value_874=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1811, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj193=come_value_874->c_value;
    come_value_874->c_value=(char*)come_increment_ref_count(make_type_name_string(type_873,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=come_value_874->type;
    come_value_874->type=(struct sType*)come_increment_ref_count(type_873);
    come_call_finalizer3(__dec_obj194,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_874->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_874));
    __result_obj__472 = (_Bool)1;
    come_call_finalizer3(type_873,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_874,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__472;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct list$1sType$ph* method_generics_types_875;
void* __right_value838 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_876=0;
char* Err_877=0;
void* __right_value839 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_878=0;
char* name_879=0;
_Bool err_880=0;
void* __right_value840 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_881=0;
char* Err_882=0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_883;
_Bool _va_arg_884;
char* p_885;
int sline_886;
_Bool err_flag_887;
void* __right_value844 = (void*)0;
char* label_888;
void* __right_value845 = (void*)0;
char* __dec_obj195;
char* __dec_obj196;
_Bool no_comma_889;
_Bool in_fun_param_890;
void* __right_value846 = (void*)0;
struct sNode* node_891;
void* __right_value847 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
_Bool guard_break_896;
struct buffer* method_block_897;
int method_block_sline_898;
char* head_899;
void* __right_value853 = (void*)0;
char* tail_900;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct buffer* __dec_obj203;
int len_901;
void* __right_value856 = (void*)0;
char* mem_902;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value859 = (void*)0;
struct sNode* node_903;
void* __right_value860 = (void*)0;
struct sNode* __dec_obj204;
struct sNode* __result_obj__475;
    method_generics_types_875=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1825, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value838=err_msg(info,"unexpected source end")));
                come_exception_var_c1_876=multiple_assign_var29->v1;
                Err_877=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_877)?(puts(Err_877),exit(0)):(0));
                come_call_finalizer3(__right_value838,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_877 = come_decrement_ref_count2(Err_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value839=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_878=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_879=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_880=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value839,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_880) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value840=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_881=multiple_assign_var31->v1;
                    Err_882=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_882)?(puts(Err_882),exit(0)):(0));
                    come_call_finalizer3(__right_value840,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_882 = come_decrement_ref_count2(Err_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph$p_push_back(method_generics_types_875,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_878)));
                come_call_finalizer3(type_878,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_879 = come_decrement_ref_count2(name_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_883=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1863, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    _va_arg_884=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_885=info->p;
        sline_886=info->sline;
        err_flag_887=(_Bool)0;
        label_888=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj195=label_888;
            label_888=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_887=(_Bool)1;
        }
        if(        err_flag_887==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj196=label_888;
            label_888=((void*)0);
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_885;
            info->sline=sline_886;
        }
        no_comma_889=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_890=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_891=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj197=node_891;
        node_891=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_891),info));
        if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_889;
        info->in_fun_param=in_fun_param_890;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_883,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1911, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_888),(struct sNode*)come_increment_ref_count(node_891))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_888 = come_decrement_ref_count2(label_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_891) ? node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_888 = come_decrement_ref_count2(label_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_891) ? node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_884;
    guard_break_896=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_896=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_897=((void*)0);
    method_block_sline_898=0;
    if(    *info->p==123) {
        head_899=info->p;
        method_block_sline_898=info->sline;
        ((char*)(__right_value853=skip_block(info)));
        (__right_value853 = come_decrement_ref_count2(__right_value853, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_900=info->p;
        __dec_obj203=method_block_897;
        method_block_897=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1948, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj203,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_901=tail_900-head_899;
        mem_902=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_901+1)), "05call.c", 1951, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_902,head_899,len_901);
        mem_902[len_901]=0;
        buffer_append_str(method_block_897,mem_902);
        buffer_append_str(method_block_897,"\n");
        (mem_902 = come_decrement_ref_count2(mem_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1961, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value858=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1961, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params_883,guard_break_896,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_875),(struct buffer*)come_increment_ref_count(method_block_897),method_block_sline_898,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_903=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value858,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj204=node_903;
    node_903=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_903),info));
    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__475 = come_increment_ref_count(node_903);
    come_call_finalizer3(method_generics_types_875,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_883,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_897,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_903) ? node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__475) ? __result_obj__475 = come_decrement_ref_count2(__result_obj__475, ((struct sNode*)__result_obj__475)->finalize, ((struct sNode*)__result_obj__475)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__475;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value848 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_892;
struct tuple2$2char$phsNode$ph* __dec_obj198;
void* __right_value849 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_893;
struct tuple2$2char$phsNode$ph* __dec_obj199;
void* __right_value850 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_894;
struct tuple2$2char$phsNode$ph* __dec_obj200;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__473;
    if(    self->len==0) {
        litem_892=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value848=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_892->prev=((void*)0);
        litem_892->next=((void*)0);
        __dec_obj198=litem_892->item;
        litem_892->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_892;
        self->head=litem_892;
    }
    else if(    self->len==1) {
        litem_893=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value849=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_893->prev=self->head;
        litem_893->next=((void*)0);
        __dec_obj199=litem_893->item;
        litem_893->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj199,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_893;
        self->head->next=litem_893;
    }
    else {
        litem_894=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value850=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_894->prev=self->tail;
        litem_894->next=((void*)0);
        __dec_obj200=litem_894->item;
        litem_894->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj200,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_894;
        self->tail=litem_894;
    }
    self->len++;
    __result_obj__473 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__473;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_895;
    result_895=0;
    result_895+=int_get_hash_key(((int)self->v1));
    result_895+=int_get_hash_key(((int)self->v2));
    return result_895;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj201;
struct sNode* __dec_obj202;
struct tuple2$2char$phsNode$ph* __result_obj__474;
    __dec_obj201=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__474 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__474,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__474;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value861 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_904=0;
char* Err_905=0;
struct sNode* __result_obj__476;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value861=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_exception_var_c3_904=multiple_assign_var32->v1;
    Err_905=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_905)?(puts(Err_905),exit(0)):(0));
    come_call_finalizer3(__right_value861,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    stackframe();
    exit(3);
    __result_obj__476 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_905 = come_decrement_ref_count2(Err_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__476) ? __result_obj__476 = come_decrement_ref_count2(__result_obj__476, ((struct sNode*)__result_obj__476)->finalize, ((struct sNode*)__result_obj__476)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__476;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value868 = (void*)0;
struct sNode* __result_obj__479;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1982, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value863=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1982, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__479 = come_increment_ref_count(((struct sNode*)(__right_value868=_inf_value7)));
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value863,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value868) ? __right_value868 = come_decrement_ref_count2(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__479) ? __result_obj__479 = come_decrement_ref_count2(__result_obj__479, ((struct sNode*)__result_obj__479)->finalize, ((struct sNode*)__result_obj__479)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__479;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__477;
void* __right_value864 = (void*)0;
struct sReturnNode* result_906;
void* __right_value865 = (void*)0;
char* __dec_obj205;
void* __right_value866 = (void*)0;
struct sNode* __dec_obj206;
void* __right_value867 = (void*)0;
char* __dec_obj207;
struct sReturnNode* __result_obj__478;
    if(    self==(void*)0) {
        __result_obj__477 = (void*)0;
        return __result_obj__477;
    }
    result_906=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_906->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj205=result_906->sname;
        result_906->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_906->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj206=result_906->value;
        result_906->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj207=result_906->value_source;
        result_906->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__478 = result_906;
    come_call_finalizer3(result_906,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__478;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value872 = (void*)0;
struct sNode* __result_obj__480;
char* head_907;
void* __right_value873 = (void*)0;
struct sNode* value_908;
char* tail_909;
void* __right_value874 = (void*)0;
struct sNode* __dec_obj208;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value878 = (void*)0;
struct sNode* __result_obj__481;
int nest_911;
char* head_912;
int head_sline_913;
int sline_real_914;
void* __right_value879 = (void*)0;
char* buf_915;
_Bool is_type_name__916;
_Bool is_special_word_918;
_Bool define_function_pointer_flag_919;
void* __right_value880 = (void*)0;
_Bool lambda_flag_920;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
char* word2_921;
_Bool fun_name_with_type_name_922;
void* __right_value883 = (void*)0;
char* word2_923;
_Bool call_method_generics_fun_call_924;
void* __right_value884 = (void*)0;
char* __dec_obj209;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
_Bool _if_conditional37;
int nest_925;
_Bool inline_asm_926;
void* __right_value889 = (void*)0;
char* __dec_obj210;
void* __right_value890 = (void*)0;
char* __dec_obj211;
void* __right_value891 = (void*)0;
char* __dec_obj212;
void* __right_value892 = (void*)0;
struct sNode* node_927;
struct sNode* __result_obj__482;
_Bool no_comma_928;
void* __right_value893 = (void*)0;
struct sNode* exp_929;
void* __right_value894 = (void*)0;
struct sNode* exp2_930;
void* __right_value895 = (void*)0;
struct sNode* __result_obj__483;
void* __right_value896 = (void*)0;
char* block_text_931;
char* contents_932;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value902 = (void*)0;
struct sNode* __result_obj__486;
void* __right_value903 = (void*)0;
struct sNode* node_934;
struct sNode* __result_obj__487;
void* __right_value904 = (void*)0;
struct sNode* node_935;
struct sNode* __result_obj__488;
struct buffer* come_block_936;
int come_block_sline_937;
char* head_938;
void* __right_value905 = (void*)0;
char* tail_939;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct buffer* __dec_obj215;
int len_940;
void* __right_value908 = (void*)0;
char* mem_941;
char* head_942;
_Bool no_output_come_code_943;
void* __right_value909 = (void*)0;
char* tail_944;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct buffer* __dec_obj216;
int len_945;
void* __right_value912 = (void*)0;
char* mem_946;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value918 = (void*)0;
struct sNode* node_947;
struct sNode* __result_obj__491;
struct buffer* come_block_949;
int come_block_sline_950;
void* __right_value919 = (void*)0;
struct sNode* node_951;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value925 = (void*)0;
struct sNode* __result_obj__494;
int time_out_953;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct list$1sNode$ph* vars_954;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct list$1sBlock$ph* blocks_955;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sBlock* else_block_956;
void* __right_value932 = (void*)0;
struct sBlock* __dec_obj221;
void* __right_value933 = (void*)0;
struct sNode* var_name_957;
void* __right_value934 = (void*)0;
struct sBlock* block_958;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value984 = (void*)0;
struct sNode* __result_obj__518;
void* __right_value985 = (void*)0;
struct sNode* node_996;
struct sNode* __result_obj__519;
void* __right_value986 = (void*)0;
struct sNode* node_997;
struct sNode* __result_obj__520;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value991 = (void*)0;
struct sNode* __result_obj__523;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value996 = (void*)0;
struct sNode* __result_obj__526;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value1001 = (void*)0;
struct sNode* __result_obj__529;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value1006 = (void*)0;
struct sNode* __result_obj__532;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value1011 = (void*)0;
struct sNode* __result_obj__535;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value1016 = (void*)0;
struct sNode* __result_obj__538;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value1021 = (void*)0;
struct sNode* __result_obj__541;
void* __right_value1022 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_1005=0;
char* name_1006=0;
_Bool err_1007=0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value1028 = (void*)0;
struct sNode* __result_obj__544;
void* __right_value1029 = (void*)0;
struct sNode* node_1009;
struct sNode* __result_obj__545;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct buffer* buf2_1010;
void* __right_value1032 = (void*)0;
char* word_1011;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct list$1sNode$ph* exps_1012;
void* __right_value1035 = (void*)0;
struct sNode* exp_1013;
void* __right_value1036 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_1014=0;
char* Err_1015=0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value1044 = (void*)0;
struct sNode* __result_obj__548;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct buffer* fun_name_1017;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct sType* type_1018;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct sClass* klass_1022;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct sType* __dec_obj250;
void* __right_value1055 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_1023=0;
char* Err_1024=0;
void* __right_value1056 = (void*)0;
char* buf2_1025;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct sNode* node_1026;
struct sNode* __result_obj__553;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
struct buffer* fun_name_1027;
void* __right_value1061 = (void*)0;
char* buf2_1028;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sNode* node_1029;
struct sNode* __result_obj__554;
void* __right_value1064 = (void*)0;
struct sNode* node_1030;
struct sNode* __result_obj__555;
void* __right_value1065 = (void*)0;
struct sNode* node_1031;
struct sNode* __result_obj__556;
void* __right_value1066 = (void*)0;
struct sNode* node_1032;
struct sNode* __result_obj__557;
void* __right_value1067 = (void*)0;
struct sNode* node_1033;
struct sNode* __result_obj__558;
void* __right_value1068 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_1034=0;
char* Err_1035=0;
struct sNode* __result_obj__559;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1995, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value871=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1995, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__480 = come_increment_ref_count(((struct sNode*)(__right_value872=_inf_value8)));
            come_call_finalizer3(__right_value871,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value872) ? __right_value872 = come_decrement_ref_count2(__right_value872, ((struct sNode*)__right_value872)->finalize, ((struct sNode*)__right_value872)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__480) ? __result_obj__480 = come_decrement_ref_count2(__result_obj__480, ((struct sNode*)__result_obj__480)->finalize, ((struct sNode*)__result_obj__480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__480;
        }
        else {
            head_907=info->p;
            value_908=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_909=info->p;
            __dec_obj208=value_908;
            value_908=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_908),info));
            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_910[tail_909-head_907+1];
            memset(&buf_910, 0, sizeof(char)            *(tail_909-head_907+1)            );
            memcpy(buf_910,head_907,tail_909-head_907);
            buf_910[tail_909-head_907]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2007, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value877=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2007, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_908),(char*)come_increment_ref_count(__builtin_string(buf_910)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__481 = come_increment_ref_count(((struct sNode*)(__right_value878=_inf_value9)));
            ((value_908) ? value_908 = come_decrement_ref_count2(value_908, ((struct sNode*)value_908)->finalize, ((struct sNode*)value_908)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(__right_value877,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value878) ? __right_value878 = come_decrement_ref_count2(__right_value878, ((struct sNode*)__right_value878)->finalize, ((struct sNode*)__right_value878)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__481) ? __result_obj__481 = come_decrement_ref_count2(__result_obj__481, ((struct sNode*)__result_obj__481)->finalize, ((struct sNode*)__result_obj__481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__481;
            ((value_908) ? value_908 = come_decrement_ref_count2(value_908, ((struct sNode*)value_908)->finalize, ((struct sNode*)value_908)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_911=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_911++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_911--;
                if(                nest_911==0) {
                    break;
                }
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_912=info->p;
        head_sline_913=info->sline;
        sline_real_914=info->sline_real;
        info->sline_real=info->sline;
        buf_915=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__916=is_type_name(buf_915,info);
        static char* is_special_word_array_917[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_918=charppa_contained(is_special_word_array_917,19,buf_915);
        define_function_pointer_flag_919=(_Bool)0;
        if(        !is_special_word_918&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value880=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value880,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_919=(_Bool)1;
                }
            }
            info->p=head_912;
            info->sline=head_sline_913;
        }
        lambda_flag_920=(_Bool)0;
        if(        !is_special_word_918&&is_type_name__916) {
            info->p=head_912;
            info->sline=head_sline_913;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value881=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value881,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            word2_921=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_921,"lambda")) {
                lambda_flag_920=(_Bool)1;
            }
            info->p=head_912;
            info->sline=head_sline_913;
            (word2_921 = come_decrement_ref_count2(word2_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_922=(_Bool)0;
        if(        !is_special_word_918) {
            info->p=head_912;
            info->sline=head_sline_913;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_923=(char*)come_increment_ref_count(parse_word(info));
                (word2_923 = come_decrement_ref_count2(word2_923, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_922=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_912;
            info->sline=head_sline_913;
        }
        call_method_generics_fun_call_924=(_Bool)0;
        {
            info->p=head_912;
            info->sline=head_sline_913;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj209=buf_915;
                buf_915=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_915,info)&&((struct sVar*)(__right_value886=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value885=__builtin_string(buf_915))))))==((void*)0)&&((struct sVar*)(__right_value888=map$2char$phsVar$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value887=__builtin_string(buf_915))))))==((void*)0)&&*info->p==60)),            (__right_value885 = come_decrement_ref_count2(__right_value885, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value886,sVar_finalize, 0, 1, 0, 0, (void*)0),
            (__right_value887 = come_decrement_ref_count2(__right_value887, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value888,sVar_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional37) {
                nest_925=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_925++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_925==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_924=(_Bool)1;
                }
            }
            info->p=head_912;
            info->sline=head_sline_913;
        }
        inline_asm_926=(_Bool)0;
        {
            info->p=head_912;
            info->sline=head_sline_913;
            __dec_obj210=buf_915;
            buf_915=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_915,"asm")||string_operator_equals(buf_915,"__asm")||string_operator_equals(buf_915,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_926=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj211=buf_915;
                        buf_915=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_926=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_912;
            info->sline=head_sline_913;
        }
        parse_sharp_v5(info);
        __dec_obj212=buf_915;
        buf_915=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_920) {
            info->p=head_912;
            info->sline=head_sline_913;
            node_927=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_914;
            __result_obj__482 = come_increment_ref_count(node_927);
            ((node_927) ? node_927 = come_decrement_ref_count2(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__482) ? __result_obj__482 = come_decrement_ref_count2(__result_obj__482, ((struct sNode*)__result_obj__482)->finalize, ((struct sNode*)__result_obj__482)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__482;
            ((node_927) ? node_927 = come_decrement_ref_count2(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_915,"_Static_assert")||string_operator_equals(buf_915,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_928=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_929=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_928;
            expected_next_character(44,info);
            exp2_930=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__483 = come_increment_ref_count(((struct sNode*)(__right_value895=static_assert_node((struct sNode*)come_increment_ref_count(exp_929),(struct sNode*)come_increment_ref_count(exp2_930),info))));
            ((exp_929) ? exp_929 = come_decrement_ref_count2(exp_929, ((struct sNode*)exp_929)->finalize, ((struct sNode*)exp_929)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_930) ? exp2_930 = come_decrement_ref_count2(exp2_930, ((struct sNode*)exp2_930)->finalize, ((struct sNode*)exp2_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value895) ? __right_value895 = come_decrement_ref_count2(__right_value895, ((struct sNode*)__right_value895)->finalize, ((struct sNode*)__right_value895)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__483) ? __result_obj__483 = come_decrement_ref_count2(__result_obj__483, ((struct sNode*)__result_obj__483)->finalize, ((struct sNode*)__result_obj__483)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__483;
            ((exp_929) ? exp_929 = come_decrement_ref_count2(exp_929, ((struct sNode*)exp_929)->finalize, ((struct sNode*)exp_929)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_930) ? exp2_930 = come_decrement_ref_count2(exp2_930, ((struct sNode*)exp2_930)->finalize, ((struct sNode*)exp2_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_915,"output")&&*info->p==123) {
            block_text_931=(char*)come_increment_ref_count(skip_block(info));
            contents_932=(char*)come_increment_ref_count(block_text_931);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2245, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value898=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2245, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_932),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__486 = come_increment_ref_count(((struct sNode*)(__right_value902=_inf_value10)));
            (block_text_931 = come_decrement_ref_count2(block_text_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_932 = come_decrement_ref_count2(contents_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value898,sOutputNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value902) ? __right_value902 = come_decrement_ref_count2(__right_value902, ((struct sNode*)__right_value902)->finalize, ((struct sNode*)__right_value902)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count2(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__486;
            (block_text_931 = come_decrement_ref_count2(block_text_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_932 = come_decrement_ref_count2(contents_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_915,"extern")) {
            node_934=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__487 = come_increment_ref_count(node_934);
            ((node_934) ? node_934 = come_decrement_ref_count2(node_934, ((struct sNode*)node_934)->finalize, ((struct sNode*)node_934)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__487) ? __result_obj__487 = come_decrement_ref_count2(__result_obj__487, ((struct sNode*)__result_obj__487)->finalize, ((struct sNode*)__result_obj__487)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__487;
            ((node_934) ? node_934 = come_decrement_ref_count2(node_934, ((struct sNode*)node_934)->finalize, ((struct sNode*)node_934)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_915,"string")||string_operator_equals(buf_915,"wstring"))&&*info->p==40) {
            node_935=(struct sNode*)come_increment_ref_count(parse_function_call(buf_915,info,(_Bool)0));
            info->sline_real=sline_real_914;
            __result_obj__488 = come_increment_ref_count(node_935);
            ((node_935) ? node_935 = come_decrement_ref_count2(node_935, ((struct sNode*)node_935)->finalize, ((struct sNode*)node_935)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__488) ? __result_obj__488 = come_decrement_ref_count2(__result_obj__488, ((struct sNode*)__result_obj__488)->finalize, ((struct sNode*)__result_obj__488)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__488;
            ((node_935) ? node_935 = come_decrement_ref_count2(node_935, ((struct sNode*)node_935)->finalize, ((struct sNode*)node_935)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_915,"come")) {
            come_block_936=((void*)0);
            come_block_sline_937=0;
            if(            *info->p==123) {
                head_938=info->p;
                come_block_sline_937=info->sline;
                ((char*)(__right_value905=skip_block(info)));
                (__right_value905 = come_decrement_ref_count2(__right_value905, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_939=info->p;
                __dec_obj215=come_block_936;
                come_block_936=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2270, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj215,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_940=tail_939-head_938;
                mem_941=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_940+1)), "05call.c", 2273, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_941,head_938,len_940);
                mem_941[len_940]=0;
                buffer_append_str(come_block_936,mem_941);
                buffer_append_str(come_block_936,"\n");
                (mem_941 = come_decrement_ref_count2(mem_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_942=info->p;
                come_block_sline_937=info->sline;
                no_output_come_code_943=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value909=expression_v13(info)));
                ((__right_value909) ? __right_value909 = come_decrement_ref_count2(__right_value909, ((struct sNode*)__right_value909)->finalize, ((struct sNode*)__right_value909)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_943;
                tail_944=info->p;
                __dec_obj216=come_block_936;
                come_block_936=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2291, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj216,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_945=tail_944-head_942;
                mem_946=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_945+1)), "05call.c", 2294, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_946,head_942,len_945);
                mem_946[len_945]=0;
                buffer_append_str(come_block_936,"{");
                buffer_append_str(come_block_936,mem_946);
                buffer_append_str(come_block_936,"; }");
                buffer_append_str(come_block_936,"}");
                buffer_append_str(come_block_936,"\n");
                (mem_946 = come_decrement_ref_count2(mem_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2305, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value914=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2305, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_936),come_block_sline_937,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_947=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value914,sComeCallNode_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_914;
            __result_obj__491 = come_increment_ref_count(node_947);
            come_call_finalizer3(come_block_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_947) ? node_947 = come_decrement_ref_count2(node_947, ((struct sNode*)node_947)->finalize, ((struct sNode*)node_947)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__491) ? __result_obj__491 = come_decrement_ref_count2(__result_obj__491, ((struct sNode*)__result_obj__491)->finalize, ((struct sNode*)__result_obj__491)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__491;
            come_call_finalizer3(come_block_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_947) ? node_947 = come_decrement_ref_count2(node_947, ((struct sNode*)node_947)->finalize, ((struct sNode*)node_947)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_915,"come_join")&&*info->p==40) {
            come_block_949=((void*)0);
            come_block_sline_950=0;
            expected_next_character(40,info);
            node_951=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_914;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2319, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value921=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2319, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_951),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__494 = come_increment_ref_count(((struct sNode*)(__right_value925=_inf_value12)));
            come_call_finalizer3(come_block_949,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_951) ? node_951 = come_decrement_ref_count2(node_951, ((struct sNode*)node_951)->finalize, ((struct sNode*)node_951)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value921,sComeJoinNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value925) ? __right_value925 = come_decrement_ref_count2(__right_value925, ((struct sNode*)__right_value925)->finalize, ((struct sNode*)__right_value925)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__494) ? __result_obj__494 = come_decrement_ref_count2(__result_obj__494, ((struct sNode*)__result_obj__494)->finalize, ((struct sNode*)__result_obj__494)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__494;
            come_call_finalizer3(come_block_949,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_951) ? node_951 = come_decrement_ref_count2(node_951, ((struct sNode*)node_951)->finalize, ((struct sNode*)node_951)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_915,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_953=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_953=time_out_953*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_954=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2337, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            blocks_955=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2338, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            else_block_956=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2339, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj221=else_block_956;
                    else_block_956=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj221,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_957=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_958=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph$p_add(vars_954,(struct sNode*)come_increment_ref_count(var_name_957));
                    list$1sBlock$ph$p_add(blocks_955,(struct sBlock*)come_increment_ref_count(block_958));
                    if(                    *info->p==125) {
                        ((var_name_957) ? var_name_957 = come_decrement_ref_count2(var_name_957, ((struct sNode*)var_name_957)->finalize, ((struct sNode*)var_name_957)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(block_958,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name_957) ? var_name_957 = come_decrement_ref_count2(var_name_957, ((struct sNode*)var_name_957)->finalize, ((struct sNode*)var_name_957)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(block_958,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_914;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2369, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value939=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2369, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(vars_954),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_955),(struct sBlock*)come_increment_ref_count(else_block_956),time_out_953,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__518 = come_increment_ref_count(((struct sNode*)(__right_value984=_inf_value13)));
            come_call_finalizer3(vars_954,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_955,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_956,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value939,sComePollNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value984) ? __right_value984 = come_decrement_ref_count2(__right_value984, ((struct sNode*)__right_value984)->finalize, ((struct sNode*)__right_value984)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__518) ? __result_obj__518 = come_decrement_ref_count2(__result_obj__518, ((struct sNode*)__result_obj__518)->finalize, ((struct sNode*)__result_obj__518)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__518;
            come_call_finalizer3(vars_954,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_955,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_956,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_915,"none")&&*info->p==40) {
            node_996=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_914;
            __result_obj__519 = come_increment_ref_count(node_996);
            ((node_996) ? node_996 = come_decrement_ref_count2(node_996, ((struct sNode*)node_996)->finalize, ((struct sNode*)node_996)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__519) ? __result_obj__519 = come_decrement_ref_count2(__result_obj__519, ((struct sNode*)__result_obj__519)->finalize, ((struct sNode*)__result_obj__519)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__519;
            ((node_996) ? node_996 = come_decrement_ref_count2(node_996, ((struct sNode*)node_996)->finalize, ((struct sNode*)node_996)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_915,"some")&&*info->p==40) {
            node_997=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_914;
            __result_obj__520 = come_increment_ref_count(node_997);
            ((node_997) ? node_997 = come_decrement_ref_count2(node_997, ((struct sNode*)node_997)->finalize, ((struct sNode*)node_997)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__520) ? __result_obj__520 = come_decrement_ref_count2(__result_obj__520, ((struct sNode*)__result_obj__520)->finalize, ((struct sNode*)__result_obj__520)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__520;
            ((node_997) ? node_997 = come_decrement_ref_count2(node_997, ((struct sNode*)node_997)->finalize, ((struct sNode*)node_997)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_915,"__func__")||string_operator_equals(buf_915,"__FUNCTION__")) {
            info->sline_real=sline_real_914;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2386, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value988=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2386, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__523 = come_increment_ref_count(((struct sNode*)(__right_value991=_inf_value14)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value988,sFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value991) ? __right_value991 = come_decrement_ref_count2(__right_value991, ((struct sNode*)__right_value991)->finalize, ((struct sNode*)__right_value991)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__523) ? __result_obj__523 = come_decrement_ref_count2(__result_obj__523, ((struct sNode*)__result_obj__523)->finalize, ((struct sNode*)__result_obj__523)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__523;
        }
        else if(        !gComeC&&string_operator_equals(buf_915,"wildcard")) {
            info->sline_real=sline_real_914;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2390, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value993=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2390, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__526 = come_increment_ref_count(((struct sNode*)(__right_value996=_inf_value15)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value993,sWildCard_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value996) ? __right_value996 = come_decrement_ref_count2(__right_value996, ((struct sNode*)__right_value996)->finalize, ((struct sNode*)__right_value996)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__526) ? __result_obj__526 = come_decrement_ref_count2(__result_obj__526, ((struct sNode*)__result_obj__526)->finalize, ((struct sNode*)__result_obj__526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__526;
        }
        else if(        string_operator_equals(buf_915,"__line__")||string_operator_equals(buf_915,"__LINE__")) {
            info->sline_real=sline_real_914;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2394, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value998=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2394, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__529 = come_increment_ref_count(((struct sNode*)(__right_value1001=_inf_value16)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value998,sLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1001) ? __right_value1001 = come_decrement_ref_count2(__right_value1001, ((struct sNode*)__right_value1001)->finalize, ((struct sNode*)__right_value1001)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__529) ? __result_obj__529 = come_decrement_ref_count2(__result_obj__529, ((struct sNode*)__result_obj__529)->finalize, ((struct sNode*)__result_obj__529)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__529;
        }
        else if(        string_operator_equals(buf_915,"__sname__")) {
            info->sline_real=sline_real_914;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2398, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1003=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2398, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__532 = come_increment_ref_count(((struct sNode*)(__right_value1006=_inf_value17)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1003,sSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1006) ? __right_value1006 = come_decrement_ref_count2(__right_value1006, ((struct sNode*)__right_value1006)->finalize, ((struct sNode*)__right_value1006)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__532) ? __result_obj__532 = come_decrement_ref_count2(__result_obj__532, ((struct sNode*)__result_obj__532)->finalize, ((struct sNode*)__result_obj__532)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__532;
        }
        else if(        string_operator_equals(buf_915,"__caller_func__")) {
            info->sline_real=sline_real_914;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2402, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1008=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2402, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__535 = come_increment_ref_count(((struct sNode*)(__right_value1011=_inf_value18)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1008,sCallerFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1011) ? __right_value1011 = come_decrement_ref_count2(__right_value1011, ((struct sNode*)__right_value1011)->finalize, ((struct sNode*)__right_value1011)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__535) ? __result_obj__535 = come_decrement_ref_count2(__result_obj__535, ((struct sNode*)__result_obj__535)->finalize, ((struct sNode*)__result_obj__535)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__535;
        }
        else if(        string_operator_equals(buf_915,"__caller_line__")) {
            info->sline_real=sline_real_914;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2406, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1013=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2406, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__538 = come_increment_ref_count(((struct sNode*)(__right_value1016=_inf_value19)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1013,sCallerLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1016) ? __right_value1016 = come_decrement_ref_count2(__right_value1016, ((struct sNode*)__right_value1016)->finalize, ((struct sNode*)__right_value1016)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__538) ? __result_obj__538 = come_decrement_ref_count2(__result_obj__538, ((struct sNode*)__result_obj__538)->finalize, ((struct sNode*)__result_obj__538)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__538;
        }
        else if(        string_operator_equals(buf_915,"__caller_sname__")) {
            info->sline_real=sline_real_914;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2410, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1018=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2410, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__541 = come_increment_ref_count(((struct sNode*)(__right_value1021=_inf_value20)));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1018,sCallerSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1021) ? __right_value1021 = come_decrement_ref_count2(__right_value1021, ((struct sNode*)__right_value1021)->finalize, ((struct sNode*)__right_value1021)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__541) ? __result_obj__541 = come_decrement_ref_count2(__result_obj__541, ((struct sNode*)__result_obj__541)->finalize, ((struct sNode*)__result_obj__541)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__541;
        }
        else if(        info->va_arg&&is_type_name(buf_915,info)) {
            info->p=head_912;
            info->sline=head_sline_913;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value1022=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_1005=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_1006=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_1007=multiple_assign_var33->v3;
            come_call_finalizer3(__right_value1022,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_914;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2419, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1024=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2419, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_1005),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__544 = come_increment_ref_count(((struct sNode*)(__right_value1028=_inf_value21)));
            come_call_finalizer3(type_1005,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1006 = come_decrement_ref_count2(name_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1024,sVarArgTypeName_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1028) ? __right_value1028 = come_decrement_ref_count2(__right_value1028, ((struct sNode*)__right_value1028)->finalize, ((struct sNode*)__right_value1028)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__544) ? __result_obj__544 = come_decrement_ref_count2(__result_obj__544, ((struct sNode*)__result_obj__544)->finalize, ((struct sNode*)__result_obj__544)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__544;
            come_call_finalizer3(type_1005,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1006 = come_decrement_ref_count2(name_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_915,"sizeof")||string_operator_equals(buf_915,"_Alignof")||string_operator_equals(buf_915,"_Alignas")||string_operator_equals(buf_915,"__alignof__")) {
            node_1009=(struct sNode*)come_increment_ref_count(string_node_v21(buf_915,head_912,head_sline_913,info));
            info->sline_real=sline_real_914;
            __result_obj__545 = come_increment_ref_count(node_1009);
            ((node_1009) ? node_1009 = come_decrement_ref_count2(node_1009, ((struct sNode*)node_1009)->finalize, ((struct sNode*)node_1009)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__545) ? __result_obj__545 = come_decrement_ref_count2(__result_obj__545, ((struct sNode*)__result_obj__545)->finalize, ((struct sNode*)__result_obj__545)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__545;
            ((node_1009) ? node_1009 = come_decrement_ref_count2(node_1009, ((struct sNode*)node_1009)->finalize, ((struct sNode*)node_1009)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_926) {
            buf2_1010=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2428, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p!=40) {
                word_1011=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_1010,word_1011);
                (word_1011 = come_decrement_ref_count2(word_1011, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_1010,40);
            exps_1012=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2439, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_1010,40);
                    info->p++;
                    exp_1013=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_1012,(struct sNode*)come_increment_ref_count(exp_1013));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_1010,41);
                    ((exp_1013) ? exp_1013 = come_decrement_ref_count2(exp_1013, ((struct sNode*)exp_1013)->finalize, ((struct sNode*)exp_1013)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_1010,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_1010,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1036=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_1014=multiple_assign_var34->v1;
                    Err_1015=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_1015)?(puts(Err_1015),exit(0)):(0));
                    come_call_finalizer3(__right_value1036,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_1015 = come_decrement_ref_count2(Err_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_1010,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_914;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2476, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value1039=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2476, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_1010)),(struct list$1sNode$ph*)come_increment_ref_count(exps_1012),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__548 = come_increment_ref_count(((struct sNode*)(__right_value1044=_inf_value22)));
            come_call_finalizer3(buf2_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_1012,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1039,sInlineAssembler_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1044) ? __right_value1044 = come_decrement_ref_count2(__right_value1044, ((struct sNode*)__right_value1044)->finalize, ((struct sNode*)__right_value1044)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__548) ? __result_obj__548 = come_decrement_ref_count2(__result_obj__548, ((struct sNode*)__result_obj__548)->finalize, ((struct sNode*)__result_obj__548)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__548;
            come_call_finalizer3(buf2_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_1012,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_922) {
            fun_name_1017=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2479, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(fun_name_1017,buf_915);
            type_1018=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value1048=map$2char$phsType$ph$p_operator_load_element(info->types,((char*)(__right_value1047=buffer_to_string(fun_name_1017))))))));
            (__right_value1047 = come_decrement_ref_count2(__right_value1047, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1048,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            type_1018==((void*)0)) {
                klass_1022=((struct sClass*)(__right_value1051=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value1050=buffer_to_string(fun_name_1017))))));
                (__right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value1051,sClass_finalize, 0, 1, 0, 0, (void*)0);
                if(                klass_1022) {
                    __dec_obj250=type_1018;
                    type_1018=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2489, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf_915)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj250,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1055=err_msg(info,"null type(%s)",buf_915)));
                    come_exception_var_c5_1023=multiple_assign_var35->v1;
                    Err_1024=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_1024)?(puts(Err_1024),exit(0)):(0));
                    come_call_finalizer3(__right_value1055,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_1024 = come_decrement_ref_count2(Err_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_1018->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_1017,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_1017,"_");
            buf2_1025=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_1017,buf2_1025);
            node_1026=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1057=buffer_to_string(fun_name_1017))),info,(_Bool)0));
            (__right_value1057 = come_decrement_ref_count2(__right_value1057, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_914;
            __result_obj__553 = come_increment_ref_count(node_1026);
            come_call_finalizer3(fun_name_1017,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_1018,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1025 = come_decrement_ref_count2(buf2_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1026) ? node_1026 = come_decrement_ref_count2(node_1026, ((struct sNode*)node_1026)->finalize, ((struct sNode*)node_1026)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__553) ? __result_obj__553 = come_decrement_ref_count2(__result_obj__553, ((struct sNode*)__result_obj__553)->finalize, ((struct sNode*)__result_obj__553)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__553;
            come_call_finalizer3(fun_name_1017,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_1018,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1025 = come_decrement_ref_count2(buf2_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1026) ? node_1026 = come_decrement_ref_count2(node_1026, ((struct sNode*)node_1026)->finalize, ((struct sNode*)node_1026)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_1027=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2524, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(fun_name_1027,buf_915);
            buffer_append_str(fun_name_1027,"_");
            buf2_1028=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_1027,buf2_1028);
            node_1029=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1062=buffer_to_string(fun_name_1027))),info,(_Bool)0));
            (__right_value1062 = come_decrement_ref_count2(__right_value1062, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_914;
            __result_obj__554 = come_increment_ref_count(node_1029);
            come_call_finalizer3(fun_name_1027,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1028 = come_decrement_ref_count2(buf2_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1029) ? node_1029 = come_decrement_ref_count2(node_1029, ((struct sNode*)node_1029)->finalize, ((struct sNode*)node_1029)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__554) ? __result_obj__554 = come_decrement_ref_count2(__result_obj__554, ((struct sNode*)__result_obj__554)->finalize, ((struct sNode*)__result_obj__554)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__554;
            come_call_finalizer3(fun_name_1027,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1028 = come_decrement_ref_count2(buf2_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1029) ? node_1029 = come_decrement_ref_count2(node_1029, ((struct sNode*)node_1029)->finalize, ((struct sNode*)node_1029)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_924) {
            node_1030=(struct sNode*)come_increment_ref_count(parse_function_call(buf_915,info,(_Bool)0));
            info->sline_real=sline_real_914;
            __result_obj__555 = come_increment_ref_count(node_1030);
            ((node_1030) ? node_1030 = come_decrement_ref_count2(node_1030, ((struct sNode*)node_1030)->finalize, ((struct sNode*)node_1030)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__555) ? __result_obj__555 = come_decrement_ref_count2(__result_obj__555, ((struct sNode*)__result_obj__555)->finalize, ((struct sNode*)__result_obj__555)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__555;
            ((node_1030) ? node_1030 = come_decrement_ref_count2(node_1030, ((struct sNode*)node_1030)->finalize, ((struct sNode*)node_1030)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_918&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__916)) {
            node_1031=(struct sNode*)come_increment_ref_count(parse_function_call(buf_915,info,(_Bool)0));
            info->sline_real=sline_real_914;
            __result_obj__556 = come_increment_ref_count(node_1031);
            ((node_1031) ? node_1031 = come_decrement_ref_count2(node_1031, ((struct sNode*)node_1031)->finalize, ((struct sNode*)node_1031)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__556) ? __result_obj__556 = come_decrement_ref_count2(__result_obj__556, ((struct sNode*)__result_obj__556)->finalize, ((struct sNode*)__result_obj__556)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__556;
            ((node_1031) ? node_1031 = come_decrement_ref_count2(node_1031, ((struct sNode*)node_1031)->finalize, ((struct sNode*)node_1031)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_1032=(struct sNode*)come_increment_ref_count(string_node_v21(buf_915,head_912,head_sline_913,info));
            info->sline_real=sline_real_914;
            __result_obj__557 = come_increment_ref_count(node_1032);
            ((node_1032) ? node_1032 = come_decrement_ref_count2(node_1032, ((struct sNode*)node_1032)->finalize, ((struct sNode*)node_1032)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__557) ? __result_obj__557 = come_decrement_ref_count2(__result_obj__557, ((struct sNode*)__result_obj__557)->finalize, ((struct sNode*)__result_obj__557)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__557;
            ((node_1032) ? node_1032 = come_decrement_ref_count2(node_1032, ((struct sNode*)node_1032)->finalize, ((struct sNode*)node_1032)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_915 = come_decrement_ref_count2(buf_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_1033=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__558 = come_increment_ref_count(node_1033);
        ((node_1033) ? node_1033 = come_decrement_ref_count2(node_1033, ((struct sNode*)node_1033)->finalize, ((struct sNode*)node_1033)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__558) ? __result_obj__558 = come_decrement_ref_count2(__result_obj__558, ((struct sNode*)__result_obj__558)->finalize, ((struct sNode*)__result_obj__558)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__558;
        ((node_1033) ? node_1033 = come_decrement_ref_count2(node_1033, ((struct sNode*)node_1033)->finalize, ((struct sNode*)node_1033)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1068=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_exception_var_c6_1034=multiple_assign_var36->v1;
    Err_1035=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_1035)?(puts(Err_1035),exit(0)):(0));
    come_call_finalizer3(__right_value1068,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__559 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1035 = come_decrement_ref_count2(Err_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__559) ? __result_obj__559 = come_decrement_ref_count2(__result_obj__559, ((struct sNode*)__result_obj__559)->finalize, ((struct sNode*)__result_obj__559)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__559;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__484;
void* __right_value899 = (void*)0;
struct sOutputNode* result_933;
void* __right_value900 = (void*)0;
char* __dec_obj213;
void* __right_value901 = (void*)0;
char* __dec_obj214;
struct sOutputNode* __result_obj__485;
    if(    self==(void*)0) {
        __result_obj__484 = (void*)0;
        return __result_obj__484;
    }
    result_933=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_933->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj213=result_933->sname;
        result_933->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_933->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj214=result_933->contents;
        result_933->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__485 = result_933;
    come_call_finalizer3(result_933,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__485;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__489;
void* __right_value915 = (void*)0;
struct sComeCallNode* result_948;
void* __right_value916 = (void*)0;
char* __dec_obj217;
void* __right_value917 = (void*)0;
struct buffer* __dec_obj218;
struct sComeCallNode* __result_obj__490;
    if(    self==(void*)0) {
        __result_obj__489 = (void*)0;
        return __result_obj__489;
    }
    result_948=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_948->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_948->sname;
        result_948->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_948->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj218=result_948->come_block;
        result_948->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_948->come_block_sline=self->come_block_sline;
    }
    __result_obj__490 = result_948;
    come_call_finalizer3(result_948,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__490;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__492;
void* __right_value922 = (void*)0;
struct sComeJoinNode* result_952;
void* __right_value923 = (void*)0;
char* __dec_obj219;
void* __right_value924 = (void*)0;
struct sNode* __dec_obj220;
struct sComeJoinNode* __result_obj__493;
    if(    self==(void*)0) {
        __result_obj__492 = (void*)0;
        return __result_obj__492;
    }
    result_952=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_952->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj219=result_952->sname;
        result_952->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_952->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj220=result_952->node;
        result_952->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__493 = result_952;
    come_call_finalizer3(result_952,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__493;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__495;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__495 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__495,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__495;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value935 = (void*)0;
struct list_item$1sBlock$ph* litem_959;
struct sBlock* __dec_obj222;
void* __right_value936 = (void*)0;
struct list_item$1sBlock$ph* litem_960;
struct sBlock* __dec_obj223;
void* __right_value937 = (void*)0;
struct list_item$1sBlock$ph* litem_961;
struct sBlock* __dec_obj224;
struct list$1sBlock$ph* __result_obj__496;
    if(    self->len==0) {
        litem_959=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value935=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_959->prev=((void*)0);
        litem_959->next=((void*)0);
        __dec_obj222=litem_959->item;
        litem_959->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj222,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_959;
        self->head=litem_959;
    }
    else if(    self->len==1) {
        litem_960=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value936=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_960->prev=self->head;
        litem_960->next=((void*)0);
        __dec_obj223=litem_960->item;
        litem_960->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj223,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_960;
        self->head->next=litem_960;
    }
    else {
        litem_961=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value937=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_961->prev=self->tail;
        litem_961->next=((void*)0);
        __dec_obj224=litem_961->item;
        litem_961->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj224,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_961;
        self->tail=litem_961;
    }
    self->len++;
    __result_obj__496 = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__496;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__497;
void* __right_value940 = (void*)0;
struct sComePollNode* result_962;
void* __right_value941 = (void*)0;
char* __dec_obj225;
void* __right_value942 = (void*)0;
struct list$1sNode$ph* __dec_obj226;
void* __right_value982 = (void*)0;
struct list$1sBlock$ph* __dec_obj236;
void* __right_value983 = (void*)0;
struct sBlock* __dec_obj237;
struct sComePollNode* __result_obj__517;
    if(    self==(void*)0) {
        __result_obj__497 = (void*)0;
        return __result_obj__497;
    }
    result_962=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_962->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj225=result_962->sname;
        result_962->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_962->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj226=result_962->vars;
        result_962->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        come_call_finalizer3(__dec_obj226,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj236=result_962->blocks;
        result_962->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        come_call_finalizer3(__dec_obj236,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj237=result_962->else_block;
        result_962->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj237,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_962->time_out=self->time_out;
    }
    __result_obj__517 = result_962;
    come_call_finalizer3(result_962,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__517;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__498;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct list$1sBlock$ph* result_963;
struct list_item$1sBlock$ph* it_964;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct list$1sBlock$ph* __result_obj__516;
    if(    self==((void*)0)) {
        __result_obj__498 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__498,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__498;
    }
    result_963=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_964=self->head;
    while(it_964!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph$p_add(result_963,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_964->item)));
        }
        else {
            list$1sBlock$ph$p_add(result_963,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_964->item)));
        }
        it_964=it_964->next;
    }
    __result_obj__516 = come_increment_ref_count(result_963);
    come_call_finalizer3(result_963,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__516,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__516;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__499;
void* __right_value945 = (void*)0;
struct sBlock* result_965;
void* __right_value950 = (void*)0;
struct list$1sNode$ph* __dec_obj227;
void* __right_value979 = (void*)0;
struct sVarTable* __dec_obj235;
struct sBlock* __result_obj__515;
    if(    self==(void*)0) {
        __result_obj__499 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__499,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__499;
    }
    result_965=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj227=result_965->mNodes;
        result_965->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj227,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj235=result_965->mVarTable;
        result_965->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj235,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_965->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__515 = come_increment_ref_count(result_965);
    come_call_finalizer3(result_965,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__515,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__515;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__500;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct list$1sNode$ph* result_966;
struct list_item$1sNode$ph* it_967;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct list$1sNode$ph* __result_obj__501;
    if(    self==((void*)0)) {
        __result_obj__500 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__500,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__500;
    }
    result_966=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_967=self->head;
    while(it_967!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_966,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_967->item)));
        }
        else {
            list$1sNode$ph$p_add(result_966,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_967->item)));
        }
        it_967=it_967->next;
    }
    __result_obj__501 = come_increment_ref_count(result_966);
    come_call_finalizer3(result_966,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__501,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__501;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__502;
void* __right_value951 = (void*)0;
struct sVarTable* result_968;
void* __right_value978 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj234;
struct sVarTable* __result_obj__514;
    if(    self==(void*)0) {
        __result_obj__502 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__502,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__502;
    }
    result_968=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj234=result_968->mVars;
        result_968->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph_clone, self->mVars));
        come_call_finalizer3(__dec_obj234,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_968->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_968->mParent=self->mParent;
    }
    __result_obj__514 = come_increment_ref_count(result_968);
    come_call_finalizer3(result_968,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__514,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__514;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__503;
void* __right_value952 = (void*)0;
void* __right_value958 = (void*)0;
struct map$2char$phsVar$ph* result_972;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1char$p* __dec_obj229;
char* it_973;
struct sVar* default_value_974;
void* __right_value961 = (void*)0;
struct sVar* it2_977;
void* __right_value967 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__513;
default_value_974 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__503 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__503,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__503;
    }
    result_972=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 2766, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj229=result_972->key_list;
    result_972->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2768, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj229,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_973=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_973=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_974,0,sizeof(struct sVar*));
        it2_977=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_973,(struct sVar*)come_increment_ref_count(default_value_974)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_972,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_973)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_977)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_972,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_973)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_977)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_972,(char*)come_increment_ref_count(it_973),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_977)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_972,(char*)come_increment_ref_count(it_973),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_977)));
        }
        come_call_finalizer3(default_value_974,sVar_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(it2_977,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__513 = come_increment_ref_count(result_972);
    come_call_finalizer3(result_972,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__513,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__513;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
int i_969;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct list$1char$p* __dec_obj228;
struct map$2char$phsVar$ph* __result_obj__505;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value953=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value954=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2696, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value955=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_969=0;    i_969<128;    i_969++    ){
        self->item_existance[i_969]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj228=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj228,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__505 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__505,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__505;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__504;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__504 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__504,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__504;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_970;
struct list_item$1char$p* prev_it_971;
    it_970=self->head;
    while(it_970!=((void*)0)) {
        prev_it_971=it_970;
        it_970=it_970->next;
        come_call_finalizer3(prev_it_971,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_975;
unsigned int it_976;
struct sVar* __result_obj__506;
struct sVar* __result_obj__507;
struct sVar* __result_obj__508;
struct sVar* __result_obj__509;
    hash_975=string_get_hash_key(((char*)key))%self->size;
    it_976=hash_975;
    while((_Bool)1) {
        if(        self->item_existance[it_976]) {
            if(            string_equals(self->keys[it_976],key)) {
                __result_obj__506 = come_increment_ref_count(self->items[it_976]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__506,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__506;
            }
            it_976++;
            if(            it_976>=self->size) {
                it_976=0;
            }
            else if(            it_976==hash_975) {
                __result_obj__507 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__507,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__507;
            }
        }
        else {
            __result_obj__508 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__508,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__508;
        }
    }
    __result_obj__509 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__509,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__509;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_989;
int it_990;
_Bool same_key_exist_991;
char* it2_992;
struct map$2char$phsVar$ph* __result_obj__510;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_989=string_get_hash_key(((char*)key))%self->size;
    it_990=hash_989;
    while((_Bool)1) {
        if(        self->item_existance[it_990]) {
            if(            string_equals(self->keys[it_990],key)) {
                if(                1) {
                    (self->keys[it_990] = come_decrement_ref_count2(self->keys[it_990], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_990]);
                    self->keys[it_990]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_990]);
                    self->keys[it_990]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_990],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_990]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_990]=item;
                }
                break;
            }
            it_990++;
            if(            it_990>=self->size) {
                it_990=0;
            }
            else if(            it_990==hash_989) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_990]=(_Bool)1;
            if(            1) {
                self->keys[it_990]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_990]=key;
            }
            if(            1) {
                self->items[it_990]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_990]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_991=(_Bool)0;
    for(    it2_992=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_992=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_992,key)) {
            same_key_exist_991=(_Bool)1;
        }
    }
    if(    !same_key_exist_991) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__510 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__510;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_978;
void* __right_value962 = (void*)0;
char** keys_979;
void* __right_value963 = (void*)0;
struct sVar** items_980;
void* __right_value964 = (void*)0;
_Bool* item_existance_981;
int len_982;
char* it_983;
struct sVar* default_value_984;
void* __right_value965 = (void*)0;
struct sVar* it2_985;
unsigned int hash_986;
int n_987;
struct sVar* default_value_988;
void* __right_value966 = (void*)0;
default_value_984 = (void*)0;
default_value_988 = (void*)0;
    size_978=self->size*10;
    keys_979=(char**)come_increment_ref_count(((char**)(__right_value962=(char**)come_calloc(1, sizeof(char*)*(1*(size_978)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_980=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value963=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_978)), "/usr/local/include/comelang.h", 2935, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_981=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value964=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_978)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_982=0;
    for(    it_983=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_983=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_984,0,sizeof(struct sVar*));
        it2_985=((struct sVar*)(__right_value965=map$2char$phsVar$ph$p_at(self,it_983,(struct sVar*)come_increment_ref_count(default_value_984))));
        come_call_finalizer3(__right_value965,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_986=string_get_hash_key(((char*)it_983))%size_978;
        n_987=hash_986;
        while((_Bool)1) {
            if(            item_existance_981[n_987]) {
                n_987++;
                if(                n_987>=size_978) {
                    n_987=0;
                }
                else if(                n_987==hash_986) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_981[n_987]=(_Bool)1;
                keys_979[n_987]=it_983;
                items_980[n_987]=((struct sVar*)(__right_value966=map$2char$phsVar$ph$p_at(self,it_983,(struct sVar*)come_increment_ref_count(default_value_988))));
                come_call_finalizer3(__right_value966,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_982++;
                come_call_finalizer3(default_value_988,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_988,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_984,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_979;
    self->items=items_980;
    self->item_existance=item_existance_981;
    self->size=size_978;
    self->len=len_982;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__511;
void* __right_value968 = (void*)0;
struct sVar* result_993;
void* __right_value969 = (void*)0;
char* __dec_obj230;
void* __right_value970 = (void*)0;
char* __dec_obj231;
void* __right_value971 = (void*)0;
struct sType* __dec_obj232;
void* __right_value972 = (void*)0;
char* __dec_obj233;
struct sVar* __result_obj__512;
    if(    self==(void*)0) {
        __result_obj__511 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__511,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__511;
    }
    result_993=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj230=result_993->mName;
        result_993->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj231=result_993->mCValueName;
        result_993->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj232=result_993->mType;
        result_993->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_993->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_993->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_993->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj233=result_993->mFunName;
        result_993->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__512 = come_increment_ref_count(result_993);
    come_call_finalizer3(result_993,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__512,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__512;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_994;
int i_995;
    for(    i_994=0;    i_994<self->size;    i_994++    ){
        if(        self->item_existance[i_994]) {
            if(            1) {
                come_call_finalizer3(self->items[i_994],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_995=0;    i_995<self->size;    i_995++    ){
        if(        self->item_existance[i_995]) {
            if(            1) {
                (self->keys[i_995] = come_decrement_ref_count2(self->keys[i_995], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__521;
void* __right_value989 = (void*)0;
struct sFuncNode* result_998;
void* __right_value990 = (void*)0;
char* __dec_obj238;
struct sFuncNode* __result_obj__522;
    if(    self==(void*)0) {
        __result_obj__521 = (void*)0;
        return __result_obj__521;
    }
    result_998=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_998->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj238=result_998->sname;
        result_998->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_998->sline_real=self->sline_real;
    }
    __result_obj__522 = result_998;
    come_call_finalizer3(result_998,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__522;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__524;
void* __right_value994 = (void*)0;
struct sWildCard* result_999;
void* __right_value995 = (void*)0;
char* __dec_obj239;
struct sWildCard* __result_obj__525;
    if(    self==(void*)0) {
        __result_obj__524 = (void*)0;
        return __result_obj__524;
    }
    result_999=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_999->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_999->sname;
        result_999->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_999->sline_real=self->sline_real;
    }
    __result_obj__525 = result_999;
    come_call_finalizer3(result_999,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__525;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__527;
void* __right_value999 = (void*)0;
struct sLineNode* result_1000;
void* __right_value1000 = (void*)0;
char* __dec_obj240;
struct sLineNode* __result_obj__528;
    if(    self==(void*)0) {
        __result_obj__527 = (void*)0;
        return __result_obj__527;
    }
    result_1000=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1000->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_1000->sname;
        result_1000->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1000->sline_real=self->sline_real;
    }
    __result_obj__528 = result_1000;
    come_call_finalizer3(result_1000,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__528;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__530;
void* __right_value1004 = (void*)0;
struct sSNameNode* result_1001;
void* __right_value1005 = (void*)0;
char* __dec_obj241;
struct sSNameNode* __result_obj__531;
    if(    self==(void*)0) {
        __result_obj__530 = (void*)0;
        return __result_obj__530;
    }
    result_1001=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1001->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj241=result_1001->sname;
        result_1001->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1001->sline_real=self->sline_real;
    }
    __result_obj__531 = result_1001;
    come_call_finalizer3(result_1001,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__531;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__533;
void* __right_value1009 = (void*)0;
struct sCallerFuncNode* result_1002;
void* __right_value1010 = (void*)0;
char* __dec_obj242;
struct sCallerFuncNode* __result_obj__534;
    if(    self==(void*)0) {
        __result_obj__533 = (void*)0;
        return __result_obj__533;
    }
    result_1002=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1002->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj242=result_1002->sname;
        result_1002->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1002->sline_real=self->sline_real;
    }
    __result_obj__534 = result_1002;
    come_call_finalizer3(result_1002,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__534;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__536;
void* __right_value1014 = (void*)0;
struct sCallerLineNode* result_1003;
void* __right_value1015 = (void*)0;
char* __dec_obj243;
struct sCallerLineNode* __result_obj__537;
    if(    self==(void*)0) {
        __result_obj__536 = (void*)0;
        return __result_obj__536;
    }
    result_1003=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1003->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj243=result_1003->sname;
        result_1003->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1003->sline_real=self->sline_real;
    }
    __result_obj__537 = result_1003;
    come_call_finalizer3(result_1003,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__537;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__539;
void* __right_value1019 = (void*)0;
struct sCallerSNameNode* result_1004;
void* __right_value1020 = (void*)0;
char* __dec_obj244;
struct sCallerSNameNode* __result_obj__540;
    if(    self==(void*)0) {
        __result_obj__539 = (void*)0;
        return __result_obj__539;
    }
    result_1004=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1004->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_1004->sname;
        result_1004->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1004->sline_real=self->sline_real;
    }
    __result_obj__540 = result_1004;
    come_call_finalizer3(result_1004,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__540;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__542;
void* __right_value1025 = (void*)0;
struct sVarArgTypeName* result_1008;
void* __right_value1026 = (void*)0;
char* __dec_obj245;
void* __right_value1027 = (void*)0;
struct sType* __dec_obj246;
struct sVarArgTypeName* __result_obj__543;
    if(    self==(void*)0) {
        __result_obj__542 = (void*)0;
        return __result_obj__542;
    }
    result_1008=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1008->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_1008->sname;
        result_1008->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1008->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj246=result_1008->type;
        result_1008->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj246,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__543 = result_1008;
    come_call_finalizer3(result_1008,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__543;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__546;
void* __right_value1040 = (void*)0;
struct sInlineAssembler* result_1016;
void* __right_value1041 = (void*)0;
char* __dec_obj247;
void* __right_value1042 = (void*)0;
char* __dec_obj248;
void* __right_value1043 = (void*)0;
struct list$1sNode$ph* __dec_obj249;
struct sInlineAssembler* __result_obj__547;
    if(    self==(void*)0) {
        __result_obj__546 = (void*)0;
        return __result_obj__546;
    }
    result_1016=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1016->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj247=result_1016->sname;
        result_1016->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1016->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj248=result_1016->source;
        result_1016->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj249=result_1016->exps;
        result_1016->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj249,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__547 = result_1016;
    come_call_finalizer3(result_1016,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__547;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_1019;
unsigned int hash_1020;
unsigned int it_1021;
struct sType* __result_obj__549;
struct sType* __result_obj__550;
struct sType* __result_obj__551;
struct sType* __result_obj__552;
default_value_1019 = (void*)0;
    memset(&default_value_1019,0,sizeof(struct sType*));
    hash_1020=string_get_hash_key(((char*)key))%self->size;
    it_1021=hash_1020;
    while((_Bool)1) {
        if(        self->item_existance[it_1021]) {
            if(            string_equals(self->keys[it_1021],key)) {
                __result_obj__549 = come_increment_ref_count(self->items[it_1021]);
                come_call_finalizer3(default_value_1019,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__549,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__549;
            }
            it_1021++;
            if(            it_1021>=self->size) {
                it_1021=0;
            }
            else if(            it_1021==hash_1020) {
                __result_obj__550 = come_increment_ref_count(default_value_1019);
                come_call_finalizer3(default_value_1019,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__550,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__550;
            }
        }
        else {
            __result_obj__551 = come_increment_ref_count(default_value_1019);
            come_call_finalizer3(default_value_1019,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__551,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__551;
        }
    }
    __result_obj__552 = come_increment_ref_count(default_value_1019);
    come_call_finalizer3(default_value_1019,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__552,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__552;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1069 = (void*)0;
struct sNode* __result_obj__560;
    __result_obj__560 = come_increment_ref_count(((struct sNode*)(__right_value1069=expression_node_v99(info))));
    ((__right_value1069) ? __right_value1069 = come_decrement_ref_count2(__right_value1069, ((struct sNode*)__right_value1069)->finalize, ((struct sNode*)__right_value1069)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__560) ? __result_obj__560 = come_decrement_ref_count2(__result_obj__560, ((struct sNode*)__result_obj__560)->finalize, ((struct sNode*)__result_obj__560)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__560;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct sNode* __dec_obj251;
struct sNode* __result_obj__561;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct sNode* __dec_obj252;
struct sNode* __result_obj__562;
struct sNode* __result_obj__563;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj251=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__561 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__561) ? __result_obj__561 = come_decrement_ref_count2(__result_obj__561, ((struct sNode*)__result_obj__561)->finalize, ((struct sNode*)__result_obj__561)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__561;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj252=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__562 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__562) ? __result_obj__562 = come_decrement_ref_count2(__result_obj__562, ((struct sNode*)__result_obj__562)->finalize, ((struct sNode*)__result_obj__562)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__562;
    }
    __result_obj__563 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__563) ? __result_obj__563 = come_decrement_ref_count2(__result_obj__563, ((struct sNode*)__result_obj__563)->finalize, ((struct sNode*)__result_obj__563)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__563;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1074 = (void*)0;
struct sNode* node_1036;
void* __right_value1075 = (void*)0;
struct sNode* __dec_obj253;
struct sNode* __result_obj__564;
    node_1036=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj253=node_1036;
    node_1036=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_1036),info));
    if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__564 = come_increment_ref_count(node_1036);
    ((node_1036) ? node_1036 = come_decrement_ref_count2(node_1036, ((struct sNode*)node_1036)->finalize, ((struct sNode*)node_1036)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__564) ? __result_obj__564 = come_decrement_ref_count2(__result_obj__564, ((struct sNode*)__result_obj__564)->finalize, ((struct sNode*)__result_obj__564)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__564;
}

char* get_none_generics_name(char* class_name){
char* p_1037;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
char* __result_obj__565;
void* __right_value1078 = (void*)0;
char* __result_obj__566;
    p_1037=class_name;
    while(*p_1037) {
        if(        *p_1037==36) {
            __result_obj__565 = come_increment_ref_count(((char*)(__right_value1077=charp_substring(((char*)(__right_value1076=__builtin_string(class_name))),0,p_1037-class_name))));
            (__right_value1076 = come_decrement_ref_count2(__right_value1076, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1077 = come_decrement_ref_count2(__right_value1077, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__565 = come_decrement_ref_count2(__result_obj__565, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__565;
        }
        else {
            p_1037++;
        }
    }
    __result_obj__566 = come_increment_ref_count(((char*)(__right_value1078=__builtin_string(class_name))));
    (__right_value1078 = come_decrement_ref_count2(__right_value1078, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__566 = come_decrement_ref_count2(__result_obj__566, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__566;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct buffer* buf_1038;
struct sClass* klass_1039;
char* class_name_1040;
int i_1041;
void* __right_value1081 = (void*)0;
struct sType* type_1042;
void* __right_value1082 = (void*)0;
char* type_name_1043;
int i_1044;
void* __right_value1083 = (void*)0;
char* __result_obj__567;
    buf_1038=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2624, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    klass_1039=generics_type->mClass;
    class_name_1040=klass_1039->mName;
    buffer_append_str(buf_1038,class_name_1040);
    if(    list$1sType$ph$p_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_1038,36);
        buffer_append_char(buf_1038,list$1sType$ph$p_length(generics_type->mGenericsTypes)+48);
        for(        i_1041=0;        i_1041<list$1sType$ph$p_length(generics_type->mGenericsTypes);        i_1041++        ){
            type_1042=((struct sType*)(__right_value1081=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,i_1041)));
            come_call_finalizer3(__right_value1081,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_name_1043=(char*)come_increment_ref_count(create_generics_name(type_1042,info));
            buffer_append_str(buf_1038,type_name_1043);
            buffer_append_char(buf_1038,36);
            for(            i_1044=0;            i_1044<type_1042->mPointerNum;            i_1044++            ){
                buffer_append_char(buf_1038,112);
            }
            if(            type_1042->mHeap) {
                buffer_append_str(buf_1038,"h");
            }
            (type_name_1043 = come_decrement_ref_count2(type_name_1043, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__567 = come_increment_ref_count(((char*)(__right_value1083=buffer_to_string(buf_1038))));
    come_call_finalizer3(buf_1038,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__567 = come_decrement_ref_count2(__result_obj__567, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__567;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1045;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct buffer* buf_1046;
void* __right_value1086 = (void*)0;
char* __dec_obj254;
int i_1047;
void* __right_value1087 = (void*)0;
char* __dec_obj255;
void* __right_value1088 = (void*)0;
char* __dec_obj256;
int i_1048;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
char* __result_obj__568;
struct_name_1045 = (void*)0;
    buf_1046=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2659, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj254=struct_name_1045;
        struct_name_1045=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1046,"$");
            }
            for(            i_1047=0;            i_1047<obj_type->mOriginalTypeNamePointerNum;            i_1047++            ){
                buffer_append_str(buf_1046,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj255=struct_name_1045;
        struct_name_1045=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj256=struct_name_1045;
        struct_name_1045=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1046,"$");
        }
        for(        i_1048=0;        i_1048<obj_type->mPointerNum;        i_1048++        ){
            buffer_append_str(buf_1046,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1046,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1046,"pa");
    }
    __result_obj__568 = come_increment_ref_count(((char*)(__right_value1090=xsprintf("%s%s_%s",struct_name_1045,((char*)(__right_value1089=buffer_to_string(buf_1046))),fun_name))));
    (struct_name_1045 = come_decrement_ref_count2(struct_name_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1090 = come_decrement_ref_count2(__right_value1090, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__568 = come_decrement_ref_count2(__result_obj__568, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__568;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1049;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
struct buffer* buf_1050;
void* __right_value1093 = (void*)0;
char* __dec_obj257;
void* __right_value1094 = (void*)0;
char* __dec_obj258;
int i_1051;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
char* __result_obj__569;
struct_name_1049 = (void*)0;
    buf_1050=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2700, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj257=struct_name_1049;
        struct_name_1049=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj258=struct_name_1049;
        struct_name_1049=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1050,"$");
        }
        for(        i_1051=0;        i_1051<obj_type->mPointerNum;        i_1051++        ){
            buffer_append_str(buf_1050,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1050,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1050,"pa");
    }
    __result_obj__569 = come_increment_ref_count(((char*)(__right_value1096=xsprintf("%s%s_%s",struct_name_1049,((char*)(__right_value1095=buffer_to_string(buf_1050))),fun_name))));
    (struct_name_1049 = come_decrement_ref_count2(struct_name_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1050,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1095 = come_decrement_ref_count2(__right_value1095, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1096 = come_decrement_ref_count2(__right_value1096, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__569 = come_decrement_ref_count2(__result_obj__569, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__569;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1052;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
struct buffer* buf_1053;
void* __right_value1099 = (void*)0;
char* __dec_obj259;
int i_1054;
void* __right_value1100 = (void*)0;
char* __dec_obj260;
void* __right_value1101 = (void*)0;
char* __dec_obj261;
int i_1055;
void* __right_value1102 = (void*)0;
int len_1057;
void* __right_value1103 = (void*)0;
char* __result_obj__570;
struct_name_1052 = (void*)0;
    buf_1053=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2729, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj259=struct_name_1052;
        struct_name_1052=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1053,"$");
            }
            for(            i_1054=0;            i_1054<obj_type->mOriginalTypeNamePointerNum;            i_1054++            ){
                buffer_append_str(buf_1053,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj260=struct_name_1052;
        struct_name_1052=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj261=struct_name_1052;
        struct_name_1052=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1053,"$");
        }
        for(        i_1055=0;        i_1055<obj_type->mPointerNum;        i_1055++        ){
            buffer_append_str(buf_1053,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1053,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1053,"pa");
    }
    char none_method_name_1056[charp_length(fun_name)+1];
    memset(&none_method_name_1056, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_1057=string_length(struct_name_1052)+string_length(((char*)(__right_value1102=buffer_to_string(buf_1053))));
    (__right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_1056,fun_name+len_1057+1,charp_length(fun_name)-len_1057-1);
    none_method_name_1056[charp_length(fun_name)-len_1057-1]=0;
    __result_obj__570 = come_increment_ref_count(((char*)(__right_value1103=__builtin_string(none_method_name_1056))));
    (struct_name_1052 = come_decrement_ref_count2(struct_name_1052, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1053,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1103 = come_decrement_ref_count2(__right_value1103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__570 = come_decrement_ref_count2(__result_obj__570, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__570;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1104 = (void*)0;
char* struct_name_1058;
void* __right_value1105 = (void*)0;
char* __result_obj__571;
    struct_name_1058=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__571 = come_increment_ref_count(((char*)(__right_value1105=xsprintf("%s_%s",struct_name_1058,fun_name))));
    (struct_name_1058 = come_decrement_ref_count2(struct_name_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1105 = come_decrement_ref_count2(__right_value1105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__571 = come_decrement_ref_count2(__result_obj__571, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__571;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1106 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_1059=0;
char* Err_1060=0;
struct sNode* __result_obj__572;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1106=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_exception_var_c7_1059=multiple_assign_var37->v1;
    Err_1060=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_1060)?(puts(Err_1060),exit(0)):(0));
    come_call_finalizer3(__right_value1106,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__572 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1060 = come_decrement_ref_count2(Err_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__572) ? __result_obj__572 = come_decrement_ref_count2(__result_obj__572, ((struct sNode*)__result_obj__572)->finalize, ((struct sNode*)__result_obj__572)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__572;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_1061;
char* p_1062;
int sline_1063;
_Bool err_flag_1064;
void* __right_value1109 = (void*)0;
char* label_1065;
void* __right_value1110 = (void*)0;
char* __dec_obj262;
char* __dec_obj263;
_Bool no_comma_1066;
_Bool in_fun_param_1067;
void* __right_value1111 = (void*)0;
struct sNode* node_1068;
void* __right_value1112 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1121 = (void*)0;
struct sNode* __result_obj__575;
struct sNode* __result_obj__576;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_1061=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2798, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_1062=info->p;
            sline_1063=info->sline;
            err_flag_1064=(_Bool)0;
            label_1065=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj262=label_1065;
                label_1065=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_1064=(_Bool)1;
            }
            if(            err_flag_1064==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj263=label_1065;
                label_1065=((void*)0);
                __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_1062;
                info->sline=sline_1063;
            }
            no_comma_1066=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_1067=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_1068=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj264=node_1068;
            node_1068=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_1068),info));
            if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_1066;
            info->in_fun_param=in_fun_param_1067;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_1061,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2841, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_1065),(struct sNode*)come_increment_ref_count(node_1068))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_1065 = come_decrement_ref_count2(label_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_1068) ? node_1068 = come_decrement_ref_count2(node_1068, ((struct sNode*)node_1068)->finalize, ((struct sNode*)node_1068)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_1065 = come_decrement_ref_count2(label_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1068) ? node_1068 = come_decrement_ref_count2(node_1068, ((struct sNode*)node_1068)->finalize, ((struct sNode*)node_1068)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2859, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1116=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2859, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_1061,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__575 = come_increment_ref_count(((struct sNode*)(__right_value1121=_inf_value23)));
        come_call_finalizer3(params_1061,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value1116,sLambdaCall_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1121) ? __right_value1121 = come_decrement_ref_count2(__right_value1121, ((struct sNode*)__right_value1121)->finalize, ((struct sNode*)__right_value1121)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__575) ? __result_obj__575 = come_decrement_ref_count2(__result_obj__575, ((struct sNode*)__result_obj__575)->finalize, ((struct sNode*)__result_obj__575)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__575;
        come_call_finalizer3(params_1061,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__576 = come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__576) ? __result_obj__576 = come_decrement_ref_count2(__result_obj__576, ((struct sNode*)__result_obj__576)->finalize, ((struct sNode*)__result_obj__576)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__576;
    }
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__573;
void* __right_value1117 = (void*)0;
struct sLambdaCall* result_1069;
void* __right_value1118 = (void*)0;
char* __dec_obj265;
void* __right_value1119 = (void*)0;
struct sNode* __dec_obj266;
void* __right_value1120 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj267;
struct sLambdaCall* __result_obj__574;
    if(    self==(void*)0) {
        __result_obj__573 = (void*)0;
        return __result_obj__573;
    }
    result_1069=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1069->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_1069->sname;
        result_1069->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1069->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj266=result_1069->node;
        result_1069->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj267=result_1069->params;
        result_1069->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj267,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__574 = result_1069;
    come_call_finalizer3(result_1069,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__574;
}

