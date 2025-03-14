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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2char$phvoid$p
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
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
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
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
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
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* sType_clone(struct sType* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self);
static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self);
static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self);
static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self);
static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sCurrentNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__237,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value260 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value260=__builtin_string(self->sname))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__239;
    __result_obj__239 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sCurrentNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count2(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__239;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
char* class_name_350;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sClass* current_stack_351;
struct sVarTable* vtable_352;
struct map$2char$phsVar$ph* o2_saved_353;
char* it_356;
char* key_359;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sVar* value_360;
void* __right_value305 = (void*)0;
struct sType* type2_368;
void* __right_value306 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct tuple2$2char$phsType$ph* item_392;
void* __right_value312 = (void*)0;
struct sType* type3_403;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct tuple2$2char$phsType$ph* item2_406;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_455;
char* it_456;
char* key_457;
void* __right_value326 = (void*)0;
struct sVar* value_458;
void* __right_value327 = (void*)0;
struct sType* type2_459;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct tuple2$2char$phsType$ph* item_460;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value332 = (void*)0;
char* __dec_obj54;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__292;
    info->current_stack_num++;
    class_name_350=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_351=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 426, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(class_name_350),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_352=info->lv_table;
    while(vtable_352) {
        for(        o2_saved_353=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_352->mVars)),it_356=map$2char$phsVar$ph$p_begin((o2_saved_353));        !map$2char$phsVar$ph$p_end((o2_saved_353));        it_356=map$2char$phsVar$ph$p_next((o2_saved_353))        ){
            key_359=it_356;
            value_360=((struct sVar*)(__right_value266=map$2char$phsVar$ph$p_operator_load_element(vtable_352->mVars,((char*)(__right_value265=__builtin_string(key_359))))));
            (__right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value266,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_368=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_360->mType));
            type2_368->mPointerNum++;
            item_392=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 439, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_360->mCValueName)),(struct sType*)come_increment_ref_count(type2_368)));
            if(            value_360->mCValueName!=((void*)0)) {
                if(                strcmp(value_360->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_360->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_360->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_360->mType->mClass->mName,"va_list")||string_operator_equals(value_360->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_368->mArrayNum)==1) {
                    type3_403=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_368));
                    list$1sNode$ph$p_reset(type3_403->mArrayNum);
                    type3_403->mPointerNum=1;
                    type3_403->mOriginIsArray=(_Bool)1;
                    item2_406=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 459, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_360->mCValueName)),(struct sType*)come_increment_ref_count(type3_403)));
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_351->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_406)));
                    value_360->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_403,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_406,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_351->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_392)));
                }
            }
            come_call_finalizer3(type2_368,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_392,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_353,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_352=vtable_352->mParent;
    }
    output_struct(current_stack_351,info);
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_350),(struct sClass*)come_increment_ref_count(current_stack_351));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_350,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_350);
    vtable_352=info->lv_table;
    while(vtable_352) {
        for(        o2_saved_455=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_352->mVars)),it_456=map$2char$phsVar$ph$p_begin((o2_saved_455));        !map$2char$phsVar$ph$p_end((o2_saved_455));        it_456=map$2char$phsVar$ph$p_next((o2_saved_455))        ){
            key_457=it_456;
            value_458=((struct sVar*)(__right_value326=map$2char$phsVar$ph$p_operator_load_element(vtable_352->mVars,key_457)));
            come_call_finalizer3(__right_value326,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_459=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_458->mType));
            item_460=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 488, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_458->mCValueName),(struct sType*)come_increment_ref_count(type2_459)));
            if(            value_458->mCValueName!=((void*)0)) {
                if(                strcmp(value_458->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_458->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_458->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_458->mType->mClass->mName,"va_list")||string_operator_equals(value_458->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_459->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_458->mCValueName,value_458->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_458->mCValueName,value_458->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_459,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_460,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_455,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_352=vtable_352->mParent;
    }
    come_value_461=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 517, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj54=come_value_461->c_value;
    come_value_461->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=come_value_461->type;
    come_value_461->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 520, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(class_name_350),(_Bool)0,info));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_461->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_461->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_461));
    __result_obj__292 = (_Bool)1;
    (class_name_350 = come_decrement_ref_count2(class_name_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_351,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__292;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_354;
char* __result_obj__240;
char* __result_obj__241;
char* result_355;
char* __result_obj__242;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_354,0,sizeof(char*));
        __result_obj__240 = result_354;
        return __result_obj__240;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__241 = self->key_list->it->item;
        return __result_obj__241;
    }
    memset(&result_355,0,sizeof(char*));
    __result_obj__242 = result_355;
    return __result_obj__242;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_357;
char* __result_obj__243;
char* __result_obj__244;
char* result_358;
char* __result_obj__245;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_357,0,sizeof(char*));
        __result_obj__243 = result_357;
        return __result_obj__243;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__244 = self->key_list->it->item;
        return __result_obj__244;
    }
    memset(&result_358,0,sizeof(char*));
    __result_obj__245 = result_358;
    return __result_obj__245;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_361;
unsigned int hash_362;
unsigned int it_363;
struct sVar* __result_obj__246;
struct sVar* __result_obj__247;
struct sVar* __result_obj__248;
struct sVar* __result_obj__249;
default_value_361 = (void*)0;
    memset(&default_value_361,0,sizeof(struct sVar*));
    hash_362=string_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while((_Bool)1) {
        if(        self->item_existance[it_363]) {
            if(            string_equals(self->keys[it_363],key)) {
                __result_obj__246 = come_increment_ref_count(self->items[it_363]);
                come_call_finalizer3(default_value_361,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__246,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__246;
            }
            it_363++;
            if(            it_363>=self->size) {
                it_363=0;
            }
            else if(            it_363==hash_362) {
                __result_obj__247 = come_increment_ref_count(default_value_361);
                come_call_finalizer3(default_value_361,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__247,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__247;
            }
        }
        else {
            __result_obj__248 = come_increment_ref_count(default_value_361);
            come_call_finalizer3(default_value_361,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__248,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__248;
        }
    }
    __result_obj__249 = come_increment_ref_count(default_value_361);
    come_call_finalizer3(default_value_361,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
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
struct list_item$1sType$ph* it_364;
struct list_item$1sType$ph* prev_it_365;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        come_call_finalizer3(prev_it_365,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_366;
struct list_item$1sNode$ph* prev_it_367;
    it_366=self->head;
    while(it_366!=((void*)0)) {
        prev_it_367=it_366;
        it_366=it_366->next;
        come_call_finalizer3(prev_it_367,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__250;
void* __right_value267 = (void*)0;
struct sType* result_369;
void* __right_value268 = (void*)0;
struct sType* __dec_obj23;
void* __right_value269 = (void*)0;
struct sType* __dec_obj24;
void* __right_value277 = (void*)0;
struct list$1sType$ph* __dec_obj28;
void* __right_value278 = (void*)0;
struct sType* __dec_obj29;
void* __right_value279 = (void*)0;
struct sType* __dec_obj30;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value283 = (void*)0;
char* __dec_obj33;
void* __right_value284 = (void*)0;
char* __dec_obj34;
void* __right_value285 = (void*)0;
char* __dec_obj35;
void* __right_value293 = (void*)0;
struct list$1sNode$ph* __dec_obj39;
void* __right_value294 = (void*)0;
char* __dec_obj40;
void* __right_value295 = (void*)0;
struct list$1sType$ph* __dec_obj41;
void* __right_value303 = (void*)0;
struct list$1char$ph* __dec_obj45;
void* __right_value304 = (void*)0;
struct sType* __dec_obj46;
struct sType* __result_obj__264;
    if(    self==(void*)0) {
        __result_obj__250 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__250,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_369=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_369->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj23=result_369->mOriginalLoadVarType;
        result_369->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj24=result_369->mChannelType;
        result_369->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj28=result_369->mGenericsTypes;
        result_369->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj28,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj29=result_369->mNoSolvedGenericsType;
        result_369->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj30=result_369->mAnyOriginalType;
        result_369->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj31=result_369->mSizeNum;
        result_369->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj32=result_369->mAlignas;
        result_369->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj33=result_369->mTupleName;
        result_369->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj34=result_369->mAttribute;
        result_369->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_369->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_369->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_369->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_369->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_369->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_369->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_369->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_369->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_369->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_369->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_369->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_369->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_369->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_369->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_369->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_369->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_369->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_369->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_369->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_369->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_369->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_369->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_369->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj35=result_369->mAsmName;
        result_369->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_369->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj39=result_369->mArrayNum;
        result_369->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj39,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj40=result_369->mOriginalTypeName;
        result_369->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_369->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_369->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj41=result_369->mParamTypes;
        result_369->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj41,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj45=result_369->mParamNames;
        result_369->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj46=result_369->mResultType;
        result_369->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mVarArgs=self->mVarArgs;
    }
    __result_obj__264 = come_increment_ref_count(result_369);
    come_call_finalizer3(result_369,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__251;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sType$ph* result_370;
struct list_item$1sType$ph* it_371;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1sType$ph* __result_obj__254;
    if(    self==((void*)0)) {
        __result_obj__251 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__251,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__251;
    }
    result_370=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_371=self->head;
    while(it_371!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_370,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_371->item)));
        }
        else {
            list$1sType$ph$p_add(result_370,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_371->item)));
        }
        it_371=it_371->next;
    }
    __result_obj__254 = come_increment_ref_count(result_370);
    come_call_finalizer3(result_370,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__254,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__254;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__252;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__252 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_372;
struct sType* __dec_obj25;
void* __right_value273 = (void*)0;
struct list_item$1sType$ph* litem_373;
struct sType* __dec_obj26;
void* __right_value274 = (void*)0;
struct list_item$1sType$ph* litem_374;
struct sType* __dec_obj27;
struct list$1sType$ph* __result_obj__253;
    if(    self->len==0) {
        litem_372=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj25=litem_372->item;
        litem_372->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value273=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj26=litem_373->item;
        litem_373->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value274=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj27=litem_374->item;
        litem_374->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result_obj__253 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__253;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_375;
struct list_item$1sType$ph* prev_it_376;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        come_call_finalizer3(prev_it_376,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__255;
void* __right_value280 = (void*)0;
struct sNode* result_377;
struct sNode* __result_obj__256;
    if(    self==(void*)0) {
        __result_obj__255 = come_increment_ref_count((void*)0);
        ((__result_obj__255) ? __result_obj__255 = come_decrement_ref_count2(__result_obj__255, ((struct sNode*)__result_obj__255)->finalize, ((struct sNode*)__result_obj__255)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__255;
    }
    result_377=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_377->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_377->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_377->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_377->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_377->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_377->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_377->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_377->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_377->kind=self->kind;
    }
    __result_obj__256 = come_increment_ref_count(result_377);
    ((result_377) ? result_377 = come_decrement_ref_count2(result_377, ((struct sNode*)result_377)->finalize, ((struct sNode*)result_377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__256) ? __result_obj__256 = come_decrement_ref_count2(__result_obj__256, ((struct sNode*)__result_obj__256)->finalize, ((struct sNode*)__result_obj__256)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__256;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__257;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* result_378;
struct list_item$1sNode$ph* it_379;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* __result_obj__260;
    if(    self==((void*)0)) {
        __result_obj__257 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__257,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__257;
    }
    result_378=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_379=self->head;
    while(it_379!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_378,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_379->item)));
        }
        else {
            list$1sNode$ph$p_add(result_378,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_379->item)));
        }
        it_379=it_379->next;
    }
    __result_obj__260 = come_increment_ref_count(result_378);
    come_call_finalizer3(result_378,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__258;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__258 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_380;
struct sNode* __dec_obj36;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_381;
struct sNode* __dec_obj37;
void* __right_value290 = (void*)0;
struct list_item$1sNode$ph* litem_382;
struct sNode* __dec_obj38;
struct list$1sNode$ph* __result_obj__259;
    if(    self->len==0) {
        litem_380=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj36=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_380;
        self->head=litem_380;
    }
    else if(    self->len==1) {
        litem_381=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->head;
        litem_381->next=((void*)0);
        __dec_obj37=litem_381->item;
        litem_381->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_381;
        self->head->next=litem_381;
    }
    else {
        litem_382=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value290=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->tail;
        litem_382->next=((void*)0);
        __dec_obj38=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_382;
        self->tail=litem_382;
    }
    self->len++;
    __result_obj__259 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__259;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_383;
struct list_item$1sNode$ph* prev_it_384;
    it_383=self->head;
    while(it_383!=((void*)0)) {
        prev_it_384=it_383;
        it_383=it_383->next;
        come_call_finalizer3(prev_it_384,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__261;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1char$ph* result_385;
struct list_item$1char$ph* it_386;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1char$ph* __result_obj__263;
    if(    self==((void*)0)) {
        __result_obj__261 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__261,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__261;
    }
    result_385=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_386=self->head;
    while(it_386!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_385,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_386->item)));
        }
        else {
            list$1char$ph$p_add(result_385,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_386->item)));
        }
        it_386=it_386->next;
    }
    __result_obj__263 = come_increment_ref_count(result_385);
    come_call_finalizer3(result_385,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__263,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__263;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_387;
char* __dec_obj42;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_388;
char* __dec_obj43;
void* __right_value300 = (void*)0;
struct list_item$1char$ph* litem_389;
char* __dec_obj44;
struct list$1char$ph* __result_obj__262;
    if(    self->len==0) {
        litem_387=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=((void*)0);
        litem_387->next=((void*)0);
        __dec_obj42=litem_387->item;
        litem_387->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_387;
        self->head=litem_387;
    }
    else if(    self->len==1) {
        litem_388=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->head;
        litem_388->next=((void*)0);
        __dec_obj43=litem_388->item;
        litem_388->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_388;
        self->head->next=litem_388;
    }
    else {
        litem_389=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value300=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->tail;
        litem_389->next=((void*)0);
        __dec_obj44=litem_389->item;
        litem_389->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_389;
        self->tail=litem_389;
    }
    self->len++;
    __result_obj__262 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_390;
struct list_item$1char$ph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        come_call_finalizer3(prev_it_391,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
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
struct tuple2$2char$phsType$ph* __result_obj__265;
void* __right_value307 = (void*)0;
struct tuple2$2char$phsType$ph* result_393;
void* __right_value308 = (void*)0;
char* __dec_obj47;
void* __right_value309 = (void*)0;
struct sType* __dec_obj48;
struct tuple2$2char$phsType$ph* __result_obj__266;
    if(    self==(void*)0) {
        __result_obj__265 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__265,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__265;
    }
    result_393=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj47=result_393->v1;
        result_393->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_393->v2;
        result_393->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__266 = come_increment_ref_count(result_393);
    come_call_finalizer3(result_393,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__266,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__266;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_394;
    result_394=0;
    result_394+=int_get_hash_key(((int)self->v1));
    result_394+=int_get_hash_key(((int)self->v2));
    return result_394;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_395;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_396;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_395=left->head;
    it2_396=right->head;
    while(it_395!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_395->item,it2_396->item)) {
            return (_Bool)0;
        }
        it_395=it_395->next;
        it2_396=it2_396->next;
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
struct list_item$1sType$ph* it_397;
struct list_item$1sType$ph* it2_398;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_397=left->head;
    it2_398=right->head;
    while(it_397!=((void*)0)) {
        if(        !sType_equals(it_397->item,it2_398->item)) {
            return (_Bool)0;
        }
        it_397=it_397->next;
        it2_398=it2_398->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_399;
struct list_item$1sNode$ph* it2_400;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_399=left->head;
    it2_400=right->head;
    while(it_399!=((void*)0)) {
        if(        !sNode_equals(it_399->item,it2_400->item)) {
            return (_Bool)0;
        }
        it_399=it_399->next;
        it2_400=it2_400->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_401;
struct list_item$1char$ph* it2_402;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_401=left->head;
    it2_402=right->head;
    while(it_401!=((void*)0)) {
        if(        !string_equals(it_401->item,it2_402->item)) {
            return (_Bool)0;
        }
        it_401=it_401->next;
        it2_402=it2_402->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj49;
struct sType* __dec_obj50;
struct tuple2$2char$phsType$ph* __result_obj__267;
    __dec_obj49=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj50=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__267 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__267,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__267;
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
struct list_item$1sNode$ph* it_404;
struct list_item$1sNode$ph* prev_it_405;
struct list$1sNode$ph* __result_obj__268;
    it_404=self->head;
    while(it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        come_call_finalizer3(prev_it_405,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__268 = self;
    return __result_obj__268;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value316 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_407;
struct tuple2$2char$phsType$ph* __dec_obj51;
void* __right_value317 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_408;
struct tuple2$2char$phsType$ph* __dec_obj52;
void* __right_value318 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_409;
struct tuple2$2char$phsType$ph* __dec_obj53;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__269;
    if(    self->len==0) {
        litem_407=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value316=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_407->prev=((void*)0);
        litem_407->next=((void*)0);
        __dec_obj51=litem_407->item;
        litem_407->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_407;
        self->head=litem_407;
    }
    else if(    self->len==1) {
        litem_408=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value317=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_408->prev=self->head;
        litem_408->next=((void*)0);
        __dec_obj52=litem_408->item;
        litem_408->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_408;
        self->head->next=litem_408;
    }
    else {
        litem_409=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value318=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_409->prev=self->tail;
        litem_409->next=((void*)0);
        __dec_obj53=litem_409->item;
        litem_409->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_409;
        self->tail=litem_409;
    }
    self->len++;
    __result_obj__269 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__269;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_410;
int i_411;
    for(    i_410=0;    i_410<self->size;    i_410++    ){
        if(        self->item_existance[i_410]) {
            if(            1) {
                come_call_finalizer3(self->items[i_410],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_411=0;    i_411<self->size;    i_411++    ){
        if(        self->item_existance[i_411]) {
            if(            1) {
                (self->keys[i_411] = come_decrement_ref_count2(self->keys[i_411], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_431;
unsigned int it_432;
_Bool same_key_exist_449;
char* it2_452;
struct map$2char$phsClass$ph* __result_obj__290;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_431=string_get_hash_key(((char*)key))%self->size;
    it_432=hash_431;
    while((_Bool)1) {
        if(        self->item_existance[it_432]) {
            if(            string_equals(self->keys[it_432],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_432]);
                    (self->keys[it_432] = come_decrement_ref_count2(self->keys[it_432], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_432]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_432]);
                    self->keys[it_432]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_432],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_432]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_432]=item;
                }
                break;
            }
            it_432++;
            if(            it_432>=self->size) {
                it_432=0;
            }
            else if(            it_432==hash_431) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_432]=(_Bool)1;
            if(            1) {
                self->keys[it_432]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_432]=key;
            }
            if(            1) {
                self->items[it_432]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_432]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_449=(_Bool)0;
    for(    it2_452=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_452=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_452,key)) {
            same_key_exist_449=(_Bool)1;
        }
    }
    if(    !same_key_exist_449) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__290 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__290;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_412;
void* __right_value321 = (void*)0;
char** keys_413;
void* __right_value322 = (void*)0;
struct sClass** items_414;
void* __right_value323 = (void*)0;
_Bool* item_existance_415;
int len_416;
char* it_419;
struct sClass* default_value_422;
void* __right_value324 = (void*)0;
struct sClass* it2_423;
unsigned int hash_428;
int n_429;
struct sClass* default_value_430;
void* __right_value325 = (void*)0;
default_value_422 = (void*)0;
default_value_430 = (void*)0;
    size_412=self->size*10;
    keys_413=(char**)come_increment_ref_count(((char**)(__right_value321=(char**)come_calloc(1, sizeof(char*)*(1*(size_412)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_414=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value322=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_412)), "/usr/local/include/comelang.h", 2935, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_415=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value323=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_412)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_416=0;
    for(    it_419=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_419=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_422,0,sizeof(struct sClass*));
        it2_423=((struct sClass*)(__right_value324=map$2char$phsClass$ph$p_at(self,it_419,(struct sClass*)come_increment_ref_count(default_value_422))));
        come_call_finalizer3(__right_value324,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_428=string_get_hash_key(((char*)it_419))%size_412;
        n_429=hash_428;
        while((_Bool)1) {
            if(            item_existance_415[n_429]) {
                n_429++;
                if(                n_429>=size_412) {
                    n_429=0;
                }
                else if(                n_429==hash_428) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_415[n_429]=(_Bool)1;
                keys_413[n_429]=it_419;
                items_414[n_429]=((struct sClass*)(__right_value325=map$2char$phsClass$ph$p_at(self,it_419,(struct sClass*)come_increment_ref_count(default_value_430))));
                come_call_finalizer3(__right_value325,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_416++;
                come_call_finalizer3(default_value_430,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_430,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_422,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_413;
    self->items=items_414;
    self->item_existance=item_existance_415;
    self->size=size_412;
    self->len=len_416;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_417;
char* __result_obj__270;
char* __result_obj__271;
char* result_418;
char* __result_obj__272;
result_417 = (void*)0;
result_418 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_417,0,sizeof(char*));
        __result_obj__270 = result_417;
        return __result_obj__270;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__271 = self->key_list->it->item;
        return __result_obj__271;
    }
    memset(&result_418,0,sizeof(char*));
    __result_obj__272 = result_418;
    return __result_obj__272;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_420;
char* __result_obj__273;
char* __result_obj__274;
char* result_421;
char* __result_obj__275;
result_420 = (void*)0;
result_421 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_420,0,sizeof(char*));
        __result_obj__273 = result_420;
        return __result_obj__273;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__274 = self->key_list->it->item;
        return __result_obj__274;
    }
    memset(&result_421,0,sizeof(char*));
    __result_obj__275 = result_421;
    return __result_obj__275;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_424;
unsigned int it_425;
struct sClass* __result_obj__276;
struct sClass* __result_obj__277;
struct sClass* __result_obj__278;
struct sClass* __result_obj__279;
    hash_424=string_get_hash_key(((char*)key))%self->size;
    it_425=hash_424;
    while((_Bool)1) {
        if(        self->item_existance[it_425]) {
            if(            string_equals(self->keys[it_425],key)) {
                __result_obj__276 = come_increment_ref_count(self->items[it_425]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__276,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__276;
            }
            it_425++;
            if(            it_425>=self->size) {
                it_425=0;
            }
            else if(            it_425==hash_424) {
                __result_obj__277 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__277,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__277;
            }
        }
        else {
            __result_obj__278 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__278,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__278;
        }
    }
    __result_obj__279 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__279,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__279;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_426;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_427;
    it_426=self->head;
    while(it_426!=((void*)0)) {
        prev_it_427=it_426;
        it_426=it_426->next;
        come_call_finalizer3(prev_it_427,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_433;
struct list_item$1char$p* it_434;
struct list$1char$p* __result_obj__283;
    it2_433=0;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        if(        charp_equals(it_434->item,item)) {
            list$1char$p$p_delete(self,it2_433,it2_433+1);
            break;
        }
        it2_433++;
        it_434=it_434->next;
    }
    __result_obj__283 = self;
    return __result_obj__283;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_435;
struct list$1char$p* __result_obj__280;
struct list_item$1char$p* it_438;
int i_439;
struct list_item$1char$p* prev_it_440;
struct list_item$1char$p* it_441;
int i_442;
struct list_item$1char$p* prev_it_443;
struct list_item$1char$p* it_444;
struct list_item$1char$p* head_prev_it_445;
struct list_item$1char$p* tail_it_446;
int i_447;
struct list_item$1char$p* prev_it_448;
struct list$1char$p* __result_obj__282;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_435=tail;
        tail=head;
        head=tmp_435;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__280 = self;
        return __result_obj__280;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_438=self->head;
        i_439=0;
        while(it_438!=((void*)0)) {
            if(            i_439<tail) {
                prev_it_440=it_438;
                it_438=it_438->next;
                i_439++;
                come_call_finalizer3(prev_it_440,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_439==tail) {
                self->head=it_438;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_438=it_438->next;
                i_439++;
            }
        }
    }
    else if(    tail==self->len) {
        it_441=self->head;
        i_442=0;
        while(it_441!=((void*)0)) {
            if(            i_442==head) {
                self->tail=it_441->prev;
                self->tail->next=((void*)0);
            }
            if(            i_442>=head) {
                prev_it_443=it_441;
                it_441=it_441->next;
                i_442++;
                come_call_finalizer3(prev_it_443,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_441=it_441->next;
                i_442++;
            }
        }
    }
    else {
        it_444=self->head;
        head_prev_it_445=((void*)0);
        tail_it_446=((void*)0);
        i_447=0;
        while(it_444!=((void*)0)) {
            if(            i_447==head) {
                head_prev_it_445=it_444->prev;
            }
            if(            i_447==tail) {
                tail_it_446=it_444;
            }
            if(            i_447>=head&&i_447<tail) {
                prev_it_448=it_444;
                it_444=it_444->next;
                i_447++;
                come_call_finalizer3(prev_it_448,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_444=it_444->next;
                i_447++;
            }
        }
        if(        head_prev_it_445!=((void*)0)) {
            head_prev_it_445->next=tail_it_446;
        }
        if(        tail_it_446!=((void*)0)) {
            tail_it_446->prev=head_prev_it_445;
        }
    }
    __result_obj__282 = self;
    return __result_obj__282;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_436;
struct list_item$1char$p* prev_it_437;
struct list$1char$p* __result_obj__281;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        prev_it_437=it_436;
        it_436=it_436->next;
        come_call_finalizer3(prev_it_437,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__281 = self;
    return __result_obj__281;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_450;
char* __result_obj__284;
char* __result_obj__285;
char* result_451;
char* __result_obj__286;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_450,0,sizeof(char*));
        __result_obj__284 = result_450;
        return __result_obj__284;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__285 = self->it->item;
        return __result_obj__285;
    }
    memset(&result_451,0,sizeof(char*));
    __result_obj__286 = result_451;
    return __result_obj__286;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_453;
char* __result_obj__287;
char* __result_obj__288;
char* result_454;
char* __result_obj__289;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_453,0,sizeof(char*));
        __result_obj__287 = result_453;
        return __result_obj__287;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__288 = self->it->item;
        return __result_obj__288;
    }
    memset(&result_454,0,sizeof(char*));
    __result_obj__289 = result_454;
    return __result_obj__289;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value335 = (void*)0;
struct list_item$1CVALUE$ph* litem_462;
struct CVALUE* __dec_obj56;
void* __right_value336 = (void*)0;
struct list_item$1CVALUE$ph* litem_463;
struct CVALUE* __dec_obj57;
void* __right_value337 = (void*)0;
struct list_item$1CVALUE$ph* litem_464;
struct CVALUE* __dec_obj58;
struct list$1CVALUE$ph* __result_obj__291;
    if(    self->len==0) {
        litem_462=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value335=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_462->prev=((void*)0);
        litem_462->next=((void*)0);
        __dec_obj56=litem_462->item;
        litem_462->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_462;
        self->head=litem_462;
    }
    else if(    self->len==1) {
        litem_463=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value336=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_463->prev=self->head;
        litem_463->next=((void*)0);
        __dec_obj57=litem_463->item;
        litem_463->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_463;
        self->head->next=litem_463;
    }
    else {
        litem_464=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value337=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_464->prev=self->tail;
        litem_464->next=((void*)0);
        __dec_obj58=litem_464->item;
        litem_464->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_464;
        self->tail=litem_464;
    }
    self->len++;
    __result_obj__291 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__291;
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

struct sType* use_any_type(struct sType* type){
struct sType* __dec_obj59;
int i_465;
struct list$1sType$ph* o2_saved_466;
struct sType* it_469;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __result_obj__302;
    if(    type->mAnyOriginalType) {
        __dec_obj59=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_465=0;
    for(    o2_saved_466=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_469=list$1sType$ph$p_begin((o2_saved_466));    !list$1sType$ph$p_end((o2_saved_466));    it_469=list$1sType$ph$p_next((o2_saved_466))    ){
        list$1sType$ph$p_operator_store_element(type->mGenericsTypes,i_465,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_469)))));
        i_465++;
    }
    come_call_finalizer3(o2_saved_466,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__302 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__302,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__302;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_467;
struct sType* __result_obj__293;
struct sType* __result_obj__294;
struct sType* result_468;
struct sType* __result_obj__295;
result_467 = (void*)0;
result_468 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_467,0,sizeof(struct sType*));
        __result_obj__293 = result_467;
        return __result_obj__293;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_468,0,sizeof(struct sType*));
    __result_obj__295 = result_468;
    return __result_obj__295;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_470;
struct sType* __result_obj__296;
struct sType* __result_obj__297;
struct sType* result_471;
struct sType* __result_obj__298;
result_470 = (void*)0;
result_471 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_470,0,sizeof(struct sType*));
        __result_obj__296 = result_470;
        return __result_obj__296;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__297 = self->it->item;
        return __result_obj__297;
    }
    memset(&result_471,0,sizeof(struct sType*));
    __result_obj__298 = result_471;
    return __result_obj__298;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_472;
int i_473;
struct sType* default_value_474;
struct list$1sType$ph* __result_obj__300;
struct list_item$1sType$ph* it_478;
int i_479;
struct sType* __dec_obj63;
struct list$1sType$ph* __result_obj__301;
default_value_474 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_472=self->len;
        for(        i_473=0;        i_473<position-len_472;        i_473++        ){
            memset(&default_value_474,0,sizeof(struct sType*));
            list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(default_value_474));
            come_call_finalizer3(default_value_474,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__300 = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__300;
    }
    it_478=self->head;
    i_479=0;
    while(it_478!=((void*)0)) {
        if(        position==i_479) {
            __dec_obj63=it_478->item;
            it_478->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_478=it_478->next;
        i_479++;
    }
    __result_obj__301 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__301;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value338 = (void*)0;
struct list_item$1sType$ph* litem_475;
struct sType* __dec_obj60;
void* __right_value339 = (void*)0;
struct list_item$1sType$ph* litem_476;
struct sType* __dec_obj61;
void* __right_value340 = (void*)0;
struct list_item$1sType$ph* litem_477;
struct sType* __dec_obj62;
struct list$1sType$ph* __result_obj__299;
    if(    self->len==0) {
        litem_475=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value338=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_475->prev=((void*)0);
        litem_475->next=((void*)0);
        __dec_obj60=litem_475->item;
        litem_475->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_475;
        self->head=litem_475;
    }
    else if(    self->len==1) {
        litem_476=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value339=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_476->prev=self->head;
        litem_476->next=((void*)0);
        __dec_obj61=litem_476->item;
        litem_476->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_476;
        self->head->next=litem_476;
    }
    else {
        litem_477=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value340=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_477->prev=self->tail;
        litem_477->next=((void*)0);
        __dec_obj62=litem_477->item;
        litem_477->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_477;
        self->tail=litem_477;
    }
    self->len++;
    __result_obj__299 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__299;
}

struct sType* remove_any_type(struct sType* type){
struct sType* __dec_obj64;
struct sType* __dec_obj65;
int i_480;
struct list$1sType$ph* o2_saved_481;
struct sType* it_482;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __result_obj__303;
    if(    type->mAnyOriginalType) {
        __dec_obj64=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj65=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_480=0;
    for(    o2_saved_481=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_482=list$1sType$ph$p_begin((o2_saved_481));    !list$1sType$ph$p_end((o2_saved_481));    it_482=list$1sType$ph$p_next((o2_saved_481))    ){
        list$1sType$ph$p_operator_store_element(type->mGenericsTypes,i_480,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_482)))));
        i_480++;
    }
    come_call_finalizer3(o2_saved_481,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__303 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value345 = (void*)0;
char* none_generics_name_483;
void* __right_value346 = (void*)0;
char* fun_name2_484;
void* __right_value347 = (void*)0;
char* fun_name3_485;
void* __right_value348 = (void*)0;
struct sGenericsFun* generics_fun_486;
_Bool generics_any_child_489;
void* __right_value349 = (void*)0;
struct sType* no_solved_type_490;
struct sType* __dec_obj66;
struct list$1sType$ph* o2_saved_491;
struct sType* it_492;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* type2_493;
void* __right_value352 = (void*)0;
struct sType* type_before_494;
void* __right_value353 = (void*)0;
char* __dec_obj67;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_495=0;
_Bool err_496=0;
void* __right_value356 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_497=0;
char* Err_498=0;
void* __right_value357 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__311;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* type2_501;
void* __right_value364 = (void*)0;
struct sType* type_before_502;
void* __right_value365 = (void*)0;
char* __dec_obj70;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_503=0;
_Bool err_504=0;
void* __right_value368 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c2_505=0;
char* Err_506=0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__312;
void* __right_value372 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__316;
    none_generics_name_483=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_484=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_485=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_483,fun_name));
    generics_fun_486=((struct sGenericsFun*)(__right_value348=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_485,((void*)0))));
    come_call_finalizer3(__right_value348,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    generics_any_child_489=(_Bool)0;
    no_solved_type_490=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj66=no_solved_type_490;
        no_solved_type_490=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_491=(struct list$1sType$ph*)come_increment_ref_count((no_solved_type_490->mGenericsTypes)),it_492=list$1sType$ph$p_begin((o2_saved_491));        !list$1sType$ph$p_end((o2_saved_491));        it_492=list$1sType$ph$p_next((o2_saved_491))        ){
            if(            it_492->mAnyOriginalType) {
                generics_any_child_489=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_491,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_486) {
        if(        generics_fun_486->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_489)) {
            type2_493=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_490))));
            type_before_494=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj67=fun_name2_484;
            fun_name2_484=(char*)come_increment_ref_count(create_method_name(type2_493,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value355=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_484)),generics_fun_486,type2_493,info)));
            name_495=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_496=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value355,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_496) {
                multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value356=err_msg(info,"%s not found",fun_name3_485)));
                come_exception_var_c1_497=multiple_assign_var2->v1;
                Err_498=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                ((Err_498)?(puts(Err_498),exit(0)):(0));
                come_call_finalizer3(__right_value356,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__311 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value361=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 74, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_498 = come_decrement_ref_count2(Err_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_483 = come_decrement_ref_count2(none_generics_name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_484 = come_decrement_ref_count2(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_485 = come_decrement_ref_count2(fun_name3_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value361,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__311,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__311;
                (Err_498 = come_decrement_ref_count2(Err_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_494;
            come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_494,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            type2_501=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_490))));
            type_before_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj70=fun_name2_484;
            fun_name2_484=(char*)come_increment_ref_count(create_method_name(type2_501,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value367=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_484)),generics_fun_486,type2_501,info)));
            name_503=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            err_504=multiple_assign_var3->v2;
            come_call_finalizer3(__right_value367,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_504) {
                multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value368=err_msg(info,"%s not found",fun_name3_485)));
                come_exception_var_c2_505=multiple_assign_var4->v1;
                Err_506=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_506)?(puts(Err_506),exit(0)):(0));
                come_call_finalizer3(__right_value368,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__312 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value371=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 90, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_506 = come_decrement_ref_count2(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_483 = come_decrement_ref_count2(none_generics_name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_484 = come_decrement_ref_count2(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_485 = come_decrement_ref_count2(fun_name3_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value371,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__312,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__312;
                (Err_506 = come_decrement_ref_count2(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_502;
            come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__316 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value376=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 97, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_484)),generics_fun_486))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_483 = come_decrement_ref_count2(none_generics_name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_484 = come_decrement_ref_count2(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_485 = come_decrement_ref_count2(fun_name3_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(no_solved_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value376,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__316,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__316;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_487;
unsigned int it_488;
struct sGenericsFun* __result_obj__304;
struct sGenericsFun* __result_obj__305;
struct sGenericsFun* __result_obj__306;
struct sGenericsFun* __result_obj__307;
    hash_487=string_get_hash_key(((char*)key))%self->size;
    it_488=hash_487;
    while((_Bool)1) {
        if(        self->item_existance[it_488]) {
            if(            string_equals(self->keys[it_488],key)) {
                __result_obj__304 = come_increment_ref_count(self->items[it_488]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__304,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__304;
            }
            it_488++;
            if(            it_488>=self->size) {
                it_488=0;
            }
            else if(            it_488==hash_487) {
                __result_obj__305 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__305,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__305;
            }
        }
        else {
            __result_obj__306 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__306,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__306;
        }
    }
    __result_obj__307 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__307,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__307;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self){
struct tuple2$2char$phvoid$p* __result_obj__308;
void* __right_value358 = (void*)0;
struct tuple2$2char$phvoid$p* result_499;
void* __right_value359 = (void*)0;
char* __dec_obj68;
struct tuple2$2char$phvoid$p* __result_obj__309;
    if(    self==(void*)0) {
        __result_obj__308 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__308,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__308;
    }
    result_499=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_499->v1;
        result_499->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_499->v2=self->v2;
    }
    __result_obj__309 = come_increment_ref_count(result_499);
    come_call_finalizer3(result_499,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__309,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__309;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_500;
    result_500=0;
    result_500+=int_get_hash_key(((int)self->v1));
    result_500+=int_get_hash_key(((int)self->v2));
    return result_500;
}

static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj69;
struct tuple2$2char$phvoid$p* __result_obj__310;
    __dec_obj69=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__310 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__310,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self){
struct tuple2$2char$phsGenericsFun$p* __result_obj__313;
void* __right_value373 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_507;
void* __right_value374 = (void*)0;
char* __dec_obj71;
struct tuple2$2char$phsGenericsFun$p* __result_obj__314;
    if(    self==(void*)0) {
        __result_obj__313 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__313,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__313;
    }
    result_507=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj71=result_507->v1;
        result_507->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_507->v2=self->v2;
    }
    __result_obj__314 = come_increment_ref_count(result_507);
    come_call_finalizer3(result_507,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__314,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_508;
    result_508=0;
    result_508+=int_get_hash_key(((int)self->v1));
    result_508+=int_get_hash_key(((int)self->v2));
    return result_508;
}

static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right){
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
    if(    !list$1char$ph$p_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
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

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj72;
struct tuple2$2char$phsGenericsFun$p* __result_obj__315;
    __dec_obj72=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__315 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__315,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__315;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value377 = (void*)0;
char* fun_name3_510;
struct list$1sType$ph* method_generics_types_before_511;
struct list$1sType$ph* __dec_obj73;
void* __right_value378 = (void*)0;
struct sGenericsFun* generics_fun_512;
void* __right_value379 = (void*)0;
_Bool _if_conditional1;
void* __right_value380 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c3_513=0;
char* Err_514=0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__317;
struct list$1sType$ph* __dec_obj74;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__318;
    static int num_method_generics_509=0;
    fun_name3_510=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_509++));
    method_generics_types_before_511=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj73=info->method_generics_types;
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj73,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_512=((struct sGenericsFun*)(__right_value378=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value378,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    generics_fun_512) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_510)),generics_fun_512,info))),        _if_conditional1) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"%s not found",fun_name3_510)));
            come_exception_var_c3_513=multiple_assign_var5->v1;
            Err_514=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_514)?(puts(Err_514),exit(0)):(0));
            come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__317 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value383=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 113, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name3_510 = come_decrement_ref_count2(fun_name3_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types_before_511,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value383,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__317,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__317;
            (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj74=info->method_generics_types;
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_511);
    come_call_finalizer3(__dec_obj74,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__318 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value386=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 119, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_510)),generics_fun_512))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name3_510 = come_decrement_ref_count2(fun_name3_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types_before_511,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value386,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__318,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__318;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value391 = (void*)0;
struct sNode* current_stack_frame_node_515;
_Bool Value_517;
_Bool __result_obj__321;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_520;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct buffer* method_block2_521;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* method_block_type_522;
void* __right_value397 = (void*)0;
char* class_name_526;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sClass* current_stack_frame_struct_530;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c4_531=0;
char* Err_532=0;
_Bool __result_obj__328;
void* __right_value402 = (void*)0;
struct sType* result_type_533;
struct list$1sType$ph* param_types_534;
struct list$1char$ph* param_names_535;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct buffer* all_alhabet_sname_536;
char* p_537;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
int i_538;
struct list$1sType$ph* o2_saved_539;
struct sType* it_540;
struct sType* param_type_541;
void* __right_value407 = (void*)0;
char* param_name_542;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* param_name_543;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* param_name_544;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct buffer* source3_545;
char* p_546;
char* head_547;
int sline_548;
struct buffer* __dec_obj76;
void* __right_value414 = (void*)0;
struct sNode* node_549;
_Bool Value_550;
_Bool __result_obj__329;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* method_block_name_551;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value2_552;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sFun* fun2_553;
void* __right_value421 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c5_556=0;
char* Err_557=0;
_Bool __result_obj__334;
struct sType* method_block_type2_558;
void* __right_value422 = (void*)0;
char* __dec_obj77;
void* __right_value423 = (void*)0;
struct sType* __dec_obj78;
struct buffer* __dec_obj79;
void* __right_value424 = (void*)0;
struct sType* __dec_obj80;
_Bool contained_method_generics_method_block_559;
struct list$1sType$ph* o2_saved_560;
struct sType* it_561;
void* __right_value425 = (void*)0;
_Bool __result_obj__336;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value388=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_515=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value388,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_517=node_compile(current_stack_frame_node_515,info);
    if(    !Value_517) {
        __result_obj__321 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__321;
    }
    else {
    }
    come_value_520=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_520));
    method_block2_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 133, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    method_block_type_522=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value395=list$1sType$ph$p_operator_load_element(fun->mParamTypes,-1)))));
    come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_526=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value398=list$1sType$ph$p_operator_load_element(method_block_type_522->mParamTypes,0)))->mClass=((struct sClass*)(__right_value399=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_526)));
    come_call_finalizer3(__right_value398,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value399,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_530=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value400=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_526)));
    come_call_finalizer3(__right_value400,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_522->mClass->mName,"lambda")) {
        multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value401=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c4_531=multiple_assign_var6->v1;
        Err_532=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        ((Err_532)?(puts(Err_532),exit(0)):(0));
        come_call_finalizer3(__right_value401,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__328 = (_Bool)0;
        (Err_532 = come_decrement_ref_count2(Err_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__328;
        (Err_532 = come_decrement_ref_count2(Err_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_533=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_522->mResultType));
    result_type_533->mStatic=(_Bool)0;
    param_types_534=method_block_type_522->mParamTypes;
    param_names_535=method_block_type_522->mParamNames;
    all_alhabet_sname_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 154, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    {
        p_537=info->sname;
        while(*p_537) {
            if(            xisalnum(*p_537)) {
                buffer_append_char(all_alhabet_sname_536,*p_537++);
            }
            else {
                p_537++;
            }
        }
    }
    buffer_append_format(method_block2_521,"%s method_block%d_%s(",((char*)(__right_value405=make_type_name_string(result_type_533,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value406=buffer_to_string(all_alhabet_sname_536))));
    (__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_538=0;
    for(    o2_saved_539=(param_types_534),it_540=list$1sType$ph$p_begin((o2_saved_539));    !list$1sType$ph$p_end((o2_saved_539));    it_540=list$1sType$ph$p_next((o2_saved_539))    ){
        param_type_541=it_540;
        if(        i_538==0) {
            param_name_542=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_521,"%s",((char*)(__right_value408=make_define_var(param_type_541,param_name_542,(_Bool)0,info))));
            (__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_542 = come_decrement_ref_count2(param_name_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_538==1) {
            param_name_543=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_521,"%s",((char*)(__right_value410=make_define_var_no_solved(param_type_541,param_name_543,(_Bool)0,(_Bool)0,info))));
            (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_543 = come_decrement_ref_count2(param_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_544=(char*)come_increment_ref_count(xsprintf("it%d",i_538));
            buffer_append_format(method_block2_521,"%s",((char*)(__right_value412=make_define_var_no_solved(param_type_541,param_name_544,(_Bool)0,(_Bool)0,info))));
            (__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_544 = come_decrement_ref_count2(param_name_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_538!=list$1sType$ph$p_length(param_types_534)-1) {
            buffer_append_str(method_block2_521,",");
        }
        i_538++;
    }
    buffer_append_str(method_block2_521,")\n");
    buffer_append_str(method_block2_521,((char*)(__right_value413=buffer_to_string(method_block))));
    (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_545=(struct buffer*)come_increment_ref_count(info->source);
    p_546=info->p;
    head_547=info->head;
    sline_548=info->sline;
    __dec_obj76=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_521);
    come_call_finalizer3(__dec_obj76,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_549=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_550=node_compile(node_549,info);
    if(    !Value_550) {
        __result_obj__329 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_549) ? node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__329;
    }
    else {
    }
    method_block_name_551=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value415=buffer_to_string(all_alhabet_sname_536)))));
    (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_552=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 219, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    fun2_553=((struct sFun*)(__right_value420=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value419=__builtin_string(method_block_name_551))),((void*)0))));
    (__right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value420,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_553==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value421=err_msg(info,"method block function not found(%s)",method_block_name_551)));
        come_exception_var_c5_556=multiple_assign_var7->v1;
        Err_557=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_557)?(puts(Err_557),exit(0)):(0));
        come_call_finalizer3(__right_value421,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__334 = (_Bool)1;
        (Err_557 = come_decrement_ref_count2(Err_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_549) ? node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_551 = come_decrement_ref_count2(method_block_name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__334;
        (Err_557 = come_decrement_ref_count2(Err_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_558=fun2_553->mLambdaType;
    __dec_obj77=come_value2_552->c_value;
    come_value2_552->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_551));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj78=come_value2_552->type;
    come_value2_552->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_558));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_552->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_552));
    __dec_obj79=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_545);
    come_call_finalizer3(__dec_obj79,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_546;
    info->head=head_547;
    info->sline=sline_548;
    info->current_stack_frame_struct=current_stack_frame_struct_530;
    __dec_obj80=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_559=(_Bool)0;
    for(    o2_saved_560=(param_types_534),it_561=list$1sType$ph$p_begin((o2_saved_560));    !list$1sType$ph$p_end((o2_saved_560));    it_561=list$1sType$ph$p_next((o2_saved_560))    ){
        if(        is_contained_method_generics_types(it_561,info)) {
            contained_method_generics_method_block_559=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_533,info)) {
        contained_method_generics_method_block_559=(_Bool)1;
    }
    if(    contained_method_generics_method_block_559) {
        map$2char$phsFun$ph$p_remove(info->funcs,((char*)(__right_value425=__builtin_string(method_block_name_551))));
        (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__336 = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_549) ? node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_551 = come_decrement_ref_count2(method_block_name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value2_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__336;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__319;
void* __right_value389 = (void*)0;
struct sCurrentNode* result_516;
void* __right_value390 = (void*)0;
char* __dec_obj75;
struct sCurrentNode* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = (void*)0;
        return __result_obj__319;
    }
    result_516=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_516->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj75=result_516->sname;
        result_516->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_516->sline_real=self->sline_real;
    }
    __result_obj__320 = result_516;
    come_call_finalizer3(result_516,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__320;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_518;
struct list_item$1CVALUE$ph* prev_it_519;
    it_518=self->head;
    while(it_518!=((void*)0)) {
        prev_it_519=it_518;
        it_518=it_518->next;
        come_call_finalizer3(prev_it_519,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_523;
int i_524;
struct sType* __result_obj__322;
struct sType* default_value_525;
struct sType* __result_obj__323;
default_value_525 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_523=self->head;
    i_524=0;
    while(it_523!=((void*)0)) {
        if(        position==i_524) {
            __result_obj__322 = come_increment_ref_count(it_523->item);
            come_call_finalizer3(__result_obj__322,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__322;
        }
        it_523=it_523->next;
        i_524++;
    }
    memset(&default_value_525,0,sizeof(struct sType*));
    __result_obj__323 = come_increment_ref_count(default_value_525);
    come_call_finalizer3(default_value_525,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__323,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__323;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_527;
unsigned int hash_528;
unsigned int it_529;
struct sClass* __result_obj__324;
struct sClass* __result_obj__325;
struct sClass* __result_obj__326;
struct sClass* __result_obj__327;
default_value_527 = (void*)0;
    memset(&default_value_527,0,sizeof(struct sClass*));
    hash_528=string_get_hash_key(((char*)key))%self->size;
    it_529=hash_528;
    while((_Bool)1) {
        if(        self->item_existance[it_529]) {
            if(            string_equals(self->keys[it_529],key)) {
                __result_obj__324 = come_increment_ref_count(self->items[it_529]);
                come_call_finalizer3(default_value_527,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__324,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__324;
            }
            it_529++;
            if(            it_529>=self->size) {
                it_529=0;
            }
            else if(            it_529==hash_528) {
                __result_obj__325 = come_increment_ref_count(default_value_527);
                come_call_finalizer3(default_value_527,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__325,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__325;
            }
        }
        else {
            __result_obj__326 = come_increment_ref_count(default_value_527);
            come_call_finalizer3(default_value_527,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__326,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__326;
        }
    }
    __result_obj__327 = come_increment_ref_count(default_value_527);
    come_call_finalizer3(default_value_527,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__327,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_554;
unsigned int it_555;
struct sFun* __result_obj__330;
struct sFun* __result_obj__331;
struct sFun* __result_obj__332;
struct sFun* __result_obj__333;
    hash_554=string_get_hash_key(((char*)key))%self->size;
    it_555=hash_554;
    while((_Bool)1) {
        if(        self->item_existance[it_555]) {
            if(            string_equals(self->keys[it_555],key)) {
                __result_obj__330 = come_increment_ref_count(self->items[it_555]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__330,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__330;
            }
            it_555++;
            if(            it_555>=self->size) {
                it_555=0;
            }
            else if(            it_555==hash_554) {
                __result_obj__331 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__331,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__331;
            }
        }
        else {
            __result_obj__332 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__332,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__332;
        }
    }
    __result_obj__333 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_562;
unsigned int it_563;
struct map$2char$phsFun$ph* __result_obj__335;
    hash_562=string_get_hash_key(((char*)key))%self->size;
    it_563=hash_562;
    while((_Bool)1) {
        if(        self->item_existance[it_563]) {
            if(            string_equals(self->keys[it_563],key)) {
                list$1char$p$p_remove(self->key_list,self->keys[it_563]);
                self->item_existance[it_563]=(_Bool)0;
                if(                1) {
                    (self->keys[it_563] = come_decrement_ref_count2(self->keys[it_563], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_563]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_563],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_563]=((void*)0);
                self->len--;
                break;
            }
            it_563++;
            if(            it_563>=self->size) {
                it_563=0;
            }
            else if(            it_563==hash_562) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__335 = self;
    return __result_obj__335;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value428 = (void*)0;
char* __dec_obj82;
void* __right_value439 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj88;
void* __right_value440 = (void*)0;
struct buffer* __dec_obj89;
void* __right_value441 = (void*)0;
struct list$1sType$ph* __dec_obj90;
struct sMethodCallNode* __result_obj__343;
    ((struct sNodeBase*)(__right_value426=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value426,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj81=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj82=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj88=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj88,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj89=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj89,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj90=self->method_generics_types;
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_generics_types));
    come_call_finalizer3(__dec_obj90,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result_obj__343 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__343,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__343;
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
void* __right_value442 = (void*)0;
char* __result_obj__344;
    __result_obj__344 = come_increment_ref_count(((char*)(__right_value442=__builtin_string("sMethodCallNode"))));
    (__right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__344 = come_decrement_ref_count2(__result_obj__344, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__344;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_574;
struct list$1tuple2$2char$phsNode$ph$ph* params_575;
struct sNode* obj_576;
struct buffer* method_block_577;
int method_block_sline_578;
_Bool no_infference_method_generics_579;
struct list$1sType$ph* method_generics_types_580;
_Bool recursive_581;
struct list$1sType$ph* method_generics_types_before_582;
struct list$1sType$ph* __dec_obj91;
void* __right_value443 = (void*)0;
struct list$1sType$ph* __dec_obj92;
_Bool Value_583;
_Bool __result_obj__345;
void* __right_value444 = (void*)0;
struct CVALUE* obj_value_584;
void* __right_value445 = (void*)0;
struct sType* obj_type_585;
_Bool no_output_come_code_586;
struct sType* type_587;
void* __right_value446 = (void*)0;
char* none_generics_name_588;
void* __right_value447 = (void*)0;
char* fun_name2_589;
void* __right_value448 = (void*)0;
char* fun_name3_590;
void* __right_value449 = (void*)0;
struct sGenericsFun* generics_fun_591;
_Bool method_generics_592;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_593=0;
struct sGenericsFun* gfun_594=0;
char* generics_fun_name_595;
void* __right_value452 = (void*)0;
struct sFun* fun_596;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1CVALUE$ph* come_params_597;
_Bool no_output_come_code_598;
_Bool __result_obj__347;
void* __right_value455 = (void*)0;
struct CVALUE* method_block_node_599;
void* __right_value456 = (void*)0;
struct sType* method_block_lambda_type_603;
void* __right_value457 = (void*)0;
struct sType* method_block_result_type_604;
void* __right_value458 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_605;
struct sType* generics_fun_method_block_result_type_606;
int method_generics_num_607;
void* __right_value459 = (void*)0;
int n_608;
struct list$1sType$ph* o2_saved_609;
struct sType* it_610;
int method_generics_num_611;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1CVALUE$ph* come_params_612;
int i_613;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_614;
struct tuple2$2char$phsNode$ph* it_617;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_620=0;
struct sNode* node_621=0;
_Bool Value_622;
_Bool __result_obj__356;
void* __right_value464 = (void*)0;
struct CVALUE* come_value_623;
int method_generics_num_624;
_Bool generics_any_child_625;
struct sType* obj_type2_626;
struct sType* __dec_obj93;
struct list$1sType$ph* o2_saved_627;
struct sType* it_628;
void* __right_value465 = (void*)0;
struct list$1sType$ph* o2_saved_629;
struct sType* it_630;
int method_generics_num_631;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1CVALUE$ph* come_params_632;
int i_633;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_634;
struct tuple2$2char$phsNode$ph* it_635;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_636=0;
struct sNode* node_637=0;
_Bool Value_638;
_Bool __result_obj__357;
void* __right_value470 = (void*)0;
struct CVALUE* come_value_639;
int method_generics_num_640;
void* __right_value471 = (void*)0;
int n_641;
struct list$1sType$ph* o2_saved_642;
struct sType* it_643;
int method_generics_num_644;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sClass* klass_645;
_Bool calling_dynamic_method_646;
struct sType* lambda_type_647;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_648;
struct tuple2$2char$phsType$ph* it_651;
struct tuple2$2char$phsType$ph* multiple_assign_var11 = (void*)0;
char* field_name_654=0;
struct sType* field_type_655=0;
void* __right_value474 = (void*)0;
struct sType* result_type_656;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1CVALUE$ph* come_params_657;
int i_658;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_659;
struct tuple2$2char$phsNode$ph* it_660;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_661=0;
struct sNode* node_662=0;
_Bool Value_663;
_Bool __result_obj__364;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_664;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_1_665=0;
char* Err_666=0;
_Bool _if_conditional2;
_Bool __result_obj__365;
void* __right_value483 = (void*)0;
_Bool _if_conditional3;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct buffer* buf_667;
int j_668;
struct list$1CVALUE$ph* o2_saved_669;
struct CVALUE* it_672;
void* __right_value487 = (void*)0;
char* __dec_obj94;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value2_675;
void* __right_value490 = (void*)0;
char* __dec_obj95;
void* __right_value491 = (void*)0;
struct sType* result_type2_676;
void* __right_value492 = (void*)0;
struct sType* __dec_obj96;
struct list$1sType$ph* __dec_obj97;
struct sGenericsFun* generics_fun_677;
char* generics_fun_name_678;
struct sFun* fun_679;
void* __right_value493 = (void*)0;
char* __dec_obj98;
struct sClass* klass_680;
void* __right_value494 = (void*)0;
_Bool _while_condtional1;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* __dec_obj99;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var14 = (void*)0;
char* name_681=0;
struct sGenericsFun* gfun_682=0;
char* __dec_obj100;
void* __right_value501 = (void*)0;
char* none_generics_name_683;
void* __right_value502 = (void*)0;
char* fun_name3_684;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var15 = (void*)0;
char* name_685=0;
struct sGenericsFun* gfun_686=0;
char* __dec_obj101;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_687=0;
struct sGenericsFun* gfun_688=0;
char* __dec_obj102;
int i_689;
void* __right_value507 = (void*)0;
char* new_fun_name_690;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
char* __dec_obj103;
struct sType* obj_array_type_694;
void* __right_value511 = (void*)0;
char* array_method_name_695;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* __dec_obj104;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* __dec_obj105;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_2_696=0;
char* Err_697=0;
_Bool _if_conditional4;
_Bool __result_obj__376;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
char* __dec_obj106;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sClass* klass_698;
void* __right_value528 = (void*)0;
_Bool _while_condtional2;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj107;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var18 = (void*)0;
struct sFun* fun2_699=0;
char* real_fun_name_700=0;
char* __dec_obj108;
void* __right_value534 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var19 = (void*)0;
struct sFun* fun2_701=0;
char* real_fun_name_702=0;
char* __dec_obj109;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
char* original_obj_type_fun_name_703;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
char* __dec_obj110;
void* __right_value539 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_3_704=0;
char* Err_705=0;
_Bool _if_conditional5;
_Bool __result_obj__377;
void* __right_value540 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_4_706=0;
char* Err_707=0;
_Bool _if_conditional6;
_Bool __result_obj__378;
void* __right_value541 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_5_708=0;
char* Err_709=0;
_Bool _if_conditional7;
_Bool __result_obj__379;
void* __right_value542 = (void*)0;
struct sType* result_type_710;
_Bool in_exception_value_711;
void* __right_value550 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sNode* new_node_712;
_Bool Value_714;
_Bool __result_obj__382;
_Bool __result_obj__383;
_Bool in_exception_value_715;
void* __right_value553 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* new_node_716;
_Bool Value_717;
_Bool __result_obj__384;
_Bool __result_obj__385;
void* __right_value556 = (void*)0;
struct sType* result_type2_718;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1sType$ph* param_types_719;
struct list$1sType$ph* o2_saved_720;
struct sType* it_721;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* it2_722;
struct sType* no_solved_obj_type_723;
void* __right_value561 = (void*)0;
struct sType* it3_724;
void* __right_value562 = (void*)0;
struct sType* any_type_725;
void* __right_value563 = (void*)0;
struct list$1sType$ph* type_checking_param_types_726;
int n_727;
struct list$1sType$ph* o2_saved_728;
struct sType* it_729;
struct sType* no_solved_obj_type_730;
void* __right_value564 = (void*)0;
struct sType* it3_731;
void* __right_value565 = (void*)0;
struct sType* any_type_732;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
_Bool _if_conditional8;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1CVALUE$ph* come_params_733;
int i_734;
_Bool first_param_738;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_739;
struct tuple2$2char$phsNode$ph* it_740;
struct tuple2$2char$phsNode$ph* multiple_assign_var23 = (void*)0;
char* label_741=0;
struct sNode* node_742=0;
int n_743;
struct list$1char$ph* o2_saved_744;
char* it_747;
_Bool Value_750;
_Bool __result_obj__393;
void* __right_value573 = (void*)0;
struct CVALUE* come_value_751;
void* __right_value574 = (void*)0;
_Bool _if_conditional9;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_6_752=0;
char* Err_753=0;
_Bool _if_conditional10;
_Bool __result_obj__394;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
_Bool _if_conditional11;
void* __right_value582 = (void*)0;
int i_759;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_760;
struct tuple2$2char$phsNode$ph* it_761;
struct tuple2$2char$phsNode$ph* multiple_assign_var25 = (void*)0;
char* label_762=0;
struct sNode* node_763=0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_7_764=0;
char* Err_765=0;
_Bool _if_conditional12;
_Bool __result_obj__397;
void* __right_value588 = (void*)0;
_Bool _if_conditional13;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
_Bool _elif_conditional1;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_8_769=0;
char* Err_770=0;
_Bool _if_conditional14;
_Bool __result_obj__400;
void* __right_value593 = (void*)0;
_Bool _if_conditional15;
_Bool Value_771;
_Bool __result_obj__401;
void* __right_value594 = (void*)0;
struct CVALUE* come_value_772;
void* __right_value595 = (void*)0;
_Bool _if_conditional16;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_9_773=0;
char* Err_774=0;
_Bool _if_conditional17;
_Bool __result_obj__402;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
_Bool _if_conditional18;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
_Bool _if_conditional19;
struct sType* obj_array_type_775;
void* __right_value605 = (void*)0;
char* array_method_name_776;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct buffer* buf_777;
int i_778;
struct list$1sNode$ph* o2_saved_779;
struct sNode* it_782;
_Bool Value_785;
void* __right_value608 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_10_786=0;
char* Err_787=0;
_Bool _if_conditional20;
_Bool __result_obj__409;
void* __right_value609 = (void*)0;
struct CVALUE* come_value_788;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct CVALUE* come_value_789;
void* __right_value612 = (void*)0;
char* __dec_obj121;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj122;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct buffer* buf_793;
int i_794;
struct list$1sNode$ph* o2_saved_795;
struct sNode* it_796;
_Bool Value_797;
void* __right_value624 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_11_798=0;
char* Err_799=0;
_Bool _if_conditional21;
_Bool __result_obj__411;
void* __right_value625 = (void*)0;
struct CVALUE* come_value_800;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct CVALUE* come_value_801;
void* __right_value628 = (void*)0;
char* __dec_obj126;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sType* __dec_obj127;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct buffer* buf_802;
int i_803;
struct list$1sNode$ph* o2_saved_804;
struct sNode* it_805;
_Bool Value_806;
void* __right_value637 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_12_807=0;
char* Err_808=0;
_Bool _if_conditional22;
_Bool __result_obj__412;
void* __right_value638 = (void*)0;
struct CVALUE* come_value_809;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct CVALUE* come_value_810;
void* __right_value641 = (void*)0;
char* __dec_obj128;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* __dec_obj129;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct buffer* buf_811;
int i_812;
struct list$1sNode$ph* o2_saved_813;
struct sNode* it_814;
_Bool Value_815;
void* __right_value650 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_13_816=0;
char* Err_817=0;
_Bool _if_conditional23;
_Bool __result_obj__413;
void* __right_value651 = (void*)0;
struct CVALUE* come_value_818;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct CVALUE* come_value_819;
void* __right_value654 = (void*)0;
char* __dec_obj130;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* __dec_obj131;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct buffer* buf_820;
int i_821;
struct list$1sNode$ph* o2_saved_822;
struct sNode* it_823;
_Bool Value_824;
void* __right_value663 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_14_825=0;
char* Err_826=0;
_Bool _if_conditional24;
_Bool __result_obj__414;
void* __right_value664 = (void*)0;
struct CVALUE* come_value_827;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct CVALUE* come_value_828;
void* __right_value667 = (void*)0;
char* __dec_obj132;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* __dec_obj133;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
char* default_param_829;
void* __right_value676 = (void*)0;
char* param_name_830;
void* __right_value677 = (void*)0;
_Bool _if_conditional25;
struct buffer* source_831;
char* p_832;
char* head_833;
int sline_834;
void* __right_value678 = (void*)0;
struct buffer* __dec_obj134;
void* __right_value679 = (void*)0;
struct sNode* node_835;
_Bool Value_836;
_Bool __result_obj__415;
struct buffer* __dec_obj135;
void* __right_value680 = (void*)0;
struct CVALUE* come_value_837;
void* __right_value681 = (void*)0;
_Bool _if_conditional26;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var34 = (void*)0;
_Bool come_exception_var_15_838=0;
char* Err_839=0;
_Bool _if_conditional27;
_Bool __result_obj__416;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
_Bool _if_conditional28;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
_Bool _if_conditional29;
void* __right_value691 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_16_840=0;
char* Err_841=0;
_Bool _if_conditional30;
_Bool __result_obj__417;
_Bool __result_obj__418;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* buf_842;
int j_843;
struct list$1CVALUE$ph* o2_saved_844;
struct CVALUE* it_845;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct CVALUE* come_value2_846;
void* __right_value696 = (void*)0;
char* __dec_obj136;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sType* __dec_obj137;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
char* __dec_obj138;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sType* __dec_obj139;
void* __right_value705 = (void*)0;
char* __dec_obj140;
_Bool generics_any_child_847;
struct sType* obj_type2_848;
struct sType* __dec_obj141;
struct list$1sType$ph* o2_saved_849;
struct sType* it_850;
struct sType* obj_type2_851;
void* __right_value706 = (void*)0;
struct sType* __dec_obj142;
void* __right_value707 = (void*)0;
struct sType* __dec_obj143;
void* __right_value708 = (void*)0;
struct sType* __dec_obj144;
void* __right_value709 = (void*)0;
struct sType* __dec_obj145;
void* __right_value710 = (void*)0;
struct sType* __dec_obj146;
void* __right_value711 = (void*)0;
char* __dec_obj147;
void* __right_value712 = (void*)0;
struct CVALUE* __dec_obj148;
void* __right_value713 = (void*)0;
struct list$1sType$ph* __dec_obj149;
_Bool __result_obj__419;
    fun_name_574=(char*)come_increment_ref_count(self->fun_name);
    params_575=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_576=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_577=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_578=self->method_block_sline;
    no_infference_method_generics_579=self->no_infference_method_generics;
    method_generics_types_580=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_581=self->recursive;
    method_generics_types_before_582=((void*)0);
    __dec_obj91=method_generics_types_before_582;
    method_generics_types_before_582=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj91,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj92=info->method_generics_types;
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj92,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_583=node_compile(obj_576,info);
    if(    !Value_583) {
        __result_obj__345 = (_Bool)0;
        (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__345;
    }
    else {
    }
    obj_value_584=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_585=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_584->type));
    if(    !no_infference_method_generics_579) {
        no_output_come_code_586=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_587=(struct sType*)come_increment_ref_count(obj_type_585);
        none_generics_name_588=(char*)come_increment_ref_count(get_none_generics_name(type_587->mClass->mName));
        fun_name2_589=(char*)come_increment_ref_count(create_method_name(type_587,(_Bool)0,fun_name_574,info,(_Bool)1));
        fun_name3_590=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_588,fun_name_574));
        generics_fun_591=((struct sGenericsFun*)(__right_value449=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_590,((void*)0))));
        come_call_finalizer3(__right_value449,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_591) {
            method_generics_592=list$1char$ph$p_length(generics_fun_591->mMethodGenericsTypeNames)>0;
            if(            method_generics_592&&list$1sType$ph$p_length(info->method_generics_types)==0) {
                multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value451=make_generics_function(obj_type_585,(char*)come_increment_ref_count(__builtin_string(fun_name_574)),info,(_Bool)1)));
                name_593=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_594=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value451,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_595=(char*)come_increment_ref_count(name_593);
                fun_596=((struct sFun*)(__right_value452=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_595,((void*)0))));
                come_call_finalizer3(__right_value452,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_597=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 352, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                method_block_577) {
                    no_output_come_code_598=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_577,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_597),fun_596,fun_name3_590,method_block_sline_578,info,(_Bool)1)) {
                        __result_obj__347 = (_Bool)0;
                        (name_593 = come_decrement_ref_count2(name_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_595 = come_decrement_ref_count2(generics_fun_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_params_597,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (none_generics_name_588 = come_decrement_ref_count2(none_generics_name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_589 = come_decrement_ref_count2(fun_name2_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_590 = come_decrement_ref_count2(fun_name3_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__347;
                    }
                    info->no_output_come_code=no_output_come_code_598;
                    method_block_node_599=((struct CVALUE*)(__right_value455=list$1CVALUE$ph$p_operator_load_element(come_params_597,-1)));
                    come_call_finalizer3(__right_value455,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_603=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_599->type));
                    method_block_result_type_604=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_605=((struct sType*)(__right_value458=list$1sType$ph$p_operator_load_element(generics_fun_591->mParamTypes,-1)));
                    come_call_finalizer3(__right_value458,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_606=generics_fun_method_block_lambda_type_605->mResultType;
                    if(                    generics_fun_method_block_result_type_606->mClass->mMethodGenerics) {
                        method_generics_num_607=generics_fun_method_block_result_type_606->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_607,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_604)));
                    }
                    n_608=0;
                    for(                    o2_saved_609=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_605->mParamTypes)),it_610=list$1sType$ph$p_begin((o2_saved_609));                    !list$1sType$ph$p_end((o2_saved_609));                    it_610=list$1sType$ph$p_next((o2_saved_609))                    ){
                        if(                        it_610->mClass->mMethodGenerics) {
                            method_generics_num_611=it_610->mClass->mMethodGenericsNum;
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_611,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value460=list$1sType$ph$p_operator_load_element(method_block_lambda_type_603->mParamTypes,n_608))))));
                            come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_608++;
                    }
                    come_call_finalizer3(o2_saved_609,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_612=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 381, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_613=0;
                    for(                    o2_saved_614=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_575)),it_617=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_614));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_614));                    it_617=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_614))                    ){
                        multiple_assign_var9=it_617;
                        label_620=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_621=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_613==0) {
                            list$1CVALUE$ph$p_push_back(come_params_612,(struct CVALUE*)come_increment_ref_count(obj_value_584));
                            i_613++;
                        }
                        else {
                            Value_622=node_compile(node_621,info);
                            if(                            !Value_622) {
                                __result_obj__356 = (_Bool)0;
                                (label_620 = come_decrement_ref_count2(label_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_621) ? node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_614,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_593 = come_decrement_ref_count2(name_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_595 = come_decrement_ref_count2(generics_fun_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_597,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_588 = come_decrement_ref_count2(none_generics_name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_589 = come_decrement_ref_count2(fun_name2_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_590 = come_decrement_ref_count2(fun_name3_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__356;
                            }
                            else {
                            }
                            come_value_623=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            list$1CVALUE$ph$p_push_back(come_params_612,(struct CVALUE*)come_increment_ref_count(come_value_623));
                            come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_620 = come_decrement_ref_count2(label_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_621) ? node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_614,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_591->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_624=generics_fun_591->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            generics_any_child_625=(_Bool)0;
                            obj_type2_626=(struct sType*)come_increment_ref_count(obj_type_585);
                            if(                            obj_type2_626->mNoSolvedGenericsType) {
                                __dec_obj93=obj_type2_626;
                                obj_type2_626=(struct sType*)come_increment_ref_count(obj_type2_626->mNoSolvedGenericsType);
                                come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                                for(                                o2_saved_627=(struct list$1sType$ph*)come_increment_ref_count((obj_type2_626->mGenericsTypes)),it_628=list$1sType$ph$p_begin((o2_saved_627));                                !list$1sType$ph$p_end((o2_saved_627));                                it_628=list$1sType$ph$p_next((o2_saved_627))                                ){
                                    if(                                    it_628->mAnyOriginalType) {
                                        generics_any_child_625=(_Bool)1;
                                    }
                                }
                                come_call_finalizer3(o2_saved_627,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_624,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                            come_call_finalizer3(obj_type2_626,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    n_608=0;
                    for(                    o2_saved_629=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_591->mParamTypes)),it_630=list$1sType$ph$p_begin((o2_saved_629));                    !list$1sType$ph$p_end((o2_saved_629));                    it_630=list$1sType$ph$p_next((o2_saved_629))                    ){
                        if(                        it_630->mClass->mMethodGenerics) {
                            method_generics_num_631=it_630->mClass->mMethodGenericsNum;
                            if(                            n_608<list$1CVALUE$ph$p_length(come_params_612)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_631,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value466=list$1CVALUE$ph$p_operator_load_element(come_params_612,n_608)))->type)));
                                come_call_finalizer3(__right_value466,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_608++;
                    }
                    come_call_finalizer3(o2_saved_629,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_632=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 430, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_633=0;
                    for(                    o2_saved_634=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_575)),it_635=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_634));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_634));                    it_635=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_634))                    ){
                        multiple_assign_var10=it_635;
                        label_636=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                        node_637=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
                        if(                        i_633==0) {
                            list$1CVALUE$ph$p_push_back(come_params_632,(struct CVALUE*)come_increment_ref_count(obj_value_584));
                            i_633++;
                        }
                        else {
                            Value_638=node_compile(node_637,info);
                            if(                            !Value_638) {
                                __result_obj__357 = (_Bool)0;
                                (label_636 = come_decrement_ref_count2(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_637) ? node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_632,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_593 = come_decrement_ref_count2(name_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_595 = come_decrement_ref_count2(generics_fun_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_597,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_588 = come_decrement_ref_count2(none_generics_name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_589 = come_decrement_ref_count2(fun_name2_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_590 = come_decrement_ref_count2(fun_name3_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__357;
                            }
                            else {
                            }
                            come_value_639=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            list$1CVALUE$ph$p_push_back(come_params_632,(struct CVALUE*)come_increment_ref_count(come_value_639));
                            come_call_finalizer3(come_value_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_636 = come_decrement_ref_count2(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_637) ? node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_591->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_640=generics_fun_591->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_640,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_641=0;
                    for(                    o2_saved_642=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_591->mParamTypes)),it_643=list$1sType$ph$p_begin((o2_saved_642));                    !list$1sType$ph$p_end((o2_saved_642));                    it_643=list$1sType$ph$p_next((o2_saved_642))                    ){
                        if(                        it_643->mClass->mMethodGenerics) {
                            method_generics_num_644=it_643->mClass->mMethodGenericsNum;
                            if(                            n_641<list$1CVALUE$ph$p_length(come_params_632)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_644,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value472=list$1CVALUE$ph$p_operator_load_element(come_params_632,n_641)))->type)));
                                come_call_finalizer3(__right_value472,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_641++;
                    }
                    come_call_finalizer3(o2_saved_642,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_632,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2char$phsFun$ph$p_remove(info->funcs,generics_fun_name_595);
                (name_593 = come_decrement_ref_count2(name_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_595 = come_decrement_ref_count2(generics_fun_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_params_597,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_586;
        come_call_finalizer3(type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
        (none_generics_name_588 = come_decrement_ref_count2(none_generics_name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_589 = come_decrement_ref_count2(fun_name2_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_590 = come_decrement_ref_count2(fun_name3_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_645=obj_type_585->mClass;
    calling_dynamic_method_646=(_Bool)0;
    lambda_type_647=((void*)0);
    for(    o2_saved_648=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_645->mFields)),it_651=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_648));    !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_648));    it_651=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_648))    ){
        multiple_assign_var11=it_651;
        field_name_654=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        field_type_655=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        string_operator_equals(field_name_654,fun_name_574)&&string_operator_equals(field_type_655->mClass->mName,"lambda")) {
            calling_dynamic_method_646=(_Bool)1;
            lambda_type_647=field_type_655;
            (field_name_654 = come_decrement_ref_count2(field_name_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        (field_name_654 = come_decrement_ref_count2(field_name_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_648,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_646) {
        result_type_656=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_647->mResultType));
        result_type_656->mStatic=(_Bool)0;
        come_params_657=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 492, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_658=0;
        for(        o2_saved_659=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_575)),it_660=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_659));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_659));        it_660=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_659))        ){
            multiple_assign_var12=it_660;
            label_661=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_662=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            i_658==0) {
                list$1CVALUE$ph$p_push_back(come_params_657,(struct CVALUE*)come_increment_ref_count(obj_value_584));
                i_658++;
            }
            else {
                Value_663=node_compile(node_662,info);
                if(                !Value_663) {
                    __result_obj__364 = (_Bool)0;
                    (label_661 = come_decrement_ref_count2(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_662) ? node_662 = come_decrement_ref_count2(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_657,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__364;
                }
                else {
                }
                come_value_664=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value482=check_assign_type(((char*)(__right_value480=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value478=string_to_string(fun_name_574))),((char*)(__right_value479=int_to_string(i_658)))))),((struct sType*)(__right_value481=list$1sType$ph$p_operator_load_element(lambda_type_647->mParamTypes,i_658-1))),come_value_664->type,come_value_664,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_1_665=multiple_assign_var13->v1;
                Err_666=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                (_if_conditional2=(Err_666)),                (__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value482,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result_obj__365 = (_Bool)1;
                    come_call_finalizer3(come_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_666 = come_decrement_ref_count2(Err_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_661 = come_decrement_ref_count2(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_662) ? node_662 = come_decrement_ref_count2(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_657,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__365;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)(__right_value483=list$1sType$ph$p_operator_load_element(lambda_type_647->mParamTypes,i_658-1)))->mHeap&&come_value_664->type->mHeap)),                come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)(__right_value484=list$1sType$ph$p_operator_load_element(lambda_type_647->mParamTypes,i_658-1))),come_value_664->type,come_value_664,info,(_Bool)1);
                    come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_push_back(come_params_657,(struct CVALUE*)come_increment_ref_count(come_value_664));
                i_658++;
                come_call_finalizer3(come_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_666 = come_decrement_ref_count2(Err_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_661 = come_decrement_ref_count2(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_662) ? node_662 = come_decrement_ref_count2(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buf_667=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 523, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_format(buf_667,"%s->%s",obj_value_584->c_value,fun_name_574);
        buffer_append_str(buf_667,"(");
        j_668=0;
        for(        o2_saved_669=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_657)),it_672=list$1CVALUE$ph$p_begin((o2_saved_669));        !list$1CVALUE$ph$p_end((o2_saved_669));        it_672=list$1CVALUE$ph$p_next((o2_saved_669))        ){
            if(            j_668==0) {
                __dec_obj94=it_672->c_value;
                it_672->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_672->c_value));
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_667,it_672->c_value);
            if(            j_668!=list$1CVALUE$ph$p_length(come_params_657)-1) {
                buffer_append_str(buf_667,",");
            }
            j_668++;
        }
        come_call_finalizer3(o2_saved_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_667,")");
        come_value2_675=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 543, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj95=come_value2_675->c_value;
        come_value2_675->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_667));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_676=(struct sType*)come_increment_ref_count(solve_generics(result_type_656,info->generics_type,info));
        __dec_obj96=come_value2_675->type;
        come_value2_675->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_676));
        come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_675->type->mStatic=(_Bool)0;
        come_value2_675->var=((void*)0);
        if(        result_type2_676->mHeap) {
            append_object_to_right_values2(come_value2_675,(struct sType*)come_increment_ref_count(result_type2_676),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_675->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_675));
        come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj97=info->method_generics_types;
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_582);
        come_call_finalizer3(__dec_obj97,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_657,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_667,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_676,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_677=((void*)0);
        generics_fun_name_678=((void*)0);
        fun_679=((void*)0);
        if(        string_operator_equals(fun_name_574,"super")) {
            __dec_obj98=fun_name_574;
            fun_name_574=(char*)come_increment_ref_count(create_non_method_name(obj_type_585,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_680=obj_type_585->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value494=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_680->mParentClassName))))),            come_call_finalizer3(__right_value494,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_680=((struct sClass*)(__right_value495=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_680->mParentClassName)));
                come_call_finalizer3(__right_value495,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj99=generics_fun_name_678;
                generics_fun_name_678=(char*)come_increment_ref_count(create_method_name_using_class(klass_680,(_Bool)0,fun_name_574,info,(_Bool)1));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_679=((struct sFun*)(__right_value498=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value497=__builtin_string(generics_fun_name_678))),((void*)0))));
                (__right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value498,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_679) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_585&&obj_type_585->mNoSolvedGenericsType&&list$1sType$ph$p_length(obj_type_585->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var14=((struct tuple2$2char$phsGenericsFun$p*)(__right_value500=make_generics_function(obj_type_585,(char*)come_increment_ref_count(__builtin_string(fun_name_574)),info,(_Bool)1)));
                name_681=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_682=multiple_assign_var14->v2;
                come_call_finalizer3(__right_value500,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj100=generics_fun_name_678;
                generics_fun_name_678=(char*)come_increment_ref_count(name_681);
                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_677=gfun_682;
                (name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1sType$ph$p_length(info->method_generics_types)>0) {
                none_generics_name_683=(char*)come_increment_ref_count(get_none_generics_name(obj_type_585->mClass->mName));
                fun_name3_684=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_683,fun_name_574));
                multiple_assign_var15=((struct tuple2$2char$phsGenericsFun$p*)(__right_value504=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_684)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_685=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                gfun_686=multiple_assign_var15->v2;
                come_call_finalizer3(__right_value504,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj101=generics_fun_name_678;
                generics_fun_name_678=(char*)come_increment_ref_count(name_685);
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_677=gfun_686;
                (none_generics_name_683 = come_decrement_ref_count2(none_generics_name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_684 = come_decrement_ref_count2(fun_name3_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_685 = come_decrement_ref_count2(name_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value506=make_generics_function(obj_type_585,(char*)come_increment_ref_count(__builtin_string(fun_name_574)),info,(_Bool)1)));
                name_687=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                gfun_688=multiple_assign_var16->v2;
                come_call_finalizer3(__right_value506,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj102=generics_fun_name_678;
                generics_fun_name_678=(char*)come_increment_ref_count(name_687);
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_677=gfun_688;
                (name_687 = come_decrement_ref_count2(name_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_689=128;            i_689>=1;            i_689--            ){
                new_fun_name_690=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_678,i_689));
                fun_679=((struct sFun*)(__right_value509=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value508=__builtin_string(new_fun_name_690))))));
                (__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value509,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_679!=((void*)0)) {
                    __dec_obj103=generics_fun_name_678;
                    generics_fun_name_678=(char*)come_increment_ref_count(__builtin_string(new_fun_name_690));
                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_690 = come_decrement_ref_count2(new_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_690 = come_decrement_ref_count2(new_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_679==((void*)0)) {
                obj_array_type_694=obj_type_585->mOriginalLoadVarType;
                if(                obj_array_type_694&&list$1sNode$ph$p_length(obj_array_type_694->mArrayNum)>0) {
                    array_method_name_695=(char*)come_increment_ref_count(create_method_name(obj_array_type_694,(_Bool)0,fun_name_574,info,(_Bool)0));
                    fun_679=((struct sFun*)(__right_value513=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value512=__builtin_string(array_method_name_695))),((void*)0))));
                    (__right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value513,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_679) {
                        __dec_obj104=generics_fun_name_678;
                        generics_fun_name_678=(char*)come_increment_ref_count(__builtin_string(array_method_name_695));
                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_679=((struct sFun*)(__right_value516=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value515=__builtin_string(generics_fun_name_678))),((void*)0))));
                        (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value516,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_679==((void*)0)) {
                            __dec_obj105=generics_fun_name_678;
                            generics_fun_name_678=(char*)come_increment_ref_count(create_method_name(obj_type_585,(_Bool)0,((char*)(__right_value517=__builtin_string(fun_name_574))),info,(_Bool)1));
                            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_679=((struct sFun*)(__right_value520=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value519=__builtin_string(generics_fun_name_678))),((void*)0))));
                            (__right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value520,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_679==((void*)0)) {
                                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value521=err_msg(info,"function not found(%s) at method(%s)(Z1)",generics_fun_name_678,info->come_fun->mName)));
                                come_exception_var_2_696=multiple_assign_var17->v1;
                                Err_697=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                                if(                                (_if_conditional4=(Err_697)),                                come_call_finalizer3(__right_value521,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional4) {
                                    __result_obj__376 = (_Bool)1;
                                    (Err_697 = come_decrement_ref_count2(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_695 = come_decrement_ref_count2(array_method_name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__376;
                                }
                                else {
                                }
                                (Err_697 = come_decrement_ref_count2(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_695 = come_decrement_ref_count2(array_method_name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_679=((struct sFun*)(__right_value523=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value522=__builtin_string(generics_fun_name_678))),((void*)0))));
                    (__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value523,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_679==((void*)0)) {
                        __dec_obj106=generics_fun_name_678;
                        generics_fun_name_678=(char*)come_increment_ref_count(create_method_name(obj_type_585,(_Bool)0,((char*)(__right_value524=__builtin_string(fun_name_574))),info,(_Bool)1));
                        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                        (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_679=((struct sFun*)(__right_value527=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value526=__builtin_string(generics_fun_name_678))),((void*)0))));
                        (__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value527,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_679==((void*)0)) {
                            klass_698=obj_type_585->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value528=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_698->mParentClassName))))),                            come_call_finalizer3(__right_value528,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_698=((struct sClass*)(__right_value529=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_698->mParentClassName)));
                                come_call_finalizer3(__right_value529,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj107=generics_fun_name_678;
                                generics_fun_name_678=(char*)come_increment_ref_count(create_method_name_using_class(klass_698,(_Bool)0,fun_name_574,info,(_Bool)1));
                                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_679=((struct sFun*)(__right_value532=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value531=__builtin_string(generics_fun_name_678))),((void*)0))));
                                (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(__right_value532,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_679) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_679==((void*)0)&&string_operator_equals(fun_name_574,"to_string")) {
                            multiple_assign_var18=((struct tuple2$2sFun$pchar$ph*)(__right_value533=create_to_string_automatically(obj_type_585,fun_name_574,info)));
                            fun2_699=multiple_assign_var18->v1;
                            real_fun_name_700=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            come_call_finalizer3(__right_value533,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_679=fun2_699;
                            __dec_obj108=generics_fun_name_678;
                            generics_fun_name_678=(char*)come_increment_ref_count(real_fun_name_700);
                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_700 = come_decrement_ref_count2(real_fun_name_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_679==((void*)0)&&string_operator_equals(fun_name_574,"equals")) {
                            multiple_assign_var19=((struct tuple2$2sFun$pchar$ph*)(__right_value534=create_equals_automatically(obj_type_585,fun_name_574,info)));
                            fun2_701=multiple_assign_var19->v1;
                            real_fun_name_702=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                            come_call_finalizer3(__right_value534,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_679=fun2_701;
                            __dec_obj109=generics_fun_name_678;
                            generics_fun_name_678=(char*)come_increment_ref_count(real_fun_name_702);
                            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_702 = come_decrement_ref_count2(real_fun_name_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_679==((void*)0)) {
                            original_obj_type_fun_name_703=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_585,(_Bool)0,((char*)(__right_value535=__builtin_string(fun_name_574))),info,(_Bool)1));
                            (__right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_679=((struct sFun*)(__right_value538=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value537=__builtin_string(original_obj_type_fun_name_703))),((void*)0))));
                            (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value538,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_679) {
                                __dec_obj110=generics_fun_name_678;
                                generics_fun_name_678=(char*)come_increment_ref_count(original_obj_type_fun_name_703);
                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            (original_obj_type_fun_name_703 = come_decrement_ref_count2(original_obj_type_fun_name_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_679==((void*)0)) {
                            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value539=err_msg(info,"function not found(%s) at method(%s)(Z2n)",generics_fun_name_678,info->come_fun->mName)));
                            come_exception_var_3_704=multiple_assign_var20->v1;
                            Err_705=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            if(                            (_if_conditional5=(Err_705)),                            come_call_finalizer3(__right_value539,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional5) {
                                __result_obj__377 = (_Bool)1;
                                (Err_705 = come_decrement_ref_count2(Err_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__377;
                            }
                            else {
                            }
                            (Err_705 = come_decrement_ref_count2(Err_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_679==((void*)0)) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value540=err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_678,info->come_fun->mName)));
            come_exception_var_4_706=multiple_assign_var21->v1;
            Err_707=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional6=(Err_707)),            come_call_finalizer3(__right_value540,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__378 = (_Bool)1;
                (Err_707 = come_decrement_ref_count2(Err_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__378;
            }
            else {
            }
            (Err_707 = come_decrement_ref_count2(Err_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph$p_length(fun_679->mParamTypes)==0) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value541=err_msg(info,"Method require function parametor")));
            come_exception_var_5_708=multiple_assign_var22->v1;
            Err_709=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional7=(Err_709)),            come_call_finalizer3(__right_value541,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result_obj__379 = (_Bool)1;
                (Err_709 = come_decrement_ref_count2(Err_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__379;
            }
            else {
            }
            (Err_709 = come_decrement_ref_count2(Err_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_710=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_679->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_710->mException&&!info->in_exception_value) {
            in_exception_value_711=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 711, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value550=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMethodCallNode_finalize;
            _inf_value2->clone=(void*)sMethodCallNode_clone;
            _inf_value2->compile=(void*)sMethodCallNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMethodCallNode_terminated;
            _inf_value2->kind=(void*)sMethodCallNode_kind;
            new_node_712=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            come_call_finalizer3(__right_value550,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_714=node_compile(new_node_712,info);
            if(            !Value_714) {
                __result_obj__382 = (_Bool)0;
                ((new_node_712) ? new_node_712 = come_decrement_ref_count2(new_node_712, ((struct sNode*)new_node_712)->finalize, ((struct sNode*)new_node_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__382;
            }
            else {
            }
            info->in_exception_value=in_exception_value_711;
            __result_obj__383 = (_Bool)1;
            ((new_node_712) ? new_node_712 = come_decrement_ref_count2(new_node_712, ((struct sNode*)new_node_712)->finalize, ((struct sNode*)new_node_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__383;
            ((new_node_712) ? new_node_712 = come_decrement_ref_count2(new_node_712, ((struct sNode*)new_node_712)->finalize, ((struct sNode*)new_node_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        result_type_710->mException&&!info->in_exception_value) {
            in_exception_value_715=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 723, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value553=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMethodCallNode_finalize;
            _inf_value3->clone=(void*)sMethodCallNode_clone;
            _inf_value3->compile=(void*)sMethodCallNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMethodCallNode_terminated;
            _inf_value3->kind=(void*)sMethodCallNode_kind;
            new_node_716=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            come_call_finalizer3(__right_value553,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_717=node_compile(new_node_716,info);
            if(            !Value_717) {
                __result_obj__384 = (_Bool)0;
                ((new_node_716) ? new_node_716 = come_decrement_ref_count2(new_node_716, ((struct sNode*)new_node_716)->finalize, ((struct sNode*)new_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__384;
            }
            else {
            }
            info->in_exception_value=in_exception_value_715;
            __result_obj__385 = (_Bool)1;
            ((new_node_716) ? new_node_716 = come_decrement_ref_count2(new_node_716, ((struct sNode*)new_node_716)->finalize, ((struct sNode*)new_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__385;
            ((new_node_716) ? new_node_716 = come_decrement_ref_count2(new_node_716, ((struct sNode*)new_node_716)->finalize, ((struct sNode*)new_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        result_type_710->mStatic=(_Bool)0;
        result_type2_718=(struct sType*)come_increment_ref_count(solve_generics(result_type_710,info->generics_type,info));
        param_types_719=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 738, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_720=(struct list$1sType$ph*)come_increment_ref_count((fun_679->mParamTypes)),it_721=list$1sType$ph$p_begin((o2_saved_720));        !list$1sType$ph$p_end((o2_saved_720));        it_721=list$1sType$ph$p_next((o2_saved_720))        ){
            if(            it_721==((void*)0)) {
                list$1sType$ph$p_push_back(param_types_719,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_721)));
            }
            else {
                it2_722=(struct sType*)come_increment_ref_count(solve_generics(it_721,info->generics_type,info));
                no_solved_obj_type_723=(struct sType*)come_increment_ref_count(obj_type_585->mNoSolvedGenericsType);
                it3_724=(struct sType*)come_increment_ref_count(solve_generics(it_721,no_solved_obj_type_723,info));
                any_type_725=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_724)));
                list$1sType$ph$p_push_back(param_types_719,(struct sType*)come_increment_ref_count(it2_722));
                come_call_finalizer3(it2_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_obj_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(it3_724,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(any_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_720,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        type_checking_param_types_726=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_719));
        if(        generics_fun_677) {
            n_727=0;
            for(            o2_saved_728=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_677->mParamTypes)),it_729=list$1sType$ph$p_begin((o2_saved_728));            !list$1sType$ph$p_end((o2_saved_728));            it_729=list$1sType$ph$p_next((o2_saved_728))            ){
                if(                it_729==((void*)0)) {
                }
                else {
                    no_solved_obj_type_730=(struct sType*)come_increment_ref_count(obj_type_585->mNoSolvedGenericsType);
                    it3_731=(struct sType*)come_increment_ref_count(solve_generics(it_729,no_solved_obj_type_730,info));
                    any_type_732=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_731)));
                    if(                    (_if_conditional8=(string_operator_equals(((struct sType*)(__right_value566=list$1sType$ph$p_operator_load_element(param_types_719,n_727)))->mClass->mName,"void")&&((struct sType*)(__right_value567=list$1sType$ph$p_operator_load_element(param_types_719,n_727)))->mPointerNum==1)),                    come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value567,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional8) {
                        list$1sType$ph$p_replace(type_checking_param_types_726,n_727,(struct sType*)come_increment_ref_count(any_type_732));
                    }
                    come_call_finalizer3(no_solved_obj_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(it3_731,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(any_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                n_727++;
            }
            come_call_finalizer3(o2_saved_728,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_params_733=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 777, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        i_734=0;        i_734<list$1sType$ph$p_length(fun_679->mParamTypes)-(((method_block_577)?(2):(0)));        i_734++        ){
            list$1CVALUE$ph$p_add(come_params_733,((void*)0));
        }
        first_param_738=(_Bool)1;
        for(        o2_saved_739=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_575)),it_740=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_739));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_739));        it_740=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_739))        ){
            multiple_assign_var23=it_740;
            label_741=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_742=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            first_param_738) {
                first_param_738=(_Bool)0;
            }
            else if(            label_741) {
                n_743=0;
                for(                o2_saved_744=(struct list$1char$ph*)come_increment_ref_count((fun_679->mParamNames)),it_747=list$1char$ph$p_begin((o2_saved_744));                !list$1char$ph$p_end((o2_saved_744));                it_747=list$1char$ph$p_next((o2_saved_744))                ){
                    if(                    string_operator_equals(label_741,it_747)) {
                        break;
                    }
                    n_743++;
                }
                come_call_finalizer3(o2_saved_744,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                Value_750=node_compile(node_742,info);
                if(                !Value_750) {
                    __result_obj__393 = (_Bool)0;
                    (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__393;
                }
                else {
                }
                come_value_751=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional9=(((struct sType*)(__right_value574=list$1sType$ph$p_operator_load_element(param_types_719,n_743))))),                come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    multiple_assign_var24=((struct tuple2$2bool$char$ph*)(__right_value579=check_assign_type(((char*)(__right_value577=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value575=string_to_string(fun_name_574))),((char*)(__right_value576=int_to_string(n_743)))))),((struct sType*)(__right_value578=list$1sType$ph$p_operator_load_element(type_checking_param_types_726,n_743))),come_value_751->type,come_value_751,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_6_752=multiple_assign_var24->v1;
                    Err_753=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                    if(                    (_if_conditional10=(Err_753)),                    (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value579,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional10) {
                        __result_obj__394 = (_Bool)1;
                        (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__394;
                    }
                    else {
                    }
                    (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional11=(((struct sType*)(__right_value580=list$1sType$ph$p_operator_load_element(param_types_719,n_743)))&&((struct sType*)(__right_value581=list$1sType$ph$p_operator_load_element(param_types_719,n_743)))->mHeap&&come_value_751->type->mHeap)),                come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    std_move(((struct sType*)(__right_value582=list$1sType$ph$p_operator_load_element(param_types_719,n_743))),come_value_751->type,come_value_751,info,(_Bool)1);
                    come_call_finalizer3(__right_value582,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_733,n_743,(struct CVALUE*)come_increment_ref_count(come_value_751));
                come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        i_759=0;
        for(        o2_saved_760=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_575)),it_761=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_760));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_760));        it_761=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_760))        ){
            multiple_assign_var25=it_761;
            label_762=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            node_763=(struct sNode*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            i_759==0) {
                multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value587=check_assign_type(((char*)(__right_value585=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value583=string_to_string(fun_name_574))),((char*)(__right_value584=int_to_string(i_759)))))),((struct sType*)(__right_value586=list$1sType$ph$p_operator_load_element(type_checking_param_types_726,i_759))),obj_value_584->type,obj_value_584,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_764=multiple_assign_var26->v1;
                Err_765=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                if(                (_if_conditional12=(Err_765)),                (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value586,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value587,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    __result_obj__397 = (_Bool)1;
                    (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_762 = come_decrement_ref_count2(label_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_763) ? node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_760,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__397;
                }
                else {
                }
                if(                (_if_conditional13=(((struct sType*)(__right_value588=list$1sType$ph$p_operator_load_element(param_types_719,i_759)))->mHeap&&obj_value_584->type->mHeap)),                come_call_finalizer3(__right_value588,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    std_move(((struct sType*)(__right_value589=list$1sType$ph$p_operator_load_element(param_types_719,i_759))),obj_value_584->type,obj_value_584,info,(_Bool)1);
                    come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value590=list$1sType$ph$p_operator_load_element(param_types_719,i_759)))->mHeap&&!obj_value_584->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value590,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value592=err_msg(info,"require heap parametor(%s)",((char*)(__right_value591=list$1char$ph$p_operator_load_element(fun_679->mParamNames,i_759))))));
                    come_exception_var_8_769=multiple_assign_var27->v1;
                    Err_770=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                    if(                    (_if_conditional14=(Err_770)),                    (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value592,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        __result_obj__400 = (_Bool)1;
                        (Err_770 = come_decrement_ref_count2(Err_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_762 = come_decrement_ref_count2(label_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_763) ? node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_760,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__400;
                    }
                    else {
                    }
                    (Err_770 = come_decrement_ref_count2(Err_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph$p_replace(come_params_733,i_759,(struct CVALUE*)come_increment_ref_count(obj_value_584));
                i_759++;
                (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_762) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value593=list$1CVALUE$ph$p_operator_load_element(come_params_733,i_759)))==((void*)0))),                    come_call_finalizer3(__right_value593,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        break;
                    }
                    else {
                        i_759++;
                    }
                }
                Value_771=node_compile(node_763,info);
                if(                !Value_771) {
                    __result_obj__401 = (_Bool)0;
                    (label_762 = come_decrement_ref_count2(label_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_763) ? node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_760,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__401;
                }
                else {
                }
                come_value_772=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)(__right_value595=list$1sType$ph$p_operator_load_element(param_types_719,i_759))))),                come_call_finalizer3(__right_value595,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value600=check_assign_type(((char*)(__right_value598=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value596=string_to_string(fun_name_574))),((char*)(__right_value597=int_to_string(i_759)))))),((struct sType*)(__right_value599=list$1sType$ph$p_operator_load_element(type_checking_param_types_726,i_759))),come_value_772->type,come_value_772,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_9_773=multiple_assign_var28->v1;
                    Err_774=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    if(                    (_if_conditional17=(Err_774)),                    (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value600,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional17) {
                        __result_obj__402 = (_Bool)1;
                        (Err_774 = come_decrement_ref_count2(Err_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_772,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_762 = come_decrement_ref_count2(label_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_763) ? node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_760,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__402;
                    }
                    else {
                    }
                    (Err_774 = come_decrement_ref_count2(Err_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional18=(((struct sType*)(__right_value601=list$1sType$ph$p_operator_load_element(param_types_719,i_759)))&&((struct sType*)(__right_value602=list$1sType$ph$p_operator_load_element(param_types_719,i_759)))->mHeap&&come_value_772->type->mHeap)),                come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value602,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    std_move(((struct sType*)(__right_value603=list$1sType$ph$p_operator_load_element(param_types_719,i_759))),come_value_772->type,come_value_772,info,(_Bool)1);
                    come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_733,i_759,(struct CVALUE*)come_increment_ref_count(come_value_772));
                i_759++;
                come_call_finalizer3(come_value_772,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_762 = come_decrement_ref_count2(label_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_763) ? node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_760,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional19=(((struct CVALUE*)(__right_value604=list$1CVALUE$ph$p_operator_load_element(come_params_733,i_759)))==((void*)0))),            come_call_finalizer3(__right_value604,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                break;
            }
            else {
                i_759++;
            }
        }
        obj_array_type_775=obj_type_585->mOriginalLoadVarType;
        if(        obj_array_type_775&&list$1sNode$ph$p_length(obj_array_type_775->mArrayNum)>0) {
            array_method_name_776=(char*)come_increment_ref_count(create_method_name(obj_array_type_775,(_Bool)0,fun_name_574,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_678,array_method_name_776)) {
                if(                string_operator_equals(fun_name_574,"to_pointer")) {
                    buf_777=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 888, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_778=0;
                    for(                    o2_saved_779=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_775->mArrayNum)),it_782=list$1sNode$ph$p_begin((o2_saved_779));                    !list$1sNode$ph$p_end((o2_saved_779));                    it_782=list$1sNode$ph$p_next((o2_saved_779))                    ){
                        Value_785=node_compile(it_782,info);
                        if(                        !Value_785) {
                            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value608=err_msg(info,"invalid array num")));
                            come_exception_var_10_786=multiple_assign_var29->v1;
                            Err_787=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional20=(Err_787)),                            come_call_finalizer3(__right_value608,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional20) {
                                __result_obj__409 = (_Bool)1;
                                (Err_787 = come_decrement_ref_count2(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_779,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_777,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_776 = come_decrement_ref_count2(array_method_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__409;
                            }
                            else {
                            }
                            (Err_787 = come_decrement_ref_count2(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_788=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_777,"%s",come_value_788->c_value);
                        if(                        i_778!=list$1sNode$ph$p_length(obj_array_type_775->mArrayNum)-1) {
                            buffer_append_str(buf_777,"*");
                        }
                        i_778++;
                        come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_779,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_789=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 908, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj121=come_value_789->c_value;
                    come_value_789->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_777));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_789->var=((void*)0);
                    __dec_obj122=come_value_789->type;
                    come_value_789->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 912, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_733,1,(struct CVALUE*)come_increment_ref_count(come_value_789));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_575,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 915, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_777,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_789,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_574,"length")) {
                    buf_793=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 918, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_794=0;
                    for(                    o2_saved_795=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_775->mArrayNum)),it_796=list$1sNode$ph$p_begin((o2_saved_795));                    !list$1sNode$ph$p_end((o2_saved_795));                    it_796=list$1sNode$ph$p_next((o2_saved_795))                    ){
                        Value_797=node_compile(it_796,info);
                        if(                        !Value_797) {
                            multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value624=err_msg(info,"invalid array num")));
                            come_exception_var_11_798=multiple_assign_var30->v1;
                            Err_799=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional21=(Err_799)),                            come_call_finalizer3(__right_value624,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional21) {
                                __result_obj__411 = (_Bool)1;
                                (Err_799 = come_decrement_ref_count2(Err_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_795,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_776 = come_decrement_ref_count2(array_method_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__411;
                            }
                            else {
                            }
                            (Err_799 = come_decrement_ref_count2(Err_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_800=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_793,"%s",come_value_800->c_value);
                        if(                        i_794!=list$1sNode$ph$p_length(obj_array_type_775->mArrayNum)-1) {
                            buffer_append_str(buf_793,"*");
                        }
                        i_794++;
                        come_call_finalizer3(come_value_800,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_795,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_801=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 937, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj126=come_value_801->c_value;
                    come_value_801->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_793));
                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_801->var=((void*)0);
                    __dec_obj127=come_value_801->type;
                    come_value_801->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 941, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_733,1,(struct CVALUE*)come_increment_ref_count(come_value_801));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_575,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 944, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_801,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_574,"to_buffer")) {
                    buf_802=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 947, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_803=0;
                    for(                    o2_saved_804=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_775->mArrayNum)),it_805=list$1sNode$ph$p_begin((o2_saved_804));                    !list$1sNode$ph$p_end((o2_saved_804));                    it_805=list$1sNode$ph$p_next((o2_saved_804))                    ){
                        Value_806=node_compile(it_805,info);
                        if(                        !Value_806) {
                            multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value637=err_msg(info,"invalid array num")));
                            come_exception_var_12_807=multiple_assign_var31->v1;
                            Err_808=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                            if(                            (_if_conditional22=(Err_808)),                            come_call_finalizer3(__right_value637,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional22) {
                                __result_obj__412 = (_Bool)1;
                                (Err_808 = come_decrement_ref_count2(Err_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_804,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_802,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_776 = come_decrement_ref_count2(array_method_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__412;
                            }
                            else {
                            }
                            (Err_808 = come_decrement_ref_count2(Err_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_809=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_802,"%s",come_value_809->c_value);
                        if(                        i_803!=list$1sNode$ph$p_length(obj_array_type_775->mArrayNum)-1) {
                            buffer_append_str(buf_802,"*");
                        }
                        i_803++;
                        come_call_finalizer3(come_value_809,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_804,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_810=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 966, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj128=come_value_810->c_value;
                    come_value_810->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_802));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_810->var=((void*)0);
                    __dec_obj129=come_value_810->type;
                    come_value_810->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 970, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_733,1,(struct CVALUE*)come_increment_ref_count(come_value_810));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_575,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 973, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_802,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_810,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_574,"to_list")) {
                    buf_811=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 976, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_812=0;
                    for(                    o2_saved_813=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_775->mArrayNum)),it_814=list$1sNode$ph$p_begin((o2_saved_813));                    !list$1sNode$ph$p_end((o2_saved_813));                    it_814=list$1sNode$ph$p_next((o2_saved_813))                    ){
                        Value_815=node_compile(it_814,info);
                        if(                        !Value_815) {
                            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value650=err_msg(info,"invalid array num")));
                            come_exception_var_13_816=multiple_assign_var32->v1;
                            Err_817=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                            if(                            (_if_conditional23=(Err_817)),                            come_call_finalizer3(__right_value650,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional23) {
                                __result_obj__413 = (_Bool)1;
                                (Err_817 = come_decrement_ref_count2(Err_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_813,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_811,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_776 = come_decrement_ref_count2(array_method_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__413;
                            }
                            else {
                            }
                            (Err_817 = come_decrement_ref_count2(Err_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_818=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_811,"%s",come_value_818->c_value);
                        if(                        i_812!=list$1sNode$ph$p_length(obj_array_type_775->mArrayNum)-1) {
                            buffer_append_str(buf_811,"*");
                        }
                        i_812++;
                        come_call_finalizer3(come_value_818,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_813,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_819=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 995, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj130=come_value_819->c_value;
                    come_value_819->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_811));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_819->var=((void*)0);
                    __dec_obj131=come_value_819->type;
                    come_value_819->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 999, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_733,1,(struct CVALUE*)come_increment_ref_count(come_value_819));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_575,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1002, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_811,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_819,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_574,"to_vector")) {
                    buf_820=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1005, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_821=0;
                    for(                    o2_saved_822=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_775->mArrayNum)),it_823=list$1sNode$ph$p_begin((o2_saved_822));                    !list$1sNode$ph$p_end((o2_saved_822));                    it_823=list$1sNode$ph$p_next((o2_saved_822))                    ){
                        Value_824=node_compile(it_823,info);
                        if(                        !Value_824) {
                            multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value663=err_msg(info,"invalid array num")));
                            come_exception_var_14_825=multiple_assign_var33->v1;
                            Err_826=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                            if(                            (_if_conditional24=(Err_826)),                            come_call_finalizer3(__right_value663,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional24) {
                                __result_obj__414 = (_Bool)1;
                                (Err_826 = come_decrement_ref_count2(Err_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_822,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_776 = come_decrement_ref_count2(array_method_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__414;
                            }
                            else {
                            }
                            (Err_826 = come_decrement_ref_count2(Err_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_827=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_820,"%s",come_value_827->c_value);
                        if(                        i_821!=list$1sNode$ph$p_length(obj_array_type_775->mArrayNum)-1) {
                            buffer_append_str(buf_820,"*");
                        }
                        i_821++;
                        come_call_finalizer3(come_value_827,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_822,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_828=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1024, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj132=come_value_828->c_value;
                    come_value_828->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_820));
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_828->var=((void*)0);
                    __dec_obj133=come_value_828->type;
                    come_value_828->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1028, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_733,1,(struct CVALUE*)come_increment_ref_count(come_value_828));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_575,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1031, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_828,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (array_method_name_776 = come_decrement_ref_count2(array_method_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2char$phsNode$ph$ph$p_length(params_575)<list$1sType$ph$p_length(fun_679->mParamTypes)+(((method_block_577)?(-2):(0)))) {
            for(            ;            i_759<list$1sType$ph$p_length(fun_679->mParamTypes)+(((method_block_577)?(-2):(0)));            i_759++            ){
                default_param_829=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value674=list$1char$ph$p_operator_load_element(fun_679->mParamDefaultParametors,i_759)))));
                (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_830=((char*)(__right_value676=list$1char$ph$p_operator_load_element(fun_679->mParamNames,i_759)));
                (__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional25=(default_param_829&&string_operator_not_equals(default_param_829,"")&&((struct CVALUE*)(__right_value677=list$1CVALUE$ph$p_operator_load_element(come_params_733,i_759)))==((void*)0))),                come_call_finalizer3(__right_value677,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    source_831=(struct buffer*)come_increment_ref_count(info->source);
                    p_832=info->p;
                    head_833=info->head;
                    sline_834=info->sline;
                    __dec_obj134=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_829));
                    come_call_finalizer3(__dec_obj134,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_835=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_836=node_compile(node_835,info);
                    if(                    !Value_836) {
                        __result_obj__415 = (_Bool)0;
                        come_call_finalizer3(source_831,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_835) ? node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_829 = come_decrement_ref_count2(default_param_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__415;
                    }
                    else {
                    }
                    __dec_obj135=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_831);
                    come_call_finalizer3(__dec_obj135,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_832;
                    info->head=head_833;
                    info->sline=sline_834;
                    come_value_837=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional26=(((struct sType*)(__right_value681=list$1sType$ph$p_operator_load_element(param_types_719,i_759))))),                    come_call_finalizer3(__right_value681,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        multiple_assign_var34=((struct tuple2$2bool$char$ph*)(__right_value686=check_assign_type(((char*)(__right_value684=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value682=string_to_string(fun_name_574))),((char*)(__right_value683=int_to_string(i_759)))))),((struct sType*)(__right_value685=list$1sType$ph$p_operator_load_element(type_checking_param_types_726,i_759))),come_value_837->type,come_value_837,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_15_838=multiple_assign_var34->v1;
                        Err_839=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                        if(                        (_if_conditional27=(Err_839)),                        (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value685,sType_finalize, 0, 1, 0, 0, (void*)0),
                        come_call_finalizer3(__right_value686,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional27) {
                            __result_obj__416 = (_Bool)1;
                            (Err_839 = come_decrement_ref_count2(Err_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(source_831,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            ((node_835) ? node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(come_value_837,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            (default_param_829 = come_decrement_ref_count2(default_param_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__416;
                        }
                        else {
                        }
                        (Err_839 = come_decrement_ref_count2(Err_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional28=(((struct sType*)(__right_value687=list$1sType$ph$p_operator_load_element(param_types_719,i_759)))&&((struct sType*)(__right_value688=list$1sType$ph$p_operator_load_element(param_types_719,i_759)))->mHeap&&come_value_837->type->mHeap)),                    come_call_finalizer3(__right_value687,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional28) {
                        std_move(((struct sType*)(__right_value689=list$1sType$ph$p_operator_load_element(param_types_719,i_759))),come_value_837->type,come_value_837,info,(_Bool)1);
                        come_call_finalizer3(__right_value689,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUE$ph$p_replace(come_params_733,i_759,(struct CVALUE*)come_increment_ref_count(come_value_837));
                    come_call_finalizer3(source_831,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_835) ? node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_837,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional29=(((struct CVALUE*)(__right_value690=list$1CVALUE$ph$p_operator_load_element(come_params_733,i_759)))==((void*)0))),                    come_call_finalizer3(__right_value690,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional29) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value691=err_msg(info,"require parametor(%s) %d",fun_679->mName,i_759)));
                        come_exception_var_16_840=multiple_assign_var35->v1;
                        Err_841=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        if(                        (_if_conditional30=(Err_841)),                        come_call_finalizer3(__right_value691,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional30) {
                            __result_obj__417 = (_Bool)1;
                            (Err_841 = come_decrement_ref_count2(Err_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_829 = come_decrement_ref_count2(default_param_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__417;
                        }
                        else {
                        }
                        (Err_841 = come_decrement_ref_count2(Err_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_829 = come_decrement_ref_count2(default_param_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_577) {
            if(            !compile_method_block(method_block_577,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_733),fun_679,fun_name_574,method_block_sline_578,info,(_Bool)0)) {
                __result_obj__418 = (_Bool)0;
                (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__418;
            }
        }
        buf_842=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1090, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_842,generics_fun_name_678);
        buffer_append_str(buf_842,"(");
        j_843=0;
        for(        o2_saved_844=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_733)),it_845=list$1CVALUE$ph$p_begin((o2_saved_844));        !list$1CVALUE$ph$p_end((o2_saved_844));        it_845=list$1CVALUE$ph$p_next((o2_saved_844))        ){
            buffer_append_str(buf_842,it_845->c_value);
            if(            j_843!=list$1CVALUE$ph$p_length(come_params_733)-1) {
                buffer_append_str(buf_842,",");
            }
            j_843++;
        }
        come_call_finalizer3(o2_saved_844,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_842,")");
        come_value2_846=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1109, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_value2_846->var=((void*)0);
        if(        obj_type_585->mAnyClass&&string_operator_equals(fun_name_574,"get_hash_key")) {
            __dec_obj136=come_value2_846->c_value;
            come_value2_846->c_value=(char*)come_increment_ref_count(xsprintf("come_call_get_hash_key((void*)0, %s)",obj_value_584->c_value));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj137=come_value2_846->type;
            come_value2_846->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1114, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_846->type->mUnsigned=(_Bool)1;
        }
        else if(        obj_type_585->mAnyClass&&string_operator_equals(fun_name_574,"equals")) {
            __dec_obj138=come_value2_846->c_value;
            come_value2_846->c_value=(char*)come_increment_ref_count(xsprintf("come_call_equals((void*)0, %s, %s)",obj_value_584->c_value,((struct CVALUE*)(__right_value700=list$1CVALUE$ph$p_operator_load_element(come_params_733,1)))->c_value));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(__right_value700,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj139=come_value2_846->type;
            come_value2_846->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1119, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_846->type->mUnsigned=(_Bool)1;
        }
        else {
            __dec_obj140=come_value2_846->c_value;
            come_value2_846->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_842));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            generics_any_child_847=(_Bool)0;
            obj_type2_848=(struct sType*)come_increment_ref_count(obj_type_585);
            if(            obj_type2_848->mNoSolvedGenericsType) {
                __dec_obj141=obj_type2_848;
                obj_type2_848=(struct sType*)come_increment_ref_count(obj_type2_848->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_849=(struct list$1sType$ph*)come_increment_ref_count((obj_type2_848->mGenericsTypes)),it_850=list$1sType$ph$p_begin((o2_saved_849));                !list$1sType$ph$p_end((o2_saved_849));                it_850=list$1sType$ph$p_next((o2_saved_849))                ){
                    if(                    it_850->mAnyOriginalType) {
                        generics_any_child_847=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_849,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            result_type2_718->mAnyOriginalType&&generics_fun_677&&obj_type_585->mNoSolvedGenericsType) {
                obj_type2_851=(struct sType*)come_increment_ref_count(obj_type_585->mNoSolvedGenericsType);
                __dec_obj142=result_type2_718;
                result_type2_718=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_677->mResultType,obj_type2_851,info));
                come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj143=come_value2_846->type;
                come_value2_846->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_718));
                come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_846->type->mStatic=(_Bool)0;
                if(                result_type2_718->mHeap) {
                    append_object_to_right_values2(come_value2_846,(struct sType*)come_increment_ref_count(result_type2_718),info,(_Bool)0);
                }
                come_call_finalizer3(obj_type2_851,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            generics_fun_677&&generics_any_child_847) {
                __dec_obj144=result_type2_718;
                result_type2_718=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_677->mResultType,obj_type2_848,info));
                come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj145=come_value2_846->type;
                come_value2_846->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_718));
                come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_846->type->mStatic=(_Bool)0;
                if(                result_type2_718->mHeap) {
                    append_object_to_right_values2(come_value2_846,(struct sType*)come_increment_ref_count(result_type2_718),info,(_Bool)0);
                }
            }
            else {
                __dec_obj146=come_value2_846->type;
                come_value2_846->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_718));
                come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_846->type->mStatic=(_Bool)0;
                if(                result_type2_718->mHeap) {
                    append_object_to_right_values2(come_value2_846,(struct sType*)come_increment_ref_count(result_type2_718),info,(_Bool)0);
                }
            }
            __dec_obj147=come_value2_846->c_value;
            come_value2_846->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_846->c_value,come_value2_846->type,info));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value2_846;
            come_value2_846=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_846),info));
            come_call_finalizer3(__dec_obj148,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(obj_type2_848,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        add_come_last_code(info,"%s",come_value2_846->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_846));
        if(        is_contained_method_generics_types(obj_type_585,info)&&generics_fun_name_678) {
            map$2char$phsFun$ph$p_remove(info->funcs,((char*)(__right_value713=__builtin_string(generics_fun_name_678))));
            (__right_value713 = come_decrement_ref_count2(__right_value713, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj149=info->method_generics_types;
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_582);
        come_call_finalizer3(__dec_obj149,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_679;
        (generics_fun_name_678 = come_decrement_ref_count2(generics_fun_name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_718,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_checking_param_types_726,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_733,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_842,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_846,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__419 = (_Bool)1;
    (fun_name_574 = come_decrement_ref_count2(fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_575,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((obj_576) ? obj_576 = come_decrement_ref_count2(obj_576, ((struct sNode*)obj_576)->finalize, ((struct sNode*)obj_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(method_block_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_580,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_582,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__419;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__337;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_566;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_567;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__342;
    if(    self==((void*)0)) {
        __result_obj__337 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__337,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__337;
    }
    result_566=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_567=self->head;
    while(it_567!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_566,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_567->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_566,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_567->item)));
        }
        it_567=it_567->next;
    }
    __result_obj__342 = come_increment_ref_count(result_566);
    come_call_finalizer3(result_566,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__342,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__342;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_564;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_565;
    it_564=self->head;
    while(it_564!=((void*)0)) {
        prev_it_565=it_564;
        it_564=it_564->next;
        come_call_finalizer3(prev_it_565,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__338;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__338 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__338,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__338;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value431 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_568;
struct tuple2$2char$phsNode$ph* __dec_obj83;
void* __right_value432 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_569;
struct tuple2$2char$phsNode$ph* __dec_obj84;
void* __right_value433 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_570;
struct tuple2$2char$phsNode$ph* __dec_obj85;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__339;
    if(    self->len==0) {
        litem_568=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value431=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_568->prev=((void*)0);
        litem_568->next=((void*)0);
        __dec_obj83=litem_568->item;
        litem_568->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_568;
        self->head=litem_568;
    }
    else if(    self->len==1) {
        litem_569=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value432=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_569->prev=self->head;
        litem_569->next=((void*)0);
        __dec_obj84=litem_569->item;
        litem_569->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_569;
        self->head->next=litem_569;
    }
    else {
        litem_570=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value433=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_570->prev=self->tail;
        litem_570->next=((void*)0);
        __dec_obj85=litem_570->item;
        litem_570->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_570;
        self->tail=litem_570;
    }
    self->len++;
    __result_obj__339 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__339;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__340;
void* __right_value434 = (void*)0;
struct tuple2$2char$phsNode$ph* result_571;
void* __right_value435 = (void*)0;
char* __dec_obj86;
void* __right_value436 = (void*)0;
struct sNode* __dec_obj87;
struct tuple2$2char$phsNode$ph* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__340,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__340;
    }
    result_571=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj86=result_571->v1;
        result_571->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj87=result_571->v2;
        result_571->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__341 = come_increment_ref_count(result_571);
    come_call_finalizer3(result_571,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__341,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_572;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_573;
    it_572=self->head;
    while(it_572!=((void*)0)) {
        prev_it_573=it_572;
        it_572=it_572->next;
        come_call_finalizer3(prev_it_573,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__346;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__346 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_600;
int i_601;
struct CVALUE* __result_obj__348;
struct CVALUE* default_value_602;
struct CVALUE* __result_obj__349;
default_value_602 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_600=self->head;
    i_601=0;
    while(it_600!=((void*)0)) {
        if(        position==i_601) {
            __result_obj__348 = come_increment_ref_count(it_600->item);
            come_call_finalizer3(__result_obj__348,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__348;
        }
        it_600=it_600->next;
        i_601++;
    }
    memset(&default_value_602,0,sizeof(struct CVALUE*));
    __result_obj__349 = come_increment_ref_count(default_value_602);
    come_call_finalizer3(default_value_602,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__349,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__349;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_615;
struct tuple2$2char$phsNode$ph* __result_obj__350;
struct tuple2$2char$phsNode$ph* __result_obj__351;
struct tuple2$2char$phsNode$ph* result_616;
struct tuple2$2char$phsNode$ph* __result_obj__352;
result_615 = (void*)0;
result_616 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_615,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__350 = result_615;
        return __result_obj__350;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__351 = self->it->item;
        return __result_obj__351;
    }
    memset(&result_616,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__352 = result_616;
    return __result_obj__352;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_618;
struct tuple2$2char$phsNode$ph* __result_obj__353;
struct tuple2$2char$phsNode$ph* __result_obj__354;
struct tuple2$2char$phsNode$ph* result_619;
struct tuple2$2char$phsNode$ph* __result_obj__355;
result_618 = (void*)0;
result_619 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_618,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__353 = result_618;
        return __result_obj__353;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__354 = self->it->item;
        return __result_obj__354;
    }
    memset(&result_619,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__355 = result_619;
    return __result_obj__355;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_649;
struct tuple2$2char$phsType$ph* __result_obj__358;
struct tuple2$2char$phsType$ph* __result_obj__359;
struct tuple2$2char$phsType$ph* result_650;
struct tuple2$2char$phsType$ph* __result_obj__360;
result_649 = (void*)0;
result_650 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_649,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__358 = result_649;
        return __result_obj__358;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__359 = self->it->item;
        return __result_obj__359;
    }
    memset(&result_650,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__360 = result_650;
    return __result_obj__360;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_652;
struct tuple2$2char$phsType$ph* __result_obj__361;
struct tuple2$2char$phsType$ph* __result_obj__362;
struct tuple2$2char$phsType$ph* result_653;
struct tuple2$2char$phsType$ph* __result_obj__363;
result_652 = (void*)0;
result_653 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_652,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__361 = result_652;
        return __result_obj__361;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__362 = self->it->item;
        return __result_obj__362;
    }
    memset(&result_653,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__363 = result_653;
    return __result_obj__363;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_670;
struct CVALUE* __result_obj__366;
struct CVALUE* __result_obj__367;
struct CVALUE* result_671;
struct CVALUE* __result_obj__368;
result_670 = (void*)0;
result_671 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_670,0,sizeof(struct CVALUE*));
        __result_obj__366 = result_670;
        return __result_obj__366;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__367 = self->it->item;
        return __result_obj__367;
    }
    memset(&result_671,0,sizeof(struct CVALUE*));
    __result_obj__368 = result_671;
    return __result_obj__368;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_673;
struct CVALUE* __result_obj__369;
struct CVALUE* __result_obj__370;
struct CVALUE* result_674;
struct CVALUE* __result_obj__371;
result_673 = (void*)0;
result_674 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_673,0,sizeof(struct CVALUE*));
        __result_obj__369 = result_673;
        return __result_obj__369;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__370 = self->it->item;
        return __result_obj__370;
    }
    memset(&result_674,0,sizeof(struct CVALUE*));
    __result_obj__371 = result_674;
    return __result_obj__371;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_691;
unsigned int hash_692;
unsigned int it_693;
struct sFun* __result_obj__372;
struct sFun* __result_obj__373;
struct sFun* __result_obj__374;
struct sFun* __result_obj__375;
default_value_691 = (void*)0;
    memset(&default_value_691,0,sizeof(struct sFun*));
    hash_692=string_get_hash_key(((char*)key))%self->size;
    it_693=hash_692;
    while((_Bool)1) {
        if(        self->item_existance[it_693]) {
            if(            string_equals(self->keys[it_693],key)) {
                __result_obj__372 = come_increment_ref_count(self->items[it_693]);
                come_call_finalizer3(default_value_691,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__372,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__372;
            }
            it_693++;
            if(            it_693>=self->size) {
                it_693=0;
            }
            else if(            it_693==hash_692) {
                __result_obj__373 = come_increment_ref_count(default_value_691);
                come_call_finalizer3(default_value_691,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__373,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__373;
            }
        }
        else {
            __result_obj__374 = come_increment_ref_count(default_value_691);
            come_call_finalizer3(default_value_691,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__374,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__374;
        }
    }
    __result_obj__375 = come_increment_ref_count(default_value_691);
    come_call_finalizer3(default_value_691,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__375,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__375;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__380;
void* __right_value543 = (void*)0;
struct sMethodCallNode* result_713;
void* __right_value544 = (void*)0;
char* __dec_obj111;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj112;
void* __right_value546 = (void*)0;
char* __dec_obj113;
void* __right_value547 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj114;
void* __right_value548 = (void*)0;
struct buffer* __dec_obj115;
void* __right_value549 = (void*)0;
struct list$1sType$ph* __dec_obj116;
struct sMethodCallNode* __result_obj__381;
    if(    self==(void*)0) {
        __result_obj__380 = (void*)0;
        return __result_obj__380;
    }
    result_713=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_713->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_713->sname;
        result_713->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_713->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj112=result_713->obj;
        result_713->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj113=result_713->fun_name;
        result_713->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj114=result_713->params;
        result_713->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj114,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj115=result_713->method_block;
        result_713->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj115,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_713->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj116=result_713->method_generics_types;
        result_713->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj116,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_713->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_713->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_713->fun=self->fun;
    }
    __result_obj__381 = result_713;
    come_call_finalizer3(result_713,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__381;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value570 = (void*)0;
struct list_item$1CVALUE$ph* litem_735;
struct CVALUE* __dec_obj117;
void* __right_value571 = (void*)0;
struct list_item$1CVALUE$ph* litem_736;
struct CVALUE* __dec_obj118;
void* __right_value572 = (void*)0;
struct list_item$1CVALUE$ph* litem_737;
struct CVALUE* __dec_obj119;
struct list$1CVALUE$ph* __result_obj__386;
    if(    self->len==0) {
        litem_735=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value570=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_735->prev=((void*)0);
        litem_735->next=((void*)0);
        __dec_obj117=litem_735->item;
        litem_735->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_735;
        self->head=litem_735;
    }
    else if(    self->len==1) {
        litem_736=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value571=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_736->prev=self->head;
        litem_736->next=((void*)0);
        __dec_obj118=litem_736->item;
        litem_736->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_736;
        self->head->next=litem_736;
    }
    else {
        litem_737=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value572=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_737->prev=self->tail;
        litem_737->next=((void*)0);
        __dec_obj119=litem_737->item;
        litem_737->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_737;
        self->tail=litem_737;
    }
    self->len++;
    __result_obj__386 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__386;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_745;
char* __result_obj__387;
char* __result_obj__388;
char* result_746;
char* __result_obj__389;
result_745 = (void*)0;
result_746 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_745,0,sizeof(char*));
        __result_obj__387 = result_745;
        return __result_obj__387;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__388 = self->it->item;
        return __result_obj__388;
    }
    memset(&result_746,0,sizeof(char*));
    __result_obj__389 = result_746;
    return __result_obj__389;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_748;
char* __result_obj__390;
char* __result_obj__391;
char* result_749;
char* __result_obj__392;
result_748 = (void*)0;
result_749 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_748,0,sizeof(char*));
        __result_obj__390 = result_748;
        return __result_obj__390;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__391 = self->it->item;
        return __result_obj__391;
    }
    memset(&result_749,0,sizeof(char*));
    __result_obj__392 = result_749;
    return __result_obj__392;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_754;
int i_755;
struct CVALUE* default_value_756;
struct list$1CVALUE$ph* __result_obj__395;
struct list_item$1CVALUE$ph* it_757;
int i_758;
struct CVALUE* __dec_obj120;
struct list$1CVALUE$ph* __result_obj__396;
default_value_756 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_754=self->len;
        for(        i_755=0;        i_755<position-len_754;        i_755++        ){
            memset(&default_value_756,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_756));
            come_call_finalizer3(default_value_756,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__395 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__395;
    }
    it_757=self->head;
    i_758=0;
    while(it_757!=((void*)0)) {
        if(        position==i_758) {
            __dec_obj120=it_757->item;
            it_757->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_757=it_757->next;
        i_758++;
    }
    __result_obj__396 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__396;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_766;
int i_767;
char* __result_obj__398;
char* default_value_768;
char* __result_obj__399;
default_value_768 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_766=self->head;
    i_767=0;
    while(it_766!=((void*)0)) {
        if(        position==i_767) {
            __result_obj__398 = come_increment_ref_count(it_766->item);
            (__result_obj__398 = come_decrement_ref_count2(__result_obj__398, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__398;
        }
        it_766=it_766->next;
        i_767++;
    }
    memset(&default_value_768,0,sizeof(char*));
    __result_obj__399 = come_increment_ref_count(default_value_768);
    (default_value_768 = come_decrement_ref_count2(default_value_768, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__399 = come_decrement_ref_count2(__result_obj__399, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__399;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_780;
struct sNode* __result_obj__403;
struct sNode* __result_obj__404;
struct sNode* result_781;
struct sNode* __result_obj__405;
result_780 = (void*)0;
result_781 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_780,0,sizeof(struct sNode*));
        __result_obj__403 = result_780;
        return __result_obj__403;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__404 = self->it->item;
        return __result_obj__404;
    }
    memset(&result_781,0,sizeof(struct sNode*));
    __result_obj__405 = result_781;
    return __result_obj__405;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_783;
struct sNode* __result_obj__406;
struct sNode* __result_obj__407;
struct sNode* result_784;
struct sNode* __result_obj__408;
result_783 = (void*)0;
result_784 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_783,0,sizeof(struct sNode*));
        __result_obj__406 = result_783;
        return __result_obj__406;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__407 = self->it->item;
        return __result_obj__407;
    }
    memset(&result_784,0,sizeof(struct sNode*));
    __result_obj__408 = result_784;
    return __result_obj__408;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value616 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_790;
struct tuple2$2char$phsNode$ph* __dec_obj123;
void* __right_value617 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_791;
struct tuple2$2char$phsNode$ph* __dec_obj124;
void* __right_value618 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_792;
struct tuple2$2char$phsNode$ph* __dec_obj125;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__410;
    if(    self->len==0) {
        litem_790=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value616=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_790->prev=((void*)0);
        litem_790->next=((void*)0);
        __dec_obj123=litem_790->item;
        litem_790->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_790;
        self->head=litem_790;
    }
    else if(    self->len==1) {
        litem_791=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value617=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_791->prev=self->head;
        litem_791->next=((void*)0);
        __dec_obj124=litem_791->item;
        litem_791->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_791;
        self->head->next=litem_791;
    }
    else {
        litem_792=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value618=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_792->prev=self->tail;
        litem_792->next=((void*)0);
        __dec_obj125=litem_792->item;
        litem_792->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_792;
        self->tail=litem_792;
    }
    self->len++;
    __result_obj__410 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__410;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value716 = (void*)0;
struct sNode* node_852;
void* __right_value717 = (void*)0;
struct sNode* __dec_obj150;
struct sNode* __result_obj__420;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1191, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value715=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1191, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMethodCallNode_finalize;
    _inf_value4->clone=(void*)sMethodCallNode_clone;
    _inf_value4->compile=(void*)sMethodCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMethodCallNode_terminated;
    _inf_value4->kind=(void*)sMethodCallNode_kind;
    node_852=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value715,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj150=node_852;
    node_852=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_852),info));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__420 = come_increment_ref_count(node_852);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_852) ? node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__420) ? __result_obj__420 = come_decrement_ref_count2(__result_obj__420, ((struct sNode*)__result_obj__420)->finalize, ((struct sNode*)__result_obj__420)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__420;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_853;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
_Bool parse_method_generics_type_855;
char* p_856;
int sline_857;
void* __right_value723 = (void*)0;
char* word_858;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1sType$ph* method_generics_types_859;
void* __right_value726 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_860=0;
char* Err_861=0;
void* __right_value727 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_862=0;
char* name_863=0;
_Bool err_864=0;
void* __right_value728 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c7_865=0;
char* Err_866=0;
void* __right_value729 = (void*)0;
char* p_867;
int sline_868;
_Bool err_flag_869;
void* __right_value730 = (void*)0;
char* label_870;
void* __right_value731 = (void*)0;
char* __dec_obj153;
char* __dec_obj154;
_Bool no_comma_871;
_Bool in_fun_param_872;
void* __right_value732 = (void*)0;
struct sNode* node_873;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj155;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct buffer* method_block_874;
int method_block_sline_875;
char* head_876;
void* __right_value736 = (void*)0;
char* tail_877;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct buffer* __dec_obj156;
int len_878;
void* __right_value739 = (void*)0;
char* mem_879;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value743 = (void*)0;
struct sNode* node_880;
void* __right_value744 = (void*)0;
struct sNode* __dec_obj157;
struct sNode* __result_obj__422;
    params_853=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1200, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_853,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1201, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_855=(_Bool)0;
    {
        p_856=info->p;
        sline_857=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_858=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_858,info)) {
                    parse_method_generics_type_855=(_Bool)1;
                }
                (word_858 = come_decrement_ref_count2(word_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_856;
        info->sline=sline_857;
    }
    method_generics_types_859=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 1231, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    parse_method_generics_type_855&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value726=err_msg(info,"unexpected source end")));
                come_exception_var_c6_860=multiple_assign_var36->v1;
                Err_861=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                ((Err_861)?(puts(Err_861),exit(0)):(0));
                come_call_finalizer3(__right_value726,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_861 = come_decrement_ref_count2(Err_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value727=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_862=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
                name_863=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                err_864=multiple_assign_var37->v3;
                come_call_finalizer3(__right_value727,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_864) {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value728=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c7_865=multiple_assign_var38->v1;
                    Err_866=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_866)?(puts(Err_866),exit(0)):(0));
                    come_call_finalizer3(__right_value728,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_866 = come_decrement_ref_count2(Err_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph$p_push_back(method_generics_types_859,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_862)));
                come_call_finalizer3(type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_863 = come_decrement_ref_count2(name_863, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            p_867=info->p;
            sline_868=info->sline;
            err_flag_869=(_Bool)0;
            label_870=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj153=label_870;
                label_870=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_869=(_Bool)1;
            }
            if(            err_flag_869==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj154=label_870;
                label_870=((void*)0);
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_867;
                info->sline=sline_868;
            }
            no_comma_871=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_872=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_873=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj155=node_873;
            node_873=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_873),info));
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_872;
            info->no_comma=no_comma_871;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_853,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1307, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_870),(struct sNode*)come_increment_ref_count(node_873))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_870 = come_decrement_ref_count2(label_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_873) ? node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_870 = come_decrement_ref_count2(label_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_873) ? node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_874=((void*)0);
    method_block_sline_875=0;
    if(    *info->p==123) {
        head_876=info->p;
        method_block_sline_875=info->sline;
        ((char*)(__right_value736=skip_block(info)));
        (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_877=info->p;
        __dec_obj156=method_block_874;
        method_block_874=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1331, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_878=tail_877-head_876;
        mem_879=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_878+1)), "20method.c", 1334, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_879,head_876,len_878);
        mem_879[len_878]=0;
        buffer_append_str(method_block_874,mem_879);
        buffer_append_str(method_block_874,"\n");
        (mem_879 = come_decrement_ref_count2(mem_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1346, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value742=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1346, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_853),method_block_874,method_block_sline_875,method_generics_types_859,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_880=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value742,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj157=node_880;
    node_880=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_880),info));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__422 = come_increment_ref_count(node_880);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_853,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_859,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_874,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_880) ? node_880 = come_decrement_ref_count2(node_880, ((struct sNode*)node_880)->finalize, ((struct sNode*)node_880)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__422) ? __result_obj__422 = come_decrement_ref_count2(__result_obj__422, ((struct sNode*)__result_obj__422)->finalize, ((struct sNode*)__result_obj__422)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__422;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_854;
    result_854=0;
    result_854+=int_get_hash_key(((int)self->v1));
    result_854+=int_get_hash_key(((int)self->v2));
    return result_854;
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
char* __dec_obj151;
struct sNode* __dec_obj152;
struct tuple2$2char$phsNode$ph* __result_obj__421;
    __dec_obj151=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__421 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__421,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__421;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value747 = (void*)0;
struct sNode* __result_obj__423;
void* __right_value748 = (void*)0;
struct sNode* __result_obj__424;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1356, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value746=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1356, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        __result_obj__423 = come_increment_ref_count(((struct sNode*)(__right_value747=_inf_value6)));
        come_call_finalizer3(__right_value746,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value747) ? __right_value747 = come_decrement_ref_count2(__right_value747, ((struct sNode*)__right_value747)->finalize, ((struct sNode*)__right_value747)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__423) ? __result_obj__423 = come_decrement_ref_count2(__result_obj__423, ((struct sNode*)__result_obj__423)->finalize, ((struct sNode*)__result_obj__423)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__423;
    }
    __result_obj__424 = come_increment_ref_count(((struct sNode*)(__right_value748=string_node_v17(buf,head,head_sline,info))));
    ((__right_value748) ? __right_value748 = come_decrement_ref_count2(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__424) ? __result_obj__424 = come_decrement_ref_count2(__result_obj__424, ((struct sNode*)__result_obj__424)->finalize, ((struct sNode*)__result_obj__424)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__424;
}

