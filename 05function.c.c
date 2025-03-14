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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph$p_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph$p_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph$p_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph$p_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph$p_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph$p_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list$1sType$ph$p_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1sNode$ph$p_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self);
static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self);
static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self);
static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self);
static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph$p_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph$p_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph$p_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph$p_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right);
static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self);
static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self);
static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph$p_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sSemicolonNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__237,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value260 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value260=__builtin_string("sSemicolonNode"))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sLambdaNode* __result_obj__239;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value261,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->mFun=fun;
    __result_obj__239 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__239,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__239;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__240;
    __result_obj__240 = come_increment_ref_count(((char*)(__right_value262=__builtin_string("sLambdaNode"))));
    (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__240 = come_decrement_ref_count2(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__240;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_350;
int block_level_351;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_352;
void* __right_value265 = (void*)0;
char* __dec_obj23;
void* __right_value304 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__257;
    come_fun_350=info->come_fun;
    info->come_fun=self->mFun;
    block_level_351=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_351;
    come_value_352=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj23=come_value_352->c_value;
    come_value_352->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=come_value_352->type;
    come_value_352->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_352->var=((void*)0);
    add_come_last_code(info,"%s",come_value_352->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_352));
    info->come_fun=come_fun_350;
    __result_obj__257 = (_Bool)1;
    come_call_finalizer3(come_value_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__257;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__241;
void* __right_value266 = (void*)0;
struct sType* result_357;
void* __right_value267 = (void*)0;
struct sType* __dec_obj24;
void* __right_value268 = (void*)0;
struct sType* __dec_obj25;
void* __right_value276 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value277 = (void*)0;
struct sType* __dec_obj30;
void* __right_value278 = (void*)0;
struct sType* __dec_obj31;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value282 = (void*)0;
char* __dec_obj34;
void* __right_value283 = (void*)0;
char* __dec_obj35;
void* __right_value284 = (void*)0;
char* __dec_obj36;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value293 = (void*)0;
char* __dec_obj41;
void* __right_value294 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value302 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value303 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__255;
    if(    self==(void*)0) {
        __result_obj__241 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__241,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__241;
    }
    result_357=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_357->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_357->mOriginalLoadVarType;
        result_357->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_357->mChannelType;
        result_357->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_357->mGenericsTypes;
        result_357->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_357->mNoSolvedGenericsType;
        result_357->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_357->mAnyOriginalType;
        result_357->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_357->mSizeNum;
        result_357->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_357->mAlignas;
        result_357->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_357->mTupleName;
        result_357->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_357->mAttribute;
        result_357->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj36=result_357->mAsmName;
        result_357->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj40=result_357->mArrayNum;
        result_357->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        __dec_obj41=result_357->mOriginalTypeName;
        result_357->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj42=result_357->mParamTypes;
        result_357->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_357->mParamNames;
        result_357->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_357->mResultType;
        result_357->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mVarArgs=self->mVarArgs;
    }
    __result_obj__255 = come_increment_ref_count(result_357);
    come_call_finalizer3(result_357,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__255,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__255;
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
struct list_item$1sType$ph* it_353;
struct list_item$1sType$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_355;
struct list_item$1sNode$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__242;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sType$ph* result_358;
struct list_item$1sType$ph* it_359;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sType$ph* __result_obj__245;
    if(    self==((void*)0)) {
        __result_obj__242 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__242,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__242;
    }
    result_358=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_359=self->head;
    while(it_359!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_358,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_359->item)));
        }
        else {
            list$1sType$ph$p_add(result_358,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_359->item)));
        }
        it_359=it_359->next;
    }
    __result_obj__245 = come_increment_ref_count(result_358);
    come_call_finalizer3(result_358,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__243;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__243 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value271 = (void*)0;
struct list_item$1sType$ph* litem_360;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_361;
struct sType* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1sType$ph* litem_362;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__244;
    if(    self->len==0) {
        litem_360=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value271=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj26=litem_360->item;
        litem_360->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj27=litem_361->item;
        litem_361->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value273=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj28=litem_362->item;
        litem_362->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result_obj__244 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__244;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_363;
struct list_item$1sType$ph* prev_it_364;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        come_call_finalizer3(prev_it_364,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__246;
void* __right_value279 = (void*)0;
struct sNode* result_365;
struct sNode* __result_obj__247;
    if(    self==(void*)0) {
        __result_obj__246 = come_increment_ref_count((void*)0);
        ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count2(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__246;
    }
    result_365=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_365->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_365->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_365->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_365->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_365->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_365->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_365->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_365->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_365->kind=self->kind;
    }
    __result_obj__247 = come_increment_ref_count(result_365);
    ((result_365) ? result_365 = come_decrement_ref_count2(result_365, ((struct sNode*)result_365)->finalize, ((struct sNode*)result_365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count2(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__248;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_366;
struct list_item$1sNode$ph* it_367;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__248,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__248;
    }
    result_366=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_366,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_367->item)));
        }
        else {
            list$1sNode$ph$p_add(result_366,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_367->item)));
        }
        it_367=it_367->next;
    }
    __result_obj__251 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__249;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__249 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_368;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_369;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_370;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__250;
    if(    self->len==0) {
        litem_368=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj37=litem_368->item;
        litem_368->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj38=litem_369->item;
        litem_369->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj39=litem_370->item;
        litem_370->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result_obj__250 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__250;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_371;
struct list_item$1sNode$ph* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__252;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_373;
struct list_item$1char$ph* it_374;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__254;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_373=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_373,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_374->item)));
        }
        else {
            list$1char$ph$p_add(result_373,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_374->item)));
        }
        it_374=it_374->next;
    }
    __result_obj__254 = come_increment_ref_count(result_373);
    come_call_finalizer3(result_373,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__254;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_375;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_376;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_377;
char* __dec_obj45;
struct list$1char$ph* __result_obj__253;
    if(    self->len==0) {
        litem_375=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj43=litem_375->item;
        litem_375->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj44=litem_376->item;
        litem_376->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj45=litem_377->item;
        litem_377->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result_obj__253 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_378;
struct list_item$1char$ph* prev_it_379;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_380;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_381;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_382;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__256;
    if(    self->len==0) {
        litem_380=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj49=litem_380->item;
        litem_380->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_380;
        self->head=litem_380;
    }
    else if(    self->len==1) {
        litem_381=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->head;
        litem_381->next=((void*)0);
        __dec_obj50=litem_381->item;
        litem_381->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_381;
        self->head->next=litem_381;
    }
    else {
        litem_382=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->tail;
        litem_382->next=((void*)0);
        __dec_obj51=litem_382->item;
        litem_382->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_382;
        self->tail=litem_382;
    }
    self->len++;
    __result_obj__256 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__256;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value308 = (void*)0;
struct sFun* __dec_obj52;
struct sFunNode* __result_obj__258;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__258 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sFunNode"))));
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count2(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_383;
int block_level_384;
void* __right_value310 = (void*)0;
    come_fun_383=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_384=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_384;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_383;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sBlock* result_385;
int sline_top_386;
int block_level_387;
char* p_saved_388;
int sline_saved_389;
char* sname_saved_390;
void* __right_value313 = (void*)0;
char* __dec_obj53;
char* __dec_obj54;
struct map$2char$phchar$ph* __dec_obj55;
char* p_393;
int sline_394;
void* __right_value314 = (void*)0;
char* sname_395;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* module_name_396;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1char$ph* params_397;
void* __right_value319 = (void*)0;
char* word_398;
void* __right_value320 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_399=0;
char* Err_400=0;
void* __right_value321 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_401=0;
char* Err_402=0;
void* __right_value322 = (void*)0;
char* __dec_obj56;
void* __right_value323 = (void*)0;
char* __dec_obj57;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
_Bool _if_conditional1;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_406=0;
char* Err_407=0;
struct sBlock* __result_obj__264;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sClassModule* module_408;
void* __right_value329 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_409=0;
char* Err_410=0;
void* __right_value330 = (void*)0;
void* __right_value336 = (void*)0;
struct map$2char$phchar$ph* __dec_obj59;
int i_416;
struct list$1char$ph* o2_saved_417;
char* it_420;
void* __right_value337 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __dec_obj60;
void* __right_value346 = (void*)0;
struct sNode* node_467;
void* __right_value347 = (void*)0;
char* __dec_obj61;
void* __right_value348 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_468=0;
char* Err_469=0;
_Bool omit_semicolon_473;
void* __right_value352 = (void*)0;
char* __dec_obj65;
char* head_488;
void* __right_value353 = (void*)0;
struct sNode* value_489;
char* tail_490;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* node_492;
void* __right_value357 = (void*)0;
char* __dec_obj67;
struct sNode* node_493;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value363 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value364 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_495=0;
char* Err_496=0;
_Bool omit_semicolon_497;
char* p_498;
char* head_499;
void* __right_value365 = (void*)0;
char* source_500;
void* __right_value366 = (void*)0;
struct sNode* node_501;
void* __right_value367 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_502=0;
char* Err_503=0;
struct sBlock* __result_obj__302;
node_493 = (void*)0;
    result_385=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 117, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_386=info->sline_top;
    info->sline_top=info->sline;
    block_level_387=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_388=((void*)0);
        sline_saved_389=0;
        sname_saved_390=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_388) {
                if(                *info->p==0) {
                    info->p=p_saved_388;
                    info->sline=sline_saved_389;
                    __dec_obj53=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_390));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_388=((void*)0);
                    sline_saved_389=0;
                    __dec_obj54=sname_saved_390;
                    sname_saved_390=((void*)0);
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj55=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj55,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_393=info->p;
            sline_394=info->sline;
            sname_395=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_394;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value315=parse_word(info)));
                (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_396=(char*)come_increment_ref_count(parse_word(info));
                params_397=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 173, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_398=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_397,(char*)come_increment_ref_count(word_398));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value320=err_msg(info,"invalid source end")));
                            come_exception_var_c1_399=multiple_assign_var1->v1;
                            Err_400=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_400)?(puts(Err_400),exit(0)):(0));
                            come_call_finalizer3(__right_value320,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_400 = come_decrement_ref_count2(Err_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_398 = come_decrement_ref_count2(word_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value321=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_401=multiple_assign_var2->v1;
                            Err_402=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_402)?(puts(Err_402),exit(0)):(0));
                            come_call_finalizer3(__right_value321,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_402 = come_decrement_ref_count2(Err_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_398 = come_decrement_ref_count2(word_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_388=info->p;
                sline_saved_389=info->sline;
                __dec_obj56=sname_saved_390;
                sname_saved_390=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj57=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_396));
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value325=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value324=__builtin_string(module_name_396))))))==((void*)0))),                (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value325,sClassModule_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"module not found")));
                    come_exception_var_c3_406=multiple_assign_var3->v1;
                    Err_407=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_407)?(puts(Err_407),exit(0)):(0));
                    come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__264 = come_increment_ref_count(((void*)0));
                    (Err_407 = come_decrement_ref_count2(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_396 = come_decrement_ref_count2(module_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_397,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_390 = come_decrement_ref_count2(sname_saved_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_385,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__264,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__264;
                    (Err_407 = come_decrement_ref_count2(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_408=((struct sClassModule*)(__right_value328=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value327=__builtin_string(module_name_396))))));
                (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value328,sClassModule_finalize, 0, 1, 0, 0, (void*)0);
                if(                list$1char$ph$p_length(module_408->mParams)!=list$1char$ph$p_length(params_397)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value329=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_409=multiple_assign_var4->v1;
                    Err_410=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_410)?(puts(Err_410),exit(0)):(0));
                    come_call_finalizer3(__right_value329,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_410 = come_decrement_ref_count2(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj59=info->module_params;
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 227, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj59,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_416=0;
                for(                o2_saved_417=(struct list$1char$ph*)come_increment_ref_count((module_408->mParams)),it_420=list$1char$ph$p_begin((o2_saved_417));                !list$1char$ph$p_end((o2_saved_417));                it_420=list$1char$ph$p_next((o2_saved_417))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_420)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value343=list$1char$ph$p_operator_load_element(params_397,i_416))))));
                    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_416++;
                }
                come_call_finalizer3(o2_saved_417,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_408->mText;
                info->sline=module_408->mSLine;
                __dec_obj60=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_408->mSName));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_396 = come_decrement_ref_count2(module_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_397,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_467=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj61=info->sname;
            info->sname=(char*)come_increment_ref_count(node_467->sname(node_467->_protocol_obj));
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_467->sline(node_467->_protocol_obj);
            if(            node_467==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value348=err_msg(info,"Invalid expression")));
                come_exception_var_c5_468=multiple_assign_var5->v1;
                Err_469=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_469)?(puts(Err_469),exit(0)):(0));
                come_call_finalizer3(__right_value348,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_469 = come_decrement_ref_count2(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_467));
            parse_sharp_v5(info);
            if(            node_467->terminated(node_467->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_473=(_Bool)1;
            if(            node_467->terminated(node_467->_protocol_obj)) {
                omit_semicolon_473=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_473=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_385->mOmitSemicolon=omit_semicolon_473;
                if(                omit_semicolon_473&&in_function) {
                    list$1sNode$ph$p_delete(result_385->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_393;
                    info->sline=sline_394;
                    __dec_obj65=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_395));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_488=info->p;
                    value_489=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_490=info->p;
                    __dec_obj66=value_489;
                    value_489=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_489),info));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_491[tail_490-head_488+1];
                    memset(&buf_491, 0, sizeof(char)                    *(tail_490-head_488+1)                    );
                    memcpy(buf_491,head_488,tail_490-head_488);
                    buf_491[tail_490-head_488]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_492=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_489),(char*)come_increment_ref_count(__builtin_string(buf_491)),info));
                    list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_492));
                    ((value_489) ? value_489 = come_decrement_ref_count2(value_489, ((struct sNode*)value_489)->finalize, ((struct sNode*)value_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_467) ? node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_489) ? value_489 = come_decrement_ref_count2(value_489, ((struct sNode*)value_489)->finalize, ((struct sNode*)value_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_467) ? node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_467) ? node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_388) {
            if(            info->p==0) {
                info->p=p_saved_388;
                info->sline=sline_saved_389;
                __dec_obj67=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_390));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_388=((void*)0);
                sline_saved_389=0;
            }
        }
        (sname_saved_390 = come_decrement_ref_count2(sname_saved_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 331, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value359=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 331, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj69=node_493;
            node_493=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value359,sSemicolonNode_finalize, 0, 1, 0, 0, (void*)0);
            list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_493));
        }
        else {
            __dec_obj70=node_493;
            node_493=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_493==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value364=err_msg(info,"Invalid expression")));
                come_exception_var_c6_495=multiple_assign_var6->v1;
                Err_496=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_496)?(puts(Err_496),exit(0)):(0));
                come_call_finalizer3(__right_value364,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_493->terminated(node_493->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_497=(_Bool)1;
            if(            node_493->terminated(node_493->_protocol_obj)) {
                omit_semicolon_497=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_497=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_385->mOmitSemicolon=omit_semicolon_497;
            list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_493));
        }
        ((node_493) ? node_493 = come_decrement_ref_count2(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_498=info->p;
        head_499=info->head;
        source_500=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_500;
        info->head=source_500;
        node_501=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_501==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value367=err_msg(info,"Invalid expression")));
            come_exception_var_c7_502=multiple_assign_var7->v1;
            Err_503=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_503)?(puts(Err_503),exit(0)):(0));
            come_call_finalizer3(__right_value367,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_503 = come_decrement_ref_count2(Err_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_501));
        info->p=p_498;
        info->head=head_499;
        (source_500 = come_decrement_ref_count2(source_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_501) ? node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_387;
    __result_obj__302 = come_increment_ref_count(result_385);
    come_call_finalizer3(result_385,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__302,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__302;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_391;
int i_392;
    for(    i_391=0;    i_391<self->size;    i_391++    ){
        if(        self->item_existance[i_391]) {
            if(            1) {
                (self->items[i_391] = come_decrement_ref_count2(self->items[i_391], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_392=0;    i_392<self->size;    i_392++    ){
        if(        self->item_existance[i_392]) {
            if(            1) {
                (self->keys[i_392] = come_decrement_ref_count2(self->keys[i_392], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_403;
unsigned int hash_404;
unsigned int it_405;
struct sClassModule* __result_obj__260;
struct sClassModule* __result_obj__261;
struct sClassModule* __result_obj__262;
struct sClassModule* __result_obj__263;
default_value_403 = (void*)0;
    memset(&default_value_403,0,sizeof(struct sClassModule*));
    hash_404=string_get_hash_key(((char*)key))%self->size;
    it_405=hash_404;
    while((_Bool)1) {
        if(        self->item_existance[it_405]) {
            if(            string_equals(self->keys[it_405],key)) {
                __result_obj__260 = come_increment_ref_count(self->items[it_405]);
                come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__260,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__260;
            }
            it_405++;
            if(            it_405>=self->size) {
                it_405=0;
            }
            else if(            it_405==hash_404) {
                __result_obj__261 = come_increment_ref_count(default_value_403);
                come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__261,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__261;
            }
        }
        else {
            __result_obj__262 = come_increment_ref_count(default_value_403);
            come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__262,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__262;
        }
    }
    __result_obj__263 = come_increment_ref_count(default_value_403);
    come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__263,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__263;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self){
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
int i_411;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct list$1char$p* __dec_obj58;
struct map$2char$phchar$ph* __result_obj__266;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value331=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value332=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2696, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value333=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_411=0;    i_411<128;    i_411++    ){
        self->item_existance[i_411]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj58=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj58,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__266 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__266,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__266;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__265;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__265,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__265;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_412;
struct list_item$1char$p* prev_it_413;
    it_412=self->head;
    while(it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        come_call_finalizer3(prev_it_413,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_414;
int i_415;
    for(    i_414=0;    i_414<self->size;    i_414++    ){
        if(        self->item_existance[i_414]) {
            if(            1) {
                (self->items[i_414] = come_decrement_ref_count2(self->items[i_414], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_415=0;    i_415<self->size;    i_415++    ){
        if(        self->item_existance[i_415]) {
            if(            1) {
                (self->keys[i_415] = come_decrement_ref_count2(self->keys[i_415], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_418;
char* __result_obj__267;
char* __result_obj__268;
char* result_419;
char* __result_obj__269;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_418,0,sizeof(char*));
        __result_obj__267 = result_418;
        return __result_obj__267;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__268 = self->it->item;
        return __result_obj__268;
    }
    memset(&result_419,0,sizeof(char*));
    __result_obj__269 = result_419;
    return __result_obj__269;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_421;
char* __result_obj__270;
char* __result_obj__271;
char* result_422;
char* __result_obj__272;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_421,0,sizeof(char*));
        __result_obj__270 = result_421;
        return __result_obj__270;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__271 = self->it->item;
        return __result_obj__271;
    }
    memset(&result_422,0,sizeof(char*));
    __result_obj__272 = result_422;
    return __result_obj__272;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph$p_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_440;
unsigned int it_441;
_Bool same_key_exist_458;
char* it2_461;
struct map$2char$phchar$ph* __result_obj__293;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph$p_rehash(self);
    }
    hash_440=string_get_hash_key(((char*)key))%self->size;
    it_441=hash_440;
    while((_Bool)1) {
        if(        self->item_existance[it_441]) {
            if(            string_equals(self->keys[it_441],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_441]);
                    (self->keys[it_441] = come_decrement_ref_count2(self->keys[it_441], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_441]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_441]);
                    self->keys[it_441]=key;
                }
                if(                1) {
                    (self->items[it_441] = come_decrement_ref_count2(self->items[it_441], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_441]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_441]=item;
                }
                break;
            }
            it_441++;
            if(            it_441>=self->size) {
                it_441=0;
            }
            else if(            it_441==hash_440) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_441]=(_Bool)1;
            if(            1) {
                self->keys[it_441]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_441]=key;
            }
            if(            1) {
                self->items[it_441]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_441]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_458=(_Bool)0;
    for(    it2_461=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_461=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_461,key)) {
            same_key_exist_458=(_Bool)1;
        }
    }
    if(    !same_key_exist_458) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__293 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__293;
}

static void map$2char$phchar$ph$p_rehash(struct map$2char$phchar$ph* self){
int size_423;
void* __right_value338 = (void*)0;
char** keys_424;
void* __right_value339 = (void*)0;
char** items_425;
void* __right_value340 = (void*)0;
_Bool* item_existance_426;
int len_427;
char* it_430;
char* default_value_433;
void* __right_value341 = (void*)0;
char* it2_434;
unsigned int hash_437;
int n_438;
char* default_value_439;
void* __right_value342 = (void*)0;
default_value_433 = (void*)0;
default_value_439 = (void*)0;
    size_423=self->size*10;
    keys_424=(char**)come_increment_ref_count(((char**)(__right_value338=(char**)come_calloc(1, sizeof(char*)*(1*(size_423)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_425=(char**)come_increment_ref_count(((char**)(__right_value339=(char**)come_calloc(1, sizeof(char*)*(1*(size_423)), "/usr/local/include/comelang.h", 2935, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_426=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value340=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_423)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_427=0;
    for(    it_430=map$2char$phchar$ph$p_begin(self);    !map$2char$phchar$ph$p_end(self);    it_430=map$2char$phchar$ph$p_next(self)    ){
        memset(&default_value_433,0,sizeof(char*));
        it2_434=((char*)(__right_value341=map$2char$phchar$ph$p_at(self,it_430,(char*)come_increment_ref_count(default_value_433))));
        (__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_437=string_get_hash_key(((char*)it_430))%size_423;
        n_438=hash_437;
        while((_Bool)1) {
            if(            item_existance_426[n_438]) {
                n_438++;
                if(                n_438>=size_423) {
                    n_438=0;
                }
                else if(                n_438==hash_437) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_426[n_438]=(_Bool)1;
                keys_424[n_438]=it_430;
                items_425[n_438]=((char*)(__right_value342=map$2char$phchar$ph$p_at(self,it_430,(char*)come_increment_ref_count(default_value_439))));
                (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_427++;
                (default_value_439 = come_decrement_ref_count2(default_value_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_439 = come_decrement_ref_count2(default_value_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_433 = come_decrement_ref_count2(default_value_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_424;
    self->items=items_425;
    self->item_existance=item_existance_426;
    self->size=size_423;
    self->len=len_427;
}

static char* map$2char$phchar$ph$p_begin(struct map$2char$phchar$ph* self){
char* result_428;
char* __result_obj__273;
char* __result_obj__274;
char* result_429;
char* __result_obj__275;
result_428 = (void*)0;
result_429 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_428,0,sizeof(char*));
        __result_obj__273 = result_428;
        return __result_obj__273;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__274 = self->key_list->it->item;
        return __result_obj__274;
    }
    memset(&result_429,0,sizeof(char*));
    __result_obj__275 = result_429;
    return __result_obj__275;
}

static _Bool map$2char$phchar$ph$p_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph$p_next(struct map$2char$phchar$ph* self){
char* result_431;
char* __result_obj__276;
char* __result_obj__277;
char* result_432;
char* __result_obj__278;
result_431 = (void*)0;
result_432 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_431,0,sizeof(char*));
        __result_obj__276 = result_431;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__277 = self->key_list->it->item;
        return __result_obj__277;
    }
    memset(&result_432,0,sizeof(char*));
    __result_obj__278 = result_432;
    return __result_obj__278;
}

static char* map$2char$phchar$ph$p_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_435;
unsigned int it_436;
char* __result_obj__279;
char* __result_obj__280;
char* __result_obj__281;
char* __result_obj__282;
    hash_435=string_get_hash_key(((char*)key))%self->size;
    it_436=hash_435;
    while((_Bool)1) {
        if(        self->item_existance[it_436]) {
            if(            string_equals(self->keys[it_436],key)) {
                __result_obj__279 = come_increment_ref_count(self->items[it_436]);
                (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__279 = come_decrement_ref_count2(__result_obj__279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__279;
            }
            it_436++;
            if(            it_436>=self->size) {
                it_436=0;
            }
            else if(            it_436==hash_435) {
                __result_obj__280 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__280 = come_decrement_ref_count2(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__280;
            }
        }
        else {
            __result_obj__281 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__281 = come_decrement_ref_count2(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__281;
        }
    }
    __result_obj__282 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__282 = come_decrement_ref_count2(__result_obj__282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__282;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_442;
struct list_item$1char$p* it_443;
struct list$1char$p* __result_obj__286;
    it2_442=0;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        if(        charp_equals(it_443->item,item)) {
            list$1char$p$p_delete(self,it2_442,it2_442+1);
            break;
        }
        it2_442++;
        it_443=it_443->next;
    }
    __result_obj__286 = self;
    return __result_obj__286;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_444;
struct list$1char$p* __result_obj__283;
struct list_item$1char$p* it_447;
int i_448;
struct list_item$1char$p* prev_it_449;
struct list_item$1char$p* it_450;
int i_451;
struct list_item$1char$p* prev_it_452;
struct list_item$1char$p* it_453;
struct list_item$1char$p* head_prev_it_454;
struct list_item$1char$p* tail_it_455;
int i_456;
struct list_item$1char$p* prev_it_457;
struct list$1char$p* __result_obj__285;
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
        __result_obj__283 = self;
        return __result_obj__283;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_447=self->head;
        i_448=0;
        while(it_447!=((void*)0)) {
            if(            i_448<tail) {
                prev_it_449=it_447;
                it_447=it_447->next;
                i_448++;
                come_call_finalizer3(prev_it_449,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_448==tail) {
                self->head=it_447;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_447=it_447->next;
                i_448++;
            }
        }
    }
    else if(    tail==self->len) {
        it_450=self->head;
        i_451=0;
        while(it_450!=((void*)0)) {
            if(            i_451==head) {
                self->tail=it_450->prev;
                self->tail->next=((void*)0);
            }
            if(            i_451>=head) {
                prev_it_452=it_450;
                it_450=it_450->next;
                i_451++;
                come_call_finalizer3(prev_it_452,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_450=it_450->next;
                i_451++;
            }
        }
    }
    else {
        it_453=self->head;
        head_prev_it_454=((void*)0);
        tail_it_455=((void*)0);
        i_456=0;
        while(it_453!=((void*)0)) {
            if(            i_456==head) {
                head_prev_it_454=it_453->prev;
            }
            if(            i_456==tail) {
                tail_it_455=it_453;
            }
            if(            i_456>=head&&i_456<tail) {
                prev_it_457=it_453;
                it_453=it_453->next;
                i_456++;
                come_call_finalizer3(prev_it_457,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_453=it_453->next;
                i_456++;
            }
        }
        if(        head_prev_it_454!=((void*)0)) {
            head_prev_it_454->next=tail_it_455;
        }
        if(        tail_it_455!=((void*)0)) {
            tail_it_455->prev=head_prev_it_454;
        }
    }
    __result_obj__285 = self;
    return __result_obj__285;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_445;
struct list_item$1char$p* prev_it_446;
struct list$1char$p* __result_obj__284;
    it_445=self->head;
    while(it_445!=((void*)0)) {
        prev_it_446=it_445;
        it_445=it_445->next;
        come_call_finalizer3(prev_it_446,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__284 = self;
    return __result_obj__284;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_459;
char* __result_obj__287;
char* __result_obj__288;
char* result_460;
char* __result_obj__289;
result_459 = (void*)0;
result_460 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_459,0,sizeof(char*));
        __result_obj__287 = result_459;
        return __result_obj__287;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__288 = self->it->item;
        return __result_obj__288;
    }
    memset(&result_460,0,sizeof(char*));
    __result_obj__289 = result_460;
    return __result_obj__289;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_462;
char* __result_obj__290;
char* __result_obj__291;
char* result_463;
char* __result_obj__292;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_462,0,sizeof(char*));
        __result_obj__290 = result_462;
        return __result_obj__290;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__291 = self->it->item;
        return __result_obj__291;
    }
    memset(&result_463,0,sizeof(char*));
    __result_obj__292 = result_463;
    return __result_obj__292;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_464;
int i_465;
char* __result_obj__294;
char* default_value_466;
char* __result_obj__295;
default_value_466 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __result_obj__294 = come_increment_ref_count(it_464->item);
            (__result_obj__294 = come_decrement_ref_count2(__result_obj__294, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__294;
        }
        it_464=it_464->next;
        i_465++;
    }
    memset(&default_value_466,0,sizeof(char*));
    __result_obj__295 = come_increment_ref_count(default_value_466);
    (default_value_466 = come_decrement_ref_count2(default_value_466, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__295 = come_decrement_ref_count2(__result_obj__295, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value349 = (void*)0;
struct list_item$1sNode$ph* litem_470;
struct sNode* __dec_obj62;
void* __right_value350 = (void*)0;
struct list_item$1sNode$ph* litem_471;
struct sNode* __dec_obj63;
void* __right_value351 = (void*)0;
struct list_item$1sNode$ph* litem_472;
struct sNode* __dec_obj64;
struct list$1sNode$ph* __result_obj__296;
    if(    self->len==0) {
        litem_470=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value349=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_470->prev=((void*)0);
        litem_470->next=((void*)0);
        __dec_obj62=litem_470->item;
        litem_470->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_470;
        self->head=litem_470;
    }
    else if(    self->len==1) {
        litem_471=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value350=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_471->prev=self->head;
        litem_471->next=((void*)0);
        __dec_obj63=litem_471->item;
        litem_471->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_471;
        self->head->next=litem_471;
    }
    else {
        litem_472=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value351=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_472->prev=self->tail;
        litem_472->next=((void*)0);
        __dec_obj64=litem_472->item;
        litem_472->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_472;
        self->tail=litem_472;
    }
    self->len++;
    __result_obj__296 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__296;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_474;
struct list$1sNode$ph* __result_obj__297;
struct list_item$1sNode$ph* it_477;
int i_478;
struct list_item$1sNode$ph* prev_it_479;
struct list_item$1sNode$ph* it_480;
int i_481;
struct list_item$1sNode$ph* prev_it_482;
struct list_item$1sNode$ph* it_483;
struct list_item$1sNode$ph* head_prev_it_484;
struct list_item$1sNode$ph* tail_it_485;
int i_486;
struct list_item$1sNode$ph* prev_it_487;
struct list$1sNode$ph* __result_obj__299;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_474=tail;
        tail=head;
        head=tmp_474;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__297 = self;
        return __result_obj__297;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_477=self->head;
        i_478=0;
        while(it_477!=((void*)0)) {
            if(            i_478<tail) {
                prev_it_479=it_477;
                it_477=it_477->next;
                i_478++;
                come_call_finalizer3(prev_it_479,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_478==tail) {
                self->head=it_477;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_477=it_477->next;
                i_478++;
            }
        }
    }
    else if(    tail==self->len) {
        it_480=self->head;
        i_481=0;
        while(it_480!=((void*)0)) {
            if(            i_481==head) {
                self->tail=it_480->prev;
                self->tail->next=((void*)0);
            }
            if(            i_481>=head) {
                prev_it_482=it_480;
                it_480=it_480->next;
                i_481++;
                come_call_finalizer3(prev_it_482,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_480=it_480->next;
                i_481++;
            }
        }
    }
    else {
        it_483=self->head;
        head_prev_it_484=((void*)0);
        tail_it_485=((void*)0);
        i_486=0;
        while(it_483!=((void*)0)) {
            if(            i_486==head) {
                head_prev_it_484=it_483->prev;
            }
            if(            i_486==tail) {
                tail_it_485=it_483;
            }
            if(            i_486>=head&&i_486<tail) {
                prev_it_487=it_483;
                it_483=it_483->next;
                i_486++;
                come_call_finalizer3(prev_it_487,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_483=it_483->next;
                i_486++;
            }
        }
        if(        head_prev_it_484!=((void*)0)) {
            head_prev_it_484->next=tail_it_485;
        }
        if(        tail_it_485!=((void*)0)) {
            tail_it_485->prev=head_prev_it_484;
        }
    }
    __result_obj__299 = self;
    return __result_obj__299;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_475;
struct list_item$1sNode$ph* prev_it_476;
struct list$1sNode$ph* __result_obj__298;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__298 = self;
    return __result_obj__298;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__300;
void* __right_value360 = (void*)0;
struct sSemicolonNode* result_494;
void* __right_value361 = (void*)0;
char* __dec_obj68;
struct sSemicolonNode* __result_obj__301;
    if(    self==(void*)0) {
        __result_obj__300 = (void*)0;
        return __result_obj__300;
    }
    result_494=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_494->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj68=result_494->sname;
        result_494->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_494->sline_real=self->sline_real;
    }
    __result_obj__301 = result_494;
    come_call_finalizer3(result_494,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__301;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_504;
struct sVarTable* old_table_505;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sVarTable* __dec_obj71;
struct sVarTable* current_loop_vtable_506;
int i_507;
struct list$1char$ph* o2_saved_508;
char* name_509;
void* __right_value370 = (void*)0;
struct sType* type_510;
void* __right_value371 = (void*)0;
int block_level_514;
int i_515;
struct list$1sNode$ph* o2_saved_516;
struct sNode* node_519;
struct list$1sRightValueObject$ph* right_value_objects_522;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj72;
char* __dec_obj73;
char* __dec_obj74;
int stack_num_before_527;
int sline_528;
void* __right_value374 = (void*)0;
char* sname_529;
void* __right_value375 = (void*)0;
char* __dec_obj75;
_Bool Value_530;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_531;
void* __right_value382 = (void*)0;
struct CVALUE* come_value2_532;
void* __right_value383 = (void*)0;
char* __dec_obj80;
void* __right_value384 = (void*)0;
struct CVALUE* come_value2_534;
struct sVar* var__535;
void* __right_value385 = (void*)0;
struct CVALUE* come_value3_536;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_561=0;
char* Err_562=0;
_Bool _if_conditional2;
int __result_obj__314;
void* __right_value388 = (void*)0;
struct sType* __dec_obj81;
void* __right_value389 = (void*)0;
char* c_value_563;
void* __right_value390 = (void*)0;
char* __dec_obj82;
void* __right_value391 = (void*)0;
char* __dec_obj83;
void* __right_value392 = (void*)0;
char* __dec_obj84;
_Bool Value_564;
void* __right_value393 = (void*)0;
char* __dec_obj85;
struct list$1sRightValueObject$ph* __dec_obj86;
void* __if_result__0_567 = (void*)0;
struct list$1sVar$ph* o2_saved_568;
struct sVar* it_571;
void* __right_value394 = (void*)0;
struct list$1sVar$ph* __dec_obj87;
memset(&i_507, 0, sizeof(int));
memset(&i_515, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_504=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_505=info->lv_table;
    if(    !no_var_table) {
        __dec_obj71=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 405, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,old_table_505));
        come_call_finalizer3(__dec_obj71,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_506=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_508=(param_names),name_509=list$1char$ph$p_begin((o2_saved_508));        !list$1char$ph$p_end((o2_saved_508));        name_509=list$1char$ph$p_next((o2_saved_508))        ){
            type_510=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_507));
            type_510->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_509,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_510)),info,(_Bool)1);
            i_507++;
            come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_514=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_516=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_519=list$1sNode$ph$p_begin((o2_saved_516));        !list$1sNode$ph$p_end((o2_saved_516));        node_519=list$1sNode$ph$p_next((o2_saved_516))        ){
            right_value_objects_522=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj72=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 435, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj72,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj73=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj74=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_527=list$1CVALUE$ph$p_length(info->stack);
            sline_528=info->sline;
            sname_529=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_519->sline(node_519->_protocol_obj);
            __dec_obj75=info->sname;
            info->sname=(char*)come_increment_ref_count(node_519->sname(node_519->_protocol_obj));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_515==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_530=node_compile(node_519,info);
                if(                !Value_530) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_527+1) {
                    come_value_531=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_531->type->mClass->mName,"void")&&come_value_531->type->mPointerNum==0) {
                        come_value2_532=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_531));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_532));
                        __dec_obj80=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_532->c_value));
                        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_534=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_531));
                        var__535=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__535) {
                            come_value3_536=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 470, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__535->mType->mClass=="void"&&var__535->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value387=check_assign_type("invalid if result value",var__535->mType,((struct sType*)(__right_value386=come_call_cloner(sType_clone, come_value_531->type))),come_value3_536,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_561=multiple_assign_var8->v1;
                                Err_562=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_562)),                                come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value387,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result_obj__314 = (_Bool)1;
                                    (Err_562 = come_decrement_ref_count2(Err_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_522,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_529 = come_decrement_ref_count2(sname_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_516,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__314;
                                }
                                else {
                                }
                                (Err_562 = come_decrement_ref_count2(Err_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj81=var__535->mType;
                            var__535->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_531->type));
                            come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_531->type->mHeap) {
                                c_value_563=(char*)come_increment_ref_count(increment_ref_count_object(come_value_531->type,come_value_531->c_value,info));
                                __dec_obj82=come_value2_534->c_value;
                                come_value2_534->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__535->mCValueName,c_value_563));
                                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_563 = come_decrement_ref_count2(c_value_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj83=come_value2_534->c_value;
                                come_value2_534->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__535->mCValueName,come_value_531->c_value));
                                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_534));
                        __dec_obj84=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_534->c_value));
                        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_564=node_compile(node_519,info);
                if(                !Value_564) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_528;
            __dec_obj85=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_529));
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_527);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph$p_reset(info->right_value_objects);
            }
            __dec_obj86=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_522);
            come_call_finalizer3(__dec_obj86,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_515++;
            come_call_finalizer3(right_value_objects_522,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_529 = come_decrement_ref_count2(sname_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_516,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_514==0) {
            for(            o2_saved_568=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_571=list$1sVar$ph$p_begin((o2_saved_568));            !list$1sVar$ph$p_end((o2_saved_568));            it_571=list$1sVar$ph$p_next((o2_saved_568))            ){
                free_object(((struct sType*)(__right_value394=come_call_cloner(sType_clone, it_571->mType))),it_571->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value394,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_568,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj87=info->match_it_var;
            __if_result__0_567=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj87,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_567,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_505;
    info->block_level=block_level_514;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_506;
    info->inhibits_output_code=inhibits_output_code_504;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_511;
int i_512;
struct sType* __result_obj__303;
struct sType* default_value_513;
struct sType* __result_obj__304;
default_value_513 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_511=self->head;
    i_512=0;
    while(it_511!=((void*)0)) {
        if(        position==i_512) {
            __result_obj__303 = come_increment_ref_count(it_511->item);
            come_call_finalizer3(__result_obj__303,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__303;
        }
        it_511=it_511->next;
        i_512++;
    }
    memset(&default_value_513,0,sizeof(struct sType*));
    __result_obj__304 = come_increment_ref_count(default_value_513);
    come_call_finalizer3(default_value_513,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_517;
struct sNode* __result_obj__305;
struct sNode* __result_obj__306;
struct sNode* result_518;
struct sNode* __result_obj__307;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(struct sNode*));
        __result_obj__305 = result_517;
        return __result_obj__305;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__306 = self->it->item;
        return __result_obj__306;
    }
    memset(&result_518,0,sizeof(struct sNode*));
    __result_obj__307 = result_518;
    return __result_obj__307;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_520;
struct sNode* __result_obj__308;
struct sNode* __result_obj__309;
struct sNode* result_521;
struct sNode* __result_obj__310;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(struct sNode*));
        __result_obj__308 = result_520;
        return __result_obj__308;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__309 = self->it->item;
        return __result_obj__309;
    }
    memset(&result_521,0,sizeof(struct sNode*));
    __result_obj__310 = result_521;
    return __result_obj__310;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__311;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_523;
struct list_item$1sRightValueObject$ph* prev_it_524;
    it_523=self->head;
    while(it_523!=((void*)0)) {
        prev_it_524=it_523;
        it_523=it_523->next;
        come_call_finalizer3(prev_it_524,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_525;
struct list_item$1sRightValueObject$ph* prev_it_526;
    it_525=self->head;
    while(it_525!=((void*)0)) {
        prev_it_526=it_525;
        it_525=it_525->next;
        come_call_finalizer3(prev_it_526,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__312;
void* __right_value377 = (void*)0;
struct CVALUE* result_533;
void* __right_value378 = (void*)0;
char* __dec_obj76;
void* __right_value379 = (void*)0;
struct sType* __dec_obj77;
void* __right_value380 = (void*)0;
char* __dec_obj78;
void* __right_value381 = (void*)0;
char* __dec_obj79;
struct CVALUE* __result_obj__313;
    if(    self==(void*)0) {
        __result_obj__312 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__312,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__312;
    }
    result_533=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj76=result_533->c_value;
        result_533->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj77=result_533->type;
        result_533->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_533->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_533->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj78=result_533->c_value_without_right_value_objects;
        result_533->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj79=result_533->c_value_without_cast_object_value;
        result_533->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__313 = come_increment_ref_count(result_533);
    come_call_finalizer3(result_533,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_537;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_538;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_537=left->head;
    it2_538=right->head;
    while(it_537!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_537->item,it2_538->item)) {
            return (_Bool)0;
        }
        it_537=it_537->next;
        it2_538=it2_538->next;
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

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_539;
struct list_item$1sType$ph* it2_540;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_539=left->head;
    it2_540=right->head;
    while(it_539!=((void*)0)) {
        if(        !sType_equals(it_539->item,it2_540->item)) {
            return (_Bool)0;
        }
        it_539=it_539->next;
        it2_540=it2_540->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_541;
struct list_item$1sNode$ph* it2_542;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_541=left->head;
    it2_542=right->head;
    while(it_541!=((void*)0)) {
        if(        !sNode_equals(it_541->item,it2_542->item)) {
            return (_Bool)0;
        }
        it_541=it_541->next;
        it2_542=it2_542->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_543;
struct list_item$1char$ph* it2_544;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_543=left->head;
    it2_544=right->head;
    while(it_543!=((void*)0)) {
        if(        !string_equals(it_543->item,it2_544->item)) {
            return (_Bool)0;
        }
        it_543=it_543->next;
        it2_544=it2_544->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph$p_operator_equals(left,right);
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_545;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_546;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_545=left->head;
    it2_546=right->head;
    while(it_545!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_545->item,it2_546->item))) {
            return (_Bool)0;
        }
        it_545=it_545->next;
        it2_546=it2_546->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    list$1sNode$ph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1char$ph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mDynamic,right->mDynamic));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mDynamic,right->mDynamic))));
}

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_547;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_548;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_547=left->head;
    it2_548=right->head;
    while(it_547!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_547->item,it2_548->item))) {
            return (_Bool)0;
        }
        it_547=it_547->next;
        it2_548=it2_548->next;
    }
    return (_Bool)1;
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mGenerate,right->mGenerate)&&bool_equals(left->mCreateVTable,right->mCreateVTable)&&bool_equals(left->mDynamic,right->mDynamic)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph$p_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mGenerate,right->mGenerate))&&(bool_operator_equals(left->mCreateVTable,right->mCreateVTable))&&(bool_operator_equals(left->mDynamic,right->mDynamic))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_549;
struct list_item$1sType$ph* it2_550;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_549=left->head;
    it2_550=right->head;
    while(it_549!=((void*)0)) {
        if(        !(sType_operator_equals(it_549->item,it2_550->item))) {
            return (_Bool)0;
        }
        it_549=it_549->next;
        it2_550=it2_550->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_551;
struct list_item$1sNode$ph* it2_552;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_551=left->head;
    it2_552=right->head;
    while(it_551!=((void*)0)) {
        if(        !(sNode_operator_equals(it_551->item,it2_552->item))) {
            return (_Bool)0;
        }
        it_551=it_551->next;
        it2_552=it2_552->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_553;
struct list_item$1char$ph* it2_554;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_553=left->head;
    it2_554=right->head;
    while(it_553!=((void*)0)) {
        if(        !(string_operator_equals(it_553->item,it2_554->item))) {
            return (_Bool)0;
        }
        it_553=it_553->next;
        it2_554=it2_554->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph$p_operator_equals(left,right);
}

static _Bool list$1sType$ph$p_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_555;
struct list_item$1sType$ph* it2_556;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_555=left->head;
    it2_556=right->head;
    while(it_555!=((void*)0)) {
        if(        !(sType_operator_equals(it_555->item,it2_556->item))) {
            return (_Bool)0;
        }
        it_555=it_555->next;
        it2_556=it2_556->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    return !list$1sNode$ph$p_operator_equals(left,right);
}

static _Bool list$1sNode$ph$p_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_557;
struct list_item$1sNode$ph* it2_558;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_557=left->head;
    it2_558=right->head;
    while(it_557!=((void*)0)) {
        if(        !(sNode_operator_equals(it_557->item,it2_558->item))) {
            return (_Bool)0;
        }
        it_557=it_557->next;
        it2_558=it2_558->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph$p_operator_equals(left,right);
}

static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_559;
struct list_item$1char$ph* it2_560;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_559=left->head;
    it2_560=right->head;
    while(it_559!=((void*)0)) {
        if(        !(string_operator_equals(it_559->item,it2_560->item))) {
            return (_Bool)0;
        }
        it_559=it_559->next;
        it2_560=it2_560->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_565;
struct list_item$1sRightValueObject$ph* prev_it_566;
struct list$1sRightValueObject$ph* __result_obj__315;
    it_565=self->head;
    while(it_565!=((void*)0)) {
        prev_it_566=it_565;
        it_565=it_565->next;
        come_call_finalizer3(prev_it_566,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__315 = self;
    return __result_obj__315;
}

static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self){
struct sVar* result_569;
struct sVar* __result_obj__316;
struct sVar* __result_obj__317;
struct sVar* result_570;
struct sVar* __result_obj__318;
result_569 = (void*)0;
result_570 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_569,0,sizeof(struct sVar*));
        __result_obj__316 = result_569;
        return __result_obj__316;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__317 = self->it->item;
        return __result_obj__317;
    }
    memset(&result_570,0,sizeof(struct sVar*));
    __result_obj__318 = result_570;
    return __result_obj__318;
}

static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self){
struct sVar* result_572;
struct sVar* __result_obj__319;
struct sVar* __result_obj__320;
struct sVar* result_573;
struct sVar* __result_obj__321;
result_572 = (void*)0;
result_573 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_572,0,sizeof(struct sVar*));
        __result_obj__319 = result_572;
        return __result_obj__319;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__320 = self->it->item;
        return __result_obj__320;
    }
    memset(&result_573,0,sizeof(struct sVar*));
    __result_obj__321 = result_573;
    return __result_obj__321;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_574;
struct list_item$1sVar$ph* prev_it_575;
    it_574=self->head;
    while(it_574!=((void*)0)) {
        prev_it_575=it_574;
        it_574=it_574->next;
        come_call_finalizer3(prev_it_575,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sVar$ph* it_576;
struct list_item$1sVar$ph* prev_it_577;
    it_576=self->head;
    while(it_576!=((void*)0)) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer3(prev_it_577,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph$p_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph$p_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph$p_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph$p_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info){
char* head_578;
_Bool dquort_579;
_Bool squort_580;
int sline_581;
int nest_582;
void* __right_value395 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_583=0;
char* Err_584=0;
void* __right_value396 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_585=0;
char* Err_586=0;
void* __right_value397 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_587=0;
char* Err_588=0;
void* __right_value398 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_589=0;
char* Err_590=0;
void* __right_value399 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_591=0;
char* Err_592=0;
void* __right_value400 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_593=0;
char* Err_594=0;
void* __right_value401 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_595=0;
char* Err_596=0;
void* __right_value402 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_597=0;
char* Err_598=0;
char* tail_599;
void* __right_value403 = (void*)0;
char* buf_600;
void* __right_value404 = (void*)0;
char* __result_obj__322;
    head_578=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_579=(_Bool)0;
        squort_580=(_Bool)0;
        sline_581=0;
        nest_582=0;
        while(1) {
            if(            dquort_579) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value395=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c8_583=multiple_assign_var9->v1;
                        Err_584=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        ((Err_584)?(puts(Err_584),exit(0)):(0));
                        come_call_finalizer3(__right_value395,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_584 = come_decrement_ref_count2(Err_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_579=!dquort_579;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value396=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c9_585=multiple_assign_var10->v1;
                        Err_586=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_586)?(puts(Err_586),exit(0)):(0));
                        come_call_finalizer3(__right_value396,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value397=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c10_587=multiple_assign_var11->v1;
                        Err_588=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_588)?(puts(Err_588),exit(0)):(0));
                        come_call_finalizer3(__right_value397,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_588 = come_decrement_ref_count2(Err_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_580) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value398=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c11_589=multiple_assign_var12->v1;
                        Err_590=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_590)?(puts(Err_590),exit(0)):(0));
                        come_call_finalizer3(__right_value398,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_580=!squort_580;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value399=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c12_591=multiple_assign_var13->v1;
                        Err_592=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_592)?(puts(Err_592),exit(0)):(0));
                        come_call_finalizer3(__right_value399,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_592 = come_decrement_ref_count2(Err_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value400=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c13_593=multiple_assign_var14->v1;
                        Err_594=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_594)?(puts(Err_594),exit(0)):(0));
                        come_call_finalizer3(__right_value400,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_581=info->sline;
                info->p++;
                squort_580=!squort_580;
            }
            else if(            *info->p==34) {
                sline_581=info->sline;
                info->p++;
                dquort_579=!dquort_579;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_582++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_582==0) {
                    break;
                }
                nest_582--;
            }
            else if(            *info->p==0) {
                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value401=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c14_595=multiple_assign_var15->v1;
                Err_596=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                ((Err_596)?(puts(Err_596),exit(0)):(0));
                come_call_finalizer3(__right_value401,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_596 = come_decrement_ref_count2(Err_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    else {
        multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value402=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c15_597=multiple_assign_var16->v1;
        Err_598=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        ((Err_598)?(puts(Err_598),exit(0)):(0));
        come_call_finalizer3(__right_value402,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        (Err_598 = come_decrement_ref_count2(Err_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_599=info->p;
    buf_600=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_599-head_578+1)), "05function.c", 686, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_600,head_578,tail_599-head_578);
    buf_600[tail_599-head_578]=0;
    skip_spaces_and_lf(info);
    __result_obj__322 = come_increment_ref_count(((char*)(__right_value404=__builtin_string(buf_600))));
    (buf_600 = come_decrement_ref_count2(buf_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__322 = come_decrement_ref_count2(__result_obj__322, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__322;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct buffer* asm_fun_name_601;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct buffer* result_602;
char* head_603;
int brace_num_604;
char* tail_605;
char* head_606;
int brace_num_607;
char* tail_608;
char* head_609;
char* tail_610;
char* head_611;
char* tail_612;
int len_613;
_Bool in_dquort_614;
int brace_num_615;
char* head_616;
char* tail_617;
char* head_618;
char* tail_619;
char* head_620;
char* tail_621;
char* head_622;
int nest_623;
char* tail_624;
char* head_625;
int nest_626;
char* tail_627;
char* head_628;
int nest_629;
char* tail_630;
char* head_631;
int nest_632;
char* tail_633;
char* head_634;
int nest_635;
char* tail_636;
char* head_637;
char* tail_638;
char* head_639;
char* tail_640;
char* head_641;
char* tail_642;
char* head_643;
char* tail_644;
char* head_645;
char* tail_646;
char* head_647;
int brace_num_648;
char* tail_649;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__326;
    asm_fun_name_601=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 697, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    result_602=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 698, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_603=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_604=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_604++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_604--;
                        if(                        brace_num_604==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_605=info->p;
            buffer_append(result_602,head_603,tail_605-head_603);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_606=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_607=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_607++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_607--;
                        if(                        brace_num_607==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_608=info->p;
            buffer_append(result_602,head_606,tail_608-head_606);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_609=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_610=info->p;
            buffer_append(result_602,head_609,tail_610-head_609);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_611=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_612=info->p;
            buffer_append(result_602,head_611,tail_612-head_611);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_613=0;
            if(            *info->p==40) {
                in_dquort_614=(_Bool)0;
                brace_num_615=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_614=!in_dquort_614;
                    }
                    else if(                    in_dquort_614) {
                        buffer_append_char(asm_fun_name_601,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_615++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_615--;
                        if(                        brace_num_615==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_616=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_617=info->p;
            buffer_append(result_602,head_616,tail_617-head_616);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_618=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_619=info->p;
            buffer_append(result_602,head_618,tail_619-head_618);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_620=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_621=info->p;
            buffer_append(result_602,head_620,tail_621-head_620);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_622=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_623=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_623++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_623--;
                        if(                        nest_623==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_624=info->p;
            buffer_append(result_602,head_622,tail_624-head_622);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_625=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_626=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_626++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_626--;
                        if(                        nest_626==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_627=info->p;
            buffer_append(result_602,head_625,tail_627-head_625);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_628=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_629=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_629++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_629--;
                        if(                        nest_629==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_630=info->p;
            buffer_append(result_602,head_628,tail_630-head_628);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_631=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_632=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632--;
                        if(                        nest_632==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_633=info->p;
            buffer_append(result_602,head_631,tail_633-head_631);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_634=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_635=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_635++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_635--;
                        if(                        nest_635==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_636=info->p;
            buffer_append(result_602,head_634,tail_636-head_634);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_637=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_638=info->p;
            buffer_append(result_602,head_637,tail_638-head_637);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_639=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_640=info->p;
            buffer_append(result_602,head_639,tail_640-head_639);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_641=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_642=info->p;
            buffer_append(result_602,head_641,tail_642-head_641);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_643=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_644=info->p;
            buffer_append(result_602,head_643,tail_644-head_643);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_645=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_646=info->p;
            buffer_append(result_602,head_645,tail_646-head_645);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_647=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_648=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_648++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_648--;
                        if(                        brace_num_648==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_649=info->p;
            buffer_append(result_602,head_647,tail_649-head_647);
        }
        else {
            break;
        }
    }
    __result_obj__326 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value415=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1112, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_601)),(char*)come_increment_ref_count(buffer_to_string(result_602))))));
    come_call_finalizer3(asm_fun_name_601,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_602,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value415,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__326,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
struct tuple2$2char$phchar$ph* __result_obj__323;
void* __right_value411 = (void*)0;
struct tuple2$2char$phchar$ph* result_650;
void* __right_value412 = (void*)0;
char* __dec_obj88;
void* __right_value413 = (void*)0;
char* __dec_obj89;
struct tuple2$2char$phchar$ph* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__323 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__323,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__323;
    }
    result_650=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_650->v1;
        result_650->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj89=result_650->v2;
        result_650->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__324 = come_increment_ref_count(result_650);
    come_call_finalizer3(result_650,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_651;
    result_651=0;
    result_651+=int_get_hash_key(((int)self->v1));
    result_651+=int_get_hash_key(((int)self->v2));
    return result_651;
}

static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj90;
char* __dec_obj91;
struct tuple2$2char$phchar$ph* __result_obj__325;
    __dec_obj90=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__325 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__325,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__325;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct buffer* asm_fun_name_652;
void* __right_value418 = (void*)0;
char* attribute_653;
int nest_654;
int nest_655;
int nest_656;
int nest_657;
int nest_658;
void* __right_value419 = (void*)0;
char* __dec_obj92;
int len_659;
_Bool in_dquort_660;
int brace_num_661;
int brace_num_662;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__327;
    asm_fun_name_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1117, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    attribute_653=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_654=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_654++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_654--;
                        if(                        nest_654==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_655=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_655++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_655--;
                        if(                        nest_655==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_656=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_656++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_656--;
                        if(                        nest_656==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_657=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_657++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_657--;
                        if(                        nest_657==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_658=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_658++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_658--;
                        if(                        nest_658==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj92=attribute_653;
            attribute_653=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_659=0;
            if(            *info->p==40) {
                in_dquort_660=(_Bool)0;
                brace_num_661=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_660=!in_dquort_660;
                    }
                    else if(                    in_dquort_660) {
                        buffer_append_char(asm_fun_name_652,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_661++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_661--;
                        if(                        brace_num_661==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_662=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_662++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_662--;
                        if(                        brace_num_662==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__327 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value422=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1386, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_652)),(char*)come_increment_ref_count(attribute_653)))));
    come_call_finalizer3(asm_fun_name_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_653 = come_decrement_ref_count2(attribute_653, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value422,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__327,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value423 = (void*)0;
char* __dec_obj93;
char* head_663;
int head_sline_664;
void* __right_value424 = (void*)0;
char* buf_665;
void* __right_value425 = (void*)0;
struct sNode* node_666;
_Bool Value_667;
    while(*info->p) {
        __dec_obj93=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_663=info->p;
        head_sline_664=info->sline;
        buf_665=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_665 = come_decrement_ref_count2(buf_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_666=(struct sNode*)come_increment_ref_count(top_level_v99(buf_665,head_663,head_sline_664,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_666!=((void*)0)) {
            Value_667=node_compile(node_666,info);
            if(            !Value_667) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_665 = come_decrement_ref_count2(buf_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_666) ? node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_665 = come_decrement_ref_count2(buf_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_666) ? node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value426 = (void*)0;
char* name_668;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sType* result_type_669;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sType$ph* param_types_670;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1char$ph* param_names_671;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1char$ph* param_default_parametors_672;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* fun_673;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* name_695;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* result_type_696;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1sType$ph* param_types_697;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1char$ph* param_names_698;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1char$ph* param_default_parametors_699;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sFun* fun_700;
void* __right_value460 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_668=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_669=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1442, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_670=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1443, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_671=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1444, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_672=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1445, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_673=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1446, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_668),(struct sType*)come_increment_ref_count(result_type_669),(struct list$1sType$ph*)come_increment_ref_count(param_types_670),(struct list$1char$ph*)come_increment_ref_count(param_names_671),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_672),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_668)),(struct sFun*)come_increment_ref_count(fun_673));
        (name_668 = come_decrement_ref_count2(name_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_669,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_671,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_672,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_673,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_695=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_696=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_697=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1456, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_698=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1457, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_699=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1458, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_700=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1459, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_695),(struct sType*)come_increment_ref_count(result_type_696),(struct list$1sType$ph*)come_increment_ref_count(param_types_697),(struct list$1char$ph*)come_increment_ref_count(param_names_698),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_699),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_695)),(struct sFun*)come_increment_ref_count(fun_700));
        (name_695 = come_decrement_ref_count2(name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_696,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_697,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_698,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_699,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_700,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_691;
unsigned int it_692;
_Bool same_key_exist_693;
char* it2_694;
struct map$2char$phsFun$ph* __result_obj__338;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph$p_rehash(self);
    }
    hash_691=string_get_hash_key(((char*)key))%self->size;
    it_692=hash_691;
    while((_Bool)1) {
        if(        self->item_existance[it_692]) {
            if(            string_equals(self->keys[it_692],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_692]);
                    (self->keys[it_692] = come_decrement_ref_count2(self->keys[it_692], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_692]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_692]);
                    self->keys[it_692]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_692],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_692]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_692]=item;
                }
                break;
            }
            it_692++;
            if(            it_692>=self->size) {
                it_692=0;
            }
            else if(            it_692==hash_691) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_692]=(_Bool)1;
            if(            1) {
                self->keys[it_692]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_692]=key;
            }
            if(            1) {
                self->items[it_692]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_692]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_693=(_Bool)0;
    for(    it2_694=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_694=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_694,key)) {
            same_key_exist_693=(_Bool)1;
        }
    }
    if(    !same_key_exist_693) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__338 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__338;
}

static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self){
int size_674;
void* __right_value440 = (void*)0;
char** keys_675;
void* __right_value441 = (void*)0;
struct sFun** items_676;
void* __right_value442 = (void*)0;
_Bool* item_existance_677;
int len_678;
char* it_681;
struct sFun* default_value_684;
void* __right_value443 = (void*)0;
struct sFun* it2_685;
unsigned int hash_688;
int n_689;
struct sFun* default_value_690;
void* __right_value444 = (void*)0;
default_value_684 = (void*)0;
default_value_690 = (void*)0;
    size_674=self->size*10;
    keys_675=(char**)come_increment_ref_count(((char**)(__right_value440=(char**)come_calloc(1, sizeof(char*)*(1*(size_674)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_676=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value441=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_674)), "/usr/local/include/comelang.h", 2935, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_677=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value442=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_674)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_678=0;
    for(    it_681=map$2char$phsFun$ph$p_begin(self);    !map$2char$phsFun$ph$p_end(self);    it_681=map$2char$phsFun$ph$p_next(self)    ){
        memset(&default_value_684,0,sizeof(struct sFun*));
        it2_685=((struct sFun*)(__right_value443=map$2char$phsFun$ph$p_at(self,it_681,(struct sFun*)come_increment_ref_count(default_value_684))));
        come_call_finalizer3(__right_value443,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_688=string_get_hash_key(((char*)it_681))%size_674;
        n_689=hash_688;
        while((_Bool)1) {
            if(            item_existance_677[n_689]) {
                n_689++;
                if(                n_689>=size_674) {
                    n_689=0;
                }
                else if(                n_689==hash_688) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_677[n_689]=(_Bool)1;
                keys_675[n_689]=it_681;
                items_676[n_689]=((struct sFun*)(__right_value444=map$2char$phsFun$ph$p_at(self,it_681,(struct sFun*)come_increment_ref_count(default_value_690))));
                come_call_finalizer3(__right_value444,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_678++;
                come_call_finalizer3(default_value_690,sFun_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_690,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_684,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_675;
    self->items=items_676;
    self->item_existance=item_existance_677;
    self->size=size_674;
    self->len=len_678;
}

static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self){
char* result_679;
char* __result_obj__328;
char* __result_obj__329;
char* result_680;
char* __result_obj__330;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_679,0,sizeof(char*));
        __result_obj__328 = result_679;
        return __result_obj__328;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__329 = self->key_list->it->item;
        return __result_obj__329;
    }
    memset(&result_680,0,sizeof(char*));
    __result_obj__330 = result_680;
    return __result_obj__330;
}

static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self){
char* result_682;
char* __result_obj__331;
char* __result_obj__332;
char* result_683;
char* __result_obj__333;
result_682 = (void*)0;
result_683 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_682,0,sizeof(char*));
        __result_obj__331 = result_682;
        return __result_obj__331;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__332 = self->key_list->it->item;
        return __result_obj__332;
    }
    memset(&result_683,0,sizeof(char*));
    __result_obj__333 = result_683;
    return __result_obj__333;
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_686;
unsigned int it_687;
struct sFun* __result_obj__334;
struct sFun* __result_obj__335;
struct sFun* __result_obj__336;
struct sFun* __result_obj__337;
    hash_686=string_get_hash_key(((char*)key))%self->size;
    it_687=hash_686;
    while((_Bool)1) {
        if(        self->item_existance[it_687]) {
            if(            string_equals(self->keys[it_687],key)) {
                __result_obj__334 = come_increment_ref_count(self->items[it_687]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__334,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__334;
            }
            it_687++;
            if(            it_687>=self->size) {
                it_687=0;
            }
            else if(            it_687==hash_686) {
                __result_obj__335 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__335,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__335;
            }
        }
        else {
            __result_obj__336 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__336,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__336;
        }
    }
    __result_obj__337 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__337,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__337;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_701;
_Bool is_type_name_flag_702;
int sline_703;
_Bool define_struct_nobody_704;
char* p_705;
int sline_706;
void* __right_value461 = (void*)0;
char* word_707;
_Bool define_function_pointer_result_function_708;
_Bool define_variable_between_brace_709;
char* p_710;
void* __right_value462 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* result_type_711=0;
char* fun_name_712=0;
_Bool err_713=0;
void* __right_value463 = (void*)0;
char* word_714;
_Bool define_function_flag_715;
char* p_716;
void* __right_value464 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_717=0;
char* fun_name_718=0;
_Bool err_719=0;
char* word_720;
void* __right_value465 = (void*)0;
char* __dec_obj94;
void* __right_value466 = (void*)0;
char* __dec_obj95;
char* __dec_obj96;
void* __right_value467 = (void*)0;
char* __dec_obj97;
_Bool define_variable_721;
char* p_722;
void* __right_value468 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_723=0;
char* fun_name_724=0;
_Bool err_725=0;
void* __right_value469 = (void*)0;
char* word_726;
void* __right_value470 = (void*)0;
char* word_727;
char* p_728;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* word_729;
void* __right_value474 = (void*)0;
char* __dec_obj98;
void* __right_value475 = (void*)0;
char* word_730;
void* __right_value476 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c16_733=0;
char* Err_734=0;
void* __right_value477 = (void*)0;
char* word_735;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* node_736;
struct sNode* __result_obj__340;
void* __right_value480 = (void*)0;
struct sNode* __result_obj__341;
char* header_head_737;
void* __right_value481 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* result_type_738=0;
char* fun_name_739=0;
_Bool err_740=0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1sType$ph* param_types_741;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1char$ph* param_names_742;
void* __right_value486 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* param_type_743=0;
char* param_name_744=0;
_Bool err_745=0;
void* __right_value487 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c17_746=0;
char* Err_747=0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_752=0;
char* Err_753=0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1sType$ph* param_types2_754;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1char$ph* param_names2_755;
void* __right_value498 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var25 = (void*)0;
struct sType* param_type_756=0;
char* param_name_757=0;
_Bool err_758=0;
void* __right_value499 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c19_759=0;
char* Err_760=0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_762=0;
char* Err_763=0;
char* header_tail_764;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* result_type2_765;
struct sType* __dec_obj102;
void* __right_value506 = (void*)0;
struct list$1sType$ph* __dec_obj103;
void* __right_value507 = (void*)0;
struct list$1char$ph* __dec_obj104;
_Bool var_args_766;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1char$ph* param_default_parametors_767;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sFun* fun_768;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sFun* fun2_772;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value568 = (void*)0;
struct sNode* result_773;
struct sNode* __result_obj__371;
void* __right_value569 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_809=0;
char* Err_810=0;
void* __right_value570 = (void*)0;
struct sNode* node_811;
struct sNode* __result_obj__372;
void* __right_value571 = (void*)0;
struct sNode* node_812;
struct sNode* __result_obj__373;
void* __right_value572 = (void*)0;
struct sNode* node_813;
char* source_tail_814;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* header_815;
struct sNode* __result_obj__374;
void* __right_value575 = (void*)0;
char* buf2_816;
void* __right_value576 = (void*)0;
struct sNode* __result_obj__375;
    info->in_top_level=(_Bool)1;
    source_head_701=info->p;
    is_type_name_flag_702=is_type_name(buf,info);
    sline_703=info->sline;
    define_struct_nobody_704=(_Bool)0;
    {
        p_705=info->p;
        sline_706=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_707=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_704=(_Bool)1;
                }
                (word_707 = come_decrement_ref_count2(word_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_706;
    }
    define_function_pointer_result_function_708=(_Bool)0;
    define_variable_between_brace_709=(_Bool)0;
    if(    is_type_name_flag_702) {
        p_710=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value462=backtrace_parse_type((_Bool)0,info)));
            result_type_711=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            fun_name_712=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_713=multiple_assign_var17->v3;
            come_call_finalizer3(__right_value462,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_708=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_714=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_714,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_709=(_Bool)1;
                            }
                        }
                        (word_714 = come_decrement_ref_count2(word_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_712 = come_decrement_ref_count2(fun_name_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_703;
    }
    define_function_flag_715=(_Bool)0;
    if(    is_type_name_flag_702&&!define_function_pointer_result_function_708&&charp_operator_not_equals(buf,"__typeof__")) {
        p_716=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value464=backtrace_parse_type((_Bool)0,info)));
            result_type_717=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_718=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_719=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value464,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_718 = come_decrement_ref_count2(fun_name_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_720=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj94=word_720;
                word_720=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_720,"extern")) {
                    __dec_obj95=word_720;
                    word_720=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj96=word_720;
                word_720=((void*)0);
                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_720) {
                if(                is_type_name(word_720,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj97=word_720;
                        word_720=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_720)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_702) {
                        define_function_flag_715=(_Bool)1;
                    }
                }
            }
            (word_720 = come_decrement_ref_count2(word_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_716;
        info->sline=sline_703;
    }
    define_variable_721=(_Bool)1;
    if(    is_type_name_flag_702&&!define_function_pointer_result_function_708) {
        p_722=info->p;
        info->p=head;
        if(        !is_type_name_flag_702) {
            define_variable_721=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value468=backtrace_parse_type((_Bool)0,info)));
            result_type_723=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_724=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_725=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value468,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_726=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_721=(_Bool)1;
                            }
                        }
                        (word_726 = come_decrement_ref_count2(word_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_727=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_727,info)&&*info->p!=40) {
                            define_variable_721=(_Bool)1;
                        }
                    }
                    (word_727 = come_decrement_ref_count2(word_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_724 = come_decrement_ref_count2(fun_name_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_721=(_Bool)0;
        }
        else if(        define_variable_721) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_721=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_721=(_Bool)0;
            }
        }
        info->p=p_722;
        info->sline=sline_703;
    }
    else {
        define_variable_721=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_708) {
        p_728=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value471=parse_struct_attribute(info)));
            (__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value472=parse_word(info)));
                (__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_729=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj98=word_729;
                        word_729=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_729,"extends")) {
                            define_variable_721=(_Bool)0;
                        }
                    }
                    (word_729 = come_decrement_ref_count2(word_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_721=(_Bool)0;
        }
        else if(        define_variable_721) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_721=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_721=(_Bool)0;
            }
        }
        info->p=p_728;
        info->sline=sline_703;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_730=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph$p_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value476=err_msg(info,"unexpected source end")));
                    come_exception_var_c16_733=multiple_assign_var20->v1;
                    Err_734=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    ((Err_734)?(puts(Err_734),exit(0)):(0));
                    come_call_finalizer3(__right_value476,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_734 = come_decrement_ref_count2(Err_734, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_735=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_735)));
                    (word_735 = come_decrement_ref_count2(word_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_736=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__340 = come_increment_ref_count(node_736);
            ((node_736) ? node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_730 = come_decrement_ref_count2(word_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count2(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__340;
            ((node_736) ? node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_730 = come_decrement_ref_count2(word_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_704) {
    }
    else if(    define_variable_between_brace_709) {
        info->p=head;
        info->sline=sline_703;
        __result_obj__341 = come_increment_ref_count(((struct sNode*)(__right_value480=parse_global_variable(info))));
        ((__right_value480) ? __right_value480 = come_decrement_ref_count2(__right_value480, ((struct sNode*)__right_value480)->finalize, ((struct sNode*)__right_value480)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count2(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__341;
    }
    else if(    define_function_pointer_result_function_708) {
        header_head_737=info->p;
        multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value481=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_738=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        fun_name_739=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_740=multiple_assign_var21->v3;
        come_call_finalizer3(__right_value481,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_741=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1783, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            param_names_742=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1784, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value486=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_743=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                    param_name_744=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    err_745=multiple_assign_var22->v3;
                    come_call_finalizer3(__right_value486,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_745) {
                        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value487=err_msg(info,"parse_type is failed")));
                        come_exception_var_c17_746=multiple_assign_var23->v1;
                        Err_747=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                        ((Err_747)?(puts(Err_747),exit(0)):(0));
                        come_call_finalizer3(__right_value487,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_747 = come_decrement_ref_count2(Err_747, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph$p_push_back(param_types_741,(struct sType*)come_increment_ref_count(param_type_743));
                    static int num_function_pointer_result_var_name_a_751=0;
                    list$1char$ph$p_push_back(param_names_742,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_751)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value492=parse_word(info)));
                        (__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_743,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_744 = come_decrement_ref_count2(param_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value493=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c18_752=multiple_assign_var24->v1;
                        Err_753=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_753)?(puts(Err_753),exit(0)):(0));
                        come_call_finalizer3(__right_value493,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_743,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_744 = come_decrement_ref_count2(param_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_754=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1830, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                param_names2_755=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1831, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var25=((struct tuple3$3sType$phchar$phbool$*)(__right_value498=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_756=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                        param_name_757=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        err_758=multiple_assign_var25->v3;
                        come_call_finalizer3(__right_value498,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        !err_758) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value499=err_msg(info,"parse_type is failed")));
                            come_exception_var_c19_759=multiple_assign_var26->v1;
                            Err_760=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_760)?(puts(Err_760),exit(0)):(0));
                            come_call_finalizer3(__right_value499,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_760 = come_decrement_ref_count2(Err_760, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph$p_push_back(param_types2_754,(struct sType*)come_increment_ref_count(param_type_756));
                        static int num_function_pointer_result_var_name_b_761=0;
                        list$1char$ph$p_push_back(param_names2_755,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_761)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value501=parse_word(info)));
                            (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_756,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_757 = come_decrement_ref_count2(param_name_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value502=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c20_762=multiple_assign_var27->v1;
                            Err_763=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_763)?(puts(Err_763),exit(0)):(0));
                            come_call_finalizer3(__right_value502,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_763 = come_decrement_ref_count2(Err_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_756,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_757 = come_decrement_ref_count2(param_name_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_764=info->p;
                result_type2_765=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1873, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj102=result_type2_765->mResultType;
                result_type2_765->mResultType=(struct sType*)come_increment_ref_count(result_type_738);
                come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj103=result_type2_765->mParamTypes;
                result_type2_765->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_754));
                come_call_finalizer3(__dec_obj103,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj104=result_type2_765->mParamNames;
                result_type2_765->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_755));
                come_call_finalizer3(__dec_obj104,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_765->mVarArgs=(_Bool)0;
                result_type2_765->mStatic=(_Bool)0;
                var_args_766=(_Bool)0;
                param_default_parametors_767=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1883, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_768=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1885, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_739)),(struct sType*)come_increment_ref_count(result_type2_765),(struct list$1sType$ph*)come_increment_ref_count(param_types_741),(struct list$1char$ph*)come_increment_ref_count(param_names_742),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_767),(_Bool)1,var_args_766,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_772=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value515=__builtin_string(fun_name_739)))));
                (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_772==((void*)0)||fun2_772->mExternal) {
                    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_739)),(struct sFun*)come_increment_ref_count(fun_768));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1898, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value519=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1898, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_768),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_773=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value519,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__371 = come_increment_ref_count(result_773);
                come_call_finalizer3(param_types2_754,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_755,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_765,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_767,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_768,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_772,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_773) ? result_773 = come_decrement_ref_count2(result_773, ((struct sNode*)result_773)->finalize, ((struct sNode*)result_773)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(param_types_741,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_742,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_738,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_739 = come_decrement_ref_count2(fun_name_739, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__371) ? __result_obj__371 = come_decrement_ref_count2(__result_obj__371, ((struct sNode*)__result_obj__371)->finalize, ((struct sNode*)__result_obj__371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__371;
                come_call_finalizer3(param_types2_754,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_755,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_765,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_767,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_768,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_772,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_773) ? result_773 = come_decrement_ref_count2(result_773, ((struct sNode*)result_773)->finalize, ((struct sNode*)result_773)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value569=err_msg(info,"require (")));
                come_exception_var_c21_809=multiple_assign_var28->v1;
                Err_810=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_810)?(puts(Err_810),exit(0)):(0));
                come_call_finalizer3(__right_value569,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_810 = come_decrement_ref_count2(Err_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_741,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_742,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_738,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_739 = come_decrement_ref_count2(fun_name_739, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_703;
        node_811=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__372 = come_increment_ref_count(node_811);
        ((node_811) ? node_811 = come_decrement_ref_count2(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count2(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
        ((node_811) ? node_811 = come_decrement_ref_count2(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_715) {
        info->p=head;
        info->sline=sline_703;
        node_812=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__373 = come_increment_ref_count(node_812);
        ((node_812) ? node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__373) ? __result_obj__373 = come_decrement_ref_count2(__result_obj__373, ((struct sNode*)__result_obj__373)->finalize, ((struct sNode*)__result_obj__373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__373;
        ((node_812) ? node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_721) {
        info->p=head;
        info->sline=sline_703;
        node_813=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_814=info->p;
        header_815=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1932, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append(header_815,source_head_701,source_tail_814-source_head_701);
        __result_obj__374 = come_increment_ref_count(node_813);
        ((node_813) ? node_813 = come_decrement_ref_count2(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_815,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__374) ? __result_obj__374 = come_decrement_ref_count2(__result_obj__374, ((struct sNode*)__result_obj__374)->finalize, ((struct sNode*)__result_obj__374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__374;
        ((node_813) ? node_813 = come_decrement_ref_count2(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_815,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_703;
    buf2_816=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__375 = come_increment_ref_count(((struct sNode*)(__right_value576=top_level_v98(buf2_816,head,head_sline,info))));
    (buf2_816 = come_decrement_ref_count2(buf2_816, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value576) ? __right_value576 = come_decrement_ref_count2(__right_value576, ((struct sNode*)__right_value576)->finalize, ((struct sNode*)__right_value576)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__375) ? __result_obj__375 = come_decrement_ref_count2(__result_obj__375, ((struct sNode*)__result_obj__375)->finalize, ((struct sNode*)__result_obj__375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__375;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_731;
struct list_item$1char$ph* prev_it_732;
struct list$1char$ph* __result_obj__339;
    it_731=self->head;
    while(it_731!=((void*)0)) {
        prev_it_732=it_731;
        it_731=it_731->next;
        come_call_finalizer3(prev_it_732,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__339 = self;
    return __result_obj__339;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value488 = (void*)0;
struct list_item$1sType$ph* litem_748;
struct sType* __dec_obj99;
void* __right_value489 = (void*)0;
struct list_item$1sType$ph* litem_749;
struct sType* __dec_obj100;
void* __right_value490 = (void*)0;
struct list_item$1sType$ph* litem_750;
struct sType* __dec_obj101;
struct list$1sType$ph* __result_obj__342;
    if(    self->len==0) {
        litem_748=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value488=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_748->prev=((void*)0);
        litem_748->next=((void*)0);
        __dec_obj99=litem_748->item;
        litem_748->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_748;
        self->head=litem_748;
    }
    else if(    self->len==1) {
        litem_749=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value489=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_749->prev=self->head;
        litem_749->next=((void*)0);
        __dec_obj100=litem_749->item;
        litem_749->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_749;
        self->head->next=litem_749;
    }
    else {
        litem_750=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value490=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_750->prev=self->tail;
        litem_750->next=((void*)0);
        __dec_obj101=litem_750->item;
        litem_750->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_750;
        self->tail=litem_750;
    }
    self->len++;
    __result_obj__342 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__342;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_769;
unsigned int hash_770;
unsigned int it_771;
struct sFun* __result_obj__343;
struct sFun* __result_obj__344;
struct sFun* __result_obj__345;
struct sFun* __result_obj__346;
default_value_769 = (void*)0;
    memset(&default_value_769,0,sizeof(struct sFun*));
    hash_770=string_get_hash_key(((char*)key))%self->size;
    it_771=hash_770;
    while((_Bool)1) {
        if(        self->item_existance[it_771]) {
            if(            string_equals(self->keys[it_771],key)) {
                __result_obj__343 = come_increment_ref_count(self->items[it_771]);
                come_call_finalizer3(default_value_769,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__343,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__343;
            }
            it_771++;
            if(            it_771>=self->size) {
                it_771=0;
            }
            else if(            it_771==hash_770) {
                __result_obj__344 = come_increment_ref_count(default_value_769);
                come_call_finalizer3(default_value_769,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__344,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__344;
            }
        }
        else {
            __result_obj__345 = come_increment_ref_count(default_value_769);
            come_call_finalizer3(default_value_769,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__345,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__345;
        }
    }
    __result_obj__346 = come_increment_ref_count(default_value_769);
    come_call_finalizer3(default_value_769,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__347;
void* __right_value520 = (void*)0;
struct sFunNode* result_774;
void* __right_value521 = (void*)0;
char* __dec_obj105;
void* __right_value567 = (void*)0;
struct sFun* __dec_obj128;
struct sFunNode* __result_obj__370;
    if(    self==(void*)0) {
        __result_obj__347 = (void*)0;
        return __result_obj__347;
    }
    result_774=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_774->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_774->sname;
        result_774->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_774->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj128=result_774->mFun;
        result_774->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj128,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__370 = result_774;
    come_call_finalizer3(result_774,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__348;
void* __right_value522 = (void*)0;
struct sFun* result_775;
void* __right_value523 = (void*)0;
char* __dec_obj106;
void* __right_value524 = (void*)0;
struct sType* __dec_obj107;
void* __right_value525 = (void*)0;
struct list$1sType$ph* __dec_obj108;
void* __right_value526 = (void*)0;
struct list$1char$ph* __dec_obj109;
void* __right_value527 = (void*)0;
struct list$1char$ph* __dec_obj110;
void* __right_value528 = (void*)0;
struct sType* __dec_obj111;
void* __right_value560 = (void*)0;
struct sBlock* __dec_obj121;
void* __right_value561 = (void*)0;
struct buffer* __dec_obj122;
void* __right_value562 = (void*)0;
struct buffer* __dec_obj123;
void* __right_value563 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value564 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value565 = (void*)0;
char* __dec_obj126;
void* __right_value566 = (void*)0;
char* __dec_obj127;
struct sFun* __result_obj__369;
    if(    self==(void*)0) {
        __result_obj__348 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__348,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__348;
    }
    result_775=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj106=result_775->mName;
        result_775->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj107=result_775->mResultType;
        result_775->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj108=result_775->mParamTypes;
        result_775->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj108,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj109=result_775->mParamNames;
        result_775->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj109,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj110=result_775->mParamDefaultParametors;
        result_775->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj110,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj111=result_775->mLambdaType;
        result_775->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj121=result_775->mBlock;
        result_775->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj121,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj122=result_775->mSource;
        result_775->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj122,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj123=result_775->mSourceHead;
        result_775->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj123,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj124=result_775->mSourceHead2;
        result_775->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj125=result_775->mSourceDefer;
        result_775->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_775->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_775->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_775->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_775->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_775->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_775->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_775->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj126=result_775->mAttribute;
        result_775->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj127=result_775->mFunAttribute;
        result_775->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__369 = come_increment_ref_count(result_775);
    come_call_finalizer3(result_775,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__369,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__369;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__349;
void* __right_value529 = (void*)0;
struct sBlock* result_776;
void* __right_value530 = (void*)0;
struct list$1sNode$ph* __dec_obj112;
void* __right_value559 = (void*)0;
struct sVarTable* __dec_obj120;
struct sBlock* __result_obj__368;
    if(    self==(void*)0) {
        __result_obj__349 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__349,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__349;
    }
    result_776=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj112=result_776->mNodes;
        result_776->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj112,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj120=result_776->mVarTable;
        result_776->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj120,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_776->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__368 = come_increment_ref_count(result_776);
    come_call_finalizer3(result_776,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__368,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__368;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__350;
void* __right_value531 = (void*)0;
struct sVarTable* result_777;
void* __right_value558 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj119;
struct sVarTable* __result_obj__367;
    if(    self==(void*)0) {
        __result_obj__350 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__350,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__350;
    }
    result_777=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj119=result_777->mVars;
        result_777->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj119,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_777->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_777->mParent=self->mParent;
    }
    __result_obj__367 = come_increment_ref_count(result_777);
    come_call_finalizer3(result_777,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__367,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__367;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__351;
void* __right_value532 = (void*)0;
void* __right_value538 = (void*)0;
struct map$2char$phsVar$ph* result_781;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1char$p* __dec_obj114;
char* it_784;
struct sVar* default_value_787;
void* __right_value541 = (void*)0;
struct sVar* it2_790;
void* __right_value547 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__366;
default_value_787 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__351 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__351,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__351;
    }
    result_781=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 2766, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj114=result_781->key_list;
    result_781->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2768, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj114,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_784=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_784=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_787,0,sizeof(struct sVar*));
        it2_790=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_784,(struct sVar*)come_increment_ref_count(default_value_787)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_781,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_784)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_790)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_781,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_784)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_790)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_781,(char*)come_increment_ref_count(it_784),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_790)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_781,(char*)come_increment_ref_count(it_784),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_790)));
        }
        come_call_finalizer3(default_value_787,sVar_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(it2_790,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__366 = come_increment_ref_count(result_781);
    come_call_finalizer3(result_781,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__366,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__366;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_778;
int i_779;
    for(    i_778=0;    i_778<self->size;    i_778++    ){
        if(        self->item_existance[i_778]) {
            if(            1) {
                come_call_finalizer3(self->items[i_778],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_779=0;    i_779<self->size;    i_779++    ){
        if(        self->item_existance[i_779]) {
            if(            1) {
                (self->keys[i_779] = come_decrement_ref_count2(self->keys[i_779], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
int i_780;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1char$p* __dec_obj113;
struct map$2char$phsVar$ph* __result_obj__352;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value533=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value534=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2696, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value535=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_780=0;    i_780<128;    i_780++    ){
        self->item_existance[i_780]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj113=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj113,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__352 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__352,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__352;
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_782;
char* __result_obj__353;
char* __result_obj__354;
char* result_783;
char* __result_obj__355;
result_782 = (void*)0;
result_783 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_782,0,sizeof(char*));
        __result_obj__353 = result_782;
        return __result_obj__353;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__354 = self->key_list->it->item;
        return __result_obj__354;
    }
    memset(&result_783,0,sizeof(char*));
    __result_obj__355 = result_783;
    return __result_obj__355;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_785;
char* __result_obj__356;
char* __result_obj__357;
char* result_786;
char* __result_obj__358;
result_785 = (void*)0;
result_786 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_785,0,sizeof(char*));
        __result_obj__356 = result_785;
        return __result_obj__356;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__357 = self->key_list->it->item;
        return __result_obj__357;
    }
    memset(&result_786,0,sizeof(char*));
    __result_obj__358 = result_786;
    return __result_obj__358;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_788;
unsigned int it_789;
struct sVar* __result_obj__359;
struct sVar* __result_obj__360;
struct sVar* __result_obj__361;
struct sVar* __result_obj__362;
    hash_788=string_get_hash_key(((char*)key))%self->size;
    it_789=hash_788;
    while((_Bool)1) {
        if(        self->item_existance[it_789]) {
            if(            string_equals(self->keys[it_789],key)) {
                __result_obj__359 = come_increment_ref_count(self->items[it_789]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__359,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__359;
            }
            it_789++;
            if(            it_789>=self->size) {
                it_789=0;
            }
            else if(            it_789==hash_788) {
                __result_obj__360 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__360,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__360;
            }
        }
        else {
            __result_obj__361 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__361,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__361;
        }
    }
    __result_obj__362 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__362,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__362;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_802;
int it_803;
_Bool same_key_exist_804;
char* it2_805;
struct map$2char$phsVar$ph* __result_obj__363;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_802=string_get_hash_key(((char*)key))%self->size;
    it_803=hash_802;
    while((_Bool)1) {
        if(        self->item_existance[it_803]) {
            if(            string_equals(self->keys[it_803],key)) {
                if(                1) {
                    (self->keys[it_803] = come_decrement_ref_count2(self->keys[it_803], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_803]);
                    self->keys[it_803]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_803]);
                    self->keys[it_803]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_803],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_803]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_803]=item;
                }
                break;
            }
            it_803++;
            if(            it_803>=self->size) {
                it_803=0;
            }
            else if(            it_803==hash_802) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_803]=(_Bool)1;
            if(            1) {
                self->keys[it_803]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_803]=key;
            }
            if(            1) {
                self->items[it_803]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_803]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_804=(_Bool)0;
    for(    it2_805=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_805=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_805,key)) {
            same_key_exist_804=(_Bool)1;
        }
    }
    if(    !same_key_exist_804) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__363 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__363;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_791;
void* __right_value542 = (void*)0;
char** keys_792;
void* __right_value543 = (void*)0;
struct sVar** items_793;
void* __right_value544 = (void*)0;
_Bool* item_existance_794;
int len_795;
char* it_796;
struct sVar* default_value_797;
void* __right_value545 = (void*)0;
struct sVar* it2_798;
unsigned int hash_799;
int n_800;
struct sVar* default_value_801;
void* __right_value546 = (void*)0;
default_value_797 = (void*)0;
default_value_801 = (void*)0;
    size_791=self->size*10;
    keys_792=(char**)come_increment_ref_count(((char**)(__right_value542=(char**)come_calloc(1, sizeof(char*)*(1*(size_791)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_793=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value543=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_791)), "/usr/local/include/comelang.h", 2935, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_794=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value544=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_791)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_795=0;
    for(    it_796=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_796=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_797,0,sizeof(struct sVar*));
        it2_798=((struct sVar*)(__right_value545=map$2char$phsVar$ph$p_at(self,it_796,(struct sVar*)come_increment_ref_count(default_value_797))));
        come_call_finalizer3(__right_value545,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_799=string_get_hash_key(((char*)it_796))%size_791;
        n_800=hash_799;
        while((_Bool)1) {
            if(            item_existance_794[n_800]) {
                n_800++;
                if(                n_800>=size_791) {
                    n_800=0;
                }
                else if(                n_800==hash_799) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_794[n_800]=(_Bool)1;
                keys_792[n_800]=it_796;
                items_793[n_800]=((struct sVar*)(__right_value546=map$2char$phsVar$ph$p_at(self,it_796,(struct sVar*)come_increment_ref_count(default_value_801))));
                come_call_finalizer3(__right_value546,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_795++;
                come_call_finalizer3(default_value_801,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_801,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_797,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_792;
    self->items=items_793;
    self->item_existance=item_existance_794;
    self->size=size_791;
    self->len=len_795;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__364;
void* __right_value548 = (void*)0;
struct sVar* result_806;
void* __right_value549 = (void*)0;
char* __dec_obj115;
void* __right_value550 = (void*)0;
char* __dec_obj116;
void* __right_value551 = (void*)0;
struct sType* __dec_obj117;
void* __right_value552 = (void*)0;
char* __dec_obj118;
struct sVar* __result_obj__365;
    if(    self==(void*)0) {
        __result_obj__364 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__364,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__364;
    }
    result_806=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_806->mName;
        result_806->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj116=result_806->mCValueName;
        result_806->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj117=result_806->mType;
        result_806->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_806->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_806->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_806->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj118=result_806->mFunName;
        result_806->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__365 = come_increment_ref_count(result_806);
    come_call_finalizer3(result_806,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__365,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__365;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_807;
int i_808;
    for(    i_807=0;    i_807<self->size;    i_807++    ){
        if(        self->item_existance[i_807]) {
            if(            1) {
                come_call_finalizer3(self->items[i_807],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_808=0;    i_808<self->size;    i_808++    ){
        if(        self->item_existance[i_808]) {
            if(            1) {
                (self->keys[i_808] = come_decrement_ref_count2(self->keys[i_808], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_817;
int caller_line_818;
char* caller_sname_819;
_Bool comma_instead_of_semicolon_820;
char* last_code_821;
char* __dec_obj129;
char* last_code2_822;
char* __dec_obj130;
void* __right_value577 = (void*)0;
char* sname_top_823;
int sline_top_824;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sFun* funX_825;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__379;
void* __right_value584 = (void*)0;
struct sType* result_type_828;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1sType$ph* param_types_829;
struct list$1sType$ph* o2_saved_830;
struct sType* it_833;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* param_type_836;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1char$ph* param_names_837;
void* __right_value591 = (void*)0;
struct list$1char$ph* param_default_parametors_838;
char* p_839;
int sline_840;
char* sname_841;
char* head_842;
struct buffer* source_843;
void* __right_value592 = (void*)0;
struct buffer* __dec_obj133;
struct sType* generics_type_saved_844;
void* __right_value593 = (void*)0;
struct sType* __dec_obj134;
struct list$1char$ph* method_generics_type_names_845;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1char$ph* __dec_obj135;
struct list$1char$ph* o2_saved_846;
char* it_847;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1char$ph* __dec_obj136;
char* __dec_obj137;
void* __right_value598 = (void*)0;
struct sBlock* block_848;
struct buffer* __dec_obj138;
char* __dec_obj139;
_Bool var_args_849;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sFun* fun_850;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value606 = (void*)0;
struct sNode* node_851;
_Bool in_generics_fun_852;
_Bool Value_853;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__386;
struct sType* __dec_obj140;
struct list$1char$ph* __dec_obj141;
void* __right_value610 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__387;
    caller_fun_817=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_818=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_819=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_820=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_821=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj129=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_822=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj130=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_823=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_824=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_825=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value578=__builtin_string(fun_name)))));
    (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_825) {
        __result_obj__379 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value583=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1971, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_821 = come_decrement_ref_count2(last_code_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_822 = come_decrement_ref_count2(last_code2_822, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_823 = come_decrement_ref_count2(sname_top_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_825,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value583,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__379,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__379;
    }
    result_type_828=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_829=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1977, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_830=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_833=list$1sType$ph$p_begin((o2_saved_830));    !list$1sType$ph$p_end((o2_saved_830));    it_833=list$1sType$ph$p_next((o2_saved_830))    ){
        param_type_836=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value587=come_call_cloner(sType_clone, it_833))),generics_type,info));
        come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_add(param_types_829,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_836)));
        come_call_finalizer3(param_type_836,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_830,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_837=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_838=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_839=info->p;
    sline_840=info->sline;
    sname_841=(char*)come_increment_ref_count(info->sname);
    head_842=info->head;
    source_843=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj133=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj133,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_844=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj134=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_845=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj135=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2005, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj135,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_846=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_847=list$1char$ph$p_begin((o2_saved_846));    !list$1char$ph$p_end((o2_saved_846));    it_847=list$1char$ph$p_next((o2_saved_846))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_847)));
    }
    come_call_finalizer3(o2_saved_846,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj136=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj136,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj137=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_848=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_842;
    __dec_obj138=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_843);
    come_call_finalizer3(__dec_obj138,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_839;
    info->sline=sline_840;
    __dec_obj139=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_841);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_828->mInline=(_Bool)0;
    result_type_828->mStatic=(_Bool)0;
    result_type_828->mUniq=(_Bool)0;
    var_args_849=generics_fun->mVarArgs;
    fun_850=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2029, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_828),(struct list$1sType$ph*)come_increment_ref_count(param_types_829),(struct list$1char$ph*)come_increment_ref_count(param_names_837),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_838),(_Bool)0,var_args_849,(struct sBlock*)come_increment_ref_count(block_848),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_850));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2036, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value605=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2036, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_850),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_851=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value605,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_852=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_853=node_compile(node_851,info);
    if(    !Value_853) {
        __result_obj__386 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value609=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2041, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_821 = come_decrement_ref_count2(last_code_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_822 = come_decrement_ref_count2(last_code2_822, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_823 = come_decrement_ref_count2(sname_top_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_825,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_829,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_837,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_838,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_841 = come_decrement_ref_count2(sname_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_844,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_845,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_848,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_850,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_851) ? node_851 = come_decrement_ref_count2(node_851, ((struct sNode*)node_851)->finalize, ((struct sNode*)node_851)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value609,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__386,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__386;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_852;
    __dec_obj140=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_844);
    come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj141=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_845);
    come_call_finalizer3(__dec_obj141,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj142=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_823));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_824;
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_821);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_822);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_817;
    info->caller_line=caller_line_818;
    info->caller_sname=caller_sname_819;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_820;
    __result_obj__387 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value613=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2061, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_821 = come_decrement_ref_count2(last_code_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_822 = come_decrement_ref_count2(last_code2_822, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_823 = come_decrement_ref_count2(sname_top_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_825,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_829,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_837,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_838,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_841 = come_decrement_ref_count2(sname_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_844,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_845,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_848,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_850,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_851) ? node_851 = come_decrement_ref_count2(node_851, ((struct sNode*)node_851)->finalize, ((struct sNode*)node_851)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value613,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__387,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__387;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__376;
void* __right_value580 = (void*)0;
struct tuple2$2char$phbool$* result_826;
void* __right_value581 = (void*)0;
char* __dec_obj131;
struct tuple2$2char$phbool$* __result_obj__377;
    if(    self==(void*)0) {
        __result_obj__376 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__376,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__376;
    }
    result_826=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj131=result_826->v1;
        result_826->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_826->v2=self->v2;
    }
    __result_obj__377 = come_increment_ref_count(result_826);
    come_call_finalizer3(result_826,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__377,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__377;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_827;
    result_827=0;
    result_827+=int_get_hash_key(((int)self->v1));
    result_827+=int_get_hash_key(((int)self->v2));
    return result_827;
}

static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj132;
struct tuple2$2char$phbool$* __result_obj__378;
    __dec_obj132=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__378 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__378,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__378;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_831;
struct sType* __result_obj__380;
struct sType* __result_obj__381;
struct sType* result_832;
struct sType* __result_obj__382;
result_831 = (void*)0;
result_832 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_831,0,sizeof(struct sType*));
        __result_obj__380 = result_831;
        return __result_obj__380;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__381 = self->it->item;
        return __result_obj__381;
    }
    memset(&result_832,0,sizeof(struct sType*));
    __result_obj__382 = result_832;
    return __result_obj__382;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_834;
struct sType* __result_obj__383;
struct sType* __result_obj__384;
struct sType* result_835;
struct sType* __result_obj__385;
result_834 = (void*)0;
result_835 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_834,0,sizeof(struct sType*));
        __result_obj__383 = result_834;
        return __result_obj__383;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__384 = self->it->item;
        return __result_obj__384;
    }
    memset(&result_835,0,sizeof(struct sType*));
    __result_obj__385 = result_835;
    return __result_obj__385;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_854;
int caller_line_855;
char* caller_sname_856;
_Bool comma_instead_of_semicolon_857;
char* last_code_858;
char* __dec_obj145;
char* last_code2_859;
char* __dec_obj146;
void* __right_value614 = (void*)0;
char* sname_top_860;
int sline_top_861;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sFun* funX_862;
_Bool __result_obj__388;
void* __right_value617 = (void*)0;
struct sType* result_type_863;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1sType$ph* param_types_864;
struct list$1sType$ph* o2_saved_865;
struct sType* it_866;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sType* param_type_867;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1char$ph* param_names_868;
void* __right_value624 = (void*)0;
struct list$1char$ph* param_default_parametors_869;
char* p_870;
int sline_871;
char* sname_872;
char* head_873;
struct buffer* source_874;
void* __right_value625 = (void*)0;
struct buffer* __dec_obj147;
struct list$1char$ph* method_generics_type_names_875;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1char$ph* __dec_obj148;
struct list$1char$ph* o2_saved_876;
char* it_877;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1char$ph* __dec_obj149;
char* __dec_obj150;
void* __right_value630 = (void*)0;
struct sBlock* block_878;
struct buffer* __dec_obj151;
char* __dec_obj152;
_Bool generate__879;
_Bool var_args_880;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sFun* fun_881;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value639 = (void*)0;
struct sNode* node_882;
_Bool Value_883;
void* __if_result__1_884 = (void*)0;
_Bool __result_obj__389;
struct list$1char$ph* __dec_obj153;
void* __right_value640 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
_Bool __result_obj__390;
    caller_fun_854=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_855=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_856=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_857=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_858=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj145=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_859=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj146=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_860=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_861=info->sline;
    funX_862=((struct sFun*)(__right_value616=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value615=__builtin_string(fun_name))))));
    (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value616,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_862) {
        __result_obj__388 = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_858 = come_decrement_ref_count2(last_code_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_859 = come_decrement_ref_count2(last_code2_859, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_860 = come_decrement_ref_count2(sname_top_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__388;
    }
    result_type_863=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_864=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2090, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_865=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_866=list$1sType$ph$p_begin((o2_saved_865));    !list$1sType$ph$p_end((o2_saved_865));    it_866=list$1sType$ph$p_next((o2_saved_865))    ){
        param_type_867=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value620=come_call_cloner(sType_clone, it_866))),info));
        come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_add(param_types_864,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_867)));
        come_call_finalizer3(param_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_865,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_868=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_869=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_870=info->p;
    sline_871=info->sline;
    sname_872=(char*)come_increment_ref_count(info->sname);
    head_873=info->head;
    source_874=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_875=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj148=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2112, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj148,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_876=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_877=list$1char$ph$p_begin((o2_saved_876));    !list$1char$ph$p_end((o2_saved_876));    it_877=list$1char$ph$p_next((o2_saved_876))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_877)));
    }
    come_call_finalizer3(o2_saved_876,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj149=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj150=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_878=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_873;
    __dec_obj151=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_874);
    come_call_finalizer3(__dec_obj151,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_870;
    info->sline=sline_871;
    __dec_obj152=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_872);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_863->mInline=(_Bool)0;
    result_type_863->mStatic=(_Bool)0;
    result_type_863->mUniq=(_Bool)0;
    generate__879=(_Bool)0;
    if(    result_type_863->mGenerate) {
        result_type_863->mGenerate=(_Bool)0;
        generate__879=(_Bool)1;
    }
    var_args_880=generics_fun->mVarArgs;
    fun_881=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2142, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_863),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_864)),(struct list$1char$ph*)come_increment_ref_count(param_names_868),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_869),(_Bool)0,var_args_880,(struct sBlock*)come_increment_ref_count(block_878),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__879,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_881));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2149, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value638=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2149, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_881),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_882=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value638,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_883=node_compile(node_882,info);
    if(    !Value_883) {
        __result_obj__389 = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_858 = come_decrement_ref_count2(last_code_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_859 = come_decrement_ref_count2(last_code2_859, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_860 = come_decrement_ref_count2(sname_top_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_863,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_864,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_868,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_869,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_872 = come_decrement_ref_count2(sname_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_874,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_875,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_878,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_881,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_882) ? node_882 = come_decrement_ref_count2(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__389;
    }
    else {
        __if_result__1_884=(void*)(Value_883);
;
    }
    __dec_obj153=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_875);
    come_call_finalizer3(__dec_obj153,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj154=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_860));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_861;
    __dec_obj155=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_858);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj156=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_859);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_854;
    info->caller_line=caller_line_855;
    info->caller_sname=caller_sname_856;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_857;
    __result_obj__390 = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_858 = come_decrement_ref_count2(last_code_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_859 = come_decrement_ref_count2(last_code2_859, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_860 = come_decrement_ref_count2(sname_top_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_863,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_864,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_868,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_869,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_872 = come_decrement_ref_count2(sname_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_874,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_875,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_878,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_881,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_882) ? node_882 = come_decrement_ref_count2(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__390;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_885;
char* source_head_886;
void* __right_value641 = (void*)0;
char* attribute_887;
struct sType* result_type_888;
char* var_name_889;
_Bool constructor__890;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sType* __dec_obj157;
void* __right_value644 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* result_type2_891=0;
char* var_name2_892=0;
_Bool err_893=0;
struct sType* __dec_obj158;
char* __dec_obj159;
_Bool method_definition_894;
char* p_895;
int sline_896;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct buffer* buf2_897;
char* fun_name_898;
char* base_fun_name_899;
struct sType* obj_type2_900;
void* __right_value647 = (void*)0;
char* __dec_obj160;
void* __right_value648 = (void*)0;
char* __dec_obj161;
void* __right_value649 = (void*)0;
struct sType* __dec_obj162;
void* __right_value650 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* obj_type_901=0;
char* name_902=0;
_Bool err_903=0;
void* __right_value651 = (void*)0;
char* __dec_obj163;
void* __right_value652 = (void*)0;
char* __dec_obj164;
void* __right_value653 = (void*)0;
struct sType* __dec_obj165;
void* __right_value654 = (void*)0;
char* __dec_obj166;
void* __right_value655 = (void*)0;
char* __dec_obj167;
void* __right_value656 = (void*)0;
struct sType* __dec_obj168;
void* __right_value657 = (void*)0;
char* __dec_obj169;
void* __right_value658 = (void*)0;
char* __dec_obj170;
void* __right_value659 = (void*)0;
struct sType* __dec_obj171;
void* __right_value660 = (void*)0;
char* __dec_obj172;
void* __right_value661 = (void*)0;
char* __dec_obj173;
void* __right_value662 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var31 = (void*)0;
struct list$1sType$ph* param_types_904=0;
struct list$1char$ph* param_names_905=0;
struct list$1char$ph* param_default_parametors_906=0;
_Bool var_args_907=0;
char* header_tail_908;
int version_909;
int n_910;
_Bool in_top_level_911;
void* __right_value663 = (void*)0;
struct sBlock* block_912;
void* __right_value664 = (void*)0;
char* fun_name_914;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sFun* fun_915;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sFun* fun2_916;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value677 = (void*)0;
struct sNode* __result_obj__393;
void* __right_value678 = (void*)0;
char* none_generics_name_918;
void* __right_value679 = (void*)0;
char* generics_sname_919;
int generics_sline_920;
void* __right_value680 = (void*)0;
char* block_921;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sGenericsFun* fun_922;
void* __right_value687 = (void*)0;
char* fun_name3_923;
void* __right_value693 = (void*)0;
struct sNode* __result_obj__405;
void* __right_value694 = (void*)0;
char* generics_sname_945;
int generics_sline_946;
void* __right_value695 = (void*)0;
char* block_947;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sGenericsFun* fun_948;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* __result_obj__406;
char* source_tail_949;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
char* new_fun_name_950;
void* __right_value706 = (void*)0;
char* __dec_obj175;
void* __right_value707 = (void*)0;
struct sBlock* block_951;
_Bool static_fun_952;
_Bool inline_fun_953;
_Bool uniq_fun_954;
_Bool generate_fun_955;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sFun* fun_956;
void* __right_value713 = (void*)0;
char* header_957;
void* __right_value714 = (void*)0;
char* id_958;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sFun* fun2_959;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value721 = (void*)0;
struct sNode* __result_obj__407;
void* __right_value722 = (void*)0;
char* new_fun_name_960;
void* __right_value723 = (void*)0;
char* __dec_obj176;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sFun* fun_961;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun2_962;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* header_963;
void* __right_value732 = (void*)0;
char* id_964;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value735 = (void*)0;
struct sNode* __result_obj__408;
void* __right_value736 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var32 = (void*)0;
char* asm_fun_965=0;
char* fun_attribute_966=0;
void* __right_value737 = (void*)0;
char* __dec_obj177;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sFun* fun_967;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sFun* fun2_968;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
char* header_969;
void* __right_value745 = (void*)0;
char* id_970;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value748 = (void*)0;
struct sNode* __result_obj__409;
void* __right_value749 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c22_971=0;
char* Err_972=0;
struct sNode* __result_obj__410;
fun_name_898 = (void*)0;
    header_head_885=info->p;
    source_head_886=info->p;
    attribute_887=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_888=((void*)0);
    var_name_889=((void*)0);
    constructor__890=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value642=parse_word(info)));
        (__right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj157=result_type_888;
        result_type_888=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_888->mHeap=(_Bool)1;
        constructor__890=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value644=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_891=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
        var_name2_892=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        err_893=multiple_assign_var29->v3;
        come_call_finalizer3(__right_value644,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj158=result_type_888;
        result_type_888=(struct sType*)come_increment_ref_count(result_type2_891);
        come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj159=var_name_889;
        var_name_889=(char*)come_increment_ref_count(var_name2_892);
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !err_893) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_891,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_892 = come_decrement_ref_count2(var_name2_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_894=(_Bool)0;
    {
        p_895=info->p;
        sline_896=info->sline;
        buf2_897=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2210, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_897,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_897)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_894=(_Bool)1;
        }
        info->p=p_895;
        info->sline=sline_896;
        come_call_finalizer3(buf2_897,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_899=((void*)0);
    obj_type2_900=((void*)0);
    if(    constructor__890) {
        __dec_obj160=base_fun_name_899;
        base_fun_name_899=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj161=fun_name_898;
        fun_name_898=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_899,info,(_Bool)1));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj162=obj_type2_900;
        obj_type2_900=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_894) {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value650=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_901=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        name_902=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_903=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value650,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        !err_903) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj163=base_fun_name_899;
        base_fun_name_899=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=fun_name_898;
        fun_name_898=(char*)come_increment_ref_count(create_method_name(obj_type_901,(_Bool)0,base_fun_name_899,info,(_Bool)1));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj165=obj_type2_900;
        obj_type2_900=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_type_901));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(obj_type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_902 = come_decrement_ref_count2(name_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj166=base_fun_name_899;
        base_fun_name_899=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj167=fun_name_898;
        fun_name_898=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_899,info,(_Bool)1));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj168=obj_type2_900;
        obj_type2_900=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj169=base_fun_name_899;
        base_fun_name_899=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj170=fun_name_898;
        fun_name_898=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_899,info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj171=obj_type2_900;
        obj_type2_900=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj172=fun_name_898;
        fun_name_898=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj173=base_fun_name_899;
        base_fun_name_899=(char*)come_increment_ref_count(__builtin_string(fun_name_898));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_899,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var31=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value662=parse_params(info,constructor__890)));
    param_types_904=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var31->v1);
    param_names_905=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v2);
    param_default_parametors_906=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v3);
    var_args_907=multiple_assign_var31->v4;
    come_call_finalizer3(__right_value662,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    header_tail_908=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_899,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_909=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_910=0;
        while(xisdigit(*info->p)) {
            n_910=n_910*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_909=n_910;
    }
    in_top_level_911=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_899,"lambda")) {
        block_912=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_913=0;
        lambda_num_913++;
        fun_name_914=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_913));
        result_type_888->mInline=(_Bool)0;
        result_type_888->mStatic=(_Bool)0;
        result_type_888->mUniq=(_Bool)0;
        result_type_888->mGenerate=(_Bool)0;
        fun_915=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2324, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sType$ph*)come_increment_ref_count(param_types_904),(struct list$1char$ph*)come_increment_ref_count(param_names_905),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_906),(_Bool)0,var_args_907,(struct sBlock*)come_increment_ref_count(block_912),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_916=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value670=__builtin_string(fun_name_914)))));
        (__right_value670 = come_decrement_ref_count2(__right_value670, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_916==((void*)0)||fun2_916->mExternal) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sFun*)come_increment_ref_count(fun_915));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2334, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value674=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2334, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_915,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__393 = come_increment_ref_count(((struct sNode*)(__right_value677=_inf_value5)));
        come_call_finalizer3(block_912,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_915,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_916,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value674,sLambdaNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value677) ? __right_value677 = come_decrement_ref_count2(__right_value677, ((struct sNode*)__right_value677)->finalize, ((struct sNode*)__right_value677)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__393) ? __result_obj__393 = come_decrement_ref_count2(__result_obj__393, ((struct sNode*)__result_obj__393)->finalize, ((struct sNode*)__result_obj__393)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__393;
        come_call_finalizer3(block_912,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_915,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_916,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_918=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_919=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_920=info->sline;
        block_921=(char*)come_increment_ref_count(skip_block(info));
        fun_922=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2344, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value682=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value683=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sType$ph*)come_increment_ref_count(param_types_904),(struct list$1char$ph*)come_increment_ref_count(param_names_905),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_906),var_args_907,(char*)come_increment_ref_count(block_921),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_919)),generics_sline_920));
        come_call_finalizer3(__right_value682,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value683,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_923=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_918,base_fun_name_899));
        map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_923)),(struct sGenericsFun*)come_increment_ref_count(fun_922));
        __result_obj__405 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_918 = come_decrement_ref_count2(none_generics_name_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_919 = come_decrement_ref_count2(generics_sname_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_921 = come_decrement_ref_count2(block_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_922,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_923 = come_decrement_ref_count2(fun_name3_923, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count2(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__405;
        (none_generics_name_918 = come_decrement_ref_count2(none_generics_name_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_919 = come_decrement_ref_count2(generics_sname_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_921 = come_decrement_ref_count2(block_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_922,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_923 = come_decrement_ref_count2(fun_name3_923, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_945=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_946=info->sline;
        block_947=(char*)come_increment_ref_count(skip_block(info));
        fun_948=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2358, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value697=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value698=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sType$ph*)come_increment_ref_count(param_types_904),(struct list$1char$ph*)come_increment_ref_count(param_names_905),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_906),var_args_907,(char*)come_increment_ref_count(block_947),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_945)),generics_sline_946));
        come_call_finalizer3(__right_value697,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value698,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        method_definition_894) {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sGenericsFun*)come_increment_ref_count(fun_948));
        }
        else {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_899)),(struct sGenericsFun*)come_increment_ref_count(fun_948));
        }
        __result_obj__406 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_945 = come_decrement_ref_count2(generics_sname_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_947 = come_decrement_ref_count2(block_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_948,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count2(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__406;
        (generics_sname_945 = come_decrement_ref_count2(generics_sname_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_947 = come_decrement_ref_count2(block_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_948,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_949=info->p-1;
        if(        version_909>0) {
            new_fun_name_950=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value704=__builtin_string(fun_name_898))),version_909));
            (__right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj175=fun_name_898;
            fun_name_898=(char*)come_increment_ref_count(__builtin_string(new_fun_name_950));
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_950 = come_decrement_ref_count2(new_fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_951=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__890,(_Bool)1));
        static_fun_952=(_Bool)0;
        if(        result_type_888->mStatic) {
            result_type_888->mStatic=(_Bool)0;
            result_type_888->mUniq=(_Bool)0;
            static_fun_952=(_Bool)1;
        }
        inline_fun_953=(_Bool)0;
        if(        result_type_888->mInline) {
            result_type_888->mInline=(_Bool)0;
            result_type_888->mUniq=(_Bool)0;
            inline_fun_953=(_Bool)1;
        }
        uniq_fun_954=(_Bool)0;
        if(        result_type_888->mUniq) {
            result_type_888->mUniq=(_Bool)0;
            result_type_888->mInline=(_Bool)0;
            result_type_888->mStatic=(_Bool)0;
            uniq_fun_954=(_Bool)1;
        }
        generate_fun_955=(_Bool)0;
        if(        result_type_888->mUniq) {
            result_type_888->mUniq=(_Bool)0;
            result_type_888->mInline=(_Bool)0;
            result_type_888->mStatic=(_Bool)0;
            generate_fun_955=(_Bool)1;
        }
        fun_956=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2408, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sType$ph*)come_increment_ref_count(param_types_904),(struct list$1char$ph*)come_increment_ref_count(param_names_905),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_906),(_Bool)0,var_args_907,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_951)),static_fun_952,info,inline_fun_953,uniq_fun_954,generate_fun_955,(char*)come_increment_ref_count(attribute_887),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->output_header_file) {
            if(            !result_type_888->mStatic&&!info->no_output_come_code) {
                header_957=(char*)come_increment_ref_count(make_come_header_function(fun_956,(char*)come_increment_ref_count(base_fun_name_899),(struct sType*)come_increment_ref_count(obj_type2_900),version_909,info));
                id_958=(char*)come_increment_ref_count(__builtin_string(fun_name_898));
                add_come_code_at_come_header(info,id_958,"%s",header_957);
                (header_957 = come_decrement_ref_count2(header_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_958 = come_decrement_ref_count2(id_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sFun*)come_increment_ref_count(fun_956));
        }
        else {
            fun2_959=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value716=__builtin_string(fun_name_898)))));
            (__right_value716 = come_decrement_ref_count2(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_959==((void*)0)||fun2_959->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sFun*)come_increment_ref_count(fun_956));
            }
            come_call_finalizer3(fun2_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2434, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value720=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2434, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_956),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__407 = come_increment_ref_count(((struct sNode*)(__right_value721=_inf_value6)));
        come_call_finalizer3(block_951,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value720,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value721) ? __right_value721 = come_decrement_ref_count2(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count2(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__407;
        come_call_finalizer3(block_951,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_909>0) {
            new_fun_name_960=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_898,version_909));
            __dec_obj176=fun_name_898;
            fun_name_898=(char*)come_increment_ref_count(__builtin_string(new_fun_name_960));
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_960 = come_decrement_ref_count2(new_fun_name_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_888->mStatic=(_Bool)0;
            result_type_888->mUniq=(_Bool)0;
            result_type_888->mInline=(_Bool)0;
            result_type_888->mGenerate=(_Bool)0;
            fun_961=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2451, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sType$ph*)come_increment_ref_count(param_types_904),(struct list$1char$ph*)come_increment_ref_count(param_names_905),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_906),(_Bool)1,var_args_907,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_887),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_962=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value728=__builtin_string(fun_name_898)))));
            (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_962==((void*)0)||fun2_962->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sFun*)come_increment_ref_count(fun_961));
            }
            if(            info->output_header_file) {
                if(                !result_type_888->mStatic&&!info->no_output_come_code) {
                    header_963=(char*)come_increment_ref_count(make_come_header_function(fun_961,(char*)come_increment_ref_count(base_fun_name_899),(struct sType*)come_increment_ref_count(obj_type2_900),version_909,info));
                    id_964=(char*)come_increment_ref_count(__builtin_string(fun_name_898));
                    add_come_code_at_come_header(info,id_964,"%s",header_963);
                    (header_963 = come_decrement_ref_count2(header_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_964 = come_decrement_ref_count2(id_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2471, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value734=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2471, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_961),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__408 = come_increment_ref_count(((struct sNode*)(__right_value735=_inf_value7)));
            come_call_finalizer3(fun_961,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_962,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value734,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value735) ? __right_value735 = come_decrement_ref_count2(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__408) ? __result_obj__408 = come_decrement_ref_count2(__result_obj__408, ((struct sNode*)__result_obj__408)->finalize, ((struct sNode*)__result_obj__408)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__408;
            come_call_finalizer3(fun_961,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_962,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2char$phchar$ph*)(__right_value736=parse_function_attribute(info)));
            asm_fun_965=(char*)come_increment_ref_count(multiple_assign_var32->v1);
            fun_attribute_966=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            come_call_finalizer3(__right_value736,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_965,"")) {
                __dec_obj177=fun_name_898;
                fun_name_898=(char*)come_increment_ref_count(__builtin_string(asm_fun_965));
                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            result_type_888->mStatic=(_Bool)0;
            result_type_888->mUniq=(_Bool)0;
            result_type_888->mInline=(_Bool)0;
            result_type_888->mGenerate=(_Bool)0;
            fun_967=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sType$ph*)come_increment_ref_count(param_types_904),(struct list$1char$ph*)come_increment_ref_count(param_names_905),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_906),(_Bool)1,var_args_907,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_887),(char*)come_increment_ref_count(fun_attribute_966)));
            fun2_968=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value741=__builtin_string(fun_name_898)))));
            (__right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_968==((void*)0)||fun2_968->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_898)),(struct sFun*)come_increment_ref_count(fun_967));
            }
            if(            info->output_header_file) {
                if(                !result_type_888->mStatic&&!info->no_output_come_code) {
                    header_969=(char*)come_increment_ref_count(make_come_header_function(fun_967,(char*)come_increment_ref_count(base_fun_name_899),(struct sType*)come_increment_ref_count(obj_type2_900),version_909,info));
                    id_970=(char*)come_increment_ref_count(__builtin_string(fun_name_898));
                    add_come_code_at_come_header(info,id_970,"%s",header_969);
                    (header_969 = come_decrement_ref_count2(header_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_970 = come_decrement_ref_count2(id_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2507, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value747=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2507, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_967),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__409 = come_increment_ref_count(((struct sNode*)(__right_value748=_inf_value8)));
            (asm_fun_965 = come_decrement_ref_count2(asm_fun_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_966 = come_decrement_ref_count2(fun_attribute_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(fun_967,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_968,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value747,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value748) ? __right_value748 = come_decrement_ref_count2(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__409) ? __result_obj__409 = come_decrement_ref_count2(__result_obj__409, ((struct sNode*)__result_obj__409)->finalize, ((struct sNode*)__result_obj__409)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__409;
            (asm_fun_965 = come_decrement_ref_count2(asm_fun_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_966 = come_decrement_ref_count2(fun_attribute_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(fun_967,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_968,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value749=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_exception_var_c22_971=multiple_assign_var33->v1;
        Err_972=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        ((Err_972)?(puts(Err_972),exit(0)):(0));
        come_call_finalizer3(__right_value749,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(2);
        (Err_972 = come_decrement_ref_count2(Err_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_911;
    __result_obj__410 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_887 = come_decrement_ref_count2(attribute_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_889 = come_decrement_ref_count2(var_name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_898 = come_decrement_ref_count2(fun_name_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_899 = come_decrement_ref_count2(base_fun_name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(obj_type2_900,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_904,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_905,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_906,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count2(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__410;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__391;
void* __right_value675 = (void*)0;
struct sLambdaNode* result_917;
void* __right_value676 = (void*)0;
char* __dec_obj174;
struct sLambdaNode* __result_obj__392;
    if(    self==(void*)0) {
        __result_obj__391 = (void*)0;
        return __result_obj__391;
    }
    result_917=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_917->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj174=result_917->sname;
        result_917->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_917->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_917->mFun=self->mFun;
    }
    __result_obj__392 = result_917;
    come_call_finalizer3(result_917,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__392;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_941;
unsigned int it_942;
_Bool same_key_exist_943;
char* it2_944;
struct map$2char$phsGenericsFun$ph* __result_obj__404;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph$p_rehash(self);
    }
    hash_941=string_get_hash_key(((char*)key))%self->size;
    it_942=hash_941;
    while((_Bool)1) {
        if(        self->item_existance[it_942]) {
            if(            string_equals(self->keys[it_942],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_942]);
                    (self->keys[it_942] = come_decrement_ref_count2(self->keys[it_942], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_942]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_942]);
                    self->keys[it_942]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_942],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_942]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_942]=item;
                }
                break;
            }
            it_942++;
            if(            it_942>=self->size) {
                it_942=0;
            }
            else if(            it_942==hash_941) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_942]=(_Bool)1;
            if(            1) {
                self->keys[it_942]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_942]=key;
            }
            if(            1) {
                self->items[it_942]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_942]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_943=(_Bool)0;
    for(    it2_944=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_944=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_944,key)) {
            same_key_exist_943=(_Bool)1;
        }
    }
    if(    !same_key_exist_943) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__404 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__404;
}

static void map$2char$phsGenericsFun$ph$p_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_924;
void* __right_value688 = (void*)0;
char** keys_925;
void* __right_value689 = (void*)0;
struct sGenericsFun** items_926;
void* __right_value690 = (void*)0;
_Bool* item_existance_927;
int len_928;
char* it_931;
struct sGenericsFun* default_value_934;
void* __right_value691 = (void*)0;
struct sGenericsFun* it2_935;
unsigned int hash_938;
int n_939;
struct sGenericsFun* default_value_940;
void* __right_value692 = (void*)0;
default_value_934 = (void*)0;
default_value_940 = (void*)0;
    size_924=self->size*10;
    keys_925=(char**)come_increment_ref_count(((char**)(__right_value688=(char**)come_calloc(1, sizeof(char*)*(1*(size_924)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_926=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value689=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_924)), "/usr/local/include/comelang.h", 2935, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_927=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value690=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_924)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_928=0;
    for(    it_931=map$2char$phsGenericsFun$ph$p_begin(self);    !map$2char$phsGenericsFun$ph$p_end(self);    it_931=map$2char$phsGenericsFun$ph$p_next(self)    ){
        memset(&default_value_934,0,sizeof(struct sGenericsFun*));
        it2_935=((struct sGenericsFun*)(__right_value691=map$2char$phsGenericsFun$ph$p_at(self,it_931,(struct sGenericsFun*)come_increment_ref_count(default_value_934))));
        come_call_finalizer3(__right_value691,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_938=string_get_hash_key(((char*)it_931))%size_924;
        n_939=hash_938;
        while((_Bool)1) {
            if(            item_existance_927[n_939]) {
                n_939++;
                if(                n_939>=size_924) {
                    n_939=0;
                }
                else if(                n_939==hash_938) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_927[n_939]=(_Bool)1;
                keys_925[n_939]=it_931;
                items_926[n_939]=((struct sGenericsFun*)(__right_value692=map$2char$phsGenericsFun$ph$p_at(self,it_931,(struct sGenericsFun*)come_increment_ref_count(default_value_940))));
                come_call_finalizer3(__right_value692,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_928++;
                come_call_finalizer3(default_value_940,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_940,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_934,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_925;
    self->items=items_926;
    self->item_existance=item_existance_927;
    self->size=size_924;
    self->len=len_928;
}

static char* map$2char$phsGenericsFun$ph$p_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_929;
char* __result_obj__394;
char* __result_obj__395;
char* result_930;
char* __result_obj__396;
result_929 = (void*)0;
result_930 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_929,0,sizeof(char*));
        __result_obj__394 = result_929;
        return __result_obj__394;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__395 = self->key_list->it->item;
        return __result_obj__395;
    }
    memset(&result_930,0,sizeof(char*));
    __result_obj__396 = result_930;
    return __result_obj__396;
}

static _Bool map$2char$phsGenericsFun$ph$p_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph$p_next(struct map$2char$phsGenericsFun$ph* self){
char* result_932;
char* __result_obj__397;
char* __result_obj__398;
char* result_933;
char* __result_obj__399;
result_932 = (void*)0;
result_933 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_932,0,sizeof(char*));
        __result_obj__397 = result_932;
        return __result_obj__397;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__398 = self->key_list->it->item;
        return __result_obj__398;
    }
    memset(&result_933,0,sizeof(char*));
    __result_obj__399 = result_933;
    return __result_obj__399;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_936;
unsigned int it_937;
struct sGenericsFun* __result_obj__400;
struct sGenericsFun* __result_obj__401;
struct sGenericsFun* __result_obj__402;
struct sGenericsFun* __result_obj__403;
    hash_936=string_get_hash_key(((char*)key))%self->size;
    it_937=hash_936;
    while((_Bool)1) {
        if(        self->item_existance[it_937]) {
            if(            string_equals(self->keys[it_937],key)) {
                __result_obj__400 = come_increment_ref_count(self->items[it_937]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__400,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__400;
            }
            it_937++;
            if(            it_937>=self->size) {
                it_937=0;
            }
            else if(            it_937==hash_936) {
                __result_obj__401 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__401,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__401;
            }
        }
        else {
            __result_obj__402 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__402,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__402;
        }
    }
    __result_obj__403 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__403,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__403;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_973;
char* __dec_obj178;
char* last_code2_974;
char* __dec_obj179;
_Bool comma_instead_of_semicolon_975;
struct sClass* current_stack_frame_struct_976;
char* real_fun_name_977;
struct sFun* finalizer_978;
void* __right_value750 = (void*)0;
struct sType* type_before_979;
void* __right_value751 = (void*)0;
struct sType* type2_980;
void* __right_value752 = (void*)0;
char* fun_name2_981;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
char* none_generics_name_982;
void* __right_value755 = (void*)0;
char* generics_fun_name_983;
void* __right_value756 = (void*)0;
struct sGenericsFun* generics_fun_984;
void* __right_value757 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var34 = (void*)0;
char* name_988=0;
_Bool err_989=0;
void* __right_value758 = (void*)0;
char* __dec_obj180;
int i_990;
void* __right_value759 = (void*)0;
char* new_fun_name_991;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
char* __dec_obj181;
void* __right_value762 = (void*)0;
char* __dec_obj182;
void* __right_value763 = (void*)0;
char* __dec_obj183;
void* __right_value764 = (void*)0;
char* user_real_fun_name_992;
void* __right_value765 = (void*)0;
struct sFun* user_finalizer_993;
void* __right_value766 = (void*)0;
struct sType* type2_994;
struct sClass* klass_995;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* source_996;
void* __right_value769 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1003;
struct tuple2$2char$phsType$ph* it_1006;
struct tuple2$2char$phsType$ph* multiple_assign_var35 = (void*)0;
char* name_1009=0;
struct sType* field_type_1010=0;
char* p_1013;
int sline_1014;
char* sname_1015;
char* head_1016;
struct buffer* source3_1017;
struct buffer* __dec_obj184;
void* __right_value770 = (void*)0;
char* __dec_obj185;
void* __right_value771 = (void*)0;
struct sBlock* block_1018;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* result_type_1019;
void* __right_value775 = (void*)0;
char* name_1020;
void* __right_value776 = (void*)0;
struct sType* self_type_1021;
struct sType* __list_values1___1023[1];
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct list$1sType$ph* param_types_1022;
void* __right_value780 = (void*)0;
char* __list_values2___1027[1];
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1char$ph* param_names_1031;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1char$ph* param_default_parametors_1032;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sFun* fun2_1033;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sFun* fun_1034;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value795 = (void*)0;
struct sNode* node_1035;
_Bool Value_1036;
struct buffer* __dec_obj186;
char* __dec_obj187;
char* __dec_obj188;
char* __dec_obj189;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__436;
memset(&i_990, 0, sizeof(int));
    last_code_973=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj178=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_974=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj179=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_975=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_976=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_977=((void*)0);
    finalizer_978=((void*)0);
    type_before_979=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_980=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_980->mHeap=(_Bool)0;
    fun_name2_981=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_978=((struct sFun*)(__right_value753=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_981)));
        come_call_finalizer3(__right_value753,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        finalizer_978==((void*)0)) {
            none_generics_name_982=(char*)come_increment_ref_count(get_none_generics_name(type2_980->mClass->mName));
            generics_fun_name_983=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_982,fun_name));
            generics_fun_984=((struct sGenericsFun*)(__right_value756=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_983)));
            come_call_finalizer3(__right_value756,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            generics_fun_984) {
                multiple_assign_var34=((struct tuple2$2char$phbool$*)(__right_value757=create_generics_fun((char*)come_increment_ref_count(fun_name2_981),generics_fun_984,type,info)));
                name_988=(char*)come_increment_ref_count(multiple_assign_var34->v1);
                err_989=multiple_assign_var34->v2;
                come_call_finalizer3(__right_value757,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_989) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_978=((struct sFun*)(__right_value758=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_988)));
                come_call_finalizer3(__right_value758,sFun_finalize, 0, 1, 0, 0, (void*)0);
                (name_988 = come_decrement_ref_count2(name_988, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_982 = come_decrement_ref_count2(none_generics_name_982, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_983 = come_decrement_ref_count2(generics_fun_name_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj180=real_fun_name_977;
        real_fun_name_977=(char*)come_increment_ref_count(fun_name2_981);
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_990=128-1;        i_990>=1;        i_990--        ){
            new_fun_name_991=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_981,i_990));
            finalizer_978=((struct sFun*)(__right_value760=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_991)));
            come_call_finalizer3(__right_value760,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_978) {
                __dec_obj181=fun_name2_981;
                fun_name2_981=(char*)come_increment_ref_count(__builtin_string(new_fun_name_991));
                __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_991 = come_decrement_ref_count2(new_fun_name_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_991 = come_decrement_ref_count2(new_fun_name_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_978==((void*)0)) {
            finalizer_978=((struct sFun*)(__right_value762=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_981)));
            come_call_finalizer3(__right_value762,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj182=real_fun_name_977;
        real_fun_name_977=(char*)come_increment_ref_count(fun_name2_981);
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_978==((void*)0)) {
        type=type_before_979;
        __dec_obj183=real_fun_name_977;
        real_fun_name_977=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_992=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_993=((struct sFun*)(__right_value765=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_992)));
        come_call_finalizer3(__right_value765,sFun_finalize, 0, 1, 0, 0, (void*)0);
        type2_994=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_994;
        klass_995=type->mClass;
        if(        type->mPointerNum>0&&klass_995->mStruct||type->mAllocaValue) {
            source_996=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2607, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_char(source_996,123);
            if(            user_finalizer_993) {
                char source2_997[1024];
                memset(&source2_997, 0, sizeof(char)                *(1024)                );
                snprintf(source2_997,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_992);
                buffer_append_str(source_996,source2_997);
            }
            klass_995=((struct sClass*)(__right_value769=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_995->mName)));
            come_call_finalizer3(__right_value769,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1003=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_995->mFields)),it_1006=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1003));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1003));            it_1006=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1003))            ){
                multiple_assign_var35=it_1006;
                name_1009=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                field_type_1010=(struct sType*)come_increment_ref_count(multiple_assign_var35->v2);
                if(                field_type_1010->mHeap) {
                    char source2_1011[1024];
                    memset(&source2_1011, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1011,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1009,name_1009,name_1009,name_1009);
                    buffer_append_str(source_996,source2_1011);
                }
                else if(                field_type_1010->mChannel) {
                    char source2_1012[1024];
                    memset(&source2_1012, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1012,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1009,name_1009);
                    buffer_append_str(source_996,source2_1012);
                    snprintf(source2_1012,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1009,name_1009);
                    buffer_append_str(source_996,source2_1012);
                }
                (name_1009 = come_decrement_ref_count2(name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1010,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1003,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_996,125);
            p_1013=info->p;
            sline_1014=info->sline;
            sname_1015=(char*)come_increment_ref_count(info->sname);
            head_1016=info->head;
            source3_1017=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj184=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_996);
            come_call_finalizer3(__dec_obj184,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_996->buf;
            info->head=source_996->buf;
            __dec_obj185=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_977));
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1018=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1019=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2656, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_1020=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_977));
            self_type_1021=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1021->mHeap=(_Bool)0;
            if(            self_type_1021->mPointerNum==0) {
                self_type_1021->mPointerNum=1;
            }
            if(            self_type_1021->mPointerNum>1) {
                self_type_1021->mPointerNum=1;
            }
            param_types_1022=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___1023[0]=self_type_1021,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2666, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values1___1023)));
            param_names_1031=(struct list$1char$ph*)come_increment_ref_count((__list_values2___1027[0]=((char*)(__right_value780=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2667, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values2___1027)));
            (__right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1032=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2668, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1032,((void*)0));
            result_type_1019->mStatic=(_Bool)0;
            result_type_1019->mUniq=(_Bool)0;
            result_type_1019->mInline=(_Bool)0;
            result_type_1019->mGenerate=(_Bool)0;
            fun2_1033=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value786=__builtin_string(name_1020)))));
            (__right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1033==((void*)0)||fun2_1033->mExternal) {
                fun_1034=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2678, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1020),(struct sType*)come_increment_ref_count(result_type_1019),(struct list$1sType$ph*)come_increment_ref_count(param_types_1022),(struct list$1char$ph*)come_increment_ref_count(param_names_1031),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1032),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1018),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1020)),(struct sFun*)come_increment_ref_count(fun_1034));
                finalizer_978=fun_1034;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2688, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value794=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2688, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1034),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1035=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value794,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                Value_1036=node_compile(node_1035,info);
                if(                !Value_1036) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1034,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1035) ? node_1035 = come_decrement_ref_count2(node_1035, ((struct sNode*)node_1035)->finalize, ((struct sNode*)node_1035)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_978=fun2_1033;
            }
            __dec_obj186=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1017);
            come_call_finalizer3(__dec_obj186,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1013;
            info->head=head_1016;
            info->sline=sline_1014;
            __dec_obj187=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1015);
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_996,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1015 = come_decrement_ref_count2(sname_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1017,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1018,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1019,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1020 = come_decrement_ref_count2(name_1020, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1021,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1022,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1031,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1032,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1033,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_992 = come_decrement_ref_count2(user_real_fun_name_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_994,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_976;
    __dec_obj188=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_973);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_974);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_975;
    __result_obj__436 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value801=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2713, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_978,(char*)come_increment_ref_count(real_fun_name_977)))));
    (last_code_973 = come_decrement_ref_count2(last_code_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_974 = come_decrement_ref_count2(last_code2_974, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_977 = come_decrement_ref_count2(real_fun_name_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_979,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_980,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_981 = come_decrement_ref_count2(fun_name2_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value801,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__436,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__436;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_985;
unsigned int hash_986;
unsigned int it_987;
struct sGenericsFun* __result_obj__411;
struct sGenericsFun* __result_obj__412;
struct sGenericsFun* __result_obj__413;
struct sGenericsFun* __result_obj__414;
default_value_985 = (void*)0;
    memset(&default_value_985,0,sizeof(struct sGenericsFun*));
    hash_986=string_get_hash_key(((char*)key))%self->size;
    it_987=hash_986;
    while((_Bool)1) {
        if(        self->item_existance[it_987]) {
            if(            string_equals(self->keys[it_987],key)) {
                __result_obj__411 = come_increment_ref_count(self->items[it_987]);
                come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__411,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__411;
            }
            it_987++;
            if(            it_987>=self->size) {
                it_987=0;
            }
            else if(            it_987==hash_986) {
                __result_obj__412 = come_increment_ref_count(default_value_985);
                come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__412,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__412;
            }
        }
        else {
            __result_obj__413 = come_increment_ref_count(default_value_985);
            come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__413,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__413;
        }
    }
    __result_obj__414 = come_increment_ref_count(default_value_985);
    come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__414,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__414;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_998;
unsigned int hash_999;
unsigned int it_1000;
struct sClass* __result_obj__415;
struct sClass* __result_obj__416;
struct sClass* __result_obj__417;
struct sClass* __result_obj__418;
default_value_998 = (void*)0;
    memset(&default_value_998,0,sizeof(struct sClass*));
    hash_999=string_get_hash_key(((char*)key))%self->size;
    it_1000=hash_999;
    while((_Bool)1) {
        if(        self->item_existance[it_1000]) {
            if(            string_equals(self->keys[it_1000],key)) {
                __result_obj__415 = come_increment_ref_count(self->items[it_1000]);
                come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__415,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__415;
            }
            it_1000++;
            if(            it_1000>=self->size) {
                it_1000=0;
            }
            else if(            it_1000==hash_999) {
                __result_obj__416 = come_increment_ref_count(default_value_998);
                come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__416,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__416;
            }
        }
        else {
            __result_obj__417 = come_increment_ref_count(default_value_998);
            come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__417,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__417;
        }
    }
    __result_obj__418 = come_increment_ref_count(default_value_998);
    come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__418,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__418;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_1001;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_1002;
    it_1001=self->head;
    while(it_1001!=((void*)0)) {
        prev_it_1002=it_1001;
        it_1001=it_1001->next;
        come_call_finalizer3(prev_it_1002,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1004;
struct tuple2$2char$phsType$ph* __result_obj__419;
struct tuple2$2char$phsType$ph* __result_obj__420;
struct tuple2$2char$phsType$ph* result_1005;
struct tuple2$2char$phsType$ph* __result_obj__421;
result_1004 = (void*)0;
result_1005 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1004,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__419 = result_1004;
        return __result_obj__419;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__420 = self->it->item;
        return __result_obj__420;
    }
    memset(&result_1005,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__421 = result_1005;
    return __result_obj__421;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1007;
struct tuple2$2char$phsType$ph* __result_obj__422;
struct tuple2$2char$phsType$ph* __result_obj__423;
struct tuple2$2char$phsType$ph* result_1008;
struct tuple2$2char$phsType$ph* __result_obj__424;
result_1007 = (void*)0;
result_1008 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_1007,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__422 = result_1007;
        return __result_obj__422;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__423 = self->it->item;
        return __result_obj__423;
    }
    memset(&result_1008,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__424 = result_1008;
    return __result_obj__424;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_1024;
struct list$1sType$ph* __result_obj__425;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_1024=0;    i_1024<num_value;    i_1024++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_1024]));
    }
    __result_obj__425 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__425,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__425;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__426;
void* __right_value777 = (void*)0;
struct list$1sType$ph* result_1025;
struct list$1sType$ph* __result_obj__427;
    if(    self==(void*)0) {
        __result_obj__426 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__426,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__426;
    }
    result_1025=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1025->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_1025->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_1025->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_1025->it=self->it;
    }
    __result_obj__427 = come_increment_ref_count(result_1025);
    come_call_finalizer3(result_1025,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__427,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__427;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_1026;
    result_1026=0;
    result_1026+=int_get_hash_key(((int)self->head));
    result_1026+=int_get_hash_key(((int)self->tail));
    result_1026+=int_get_hash_key(((int)self->len));
    result_1026+=int_get_hash_key(((int)self->it));
    return result_1026;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    if(    !list_item$1sType$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right){
    if(    !sType_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_1028;
struct list$1char$ph* __result_obj__428;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_1028=0;    i_1028<num_value;    i_1028++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_1028]));
    }
    __result_obj__428 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__428,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__428;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__429;
void* __right_value781 = (void*)0;
struct list$1char$ph* result_1029;
struct list$1char$ph* __result_obj__430;
    if(    self==(void*)0) {
        __result_obj__429 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__429,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__429;
    }
    result_1029=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1029->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_1029->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_1029->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_1029->it=self->it;
    }
    __result_obj__430 = come_increment_ref_count(result_1029);
    come_call_finalizer3(result_1029,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__430,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__430;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_1030;
    result_1030=0;
    result_1030+=int_get_hash_key(((int)self->head));
    result_1030+=int_get_hash_key(((int)self->tail));
    result_1030+=int_get_hash_key(((int)self->len));
    result_1030+=int_get_hash_key(((int)self->it));
    return result_1030;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    if(    !list_item$1char$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right){
    if(    !string_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__431;
void* __right_value796 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1037;
void* __right_value797 = (void*)0;
char* __dec_obj190;
struct tuple2$2sFun$pchar$ph* __result_obj__432;
    if(    self==(void*)0) {
        __result_obj__431 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__431,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__431;
    }
    result_1037=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1037->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj190=result_1037->v2;
        result_1037->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__432 = come_increment_ref_count(result_1037);
    come_call_finalizer3(result_1037,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__432,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__432;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1038;
    result_1038=0;
    result_1038+=int_get_hash_key(((int)self->v1));
    result_1038+=int_get_hash_key(((int)self->v2));
    return result_1038;
}

static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNode$ph$p_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2char$phsVar$ph$p_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right){
int n_1039;
_Bool result_1040;
char* it_1041;
char* default_value_1042;
char* it2_1043;
struct sVar* default_value2_1046;
void* __right_value798 = (void*)0;
struct sVar* item_1047;
void* __right_value799 = (void*)0;
struct sVar* item2_1048;
default_value_1042 = (void*)0;
default_value2_1046 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_1039=0;
    result_1040=(_Bool)1;
    for(    it_1041=list$1char$p$p_begin(left->key_list);    !list$1char$p$p_end(left->key_list);    it_1041=list$1char$p$p_next(left->key_list)    ){
        memset(&default_value_1042,0,sizeof(char*));
        it2_1043=list$1char$p$p_item(right->key_list,n_1039,default_value_1042);
        if(        string_equals(it_1041,it2_1043)) {
            memset(&default_value2_1046,0,sizeof(struct sVar*));
            item_1047=((struct sVar*)(__right_value798=map$2char$phsVar$ph$p_at(left,it_1041,(struct sVar*)come_increment_ref_count(default_value2_1046))));
            come_call_finalizer3(__right_value798,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_1048=((struct sVar*)(__right_value799=map$2char$phsVar$ph$p_at(right,it2_1043,(struct sVar*)come_increment_ref_count(default_value2_1046))));
            come_call_finalizer3(__right_value799,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_1047,item2_1048)) {
                result_1040=(_Bool)0;
            }
            come_call_finalizer3(default_value2_1046,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_1040=(_Bool)0;
        }
        n_1039++;
        (default_value_1042 = come_decrement_ref_count2(default_value_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_1040;
}

static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value){
struct list_item$1char$p* it_1044;
int i_1045;
char* __result_obj__433;
char* __result_obj__434;
    if(    position<0) {
        position+=self->len;
    }
    it_1044=self->head;
    i_1045=0;
    while(it_1044!=((void*)0)) {
        if(        position==i_1045) {
            __result_obj__433 = it_1044->item;
            return __result_obj__433;
        }
        it_1044=it_1044->next;
        i_1045++;
    }
    __result_obj__434 = default_value;
    return __result_obj__434;
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

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj191;
struct tuple2$2sFun$pchar$ph* __result_obj__435;
    self->v1=v1;
    __dec_obj191=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__435 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__435,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__435;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1049;
char* __dec_obj192;
char* last_code2_1050;
char* __dec_obj193;
_Bool comma_instead_of_semicolon_1051;
struct sClass* current_stack_frame_struct_1052;
struct sFun* equaler_1053;
void* __right_value802 = (void*)0;
char* real_fun_name_1054;
void* __right_value803 = (void*)0;
struct sType* type2_1055;
struct sClass* klass_1056;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct buffer* source_1057;
char* name_1058;
void* __right_value806 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1060;
struct tuple2$2char$phsType$ph* it_1061;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1062=0;
struct sType* field_type_1063=0;
char* p_1065;
int sline_1066;
char* sname_1067;
char* head_1068;
struct buffer* source3_1069;
struct buffer* __dec_obj194;
void* __right_value807 = (void*)0;
char* __dec_obj195;
void* __right_value808 = (void*)0;
struct sBlock* block_1070;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sType* result_type_1071;
void* __right_value812 = (void*)0;
char* name_1072;
void* __right_value813 = (void*)0;
struct sType* left_type_1073;
void* __right_value814 = (void*)0;
struct sType* right_type_1074;
struct sType* __list_values3___1076[2];
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct list$1sType$ph* param_types_1075;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
char* __list_values4___1077[2];
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct list$1char$ph* param_names_1078;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1char$ph* param_default_parametors_1079;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sFun* fun2_1080;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sFun* fun_1081;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value832 = (void*)0;
struct sNode* node_1082;
_Bool Value_1083;
void* __right_value833 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c23_1084=0;
char* Err_1085=0;
struct buffer* __dec_obj196;
char* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__437;
    last_code_1049=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj192=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1050=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj193=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1051=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1052=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1053=((void*)0);
    real_fun_name_1054=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1055=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1055;
    klass_1056=type->mClass;
    if(    type->mPointerNum>0&&!klass_1056->mNumber) {
        source_1057=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2739, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1057,123);
        if(        klass_1056->mProtocol) {
            name_1058="_protocol_obj";
            char source2_1059[1024];
            memset(&source2_1059, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1059,1024,"return left.%s.equals(right.%s);\n",name_1058,name_1058);
            buffer_append_str(source_1057,source2_1059);
        }
        else {
            klass_1056=((struct sClass*)(__right_value806=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1056->mName)));
            come_call_finalizer3(__right_value806,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1060=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1056->mFields)),it_1061=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1060));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1060));            it_1061=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1060))            ){
                multiple_assign_var36=it_1061;
                name_1062=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1063=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                char source2_1064[1024];
                memset(&source2_1064, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1064,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1062,name_1062,name_1062);
                buffer_append_str(source_1057,source2_1064);
                (name_1062 = come_decrement_ref_count2(name_1062, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1063,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1060,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1057,"return true;");
        buffer_append_char(source_1057,125);
        p_1065=info->p;
        sline_1066=info->sline;
        sname_1067=(char*)come_increment_ref_count(info->sname);
        head_1068=info->head;
        source3_1069=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj194=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1057);
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1057->buf;
        info->head=source_1057->buf;
        __dec_obj195=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1054));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1070=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1071=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2779, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1072=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1054));
        left_type_1073=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1073->mHeap=(_Bool)0;
        right_type_1074=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1074->mHeap=(_Bool)0;
        param_types_1075=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___1076[0]=left_type_1073,
__list_values3___1076[1]=right_type_1074,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2785, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values3___1076)));
        param_names_1078=(struct list$1char$ph*)come_increment_ref_count((__list_values4___1077[0]=((char*)(__right_value817=__builtin_string("left"))),
__list_values4___1077[1]=((char*)(__right_value818=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2786, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values4___1077)));
        (__right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value818 = come_decrement_ref_count2(__right_value818, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1079=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2787, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1079,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1079,((void*)0));
        result_type_1071->mStatic=(_Bool)0;
        result_type_1071->mUniq=(_Bool)0;
        result_type_1071->mInline=(_Bool)0;
        result_type_1071->mGenerate=(_Bool)0;
        fun2_1080=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value823=__builtin_string(name_1072)))));
        (__right_value823 = come_decrement_ref_count2(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1080==((void*)0)||fun2_1080->mExternal) {
            fun_1081=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2798, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1072),(struct sType*)come_increment_ref_count(result_type_1071),(struct list$1sType$ph*)come_increment_ref_count(param_types_1075),(struct list$1char$ph*)come_increment_ref_count(param_names_1078),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1079),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1070),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1072)),(struct sFun*)come_increment_ref_count(fun_1081));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2806, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value831=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2806, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1081),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1082=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value831,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1083=node_compile(node_1082,info);
            if(            !Value_1083) {
                multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value833=err_msg(info,"compiling error")));
                come_exception_var_c23_1084=multiple_assign_var37->v1;
                Err_1085=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                ((Err_1085)?(puts(Err_1085),exit(0)):(0));
                come_call_finalizer3(__right_value833,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1085 = come_decrement_ref_count2(Err_1085, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1053=fun_1081;
            come_call_finalizer3(fun_1081,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1082) ? node_1082 = come_decrement_ref_count2(node_1082, ((struct sNode*)node_1082)->finalize, ((struct sNode*)node_1082)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1053=fun2_1080;
        }
        __dec_obj196=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1069);
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1065;
        info->head=head_1068;
        info->sline=sline_1066;
        __dec_obj197=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1067);
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1067 = come_decrement_ref_count2(sname_1067, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1069,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1070,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1071,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1072 = come_decrement_ref_count2(name_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1073,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1074,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1075,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1078,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1079,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1080,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1052;
    __dec_obj198=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1049);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1050);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1051;
    __result_obj__437 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value835=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2832, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1053,(char*)come_increment_ref_count(real_fun_name_1054)))));
    (last_code_1049 = come_decrement_ref_count2(last_code_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1050 = come_decrement_ref_count2(last_code2_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1054 = come_decrement_ref_count2(real_fun_name_1054, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1055,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value835,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__437,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__437;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1086;
char* __dec_obj200;
char* last_code2_1087;
char* __dec_obj201;
_Bool comma_instead_of_semicolon_1088;
struct sClass* current_stack_frame_struct_1089;
struct sFun* equaler_1090;
void* __right_value836 = (void*)0;
char* real_fun_name_1091;
void* __right_value837 = (void*)0;
struct sType* type2_1092;
struct sClass* klass_1093;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct buffer* source_1094;
char* name_1095;
int i_1098;
void* __right_value840 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1099;
struct tuple2$2char$phsType$ph* it_1100;
struct tuple2$2char$phsType$ph* multiple_assign_var38 = (void*)0;
char* name_1101=0;
struct sType* field_type_1102=0;
char* p_1106;
int sline_1107;
char* sname_1108;
char* head_1109;
struct buffer* source3_1110;
struct buffer* __dec_obj202;
void* __right_value841 = (void*)0;
char* __dec_obj203;
void* __right_value842 = (void*)0;
struct sBlock* block_1111;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sType* result_type_1112;
void* __right_value846 = (void*)0;
char* name_1113;
void* __right_value847 = (void*)0;
struct sType* left_type_1114;
void* __right_value848 = (void*)0;
struct sType* right_type_1115;
struct sType* __list_values5___1117[2];
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct list$1sType$ph* param_types_1116;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
char* __list_values6___1118[2];
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1char$ph* param_names_1119;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1char$ph* param_default_parametors_1120;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sFun* fun2_1121;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sFun* fun_1122;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value866 = (void*)0;
struct sNode* node_1123;
_Bool Value_1124;
void* __right_value867 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var39 = (void*)0;
int come_exception_var_c24_1125=0;
char* Err_1126=0;
struct buffer* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__438;
    last_code_1086=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1087=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1088=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1089=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1090=((void*)0);
    real_fun_name_1091=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1092=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1092;
    klass_1093=type->mClass;
    if(    type->mPointerNum>0&&!klass_1093->mNumber) {
        source_1094=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2857, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1094,123);
        if(        klass_1093->mProtocol) {
            name_1095="_protocol_obj";
            char source2_1096[1024];
            memset(&source2_1096, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1096,1024,"return left.%s !== right.%s;\n",name_1095,name_1095);
            buffer_append_str(source_1094,source2_1096);
        }
        else {
            char source2_1097[1024];
            memset(&source2_1097, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1097,1024,"return !(");
            buffer_append_str(source_1094,source2_1097);
            snprintf(source2_1097,1024,"( ");
            buffer_append_str(source_1094,source2_1097);
            i_1098=0;
            klass_1093=((struct sClass*)(__right_value840=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1093->mName)));
            come_call_finalizer3(__right_value840,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1099=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1093->mFields)),it_1100=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1099));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1099));            it_1100=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1099))            ){
                multiple_assign_var38=it_1100;
                name_1101=(char*)come_increment_ref_count(multiple_assign_var38->v1);
                field_type_1102=(struct sType*)come_increment_ref_count(multiple_assign_var38->v2);
                char source2_1103[1024];
                memset(&source2_1103, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1103,1024,"(left.%s === right.%s)",name_1101,name_1101,name_1101);
                buffer_append_str(source_1094,source2_1103);
                if(                i_1098==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1093->mFields)-1) {
                    char source2_1104[1024];
                    memset(&source2_1104, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1104,1024,"));");
                    buffer_append_str(source_1094,source2_1104);
                }
                else {
                    char source2_1105[1024];
                    memset(&source2_1105, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1105,1024," && ");
                    buffer_append_str(source_1094,source2_1105);
                }
                i_1098++;
                (name_1101 = come_decrement_ref_count2(name_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1102,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1099,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1094,125);
        p_1106=info->p;
        sline_1107=info->sline;
        sname_1108=(char*)come_increment_ref_count(info->sname);
        head_1109=info->head;
        source3_1110=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj202=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1094);
        come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1094->buf;
        info->head=source_1094->buf;
        __dec_obj203=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1091));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1111=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1112=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2917, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1113=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1091));
        left_type_1114=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1114->mHeap=(_Bool)0;
        right_type_1115=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1115->mHeap=(_Bool)0;
        param_types_1116=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___1117[0]=left_type_1114,
__list_values5___1117[1]=right_type_1115,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2923, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values5___1117)));
        param_names_1119=(struct list$1char$ph*)come_increment_ref_count((__list_values6___1118[0]=((char*)(__right_value851=__builtin_string("left"))),
__list_values6___1118[1]=((char*)(__right_value852=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2924, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values6___1118)));
        (__right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value852 = come_decrement_ref_count2(__right_value852, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1120=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2925, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1120,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1120,((void*)0));
        result_type_1112->mStatic=(_Bool)0;
        result_type_1112->mUniq=(_Bool)0;
        result_type_1112->mInline=(_Bool)0;
        result_type_1112->mGenerate=(_Bool)0;
        fun2_1121=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value857=__builtin_string(name_1113)))));
        (__right_value857 = come_decrement_ref_count2(__right_value857, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1121==((void*)0)||fun2_1121->mExternal) {
            fun_1122=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2936, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1113),(struct sType*)come_increment_ref_count(result_type_1112),(struct list$1sType$ph*)come_increment_ref_count(param_types_1116),(struct list$1char$ph*)come_increment_ref_count(param_names_1119),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1120),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1111),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1113)),(struct sFun*)come_increment_ref_count(fun_1122));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2944, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value865=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2944, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1122),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1123=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value865,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1124=node_compile(node_1123,info);
            if(            !Value_1124) {
                multiple_assign_var39=((struct tuple2$2int$char$ph*)(__right_value867=err_msg(info,"compiling error")));
                come_exception_var_c24_1125=multiple_assign_var39->v1;
                Err_1126=(char*)come_increment_ref_count(multiple_assign_var39->v2);
                ((Err_1126)?(puts(Err_1126),exit(0)):(0));
                come_call_finalizer3(__right_value867,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1126 = come_decrement_ref_count2(Err_1126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1090=fun_1122;
            come_call_finalizer3(fun_1122,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1123) ? node_1123 = come_decrement_ref_count2(node_1123, ((struct sNode*)node_1123)->finalize, ((struct sNode*)node_1123)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1090=fun2_1121;
        }
        __dec_obj204=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1110);
        come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1106;
        info->head=head_1109;
        info->sline=sline_1107;
        __dec_obj205=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1108);
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1094,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1108 = come_decrement_ref_count2(sname_1108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1110,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1111,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1112,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1113 = come_decrement_ref_count2(name_1113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1114,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1115,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1116,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1119,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1120,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1121,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1089;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1086);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1087);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1088;
    __result_obj__438 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value869=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2970, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1090,(char*)come_increment_ref_count(real_fun_name_1091)))));
    (last_code_1086 = come_decrement_ref_count2(last_code_1086, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1087 = come_decrement_ref_count2(last_code2_1087, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1091 = come_decrement_ref_count2(real_fun_name_1091, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1092,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value869,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__438,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__438;
}

static int list$1tuple2$2char$phsType$ph$ph$p_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1127;
char* __dec_obj208;
char* last_code2_1128;
char* __dec_obj209;
_Bool comma_instead_of_semicolon_1129;
struct sClass* current_stack_frame_struct_1130;
struct sFun* equaler_1131;
void* __right_value870 = (void*)0;
char* real_fun_name_1132;
void* __right_value871 = (void*)0;
struct sType* type2_1133;
struct sClass* klass_1134;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct buffer* source_1135;
char* name_1136;
int i_1139;
void* __right_value874 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1140;
struct tuple2$2char$phsType$ph* it_1141;
struct tuple2$2char$phsType$ph* multiple_assign_var40 = (void*)0;
char* name_1142=0;
struct sType* field_type_1143=0;
char* p_1147;
int sline_1148;
char* sname_1149;
char* head_1150;
struct buffer* source3_1151;
struct buffer* __dec_obj210;
void* __right_value875 = (void*)0;
char* __dec_obj211;
void* __right_value876 = (void*)0;
struct sBlock* block_1152;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct sType* result_type_1153;
void* __right_value880 = (void*)0;
char* name_1154;
void* __right_value881 = (void*)0;
struct sType* left_type_1155;
void* __right_value882 = (void*)0;
struct sType* right_type_1156;
struct sType* __list_values7___1158[2];
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1sType$ph* param_types_1157;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
char* __list_values8___1159[2];
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct list$1char$ph* param_names_1160;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
struct list$1char$ph* param_default_parametors_1161;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sFun* fun2_1162;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sFun* fun_1163;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value900 = (void*)0;
struct sNode* node_1164;
_Bool Value_1165;
void* __right_value901 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var41 = (void*)0;
int come_exception_var_c25_1166=0;
char* Err_1167=0;
struct buffer* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__439;
    last_code_1127=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj208=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1128=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj209=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1129=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1130=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1131=((void*)0);
    real_fun_name_1132=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1133=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1133;
    klass_1134=type->mClass;
    if(    type->mPointerNum>0&&!klass_1134->mNumber) {
        source_1135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2995, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1135,123);
        if(        klass_1134->mProtocol) {
            name_1136="_protocol_obj";
            char source2_1137[1024];
            memset(&source2_1137, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1137,1024,"return !left.%s.equals(right.%s);\n",name_1136,name_1136);
            buffer_append_str(source_1135,source2_1137);
        }
        else {
            char source2_1138[1024];
            memset(&source2_1138, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1138,1024,"return !(");
            buffer_append_str(source_1135,source2_1138);
            i_1139=0;
            klass_1134=((struct sClass*)(__right_value874=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1134->mName)));
            come_call_finalizer3(__right_value874,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1140=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1134->mFields)),it_1141=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1140));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1140));            it_1141=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1140))            ){
                multiple_assign_var40=it_1141;
                name_1142=(char*)come_increment_ref_count(multiple_assign_var40->v1);
                field_type_1143=(struct sType*)come_increment_ref_count(multiple_assign_var40->v2);
                char source2_1144[1024];
                memset(&source2_1144, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1144,1024,"left.%s.equals(right.%s)",name_1142,name_1142);
                buffer_append_str(source_1135,source2_1144);
                if(                i_1139==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1134->mFields)-1) {
                    char source2_1145[1024];
                    memset(&source2_1145, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1145,1024,");");
                    buffer_append_str(source_1135,source2_1145);
                }
                else {
                    char source2_1146[1024];
                    memset(&source2_1146, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1146,1024," && ");
                    buffer_append_str(source_1135,source2_1146);
                }
                i_1139++;
                (name_1142 = come_decrement_ref_count2(name_1142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1143,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1140,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1135,125);
        p_1147=info->p;
        sline_1148=info->sline;
        sname_1149=(char*)come_increment_ref_count(info->sname);
        head_1150=info->head;
        source3_1151=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj210=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1135);
        come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1135->buf;
        info->head=source_1135->buf;
        __dec_obj211=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1132));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1152=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1153=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3052, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1154=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1132));
        left_type_1155=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1155->mHeap=(_Bool)0;
        right_type_1156=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1156->mHeap=(_Bool)0;
        param_types_1157=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1158[0]=left_type_1155,
__list_values7___1158[1]=right_type_1156,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3058, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values7___1158)));
        param_names_1160=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1159[0]=((char*)(__right_value885=__builtin_string("left"))),
__list_values8___1159[1]=((char*)(__right_value886=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3059, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values8___1159)));
        (__right_value885 = come_decrement_ref_count2(__right_value885, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value886 = come_decrement_ref_count2(__right_value886, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1161=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3060, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1161,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1161,((void*)0));
        result_type_1153->mStatic=(_Bool)0;
        result_type_1153->mUniq=(_Bool)0;
        result_type_1153->mInline=(_Bool)0;
        result_type_1153->mGenerate=(_Bool)0;
        fun2_1162=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value891=__builtin_string(name_1154)))));
        (__right_value891 = come_decrement_ref_count2(__right_value891, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1162==((void*)0)||fun2_1162->mExternal) {
            fun_1163=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3071, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1154),(struct sType*)come_increment_ref_count(result_type_1153),(struct list$1sType$ph*)come_increment_ref_count(param_types_1157),(struct list$1char$ph*)come_increment_ref_count(param_names_1160),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1161),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1152),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1154)),(struct sFun*)come_increment_ref_count(fun_1163));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3079, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value899=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3079, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1163),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1164=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value899,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1165=node_compile(node_1164,info);
            if(            !Value_1165) {
                multiple_assign_var41=((struct tuple2$2int$char$ph*)(__right_value901=err_msg(info,"compiling error")));
                come_exception_var_c25_1166=multiple_assign_var41->v1;
                Err_1167=(char*)come_increment_ref_count(multiple_assign_var41->v2);
                ((Err_1167)?(puts(Err_1167),exit(0)):(0));
                come_call_finalizer3(__right_value901,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1167 = come_decrement_ref_count2(Err_1167, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1131=fun_1163;
            come_call_finalizer3(fun_1163,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1164) ? node_1164 = come_decrement_ref_count2(node_1164, ((struct sNode*)node_1164)->finalize, ((struct sNode*)node_1164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1131=fun2_1162;
        }
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1151);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1147;
        info->head=head_1150;
        info->sline=sline_1148;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1149);
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1135,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1149 = come_decrement_ref_count2(sname_1149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1151,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1152,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1153,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1154 = come_decrement_ref_count2(name_1154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1155,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1157,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1160,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1161,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1162,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1130;
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1127);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1128);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1129;
    __result_obj__439 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value903=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3105, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1131,(char*)come_increment_ref_count(real_fun_name_1132)))));
    (last_code_1127 = come_decrement_ref_count2(last_code_1127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1128 = come_decrement_ref_count2(last_code2_1128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1132 = come_decrement_ref_count2(real_fun_name_1132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value903,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__439,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__439;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1168;
char* __dec_obj216;
char* last_code2_1169;
char* __dec_obj217;
_Bool comma_instead_of_semicolon_1170;
struct sClass* current_stack_frame_struct_1171;
struct sFun* equaler_1172;
void* __right_value904 = (void*)0;
char* real_fun_name_1173;
void* __right_value905 = (void*)0;
struct sType* type2_1174;
struct sClass* klass_1175;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct buffer* source_1176;
char* name_1177;
void* __right_value908 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1180;
struct tuple2$2char$phsType$ph* it_1181;
struct tuple2$2char$phsType$ph* multiple_assign_var42 = (void*)0;
char* name_1182=0;
struct sType* field_type_1183=0;
char* p_1185;
int sline_1186;
char* sname_1187;
char* head_1188;
struct buffer* source3_1189;
struct buffer* __dec_obj218;
void* __right_value909 = (void*)0;
char* __dec_obj219;
void* __right_value910 = (void*)0;
struct sBlock* block_1190;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sType* result_type_1191;
void* __right_value914 = (void*)0;
char* name_1192;
void* __right_value915 = (void*)0;
struct sType* left_type_1193;
void* __right_value916 = (void*)0;
struct sType* right_type_1194;
struct sType* __list_values9___1196[2];
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sType$ph* param_types_1195;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
char* __list_values10___1197[2];
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct list$1char$ph* param_names_1198;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct list$1char$ph* param_default_parametors_1199;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sFun* fun2_1200;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sFun* fun_1201;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value934 = (void*)0;
struct sNode* node_1202;
_Bool Value_1203;
void* __right_value935 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var43 = (void*)0;
int come_exception_var_c26_1204=0;
char* Err_1205=0;
struct buffer* __dec_obj220;
char* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__440;
    last_code_1168=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1169=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1170=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1171=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1172=((void*)0);
    real_fun_name_1173=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1174=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1174;
    klass_1175=type->mClass;
    if(    type->mPointerNum>0&&!klass_1175->mNumber) {
        source_1176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3130, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1176,123);
        if(        klass_1175->mProtocol) {
            name_1177="_protocol_obj";
            char source2_1178[1024];
            memset(&source2_1178, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1178,1024,"return left.%s === right.%s;\n",name_1177,name_1177);
            buffer_append_str(source_1176,source2_1178);
        }
        else {
            char source2_1179[1024];
            memset(&source2_1179, 0, sizeof(char)            *(1024)            );
            klass_1175=((struct sClass*)(__right_value908=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1175->mName)));
            come_call_finalizer3(__right_value908,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1180=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1175->mFields)),it_1181=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1180));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1180));            it_1181=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1180))            ){
                multiple_assign_var42=it_1181;
                name_1182=(char*)come_increment_ref_count(multiple_assign_var42->v1);
                field_type_1183=(struct sType*)come_increment_ref_count(multiple_assign_var42->v2);
                char source2_1184[1024];
                memset(&source2_1184, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1184,1024,"if(left.%s !== right.%s) { return false; }\n",name_1182,name_1182,name_1182);
                buffer_append_str(source_1176,source2_1184);
                (name_1182 = come_decrement_ref_count2(name_1182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1183,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1180,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1176,"return true;\n");
        buffer_append_char(source_1176,125);
        p_1185=info->p;
        sline_1186=info->sline;
        sname_1187=(char*)come_increment_ref_count(info->sname);
        head_1188=info->head;
        source3_1189=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj218=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1176);
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1176->buf;
        info->head=source_1176->buf;
        __dec_obj219=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1173));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1190=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1191=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3172, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1192=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1173));
        left_type_1193=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1193->mHeap=(_Bool)0;
        right_type_1194=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1194->mHeap=(_Bool)0;
        param_types_1195=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1196[0]=left_type_1193,
__list_values9___1196[1]=right_type_1194,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3178, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values9___1196)));
        param_names_1198=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1197[0]=((char*)(__right_value919=__builtin_string("left"))),
__list_values10___1197[1]=((char*)(__right_value920=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3179, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values10___1197)));
        (__right_value919 = come_decrement_ref_count2(__right_value919, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value920 = come_decrement_ref_count2(__right_value920, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1199=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3180, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1199,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1199,((void*)0));
        result_type_1191->mStatic=(_Bool)0;
        result_type_1191->mUniq=(_Bool)0;
        result_type_1191->mInline=(_Bool)0;
        result_type_1191->mGenerate=(_Bool)0;
        fun2_1200=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value925=__builtin_string(name_1192)))));
        (__right_value925 = come_decrement_ref_count2(__right_value925, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1200==((void*)0)||fun2_1200->mExternal) {
            fun_1201=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3191, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1192),(struct sType*)come_increment_ref_count(result_type_1191),(struct list$1sType$ph*)come_increment_ref_count(param_types_1195),(struct list$1char$ph*)come_increment_ref_count(param_names_1198),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1199),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1190),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1192)),(struct sFun*)come_increment_ref_count(fun_1201));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3199, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value933=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3199, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1201),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1202=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value933,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1203=node_compile(node_1202,info);
            if(            !Value_1203) {
                multiple_assign_var43=((struct tuple2$2int$char$ph*)(__right_value935=err_msg(info,"compiling error(X)")));
                come_exception_var_c26_1204=multiple_assign_var43->v1;
                Err_1205=(char*)come_increment_ref_count(multiple_assign_var43->v2);
                ((Err_1205)?(puts(Err_1205),exit(0)):(0));
                come_call_finalizer3(__right_value935,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1205 = come_decrement_ref_count2(Err_1205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1172=fun_1201;
            come_call_finalizer3(fun_1201,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1202) ? node_1202 = come_decrement_ref_count2(node_1202, ((struct sNode*)node_1202)->finalize, ((struct sNode*)node_1202)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1172=fun2_1200;
        }
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1189);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1185;
        info->head=head_1188;
        info->sline=sline_1186;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1187);
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1187 = come_decrement_ref_count2(sname_1187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1190,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1191,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1192 = come_decrement_ref_count2(name_1192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1194,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1195,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1198,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1199,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1200,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1171;
    __dec_obj222=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1168);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj223=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1169);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1170;
    __result_obj__440 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value937=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3225, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1172,(char*)come_increment_ref_count(real_fun_name_1173)))));
    (last_code_1168 = come_decrement_ref_count2(last_code_1168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1169 = come_decrement_ref_count2(last_code2_1169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1173 = come_decrement_ref_count2(real_fun_name_1173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1174,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value937,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__440,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__440;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__441;
char* last_code_1206;
char* __dec_obj224;
char* last_code2_1207;
char* __dec_obj225;
_Bool comma_instead_of_semicolon_1208;
struct sClass* current_stack_frame_struct_1209;
struct sFun* cloner_1210;
void* __right_value940 = (void*)0;
char* real_fun_name_1211;
void* __right_value941 = (void*)0;
struct sType* type2_1212;
struct sClass* klass_1213;
char* fun_name2_1214;
void* __right_value942 = (void*)0;
char* none_generics_name_1215;
void* __right_value943 = (void*)0;
struct sType* obj_type_1216;
void* __right_value944 = (void*)0;
char* __dec_obj226;
void* __right_value945 = (void*)0;
char* fun_name3_1217;
void* __right_value946 = (void*)0;
struct sGenericsFun* generics_fun_1218;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var44 = (void*)0;
char* name_1219=0;
_Bool err_1220=0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__442;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
char* __dec_obj227;
void* __right_value953 = (void*)0;
char* __dec_obj228;
int i_1221;
void* __right_value954 = (void*)0;
char* new_fun_name_1222;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
char* __dec_obj229;
void* __right_value957 = (void*)0;
char* __dec_obj230;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct buffer* source_1223;
void* __right_value960 = (void*)0;
char* name_1224;
void* __right_value961 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1226;
struct tuple2$2char$phsType$ph* it_1227;
struct tuple2$2char$phsType$ph* multiple_assign_var45 = (void*)0;
char* name_1228=0;
struct sType* field_type_1229=0;
void* __right_value962 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1232;
struct tuple2$2char$phsType$ph* it_1233;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1234=0;
struct sType* field_type_1235=0;
void* __right_value963 = (void*)0;
char* user_real_fun_name_1239;
void* __right_value964 = (void*)0;
struct sFun* user_cloner_1240;
char* p_1242;
int sline_1243;
char* sname_1244;
struct buffer* source3_1245;
char* head_1246;
struct buffer* __dec_obj231;
void* __right_value965 = (void*)0;
char* __dec_obj232;
void* __right_value966 = (void*)0;
struct sBlock* block_1247;
void* __right_value967 = (void*)0;
struct sType* result_type_1248;
void* __right_value968 = (void*)0;
char* name_1249;
void* __right_value969 = (void*)0;
struct sType* self_type_1250;
struct sType* __list_values11___1252[1];
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct list$1sType$ph* param_types_1251;
void* __right_value972 = (void*)0;
char* __list_values12___1253[1];
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct list$1char$ph* param_names_1254;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct list$1char$ph* param_default_parametors_1255;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct sFun* fun2_1256;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct sFun* fun_1257;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value986 = (void*)0;
struct sNode* node_1258;
_Bool Value_1259;
void* __right_value987 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var47 = (void*)0;
int come_exception_var_c27_1260=0;
char* Err_1261=0;
char* __dec_obj233;
struct buffer* __dec_obj234;
char* __dec_obj235;
char* __dec_obj236;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__443;
fun_name2_1214 = (void*)0;
memset(&i_1221, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__441 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value939=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3231, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value939,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__441,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__441;
    }
    last_code_1206=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1207=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1208=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1209=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1210=((void*)0);
    real_fun_name_1211=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1212=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1212;
    klass_1213=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1215=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1216=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj226=fun_name2_1214;
        fun_name2_1214=(char*)come_increment_ref_count(create_method_name(obj_type_1216,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1217=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1215,fun_name));
        generics_fun_1218=((struct sGenericsFun*)(__right_value946=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_1217,((void*)0))));
        come_call_finalizer3(__right_value946,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_1218) {
            multiple_assign_var44=((struct tuple2$2char$phbool$*)(__right_value948=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1214)),generics_fun_1218,obj_type_1216,info)));
            name_1219=(char*)come_increment_ref_count(multiple_assign_var44->v1);
            err_1220=multiple_assign_var44->v2;
            come_call_finalizer3(__right_value948,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_1220) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__442 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value950=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3271, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1219 = come_decrement_ref_count2(name_1219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1215 = come_decrement_ref_count2(none_generics_name_1215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1217 = come_decrement_ref_count2(fun_name3_1217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1206 = come_decrement_ref_count2(last_code_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1207 = come_decrement_ref_count2(last_code2_1207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1211 = come_decrement_ref_count2(real_fun_name_1211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1214 = come_decrement_ref_count2(fun_name2_1214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value950,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__442,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__442;
                }
            }
            cloner_1210=((struct sFun*)(__right_value951=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1219)));
            come_call_finalizer3(__right_value951,sFun_finalize, 0, 1, 0, 0, (void*)0);
            (name_1219 = come_decrement_ref_count2(name_1219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1210=((struct sFun*)(__right_value952=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1214)));
            come_call_finalizer3(__right_value952,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj227=real_fun_name_1211;
        real_fun_name_1211=(char*)come_increment_ref_count(fun_name2_1214);
        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1215 = come_decrement_ref_count2(none_generics_name_1215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1216,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1217 = come_decrement_ref_count2(fun_name3_1217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj228=fun_name2_1214;
        fun_name2_1214=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1221=128-1;        i_1221>=1;        i_1221--        ){
            new_fun_name_1222=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1214,i_1221));
            cloner_1210=((struct sFun*)(__right_value955=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1222)));
            come_call_finalizer3(__right_value955,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_1210) {
                __dec_obj229=fun_name2_1214;
                fun_name2_1214=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1222));
                __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1222 = come_decrement_ref_count2(new_fun_name_1222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1222 = come_decrement_ref_count2(new_fun_name_1222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1210==((void*)0)) {
            cloner_1210=((struct sFun*)(__right_value957=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1214)));
            come_call_finalizer3(__right_value957,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj230=real_fun_name_1211;
        real_fun_name_1211=(char*)come_increment_ref_count(fun_name2_1214);
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1210==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1223=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3306, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1223,"{\n");
        buffer_append_str(source_1223,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1223,"var result = new %s;\n",((char*)(__right_value960=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value960 = come_decrement_ref_count2(__right_value960, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1213->mProtocol) {
            name_1224="_protocol_obj";
            char source2_1225[1024];
            memset(&source2_1225, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1225,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1223,source2_1225);
            klass_1213=((struct sClass*)(__right_value961=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1213->mName)));
            come_call_finalizer3(__right_value961,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1226=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1213->mFields)),it_1227=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1226));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1226));            it_1227=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1226))            ){
                multiple_assign_var45=it_1227;
                name_1228=(char*)come_increment_ref_count(multiple_assign_var45->v1);
                field_type_1229=(struct sType*)come_increment_ref_count(multiple_assign_var45->v2);
                if(                string_operator_equals(name_1228,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1229->mArrayNum)>0) {
                    char source2_1230[1024];
                    memset(&source2_1230, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1230,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1228,name_1228,name_1228);
                    buffer_append_str(source_1223,source2_1230);
                }
                else {
                    char source2_1231[1024];
                    memset(&source2_1231, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1231,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1228,name_1228);
                    buffer_append_str(source_1223,source2_1231);
                }
                (name_1228 = come_decrement_ref_count2(name_1228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1229,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1226,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1213=((struct sClass*)(__right_value962=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1213->mName)));
            come_call_finalizer3(__right_value962,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1232=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1213->mFields)),it_1233=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1232));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1232));            it_1233=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1232))            ){
                multiple_assign_var46=it_1233;
                name_1234=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1235=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                field_type_1235->mHeap) {
                    char source2_1236[1024];
                    memset(&source2_1236, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1236,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1234,name_1234,name_1234);
                    buffer_append_str(source_1223,source2_1236);
                }
                else if(                list$1sNode$ph$p_length(field_type_1235->mArrayNum)>0) {
                    char source2_1237[1024];
                    memset(&source2_1237, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1237,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1234,name_1234,name_1234);
                    buffer_append_str(source_1223,source2_1237);
                }
                else {
                    char source2_1238[1024];
                    memset(&source2_1238, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1238,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1234,name_1234);
                    buffer_append_str(source_1223,source2_1238);
                }
                (name_1234 = come_decrement_ref_count2(name_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1235,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1232,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_1239=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1240=((struct sFun*)(__right_value964=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1239)));
        come_call_finalizer3(__right_value964,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        user_cloner_1240) {
            char source2_1241[1024];
            memset(&source2_1241, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1241,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1239);
            buffer_append_str(source_1223,source2_1241);
        }
        buffer_append_format(source_1223,"return result;");
        buffer_append_char(source_1223,125);
        p_1242=info->p;
        sline_1243=info->sline;
        sname_1244=(char*)come_increment_ref_count(info->sname);
        source3_1245=(struct buffer*)come_increment_ref_count(info->source);
        head_1246=info->head;
        __dec_obj231=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1223);
        come_call_finalizer3(__dec_obj231,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj232=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1211));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1247=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1248=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1249=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1211));
        self_type_1250=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1250->mHeap=(_Bool)0;
        param_types_1251=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1252[0]=self_type_1250,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3397, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values11___1252)));
        param_names_1254=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1253[0]=((char*)(__right_value972=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3398, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values12___1253)));
        (__right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1255=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3399, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1255,((void*)0));
        result_type_1248->mStatic=(_Bool)0;
        result_type_1248->mUniq=(_Bool)0;
        result_type_1248->mInline=(_Bool)0;
        result_type_1248->mGenerate=(_Bool)0;
        fun2_1256=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value977=__builtin_string(name_1249)))));
        (__right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1256==((void*)0)||fun2_1256->mExternal) {
            fun_1257=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3410, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1249),(struct sType*)come_increment_ref_count(result_type_1248),(struct list$1sType$ph*)come_increment_ref_count(param_types_1251),(struct list$1char$ph*)come_increment_ref_count(param_names_1254),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1255),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1247),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1249)),(struct sFun*)come_increment_ref_count(fun_1257));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3418, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value985=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3418, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1257),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1258=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value985,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1259=node_compile(node_1258,info);
            if(            !Value_1259) {
                multiple_assign_var47=((struct tuple2$2int$char$ph*)(__right_value987=err_msg(info,"compiling error(Y)")));
                come_exception_var_c27_1260=multiple_assign_var47->v1;
                Err_1261=(char*)come_increment_ref_count(multiple_assign_var47->v2);
                ((Err_1261)?(puts(Err_1261),exit(0)):(0));
                come_call_finalizer3(__right_value987,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1261 = come_decrement_ref_count2(Err_1261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1210=fun_1257;
            come_call_finalizer3(fun_1257,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1258) ? node_1258 = come_decrement_ref_count2(node_1258, ((struct sNode*)node_1258)->finalize, ((struct sNode*)node_1258)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1210=fun2_1256;
        }
        __dec_obj233=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1244);
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1243;
        __dec_obj234=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1245);
        come_call_finalizer3(__dec_obj234,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1242;
        info->head=head_1246;
        info->sline=sline_1243;
        come_call_finalizer3(source_1223,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (user_real_fun_name_1239 = come_decrement_ref_count2(user_real_fun_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1244 = come_decrement_ref_count2(sname_1244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1245,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1247,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1248,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1249 = come_decrement_ref_count2(name_1249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1250,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1251,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1254,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1255,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1256,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1209;
    __dec_obj235=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1206);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj236=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1207);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1208;
    __result_obj__443 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value989=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3446, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1210,(char*)come_increment_ref_count(real_fun_name_1211)))));
    (last_code_1206 = come_decrement_ref_count2(last_code_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1207 = come_decrement_ref_count2(last_code2_1207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1211 = come_decrement_ref_count2(real_fun_name_1211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1212,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1214 = come_decrement_ref_count2(fun_name2_1214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value989,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__443,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__443;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1262;
char* __dec_obj237;
char* last_code2_1263;
char* __dec_obj238;
_Bool comma_instead_of_semicolon_1264;
struct sClass* current_stack_frame_struct_1265;
struct sFun* cloner_1266;
void* __right_value990 = (void*)0;
char* real_fun_name_1267;
void* __right_value991 = (void*)0;
struct sType* type2_1268;
struct sClass* klass_1269;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct buffer* source_1270;
int i_1271;
void* __right_value994 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1272;
struct tuple2$2char$phsType$ph* it_1273;
struct tuple2$2char$phsType$ph* multiple_assign_var48 = (void*)0;
char* name_1274=0;
struct sType* field_type_1275=0;
char* p_1278;
int sline_1279;
char* sname_1280;
struct buffer* source3_1281;
char* head_1282;
struct buffer* __dec_obj239;
void* __right_value995 = (void*)0;
char* __dec_obj240;
void* __right_value996 = (void*)0;
struct sBlock* block_1283;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sType* result_type_1284;
void* __right_value1000 = (void*)0;
char* name_1285;
void* __right_value1001 = (void*)0;
struct sType* self_type_1286;
struct sType* __list_values13___1288[1];
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct list$1sType$ph* param_types_1287;
void* __right_value1004 = (void*)0;
char* __list_values14___1289[1];
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct list$1char$ph* param_names_1290;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct list$1char$ph* param_default_parametors_1291;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sFun* fun2_1292;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sFun* fun_1293;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1018 = (void*)0;
struct sNode* node_1294;
_Bool Value_1295;
void* __right_value1019 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var49 = (void*)0;
int come_exception_var_c28_1296=0;
char* Err_1297=0;
char* __dec_obj241;
struct buffer* __dec_obj242;
char* __dec_obj243;
char* __dec_obj244;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__444;
    last_code_1262=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj237=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1263=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj238=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1264=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1265=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1266=((void*)0);
    real_fun_name_1267=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1268=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1268;
    klass_1269=type->mClass;
    if(    type->mPointerNum>0&&!klass_1269->mNumber) {
        source_1270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3471, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1270,"{\n");
        buffer_append_str(source_1270,"var result = new buffer();\n");
        buffer_append_format(source_1270,"result.append_str(\"%s {\");\n",klass_1269->mName);
        i_1271=0;
        klass_1269=((struct sClass*)(__right_value994=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1269->mName)));
        come_call_finalizer3(__right_value994,sClass_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_1272=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1269->mFields)),it_1273=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1272));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1272));        it_1273=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1272))        ){
            multiple_assign_var48=it_1273;
            name_1274=(char*)come_increment_ref_count(multiple_assign_var48->v1);
            field_type_1275=(struct sType*)come_increment_ref_count(multiple_assign_var48->v2);
            if(            i_1271==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1269->mFields)-1) {
                char source2_1276[1024];
                memset(&source2_1276, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1276,1024,"result.append_str(\"%s:\");\n",name_1274);
                buffer_append_str(source_1270,source2_1276);
                snprintf(source2_1276,1024,"result.append_str(self.%s.to_string());\n",name_1274);
                buffer_append_str(source_1270,source2_1276);
            }
            else {
                char source2_1277[1024];
                memset(&source2_1277, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1277,1024,"result.append_str(\"%s:\");\n",name_1274);
                buffer_append_str(source_1270,source2_1277);
                snprintf(source2_1277,1024,"result.append_str(self.%s.to_string());\n",name_1274);
                buffer_append_str(source_1270,source2_1277);
                snprintf(source2_1277,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1270,source2_1277);
            }
            i_1271++;
            (name_1274 = come_decrement_ref_count2(name_1274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1275,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1272,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1270,"result.append_str(\"}\");\n");
        buffer_append_format(source_1270,"return result.to_string();\n");
        buffer_append_char(source_1270,125);
        p_1278=info->p;
        sline_1279=info->sline;
        sname_1280=(char*)come_increment_ref_count(info->sname);
        source3_1281=(struct buffer*)come_increment_ref_count(info->source);
        head_1282=info->head;
        __dec_obj239=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1270);
        come_call_finalizer3(__dec_obj239,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj240=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1267));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1283=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1284=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3532, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1284->mHeap=(_Bool)1;
        name_1285=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1267));
        self_type_1286=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1286->mHeap=(_Bool)0;
        param_types_1287=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___1288[0]=self_type_1286,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3537, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values13___1288)));
        param_names_1290=(struct list$1char$ph*)come_increment_ref_count((__list_values14___1289[0]=((char*)(__right_value1004=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3538, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values14___1289)));
        (__right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1291=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3539, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1291,((void*)0));
        result_type_1284->mStatic=(_Bool)0;
        result_type_1284->mUniq=(_Bool)0;
        result_type_1284->mInline=(_Bool)0;
        result_type_1284->mGenerate=(_Bool)0;
        fun2_1292=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1009=__builtin_string(name_1285)))));
        (__right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1292==((void*)0)||fun2_1292->mExternal) {
            fun_1293=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3549, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1285),(struct sType*)come_increment_ref_count(result_type_1284),(struct list$1sType$ph*)come_increment_ref_count(param_types_1287),(struct list$1char$ph*)come_increment_ref_count(param_names_1290),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1291),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1283),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1285)),(struct sFun*)come_increment_ref_count(fun_1293));
            cloner_1266=fun_1293;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3559, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1017=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3559, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1293),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1294=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1017,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1295=node_compile(node_1294,info);
            if(            !Value_1295) {
                multiple_assign_var49=((struct tuple2$2int$char$ph*)(__right_value1019=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1296=multiple_assign_var49->v1;
                Err_1297=(char*)come_increment_ref_count(multiple_assign_var49->v2);
                ((Err_1297)?(puts(Err_1297),exit(0)):(0));
                come_call_finalizer3(__right_value1019,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1297 = come_decrement_ref_count2(Err_1297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1293,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1294) ? node_1294 = come_decrement_ref_count2(node_1294, ((struct sNode*)node_1294)->finalize, ((struct sNode*)node_1294)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1266=fun2_1292;
        }
        __dec_obj241=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1280);
        __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1279;
        __dec_obj242=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1281);
        come_call_finalizer3(__dec_obj242,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1278;
        info->head=head_1282;
        info->sline=sline_1279;
        come_call_finalizer3(source_1270,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1280 = come_decrement_ref_count2(sname_1280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1281,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1283,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1284,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1285 = come_decrement_ref_count2(name_1285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1286,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1287,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1290,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1291,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1292,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1265;
    __dec_obj243=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1262);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1263);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1264;
    __result_obj__444 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1021=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3585, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1266,(char*)come_increment_ref_count(real_fun_name_1267)))));
    (last_code_1262 = come_decrement_ref_count2(last_code_1262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1263 = come_decrement_ref_count2(last_code2_1263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1267 = come_decrement_ref_count2(real_fun_name_1267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1268,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1021,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__444,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__444;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1343;
char* __dec_obj255;
char* last_code2_1344;
char* __dec_obj256;
_Bool comma_instead_of_semicolon_1345;
struct sClass* current_stack_frame_struct_1346;
struct sFun* get_hash_key_fun_1347;
void* __right_value1066 = (void*)0;
char* real_fun_name_1348;
void* __right_value1067 = (void*)0;
struct sType* type2_1349;
struct sClass* klass_1350;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
char* none_generics_name_1351;
void* __right_value1070 = (void*)0;
char* generics_fun_name_1352;
void* __right_value1071 = (void*)0;
struct sGenericsFun* generics_fun_1353;
void* __right_value1072 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var53 = (void*)0;
char* name_1354=0;
_Bool err_1355=0;
void* __right_value1073 = (void*)0;
int i_1356;
void* __right_value1074 = (void*)0;
char* new_fun_name_1357;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
char* __dec_obj257;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct buffer* source_1358;
int i_1359;
void* __right_value1080 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1360;
struct tuple2$2char$phsType$ph* it_1361;
struct tuple2$2char$phsType$ph* multiple_assign_var54 = (void*)0;
char* name_1362=0;
struct sType* field_type_1363=0;
char* p_1365;
int sline_1366;
char* sname_1367;
struct buffer* source3_1368;
char* head_1369;
struct buffer* __dec_obj258;
void* __right_value1081 = (void*)0;
char* __dec_obj259;
void* __right_value1082 = (void*)0;
struct sBlock* block_1370;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct sType* result_type_1371;
void* __right_value1086 = (void*)0;
char* name_1372;
void* __right_value1087 = (void*)0;
struct sType* self_type_1373;
struct sType* __list_values17___1375[1];
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct list$1sType$ph* param_types_1374;
void* __right_value1090 = (void*)0;
char* __list_values18___1376[1];
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
struct list$1char$ph* param_names_1377;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct list$1char$ph* param_default_parametors_1378;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sFun* fun2_1379;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct sFun* fun_1380;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1104 = (void*)0;
struct sNode* node_1381;
_Bool Value_1382;
void* __right_value1105 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var55 = (void*)0;
int come_exception_var_c30_1383=0;
char* Err_1384=0;
char* __dec_obj260;
struct buffer* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__446;
memset(&i_1356, 0, sizeof(int));
    last_code_1343=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1344=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1345=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1346=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1347=((void*)0);
    real_fun_name_1348=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1349=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1349;
    klass_1350=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1347=((struct sFun*)(__right_value1068=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1348)));
        come_call_finalizer3(__right_value1068,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        get_hash_key_fun_1347==((void*)0)) {
            none_generics_name_1351=(char*)come_increment_ref_count(get_none_generics_name(type2_1349->mClass->mName));
            generics_fun_name_1352=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1351,fun_name));
            generics_fun_1353=((struct sGenericsFun*)(__right_value1071=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1352)));
            come_call_finalizer3(__right_value1071,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            generics_fun_1353) {
                multiple_assign_var53=((struct tuple2$2char$phbool$*)(__right_value1072=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1348),generics_fun_1353,type,info)));
                name_1354=(char*)come_increment_ref_count(multiple_assign_var53->v1);
                err_1355=multiple_assign_var53->v2;
                come_call_finalizer3(__right_value1072,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1355) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1347=((struct sFun*)(__right_value1073=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1354)));
                come_call_finalizer3(__right_value1073,sFun_finalize, 0, 1, 0, 0, (void*)0);
                (name_1354 = come_decrement_ref_count2(name_1354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1351 = come_decrement_ref_count2(none_generics_name_1351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1352 = come_decrement_ref_count2(generics_fun_name_1352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1356=128-1;        i_1356>=1;        i_1356--        ){
            new_fun_name_1357=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1348,i_1356));
            get_hash_key_fun_1347=((struct sFun*)(__right_value1075=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1357)));
            come_call_finalizer3(__right_value1075,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            get_hash_key_fun_1347) {
                __dec_obj257=real_fun_name_1348;
                real_fun_name_1348=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1357));
                __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1357 = come_decrement_ref_count2(new_fun_name_1357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1357 = come_decrement_ref_count2(new_fun_name_1357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1347==((void*)0)) {
            get_hash_key_fun_1347=((struct sFun*)(__right_value1077=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1348)));
            come_call_finalizer3(__right_value1077,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    get_hash_key_fun_1347==((void*)0)&&type->mPointerNum>0&&!klass_1350->mNumber&&!klass_1350->mProtocol) {
        source_1358=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3848, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1358,"{\n");
        buffer_append_str(source_1358,"unsigned int result = 0;\n");
        i_1359=0;
        klass_1350=((struct sClass*)(__right_value1080=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1350->mName)));
        come_call_finalizer3(__right_value1080,sClass_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_1360=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1350->mFields)),it_1361=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1360));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1360));        it_1361=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1360))        ){
            multiple_assign_var54=it_1361;
            name_1362=(char*)come_increment_ref_count(multiple_assign_var54->v1);
            field_type_1363=(struct sType*)come_increment_ref_count(multiple_assign_var54->v2);
            char source2_1364[1024];
            memset(&source2_1364, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1364,1024,"result += ((int)self.%s).get_hash_key();\n",name_1362);
            buffer_append_str(source_1358,source2_1364);
            i_1359++;
            (name_1362 = come_decrement_ref_count2(name_1362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1363,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1360,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1358,"return result;\n");
        buffer_append_char(source_1358,125);
        p_1365=info->p;
        sline_1366=info->sline;
        sname_1367=(char*)come_increment_ref_count(info->sname);
        source3_1368=(struct buffer*)come_increment_ref_count(info->source);
        head_1369=info->head;
        __dec_obj258=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1358);
        come_call_finalizer3(__dec_obj258,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj259=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1348));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1370=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1371=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3885, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1371->mUnsigned=(_Bool)1;
        name_1372=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1348));
        self_type_1373=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1373->mHeap=(_Bool)0;
        param_types_1374=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1375[0]=self_type_1373,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3890, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values17___1375)));
        param_names_1377=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1376[0]=((char*)(__right_value1090=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3891, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values18___1376)));
        (__right_value1090 = come_decrement_ref_count2(__right_value1090, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1378=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3892, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1378,((void*)0));
        result_type_1371->mStatic=(_Bool)0;
        result_type_1371->mUniq=(_Bool)0;
        result_type_1371->mInline=(_Bool)0;
        result_type_1371->mGenerate=(_Bool)0;
        fun2_1379=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1095=__builtin_string(name_1372)))));
        (__right_value1095 = come_decrement_ref_count2(__right_value1095, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1379==((void*)0)||fun2_1379->mExternal) {
            fun_1380=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3902, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1372),(struct sType*)come_increment_ref_count(result_type_1371),(struct list$1sType$ph*)come_increment_ref_count(param_types_1374),(struct list$1char$ph*)come_increment_ref_count(param_names_1377),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1378),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1370),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1372)),(struct sFun*)come_increment_ref_count(fun_1380));
            get_hash_key_fun_1347=fun_1380;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3912, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1103=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3912, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1380),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1381=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1103,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1382=node_compile(node_1381,info);
            if(            !Value_1382) {
                multiple_assign_var55=((struct tuple2$2int$char$ph*)(__right_value1105=err_msg(info,"compiling error(Y)")));
                come_exception_var_c30_1383=multiple_assign_var55->v1;
                Err_1384=(char*)come_increment_ref_count(multiple_assign_var55->v2);
                ((Err_1384)?(puts(Err_1384),exit(0)):(0));
                come_call_finalizer3(__right_value1105,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1384 = come_decrement_ref_count2(Err_1384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1380,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1381) ? node_1381 = come_decrement_ref_count2(node_1381, ((struct sNode*)node_1381)->finalize, ((struct sNode*)node_1381)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1347=fun2_1379;
        }
        __dec_obj260=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1367);
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1366;
        __dec_obj261=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1368);
        come_call_finalizer3(__dec_obj261,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1365;
        info->head=head_1369;
        info->sline=sline_1366;
        come_call_finalizer3(source_1358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1367 = come_decrement_ref_count2(sname_1367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1370,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1371,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1372 = come_decrement_ref_count2(name_1372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1373,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1374,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1377,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1378,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1379,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1346;
    __dec_obj262=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1343);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj263=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1344);
    __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1345;
    __result_obj__446 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1107=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3938, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1347,(char*)come_increment_ref_count(real_fun_name_1348)))));
    (last_code_1343 = come_decrement_ref_count2(last_code_1343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1344 = come_decrement_ref_count2(last_code2_1344, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1348 = come_decrement_ref_count2(real_fun_name_1348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1349,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1107,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__446,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__446;
}

